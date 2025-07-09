#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "StaticMeshComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Transform;
}
namespace _Script_CoreUObject {
struct Vector;
}
namespace _Script_CoreUObject {
struct Box;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct InstancedStaticMeshComponent : public StaticMeshComponent {
    private: char pad_4d0[0xb0]; public:
    void* get_PerInstanceSMData();
    int32_t& get_NumCustomDataFloats();
    void* get_PerInstanceSMCustomData();
    int32_t& get_InstancingRandomSeed();
    int32_t& get_InstanceStartCullDistance();
    int32_t& get_InstanceEndCullDistance();
    void* get_InstanceReorderTable();
    int32_t& get_NumPendingLightmaps();
    void* get_CachedMappings();
    static _Script_CoreUObject::Class* static_class();
    bool UpdateInstanceTransform(int32_t InstanceIndex, _Script_CoreUObject::Transform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport);
    bool SetCustomDataValue(int32_t InstanceIndex, int32_t CustomDataIndex, float CustomDataValue, bool bMarkRenderStateDirty);
    void SetCullDistances(int32_t StartCullDistance, int32_t EndCullDistance);
    bool RemoveInstance(int32_t InstanceIndex);
    bool GetInstanceTransform(int32_t InstanceIndex, _Script_CoreUObject::Transform& OutInstanceTransform, bool bWorldSpace);
    void* GetInstancesOverlappingSphere(_Script_CoreUObject::Vector& Center, float Radius, bool bSphereInWorldSpace);
    void* GetInstancesOverlappingBox(_Script_CoreUObject::Box& Box, bool bBoxInWorldSpace);
    int32_t GetInstanceCount();
    void ClearInstances();
    bool BatchUpdateInstancesTransforms(int32_t StartInstanceIndex, void*& NewInstancesTransforms, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport);
    bool BatchUpdateInstancesTransform(int32_t StartInstanceIndex, int32_t NumInstances, _Script_CoreUObject::Transform& NewInstancesTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport);
    int32_t AddInstanceWorldSpace(_Script_CoreUObject::Transform& WorldTransform);
    void* AddInstances(void*& InstanceTransforms, bool bShouldReturnIndices);
    int32_t AddInstance(_Script_CoreUObject::Transform& InstanceTransform);
}; // Size: 0x580
#pragma pack(pop)
}
