#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimGraphBlendOptions.hpp"
float& _Script_Engine::AnimGraphBlendOptions::get_BlendInTime() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::AnimGraphBlendOptions::get_BlendOutTime() {
    return *(float*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_Engine::AnimGraphBlendOptions::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.AnimGraphBlendOptions");
    return result;
}
