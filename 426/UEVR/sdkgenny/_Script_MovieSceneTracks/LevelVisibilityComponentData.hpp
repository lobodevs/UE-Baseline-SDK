#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_MovieSceneTracks {
struct MovieSceneLevelVisibilitySection;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneTracks {
#pragma pack(push, 1)
struct LevelVisibilityComponentData {
    private: char pad_0[0x8]; public:
    _Script_MovieSceneTracks::MovieSceneLevelVisibilitySection*& get_Section();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x8
#pragma pack(pop)
}
