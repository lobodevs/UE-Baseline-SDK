#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneEvalTemplate.hpp"
#include "MovieSceneAudioSection.hpp"
#include "MovieSceneAudioSectionTemplate.hpp"
_Script_MovieSceneTracks::MovieSceneAudioSection*& _Script_MovieSceneTracks::MovieSceneAudioSectionTemplate::get_AudioSection() {
    return *(_Script_MovieSceneTracks::MovieSceneAudioSection**)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneAudioSectionTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.MovieSceneAudioSectionTemplate");
    return result;
}
