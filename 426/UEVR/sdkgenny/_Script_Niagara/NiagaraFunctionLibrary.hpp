#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
struct NiagaraComponent;
}
namespace _Script_Niagara {
struct NiagaraSystem;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_Engine {
struct VolumeTexture;
}
namespace _Script_Engine {
struct Texture;
}
namespace _Script_Engine {
struct StaticMesh;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Niagara {
struct NiagaraParameterCollection;
}
namespace _Script_Niagara {
struct NiagaraParameterCollectionInstance;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraFunctionLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    _Script_Niagara::NiagaraComponent* SpawnSystemAttached(_Script_Niagara::NiagaraSystem* SystemTemplate, _Script_Engine::SceneComponent* AttachToComponent, void* AttachPointName, _Script_CoreUObject::Vector Location, _Script_CoreUObject::Rotator Rotation, void* LocationType, bool bAutoDestroy, bool bAutoActivate, void* PoolingMethod, bool bPreCullCheck);
    _Script_Niagara::NiagaraComponent* SpawnSystemAtLocation(_Script_CoreUObject::Object* WorldContextObject, _Script_Niagara::NiagaraSystem* SystemTemplate, _Script_CoreUObject::Vector Location, _Script_CoreUObject::Rotator Rotation, _Script_CoreUObject::Vector Scale, bool bAutoDestroy, bool bAutoActivate, void* PoolingMethod, bool bPreCullCheck);
    void SetVolumeTextureObject(_Script_Niagara::NiagaraComponent* NiagaraSystem, void* OverrideName, _Script_Engine::VolumeTexture* Texture);
    void SetTextureObject(_Script_Niagara::NiagaraComponent* NiagaraSystem, void* OverrideName, _Script_Engine::Texture* Texture);
    void SetSkeletalMeshDataInterfaceSamplingRegions(_Script_Niagara::NiagaraComponent* NiagaraSystem, void* OverrideName, void*& SamplingRegions);
    void OverrideSystemUserVariableStaticMeshComponent(_Script_Niagara::NiagaraComponent* NiagaraSystem, void* OverrideName, _Script_Engine::StaticMeshComponent* StaticMeshComponent);
    void OverrideSystemUserVariableStaticMesh(_Script_Niagara::NiagaraComponent* NiagaraSystem, void* OverrideName, _Script_Engine::StaticMesh* StaticMesh);
    void OverrideSystemUserVariableSkeletalMeshComponent(_Script_Niagara::NiagaraComponent* NiagaraSystem, void* OverrideName, _Script_Engine::SkeletalMeshComponent* SkeletalMeshComponent);
    _Script_Niagara::NiagaraParameterCollectionInstance* GetNiagaraParameterCollection(_Script_CoreUObject::Object* WorldContextObject, _Script_Niagara::NiagaraParameterCollection* Collection);
}; // Size: 0x28
#pragma pack(pop)
}
