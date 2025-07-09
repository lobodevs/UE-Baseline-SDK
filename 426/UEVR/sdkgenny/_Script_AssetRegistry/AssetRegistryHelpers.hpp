#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\ARFilter.hpp"
#include "..\_Script_CoreUObject\AssetData.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\SoftObjectPath.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AssetRegistry {
#pragma pack(push, 1)
struct AssetRegistryHelpers : public _Script_CoreUObject::Object {
    static _Script_CoreUObject::Class* static_class();
    _Script_CoreUObject::SoftObjectPath ToSoftObjectPath(_Script_CoreUObject::AssetData& InAssetData);
    _Script_CoreUObject::ARFilter SetFilterTagsAndValues(_Script_CoreUObject::ARFilter& InFilter, void*& InTagsAndValues);
    bool IsValid(_Script_CoreUObject::AssetData& InAssetData);
    bool IsUAsset(_Script_CoreUObject::AssetData& InAssetData);
    bool IsRedirector(_Script_CoreUObject::AssetData& InAssetData);
    bool IsAssetLoaded(_Script_CoreUObject::AssetData& InAssetData);
    bool GetTagValue(_Script_CoreUObject::AssetData& InAssetData, void*& InTagName, void*& OutTagValue);
    void* GetFullName(_Script_CoreUObject::AssetData& InAssetData);
    void* GetExportTextName(_Script_CoreUObject::AssetData& InAssetData);
    void* GetClass(_Script_CoreUObject::AssetData& InAssetData);
    void* GetAssetRegistry();
    _Script_CoreUObject::Object* GetAsset(_Script_CoreUObject::AssetData& InAssetData);
    _Script_CoreUObject::AssetData CreateAssetData(_Script_CoreUObject::Object* InAsset, bool bAllowBlueprintClass);
}; // Size: 0x28
#pragma pack(pop)
}
