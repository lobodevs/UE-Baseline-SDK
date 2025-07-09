#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "TentDistribution.hpp"
float& _Script_Engine::TentDistribution::get_TipAltitude() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::TentDistribution::get_TipValue() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_Engine::TentDistribution::get_Width() {
    return *(float*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::TentDistribution::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.TentDistribution");
    return result;
}
