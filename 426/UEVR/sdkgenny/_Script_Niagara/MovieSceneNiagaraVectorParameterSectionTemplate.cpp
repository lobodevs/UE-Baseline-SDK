#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneNiagaraParameterSectionTemplate.hpp"
#include "MovieSceneNiagaraVectorParameterSectionTemplate.hpp"
_Script_CoreUObject::Class* _Script_Niagara::MovieSceneNiagaraVectorParameterSectionTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.MovieSceneNiagaraVectorParameterSectionTemplate");
    return result;
}
void* _Script_Niagara::MovieSceneNiagaraVectorParameterSectionTemplate::get_VectorChannels() {
    return (void*)((uintptr_t)this + 0x40);
}
int32_t& _Script_Niagara::MovieSceneNiagaraVectorParameterSectionTemplate::get_ChannelsUsed() {
    return *(int32_t*)((uintptr_t)this + 0x2c0);
}
