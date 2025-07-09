#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BillboardComponent.hpp"
#include "ReflectionCaptureComponent.hpp"
#include "SceneComponent.hpp"
#include "TextureCube.hpp"
void* _Script_Engine::ReflectionCaptureComponent::get_MapBuildDataId() {
    return (void*)((uintptr_t)this + 0x22c);
}
void _Script_Engine::ReflectionCaptureComponent::set_bModifyMaxValueRGBM(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x218 + 0);
    *(uint8_t*)((uintptr_t)this + 0x218 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::ReflectionCaptureComponent::get_Brightness() {
    return *(float*)((uintptr_t)this + 0x214);
}
_Script_Engine::BillboardComponent*& _Script_Engine::ReflectionCaptureComponent::get_CaptureOffsetComponent() {
    return *(_Script_Engine::BillboardComponent**)((uintptr_t)this + 0x1f8);
}
void* _Script_Engine::ReflectionCaptureComponent::get_MobileReflectionCompression() {
    return (void*)((uintptr_t)this + 0x201);
}
void* _Script_Engine::ReflectionCaptureComponent::get_ReflectionSourceType() {
    return (void*)((uintptr_t)this + 0x200);
}
_Script_Engine::TextureCube*& _Script_Engine::ReflectionCaptureComponent::get_Cubemap() {
    return *(_Script_Engine::TextureCube**)((uintptr_t)this + 0x208);
}
float& _Script_Engine::ReflectionCaptureComponent::get_SourceCubemapAngle() {
    return *(float*)((uintptr_t)this + 0x210);
}
bool _Script_Engine::ReflectionCaptureComponent::get_bModifyMaxValueRGBM() {
    return (*(uint8_t*)((uintptr_t)this + 0x218 + 0)) & 1 != 0;
}
float& _Script_Engine::ReflectionCaptureComponent::get_MaxValueRGBM() {
    return *(float*)((uintptr_t)this + 0x21c);
}
void* _Script_Engine::ReflectionCaptureComponent::get_CaptureOffset() {
    return (void*)((uintptr_t)this + 0x220);
}
_Script_Engine::TextureCube*& _Script_Engine::ReflectionCaptureComponent::get_CachedEncodedHDRCubemap() {
    return *(_Script_Engine::TextureCube**)((uintptr_t)this + 0x250);
}
_Script_CoreUObject::Class* _Script_Engine::ReflectionCaptureComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ReflectionCaptureComponent");
    return result;
}
