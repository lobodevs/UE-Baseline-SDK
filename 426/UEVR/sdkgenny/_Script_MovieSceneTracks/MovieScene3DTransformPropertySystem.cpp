#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieScene3DTransformPropertySystem.hpp"
#include "MovieScenePropertySystem.hpp"
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieScene3DTransformPropertySystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieScene3DTransformPropertySystem");
    return result;
}
