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
struct NiagaraSystemScalabilitySettings {
    private: char pad_0[0x48]; public:
    void* get_Platforms();
    bool get_bCullByDistance();
    void set_bCullByDistance(bool value);
    bool get_bCullMaxInstanceCount();
    void set_bCullMaxInstanceCount(bool value);
    bool get_bCullPerSystemMaxInstanceCount();
    void set_bCullPerSystemMaxInstanceCount(bool value);
    bool get_bCullByMaxTimeWithoutRender();
    void set_bCullByMaxTimeWithoutRender(bool value);
    float& get_MaxDistance();
    int32_t& get_MaxInstances();
    int32_t& get_MaxSystemInstances();
    float& get_MaxTimeWithoutRender();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
