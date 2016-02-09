#include <iostream>
#include <memory>

#include <./s_protocol/s_protocol.pb.h>

int main(int argc, char* argv[])
{
	using namespace std;
	using namespace acoross::s_protocol;

	char buf[100]{ 0, };

	{
		Test t;

		t.set_type_url("hahaha");
		t.set_value("12");

		t.SerializeToArray(buf, 100);
	}
	
	{
		Test t2;

		t2.ParseFromArray(buf, 100);

		cout << t2.type_url() << endl;
		cout << t2.value() << endl;
	}

	return 0;
}