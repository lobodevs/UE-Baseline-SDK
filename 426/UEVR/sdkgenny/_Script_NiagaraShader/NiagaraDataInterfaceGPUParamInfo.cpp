#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraDataInterfaceGPUParamInfo.hpp"
_Script_CoreUObject::Class* _Script_NiagaraShader::NiagaraDataInterfaceGPUParamInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/NiagaraShader.NiagaraDataInterfaceGPUParamInfo");
    return result;
}
void* _Script_NiagaraShader::NiagaraDataInterfaceGPUParamInfo::get_DataInterfaceHLSLSymbol() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_NiagaraShader::NiagaraDataInterfaceGPUParamInfo::get_DIClassName() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_NiagaraShader::NiagaraDataInterfaceGPUParamInfo::get_GeneratedFunctions() {
    return (void*)((uintptr_t)this + 0x20);
}
