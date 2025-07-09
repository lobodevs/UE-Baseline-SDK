#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "NiagaraDataInterface.hpp"
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraDataInterfaceSkeletalMesh : public NiagaraDataInterface {
    private: char pad_38[0x88]; public:
    void* get_SourceMode();
    _Script_Engine::Actor*& get_Source();
    void* get_MeshUserParameter();
    _Script_Engine::SkeletalMeshComponent*& get_SourceComponent();
    void* get_SkinningMode();
    void* get_SamplingRegions();
    int32_t& get_WholeMeshLOD();
    void* get_FilteredBones();
    void* get_FilteredSockets();
    void* get_ExcludeBoneName();
    bool get_bExcludeBone();
    void set_bExcludeBone(bool value);
    bool get_bRequireCurrentFrameData();
    void set_bRequireCurrentFrameData(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc0
#pragma pack(pop)
}
