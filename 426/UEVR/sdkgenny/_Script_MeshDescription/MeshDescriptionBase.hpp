#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "EdgeID.hpp"
#include "PolygonGroupID.hpp"
#include "PolygonID.hpp"
#include "TriangleID.hpp"
#include "VertexID.hpp"
#include "VertexInstanceID.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MeshDescription {
#pragma pack(push, 1)
struct MeshDescriptionBase : public _Script_CoreUObject::Object {
    private: char pad_28[0x368]; public:
    static _Script_CoreUObject::Class* static_class();
    void SetVertexPosition(_Script_MeshDescription::VertexID VertexID, _Script_CoreUObject::Vector& Position);
    void SetPolygonVertexInstance(_Script_MeshDescription::PolygonID PolygonID, int32_t PerimeterIndex, _Script_MeshDescription::VertexInstanceID VertexInstanceID);
    void SetPolygonPolygonGroup(_Script_MeshDescription::PolygonID PolygonID, _Script_MeshDescription::PolygonGroupID PolygonGroupID);
    void ReversePolygonFacing(_Script_MeshDescription::PolygonID PolygonID);
    void ReserveNewVertices(int32_t NumberOfNewVertices);
    void ReserveNewVertexInstances(int32_t NumberOfNewVertexInstances);
    void ReserveNewTriangles(int32_t NumberOfNewTriangles);
    void ReserveNewPolygons(int32_t NumberOfNewPolygons);
    void ReserveNewPolygonGroups(int32_t NumberOfNewPolygonGroups);
    void ReserveNewEdges(int32_t NumberOfNewEdges);
    bool IsVertexValid(_Script_MeshDescription::VertexID VertexID);
    bool IsVertexOrphaned(_Script_MeshDescription::VertexID VertexID);
    bool IsVertexInstanceValid(_Script_MeshDescription::VertexInstanceID VertexInstanceID);
    bool IsTriangleValid(_Script_MeshDescription::TriangleID TriangleID);
    bool IsTrianglePartOfNgon(_Script_MeshDescription::TriangleID TriangleID);
    bool IsPolygonValid(_Script_MeshDescription::PolygonID PolygonID);
    bool IsPolygonGroupValid(_Script_MeshDescription::PolygonGroupID PolygonGroupID);
    bool IsEmpty();
    bool IsEdgeValid(_Script_MeshDescription::EdgeID EdgeID);
    bool IsEdgeInternalToPolygon(_Script_MeshDescription::EdgeID EdgeID, _Script_MeshDescription::PolygonID PolygonID);
    bool IsEdgeInternal(_Script_MeshDescription::EdgeID EdgeID);
    void GetVertexVertexInstances(_Script_MeshDescription::VertexID VertexID, void*& OutVertexInstanceIDs);
    _Script_CoreUObject::Vector GetVertexPosition(_Script_MeshDescription::VertexID VertexID);
    _Script_MeshDescription::EdgeID GetVertexPairEdge(_Script_MeshDescription::VertexID VertexID0, _Script_MeshDescription::VertexID VertexID1);
    _Script_MeshDescription::VertexID GetVertexInstanceVertex(_Script_MeshDescription::VertexInstanceID VertexInstanceID);
    _Script_MeshDescription::EdgeID GetVertexInstancePairEdge(_Script_MeshDescription::VertexInstanceID VertexInstanceID0, _Script_MeshDescription::VertexInstanceID VertexInstanceID1);
    _Script_MeshDescription::VertexInstanceID GetVertexInstanceForTriangleVertex(_Script_MeshDescription::TriangleID TriangleID, _Script_MeshDescription::VertexID VertexID);
    _Script_MeshDescription::VertexInstanceID GetVertexInstanceForPolygonVertex(_Script_MeshDescription::PolygonID PolygonID, _Script_MeshDescription::VertexID VertexID);
    void GetVertexInstanceConnectedTriangles(_Script_MeshDescription::VertexInstanceID VertexInstanceID, void*& OutConnectedTriangleIDs);
    void GetVertexInstanceConnectedPolygons(_Script_MeshDescription::VertexInstanceID VertexInstanceID, void*& OutConnectedPolygonIDs);
    void GetVertexConnectedTriangles(_Script_MeshDescription::VertexID VertexID, void*& OutConnectedTriangleIDs);
    void GetVertexConnectedPolygons(_Script_MeshDescription::VertexID VertexID, void*& OutConnectedPolygonIDs);
    void GetVertexConnectedEdges(_Script_MeshDescription::VertexID VertexID, void*& OutEdgeIDs);
    void GetVertexAdjacentVertices(_Script_MeshDescription::VertexID VertexID, void*& OutAdjacentVertexIDs);
    void GetTriangleVertices(_Script_MeshDescription::TriangleID TriangleID, void*& OutVertexIDs);
    void GetTriangleVertexInstances(_Script_MeshDescription::TriangleID TriangleID, void*& OutVertexInstanceIDs);
    _Script_MeshDescription::VertexInstanceID GetTriangleVertexInstance(_Script_MeshDescription::TriangleID TriangleID, int32_t Index);
    _Script_MeshDescription::PolygonGroupID GetTrianglePolygonGroup(_Script_MeshDescription::TriangleID TriangleID);
    _Script_MeshDescription::PolygonID GetTrianglePolygon(_Script_MeshDescription::TriangleID TriangleID);
    void GetTriangleEdges(_Script_MeshDescription::TriangleID TriangleID, void*& OutEdgeIDs);
    void GetTriangleAdjacentTriangles(_Script_MeshDescription::TriangleID TriangleID, void*& OutTriangleIDs);
    void GetPolygonVertices(_Script_MeshDescription::PolygonID PolygonID, void*& OutVertexIDs);
    void GetPolygonVertexInstances(_Script_MeshDescription::PolygonID PolygonID, void*& OutVertexInstanceIDs);
    void GetPolygonTriangles(_Script_MeshDescription::PolygonID PolygonID, void*& OutTriangleIDs);
    _Script_MeshDescription::PolygonGroupID GetPolygonPolygonGroup(_Script_MeshDescription::PolygonID PolygonID);
    void GetPolygonPerimeterEdges(_Script_MeshDescription::PolygonID PolygonID, void*& OutEdgeIDs);
    void GetPolygonInternalEdges(_Script_MeshDescription::PolygonID PolygonID, void*& OutEdgeIDs);
    void GetPolygonGroupPolygons(_Script_MeshDescription::PolygonGroupID PolygonGroupID, void*& OutPolygonIDs);
    void GetPolygonAdjacentPolygons(_Script_MeshDescription::PolygonID PolygonID, void*& OutPolygonIDs);
    int32_t GetNumVertexVertexInstances(_Script_MeshDescription::VertexID VertexID);
    int32_t GetNumVertexInstanceConnectedTriangles(_Script_MeshDescription::VertexInstanceID VertexInstanceID);
    int32_t GetNumVertexInstanceConnectedPolygons(_Script_MeshDescription::VertexInstanceID VertexInstanceID);
    int32_t GetNumVertexConnectedTriangles(_Script_MeshDescription::VertexID VertexID);
    int32_t GetNumVertexConnectedPolygons(_Script_MeshDescription::VertexID VertexID);
    int32_t GetNumVertexConnectedEdges(_Script_MeshDescription::VertexID VertexID);
    int32_t GetNumPolygonVertices(_Script_MeshDescription::PolygonID PolygonID);
    int32_t GetNumPolygonTriangles(_Script_MeshDescription::PolygonID PolygonID);
    int32_t GetNumPolygonInternalEdges(_Script_MeshDescription::PolygonID PolygonID);
    int32_t GetNumPolygonGroupPolygons(_Script_MeshDescription::PolygonGroupID PolygonGroupID);
    int32_t GetNumEdgeConnectedTriangles(_Script_MeshDescription::EdgeID EdgeID);
    int32_t GetNumEdgeConnectedPolygons(_Script_MeshDescription::EdgeID EdgeID);
    void GetEdgeVertices(_Script_MeshDescription::EdgeID EdgeID, void*& OutVertexIDs);
    _Script_MeshDescription::VertexID GetEdgeVertex(_Script_MeshDescription::EdgeID EdgeID, int32_t VertexNumber);
    void GetEdgeConnectedTriangles(_Script_MeshDescription::EdgeID EdgeID, void*& OutConnectedTriangleIDs);
    void GetEdgeConnectedPolygons(_Script_MeshDescription::EdgeID EdgeID, void*& OutConnectedPolygonIDs);
    void Empty();
    void DeleteVertexInstance(_Script_MeshDescription::VertexInstanceID VertexInstanceID, void*& OrphanedVertices);
    void DeleteVertex(_Script_MeshDescription::VertexID VertexID);
    void DeleteTriangle(_Script_MeshDescription::TriangleID TriangleID, void*& OrphanedEdges, void*& OrphanedVertexInstances, void*& OrphanedPolygonGroupsPtr);
    void DeletePolygonGroup(_Script_MeshDescription::PolygonGroupID PolygonGroupID);
    void DeletePolygon(_Script_MeshDescription::PolygonID PolygonID, void*& OrphanedEdges, void*& OrphanedVertexInstances, void*& OrphanedPolygonGroups);
    void DeleteEdge(_Script_MeshDescription::EdgeID EdgeID, void*& OrphanedVertices);
    void CreateVertexWithID(_Script_MeshDescription::VertexID VertexID);
    void CreateVertexInstanceWithID(_Script_MeshDescription::VertexInstanceID VertexInstanceID, _Script_MeshDescription::VertexID VertexID);
    _Script_MeshDescription::VertexInstanceID CreateVertexInstance(_Script_MeshDescription::VertexID VertexID);
    _Script_MeshDescription::VertexID CreateVertex();
    void CreateTriangleWithID(_Script_MeshDescription::TriangleID TriangleID, _Script_MeshDescription::PolygonGroupID PolygonGroupID, void*& VertexInstanceIDs, void*& NewEdgeIDs);
    _Script_MeshDescription::TriangleID CreateTriangle(_Script_MeshDescription::PolygonGroupID PolygonGroupID, void*& VertexInstanceIDs, void*& NewEdgeIDs);
    void CreatePolygonWithID(_Script_MeshDescription::PolygonID PolygonID, _Script_MeshDescription::PolygonGroupID PolygonGroupID, void*& VertexInstanceIDs, void*& NewEdgeIDs);
    void CreatePolygonGroupWithID(_Script_MeshDescription::PolygonGroupID PolygonGroupID);
    _Script_MeshDescription::PolygonGroupID CreatePolygonGroup();
    _Script_MeshDescription::PolygonID CreatePolygon(_Script_MeshDescription::PolygonGroupID PolygonGroupID, void*& VertexInstanceIDs, void*& NewEdgeIDs);
    void CreateEdgeWithID(_Script_MeshDescription::EdgeID EdgeID, _Script_MeshDescription::VertexID VertexID0, _Script_MeshDescription::VertexID VertexID1);
    _Script_MeshDescription::EdgeID CreateEdge(_Script_MeshDescription::VertexID VertexID0, _Script_MeshDescription::VertexID VertexID1);
    void ComputePolygonTriangulation(_Script_MeshDescription::PolygonID PolygonID);
}; // Size: 0x390
#pragma pack(pop)
}
