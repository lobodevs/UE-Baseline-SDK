#include "..\FUObjectArray.hpp"
#include "AssetData.hpp"
#include "Class.hpp"
void* _Script_CoreUObject::AssetData::get_PackagePath() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_CoreUObject::AssetData::get_ObjectPath() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_CoreUObject::AssetData::get_PackageName() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_CoreUObject::AssetData::get_AssetName() {
    return (void*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_CoreUObject::AssetData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/CoreUObject.AssetData");
    return result;
}
void* _Script_CoreUObject::AssetData::get_AssetClass() {
    return (void*)((uintptr_t)this + 0x20);
}
