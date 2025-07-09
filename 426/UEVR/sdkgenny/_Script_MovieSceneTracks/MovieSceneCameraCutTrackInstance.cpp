#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneTrackInstance.hpp"
#include "MovieSceneCameraCutTrackInstance.hpp"
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneCameraCutTrackInstance::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieSceneCameraCutTrackInstance");
    return result;
}
