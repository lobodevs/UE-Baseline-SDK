#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "NiagaraPreviewAxis_InterpParamBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraPreviewAxis_InterpParamFloat : public NiagaraPreviewAxis_InterpParamBase {
    private: char pad_38[0x8]; public:
    float& get_Min();
    float& get_Max();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
