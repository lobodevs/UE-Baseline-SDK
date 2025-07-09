#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SceneViewExtensionIsActiveFunctor.hpp"
_Script_CoreUObject::Class* _Script_Engine::SceneViewExtensionIsActiveFunctor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SceneViewExtensionIsActiveFunctor");
    return result;
}
