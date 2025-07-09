#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "NiagaraRendererProperties.hpp"
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraComponentRendererProperties : public NiagaraRendererProperties {
    private: char pad_80[0xe0]; public:
    void* get_ComponentType();
    void* get_ComponentCountLimit();
    void* get_EnabledBinding();
    bool get_bAssignComponentsOnParticleID();
    void set_bAssignComponentsOnParticleID(bool value);
    bool get_bOnlyCreateComponentsOnParticleSpawn();
    void set_bOnlyCreateComponentsOnParticleSpawn(bool value);
    _Script_Engine::SceneComponent*& get_TemplateComponent();
    void* get_PropertyBindings();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x160
#pragma pack(pop)
}
