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
struct NiagaraVMExecutableDataId {
    private: char pad_0[0x48]; public:
    void* get_CompilerVersionID();
    void* get_ScriptUsageType();
    void* get_ScriptUsageTypeID();
    bool get_bUsesRapidIterationParams();
    void set_bUsesRapidIterationParams(bool value);
    bool get_bInterpolatedSpawn();
    void set_bInterpolatedSpawn(bool value);
    bool get_bRequiresPersistentIDs();
    void set_bRequiresPersistentIDs(bool value);
    void* get_BaseScriptID();
    void* get_BaseScriptCompileHash();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
