#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneBlenderSystem.hpp"
#include "MovieScenePiecewiseFloatBlenderSystem.hpp"
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieScenePiecewiseFloatBlenderSystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieScenePiecewiseFloatBlenderSystem");
    return result;
}
