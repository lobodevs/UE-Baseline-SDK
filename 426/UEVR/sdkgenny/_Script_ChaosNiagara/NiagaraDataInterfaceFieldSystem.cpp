#include "..\FUObjectArray.hpp"
#include "NiagaraDataInterfaceFieldSystem.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\Blueprint.hpp"
#include "..\_Script_Niagara\NiagaraDataInterface.hpp"
_Script_Engine::Blueprint*& _Script_ChaosNiagara::NiagaraDataInterfaceFieldSystem::get_BlueprintSource() {
    return *(_Script_Engine::Blueprint**)((uintptr_t)this + 0x38);
}
_Script_Engine::Actor*& _Script_ChaosNiagara::NiagaraDataInterfaceFieldSystem::get_SourceActor() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x40);
}
void* _Script_ChaosNiagara::NiagaraDataInterfaceFieldSystem::get_FieldDimensions() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_ChaosNiagara::NiagaraDataInterfaceFieldSystem::get_MinBounds() {
    return (void*)((uintptr_t)this + 0x54);
}
void* _Script_ChaosNiagara::NiagaraDataInterfaceFieldSystem::get_MaxBounds() {
    return (void*)((uintptr_t)this + 0x60);
}
_Script_CoreUObject::Class* _Script_ChaosNiagara::NiagaraDataInterfaceFieldSystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ChaosNiagara.NiagaraDataInterfaceFieldSystem");
    return result;
}
