#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Function.hpp"
#include "MovieSceneEventPtrs.hpp"
_Script_CoreUObject::Function*& _Script_MovieSceneTracks::MovieSceneEventPtrs::get_Function() {
    return *(_Script_CoreUObject::Function**)((uintptr_t)this + 0x0);
}
void* _Script_MovieSceneTracks::MovieSceneEventPtrs::get_BoundObjectProperty() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneEventPtrs::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.MovieSceneEventPtrs");
    return result;
}
