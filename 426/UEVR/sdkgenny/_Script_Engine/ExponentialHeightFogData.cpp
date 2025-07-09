#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ExponentialHeightFogData.hpp"
float& _Script_Engine::ExponentialHeightFogData::get_FogDensity() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::ExponentialHeightFogData::get_FogHeightFalloff() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_Engine::ExponentialHeightFogData::get_FogHeightOffset() {
    return *(float*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::ExponentialHeightFogData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.ExponentialHeightFogData");
    return result;
}
