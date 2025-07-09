#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "GeometryCollectionActor.hpp"
#include "GeometryCollectionComponent.hpp"
#include "GeometryCollectionDebugDrawComponent.hpp"
_Script_GeometryCollectionEngine::GeometryCollectionComponent*& _Script_GeometryCollectionEngine::GeometryCollectionActor::get_GeometryCollectionComponent() {
    return *(_Script_GeometryCollectionEngine::GeometryCollectionComponent**)((uintptr_t)this + 0x220);
}
_Script_GeometryCollectionEngine::GeometryCollectionDebugDrawComponent*& _Script_GeometryCollectionEngine::GeometryCollectionActor::get_GeometryCollectionDebugDrawComponent() {
    return *(_Script_GeometryCollectionEngine::GeometryCollectionDebugDrawComponent**)((uintptr_t)this + 0x228);
}
_Script_CoreUObject::Class* _Script_GeometryCollectionEngine::GeometryCollectionActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/GeometryCollectionEngine.GeometryCollectionActor");
    return result;
}
bool _Script_GeometryCollectionEngine::GeometryCollectionActor::RaycastSingle(_Script_CoreUObject::Vector Start, _Script_CoreUObject::Vector End, _Script_Engine::HitResult& OutHit) {
    return;
}
