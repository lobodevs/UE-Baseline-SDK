#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\IntPoint.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "GameUserSettings.hpp"
int32_t& _Script_Engine::GameUserSettings::get_HDRDisplayOutputNits() {
    return *(int32_t*)((uintptr_t)this + 0x108);
}
void* _Script_Engine::GameUserSettings::get_ResolutionSizeX() {
    return (void*)((uintptr_t)this + 0x80);
}
bool _Script_Engine::GameUserSettings::get_bUseVSync() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
void _Script_Engine::GameUserSettings::set_bUseVSync(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::GameUserSettings::get_LastUserConfirmedResolutionSizeY() {
    return (void*)((uintptr_t)this + 0x8c);
}
void _Script_Engine::GameUserSettings::SetResolutionScaleValue(int32_t NewScaleValue) {
    return;
}
bool _Script_Engine::GameUserSettings::get_bUseDynamicResolution() {
    return (*(uint8_t*)((uintptr_t)this + 0x29 + 0)) & 1 != 0;
}
void _Script_Engine::GameUserSettings::SetResolutionScaleNormalized(float NewScaleNormalized) {
    return;
}
void _Script_Engine::GameUserSettings::set_bUseDynamicResolution(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x29 + 0);
    *(uint8_t*)((uintptr_t)this + 0x29 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::GameUserSettings::get_ResolutionSizeY() {
    return (void*)((uintptr_t)this + 0x84);
}
void* _Script_Engine::GameUserSettings::GetFullscreenMode() {
    return;
}
void _Script_Engine::GameUserSettings::SetFoliageQuality(int32_t Value) {
    return;
}
void* _Script_Engine::GameUserSettings::get_LastUserConfirmedResolutionSizeX() {
    return (void*)((uintptr_t)this + 0x88);
}
int32_t& _Script_Engine::GameUserSettings::get_WindowPosX() {
    return *(int32_t*)((uintptr_t)this + 0x90);
}
bool _Script_Engine::GameUserSettings::get_bUseHDRDisplayOutput() {
    return (*(uint8_t*)((uintptr_t)this + 0x104 + 0)) & 1 != 0;
}
int32_t& _Script_Engine::GameUserSettings::get_WindowPosY() {
    return *(int32_t*)((uintptr_t)this + 0x94);
}
void _Script_Engine::GameUserSettings::SetFullscreenMode(void* InFullscreenMode) {
    return;
}
int32_t& _Script_Engine::GameUserSettings::get_FullscreenMode() {
    return *(int32_t*)((uintptr_t)this + 0x98);
}
int32_t& _Script_Engine::GameUserSettings::get_LastConfirmedFullscreenMode() {
    return *(int32_t*)((uintptr_t)this + 0x9c);
}
void _Script_Engine::GameUserSettings::SetScreenResolution(_Script_CoreUObject::IntPoint Resolution) {
    return;
}
int32_t& _Script_Engine::GameUserSettings::get_PreferredFullscreenMode() {
    return *(int32_t*)((uintptr_t)this + 0xa0);
}
void* _Script_Engine::GameUserSettings::get_Version() {
    return (void*)((uintptr_t)this + 0xa4);
}
int32_t& _Script_Engine::GameUserSettings::get_AudioQualityLevel() {
    return *(int32_t*)((uintptr_t)this + 0xa8);
}
int32_t& _Script_Engine::GameUserSettings::get_LastConfirmedAudioQualityLevel() {
    return *(int32_t*)((uintptr_t)this + 0xac);
}
float& _Script_Engine::GameUserSettings::get_FrameRateLimit() {
    return *(float*)((uintptr_t)this + 0xb0);
}
int32_t _Script_Engine::GameUserSettings::GetFramePace() {
    return;
}
void _Script_Engine::GameUserSettings::SetAudioQualityLevel(int32_t QualityLevel) {
    return;
}
int32_t& _Script_Engine::GameUserSettings::get_DesiredScreenWidth() {
    return *(int32_t*)((uintptr_t)this + 0xb8);
}
bool _Script_Engine::GameUserSettings::get_bUseDesiredScreenHeight() {
    return (*(uint8_t*)((uintptr_t)this + 0xbc + 0)) & 1 != 0;
}
void _Script_Engine::GameUserSettings::set_bUseDesiredScreenHeight(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xbc + 0);
    *(uint8_t*)((uintptr_t)this + 0xbc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_Engine::GameUserSettings::get_DesiredScreenHeight() {
    return *(int32_t*)((uintptr_t)this + 0xc0);
}
int32_t& _Script_Engine::GameUserSettings::get_LastUserConfirmedDesiredScreenWidth() {
    return *(int32_t*)((uintptr_t)this + 0xc4);
}
int32_t& _Script_Engine::GameUserSettings::get_LastUserConfirmedDesiredScreenHeight() {
    return *(int32_t*)((uintptr_t)this + 0xc8);
}
float& _Script_Engine::GameUserSettings::get_LastRecommendedScreenWidth() {
    return *(float*)((uintptr_t)this + 0xcc);
}
void _Script_Engine::GameUserSettings::GetResolutionScaleInformationEx(float& CurrentScaleNormalized, float& CurrentScaleValue, float& MinScaleValue, float& MaxScaleValue) {
    return;
}
float& _Script_Engine::GameUserSettings::get_LastRecommendedScreenHeight() {
    return *(float*)((uintptr_t)this + 0xd0);
}
float& _Script_Engine::GameUserSettings::get_LastCPUBenchmarkResult() {
    return *(float*)((uintptr_t)this + 0xd4);
}
float& _Script_Engine::GameUserSettings::get_LastGPUBenchmarkResult() {
    return *(float*)((uintptr_t)this + 0xd8);
}
int32_t _Script_Engine::GameUserSettings::GetAntiAliasingQuality() {
    return;
}
void* _Script_Engine::GameUserSettings::get_LastCPUBenchmarkSteps() {
    return (void*)((uintptr_t)this + 0xe0);
}
void* _Script_Engine::GameUserSettings::get_LastGPUBenchmarkSteps() {
    return (void*)((uintptr_t)this + 0xf0);
}
float& _Script_Engine::GameUserSettings::get_LastGPUBenchmarkMultiplier() {
    return *(float*)((uintptr_t)this + 0x100);
}
void _Script_Engine::GameUserSettings::set_bUseHDRDisplayOutput(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x104 + 0);
    *(uint8_t*)((uintptr_t)this + 0x104 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::IntPoint _Script_Engine::GameUserSettings::GetDefaultResolution() {
    return;
}
bool _Script_Engine::GameUserSettings::IsVSyncDirty() {
    return;
}
void* _Script_Engine::GameUserSettings::get_OnGameUserSettingsUINeedsUpdate() {
    return (void*)((uintptr_t)this + 0x110);
}
_Script_CoreUObject::Class* _Script_Engine::GameUserSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.GameUserSettings");
    return result;
}
void _Script_Engine::GameUserSettings::ValidateSettings() {
    return;
}
bool _Script_Engine::GameUserSettings::SupportsHDRDisplayOutput() {
    return;
}
void _Script_Engine::GameUserSettings::SetVSyncEnabled(bool bEnable) {
    return;
}
void _Script_Engine::GameUserSettings::SetVisualEffectQuality(int32_t Value) {
    return;
}
void _Script_Engine::GameUserSettings::SetViewDistanceQuality(int32_t Value) {
    return;
}
void _Script_Engine::GameUserSettings::SetToDefaults() {
    return;
}
void _Script_Engine::GameUserSettings::SetTextureQuality(int32_t Value) {
    return;
}
void _Script_Engine::GameUserSettings::SetShadowQuality(int32_t Value) {
    return;
}
void _Script_Engine::GameUserSettings::RevertVideoMode() {
    return;
}
void _Script_Engine::GameUserSettings::SetShadingQuality(int32_t Value) {
    return;
}
void _Script_Engine::GameUserSettings::SetResolutionScaleValueEx(float NewScaleValue) {
    return;
}
void _Script_Engine::GameUserSettings::SetPostProcessingQuality(int32_t Value) {
    return;
}
void _Script_Engine::GameUserSettings::SetOverallScalabilityLevel(int32_t Value) {
    return;
}
void _Script_Engine::GameUserSettings::SetFrameRateLimit(float NewLimit) {
    return;
}
void _Script_Engine::GameUserSettings::SetDynamicResolutionEnabled(bool bEnable) {
    return;
}
void _Script_Engine::GameUserSettings::SetBenchmarkFallbackValues() {
    return;
}
void _Script_Engine::GameUserSettings::LoadSettings(bool bForceReload) {
    return;
}
void _Script_Engine::GameUserSettings::SetAntiAliasingQuality(int32_t Value) {
    return;
}
void _Script_Engine::GameUserSettings::SaveSettings() {
    return;
}
void _Script_Engine::GameUserSettings::RunHardwareBenchmark(int32_t WorkScale, float CPUMultiplier, float GPUMultiplier) {
    return;
}
void _Script_Engine::GameUserSettings::ResetToCurrentSettings() {
    return;
}
bool _Script_Engine::GameUserSettings::IsVSyncEnabled() {
    return;
}
bool _Script_Engine::GameUserSettings::IsScreenResolutionDirty() {
    return;
}
bool _Script_Engine::GameUserSettings::IsHDREnabled() {
    return;
}
bool _Script_Engine::GameUserSettings::IsFullscreenModeDirty() {
    return;
}
bool _Script_Engine::GameUserSettings::IsDynamicResolutionEnabled() {
    return;
}
bool _Script_Engine::GameUserSettings::IsDynamicResolutionDirty() {
    return;
}
bool _Script_Engine::GameUserSettings::IsDirty() {
    return;
}
void* _Script_Engine::GameUserSettings::GetLastConfirmedFullscreenMode() {
    return;
}
int32_t _Script_Engine::GameUserSettings::GetVisualEffectQuality() {
    return;
}
int32_t _Script_Engine::GameUserSettings::GetViewDistanceQuality() {
    return;
}
int32_t _Script_Engine::GameUserSettings::GetTextureQuality() {
    return;
}
int32_t _Script_Engine::GameUserSettings::GetSyncInterval() {
    return;
}
int32_t _Script_Engine::GameUserSettings::GetShadowQuality() {
    return;
}
int32_t _Script_Engine::GameUserSettings::GetShadingQuality() {
    return;
}
_Script_CoreUObject::IntPoint _Script_Engine::GameUserSettings::GetScreenResolution() {
    return;
}
float _Script_Engine::GameUserSettings::GetResolutionScaleNormalized() {
    return;
}
void _Script_Engine::GameUserSettings::GetResolutionScaleInformation(float& CurrentScaleNormalized, int32_t& CurrentScaleValue, int32_t& MinScaleValue, int32_t& MaxScaleValue) {
    return;
}
float _Script_Engine::GameUserSettings::GetRecommendedResolutionScale() {
    return;
}
void* _Script_Engine::GameUserSettings::GetPreferredFullscreenMode() {
    return;
}
int32_t _Script_Engine::GameUserSettings::GetPostProcessingQuality() {
    return;
}
int32_t _Script_Engine::GameUserSettings::GetOverallScalabilityLevel() {
    return;
}
_Script_CoreUObject::IntPoint _Script_Engine::GameUserSettings::GetLastConfirmedScreenResolution() {
    return;
}
_Script_Engine::GameUserSettings* _Script_Engine::GameUserSettings::GetGameUserSettings() {
    return;
}
float _Script_Engine::GameUserSettings::GetFrameRateLimit() {
    return;
}
int32_t _Script_Engine::GameUserSettings::GetFoliageQuality() {
    return;
}
_Script_CoreUObject::IntPoint _Script_Engine::GameUserSettings::GetDesktopResolution() {
    return;
}
_Script_CoreUObject::IntPoint _Script_Engine::GameUserSettings::GetDefaultWindowPosition() {
    return;
}
void* _Script_Engine::GameUserSettings::GetDefaultWindowMode() {
    return;
}
float _Script_Engine::GameUserSettings::GetDefaultResolutionScale() {
    return;
}
int32_t _Script_Engine::GameUserSettings::GetCurrentHDRDisplayNits() {
    return;
}
int32_t _Script_Engine::GameUserSettings::GetAudioQualityLevel() {
    return;
}
void _Script_Engine::GameUserSettings::EnableHDRDisplayOutput(bool bEnable, int32_t DisplayNits) {
    return;
}
void _Script_Engine::GameUserSettings::ConfirmVideoMode() {
    return;
}
void _Script_Engine::GameUserSettings::ApplySettings(bool bCheckForCommandLineOverrides) {
    return;
}
void _Script_Engine::GameUserSettings::ApplyResolutionSettings(bool bCheckForCommandLineOverrides) {
    return;
}
void _Script_Engine::GameUserSettings::ApplyNonResolutionSettings() {
    return;
}
void _Script_Engine::GameUserSettings::ApplyHardwareBenchmarkResults() {
    return;
}
