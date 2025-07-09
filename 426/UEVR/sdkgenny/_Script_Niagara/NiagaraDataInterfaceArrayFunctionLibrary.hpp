#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
struct NiagaraComponent;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraDataInterfaceArrayFunctionLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void SetNiagaraArrayVector4(_Script_Niagara::NiagaraComponent* NiagaraSystem, void* OverrideName, void*& ArrayData);
    void SetNiagaraArrayVector2D(_Script_Niagara::NiagaraComponent* NiagaraSystem, void* OverrideName, void*& ArrayData);
    void SetNiagaraArrayVector(_Script_Niagara::NiagaraComponent* NiagaraSystem, void* OverrideName, void*& ArrayData);
    void SetNiagaraArrayQuat(_Script_Niagara::NiagaraComponent* NiagaraSystem, void* OverrideName, void*& ArrayData);
    void SetNiagaraArrayInt32(_Script_Niagara::NiagaraComponent* NiagaraSystem, void* OverrideName, void*& ArrayData);
    void SetNiagaraArrayFloat(_Script_Niagara::NiagaraComponent* NiagaraSystem, void* OverrideName, void*& ArrayData);
    void SetNiagaraArrayColor(_Script_Niagara::NiagaraComponent* NiagaraSystem, void* OverrideName, void*& ArrayData);
    void SetNiagaraArrayBool(_Script_Niagara::NiagaraComponent* NiagaraSystem, void* OverrideName, void*& ArrayData);
    void* GetNiagaraArrayVector4(_Script_Niagara::NiagaraComponent* NiagaraSystem, void* OverrideName);
    void* GetNiagaraArrayVector2D(_Script_Niagara::NiagaraComponent* NiagaraSystem, void* OverrideName);
    void* GetNiagaraArrayVector(_Script_Niagara::NiagaraComponent* NiagaraSystem, void* OverrideName);
    void* GetNiagaraArrayQuat(_Script_Niagara::NiagaraComponent* NiagaraSystem, void* OverrideName);
    void* GetNiagaraArrayInt32(_Script_Niagara::NiagaraComponent* NiagaraSystem, void* OverrideName);
    void* GetNiagaraArrayFloat(_Script_Niagara::NiagaraComponent* NiagaraSystem, void* OverrideName);
    void* GetNiagaraArrayColor(_Script_Niagara::NiagaraComponent* NiagaraSystem, void* OverrideName);
    void* GetNiagaraArrayBool(_Script_Niagara::NiagaraComponent* NiagaraSystem, void* OverrideName);
}; // Size: 0x28
#pragma pack(pop)
}
