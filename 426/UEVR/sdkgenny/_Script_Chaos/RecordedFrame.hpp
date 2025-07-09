#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Chaos {
#pragma pack(push, 1)
struct RecordedFrame {
    private: char pad_0[0xb8]; public:
    void* get_Transforms();
    void* get_TransformIndices();
    void* get_PreviousTransformIndices();
    void* get_DisabledFlags();
    void* get_Collisions();
    void* get_Breakings();
    void* get_Trailings();
    float& get_Timestamp();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb8
#pragma pack(pop)
}
