#include "..\FUObjectArray.hpp"
#include "AssetBundleEntry.hpp"
#include "Class.hpp"
void* _Script_CoreUObject::AssetBundleEntry::get_BundleAssets() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_CoreUObject::AssetBundleEntry::get_BundleScope() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_CoreUObject::AssetBundleEntry::get_BundleName() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_CoreUObject::AssetBundleEntry::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/CoreUObject.AssetBundleEntry");
    return result;
}
