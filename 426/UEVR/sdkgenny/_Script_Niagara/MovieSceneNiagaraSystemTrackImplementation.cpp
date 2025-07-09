#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneTrackImplementation.hpp"
#include "MovieSceneNiagaraSystemTrackImplementation.hpp"
void* _Script_Niagara::MovieSceneNiagaraSystemTrackImplementation::get_SpawnSectionEndBehavior() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_Niagara::MovieSceneNiagaraSystemTrackImplementation::get_SpawnSectionEndFrame() {
    return (void*)((uintptr_t)this + 0x14);
}
void* _Script_Niagara::MovieSceneNiagaraSystemTrackImplementation::get_SpawnSectionStartFrame() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Niagara::MovieSceneNiagaraSystemTrackImplementation::get_SpawnSectionStartBehavior() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_Niagara::MovieSceneNiagaraSystemTrackImplementation::get_SpawnSectionEvaluateBehavior() {
    return (void*)((uintptr_t)this + 0x1c);
}
void* _Script_Niagara::MovieSceneNiagaraSystemTrackImplementation::get_AgeUpdateMode() {
    return (void*)((uintptr_t)this + 0x24);
}
_Script_CoreUObject::Class* _Script_Niagara::MovieSceneNiagaraSystemTrackImplementation::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.MovieSceneNiagaraSystemTrackImplementation");
    return result;
}
