#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AdaptorPolygon2Group.hpp"
void* _Script_EditableMesh::AdaptorPolygon2Group::get_RenderingSectionIndex() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_EditableMesh::AdaptorPolygon2Group::get_MaterialIndex() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
int32_t& _Script_EditableMesh::AdaptorPolygon2Group::get_MaxTriangles() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_EditableMesh::AdaptorPolygon2Group::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/EditableMesh.AdaptorPolygon2Group");
    return result;
}
