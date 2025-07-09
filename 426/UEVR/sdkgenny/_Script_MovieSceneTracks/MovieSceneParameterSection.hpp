#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\FrameNumber.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_MovieScene\MovieSceneSection.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Transform;
}
namespace _Script_MovieSceneTracks {
#pragma pack(push, 1)
struct MovieSceneParameterSection : public _Script_MovieScene::MovieSceneSection {
    private: char pad_e8[0x60]; public:
    void* get_BoolParameterNamesAndCurves();
    void* get_ScalarParameterNamesAndCurves();
    void* get_Vector2DParameterNamesAndCurves();
    void* get_VectorParameterNamesAndCurves();
    void* get_ColorParameterNamesAndCurves();
    void* get_TransformParameterNamesAndCurves();
    static _Script_CoreUObject::Class* static_class();
    bool RemoveVectorParameter(void* InParameterName);
    bool RemoveVector2DParameter(void* InParameterName);
    bool RemoveTransformParameter(void* InParameterName);
    bool RemoveScalarParameter(void* InParameterName);
    bool RemoveColorParameter(void* InParameterName);
    bool RemoveBoolParameter(void* InParameterName);
    void GetParameterNames(void*& ParameterNames);
    void AddVectorParameterKey(void* InParameterName, _Script_CoreUObject::FrameNumber InTime, _Script_CoreUObject::Vector InValue);
    void AddVector2DParameterKey(void* InParameterName, _Script_CoreUObject::FrameNumber InTime, _Script_CoreUObject::Vector2D InValue);
    void AddTransformParameterKey(void* InParameterName, _Script_CoreUObject::FrameNumber InTime, _Script_CoreUObject::Transform& InValue);
    void AddScalarParameterKey(void* InParameterName, _Script_CoreUObject::FrameNumber InTime, float InValue);
    void AddColorParameterKey(void* InParameterName, _Script_CoreUObject::FrameNumber InTime, _Script_CoreUObject::LinearColor InValue);
    void AddBoolParameterKey(void* InParameterName, _Script_CoreUObject::FrameNumber InTime, bool InValue);
}; // Size: 0x148
#pragma pack(pop)
}
