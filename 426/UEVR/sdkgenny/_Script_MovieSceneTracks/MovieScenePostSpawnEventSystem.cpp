#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneEventSystem.hpp"
#include "MovieScenePostSpawnEventSystem.hpp"
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieScenePostSpawnEventSystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieScenePostSpawnEventSystem");
    return result;
}
