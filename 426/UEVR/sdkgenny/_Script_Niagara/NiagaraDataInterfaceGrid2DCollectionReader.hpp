#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "NiagaraDataInterfaceGrid2D.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraDataInterfaceGrid2DCollectionReader : public NiagaraDataInterfaceGrid2D {
    private: char pad_f8[0x70]; public:
    void* get_EmitterName();
    void* get_DIName();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x168
#pragma pack(pop)
}
