#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneNameableTrack.hpp"
#include "MovieSceneNiagaraTrack.hpp"
_Script_CoreUObject::Class* _Script_Niagara::MovieSceneNiagaraTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.MovieSceneNiagaraTrack");
    return result;
}
void* _Script_Niagara::MovieSceneNiagaraTrack::get_Sections() {
    return (void*)((uintptr_t)this + 0x78);
}
