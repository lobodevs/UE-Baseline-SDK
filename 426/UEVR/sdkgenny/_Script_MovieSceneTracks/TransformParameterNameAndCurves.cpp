#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "TransformParameterNameAndCurves.hpp"
void* _Script_MovieSceneTracks::TransformParameterNameAndCurves::get_ParameterName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_MovieSceneTracks::TransformParameterNameAndCurves::get_Rotation() {
    return (void*)((uintptr_t)this + 0x1e8);
}
void* _Script_MovieSceneTracks::TransformParameterNameAndCurves::get_Translation() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_MovieSceneTracks::TransformParameterNameAndCurves::get_Scale() {
    return (void*)((uintptr_t)this + 0x3c8);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::TransformParameterNameAndCurves::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.TransformParameterNameAndCurves");
    return result;
}
