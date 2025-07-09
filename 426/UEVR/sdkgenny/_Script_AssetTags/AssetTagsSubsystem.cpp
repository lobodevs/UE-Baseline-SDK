#include "..\FUObjectArray.hpp"
#include "AssetTagsSubsystem.hpp"
#include "..\_Script_CoreUObject\AssetData.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\EngineSubsystem.hpp"
bool _Script_AssetTags::AssetTagsSubsystem::CollectionExists(void* Name) {
    return;
}
_Script_CoreUObject::Class* _Script_AssetTags::AssetTagsSubsystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AssetTags.AssetTagsSubsystem");
    return result;
}
void* _Script_AssetTags::AssetTagsSubsystem::GetAssetsInCollection(void* Name) {
    return;
}
void* _Script_AssetTags::AssetTagsSubsystem::GetCollectionsContainingAssetPtr(_Script_CoreUObject::Object* AssetPtr) {
    return;
}
void* _Script_AssetTags::AssetTagsSubsystem::GetCollectionsContainingAsset(void* AssetPathName) {
    return;
}
void* _Script_AssetTags::AssetTagsSubsystem::GetCollectionsContainingAssetData(_Script_CoreUObject::AssetData& AssetData) {
    return;
}
void* _Script_AssetTags::AssetTagsSubsystem::GetCollections() {
    return;
}
