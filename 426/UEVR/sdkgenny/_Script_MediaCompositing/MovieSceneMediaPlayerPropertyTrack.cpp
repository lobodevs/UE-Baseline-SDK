#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneMediaPlayerPropertyTrack.hpp"
#include "..\_Script_MovieSceneTracks\MovieScenePropertyTrack.hpp"
_Script_CoreUObject::Class* _Script_MediaCompositing::MovieSceneMediaPlayerPropertyTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MediaCompositing.MovieSceneMediaPlayerPropertyTrack");
    return result;
}
