echo "compile start"

cd s_protocol
rem dir

protoc -I=./ --cpp_out=./ s_protocol.proto

rem pause