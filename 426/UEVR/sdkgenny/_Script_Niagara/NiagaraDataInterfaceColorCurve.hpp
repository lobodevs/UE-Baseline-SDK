#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "NiagaraDataInterfaceCurveBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraDataInterfaceColorCurve : public NiagaraDataInterfaceCurveBase {
    private: char pad_70[0x200]; public:
    void* get_RedCurve();
    void* get_GreenCurve();
    void* get_BlueCurve();
    void* get_AlphaCurve();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x270
#pragma pack(pop)
}
