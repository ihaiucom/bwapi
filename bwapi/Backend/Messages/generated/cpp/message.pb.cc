// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: message.proto

#include "message.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace protobuf_command_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_command_2eproto ::google::protobuf::internal::SCCInfo<10> scc_info_Command;
}  // namespace protobuf_command_2eproto
namespace protobuf_game_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_game_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_FrameUpdate;
}  // namespace protobuf_game_2eproto
namespace protobuf_init_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_init_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_ClientBroadcast;
extern PROTOBUF_INTERNAL_EXPORT_protobuf_init_2eproto ::google::protobuf::internal::SCCInfo<1> scc_info_ClientResolution;
extern PROTOBUF_INTERNAL_EXPORT_protobuf_init_2eproto ::google::protobuf::internal::SCCInfo<1> scc_info_ServerResponse;
}  // namespace protobuf_init_2eproto
namespace bwapi {
namespace message {
class MessageDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Message>
      _instance;
  const ::bwapi::init::ClientBroadcast* initbroadcast_;
  const ::bwapi::init::ServerResponse* initresponse_;
  const ::bwapi::init::ClientResolution* initresolution_;
  const ::bwapi::game::FrameUpdate* frameupdate_;
  const ::bwapi::command::Command* command_;
} _Message_default_instance_;
}  // namespace message
}  // namespace bwapi
namespace protobuf_message_2eproto {
static void InitDefaultsMessage() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::bwapi::message::_Message_default_instance_;
    new (ptr) ::bwapi::message::Message();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::bwapi::message::Message::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<5> scc_info_Message =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 5, InitDefaultsMessage}, {
      &protobuf_init_2eproto::scc_info_ClientBroadcast.base,
      &protobuf_init_2eproto::scc_info_ServerResponse.base,
      &protobuf_init_2eproto::scc_info_ClientResolution.base,
      &protobuf_game_2eproto::scc_info_FrameUpdate.base,
      &protobuf_command_2eproto::scc_info_Command.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_Message.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::bwapi::message::Message, _internal_metadata_),
  ~0u,  // no _extensions_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::bwapi::message::Message, _oneof_case_[0]),
  ~0u,  // no _weak_field_map_
  offsetof(::bwapi::message::MessageDefaultTypeInternal, initbroadcast_),
  offsetof(::bwapi::message::MessageDefaultTypeInternal, initresponse_),
  offsetof(::bwapi::message::MessageDefaultTypeInternal, initresolution_),
  offsetof(::bwapi::message::MessageDefaultTypeInternal, frameupdate_),
  offsetof(::bwapi::message::MessageDefaultTypeInternal, command_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::bwapi::message::Message, msg_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::bwapi::message::Message)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::bwapi::message::_Message_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "message.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\rmessage.proto\022\rbwapi.message\032\ninit.pro"
      "to\032\ngame.proto\032\rcommand.proto\"\216\002\n\007Messag"
      "e\0224\n\rinitBroadcast\030\001 \001(\0132\033.bwapi.init.Cl"
      "ientBroadcastH\000\0222\n\014initResponse\030\002 \001(\0132\032."
      "bwapi.init.ServerResponseH\000\0226\n\016initResol"
      "ution\030\003 \001(\0132\034.bwapi.init.ClientResolutio"
      "nH\000\022/\n\013frameUpdate\030\350\007 \001(\0132\027.bwapi.game.F"
      "rameUpdateH\000\022)\n\007command\030\004 \001(\0132\026.bwapi.co"
      "mmand.CommandH\000B\005\n\003msgb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 350);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "message.proto", &protobuf_RegisterTypes);
  ::protobuf_init_2eproto::AddDescriptors();
  ::protobuf_game_2eproto::AddDescriptors();
  ::protobuf_command_2eproto::AddDescriptors();
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_message_2eproto
namespace bwapi {
namespace message {

// ===================================================================

void Message::InitAsDefaultInstance() {
  ::bwapi::message::_Message_default_instance_.initbroadcast_ = const_cast< ::bwapi::init::ClientBroadcast*>(
      ::bwapi::init::ClientBroadcast::internal_default_instance());
  ::bwapi::message::_Message_default_instance_.initresponse_ = const_cast< ::bwapi::init::ServerResponse*>(
      ::bwapi::init::ServerResponse::internal_default_instance());
  ::bwapi::message::_Message_default_instance_.initresolution_ = const_cast< ::bwapi::init::ClientResolution*>(
      ::bwapi::init::ClientResolution::internal_default_instance());
  ::bwapi::message::_Message_default_instance_.frameupdate_ = const_cast< ::bwapi::game::FrameUpdate*>(
      ::bwapi::game::FrameUpdate::internal_default_instance());
  ::bwapi::message::_Message_default_instance_.command_ = const_cast< ::bwapi::command::Command*>(
      ::bwapi::command::Command::internal_default_instance());
}
void Message::set_allocated_initbroadcast(::bwapi::init::ClientBroadcast* initbroadcast) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  clear_msg();
  if (initbroadcast) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      initbroadcast = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, initbroadcast, submessage_arena);
    }
    set_has_initbroadcast();
    msg_.initbroadcast_ = initbroadcast;
  }
  // @@protoc_insertion_point(field_set_allocated:bwapi.message.Message.initBroadcast)
}
void Message::clear_initbroadcast() {
  if (has_initbroadcast()) {
    delete msg_.initbroadcast_;
    clear_has_msg();
  }
}
void Message::set_allocated_initresponse(::bwapi::init::ServerResponse* initresponse) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  clear_msg();
  if (initresponse) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      initresponse = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, initresponse, submessage_arena);
    }
    set_has_initresponse();
    msg_.initresponse_ = initresponse;
  }
  // @@protoc_insertion_point(field_set_allocated:bwapi.message.Message.initResponse)
}
void Message::clear_initresponse() {
  if (has_initresponse()) {
    delete msg_.initresponse_;
    clear_has_msg();
  }
}
void Message::set_allocated_initresolution(::bwapi::init::ClientResolution* initresolution) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  clear_msg();
  if (initresolution) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      initresolution = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, initresolution, submessage_arena);
    }
    set_has_initresolution();
    msg_.initresolution_ = initresolution;
  }
  // @@protoc_insertion_point(field_set_allocated:bwapi.message.Message.initResolution)
}
void Message::clear_initresolution() {
  if (has_initresolution()) {
    delete msg_.initresolution_;
    clear_has_msg();
  }
}
void Message::set_allocated_frameupdate(::bwapi::game::FrameUpdate* frameupdate) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  clear_msg();
  if (frameupdate) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      frameupdate = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, frameupdate, submessage_arena);
    }
    set_has_frameupdate();
    msg_.frameupdate_ = frameupdate;
  }
  // @@protoc_insertion_point(field_set_allocated:bwapi.message.Message.frameUpdate)
}
void Message::clear_frameupdate() {
  if (has_frameupdate()) {
    delete msg_.frameupdate_;
    clear_has_msg();
  }
}
void Message::set_allocated_command(::bwapi::command::Command* command) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  clear_msg();
  if (command) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      command = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, command, submessage_arena);
    }
    set_has_command();
    msg_.command_ = command;
  }
  // @@protoc_insertion_point(field_set_allocated:bwapi.message.Message.command)
}
void Message::clear_command() {
  if (has_command()) {
    delete msg_.command_;
    clear_has_msg();
  }
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Message::kInitBroadcastFieldNumber;
const int Message::kInitResponseFieldNumber;
const int Message::kInitResolutionFieldNumber;
const int Message::kFrameUpdateFieldNumber;
const int Message::kCommandFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Message::Message()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_message_2eproto::scc_info_Message.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:bwapi.message.Message)
}
Message::Message(const Message& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  clear_has_msg();
  switch (from.msg_case()) {
    case kInitBroadcast: {
      mutable_initbroadcast()->::bwapi::init::ClientBroadcast::MergeFrom(from.initbroadcast());
      break;
    }
    case kInitResponse: {
      mutable_initresponse()->::bwapi::init::ServerResponse::MergeFrom(from.initresponse());
      break;
    }
    case kInitResolution: {
      mutable_initresolution()->::bwapi::init::ClientResolution::MergeFrom(from.initresolution());
      break;
    }
    case kFrameUpdate: {
      mutable_frameupdate()->::bwapi::game::FrameUpdate::MergeFrom(from.frameupdate());
      break;
    }
    case kCommand: {
      mutable_command()->::bwapi::command::Command::MergeFrom(from.command());
      break;
    }
    case MSG_NOT_SET: {
      break;
    }
  }
  // @@protoc_insertion_point(copy_constructor:bwapi.message.Message)
}

void Message::SharedCtor() {
  clear_has_msg();
}

Message::~Message() {
  // @@protoc_insertion_point(destructor:bwapi.message.Message)
  SharedDtor();
}

void Message::SharedDtor() {
  if (has_msg()) {
    clear_msg();
  }
}

void Message::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Message::descriptor() {
  ::protobuf_message_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_message_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Message& Message::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_message_2eproto::scc_info_Message.base);
  return *internal_default_instance();
}


void Message::clear_msg() {
// @@protoc_insertion_point(one_of_clear_start:bwapi.message.Message)
  switch (msg_case()) {
    case kInitBroadcast: {
      delete msg_.initbroadcast_;
      break;
    }
    case kInitResponse: {
      delete msg_.initresponse_;
      break;
    }
    case kInitResolution: {
      delete msg_.initresolution_;
      break;
    }
    case kFrameUpdate: {
      delete msg_.frameupdate_;
      break;
    }
    case kCommand: {
      delete msg_.command_;
      break;
    }
    case MSG_NOT_SET: {
      break;
    }
  }
  _oneof_case_[0] = MSG_NOT_SET;
}


void Message::Clear() {
// @@protoc_insertion_point(message_clear_start:bwapi.message.Message)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  clear_msg();
  _internal_metadata_.Clear();
}

bool Message::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:bwapi.message.Message)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(16383u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .bwapi.init.ClientBroadcast initBroadcast = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_initbroadcast()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .bwapi.init.ServerResponse initResponse = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_initresponse()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .bwapi.init.ClientResolution initResolution = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_initresolution()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .bwapi.command.Command command = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_command()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .bwapi.game.FrameUpdate frameUpdate = 1000;
      case 1000: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(66u /* 8002 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_frameupdate()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:bwapi.message.Message)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:bwapi.message.Message)
  return false;
#undef DO_
}

void Message::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:bwapi.message.Message)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .bwapi.init.ClientBroadcast initBroadcast = 1;
  if (has_initbroadcast()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_initbroadcast(), output);
  }

  // .bwapi.init.ServerResponse initResponse = 2;
  if (has_initresponse()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->_internal_initresponse(), output);
  }

  // .bwapi.init.ClientResolution initResolution = 3;
  if (has_initresolution()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->_internal_initresolution(), output);
  }

  // .bwapi.command.Command command = 4;
  if (has_command()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->_internal_command(), output);
  }

  // .bwapi.game.FrameUpdate frameUpdate = 1000;
  if (has_frameupdate()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1000, this->_internal_frameupdate(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:bwapi.message.Message)
}

::google::protobuf::uint8* Message::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:bwapi.message.Message)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .bwapi.init.ClientBroadcast initBroadcast = 1;
  if (has_initbroadcast()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_initbroadcast(), deterministic, target);
  }

  // .bwapi.init.ServerResponse initResponse = 2;
  if (has_initresponse()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, this->_internal_initresponse(), deterministic, target);
  }

  // .bwapi.init.ClientResolution initResolution = 3;
  if (has_initresolution()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        3, this->_internal_initresolution(), deterministic, target);
  }

  // .bwapi.command.Command command = 4;
  if (has_command()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        4, this->_internal_command(), deterministic, target);
  }

  // .bwapi.game.FrameUpdate frameUpdate = 1000;
  if (has_frameupdate()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1000, this->_internal_frameupdate(), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:bwapi.message.Message)
  return target;
}

size_t Message::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:bwapi.message.Message)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  switch (msg_case()) {
    // .bwapi.init.ClientBroadcast initBroadcast = 1;
    case kInitBroadcast: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *msg_.initbroadcast_);
      break;
    }
    // .bwapi.init.ServerResponse initResponse = 2;
    case kInitResponse: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *msg_.initresponse_);
      break;
    }
    // .bwapi.init.ClientResolution initResolution = 3;
    case kInitResolution: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *msg_.initresolution_);
      break;
    }
    // .bwapi.game.FrameUpdate frameUpdate = 1000;
    case kFrameUpdate: {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *msg_.frameupdate_);
      break;
    }
    // .bwapi.command.Command command = 4;
    case kCommand: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *msg_.command_);
      break;
    }
    case MSG_NOT_SET: {
      break;
    }
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Message::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:bwapi.message.Message)
  GOOGLE_DCHECK_NE(&from, this);
  const Message* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Message>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:bwapi.message.Message)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:bwapi.message.Message)
    MergeFrom(*source);
  }
}

void Message::MergeFrom(const Message& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:bwapi.message.Message)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  switch (from.msg_case()) {
    case kInitBroadcast: {
      mutable_initbroadcast()->::bwapi::init::ClientBroadcast::MergeFrom(from.initbroadcast());
      break;
    }
    case kInitResponse: {
      mutable_initresponse()->::bwapi::init::ServerResponse::MergeFrom(from.initresponse());
      break;
    }
    case kInitResolution: {
      mutable_initresolution()->::bwapi::init::ClientResolution::MergeFrom(from.initresolution());
      break;
    }
    case kFrameUpdate: {
      mutable_frameupdate()->::bwapi::game::FrameUpdate::MergeFrom(from.frameupdate());
      break;
    }
    case kCommand: {
      mutable_command()->::bwapi::command::Command::MergeFrom(from.command());
      break;
    }
    case MSG_NOT_SET: {
      break;
    }
  }
}

void Message::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:bwapi.message.Message)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Message::CopyFrom(const Message& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:bwapi.message.Message)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Message::IsInitialized() const {
  return true;
}

void Message::Swap(Message* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Message::InternalSwap(Message* other) {
  using std::swap;
  swap(msg_, other->msg_);
  swap(_oneof_case_[0], other->_oneof_case_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Message::GetMetadata() const {
  protobuf_message_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_message_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace message
}  // namespace bwapi
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::bwapi::message::Message* Arena::CreateMaybeMessage< ::bwapi::message::Message >(Arena* arena) {
  return Arena::CreateInternal< ::bwapi::message::Message >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
