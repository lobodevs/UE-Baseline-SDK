#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneSection.hpp"
#include "MovieSceneNiagaraSystemSpawnSection.hpp"
void* _Script_Niagara::MovieSceneNiagaraSystemSpawnSection::get_SectionStartBehavior() {
    return (void*)((uintptr_t)this + 0xe8);
}
void* _Script_Niagara::MovieSceneNiagaraSystemSpawnSection::get_SectionEvaluateBehavior() {
    return (void*)((uintptr_t)this + 0xec);
}
void* _Script_Niagara::MovieSceneNiagaraSystemSpawnSection::get_SectionEndBehavior() {
    return (void*)((uintptr_t)this + 0xf0);
}
void* _Script_Niagara::MovieSceneNiagaraSystemSpawnSection::get_AgeUpdateMode() {
    return (void*)((uintptr_t)this + 0xf4);
}
_Script_CoreUObject::Class* _Script_Niagara::MovieSceneNiagaraSystemSpawnSection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.MovieSceneNiagaraSystemSpawnSection");
    return result;
}
