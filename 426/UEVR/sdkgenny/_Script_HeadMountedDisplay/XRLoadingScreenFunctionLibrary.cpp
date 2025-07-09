#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_Engine\Texture.hpp"
#include "XRLoadingScreenFunctionLibrary.hpp"
_Script_CoreUObject::Class* _Script_HeadMountedDisplay::XRLoadingScreenFunctionLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HeadMountedDisplay.XRLoadingScreenFunctionLibrary");
    return result;
}
void _Script_HeadMountedDisplay::XRLoadingScreenFunctionLibrary::ShowLoadingScreen() {
    return;
}
void _Script_HeadMountedDisplay::XRLoadingScreenFunctionLibrary::SetLoadingScreen(_Script_Engine::Texture* Texture, _Script_CoreUObject::Vector2D Scale, _Script_CoreUObject::Vector Offset, bool bShowLoadingMovie, bool bShowOnSet) {
    return;
}
void _Script_HeadMountedDisplay::XRLoadingScreenFunctionLibrary::AddLoadingScreenSplash(_Script_Engine::Texture* Texture, _Script_CoreUObject::Vector Translation, _Script_CoreUObject::Rotator Rotation, _Script_CoreUObject::Vector2D Size, _Script_CoreUObject::Rotator DeltaRotation, bool bClearBeforeAdd) {
    return;
}
void _Script_HeadMountedDisplay::XRLoadingScreenFunctionLibrary::HideLoadingScreen() {
    return;
}
void _Script_HeadMountedDisplay::XRLoadingScreenFunctionLibrary::ClearLoadingScreenSplashes() {
    return;
}
