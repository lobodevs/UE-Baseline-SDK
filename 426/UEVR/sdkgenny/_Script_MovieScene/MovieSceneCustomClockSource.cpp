#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\FrameTime.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
#include "..\_Script_CoreUObject\QualifiedFrameTime.hpp"
#include "MovieSceneCustomClockSource.hpp"
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneCustomClockSource::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieScene.MovieSceneCustomClockSource");
    return result;
}
void _Script_MovieScene::MovieSceneCustomClockSource::OnTick(float DeltaSeconds, float InPlayRate) {
    return;
}
void _Script_MovieScene::MovieSceneCustomClockSource::OnStopPlaying(_Script_CoreUObject::QualifiedFrameTime& InStopTime) {
    return;
}
void _Script_MovieScene::MovieSceneCustomClockSource::OnStartPlaying(_Script_CoreUObject::QualifiedFrameTime& InStartTime) {
    return;
}
_Script_CoreUObject::FrameTime _Script_MovieScene::MovieSceneCustomClockSource::OnRequestCurrentTime(_Script_CoreUObject::QualifiedFrameTime& InCurrentTime, float InPlayRate) {
    return;
}
