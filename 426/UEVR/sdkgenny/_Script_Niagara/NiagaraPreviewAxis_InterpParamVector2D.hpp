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
struct NiagaraPreviewAxis_InterpParamVector2D : public NiagaraPreviewAxis_InterpParamBase {
    private: char pad_38[0x10]; public:
    void* get_Min();
    void* get_Max();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
