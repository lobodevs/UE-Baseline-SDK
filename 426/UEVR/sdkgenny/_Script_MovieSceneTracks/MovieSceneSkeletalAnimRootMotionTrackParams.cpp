#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneSkeletalAnimRootMotionTrackParams.hpp"
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneSkeletalAnimRootMotionTrackParams::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.MovieSceneSkeletalAnimRootMotionTrackParams");
    return result;
}
