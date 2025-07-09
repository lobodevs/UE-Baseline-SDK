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
struct NiagaraSystemUpdateContext {
    private: char pad_0[0x48]; public:
    void* get_ComponentsToReset();
    void* get_ComponentsToReInit();
    void* get_ComponentsToNotifySimDestroy();
    void* get_SystemSimsToDestroy();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
