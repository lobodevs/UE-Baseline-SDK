#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintGeneratedClass.hpp"
namespace _Script_UMG {
struct WidgetTree;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct WidgetBlueprintGeneratedClass : public _Script_Engine::BlueprintGeneratedClass {
    private: char pad_328[0x40]; public:
    _Script_UMG::WidgetTree*& get_WidgetTree();
    bool get_bClassRequiresNativeTick();
    void set_bClassRequiresNativeTick(bool value);
    void* get_Bindings();
    void* get_Animations();
    void* get_NamedSlots();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x368
#pragma pack(pop)
}
