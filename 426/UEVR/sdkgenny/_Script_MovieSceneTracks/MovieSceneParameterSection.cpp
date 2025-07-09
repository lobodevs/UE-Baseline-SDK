#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\FrameNumber.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_MovieScene\MovieSceneSection.hpp"
#include "MovieSceneParameterSection.hpp"
void* _Script_MovieSceneTracks::MovieSceneParameterSection::get_BoolParameterNamesAndCurves() {
    return (void*)((uintptr_t)this + 0xe8);
}
void* _Script_MovieSceneTracks::MovieSceneParameterSection::get_ScalarParameterNamesAndCurves() {
    return (void*)((uintptr_t)this + 0xf8);
}
void* _Script_MovieSceneTracks::MovieSceneParameterSection::get_Vector2DParameterNamesAndCurves() {
    return (void*)((uintptr_t)this + 0x108);
}
void* _Script_MovieSceneTracks::MovieSceneParameterSection::get_VectorParameterNamesAndCurves() {
    return (void*)((uintptr_t)this + 0x118);
}
bool _Script_MovieSceneTracks::MovieSceneParameterSection::RemoveVectorParameter(void* InParameterName) {
    return;
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneParameterSection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieSceneParameterSection");
    return result;
}
void _Script_MovieSceneTracks::MovieSceneParameterSection::GetParameterNames(void*& ParameterNames) {
    return;
}
void* _Script_MovieSceneTracks::MovieSceneParameterSection::get_TransformParameterNamesAndCurves() {
    return (void*)((uintptr_t)this + 0x138);
}
void* _Script_MovieSceneTracks::MovieSceneParameterSection::get_ColorParameterNamesAndCurves() {
    return (void*)((uintptr_t)this + 0x128);
}
bool _Script_MovieSceneTracks::MovieSceneParameterSection::RemoveVector2DParameter(void* InParameterName) {
    return;
}
bool _Script_MovieSceneTracks::MovieSceneParameterSection::RemoveTransformParameter(void* InParameterName) {
    return;
}
bool _Script_MovieSceneTracks::MovieSceneParameterSection::RemoveScalarParameter(void* InParameterName) {
    return;
}
bool _Script_MovieSceneTracks::MovieSceneParameterSection::RemoveColorParameter(void* InParameterName) {
    return;
}
bool _Script_MovieSceneTracks::MovieSceneParameterSection::RemoveBoolParameter(void* InParameterName) {
    return;
}
void _Script_MovieSceneTracks::MovieSceneParameterSection::AddVectorParameterKey(void* InParameterName, _Script_CoreUObject::FrameNumber InTime, _Script_CoreUObject::Vector InValue) {
    return;
}
void _Script_MovieSceneTracks::MovieSceneParameterSection::AddVector2DParameterKey(void* InParameterName, _Script_CoreUObject::FrameNumber InTime, _Script_CoreUObject::Vector2D InValue) {
    return;
}
void _Script_MovieSceneTracks::MovieSceneParameterSection::AddTransformParameterKey(void* InParameterName, _Script_CoreUObject::FrameNumber InTime, _Script_CoreUObject::Transform& InValue) {
    return;
}
void _Script_MovieSceneTracks::MovieSceneParameterSection::AddScalarParameterKey(void* InParameterName, _Script_CoreUObject::FrameNumber InTime, float InValue) {
    return;
}
void _Script_MovieSceneTracks::MovieSceneParameterSection::AddColorParameterKey(void* InParameterName, _Script_CoreUObject::FrameNumber InTime, _Script_CoreUObject::LinearColor InValue) {
    return;
}
void _Script_MovieSceneTracks::MovieSceneParameterSection::AddBoolParameterKey(void* InParameterName, _Script_CoreUObject::FrameNumber InTime, bool InValue) {
    return;
}
