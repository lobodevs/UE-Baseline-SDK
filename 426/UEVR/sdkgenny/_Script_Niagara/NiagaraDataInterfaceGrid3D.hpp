#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "NiagaraDataInterfaceRWBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraDataInterfaceGrid3D : public NiagaraDataInterfaceRWBase {
    private: char pad_d8[0x28]; public:
    void* get_NumCells();
    float& get_CellSize();
    int32_t& get_NumCellsMaxAxis();
    void* get_SetResolutionMethod();
    void* get_WorldBBoxSize();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x100
#pragma pack(pop)
}
