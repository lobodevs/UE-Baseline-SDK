#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PrimitiveComponentInstanceData.hpp"
#include "StaticMesh.hpp"
#include "StaticMeshComponentInstanceData.hpp"
_Script_Engine::StaticMesh*& _Script_Engine::StaticMeshComponentInstanceData::get_StaticMesh() {
    return *(_Script_Engine::StaticMesh**)((uintptr_t)this + 0x100);
}
void* _Script_Engine::StaticMeshComponentInstanceData::get_VertexColorLODs() {
    return (void*)((uintptr_t)this + 0x108);
}
void* _Script_Engine::StaticMeshComponentInstanceData::get_CachedStaticLighting() {
    return (void*)((uintptr_t)this + 0x118);
}
void* _Script_Engine::StaticMeshComponentInstanceData::get_StreamingTextureData() {
    return (void*)((uintptr_t)this + 0x128);
}
_Script_CoreUObject::Class* _Script_Engine::StaticMeshComponentInstanceData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.StaticMeshComponentInstanceData");
    return result;
}
