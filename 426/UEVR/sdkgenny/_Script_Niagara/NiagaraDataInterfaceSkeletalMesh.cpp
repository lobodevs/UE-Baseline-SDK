#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
#include "NiagaraDataInterface.hpp"
#include "NiagaraDataInterfaceSkeletalMesh.hpp"
void* _Script_Niagara::NiagaraDataInterfaceSkeletalMesh::get_SourceMode() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_Engine::Actor*& _Script_Niagara::NiagaraDataInterfaceSkeletalMesh::get_Source() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x40);
}
void* _Script_Niagara::NiagaraDataInterfaceSkeletalMesh::get_SkinningMode() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_Niagara::NiagaraDataInterfaceSkeletalMesh::get_MeshUserParameter() {
    return (void*)((uintptr_t)this + 0x48);
}
_Script_Engine::SkeletalMeshComponent*& _Script_Niagara::NiagaraDataInterfaceSkeletalMesh::get_SourceComponent() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x68);
}
void* _Script_Niagara::NiagaraDataInterfaceSkeletalMesh::get_SamplingRegions() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_Niagara::NiagaraDataInterfaceSkeletalMesh::get_FilteredBones() {
    return (void*)((uintptr_t)this + 0x90);
}
int32_t& _Script_Niagara::NiagaraDataInterfaceSkeletalMesh::get_WholeMeshLOD() {
    return *(int32_t*)((uintptr_t)this + 0x88);
}
void* _Script_Niagara::NiagaraDataInterfaceSkeletalMesh::get_FilteredSockets() {
    return (void*)((uintptr_t)this + 0xa0);
}
void* _Script_Niagara::NiagaraDataInterfaceSkeletalMesh::get_ExcludeBoneName() {
    return (void*)((uintptr_t)this + 0xb0);
}
bool _Script_Niagara::NiagaraDataInterfaceSkeletalMesh::get_bExcludeBone() {
    return (*(uint8_t*)((uintptr_t)this + 0xb8 + 0)) & 1 != 0;
}
void _Script_Niagara::NiagaraDataInterfaceSkeletalMesh::set_bExcludeBone(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Niagara::NiagaraDataInterfaceSkeletalMesh::get_bRequireCurrentFrameData() {
    return (*(uint8_t*)((uintptr_t)this + 0xb9 + 0)) & 1 != 0;
}
void _Script_Niagara::NiagaraDataInterfaceSkeletalMesh::set_bRequireCurrentFrameData(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb9 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraDataInterfaceSkeletalMesh::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraDataInterfaceSkeletalMesh");
    return result;
}
