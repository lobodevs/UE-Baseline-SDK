#include "..\FUObjectArray.hpp"
#include "..\_Script_ChaosSolverEngine\ChaosSolverActor.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GeometryCollectionActor.hpp"
#include "GeometryCollectionDebugDrawActorSelectedRigidBody.hpp"
_Script_GeometryCollectionEngine::GeometryCollectionActor*& _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActorSelectedRigidBody::get_GeometryCollection() {
    return *(_Script_GeometryCollectionEngine::GeometryCollectionActor**)((uintptr_t)this + 0x10);
}
int32_t& _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActorSelectedRigidBody::get_ID() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
_Script_ChaosSolverEngine::ChaosSolverActor*& _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActorSelectedRigidBody::get_Solver() {
    return *(_Script_ChaosSolverEngine::ChaosSolverActor**)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActorSelectedRigidBody::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/GeometryCollectionEngine.GeometryCollectionDebugDrawActorSelectedRigidBody");
    return result;
}
