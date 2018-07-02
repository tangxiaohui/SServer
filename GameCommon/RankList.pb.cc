// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: RankList.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "RankList.pb.h"

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

namespace Packet {

namespace {

const ::google::protobuf::Descriptor* TopRankData_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  TopRankData_reflection_ = NULL;
const ::google::protobuf::Descriptor* TopRankDataReq_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  TopRankDataReq_reflection_ = NULL;
const ::google::protobuf::Descriptor* TopRankDataReply_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  TopRankDataReply_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_RankList_2eproto() {
  protobuf_AddDesc_RankList_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "RankList.proto");
  GOOGLE_CHECK(file != NULL);
  TopRankData_descriptor_ = file->message_type(0);
  static const int TopRankData_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TopRankData, playerguid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TopRankData, playername_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TopRankData, init_actor_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TopRankData, level_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TopRankData, value_),
  };
  TopRankData_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      TopRankData_descriptor_,
      TopRankData::default_instance_,
      TopRankData_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TopRankData, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TopRankData, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(TopRankData));
  TopRankDataReq_descriptor_ = file->message_type(1);
  static const int TopRankDataReq_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TopRankDataReq, group_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TopRankDataReq, type_),
  };
  TopRankDataReq_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      TopRankDataReq_descriptor_,
      TopRankDataReq::default_instance_,
      TopRankDataReq_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TopRankDataReq, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TopRankDataReq, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(TopRankDataReq));
  TopRankDataReply_descriptor_ = file->message_type(2);
  static const int TopRankDataReply_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TopRankDataReply, list_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TopRankDataReply, refreshtime_),
  };
  TopRankDataReply_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      TopRankDataReply_descriptor_,
      TopRankDataReply::default_instance_,
      TopRankDataReply_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TopRankDataReply, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TopRankDataReply, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(TopRankDataReply));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_RankList_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    TopRankData_descriptor_, &TopRankData::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    TopRankDataReq_descriptor_, &TopRankDataReq::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    TopRankDataReply_descriptor_, &TopRankDataReply::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_RankList_2eproto() {
  delete TopRankData::default_instance_;
  delete TopRankData_reflection_;
  delete TopRankDataReq::default_instance_;
  delete TopRankDataReq_reflection_;
  delete TopRankDataReply::default_instance_;
  delete TopRankDataReply_reflection_;
}

void protobuf_AddDesc_RankList_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::Packet::protobuf_AddDesc_AllPacketEnum_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\016RankList.proto\022\006Packet\032\023AllPacketEnum."
    "proto\"j\n\013TopRankData\022\022\n\nplayerguid\030\001 \002(\006"
    "\022\022\n\nplayername\030\002 \002(\t\022\025\n\rinit_actor_id\030\003 "
    "\002(\005\022\r\n\005level\030\004 \002(\005\022\r\n\005value\030\005 \003(\005\"@\n\016Top"
    "RankDataReq\022 \n\005group\030\001 \002(\0162\021.Packet.Rank"
    "Group\022\014\n\004type\030\002 \002(\005\"J\n\020TopRankDataReply\022"
    "!\n\004list\030\001 \003(\0132\023.Packet.TopRankData\022\023\n\013re"
    "freshtime\030\002 \002(\005", 295);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "RankList.proto", &protobuf_RegisterTypes);
  TopRankData::default_instance_ = new TopRankData();
  TopRankDataReq::default_instance_ = new TopRankDataReq();
  TopRankDataReply::default_instance_ = new TopRankDataReply();
  TopRankData::default_instance_->InitAsDefaultInstance();
  TopRankDataReq::default_instance_->InitAsDefaultInstance();
  TopRankDataReply::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_RankList_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_RankList_2eproto {
  StaticDescriptorInitializer_RankList_2eproto() {
    protobuf_AddDesc_RankList_2eproto();
  }
} static_descriptor_initializer_RankList_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int TopRankData::kPlayerguidFieldNumber;
const int TopRankData::kPlayernameFieldNumber;
const int TopRankData::kInitActorIdFieldNumber;
const int TopRankData::kLevelFieldNumber;
const int TopRankData::kValueFieldNumber;
#endif  // !_MSC_VER

TopRankData::TopRankData()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void TopRankData::InitAsDefaultInstance() {
}

TopRankData::TopRankData(const TopRankData& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void TopRankData::SharedCtor() {
  _cached_size_ = 0;
  playerguid_ = GOOGLE_ULONGLONG(0);
  playername_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  init_actor_id_ = 0;
  level_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

TopRankData::~TopRankData() {
  SharedDtor();
}

void TopRankData::SharedDtor() {
  if (playername_ != &::google::protobuf::internal::kEmptyString) {
    delete playername_;
  }
  if (this != default_instance_) {
  }
}

void TopRankData::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* TopRankData::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return TopRankData_descriptor_;
}

const TopRankData& TopRankData::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_RankList_2eproto();
  return *default_instance_;
}

TopRankData* TopRankData::default_instance_ = NULL;

TopRankData* TopRankData::New() const {
  return new TopRankData;
}

void TopRankData::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    playerguid_ = GOOGLE_ULONGLONG(0);
    if (has_playername()) {
      if (playername_ != &::google::protobuf::internal::kEmptyString) {
        playername_->clear();
      }
    }
    init_actor_id_ = 0;
    level_ = 0;
  }
  value_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
  SetDirty();
}

bool TopRankData::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required fixed64 playerguid = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED64>(
                 input, &playerguid_)));
          set_has_playerguid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_playername;
        break;
      }

      // required string playername = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_playername:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_playername()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->playername().data(), this->playername().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_init_actor_id;
        break;
      }

      // required int32 init_actor_id = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_init_actor_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &init_actor_id_)));
          set_has_init_actor_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_level;
        break;
      }

      // required int32 level = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_level:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &level_)));
          set_has_level();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_value;
        break;
      }

      // repeated int32 value = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_value:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 40, input, this->mutable_value())));
        } else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
                   == ::google::protobuf::internal::WireFormatLite::
                      WIRETYPE_LENGTH_DELIMITED) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_value())));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_value;
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  SetDirty();
  return true;
#undef DO_
}

void TopRankData::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required fixed64 playerguid = 1;
  if (has_playerguid()) {
    ::google::protobuf::internal::WireFormatLite::WriteFixed64(1, this->playerguid(), output);
  }

  // required string playername = 2;
  if (has_playername()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->playername().data(), this->playername().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->playername(), output);
  }

  // required int32 init_actor_id = 3;
  if (has_init_actor_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->init_actor_id(), output);
  }

  // required int32 level = 4;
  if (has_level()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->level(), output);
  }

  // repeated int32 value = 5;
  for (int i = 0; i < this->value_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(
      5, this->value(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* TopRankData::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required fixed64 playerguid = 1;
  if (has_playerguid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFixed64ToArray(1, this->playerguid(), target);
  }

  // required string playername = 2;
  if (has_playername()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->playername().data(), this->playername().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->playername(), target);
  }

  // required int32 init_actor_id = 3;
  if (has_init_actor_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->init_actor_id(), target);
  }

  // required int32 level = 4;
  if (has_level()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->level(), target);
  }

  // repeated int32 value = 5;
  for (int i = 0; i < this->value_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt32ToArray(5, this->value(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int TopRankData::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required fixed64 playerguid = 1;
    if (has_playerguid()) {
      total_size += 1 + 8;
    }

    // required string playername = 2;
    if (has_playername()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->playername());
    }

    // required int32 init_actor_id = 3;
    if (has_init_actor_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->init_actor_id());
    }

    // required int32 level = 4;
    if (has_level()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->level());
    }

  }
  // repeated int32 value = 5;
  {
    int data_size = 0;
    for (int i = 0; i < this->value_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int32Size(this->value(i));
    }
    total_size += 1 * this->value_size() + data_size;
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void TopRankData::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const TopRankData* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const TopRankData*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
  SetDirty();
}

void TopRankData::MergeFrom(const TopRankData& from) {
  GOOGLE_CHECK_NE(&from, this);
  value_.MergeFrom(from.value_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_playerguid()) {
      set_playerguid(from.playerguid());
    }
    if (from.has_playername()) {
      set_playername(from.playername());
    }
    if (from.has_init_actor_id()) {
      set_init_actor_id(from.init_actor_id());
    }
    if (from.has_level()) {
      set_level(from.level());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  SetDirty();
}

void TopRankData::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
  SetDirty();
}

void TopRankData::CopyFrom(const TopRankData& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
  SetDirty();
}

bool TopRankData::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000000f) != 0x0000000f) return false;

  return true;
}

void TopRankData::SetInitialized() {
  _has_bits_[0] |= 0x0000000f;

  return;
}

void TopRankData::Swap(TopRankData* other) {
  if (other != this) {
    std::swap(playerguid_, other->playerguid_);
    std::swap(playername_, other->playername_);
    std::swap(init_actor_id_, other->init_actor_id_);
    std::swap(level_, other->level_);
    value_.Swap(&other->value_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
    SetDirty(), other->SetDirty();
  }
}

::google::protobuf::Metadata TopRankData::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = TopRankData_descriptor_;
  metadata.reflection = TopRankData_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int TopRankDataReq::kGroupFieldNumber;
const int TopRankDataReq::kTypeFieldNumber;
#endif  // !_MSC_VER

TopRankDataReq::TopRankDataReq()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void TopRankDataReq::InitAsDefaultInstance() {
}

TopRankDataReq::TopRankDataReq(const TopRankDataReq& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void TopRankDataReq::SharedCtor() {
  _cached_size_ = 0;
  group_ = 1;
  type_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

TopRankDataReq::~TopRankDataReq() {
  SharedDtor();
}

void TopRankDataReq::SharedDtor() {
  if (this != default_instance_) {
  }
}

void TopRankDataReq::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* TopRankDataReq::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return TopRankDataReq_descriptor_;
}

const TopRankDataReq& TopRankDataReq::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_RankList_2eproto();
  return *default_instance_;
}

TopRankDataReq* TopRankDataReq::default_instance_ = NULL;

TopRankDataReq* TopRankDataReq::New() const {
  return new TopRankDataReq;
}

void TopRankDataReq::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    group_ = 1;
    type_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
  SetDirty();
}

bool TopRankDataReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .Packet.RankGroup group = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::Packet::RankGroup_IsValid(value)) {
            set_group(static_cast< ::Packet::RankGroup >(value));
          } else {
            mutable_unknown_fields()->AddVarint(1, value);
          }
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_type;
        break;
      }

      // required int32 type = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_type:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &type_)));
          set_has_type();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  SetDirty();
  return true;
#undef DO_
}

void TopRankDataReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .Packet.RankGroup group = 1;
  if (has_group()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->group(), output);
  }

  // required int32 type = 2;
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->type(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* TopRankDataReq::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required .Packet.RankGroup group = 1;
  if (has_group()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->group(), target);
  }

  // required int32 type = 2;
  if (has_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->type(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int TopRankDataReq::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .Packet.RankGroup group = 1;
    if (has_group()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->group());
    }

    // required int32 type = 2;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->type());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void TopRankDataReq::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const TopRankDataReq* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const TopRankDataReq*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
  SetDirty();
}

void TopRankDataReq::MergeFrom(const TopRankDataReq& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_group()) {
      set_group(from.group());
    }
    if (from.has_type()) {
      set_type(from.type());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  SetDirty();
}

void TopRankDataReq::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
  SetDirty();
}

void TopRankDataReq::CopyFrom(const TopRankDataReq& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
  SetDirty();
}

bool TopRankDataReq::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void TopRankDataReq::SetInitialized() {
  _has_bits_[0] |= 0x00000003;

  return;
}

void TopRankDataReq::Swap(TopRankDataReq* other) {
  if (other != this) {
    std::swap(group_, other->group_);
    std::swap(type_, other->type_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
    SetDirty(), other->SetDirty();
  }
}

::google::protobuf::Metadata TopRankDataReq::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = TopRankDataReq_descriptor_;
  metadata.reflection = TopRankDataReq_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int TopRankDataReply::kListFieldNumber;
const int TopRankDataReply::kRefreshtimeFieldNumber;
#endif  // !_MSC_VER

TopRankDataReply::TopRankDataReply()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void TopRankDataReply::InitAsDefaultInstance() {
}

TopRankDataReply::TopRankDataReply(const TopRankDataReply& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void TopRankDataReply::SharedCtor() {
  _cached_size_ = 0;
  refreshtime_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

TopRankDataReply::~TopRankDataReply() {
  SharedDtor();
}

void TopRankDataReply::SharedDtor() {
  if (this != default_instance_) {
  }
}

void TopRankDataReply::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* TopRankDataReply::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return TopRankDataReply_descriptor_;
}

const TopRankDataReply& TopRankDataReply::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_RankList_2eproto();
  return *default_instance_;
}

TopRankDataReply* TopRankDataReply::default_instance_ = NULL;

TopRankDataReply* TopRankDataReply::New() const {
  return new TopRankDataReply;
}

void TopRankDataReply::Clear() {
  if (_has_bits_[1 / 32] & (0xffu << (1 % 32))) {
    refreshtime_ = 0;
  }
  list_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
  SetDirty();
}

bool TopRankDataReply::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .Packet.TopRankData list = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_list:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_list()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_list;
        if (input->ExpectTag(16)) goto parse_refreshtime;
        break;
      }

      // required int32 refreshtime = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_refreshtime:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &refreshtime_)));
          set_has_refreshtime();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  SetDirty();
  return true;
#undef DO_
}

void TopRankDataReply::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .Packet.TopRankData list = 1;
  for (int i = 0; i < this->list_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->list(i), output);
  }

  // required int32 refreshtime = 2;
  if (has_refreshtime()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->refreshtime(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* TopRankDataReply::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // repeated .Packet.TopRankData list = 1;
  for (int i = 0; i < this->list_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->list(i), target);
  }

  // required int32 refreshtime = 2;
  if (has_refreshtime()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->refreshtime(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int TopRankDataReply::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[1 / 32] & (0xffu << (1 % 32))) {
    // required int32 refreshtime = 2;
    if (has_refreshtime()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->refreshtime());
    }

  }
  // repeated .Packet.TopRankData list = 1;
  total_size += 1 * this->list_size();
  for (int i = 0; i < this->list_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->list(i));
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void TopRankDataReply::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const TopRankDataReply* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const TopRankDataReply*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
  SetDirty();
}

void TopRankDataReply::MergeFrom(const TopRankDataReply& from) {
  GOOGLE_CHECK_NE(&from, this);
  list_.MergeFrom(from.list_);
  if (from._has_bits_[1 / 32] & (0xffu << (1 % 32))) {
    if (from.has_refreshtime()) {
      set_refreshtime(from.refreshtime());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  SetDirty();
}

void TopRankDataReply::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
  SetDirty();
}

void TopRankDataReply::CopyFrom(const TopRankDataReply& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
  SetDirty();
}

bool TopRankDataReply::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000002) != 0x00000002) return false;

  for (int i = 0; i < list_size(); i++) {
    if (!this->list(i).IsInitialized()) return false;
  }
  return true;
}

void TopRankDataReply::SetInitialized() {
  _has_bits_[0] |= 0x00000002;

  for (int i = 0; i < list_size(); i++) {
    this->mutable_list(i)->SetInitialized();
  }
  return;
}

void TopRankDataReply::Swap(TopRankDataReply* other) {
  if (other != this) {
    list_.Swap(&other->list_);
    std::swap(refreshtime_, other->refreshtime_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
    SetDirty(), other->SetDirty();
  }
}

::google::protobuf::Metadata TopRankDataReply::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = TopRankDataReply_descriptor_;
  metadata.reflection = TopRankDataReply_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Packet

// @@protoc_insertion_point(global_scope)