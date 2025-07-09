#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "PrimitiveComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct FXSystemAsset;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct FXSystemComponent : public PrimitiveComponent {
    static _Script_CoreUObject::Class* static_class();
    void SetVectorParameter(void* ParameterName, _Script_CoreUObject::Vector Param);
    void SetUseAutoManageAttachment(bool bAutoManage);
    void SetIntParameter(void* ParameterName, int32_t Param);
    void SetFloatParameter(void* ParameterName, float Param);
    void SetEmitterEnable(void* EmitterName, bool bNewEnableState);
    void SetColorParameter(void* ParameterName, _Script_CoreUObject::LinearColor Param);
    void SetBoolParameter(void* ParameterName, bool Param);
    void SetAutoAttachmentParameters(_Script_Engine::SceneComponent* Parent, void* SocketName, void* LocationRule, void* RotationRule, void* ScaleRule);
    void SetActorParameter(void* ParameterName, _Script_Engine::Actor* Param);
    void ReleaseToPool();
    _Script_Engine::FXSystemAsset* GetFXSystemAsset();
}; // Size: 0x440
#pragma pack(pop)
}
