#include "..\FUObjectArray.hpp"
#include "KismetAnimationLibrary.hpp"
#include "PositionHistory.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_Engine\RuntimeFloatCurve.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
_Script_CoreUObject::Transform _Script_AnimGraphRuntime::KismetAnimationLibrary::K2_LookAt(_Script_CoreUObject::Transform& CurrentTransform, _Script_CoreUObject::Vector& TargetPosition, _Script_CoreUObject::Vector LookAtVector, bool bUseUpVector, _Script_CoreUObject::Vector UpVector, float ClampConeInDegree) {
    return;
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::KismetAnimationLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AnimGraphRuntime.KismetAnimationLibrary");
    return result;
}
void _Script_AnimGraphRuntime::KismetAnimationLibrary::K2_StartProfilingTimer() {
    return;
}
void _Script_AnimGraphRuntime::KismetAnimationLibrary::K2_TwoBoneIK(_Script_CoreUObject::Vector& RootPos, _Script_CoreUObject::Vector& JointPos, _Script_CoreUObject::Vector& EndPos, _Script_CoreUObject::Vector& JointTarget, _Script_CoreUObject::Vector& Effector, _Script_CoreUObject::Vector& OutJointPos, _Script_CoreUObject::Vector& OutEndPos, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale) {
    return;
}
float _Script_AnimGraphRuntime::KismetAnimationLibrary::K2_DistanceBetweenTwoSocketsAndMapRange(_Script_Engine::SkeletalMeshComponent* Component, void* SocketOrBoneNameA, void* SocketSpaceA, void* SocketOrBoneNameB, void* SocketSpaceB, bool bRemapRange, float InRangeMin, float InRangeMax, float OutRangeMin, float OutRangeMax) {
    return;
}
_Script_CoreUObject::Vector _Script_AnimGraphRuntime::KismetAnimationLibrary::K2_MakePerlinNoiseVectorAndRemap(float X, float Y, float Z, float RangeOutMinX, float RangeOutMaxX, float RangeOutMinY, float RangeOutMaxY, float RangeOutMinZ, float RangeOutMaxZ) {
    return;
}
float _Script_AnimGraphRuntime::KismetAnimationLibrary::K2_MakePerlinNoiseAndRemap(float Value, float RangeOutMin, float RangeOutMax) {
    return;
}
float _Script_AnimGraphRuntime::KismetAnimationLibrary::K2_EndProfilingTimer(bool bLog, void* LogPrefix) {
    return;
}
_Script_CoreUObject::Vector _Script_AnimGraphRuntime::KismetAnimationLibrary::K2_DirectionBetweenSockets(_Script_Engine::SkeletalMeshComponent* Component, void* SocketOrBoneNameFrom, void* SocketOrBoneNameTo) {
    return;
}
float _Script_AnimGraphRuntime::KismetAnimationLibrary::K2_CalculateVelocityFromSockets(float DeltaSeconds, _Script_Engine::SkeletalMeshComponent* Component, void* SocketOrBoneName, void* ReferenceSocketOrBone, void* SocketSpace, _Script_CoreUObject::Vector OffsetInBoneSpace, _Script_AnimGraphRuntime::PositionHistory& History, int32_t NumberOfSamples, float VelocityMin, float VelocityMax, void* EasingType, _Script_Engine::RuntimeFloatCurve& CustomCurve) {
    return;
}
float _Script_AnimGraphRuntime::KismetAnimationLibrary::K2_CalculateVelocityFromPositionHistory(float DeltaSeconds, _Script_CoreUObject::Vector Position, _Script_AnimGraphRuntime::PositionHistory& History, int32_t NumberOfSamples, float VelocityMin, float VelocityMax) {
    return;
}
