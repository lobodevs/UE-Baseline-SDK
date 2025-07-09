#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieScene {
#pragma pack(push, 1)
struct MovieSceneEditorData {
    private: char pad_0[0xf0]; public:
    void* get_ExpansionStates();
    void* get_PinnedNodes();
    double& get_ViewStart();
    double& get_ViewEnd();
    double& get_WorkStart();
    double& get_WorkEnd();
    void* get_MarkedFrames();
    void* get_WorkingRange();
    void* get_ViewRange();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xf0
#pragma pack(pop)
}
