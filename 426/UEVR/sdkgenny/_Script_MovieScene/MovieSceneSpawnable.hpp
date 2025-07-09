#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieScene {
#pragma pack(push, 1)
struct MovieSceneSpawnable {
    private: char pad_0[0x90]; public:
    void* get_SpawnTransform();
    void* get_Tags();
    bool get_bContinuouslyRespawn();
    void set_bContinuouslyRespawn(bool value);
    bool get_bEvaluateTracksWhenNotSpawned();
    void set_bEvaluateTracksWhenNotSpawned(bool value);
    void* get_Guid();
    void* get_Name();
    _Script_CoreUObject::Object*& get_ObjectTemplate();
    void* get_ChildPossessables();
    void* get_Ownership();
    void* get_LevelName();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x90
#pragma pack(pop)
}
