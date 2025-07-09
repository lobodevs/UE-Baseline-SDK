#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\MeshComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Transform;
}
namespace _Script_Paper2D {
struct PaperSprite;
}
namespace _Script_Paper2D {
#pragma pack(push, 1)
struct PaperGroupedSpriteComponent : public _Script_Engine::MeshComponent {
    private: char pad_470[0x30]; public:
    void* get_InstanceMaterials();
    void* get_PerInstanceSpriteData();
    static _Script_CoreUObject::Class* static_class();
    bool UpdateInstanceTransform(int32_t InstanceIndex, _Script_CoreUObject::Transform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport);
    bool UpdateInstanceColor(int32_t InstanceIndex, _Script_CoreUObject::LinearColor NewInstanceColor, bool bMarkRenderStateDirty);
    void SortInstancesAlongAxis(_Script_CoreUObject::Vector WorldSpaceSortAxis);
    bool RemoveInstance(int32_t InstanceIndex);
    bool GetInstanceTransform(int32_t InstanceIndex, _Script_CoreUObject::Transform& OutInstanceTransform, bool bWorldSpace);
    int32_t GetInstanceCount();
    void ClearInstances();
    int32_t AddInstance(_Script_CoreUObject::Transform& Transform, _Script_Paper2D::PaperSprite* Sprite, bool bWorldSpace, _Script_CoreUObject::LinearColor Color);
}; // Size: 0x4a0
#pragma pack(pop)
}
