#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieScene {
#pragma pack(push, 1)
struct MovieSceneCompiledData : public _Script_CoreUObject::Object {
    private: char pad_28[0x3d0]; public:
    void* get_EvaluationTemplate();
    void* get_Hierarchy();
    void* get_EntityComponentField();
    void* get_TrackTemplateField();
    void* get_DeterminismFences();
    void* get_CompiledSignature();
    void* get_CompilerVersion();
    void* get_AccumulatedMask();
    void* get_AllocatedMask();
    void* get_AccumulatedFlags();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x3f8
#pragma pack(pop)
}
