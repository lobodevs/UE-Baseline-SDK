#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneNiagaraBoolParameterSectionTemplate.hpp"
#include "MovieSceneNiagaraParameterSectionTemplate.hpp"
void* _Script_Niagara::MovieSceneNiagaraBoolParameterSectionTemplate::get_BoolChannel() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_Niagara::MovieSceneNiagaraBoolParameterSectionTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.MovieSceneNiagaraBoolParameterSectionTemplate");
    return result;
}
