#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_MovieScene {
struct MovieSceneSection;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieScene {
#pragma pack(push, 1)
struct MovieSceneTrackEvaluationFieldEntry {
    private: char pad_0[0x20]; public:
    _Script_MovieScene::MovieSceneSection*& get_Section();
    void* get_Range();
    void* get_ForcedTime();
    void* get_Flags();
    void* get_LegacySortOrder();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
