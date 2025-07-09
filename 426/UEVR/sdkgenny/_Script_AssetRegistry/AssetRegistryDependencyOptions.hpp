#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AssetRegistry {
#pragma pack(push, 1)
struct AssetRegistryDependencyOptions {
    private: char pad_0[0x5]; public:
    bool get_bIncludeSoftPackageReferences();
    void set_bIncludeSoftPackageReferences(bool value);
    bool get_bIncludeHardPackageReferences();
    void set_bIncludeHardPackageReferences(bool value);
    bool get_bIncludeSearchableNames();
    void set_bIncludeSearchableNames(bool value);
    bool get_bIncludeSoftManagementReferences();
    void set_bIncludeSoftManagementReferences(bool value);
    bool get_bIncludeHardManagementReferences();
    void set_bIncludeHardManagementReferences(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x5
#pragma pack(pop)
}
