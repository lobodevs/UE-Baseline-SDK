#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Texture;
}
namespace _Script_HeadMountedDisplay {
#pragma pack(push, 1)
struct XRLoadingScreenFunctionLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void ShowLoadingScreen();
    void SetLoadingScreen(_Script_Engine::Texture* Texture, _Script_CoreUObject::Vector2D Scale, _Script_CoreUObject::Vector Offset, bool bShowLoadingMovie, bool bShowOnSet);
    void HideLoadingScreen();
    void ClearLoadingScreenSplashes();
    void AddLoadingScreenSplash(_Script_Engine::Texture* Texture, _Script_CoreUObject::Vector Translation, _Script_CoreUObject::Rotator Rotation, _Script_CoreUObject::Vector2D Size, _Script_CoreUObject::Rotator DeltaRotation, bool bClearBeforeAdd);
}; // Size: 0x28
#pragma pack(pop)
}
