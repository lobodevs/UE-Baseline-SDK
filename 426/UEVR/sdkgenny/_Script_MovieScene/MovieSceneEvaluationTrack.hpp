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
struct MovieSceneEvaluationTrack {
    private: char pad_0[0x78]; public:
    void* get_ObjectBindingId();
    void* get_EvaluationPriority();
    void* get_EvaluationMethod();
    void* get_SourceTrack();
    void* get_ChildTemplates();
    void* get_TrackTemplate();
    void* get_EvaluationGroup();
    bool get_bEvaluateInPreroll();
    void set_bEvaluateInPreroll(bool value);
    bool get_bEvaluateInPostroll();
    void set_bEvaluateInPostroll(bool value);
    bool get_bTearDownPriority();
    void set_bTearDownPriority(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x78
#pragma pack(pop)
}
