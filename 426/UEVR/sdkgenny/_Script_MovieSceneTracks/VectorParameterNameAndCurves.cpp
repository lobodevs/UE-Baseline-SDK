#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "VectorParameterNameAndCurves.hpp"
void* _Script_MovieSceneTracks::VectorParameterNameAndCurves::get_ParameterName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_MovieSceneTracks::VectorParameterNameAndCurves::get_ZCurve() {
    return (void*)((uintptr_t)this + 0x148);
}
void* _Script_MovieSceneTracks::VectorParameterNameAndCurves::get_XCurve() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::VectorParameterNameAndCurves::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.VectorParameterNameAndCurves");
    return result;
}
void* _Script_MovieSceneTracks::VectorParameterNameAndCurves::get_YCurve() {
    return (void*)((uintptr_t)this + 0xa8);
}
