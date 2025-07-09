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
struct MovieSceneCameraCutSection : public _Script_MovieScene::MovieSceneSection {
    private: char pad_e8[0x78]; public:
    bool get_bLockPreviousCamera();
    void set_bLockPreviousCamera(bool value);
    void* get_CameraGuid();
    void* get_CameraBindingID();
    void* get_InitialCameraCutTransform();
    bool get_bHasInitialCameraCutTransform();
    void set_bHasInitialCameraCutTransform(bool value);
    static _Script_CoreUObject::Class* static_class();
    void SetCameraBindingID(_Script_MovieScene::MovieSceneObjectBindingID& InCameraBindingID);
    _Script_MovieScene::MovieSceneObjectBindingID GetCameraBindingID();
}; // Size: 0x160
#pragma pack(pop)
}
