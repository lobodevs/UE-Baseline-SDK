#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_Niagara {
struct NiagaraRendererProperties;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraMaterialOverride {
    private: char pad_0[0x18]; public:
    _Script_Engine::MaterialInterface*& get_Material();
    void* get_MaterialSubIndex();
    _Script_Niagara::NiagaraRendererProperties*& get_EmitterRendererProperty();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
