#include "..\FUObjectArray.hpp"
#include "AssetBundleData.hpp"
#include "Class.hpp"
void* _Script_CoreUObject::AssetBundleData::get_Bundles() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_CoreUObject::AssetBundleData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/CoreUObject.AssetBundleData");
    return result;
}
