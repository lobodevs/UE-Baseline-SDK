#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "StaticMeshVertexColorLODData.hpp"
void* _Script_Engine::StaticMeshVertexColorLODData::get_PaintedVertices() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::StaticMeshVertexColorLODData::get_VertexBufferColors() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::StaticMeshVertexColorLODData::get_LODIndex() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_Engine::StaticMeshVertexColorLODData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.StaticMeshVertexColorLODData");
    return result;
}
