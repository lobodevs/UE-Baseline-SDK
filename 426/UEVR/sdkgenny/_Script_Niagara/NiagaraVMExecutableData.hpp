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
struct NiagaraVMExecutableData {
    private: char pad_0[0xe0]; public:
    void* get_ByteCode();
    void* get_OptimizedByteCode();
    int32_t& get_NumTempRegisters();
    int32_t& get_NumUserPtrs();
    void* get_ScriptLiterals();
    void* get_Attributes();
    void* get_DataUsage();
    void* get_DataInterfaceInfo();
    void* get_CalledVMExternalFunctions();
    void* get_ReadDataSets();
    void* get_WriteDataSets();
    void* get_StatScopes();
    void* get_DIParamInfo();
    void* get_LastCompileStatus();
    void* get_SimulationStageMetaData();
    bool get_bReadsSignificanceIndex();
    void set_bReadsSignificanceIndex(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xe0
#pragma pack(pop)
}
