#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Niagara\NiagaraDataInterface.hpp"
namespace _Script_Engine {
struct Blueprint;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ChaosNiagara {
#pragma pack(push, 1)
struct NiagaraDataInterfaceFieldSystem : public _Script_Niagara::NiagaraDataInterface {
    private: char pad_38[0x58]; public:
    _Script_Engine::Blueprint*& get_BlueprintSource();
    _Script_Engine::Actor*& get_SourceActor();
    void* get_FieldDimensions();
    void* get_MinBounds();
    void* get_MaxBounds();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x90
#pragma pack(pop)
}
