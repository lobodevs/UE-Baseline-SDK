#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieScenePropertySectionTemplate.hpp"
#include "MovieSceneObjectPropertyTemplate.hpp"
void* _Script_MovieSceneTracks::MovieSceneObjectPropertyTemplate::get_ObjectChannel() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneObjectPropertyTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.MovieSceneObjectPropertyTemplate");
    return result;
}
