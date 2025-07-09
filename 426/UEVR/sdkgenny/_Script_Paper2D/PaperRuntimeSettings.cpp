#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "PaperRuntimeSettings.hpp"
_Script_CoreUObject::Class* _Script_Paper2D::PaperRuntimeSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Paper2D.PaperRuntimeSettings");
    return result;
}
bool _Script_Paper2D::PaperRuntimeSettings::get_bEnableSpriteAtlasGroups() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
void _Script_Paper2D::PaperRuntimeSettings::set_bEnableSpriteAtlasGroups(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Paper2D::PaperRuntimeSettings::get_bEnableTerrainSplineEditing() {
    return (*(uint8_t*)((uintptr_t)this + 0x29 + 0)) & 1 != 0;
}
void _Script_Paper2D::PaperRuntimeSettings::set_bEnableTerrainSplineEditing(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x29 + 0);
    *(uint8_t*)((uintptr_t)this + 0x29 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Paper2D::PaperRuntimeSettings::get_bResizeSpriteDataToMatchTextures() {
    return (*(uint8_t*)((uintptr_t)this + 0x2a + 0)) & 1 != 0;
}
void _Script_Paper2D::PaperRuntimeSettings::set_bResizeSpriteDataToMatchTextures(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2a + 0);
    *(uint8_t*)((uintptr_t)this + 0x2a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
