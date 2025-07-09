#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Vector2DParameterNameAndCurves.hpp"
void* _Script_MovieSceneTracks::Vector2DParameterNameAndCurves::get_ParameterName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_MovieSceneTracks::Vector2DParameterNameAndCurves::get_XCurve() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_MovieSceneTracks::Vector2DParameterNameAndCurves::get_YCurve() {
    return (void*)((uintptr_t)this + 0xa8);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::Vector2DParameterNameAndCurves::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.Vector2DParameterNameAndCurves");
    return result;
}
