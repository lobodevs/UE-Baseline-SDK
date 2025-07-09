#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
#include "NodeAndChannelMappings.hpp"
_Script_CoreUObject::Class* _Script_MovieScene::NodeAndChannelMappings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieScene.NodeAndChannelMappings");
    return result;
}
