#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_MeshDescription\MeshDescriptionBase.hpp"
#include "..\_Script_MeshDescription\PolygonGroupID.hpp"
#include "..\_Script_MeshDescription\VertexInstanceID.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MeshDescription {
struct PolygonID;
}
namespace _Script_StaticMeshDescription {
#pragma pack(push, 1)
struct StaticMeshDescription : public _Script_MeshDescription::MeshDescriptionBase {
    static _Script_CoreUObject::Class* static_class();
    void SetVertexInstanceUV(_Script_MeshDescription::VertexInstanceID VertexInstanceID, _Script_CoreUObject::Vector2D UV, int32_t UVIndex);
    void SetPolygonGroupMaterialSlotName(_Script_MeshDescription::PolygonGroupID PolygonGroupID, void*& SlotName);
    _Script_CoreUObject::Vector2D GetVertexInstanceUV(_Script_MeshDescription::VertexInstanceID VertexInstanceID, int32_t UVIndex);
    void CreateCube(_Script_CoreUObject::Vector Center, _Script_CoreUObject::Vector HalfExtents, _Script_MeshDescription::PolygonGroupID PolygonGroup, _Script_MeshDescription::PolygonID& PolygonID_PlusX, _Script_MeshDescription::PolygonID& PolygonID_MinusX, _Script_MeshDescription::PolygonID& PolygonID_PlusY, _Script_MeshDescription::PolygonID& PolygonID_MinusY, _Script_MeshDescription::PolygonID& PolygonID_PlusZ, _Script_MeshDescription::PolygonID& PolygonID_MinusZ);
}; // Size: 0x390
#pragma pack(pop)
}
