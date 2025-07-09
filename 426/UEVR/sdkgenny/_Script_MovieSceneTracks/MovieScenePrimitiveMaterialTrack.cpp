#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieScenePrimitiveMaterialTrack.hpp"
#include "MovieScenePropertyTrack.hpp"
int32_t& _Script_MovieSceneTracks::MovieScenePrimitiveMaterialTrack::get_MaterialIndex() {
    return *(int32_t*)((uintptr_t)this + 0xb0);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieScenePrimitiveMaterialTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieScenePrimitiveMaterialTrack");
    return result;
}
