#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Niagara {
struct NiagaraComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraActor : public _Script_Engine::Actor {
    private: char pad_220[0x10]; public:
    _Script_Niagara::NiagaraComponent*& get_NiagaraComponent();
    bool get_bDestroyOnSystemFinish();
    void set_bDestroyOnSystemFinish(bool value);
    static _Script_CoreUObject::Class* static_class();
    void SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish);
    void OnNiagaraSystemFinished(_Script_Niagara::NiagaraComponent* FinishedComponent);
}; // Size: 0x230
#pragma pack(pop)
}
