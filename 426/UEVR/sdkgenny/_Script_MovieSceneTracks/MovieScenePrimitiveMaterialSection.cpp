#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneSection.hpp"
#include "MovieScenePrimitiveMaterialSection.hpp"
void* _Script_MovieSceneTracks::MovieScenePrimitiveMaterialSection::get_MaterialChannel() {
    return (void*)((uintptr_t)this + 0xe8);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieScenePrimitiveMaterialSection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieScenePrimitiveMaterialSection");
    return result;
}
