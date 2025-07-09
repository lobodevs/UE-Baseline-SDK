#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_MovieScene {
struct MovieSceneTrackInstance;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieScene {
#pragma pack(push, 1)
struct MovieSceneTrackInstanceEntry {
    private: char pad_0[0x10]; public:
    _Script_CoreUObject::Object*& get_BoundObject();
    _Script_MovieScene::MovieSceneTrackInstance*& get_TrackInstance();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}
