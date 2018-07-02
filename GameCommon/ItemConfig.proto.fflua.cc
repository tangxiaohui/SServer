// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ItemConfig.proto
#include "ItemConfig.pb.h"
#include "ItemConfig.proto.fflua.h"
namespace Config {
bool ItemConfig_fflua_reg(lua_State* state)
{
//for decltype
	ItemConfig* message(nullptr);
	message;
	ff::fflua_register_t<ItemConfig, ctor()>(state, "ItemConfig", "google::protobuf::Message")
		// required int32 id = 1;
		.def(&ItemConfig::id, "id")
		.def(&ItemConfig::set_id, "set_id")
		// required .Config.ItemType type = 2;
		.def(&ItemConfig::type, "type")
		.def(&ItemConfig::set_type, "set_type")
		// required int32 quality = 3;
		.def(&ItemConfig::quality, "quality")
		.def(&ItemConfig::set_quality, "set_quality")
		// required int32 block_max_count = 4;
		.def(&ItemConfig::block_max_count, "block_max_count")
		.def(&ItemConfig::set_block_max_count, "set_block_max_count")
		// required int32 can_sale = 5;
		.def(&ItemConfig::can_sale, "can_sale")
		.def(&ItemConfig::set_can_sale, "set_can_sale")
		// required int32 coin = 6;
		.def(&ItemConfig::coin, "coin")
		.def(&ItemConfig::set_coin, "set_coin")
		// required int32 min_level_limit = 7;
		.def(&ItemConfig::min_level_limit, "min_level_limit")
		.def(&ItemConfig::set_min_level_limit, "set_min_level_limit")
		// required int32 max_level_limit = 8;
		.def(&ItemConfig::max_level_limit, "max_level_limit")
		.def(&ItemConfig::set_max_level_limit, "set_max_level_limit")
		// required int32 level = 9;
		.def(&ItemConfig::level, "level")
		.def(&ItemConfig::set_level, "set_level")
		// required bool can_use = 10;
		.def(&ItemConfig::can_use, "can_use")
		.def(&ItemConfig::set_can_use, "set_can_use")
		// required bool can_destroy = 11;
		.def(&ItemConfig::can_destroy, "can_destroy")
		.def(&ItemConfig::set_can_destroy, "set_can_destroy")
		// required int32 impact = 12;
		.def(&ItemConfig::impact, "impact")
		.def(&ItemConfig::set_impact, "set_impact")
		// required int32 cool_down = 13;
		.def(&ItemConfig::cool_down, "cool_down")
		.def(&ItemConfig::set_cool_down, "set_cool_down")
		// required int32 life_time = 14;
		.def(&ItemConfig::life_time, "life_time")
		.def(&ItemConfig::set_life_time, "set_life_time")
		// required int32 script_id = 15;
		.def(&ItemConfig::script_id, "script_id")
		.def(&ItemConfig::set_script_id, "set_script_id")
		// repeated int32 param = 16;
		.def(&ItemConfig::param_size, "param_size")
		.def<decltype(message->param(0)) (ItemConfig::*)(int) const>(&ItemConfig::param, "param")
		.def<void(ItemConfig::*)(int, const decltype(message->param(0)))>(&ItemConfig::set_param, "set_param")
		.def(&ItemConfig::add_param, "add_param")
		// required int32 value = 17;
		.def(&ItemConfig::value, "value")
		.def(&ItemConfig::set_value, "set_value")
		.def(&ItemConfig::ByteSize, "ByteSize")
		.def(&ItemConfig::SetInitialized, "SetInitialized")
		;
	return true;
}
bool GemConfig_fflua_reg(lua_State* state)
{
//for decltype
	GemConfig* message(nullptr);
	message;
	ff::fflua_register_t<GemConfig, ctor()>(state, "GemConfig", "google::protobuf::Message")
		// required int32 id = 1;
		.def(&GemConfig::id, "id")
		.def(&GemConfig::set_id, "set_id")
		// required string property = 2;
		.def(&GemConfig::property, "property")
		.def<void (GemConfig::*)(const std::string&)>(&GemConfig::set_property, "set_property")
		// required int32 value = 3;
		.def(&GemConfig::value, "value")
		.def(&GemConfig::set_value, "set_value")
		// required int32 fusion_id = 4;
		.def(&GemConfig::fusion_id, "fusion_id")
		.def(&GemConfig::set_fusion_id, "set_fusion_id")
		// required int32 level = 5;
		.def(&GemConfig::level, "level")
		.def(&GemConfig::set_level, "set_level")
		// repeated .Config.EquipmentType inset_locations = 6;
		.def(&GemConfig::inset_locations_size, "inset_locations_size")
		.def<decltype(message->inset_locations(0)) (GemConfig::*)(int) const>(&GemConfig::inset_locations, "inset_locations")
		.def(&GemConfig::set_inset_locations, "set_inset_locations")
		.def(&GemConfig::add_inset_locations, "add_inset_locations")
		// required int32 block_max_count = 7;
		.def(&GemConfig::block_max_count, "block_max_count")
		.def(&GemConfig::set_block_max_count, "set_block_max_count")
		// required int32 quality = 8;
		.def(&GemConfig::quality, "quality")
		.def(&GemConfig::set_quality, "set_quality")
		// required int32 type = 9;
		.def(&GemConfig::type, "type")
		.def(&GemConfig::set_type, "set_type")
		// required int32 coin = 10;
		.def(&GemConfig::coin, "coin")
		.def(&GemConfig::set_coin, "set_coin")
		.def(&GemConfig::ByteSize, "ByteSize")
		.def(&GemConfig::SetInitialized, "SetInitialized")
		;
	return true;
}
bool GemCostConfig_fflua_reg(lua_State* state)
{
//for decltype
	GemCostConfig* message(nullptr);
	message;
	ff::fflua_register_t<GemCostConfig, ctor()>(state, "GemCostConfig", "google::protobuf::Message")
		// required int32 level = 1;
		.def(&GemCostConfig::level, "level")
		.def(&GemCostConfig::set_level, "set_level")
		// required int32 rate = 2;
		.def(&GemCostConfig::rate, "rate")
		.def(&GemCostConfig::set_rate, "set_rate")
		// required int32 cost_item = 3;
		.def(&GemCostConfig::cost_item, "cost_item")
		.def(&GemCostConfig::set_cost_item, "set_cost_item")
		// required int32 cost_count = 4;
		.def(&GemCostConfig::cost_count, "cost_count")
		.def(&GemCostConfig::set_cost_count, "set_cost_count")
		.def(&GemCostConfig::ByteSize, "ByteSize")
		.def(&GemCostConfig::SetInitialized, "SetInitialized")
		;
	return true;
}
bool ItemAddLog_fflua_reg(lua_State* state)
{
//for decltype
	ItemAddLog* message(nullptr);
	message;
	ff::fflua_register_t<ItemAddLog, ctor()>(state, "ItemAddLog", "google::protobuf::Message")
		// required fixed64 guid = 1;
		.def(&ItemAddLog::guid, "guid")
		.def(&ItemAddLog::set_guid, "set_guid")
		// required fixed64 player_guid = 2;
		.def(&ItemAddLog::player_guid, "player_guid")
		.def(&ItemAddLog::set_player_guid, "set_player_guid")
		// required fixed64 container_guid = 3;
		.def(&ItemAddLog::container_guid, "container_guid")
		.def(&ItemAddLog::set_container_guid, "set_container_guid")
		// required .Config.ItemAddLogType add_type = 4;
		.def(&ItemAddLog::add_type, "add_type")
		.def(&ItemAddLog::set_add_type, "set_add_type")
		// required int32 item_id = 5;
		.def(&ItemAddLog::item_id, "item_id")
		.def(&ItemAddLog::set_item_id, "set_item_id")
		// required int32 item_amount = 6;
		.def(&ItemAddLog::item_amount, "item_amount")
		.def(&ItemAddLog::set_item_amount, "set_item_amount")
		// required fixed64 source_id = 7;
		.def(&ItemAddLog::source_id, "source_id")
		.def(&ItemAddLog::set_source_id, "set_source_id")
		.def(&ItemAddLog::ByteSize, "ByteSize")
		.def(&ItemAddLog::SetInitialized, "SetInitialized")
		;
	return true;
}
bool ItemDelLog_fflua_reg(lua_State* state)
{
//for decltype
	ItemDelLog* message(nullptr);
	message;
	ff::fflua_register_t<ItemDelLog, ctor()>(state, "ItemDelLog", "google::protobuf::Message")
		// required fixed64 guid = 1;
		.def(&ItemDelLog::guid, "guid")
		.def(&ItemDelLog::set_guid, "set_guid")
		// required fixed64 player_guid = 2;
		.def(&ItemDelLog::player_guid, "player_guid")
		.def(&ItemDelLog::set_player_guid, "set_player_guid")
		// required fixed64 container_guid = 3;
		.def(&ItemDelLog::container_guid, "container_guid")
		.def(&ItemDelLog::set_container_guid, "set_container_guid")
		// required .Config.ItemDelLogType del_type = 4;
		.def(&ItemDelLog::del_type, "del_type")
		.def(&ItemDelLog::set_del_type, "set_del_type")
		// required int32 item_id = 5;
		.def(&ItemDelLog::item_id, "item_id")
		.def(&ItemDelLog::set_item_id, "set_item_id")
		// required int32 item_amount = 6;
		.def(&ItemDelLog::item_amount, "item_amount")
		.def(&ItemDelLog::set_item_amount, "set_item_amount")
		// required fixed64 source_id = 7;
		.def(&ItemDelLog::source_id, "source_id")
		.def(&ItemDelLog::set_source_id, "set_source_id")
		.def(&ItemDelLog::ByteSize, "ByteSize")
		.def(&ItemDelLog::SetInitialized, "SetInitialized")
		;
	return true;
}
bool EquipBookConfig_fflua_reg(lua_State* state)
{
//for decltype
	EquipBookConfig* message(nullptr);
	message;
	ff::fflua_register_t<EquipBookConfig, ctor()>(state, "EquipBookConfig", "google::protobuf::Message")
		// required int32 index = 1;
		.def(&EquipBookConfig::index, "index")
		.def(&EquipBookConfig::set_index, "set_index")
		// required int32 id = 2;
		.def(&EquipBookConfig::id, "id")
		.def(&EquipBookConfig::set_id, "set_id")
		.def(&EquipBookConfig::ByteSize, "ByteSize")
		.def(&EquipBookConfig::SetInitialized, "SetInitialized")
		;
	return true;
}
bool ItemConfig_fflua_regist_all(lua_State* state)
{
	ItemConfig_fflua_reg(state);
	GemConfig_fflua_reg(state);
	GemCostConfig_fflua_reg(state);
	ItemAddLog_fflua_reg(state);
	ItemDelLog_fflua_reg(state);
	EquipBookConfig_fflua_reg(state);
	return true;
}
}