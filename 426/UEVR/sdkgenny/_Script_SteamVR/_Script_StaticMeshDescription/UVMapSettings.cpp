#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "UVMapSettings.hpp"
void* _Script_StaticMeshDescription::UVMapSettings::get_Size() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_StaticMeshDescription::UVMapSettings::get_UVTile() {
    return (void*)((uintptr_t)this + 0xc);
}
void* _Script_StaticMeshDescription::UVMapSettings::get_Position() {
    return (void*)((uintptr_t)this + 0x14);
}
_Script_CoreUObject::Class* _Script_StaticMeshDescription::UVMapSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/StaticMeshDescription.UVMapSettings");
    return result;
}
void* _Script_StaticMeshDescription::UVMapSettings::get_Rotation() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_StaticMeshDescription::UVMapSettings::get_Scale() {
    return (void*)((uintptr_t)this + 0x2c);
}
