#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_AnimGraphRuntime {
struct PositionHistory;
}
namespace _Script_Engine {
struct RuntimeFloatCurve;
}
namespace _Script_AnimGraphRuntime {
#pragma pack(push, 1)
struct KismetAnimationLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void K2_TwoBoneIK(_Script_CoreUObject::Vector& RootPos, _Script_CoreUObject::Vector& JointPos, _Script_CoreUObject::Vector& EndPos, _Script_CoreUObject::Vector& JointTarget, _Script_CoreUObject::Vector& Effector, _Script_CoreUObject::Vector& OutJointPos, _Script_CoreUObject::Vector& OutEndPos, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale);
    void K2_StartProfilingTimer();
    _Script_CoreUObject::Vector K2_MakePerlinNoiseVectorAndRemap(float X, float Y, float Z, float RangeOutMinX, float RangeOutMaxX, float RangeOutMinY, float RangeOutMaxY, float RangeOutMinZ, float RangeOutMaxZ);
    float K2_MakePerlinNoiseAndRemap(float Value, float RangeOutMin, float RangeOutMax);
    _Script_CoreUObject::Transform K2_LookAt(_Script_CoreUObject::Transform& CurrentTransform, _Script_CoreUObject::Vector& TargetPosition, _Script_CoreUObject::Vector LookAtVector, bool bUseUpVector, _Script_CoreUObject::Vector UpVector, float ClampConeInDegree);
    float K2_EndProfilingTimer(bool bLog, void* LogPrefix);
    float K2_DistanceBetweenTwoSocketsAndMapRange(_Script_Engine::SkeletalMeshComponent* Component, void* SocketOrBoneNameA, void* SocketSpaceA, void* SocketOrBoneNameB, void* SocketSpaceB, bool bRemapRange, float InRangeMin, float InRangeMax, float OutRangeMin, float OutRangeMax);
    _Script_CoreUObject::Vector K2_DirectionBetweenSockets(_Script_Engine::SkeletalMeshComponent* Component, void* SocketOrBoneNameFrom, void* SocketOrBoneNameTo);
    float K2_CalculateVelocityFromSockets(float DeltaSeconds, _Script_Engine::SkeletalMeshComponent* Component, void* SocketOrBoneName, void* ReferenceSocketOrBone, void* SocketSpace, _Script_CoreUObject::Vector OffsetInBoneSpace, _Script_AnimGraphRuntime::PositionHistory& History, int32_t NumberOfSamples, float VelocityMin, float VelocityMax, void* EasingType, _Script_Engine::RuntimeFloatCurve& CustomCurve);
    float K2_CalculateVelocityFromPositionHistory(float DeltaSeconds, _Script_CoreUObject::Vector Position, _Script_AnimGraphRuntime::PositionHistory& History, int32_t NumberOfSamples, float VelocityMin, float VelocityMax);
}; // Size: 0x28
#pragma pack(pop)
}
