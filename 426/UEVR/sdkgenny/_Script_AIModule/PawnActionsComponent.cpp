#include "..\FUObjectArray.hpp"
#include "PawnAction.hpp"
#include "PawnActionsComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "..\_Script_Engine\Pawn.hpp"
void* _Script_AIModule::PawnActionsComponent::K2_ForceAbortAction(_Script_AIModule::PawnAction* ActionToAbort) {
    return;
}
_Script_Engine::Pawn*& _Script_AIModule::PawnActionsComponent::get_ControlledPawn() {
    return *(_Script_Engine::Pawn**)((uintptr_t)this + 0xb0);
}
void* _Script_AIModule::PawnActionsComponent::get_ActionStacks() {
    return (void*)((uintptr_t)this + 0xb8);
}
void* _Script_AIModule::PawnActionsComponent::get_ActionEvents() {
    return (void*)((uintptr_t)this + 0xc8);
}
_Script_AIModule::PawnAction*& _Script_AIModule::PawnActionsComponent::get_CurrentAction() {
    return *(_Script_AIModule::PawnAction**)((uintptr_t)this + 0xd8);
}
_Script_CoreUObject::Class* _Script_AIModule::PawnActionsComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.PawnActionsComponent");
    return result;
}
bool _Script_AIModule::PawnActionsComponent::K2_PushAction(_Script_AIModule::PawnAction* NewAction, void* Priority, _Script_CoreUObject::Object* Instigator) {
    return;
}
bool _Script_AIModule::PawnActionsComponent::K2_PerformAction(_Script_Engine::Pawn* Pawn, _Script_AIModule::PawnAction* Action, void* Priority) {
    return;
}
void* _Script_AIModule::PawnActionsComponent::K2_AbortAction(_Script_AIModule::PawnAction* ActionToAbort) {
    return;
}
