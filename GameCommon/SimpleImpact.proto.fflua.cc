// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SimpleImpact.proto
#include "SimpleImpact.pb.h"
#include "SimpleImpact.proto.fflua.h"
namespace Packet {
bool SimpleImpactData_fflua_reg(lua_State* state)
{
//for decltype
	SimpleImpactData* message(nullptr);
	message;
	ff::fflua_register_t<SimpleImpactData, ctor()>(state, "SimpleImpactData", "google::protobuf::Message")
		// required fixed64 guid = 1;
		.def(&SimpleImpactData::guid, "guid")
		.def(&SimpleImpactData::set_guid, "set_guid")
		// required int32 impact_type = 2;
		.def(&SimpleImpactData::impact_type, "impact_type")
		.def(&SimpleImpactData::set_impact_type, "set_impact_type")
		// required fixed64 left_time = 4;
		.def(&SimpleImpactData::left_time, "left_time")
		.def(&SimpleImpactData::set_left_time, "set_left_time")
		// required int32 param1 = 5;
		.def(&SimpleImpactData::param1, "param1")
		.def(&SimpleImpactData::set_param1, "set_param1")
		// required int32 param2 = 6;
		.def(&SimpleImpactData::param2, "param2")
		.def(&SimpleImpactData::set_param2, "set_param2")
		// required bool dbsave = 7;
		.def(&SimpleImpactData::dbsave, "dbsave")
		.def(&SimpleImpactData::set_dbsave, "set_dbsave")
		.def(&SimpleImpactData::ByteSize, "ByteSize")
		.def(&SimpleImpactData::SetInitialized, "SetInitialized")
		;
	return true;
}
bool SimpleImpactConfig_fflua_reg(lua_State* state)
{
//for decltype
	SimpleImpactConfig* message(nullptr);
	message;
	ff::fflua_register_t<SimpleImpactConfig, ctor()>(state, "SimpleImpactConfig", "google::protobuf::Message")
		// required int32 impact_type = 1;
		.def(&SimpleImpactConfig::impact_type, "impact_type")
		.def(&SimpleImpactConfig::set_impact_type, "set_impact_type")
		// required int32 group = 2;
		.def(&SimpleImpactConfig::group, "group")
		.def(&SimpleImpactConfig::set_group, "set_group")
		// required .Packet.SimpleImpactEffectType effect = 3;
		.def(&SimpleImpactConfig::effect, "effect")
		.def(&SimpleImpactConfig::set_effect, "set_effect")
		.def(&SimpleImpactConfig::ByteSize, "ByteSize")
		.def(&SimpleImpactConfig::SetInitialized, "SetInitialized")
		;
	return true;
}
bool SimpleImpactAdd_fflua_reg(lua_State* state)
{
//for decltype
	SimpleImpactAdd* message(nullptr);
	message;
	ff::fflua_register_t<SimpleImpactAdd, ctor()>(state, "SimpleImpactAdd", "google::protobuf::Message")
		// optional fixed64 actor_guid = 1;
		.def(&SimpleImpactAdd::actor_guid, "actor_guid")
		.def(&SimpleImpactAdd::set_actor_guid, "set_actor_guid")
		.def(&SimpleImpactAdd::has_actor_guid, "has_actor_guid")
		// repeated .Packet.SimpleImpactData simple_impact = 2;
		.def(&SimpleImpactAdd::simple_impact_size, "simple_impact_size")
		.def<decltype(message->simple_impact(0)) (SimpleImpactAdd::*)(int) const>(&SimpleImpactAdd::simple_impact, "simple_impact")
		.def<decltype(message->mutable_simple_impact(0)) (SimpleImpactAdd::*)(int)>(&SimpleImpactAdd::mutable_simple_impact, "mutable_simple_impact")
		.def(&SimpleImpactAdd::add_simple_impact, "add_simple_impact")
		.def(&SimpleImpactAdd::ByteSize, "ByteSize")
		.def(&SimpleImpactAdd::SetInitialized, "SetInitialized")
		;
	return true;
}
bool SimpleImpactDel_fflua_reg(lua_State* state)
{
//for decltype
	SimpleImpactDel* message(nullptr);
	message;
	ff::fflua_register_t<SimpleImpactDel, ctor()>(state, "SimpleImpactDel", "google::protobuf::Message")
		// optional fixed64 actor_guid = 1;
		.def(&SimpleImpactDel::actor_guid, "actor_guid")
		.def(&SimpleImpactDel::set_actor_guid, "set_actor_guid")
		.def(&SimpleImpactDel::has_actor_guid, "has_actor_guid")
		// repeated .Packet.SimpleImpactData simple_impact = 2;
		.def(&SimpleImpactDel::simple_impact_size, "simple_impact_size")
		.def<decltype(message->simple_impact(0)) (SimpleImpactDel::*)(int) const>(&SimpleImpactDel::simple_impact, "simple_impact")
		.def<decltype(message->mutable_simple_impact(0)) (SimpleImpactDel::*)(int)>(&SimpleImpactDel::mutable_simple_impact, "mutable_simple_impact")
		.def(&SimpleImpactDel::add_simple_impact, "add_simple_impact")
		.def(&SimpleImpactDel::ByteSize, "ByteSize")
		.def(&SimpleImpactDel::SetInitialized, "SetInitialized")
		;
	return true;
}
bool SimpleImpactUpdate_fflua_reg(lua_State* state)
{
//for decltype
	SimpleImpactUpdate* message(nullptr);
	message;
	ff::fflua_register_t<SimpleImpactUpdate, ctor()>(state, "SimpleImpactUpdate", "google::protobuf::Message")
		// optional fixed64 actor_guid = 1;
		.def(&SimpleImpactUpdate::actor_guid, "actor_guid")
		.def(&SimpleImpactUpdate::set_actor_guid, "set_actor_guid")
		.def(&SimpleImpactUpdate::has_actor_guid, "has_actor_guid")
		// repeated .Packet.SimpleImpactData simple_impact = 2;
		.def(&SimpleImpactUpdate::simple_impact_size, "simple_impact_size")
		.def<decltype(message->simple_impact(0)) (SimpleImpactUpdate::*)(int) const>(&SimpleImpactUpdate::simple_impact, "simple_impact")
		.def<decltype(message->mutable_simple_impact(0)) (SimpleImpactUpdate::*)(int)>(&SimpleImpactUpdate::mutable_simple_impact, "mutable_simple_impact")
		.def(&SimpleImpactUpdate::add_simple_impact, "add_simple_impact")
		.def(&SimpleImpactUpdate::ByteSize, "ByteSize")
		.def(&SimpleImpactUpdate::SetInitialized, "SetInitialized")
		;
	return true;
}
bool SimpleImpact_fflua_regist_all(lua_State* state)
{
	SimpleImpactData_fflua_reg(state);
	SimpleImpactConfig_fflua_reg(state);
	SimpleImpactAdd_fflua_reg(state);
	SimpleImpactDel_fflua_reg(state);
	SimpleImpactUpdate_fflua_reg(state);
	return true;
}
}