#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieSceneTracks\MovieScenePropertySystem.hpp"
#include "MovieScene2DTransformPropertySystem.hpp"
_Script_CoreUObject::Class* _Script_UMG::MovieScene2DTransformPropertySystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.MovieScene2DTransformPropertySystem");
    return result;
}
