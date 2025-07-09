#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ActorComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct BoundsCopyComponent : public ActorComponent {
    private: char pad_b0[0x70]; public:
    void* get_BoundsSourceActor();
    bool get_bUseCollidingComponentsForSourceBounds();
    void set_bUseCollidingComponentsForSourceBounds(bool value);
    bool get_bKeepOwnBoundsScale();
    void set_bKeepOwnBoundsScale(bool value);
    bool get_bUseCollidingComponentsForOwnBounds();
    void set_bUseCollidingComponentsForOwnBounds(bool value);
    void* get_PostTransform();
    bool get_bCopyXBounds();
    void set_bCopyXBounds(bool value);
    bool get_bCopyYBounds();
    void set_bCopyYBounds(bool value);
    bool get_bCopyZBounds();
    void set_bCopyZBounds(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x120
#pragma pack(pop)
}
