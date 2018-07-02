// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: HeroFragmentConfig.proto
#include "HeroFragmentConfig.pb.h"
#include "HeroFragmentConfig.proto.fflua.h"
namespace Config {
bool FragmentConfig_fflua_reg(lua_State* state)
{
//for decltype
	FragmentConfig* message(nullptr);
	message;
	ff::fflua_register_t<FragmentConfig, ctor()>(state, "FragmentConfig", "google::protobuf::Message")
		// required int32 fragment_id = 1;
		.def(&FragmentConfig::fragment_id, "fragment_id")
		.def(&FragmentConfig::set_fragment_id, "set_fragment_id")
		// required int32 fragment_amount = 2;
		.def(&FragmentConfig::fragment_amount, "fragment_amount")
		.def(&FragmentConfig::set_fragment_amount, "set_fragment_amount")
		// required int32 hero_id = 3;
		.def(&FragmentConfig::hero_id, "hero_id")
		.def(&FragmentConfig::set_hero_id, "set_hero_id")
		// required .Packet.ActorStar star = 4;
		.def(&FragmentConfig::star, "star")
		.def(&FragmentConfig::set_star, "set_star")
		// required .Packet.ActorColor color = 5;
		.def(&FragmentConfig::color, "color")
		.def(&FragmentConfig::set_color, "set_color")
		// required int32 smelt_amount = 6;
		.def(&FragmentConfig::smelt_amount, "smelt_amount")
		.def(&FragmentConfig::set_smelt_amount, "set_smelt_amount")
		.def(&FragmentConfig::ByteSize, "ByteSize")
		.def(&FragmentConfig::SetInitialized, "SetInitialized")
		;
	return true;
}
bool HeroFragmentConfig_fflua_regist_all(lua_State* state)
{
	FragmentConfig_fflua_reg(state);
	return true;
}
}