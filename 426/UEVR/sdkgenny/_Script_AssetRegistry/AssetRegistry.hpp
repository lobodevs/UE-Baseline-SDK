#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\AssetData.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct ARFilter;
}
namespace _Script_AssetRegistry {
struct AssetRegistryDependencyOptions;
}
namespace _Script_AssetRegistry {
#pragma pack(push, 1)
struct AssetRegistry : public _Script_CoreUObject::Interface {
    static _Script_CoreUObject::Class* static_class();
    void WaitForCompletion();
    void UseFilterToExcludeAssets(void*& AssetDataList, _Script_CoreUObject::ARFilter& Filter);
    void SearchAllAssets(bool bSynchronousSearch);
    void ScanPathsSynchronous(void*& InPaths, bool bForceRescan);
    void ScanModifiedAssetFiles(void*& InFilePaths);
    void ScanFilesSynchronous(void*& InFilePaths, bool bForceRescan);
    void RunAssetsThroughFilter(void*& AssetDataList, _Script_CoreUObject::ARFilter& Filter);
    void PrioritizeSearchPath(void* PathToPrioritize);
    bool K2_GetReferencers(void* PackageName, _Script_AssetRegistry::AssetRegistryDependencyOptions& ReferenceOptions, void*& OutReferencers);
    bool K2_GetDependencies(void* PackageName, _Script_AssetRegistry::AssetRegistryDependencyOptions& DependencyOptions, void*& OutDependencies);
    bool IsLoadingAssets();
    bool HasAssets(void* PackagePath, bool bRecursive);
    void GetSubPaths(void* InBasePath, void*& OutPathList, bool bInRecurse);
    bool GetAssetsByPath(void* PackagePath, void*& OutAssetData, bool bRecursive, bool bIncludeOnlyOnDiskAssets);
    bool GetAssetsByPackageName(void* PackageName, void*& OutAssetData, bool bIncludeOnlyOnDiskAssets);
    bool GetAssetsByClass(void* ClassName, void*& OutAssetData, bool bSearchSubClasses);
    bool GetAssets(_Script_CoreUObject::ARFilter& Filter, void*& OutAssetData);
    _Script_CoreUObject::AssetData GetAssetByObjectPath(void* ObjectPath, bool bIncludeOnlyOnDiskAssets);
    void GetAllCachedPaths(void*& OutPathList);
    bool GetAllAssets(void*& OutAssetData, bool bIncludeOnlyOnDiskAssets);
}; // Size: 0x28
#pragma pack(pop)
}
