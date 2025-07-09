#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneEventSystem.hpp"
#include "MovieScenePreSpawnEventSystem.hpp"
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieScenePreSpawnEventSystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieScenePreSpawnEventSystem");
    return result;
}
