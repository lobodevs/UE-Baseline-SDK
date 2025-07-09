#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Texture.hpp"
#include "MediaPlayer.hpp"
#include "MediaTexture.hpp"
bool _Script_MediaAssets::MediaTexture::get_AutoClear() {
    return (*(uint8_t*)((uintptr_t)this + 0xda + 0)) & 1 != 0;
}
void* _Script_MediaAssets::MediaTexture::get_AddressX() {
    return (void*)((uintptr_t)this + 0xd8);
}
void* _Script_MediaAssets::MediaTexture::get_AddressY() {
    return (void*)((uintptr_t)this + 0xd9);
}
void* _Script_MediaAssets::MediaTexture::get_ClearColor() {
    return (void*)((uintptr_t)this + 0xdc);
}
void _Script_MediaAssets::MediaTexture::set_AutoClear(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xda + 0);
    *(uint8_t*)((uintptr_t)this + 0xda + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_MediaAssets::MediaTexture::get_EnableGenMips() {
    return (*(uint8_t*)((uintptr_t)this + 0xec + 0)) & 1 != 0;
}
void _Script_MediaAssets::MediaTexture::set_EnableGenMips(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xec + 0);
    *(uint8_t*)((uintptr_t)this + 0xec + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_MediaAssets::MediaTexture::get_NumMips() {
    return (void*)((uintptr_t)this + 0xed);
}
bool _Script_MediaAssets::MediaTexture::get_NewStyleOutput() {
    return (*(uint8_t*)((uintptr_t)this + 0xee + 0)) & 1 != 0;
}
void _Script_MediaAssets::MediaTexture::set_NewStyleOutput(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xee + 0);
    *(uint8_t*)((uintptr_t)this + 0xee + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_MediaAssets::MediaTexture::get_OutputFormat() {
    return (void*)((uintptr_t)this + 0xef);
}
float& _Script_MediaAssets::MediaTexture::get_CurrentAspectRatio() {
    return *(float*)((uintptr_t)this + 0xf0);
}
int32_t _Script_MediaAssets::MediaTexture::GetHeight() {
    return;
}
void* _Script_MediaAssets::MediaTexture::get_CurrentOrientation() {
    return (void*)((uintptr_t)this + 0xf4);
}
_Script_MediaAssets::MediaPlayer*& _Script_MediaAssets::MediaTexture::get_MediaPlayer() {
    return *(_Script_MediaAssets::MediaPlayer**)((uintptr_t)this + 0xf8);
}
_Script_CoreUObject::Class* _Script_MediaAssets::MediaTexture::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MediaAssets.MediaTexture");
    return result;
}
void _Script_MediaAssets::MediaTexture::SetMediaPlayer(_Script_MediaAssets::MediaPlayer* NewMediaPlayer) {
    return;
}
int32_t _Script_MediaAssets::MediaTexture::GetWidth() {
    return;
}
_Script_MediaAssets::MediaPlayer* _Script_MediaAssets::MediaTexture::GetMediaPlayer() {
    return;
}
float _Script_MediaAssets::MediaTexture::GetAspectRatio() {
    return;
}
