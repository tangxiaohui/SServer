// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SceneConfig.proto

#ifndef PROTOBUF_SceneConfig_2eproto_2efflua_2eh__INCLUDED
#define PROTOBUF_SceneConfig_2eproto_2efflua_2eh__INCLUDED

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include<lua/fflua_register.h>

#include "Base.proto.fflua.h"
#include "ProtoBufOption.proto.fflua.h"
#include "SceneConfig.pb.h"
namespace ff{
//Scene
//SceneBattleGroup
//SceneStage
}
namespace Config {
bool Scene_fflua_reg(lua_State* state);
bool SceneBattleGroup_fflua_reg(lua_State* state);
bool SceneStage_fflua_reg(lua_State* state);
bool SceneConfig_fflua_regist_all(lua_State* state);
}
#endif //PROTOBUF_SceneConfig_2eproto_2efflua_2eh__INCLUDED