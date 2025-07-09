#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "NiagaraDataInterface.hpp"
namespace _Script_Engine {
struct VectorField;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraDataInterfaceVectorField : public NiagaraDataInterface {
    private: char pad_38[0x10]; public:
    _Script_Engine::VectorField*& get_Field();
    bool get_bTileX();
    void set_bTileX(bool value);
    bool get_bTileY();
    void set_bTileY(bool value);
    bool get_bTileZ();
    void set_bTileZ(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
