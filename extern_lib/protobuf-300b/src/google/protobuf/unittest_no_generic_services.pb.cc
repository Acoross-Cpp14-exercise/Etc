// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/unittest_no_generic_services.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "google/protobuf/unittest_no_generic_services.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace google {
namespace protobuf {
namespace no_generic_services_test {

namespace {

const ::google::protobuf::Descriptor* TestMessage_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  TestMessage_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* TestEnum_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_google_2fprotobuf_2funittest_5fno_5fgeneric_5fservices_2eproto() {
  protobuf_AddDesc_google_2fprotobuf_2funittest_5fno_5fgeneric_5fservices_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "google/protobuf/unittest_no_generic_services.proto");
  GOOGLE_CHECK(file != NULL);
  TestMessage_descriptor_ = file->message_type(0);
  static const int TestMessage_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TestMessage, a_),
  };
  TestMessage_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      TestMessage_descriptor_,
      TestMessage::default_instance_,
      TestMessage_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TestMessage, _has_bits_[0]),
      -1,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TestMessage, _extensions_),
      sizeof(TestMessage),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TestMessage, _internal_metadata_),
      -1);
  TestEnum_descriptor_ = file->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_google_2fprotobuf_2funittest_5fno_5fgeneric_5fservices_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      TestMessage_descriptor_, &TestMessage::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_google_2fprotobuf_2funittest_5fno_5fgeneric_5fservices_2eproto() {
  delete TestMessage::default_instance_;
  delete TestMessage_reflection_;
}

void protobuf_AddDesc_google_2fprotobuf_2funittest_5fno_5fgeneric_5fservices_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n2google/protobuf/unittest_no_generic_se"
    "rvices.proto\022(google.protobuf.no_generic"
    "_services_test\"#\n\013TestMessage\022\t\n\001a\030\001 \001(\005"
    "*\t\010\350\007\020\200\200\200\200\002*\023\n\010TestEnum\022\007\n\003FOO\020\0012\202\001\n\013Tes"
    "tService\022s\n\003Foo\0225.google.protobuf.no_gen"
    "eric_services_test.TestMessage\0325.google."
    "protobuf.no_generic_services_test.TestMe"
    "ssage:N\n\016test_extension\0225.google.protobu"
    "f.no_generic_services_test.TestMessage\030\350"
    "\007 \001(\005", 365);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/protobuf/unittest_no_generic_services.proto", &protobuf_RegisterTypes);
  TestMessage::default_instance_ = new TestMessage();
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::google::protobuf::no_generic_services_test::TestMessage::default_instance(),
    1000, 5, false, false);
  TestMessage::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_google_2fprotobuf_2funittest_5fno_5fgeneric_5fservices_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_google_2fprotobuf_2funittest_5fno_5fgeneric_5fservices_2eproto {
  StaticDescriptorInitializer_google_2fprotobuf_2funittest_5fno_5fgeneric_5fservices_2eproto() {
    protobuf_AddDesc_google_2fprotobuf_2funittest_5fno_5fgeneric_5fservices_2eproto();
  }
} static_descriptor_initializer_google_2fprotobuf_2funittest_5fno_5fgeneric_5fservices_2eproto_;
const ::google::protobuf::EnumDescriptor* TestEnum_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return TestEnum_descriptor_;
}
bool TestEnum_IsValid(int value) {
  switch(value) {
    case 1:
      return true;
    default:
      return false;
  }
}


namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#ifndef _MSC_VER
const int TestMessage::kAFieldNumber;
#endif  // !_MSC_VER

TestMessage::TestMessage()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.protobuf.no_generic_services_test.TestMessage)
}

void TestMessage::InitAsDefaultInstance() {
}

TestMessage::TestMessage(const TestMessage& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:google.protobuf.no_generic_services_test.TestMessage)
}

void TestMessage::SharedCtor() {
  _cached_size_ = 0;
  a_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

TestMessage::~TestMessage() {
  // @@protoc_insertion_point(destructor:google.protobuf.no_generic_services_test.TestMessage)
  SharedDtor();
}

void TestMessage::SharedDtor() {
  if (this != default_instance_) {
  }
}

void TestMessage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* TestMessage::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return TestMessage_descriptor_;
}

const TestMessage& TestMessage::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_google_2fprotobuf_2funittest_5fno_5fgeneric_5fservices_2eproto();
  return *default_instance_;
}

TestMessage* TestMessage::default_instance_ = NULL;

TestMessage* TestMessage::New(::google::protobuf::Arena* arena) const {
  TestMessage* n = new TestMessage;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void TestMessage::Clear() {
  _extensions_.Clear();
  a_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool TestMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.protobuf.no_generic_services_test.TestMessage)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 a = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &a_)));
          set_has_a();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        if ((8000u <= tag)) {
          DO_(_extensions_.ParseField(tag, input, default_instance_,
                                      mutable_unknown_fields()));
          continue;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:google.protobuf.no_generic_services_test.TestMessage)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.protobuf.no_generic_services_test.TestMessage)
  return false;
#undef DO_
}

void TestMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.protobuf.no_generic_services_test.TestMessage)
  // optional int32 a = 1;
  if (has_a()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->a(), output);
  }

  // Extension range [1000, 536870912)
  _extensions_.SerializeWithCachedSizes(
      1000, 536870912, output);

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:google.protobuf.no_generic_services_test.TestMessage)
}

::google::protobuf::uint8* TestMessage::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.no_generic_services_test.TestMessage)
  // optional int32 a = 1;
  if (has_a()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->a(), target);
  }

  // Extension range [1000, 536870912)
  target = _extensions_.SerializeWithCachedSizesToArray(
      1000, 536870912, target);

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.no_generic_services_test.TestMessage)
  return target;
}

int TestMessage::ByteSize() const {
  int total_size = 0;

  // optional int32 a = 1;
  if (has_a()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->a());
  }

  total_size += _extensions_.ByteSize();

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void TestMessage::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const TestMessage* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const TestMessage>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void TestMessage::MergeFrom(const TestMessage& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_a()) {
      set_a(from.a());
    }
  }
  _extensions_.MergeFrom(from._extensions_);
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void TestMessage::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TestMessage::CopyFrom(const TestMessage& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TestMessage::IsInitialized() const {


  if (!_extensions_.IsInitialized()) return false;  return true;
}

void TestMessage::Swap(TestMessage* other) {
  if (other == this) return;
  InternalSwap(other);
}
void TestMessage::InternalSwap(TestMessage* other) {
  std::swap(a_, other->a_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
  _extensions_.Swap(&other->_extensions_);
}

::google::protobuf::Metadata TestMessage::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = TestMessage_descriptor_;
  metadata.reflection = TestMessage_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// TestMessage

// optional int32 a = 1;
bool TestMessage::has_a() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void TestMessage::set_has_a() {
  _has_bits_[0] |= 0x00000001u;
}
void TestMessage::clear_has_a() {
  _has_bits_[0] &= ~0x00000001u;
}
void TestMessage::clear_a() {
  a_ = 0;
  clear_has_a();
}
 ::google::protobuf::int32 TestMessage::a() const {
  // @@protoc_insertion_point(field_get:google.protobuf.no_generic_services_test.TestMessage.a)
  return a_;
}
 void TestMessage::set_a(::google::protobuf::int32 value) {
  set_has_a();
  a_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.no_generic_services_test.TestMessage.a)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::no_generic_services_test::TestMessage,
    ::google::protobuf::internal::PrimitiveTypeTraits< ::google::protobuf::int32 >, 5, false >
  test_extension(kTestExtensionFieldNumber, 0);

// @@protoc_insertion_point(namespace_scope)

}  // namespace no_generic_services_test
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
