#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "AnimNotify.hpp"
#include "AnimSequenceBase.hpp"
#include "SkeletalMeshComponent.hpp"
_Script_CoreUObject::Class* _Script_Engine::AnimNotify::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AnimNotify");
    return result;
}
void* _Script_Engine::AnimNotify::GetNotifyName() {
    return;
}
bool _Script_Engine::AnimNotify::Received_Notify(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation) {
    return;
}
