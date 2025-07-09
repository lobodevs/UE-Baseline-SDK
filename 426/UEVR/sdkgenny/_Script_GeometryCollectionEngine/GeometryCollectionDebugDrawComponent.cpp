#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "GeometryCollectionDebugDrawActor.hpp"
#include "GeometryCollectionDebugDrawComponent.hpp"
#include "GeometryCollectionRenderLevelSetActor.hpp"
_Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor*& _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawComponent::get_GeometryCollectionDebugDrawActor() {
    return *(_Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor**)((uintptr_t)this + 0xb0);
}
_Script_GeometryCollectionEngine::GeometryCollectionRenderLevelSetActor*& _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawComponent::get_GeometryCollectionRenderLevelSetActor() {
    return *(_Script_GeometryCollectionEngine::GeometryCollectionRenderLevelSetActor**)((uintptr_t)this + 0xb8);
}
_Script_CoreUObject::Class* _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/GeometryCollectionEngine.GeometryCollectionDebugDrawComponent");
    return result;
}
