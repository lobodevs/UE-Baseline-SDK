#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "BlueprintCore.hpp"
namespace _Script_Engine {
struct SimpleConstructionScript;
}
namespace _Script_Engine {
struct InheritableComponentHandler;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct Blueprint : public BlueprintCore {
    private: char pad_50[0x50]; public:
    void* get_ParentClass();
    void* get_BlueprintType();
    bool get_bRecompileOnLoad();
    void set_bRecompileOnLoad(bool value);
    bool get_bHasBeenRegenerated();
    void set_bHasBeenRegenerated(bool value);
    bool get_bIsRegeneratingOnLoad();
    void set_bIsRegeneratingOnLoad(bool value);
    int32_t& get_BlueprintSystemVersion();
    _Script_Engine::SimpleConstructionScript*& get_SimpleConstructionScript();
    void* get_ComponentTemplates();
    void* get_Timelines();
    void* get_ComponentClassOverrides();
    _Script_Engine::InheritableComponentHandler*& get_InheritableComponentHandler();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa0
#pragma pack(pop)
}
