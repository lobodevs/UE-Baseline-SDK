#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneEntitySystem.hpp"
#include "MovieSceneQuaternionInterpolationRotationSystem.hpp"
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneQuaternionInterpolationRotationSystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieSceneQuaternionInterpolationRotationSystem");
    return result;
}
