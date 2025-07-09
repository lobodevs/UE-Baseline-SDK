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
struct MovieSceneSequenceCompilerMaskStruct {
    private: char pad_0[0x1]; public:
    bool get_bHierarchy();
    void set_bHierarchy(bool value);
    bool get_bEvaluationTemplate();
    void set_bEvaluationTemplate(bool value);
    bool get_bEvaluationTemplateField();
    void set_bEvaluationTemplateField(bool value);
    bool get_bEntityComponentField();
    void set_bEntityComponentField(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1
#pragma pack(pop)
}
