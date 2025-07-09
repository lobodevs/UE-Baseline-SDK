#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneSection.hpp"
#include "MovieScene3DTransformSection.hpp"
bool _Script_MovieSceneTracks::MovieScene3DTransformSection::get_bUseQuaternionInterpolation() {
    return (*(uint8_t*)((uintptr_t)this + 0x738 + 0)) & 1 != 0;
}
void* _Script_MovieSceneTracks::MovieScene3DTransformSection::get_TransformMask() {
    return (void*)((uintptr_t)this + 0xf0);
}
void* _Script_MovieSceneTracks::MovieScene3DTransformSection::get_Rotation() {
    return (void*)((uintptr_t)this + 0x2d8);
}
void* _Script_MovieSceneTracks::MovieScene3DTransformSection::get_Translation() {
    return (void*)((uintptr_t)this + 0xf8);
}
void* _Script_MovieSceneTracks::MovieScene3DTransformSection::get_Scale() {
    return (void*)((uintptr_t)this + 0x4b8);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieScene3DTransformSection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieScene3DTransformSection");
    return result;
}
void* _Script_MovieSceneTracks::MovieScene3DTransformSection::get_ManualWeight() {
    return (void*)((uintptr_t)this + 0x698);
}
void _Script_MovieSceneTracks::MovieScene3DTransformSection::set_bUseQuaternionInterpolation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x738 + 0);
    *(uint8_t*)((uintptr_t)this + 0x738 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
