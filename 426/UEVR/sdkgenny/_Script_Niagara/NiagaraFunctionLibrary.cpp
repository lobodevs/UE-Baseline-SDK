#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
#include "..\_Script_Engine\StaticMesh.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "..\_Script_Engine\Texture.hpp"
#include "..\_Script_Engine\VolumeTexture.hpp"
#include "NiagaraComponent.hpp"
#include "NiagaraFunctionLibrary.hpp"
#include "NiagaraParameterCollection.hpp"
#include "NiagaraParameterCollectionInstance.hpp"
#include "NiagaraSystem.hpp"
void _Script_Niagara::NiagaraFunctionLibrary::OverrideSystemUserVariableStaticMesh(_Script_Niagara::NiagaraComponent* NiagaraSystem, void* OverrideName, _Script_Engine::StaticMesh* StaticMesh) {
    return;
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraFunctionLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraFunctionLibrary");
    return result;
}
_Script_Niagara::NiagaraComponent* _Script_Niagara::NiagaraFunctionLibrary::SpawnSystemAttached(_Script_Niagara::NiagaraSystem* SystemTemplate, _Script_Engine::SceneComponent* AttachToComponent, void* AttachPointName, _Script_CoreUObject::Vector Location, _Script_CoreUObject::Rotator Rotation, void* LocationType, bool bAutoDestroy, bool bAutoActivate, void* PoolingMethod, bool bPreCullCheck) {
    return;
}
void _Script_Niagara::NiagaraFunctionLibrary::OverrideSystemUserVariableStaticMeshComponent(_Script_Niagara::NiagaraComponent* NiagaraSystem, void* OverrideName, _Script_Engine::StaticMeshComponent* StaticMeshComponent) {
    return;
}
_Script_Niagara::NiagaraComponent* _Script_Niagara::NiagaraFunctionLibrary::SpawnSystemAtLocation(_Script_CoreUObject::Object* WorldContextObject, _Script_Niagara::NiagaraSystem* SystemTemplate, _Script_CoreUObject::Vector Location, _Script_CoreUObject::Rotator Rotation, _Script_CoreUObject::Vector Scale, bool bAutoDestroy, bool bAutoActivate, void* PoolingMethod, bool bPreCullCheck) {
    return;
}
void _Script_Niagara::NiagaraFunctionLibrary::SetVolumeTextureObject(_Script_Niagara::NiagaraComponent* NiagaraSystem, void* OverrideName, _Script_Engine::VolumeTexture* Texture) {
    return;
}
void _Script_Niagara::NiagaraFunctionLibrary::SetSkeletalMeshDataInterfaceSamplingRegions(_Script_Niagara::NiagaraComponent* NiagaraSystem, void* OverrideName, void*& SamplingRegions) {
    return;
}
void _Script_Niagara::NiagaraFunctionLibrary::SetTextureObject(_Script_Niagara::NiagaraComponent* NiagaraSystem, void* OverrideName, _Script_Engine::Texture* Texture) {
    return;
}
void _Script_Niagara::NiagaraFunctionLibrary::OverrideSystemUserVariableSkeletalMeshComponent(_Script_Niagara::NiagaraComponent* NiagaraSystem, void* OverrideName, _Script_Engine::SkeletalMeshComponent* SkeletalMeshComponent) {
    return;
}
_Script_Niagara::NiagaraParameterCollectionInstance* _Script_Niagara::NiagaraFunctionLibrary::GetNiagaraParameterCollection(_Script_CoreUObject::Object* WorldContextObject, _Script_Niagara::NiagaraParameterCollection* Collection) {
    return;
}
