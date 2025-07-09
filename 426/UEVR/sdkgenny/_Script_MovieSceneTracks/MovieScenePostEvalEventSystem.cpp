#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneEventSystem.hpp"
#include "MovieScenePostEvalEventSystem.hpp"
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieScenePostEvalEventSystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieScenePostEvalEventSystem");
    return result;
}
