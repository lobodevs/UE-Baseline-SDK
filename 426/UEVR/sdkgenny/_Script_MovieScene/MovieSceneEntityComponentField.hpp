#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieScene {
#pragma pack(push, 1)
struct MovieSceneEntityComponentField {
    private: char pad_0[0xf0]; public:
    void* get_PersistentEntityTree();
    void* get_OneShotEntityTree();
    void* get_Entities();
    void* get_EntityMetaData();
    void* get_SharedMetaData();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xf0
#pragma pack(pop)
}
