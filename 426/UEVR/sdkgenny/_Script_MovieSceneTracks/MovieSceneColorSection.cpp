#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneSection.hpp"
#include "MovieSceneColorSection.hpp"
void* _Script_MovieSceneTracks::MovieSceneColorSection::get_RedCurve() {
    return (void*)((uintptr_t)this + 0xe8);
}
void* _Script_MovieSceneTracks::MovieSceneColorSection::get_GreenCurve() {
    return (void*)((uintptr_t)this + 0x188);
}
void* _Script_MovieSceneTracks::MovieSceneColorSection::get_BlueCurve() {
    return (void*)((uintptr_t)this + 0x228);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneColorSection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieSceneColorSection");
    return result;
}
void* _Script_MovieSceneTracks::MovieSceneColorSection::get_AlphaCurve() {
    return (void*)((uintptr_t)this + 0x2c8);
}
