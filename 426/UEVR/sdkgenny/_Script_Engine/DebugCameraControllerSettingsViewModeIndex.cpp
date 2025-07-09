#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DebugCameraControllerSettingsViewModeIndex.hpp"
void* _Script_Engine::DebugCameraControllerSettingsViewModeIndex::get_ViewModeIndex() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::DebugCameraControllerSettingsViewModeIndex::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.DebugCameraControllerSettingsViewModeIndex");
    return result;
}
