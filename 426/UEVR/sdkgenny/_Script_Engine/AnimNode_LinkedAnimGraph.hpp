#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AnimNode_CustomProperty.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AnimNode_LinkedAnimGraph : public AnimNode_CustomProperty {
    private: char pad_58[0x48]; public:
    void* get_InputPoses();
    void* get_InputPoseNames();
    void* get_InstanceClass();
    void* get_Tag();
    bool get_bReceiveNotifiesFromLinkedInstances();
    void set_bReceiveNotifiesFromLinkedInstances(bool value);
    bool get_bPropagateNotifiesToLinkedInstances();
    void set_bPropagateNotifiesToLinkedInstances(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa0
#pragma pack(pop)
}
