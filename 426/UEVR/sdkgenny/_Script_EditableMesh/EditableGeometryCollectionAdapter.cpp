#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "EditableGeometryCollectionAdapter.hpp"
#include "EditableMeshAdapter.hpp"
#include "..\_Script_GeometryCollectionEngine\GeometryCollection.hpp"
_Script_GeometryCollectionEngine::GeometryCollection*& _Script_EditableMesh::EditableGeometryCollectionAdapter::get_GeometryCollection() {
    return *(_Script_GeometryCollectionEngine::GeometryCollection**)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_EditableMesh::EditableGeometryCollectionAdapter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/EditableMesh.EditableGeometryCollectionAdapter");
    return result;
}
_Script_GeometryCollectionEngine::GeometryCollection*& _Script_EditableMesh::EditableGeometryCollectionAdapter::get_OriginalGeometryCollection() {
    return *(_Script_GeometryCollectionEngine::GeometryCollection**)((uintptr_t)this + 0x30);
}
int32_t& _Script_EditableMesh::EditableGeometryCollectionAdapter::get_GeometryCollectionLODIndex() {
    return *(int32_t*)((uintptr_t)this + 0x38);
}
