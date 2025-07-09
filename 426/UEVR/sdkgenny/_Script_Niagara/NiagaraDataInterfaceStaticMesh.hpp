#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "NiagaraDataInterface.hpp"
namespace _Script_Engine {
struct StaticMesh;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraDataInterfaceStaticMesh : public NiagaraDataInterface {
    private: char pad_38[0x50]; public:
    void* get_SourceMode();
    _Script_Engine::StaticMesh*& get_DefaultMesh();
    _Script_Engine::Actor*& get_Source();
    _Script_Engine::StaticMeshComponent*& get_SourceComponent();
    void* get_SectionFilter();
    bool get_bUsePhysicsBodyVelocity();
    void set_bUsePhysicsBodyVelocity(bool value);
    void* get_FilteredSockets();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x88
#pragma pack(pop)
}
