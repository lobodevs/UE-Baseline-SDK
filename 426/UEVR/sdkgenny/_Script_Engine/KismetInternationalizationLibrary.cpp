#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BlueprintFunctionLibrary.hpp"
#include "KismetInternationalizationLibrary.hpp"
void _Script_Engine::KismetInternationalizationLibrary::ClearCurrentAssetGroupCulture(void* AssetGroup, bool SaveToConfig) {
    return;
}
_Script_CoreUObject::Class* _Script_Engine::KismetInternationalizationLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.KismetInternationalizationLibrary");
    return result;
}
void* _Script_Engine::KismetInternationalizationLibrary::GetSuitableCulture(void*& AvailableCultures, void* CultureToMatch, void* FallbackCulture) {
    return;
}
bool _Script_Engine::KismetInternationalizationLibrary::SetCurrentLocale(void* Culture, bool SaveToConfig) {
    return;
}
void* _Script_Engine::KismetInternationalizationLibrary::GetNativeCulture(void* TextCategory) {
    return;
}
bool _Script_Engine::KismetInternationalizationLibrary::SetCurrentLanguageAndLocale(void* Culture, bool SaveToConfig) {
    return;
}
bool _Script_Engine::KismetInternationalizationLibrary::SetCurrentLanguage(void* Culture, bool SaveToConfig) {
    return;
}
bool _Script_Engine::KismetInternationalizationLibrary::SetCurrentCulture(void* Culture, bool SaveToConfig) {
    return;
}
bool _Script_Engine::KismetInternationalizationLibrary::SetCurrentAssetGroupCulture(void* AssetGroup, void* Culture, bool SaveToConfig) {
    return;
}
void* _Script_Engine::KismetInternationalizationLibrary::GetLocalizedCultures(bool IncludeGame, bool IncludeEngine, bool IncludeEditor, bool IncludeAdditional) {
    return;
}
void* _Script_Engine::KismetInternationalizationLibrary::GetCurrentLocale() {
    return;
}
void* _Script_Engine::KismetInternationalizationLibrary::GetCurrentLanguage() {
    return;
}
void* _Script_Engine::KismetInternationalizationLibrary::GetCurrentCulture() {
    return;
}
void* _Script_Engine::KismetInternationalizationLibrary::GetCurrentAssetGroupCulture(void* AssetGroup) {
    return;
}
void* _Script_Engine::KismetInternationalizationLibrary::GetCultureDisplayName(void* Culture, bool Localized) {
    return;
}
