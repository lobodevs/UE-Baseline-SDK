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
struct NiagaraDataSetCompiledData {
    private: char pad_0[0x40]; public:
    void* get_Variables();
    void* get_VariableLayouts();
    void* get_ID();
    void* get_TotalFloatComponents();
    void* get_TotalInt32Components();
    void* get_TotalHalfComponents();
    bool get_bRequiresPersistentIDs();
    void set_bRequiresPersistentIDs(bool value);
    void* get_SimTarget();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
