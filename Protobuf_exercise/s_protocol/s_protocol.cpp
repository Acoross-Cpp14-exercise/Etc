#include <memory>
#include <map>
#include <iostream>

#include <./s_protocol/s_protocol.h>

namespace acoross {
namespace s_protocol {

typedef bool(*PacketHandler)(const char*, const int);
std::map<kProtocolNum, PacketHandler> handler_map;

static bool PacketHandler_s_version(const char* packet, const int bytes)
{
	s_version msg;
	msg.ParseFromArray(packet, bytes);

	return false;
}

static bool PacketHandler_Test(const char* packet, const int bytes)
{
	using namespace std;

	Test msg;
	msg.ParseFromArray(packet, bytes);

	cout << msg.type_url() << endl;
	cout << msg.value() << endl;

	return false;
}

void Initialize()
{
	handler_map[kProtocolNum::s_version_Type] = PacketHandler_s_version;
	handler_map[kProtocolNum::Test_Type] = PacketHandler_Test;
}

bool HandleMessage(const kProtocolNum pnum, const char* packet, int bytes)
{
	auto iter = handler_map.find(pnum);
	if (iter == handler_map.end())
		return false;

	return iter->second(packet, bytes);
}

}
}
