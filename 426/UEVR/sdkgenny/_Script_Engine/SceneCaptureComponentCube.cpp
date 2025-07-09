#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SceneCaptureComponent.hpp"
#include "SceneCaptureComponentCube.hpp"
#include "TextureRenderTarget2D.hpp"
#include "TextureRenderTargetCube.hpp"
_Script_Engine::TextureRenderTargetCube*& _Script_Engine::SceneCaptureComponentCube::get_TextureTarget() {
    return *(_Script_Engine::TextureRenderTargetCube**)((uintptr_t)this + 0x2b0);
}
bool _Script_Engine::SceneCaptureComponentCube::get_bCaptureRotation() {
    return (*(uint8_t*)((uintptr_t)this + 0x2b8 + 0)) & 1 != 0;
}
float& _Script_Engine::SceneCaptureComponentCube::get_IPD() {
    return *(float*)((uintptr_t)this + 0x2d8);
}
void _Script_Engine::SceneCaptureComponentCube::set_bCaptureRotation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2b8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2b8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::TextureRenderTargetCube*& _Script_Engine::SceneCaptureComponentCube::get_TextureTargetLeft() {
    return *(_Script_Engine::TextureRenderTargetCube**)((uintptr_t)this + 0x2c0);
}
void _Script_Engine::SceneCaptureComponentCube::CaptureScene() {
    return;
}
_Script_Engine::TextureRenderTargetCube*& _Script_Engine::SceneCaptureComponentCube::get_TextureTargetRight() {
    return *(_Script_Engine::TextureRenderTargetCube**)((uintptr_t)this + 0x2c8);
}
_Script_CoreUObject::Class* _Script_Engine::SceneCaptureComponentCube::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SceneCaptureComponentCube");
    return result;
}
_Script_Engine::TextureRenderTarget2D*& _Script_Engine::SceneCaptureComponentCube::get_TextureTargetODS() {
    return *(_Script_Engine::TextureRenderTarget2D**)((uintptr_t)this + 0x2d0);
}
