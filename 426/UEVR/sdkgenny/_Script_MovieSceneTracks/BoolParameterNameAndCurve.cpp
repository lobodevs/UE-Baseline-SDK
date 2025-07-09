#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BoolParameterNameAndCurve.hpp"
void* _Script_MovieSceneTracks::BoolParameterNameAndCurve::get_ParameterName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_MovieSceneTracks::BoolParameterNameAndCurve::get_ParameterCurve() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::BoolParameterNameAndCurve::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.BoolParameterNameAndCurve");
    return result;
}
