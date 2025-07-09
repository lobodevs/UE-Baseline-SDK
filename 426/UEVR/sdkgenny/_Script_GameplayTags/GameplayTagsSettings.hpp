#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "GameplayTagsList.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_GameplayTags {
#pragma pack(push, 1)
struct GameplayTagsSettings : public GameplayTagsList {
    private: char pad_48[0x70]; public:
    bool get_ImportTagsFromConfig();
    void set_ImportTagsFromConfig(bool value);
    bool get_WarnOnInvalidTags();
    void set_WarnOnInvalidTags(bool value);
    bool get_FastReplication();
    void set_FastReplication(bool value);
    void* get_InvalidTagCharacters();
    void* get_CategoryRemapping();
    void* get_GameplayTagTableList();
    void* get_GameplayTagRedirects();
    void* get_CommonlyReplicatedTags();
    int32_t& get_NumBitsForContainerSize();
    int32_t& get_NetIndexFirstBitSegment();
    void* get_RestrictedConfigFiles();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb8
#pragma pack(pop)
}
