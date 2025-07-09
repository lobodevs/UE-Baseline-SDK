#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_NiagaraCore\NiagaraMergeable.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraRendererProperties : public _Script_NiagaraCore::NiagaraMergeable {
    private: char pad_28[0x58]; public:
    void* get_Platforms();
    int32_t& get_SortOrderHint();
    bool get_bIsEnabled();
    void set_bIsEnabled(bool value);
    bool get_bMotionBlurEnabled();
    void set_bMotionBlurEnabled(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x80
#pragma pack(pop)
}
