#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneComponentTransformSystem.hpp"
#include "MovieScenePropertySystem.hpp"
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneComponentTransformSystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieSceneComponentTransformSystem");
    return result;
}
