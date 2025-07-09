#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "NiagaraPreviewAxis.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraPreviewAxis_InterpParamBase : public NiagaraPreviewAxis {
    private: char pad_28[0x10]; public:
    void* get_Param();
    int32_t& get_Count();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
