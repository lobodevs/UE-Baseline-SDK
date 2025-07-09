#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraPlatformSetCVarCondition {
    private: char pad_0[0x28]; public:
    void* get_CVarName();
    bool get_Value();
    void set_Value(bool value);
    int32_t& get_MinInt();
    int32_t& get_MaxInt();
    float& get_MinFloat();
    float& get_MaxFloat();
    bool get_bUseMinInt();
    void set_bUseMinInt(bool value);
    bool get_bUseMaxInt();
    void set_bUseMaxInt(bool value);
    bool get_bUseMinFloat();
    void set_bUseMinFloat(bool value);
    bool get_bUseMaxFloat();
    void set_bUseMaxFloat(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
