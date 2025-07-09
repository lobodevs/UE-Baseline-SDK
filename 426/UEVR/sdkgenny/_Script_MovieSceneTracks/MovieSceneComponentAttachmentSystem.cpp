#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneEntityInstantiatorSystem.hpp"
#include "MovieSceneComponentAttachmentSystem.hpp"
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneComponentAttachmentSystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieSceneComponentAttachmentSystem");
    return result;
}
