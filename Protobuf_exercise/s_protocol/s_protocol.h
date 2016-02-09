#ifndef PROTOBUF_EXERCISE_S_PROTOCOL_S_PROTOCOL_H_
#define PROTOBUF_EXERCISE_S_PROTOCOL_S_PROTOCOL_H_

#include <./s_protocol/s_protocol.pb.h>

namespace acoross {
namespace s_protocol {

enum class kProtocolNum : int
{
	s_version_Type,
	Test_Type,
	Test2_Type, 
	PROTOCOL_MAX
};

void Initialize();
bool HandleMessage(const kProtocolNum pnum, const char* packet, int bytes);
}
}
#endif //PROTOBUF_EXERCISE_S_PROTOCOL_S_PROTOCOL_H_