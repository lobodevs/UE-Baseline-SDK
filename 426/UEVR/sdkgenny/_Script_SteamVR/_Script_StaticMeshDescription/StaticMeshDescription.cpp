#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_MeshDescription\MeshDescriptionBase.hpp"
#include "..\_Script_MeshDescription\PolygonGroupID.hpp"
#include "..\_Script_MeshDescription\PolygonID.hpp"
#include "..\_Script_MeshDescription\VertexInstanceID.hpp"
#include "StaticMeshDescription.hpp"
_Script_CoreUObject::Class* _Script_StaticMeshDescription::StaticMeshDescription::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/StaticMeshDescription.StaticMeshDescription");
    return result;
}
void _Script_StaticMeshDescription::StaticMeshDescription::CreateCube(_Script_CoreUObject::Vector Center, _Script_CoreUObject::Vector HalfExtents, _Script_MeshDescription::PolygonGroupID PolygonGroup, _Script_MeshDescription::PolygonID& PolygonID_PlusX, _Script_MeshDescription::PolygonID& PolygonID_MinusX, _Script_MeshDescription::PolygonID& PolygonID_PlusY, _Script_MeshDescription::PolygonID& PolygonID_MinusY, _Script_MeshDescription::PolygonID& PolygonID_PlusZ, _Script_MeshDescription::PolygonID& PolygonID_MinusZ) {
    return;
}
void _Script_StaticMeshDescription::StaticMeshDescription::SetVertexInstanceUV(_Script_MeshDescription::VertexInstanceID VertexInstanceID, _Script_CoreUObject::Vector2D UV, int32_t UVIndex) {
    return;
}
void _Script_StaticMeshDescription::StaticMeshDescription::SetPolygonGroupMaterialSlotName(_Script_MeshDescription::PolygonGroupID PolygonGroupID, void*& SlotName) {
    return;
}
_Script_CoreUObject::Vector2D _Script_StaticMeshDescription::StaticMeshDescription::GetVertexInstanceUV(_Script_MeshDescription::VertexInstanceID VertexInstanceID, int32_t UVIndex) {
    return;
}
