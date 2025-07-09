#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneFloatPropertySystem.hpp"
#include "MovieScenePropertySystem.hpp"
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneFloatPropertySystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieSceneFloatPropertySystem");
    return result;
}
