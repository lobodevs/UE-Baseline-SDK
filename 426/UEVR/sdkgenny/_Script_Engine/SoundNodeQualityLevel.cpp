#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SoundNode.hpp"
#include "SoundNodeQualityLevel.hpp"
int32_t& _Script_Engine::SoundNodeQualityLevel::get_CookedQualityLevelIndex() {
    return *(int32_t*)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Class* _Script_Engine::SoundNodeQualityLevel::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SoundNodeQualityLevel");
    return result;
}
