#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\StaticMesh.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "NiagaraDataInterface.hpp"
#include "NiagaraDataInterfaceStaticMesh.hpp"
_Script_Engine::StaticMesh*& _Script_Niagara::NiagaraDataInterfaceStaticMesh::get_DefaultMesh() {
    return *(_Script_Engine::StaticMesh**)((uintptr_t)this + 0x40);
}
void* _Script_Niagara::NiagaraDataInterfaceStaticMesh::get_SourceMode() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_Engine::Actor*& _Script_Niagara::NiagaraDataInterfaceStaticMesh::get_Source() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x48);
}
void _Script_Niagara::NiagaraDataInterfaceStaticMesh::set_bUsePhysicsBodyVelocity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x68 + 0);
    *(uint8_t*)((uintptr_t)this + 0x68 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::StaticMeshComponent*& _Script_Niagara::NiagaraDataInterfaceStaticMesh::get_SourceComponent() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x50);
}
void* _Script_Niagara::NiagaraDataInterfaceStaticMesh::get_SectionFilter() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_Niagara::NiagaraDataInterfaceStaticMesh::get_FilteredSockets() {
    return (void*)((uintptr_t)this + 0x70);
}
bool _Script_Niagara::NiagaraDataInterfaceStaticMesh::get_bUsePhysicsBodyVelocity() {
    return (*(uint8_t*)((uintptr_t)this + 0x68 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraDataInterfaceStaticMesh::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraDataInterfaceStaticMesh");
    return result;
}
