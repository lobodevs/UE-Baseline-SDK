#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneEntitySystem.hpp"
#include "MovieScenePropertyInstantiatorSystem.hpp"
#include "MovieScenePropertySystem.hpp"
_Script_MovieSceneTracks::MovieScenePropertyInstantiatorSystem*& _Script_MovieSceneTracks::MovieScenePropertySystem::get_InstantiatorSystem() {
    return *(_Script_MovieSceneTracks::MovieScenePropertyInstantiatorSystem**)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieScenePropertySystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieScenePropertySystem");
    return result;
}
