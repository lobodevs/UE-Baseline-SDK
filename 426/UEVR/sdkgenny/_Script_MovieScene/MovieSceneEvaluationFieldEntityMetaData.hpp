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
struct MovieSceneEvaluationFieldEntityMetaData {
    private: char pad_0[0xc]; public:
    void* get_ForcedTime();
    void* get_Flags();
    bool get_bEvaluateInSequencePreRoll();
    void set_bEvaluateInSequencePreRoll(bool value);
    bool get_bEvaluateInSequencePostRoll();
    void set_bEvaluateInSequencePostRoll(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc
#pragma pack(pop)
}
