#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MovieScene\MovieSceneObjectBindingID.hpp"
#include "..\_Script_MovieScene\MovieSceneSection.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneTracks {
#pragma pack(push, 1)
struct MovieScene3DConstraintSection : public _Script_MovieScene::MovieSceneSection {
    private: char pad_e8[0x28]; public:
    void* get_ConstraintId();
    void* get_ConstraintBindingID();
    static _Script_CoreUObject::Class* static_class();
    void SetConstraintBindingID(_Script_MovieScene::MovieSceneObjectBindingID& InConstraintBindingID);
    _Script_MovieScene::MovieSceneObjectBindingID GetConstraintBindingID();
}; // Size: 0x110
#pragma pack(pop)
}
