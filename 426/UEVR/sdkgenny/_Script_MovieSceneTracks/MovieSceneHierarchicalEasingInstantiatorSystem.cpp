#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneEntityInstantiatorSystem.hpp"
#include "MovieSceneHierarchicalEasingInstantiatorSystem.hpp"
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneHierarchicalEasingInstantiatorSystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieSceneHierarchicalEasingInstantiatorSystem");
    return result;
}
