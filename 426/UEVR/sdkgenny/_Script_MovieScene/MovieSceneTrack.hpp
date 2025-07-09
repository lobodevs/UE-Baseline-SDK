#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MovieSceneSignedObject.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieScene {
#pragma pack(push, 1)
struct MovieSceneTrack : public MovieSceneSignedObject {
    private: char pad_50[0x28]; public:
    void* get_EvalOptions();
    bool get_bIsEvalDisabled();
    void set_bIsEvalDisabled(bool value);
    void* get_EvaluationFieldGuid();
    void* get_EvaluationField();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x78
#pragma pack(pop)
}
