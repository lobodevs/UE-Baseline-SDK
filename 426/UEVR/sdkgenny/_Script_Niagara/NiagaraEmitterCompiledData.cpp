#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraEmitterCompiledData.hpp"
void* _Script_Niagara::NiagaraEmitterCompiledData::get_SpawnAttributes() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Niagara::NiagaraEmitterCompiledData::get_EmitterInstanceSeedVar() {
    return (void*)((uintptr_t)this + 0xb0);
}
void* _Script_Niagara::NiagaraEmitterCompiledData::get_EmitterInterpSpawnStartDTVar() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Niagara::NiagaraEmitterCompiledData::get_EmitterSpawnIntervalVar() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Niagara::NiagaraEmitterCompiledData::get_EmitterSpawnGroupVar() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_Niagara::NiagaraEmitterCompiledData::get_EmitterRandomSeedVar() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_Niagara::NiagaraEmitterCompiledData::get_EmitterAgeVar() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_Niagara::NiagaraEmitterCompiledData::get_EmitterTotalSpawnedParticlesVar() {
    return (void*)((uintptr_t)this + 0xd0);
}
void* _Script_Niagara::NiagaraEmitterCompiledData::get_DataSetCompiledData() {
    return (void*)((uintptr_t)this + 0xf0);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraEmitterCompiledData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraEmitterCompiledData");
    return result;
}
