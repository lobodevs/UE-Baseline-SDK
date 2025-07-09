#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneSection.hpp"
#include "MovieScene2DTransformSection.hpp"
_Script_CoreUObject::Class* _Script_UMG::MovieScene2DTransformSection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.MovieScene2DTransformSection");
    return result;
}
void* _Script_UMG::MovieScene2DTransformSection::get_TransformMask() {
    return (void*)((uintptr_t)this + 0xf0);
}
void* _Script_UMG::MovieScene2DTransformSection::get_Translation() {
    return (void*)((uintptr_t)this + 0xf8);
}
void* _Script_UMG::MovieScene2DTransformSection::get_Rotation() {
    return (void*)((uintptr_t)this + 0x238);
}
void* _Script_UMG::MovieScene2DTransformSection::get_Scale() {
    return (void*)((uintptr_t)this + 0x2d8);
}
void* _Script_UMG::MovieScene2DTransformSection::get_Shear() {
    return (void*)((uintptr_t)this + 0x418);
}
