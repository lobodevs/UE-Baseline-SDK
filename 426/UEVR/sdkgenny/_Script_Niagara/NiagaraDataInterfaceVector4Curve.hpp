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
struct NiagaraDataInterfaceVector4Curve : public NiagaraDataInterfaceCurveBase {
    private: char pad_70[0x200]; public:
    void* get_XCurve();
    void* get_YCurve();
    void* get_ZCurve();
    void* get_WCurve();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x270
#pragma pack(pop)
}
