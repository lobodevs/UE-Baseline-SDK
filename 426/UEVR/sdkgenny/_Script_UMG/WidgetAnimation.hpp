#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MovieScene\MovieSceneSequence.hpp"
namespace _Script_MovieScene {
struct MovieScene;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
struct UserWidget;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct WidgetAnimation : public _Script_MovieScene::MovieSceneSequence {
    private: char pad_60[0x30]; public:
    _Script_MovieScene::MovieScene*& get_MovieScene();
    void* get_AnimationBindings();
    bool get_bLegacyFinishOnStop();
    void set_bLegacyFinishOnStop(bool value);
    void* get_DisplayLabel();
    static _Script_CoreUObject::Class* static_class();
    void UnbindFromAnimationStarted(_Script_UMG::UserWidget* Widget, void* Delegate);
    void UnbindFromAnimationFinished(_Script_UMG::UserWidget* Widget, void* Delegate);
    void UnbindAllFromAnimationStarted(_Script_UMG::UserWidget* Widget);
    void UnbindAllFromAnimationFinished(_Script_UMG::UserWidget* Widget);
    float GetStartTime();
    float GetEndTime();
    void BindToAnimationStarted(_Script_UMG::UserWidget* Widget, void* Delegate);
    void BindToAnimationFinished(_Script_UMG::UserWidget* Widget, void* Delegate);
}; // Size: 0x90
#pragma pack(pop)
}
