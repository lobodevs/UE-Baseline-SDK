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
struct NiagaraDataInterfaceGrid2D : public NiagaraDataInterfaceRWBase {
    private: char pad_d8[0x20]; public:
    int32_t& get_NumCellsX();
    int32_t& get_NumCellsY();
    int32_t& get_NumCellsMaxAxis();
    int32_t& get_NumAttributes();
    bool get_SetGridFromMaxAxis();
    void set_SetGridFromMaxAxis(bool value);
    void* get_WorldBBoxSize();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xf8
#pragma pack(pop)
}
