#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CurveTrack.hpp"
_Script_CoreUObject::Class* _Script_Engine::CurveTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.CurveTrack");
    return result;
}
void* _Script_Engine::CurveTrack::get_CurveName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::CurveTrack::get_CurveWeights() {
    return (void*)((uintptr_t)this + 0x8);
}
