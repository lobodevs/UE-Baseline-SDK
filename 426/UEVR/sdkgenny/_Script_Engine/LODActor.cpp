#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Actor.hpp"
#include "HLODProxy.hpp"
#include "LODActor.hpp"
#include "StaticMeshComponent.hpp"
_Script_Engine::StaticMeshComponent*& _Script_Engine::LODActor::get_StaticMeshComponent() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x220);
}
float& _Script_Engine::LODActor::get_LODDrawDistance() {
    return *(float*)((uintptr_t)this + 0x288);
}
void* _Script_Engine::LODActor::get_ImpostersStaticMeshComponents() {
    return (void*)((uintptr_t)this + 0x228);
}
int32_t& _Script_Engine::LODActor::get_LODLevel() {
    return *(int32_t*)((uintptr_t)this + 0x28c);
}
_Script_Engine::HLODProxy*& _Script_Engine::LODActor::get_Proxy() {
    return *(_Script_Engine::HLODProxy**)((uintptr_t)this + 0x278);
}
void* _Script_Engine::LODActor::get_Key() {
    return (void*)((uintptr_t)this + 0x280);
}
void* _Script_Engine::LODActor::get_SubActors() {
    return (void*)((uintptr_t)this + 0x290);
}
void* _Script_Engine::LODActor::get_CachedNumHLODLevels() {
    return (void*)((uintptr_t)this + 0x2a0);
}
_Script_CoreUObject::Class* _Script_Engine::LODActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.LODActor");
    return result;
}
