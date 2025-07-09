#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\EngineSubsystem.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_CoreUObject {
struct AssetData;
}
namespace _Script_AssetTags {
#pragma pack(push, 1)
struct AssetTagsSubsystem : public _Script_Engine::EngineSubsystem {
    static _Script_CoreUObject::Class* static_class();
    void* GetCollectionsContainingAssetPtr(_Script_CoreUObject::Object* AssetPtr);
    void* GetCollectionsContainingAssetData(_Script_CoreUObject::AssetData& AssetData);
    void* GetCollectionsContainingAsset(void* AssetPathName);
    void* GetCollections();
    void* GetAssetsInCollection(void* Name);
    bool CollectionExists(void* Name);
}; // Size: 0x30
#pragma pack(pop)
}
