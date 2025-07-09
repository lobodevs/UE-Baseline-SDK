#include "..\FUObjectArray.hpp"
#include "AIAsyncTaskBlueprintProxy.hpp"
#include "AIBlueprintHelperLibrary.hpp"
#include "AIController.hpp"
#include "BehaviorTree.hpp"
#include "BlackboardComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AnimInstance.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_Engine\Controller.hpp"
#include "..\_Script_Engine\Pawn.hpp"
#include "..\_Script_NavigationSystem\NavigationPath.hpp"
void _Script_AIModule::AIBlueprintHelperLibrary::SendAIMessage(_Script_Engine::Pawn* Target, void* Message, _Script_CoreUObject::Object* MessageSource, bool bSuccess) {
    return;
}
_Script_CoreUObject::Class* _Script_AIModule::AIBlueprintHelperLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.AIBlueprintHelperLibrary");
    return result;
}
void _Script_AIModule::AIBlueprintHelperLibrary::UnlockAIResourcesWithAnimation(_Script_Engine::AnimInstance* AnimInstance, bool bUnlockMovement, bool UnlockAILogic) {
    return;
}
_Script_Engine::Pawn* _Script_AIModule::AIBlueprintHelperLibrary::SpawnAIFromClass(_Script_CoreUObject::Object* WorldContextObject, void* PawnClass, _Script_AIModule::BehaviorTree* BehaviorTree, _Script_CoreUObject::Vector Location, _Script_CoreUObject::Rotator Rotation, bool bNoCollisionFail, _Script_Engine::Actor* Owner) {
    return;
}
void _Script_AIModule::AIBlueprintHelperLibrary::SimpleMoveToLocation(_Script_Engine::Controller* Controller, _Script_CoreUObject::Vector& Goal) {
    return;
}
void _Script_AIModule::AIBlueprintHelperLibrary::SimpleMoveToActor(_Script_Engine::Controller* Controller, _Script_Engine::Actor* Goal) {
    return;
}
void _Script_AIModule::AIBlueprintHelperLibrary::LockAIResourcesWithAnimation(_Script_Engine::AnimInstance* AnimInstance, bool bLockMovement, bool LockAILogic) {
    return;
}
bool _Script_AIModule::AIBlueprintHelperLibrary::IsValidAIRotation(_Script_CoreUObject::Rotator Rotation) {
    return;
}
bool _Script_AIModule::AIBlueprintHelperLibrary::IsValidAILocation(_Script_CoreUObject::Vector Location) {
    return;
}
bool _Script_AIModule::AIBlueprintHelperLibrary::IsValidAIDirection(_Script_CoreUObject::Vector DirectionVector) {
    return;
}
int32_t _Script_AIModule::AIBlueprintHelperLibrary::GetNextNavLinkIndex(_Script_Engine::Controller* Controller) {
    return;
}
void* _Script_AIModule::AIBlueprintHelperLibrary::GetCurrentPathPoints(_Script_Engine::Controller* Controller) {
    return;
}
int32_t _Script_AIModule::AIBlueprintHelperLibrary::GetCurrentPathIndex(_Script_Engine::Controller* Controller) {
    return;
}
_Script_NavigationSystem::NavigationPath* _Script_AIModule::AIBlueprintHelperLibrary::GetCurrentPath(_Script_Engine::Controller* Controller) {
    return;
}
_Script_AIModule::BlackboardComponent* _Script_AIModule::AIBlueprintHelperLibrary::GetBlackboard(_Script_Engine::Actor* Target) {
    return;
}
_Script_AIModule::AIController* _Script_AIModule::AIBlueprintHelperLibrary::GetAIController(_Script_Engine::Actor* ControlledActor) {
    return;
}
_Script_AIModule::AIAsyncTaskBlueprintProxy* _Script_AIModule::AIBlueprintHelperLibrary::CreateMoveToProxyObject(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::Pawn* Pawn, _Script_CoreUObject::Vector Destination, _Script_Engine::Actor* TargetActor, float AcceptanceRadius, bool bStopOnOverlap) {
    return;
}
