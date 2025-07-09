#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AdaptorPolygon.hpp"
_Script_CoreUObject::Class* _Script_EditableMesh::AdaptorPolygon::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/EditableMesh.AdaptorPolygon");
    return result;
}
void* _Script_EditableMesh::AdaptorPolygon::get_PolygonGroupID() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_EditableMesh::AdaptorPolygon::get_TriangulatedPolygonTriangleIndices() {
    return (void*)((uintptr_t)this + 0x8);
}
