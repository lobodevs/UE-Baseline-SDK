#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "EdgeID.hpp"
#include "MeshDescriptionBase.hpp"
#include "PolygonGroupID.hpp"
#include "PolygonID.hpp"
#include "TriangleID.hpp"
#include "VertexID.hpp"
#include "VertexInstanceID.hpp"
void _Script_MeshDescription::MeshDescriptionBase::ReserveNewVertexInstances(int32_t NumberOfNewVertexInstances) {
    return;
}
int32_t _Script_MeshDescription::MeshDescriptionBase::GetNumVertexConnectedEdges(_Script_MeshDescription::VertexID VertexID) {
    return;
}
_Script_CoreUObject::Class* _Script_MeshDescription::MeshDescriptionBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MeshDescription.MeshDescriptionBase");
    return result;
}
void _Script_MeshDescription::MeshDescriptionBase::GetVertexInstanceConnectedPolygons(_Script_MeshDescription::VertexInstanceID VertexInstanceID, void*& OutConnectedPolygonIDs) {
    return;
}
_Script_MeshDescription::PolygonID _Script_MeshDescription::MeshDescriptionBase::CreatePolygon(_Script_MeshDescription::PolygonGroupID PolygonGroupID, void*& VertexInstanceIDs, void*& NewEdgeIDs) {
    return;
}
void _Script_MeshDescription::MeshDescriptionBase::SetVertexPosition(_Script_MeshDescription::VertexID VertexID, _Script_CoreUObject::Vector& Position) {
    return;
}
void _Script_MeshDescription::MeshDescriptionBase::SetPolygonVertexInstance(_Script_MeshDescription::PolygonID PolygonID, int32_t PerimeterIndex, _Script_MeshDescription::VertexInstanceID VertexInstanceID) {
    return;
}
void _Script_MeshDescription::MeshDescriptionBase::GetPolygonAdjacentPolygons(_Script_MeshDescription::PolygonID PolygonID, void*& OutPolygonIDs) {
    return;
}
void _Script_MeshDescription::MeshDescriptionBase::SetPolygonPolygonGroup(_Script_MeshDescription::PolygonID PolygonID, _Script_MeshDescription::PolygonGroupID PolygonGroupID) {
    return;
}
bool _Script_MeshDescription::MeshDescriptionBase::IsEdgeInternalToPolygon(_Script_MeshDescription::EdgeID EdgeID, _Script_MeshDescription::PolygonID PolygonID) {
    return;
}
void _Script_MeshDescription::MeshDescriptionBase::ReversePolygonFacing(_Script_MeshDescription::PolygonID PolygonID) {
    return;
}
void _Script_MeshDescription::MeshDescriptionBase::ReserveNewTriangles(int32_t NumberOfNewTriangles) {
    return;
}
void _Script_MeshDescription::MeshDescriptionBase::ReserveNewVertices(int32_t NumberOfNewVertices) {
    return;
}
void _Script_MeshDescription::MeshDescriptionBase::ReserveNewPolygons(int32_t NumberOfNewPolygons) {
    return;
}
void _Script_MeshDescription::MeshDescriptionBase::ReserveNewPolygonGroups(int32_t NumberOfNewPolygonGroups) {
    return;
}
int32_t _Script_MeshDescription::MeshDescriptionBase::GetNumEdgeConnectedTriangles(_Script_MeshDescription::EdgeID EdgeID) {
    return;
}
void _Script_MeshDescription::MeshDescriptionBase::ReserveNewEdges(int32_t NumberOfNewEdges) {
    return;
}
bool _Script_MeshDescription::MeshDescriptionBase::IsVertexValid(_Script_MeshDescription::VertexID VertexID) {
    return;
}
int32_t _Script_MeshDescription::MeshDescriptionBase::GetNumEdgeConnectedPolygons(_Script_MeshDescription::EdgeID EdgeID) {
    return;
}
bool _Script_MeshDescription::MeshDescriptionBase::IsVertexOrphaned(_Script_MeshDescription::VertexID VertexID) {
    return;
}
bool _Script_MeshDescription::MeshDescriptionBase::IsVertexInstanceValid(_Script_MeshDescription::VertexInstanceID VertexInstanceID) {
    return;
}
bool _Script_MeshDescription::MeshDescriptionBase::IsTriangleValid(_Script_MeshDescription::TriangleID TriangleID) {
    return;
}
int32_t _Script_MeshDescription::MeshDescriptionBase::GetNumVertexConnectedTriangles(_Script_MeshDescription::VertexID VertexID) {
    return;
}
bool _Script_MeshDescription::MeshDescriptionBase::IsTrianglePartOfNgon(_Script_MeshDescription::TriangleID TriangleID) {
    return;
}
bool _Script_MeshDescription::MeshDescriptionBase::IsPolygonValid(_Script_MeshDescription::PolygonID PolygonID) {
    return;
}
bool _Script_MeshDescription::MeshDescriptionBase::IsPolygonGroupValid(_Script_MeshDescription::PolygonGroupID PolygonGroupID) {
    return;
}
int32_t _Script_MeshDescription::MeshDescriptionBase::GetNumVertexVertexInstances(_Script_MeshDescription::VertexID VertexID) {
    return;
}
bool _Script_MeshDescription::MeshDescriptionBase::IsEmpty() {
    return;
}
void _Script_MeshDescription::MeshDescriptionBase::GetVertexConnectedPolygons(_Script_MeshDescription::VertexID VertexID, void*& OutConnectedPolygonIDs) {
    return;
}
void _Script_MeshDescription::MeshDescriptionBase::DeletePolygonGroup(_Script_MeshDescription::PolygonGroupID PolygonGroupID) {
    return;
}
bool _Script_MeshDescription::MeshDescriptionBase::IsEdgeValid(_Script_MeshDescription::EdgeID EdgeID) {
    return;
}
bool _Script_MeshDescription::MeshDescriptionBase::IsEdgeInternal(_Script_MeshDescription::EdgeID EdgeID) {
    return;
}
int32_t _Script_MeshDescription::MeshDescriptionBase::GetNumPolygonGroupPolygons(_Script_MeshDescription::PolygonGroupID PolygonGroupID) {
    return;
}
void _Script_MeshDescription::MeshDescriptionBase::GetVertexVertexInstances(_Script_MeshDescription::VertexID VertexID, void*& OutVertexInstanceIDs) {
    return;
}
_Script_CoreUObject::Vector _Script_MeshDescription::MeshDescriptionBase::GetVertexPosition(_Script_MeshDescription::VertexID VertexID) {
    return;
}
_Script_MeshDescription::EdgeID _Script_MeshDescription::MeshDescriptionBase::GetVertexPairEdge(_Script_MeshDescription::VertexID VertexID0, _Script_MeshDescription::VertexID VertexID1) {
    return;
}
_Script_MeshDescription::EdgeID _Script_MeshDescription::MeshDescriptionBase::GetVertexInstancePairEdge(_Script_MeshDescription::VertexInstanceID VertexInstanceID0, _Script_MeshDescription::VertexInstanceID VertexInstanceID1) {
    return;
}
_Script_MeshDescription::VertexID _Script_MeshDescription::MeshDescriptionBase::GetVertexInstanceVertex(_Script_MeshDescription::VertexInstanceID VertexInstanceID) {
    return;
}
void _Script_MeshDescription::MeshDescriptionBase::GetPolygonPerimeterEdges(_Script_MeshDescription::PolygonID PolygonID, void*& OutEdgeIDs) {
    return;
}
_Script_MeshDescription::VertexInstanceID _Script_MeshDescription::MeshDescriptionBase::GetVertexInstanceForTriangleVertex(_Script_MeshDescription::TriangleID TriangleID, _Script_MeshDescription::VertexID VertexID) {
    return;
}
void _Script_MeshDescription::MeshDescriptionBase::GetEdgeVertices(_Script_MeshDescription::EdgeID EdgeID, void*& OutVertexIDs) {
    return;
}
_Script_MeshDescription::VertexInstanceID _Script_MeshDescription::MeshDescriptionBase::GetVertexInstanceForPolygonVertex(_Script_MeshDescription::PolygonID PolygonID, _Script_MeshDescription::VertexID VertexID) {
    return;
}
int32_t _Script_MeshDescription::MeshDescriptionBase::GetNumVertexInstanceConnectedPolygons(_Script_MeshDescription::VertexInstanceID VertexInstanceID) {
    return;
}
void _Script_MeshDescription::MeshDescriptionBase::GetVertexInstanceConnectedTriangles(_Script_MeshDescription::VertexInstanceID VertexInstanceID, void*& OutConnectedTriangleIDs) {
    return;
}
void _Script_MeshDescription::MeshDescriptionBase::GetVertexConnectedTriangles(_Script_MeshDescription::VertexID VertexID, void*& OutConnectedTriangleIDs) {
    return;
}
void _Script_MeshDescription::MeshDescriptionBase::GetVertexConnectedEdges(_Script_MeshDescription::VertexID VertexID, void*& OutEdgeIDs) {
    return;
}
void _Script_MeshDescription::MeshDescriptionBase::GetVertexAdjacentVertices(_Script_MeshDescription::VertexID VertexID, void*& OutAdjacentVertexIDs) {
    return;
}
void _Script_MeshDescription::MeshDescriptionBase::GetTriangleVertices(_Script_MeshDescription::TriangleID TriangleID, void*& OutVertexIDs) {
    return;
}
void _Script_MeshDescription::MeshDescriptionBase::GetTriangleVertexInstances(_Script_MeshDescription::TriangleID TriangleID, void*& OutVertexInstanceIDs) {
    return;
}
_Script_MeshDescription::VertexInstanceID _Script_MeshDescription::MeshDescriptionBase::GetTriangleVertexInstance(_Script_MeshDescription::TriangleID TriangleID, int32_t Index) {
    return;
}
_Script_MeshDescription::PolygonID _Script_MeshDescription::MeshDescriptionBase::GetTrianglePolygon(_Script_MeshDescription::TriangleID TriangleID) {
    return;
}
_Script_MeshDescription::PolygonGroupID _Script_MeshDescription::MeshDescriptionBase::GetTrianglePolygonGroup(_Script_MeshDescription::TriangleID TriangleID) {
    return;
}
void _Script_MeshDescription::MeshDescriptionBase::GetTriangleEdges(_Script_MeshDescription::TriangleID TriangleID, void*& OutEdgeIDs) {
    return;
}
void _Script_MeshDescription::MeshDescriptionBase::GetPolygonVertices(_Script_MeshDescription::PolygonID PolygonID, void*& OutVertexIDs) {
    return;
}
void _Script_MeshDescription::MeshDescriptionBase::GetTriangleAdjacentTriangles(_Script_MeshDescription::TriangleID TriangleID, void*& OutTriangleIDs) {
    return;
}
int32_t _Script_MeshDescription::MeshDescriptionBase::GetNumPolygonInternalEdges(_Script_MeshDescription::PolygonID PolygonID) {
    return;
}
void _Script_MeshDescription::MeshDescriptionBase::GetPolygonVertexInstances(_Script_MeshDescription::PolygonID PolygonID, void*& OutVertexInstanceIDs) {
    return;
}
void _Script_MeshDescription::MeshDescriptionBase::GetPolygonTriangles(_Script_MeshDescription::PolygonID PolygonID, void*& OutTriangleIDs) {
    return;
}
_Script_MeshDescription::PolygonGroupID _Script_MeshDescription::MeshDescriptionBase::GetPolygonPolygonGroup(_Script_MeshDescription::PolygonID PolygonID) {
    return;
}
void _Script_MeshDescription::MeshDescriptionBase::GetPolygonInternalEdges(_Script_MeshDescription::PolygonID PolygonID, void*& OutEdgeIDs) {
    return;
}
void _Script_MeshDescription::MeshDescriptionBase::GetPolygonGroupPolygons(_Script_MeshDescription::PolygonGroupID PolygonGroupID, void*& OutPolygonIDs) {
    return;
}
int32_t _Script_MeshDescription::MeshDescriptionBase::GetNumVertexInstanceConnectedTriangles(_Script_MeshDescription::VertexInstanceID VertexInstanceID) {
    return;
}
int32_t _Script_MeshDescription::MeshDescriptionBase::GetNumVertexConnectedPolygons(_Script_MeshDescription::VertexID VertexID) {
    return;
}
int32_t _Script_MeshDescription::MeshDescriptionBase::GetNumPolygonVertices(_Script_MeshDescription::PolygonID PolygonID) {
    return;
}
int32_t _Script_MeshDescription::MeshDescriptionBase::GetNumPolygonTriangles(_Script_MeshDescription::PolygonID PolygonID) {
    return;
}
_Script_MeshDescription::VertexID _Script_MeshDescription::MeshDescriptionBase::GetEdgeVertex(_Script_MeshDescription::EdgeID EdgeID, int32_t VertexNumber) {
    return;
}
void _Script_MeshDescription::MeshDescriptionBase::GetEdgeConnectedTriangles(_Script_MeshDescription::EdgeID EdgeID, void*& OutConnectedTriangleIDs) {
    return;
}
void _Script_MeshDescription::MeshDescriptionBase::GetEdgeConnectedPolygons(_Script_MeshDescription::EdgeID EdgeID, void*& OutConnectedPolygonIDs) {
    return;
}
void _Script_MeshDescription::MeshDescriptionBase::Empty() {
    return;
}
void _Script_MeshDescription::MeshDescriptionBase::DeleteVertexInstance(_Script_MeshDescription::VertexInstanceID VertexInstanceID, void*& OrphanedVertices) {
    return;
}
void _Script_MeshDescription::MeshDescriptionBase::DeleteVertex(_Script_MeshDescription::VertexID VertexID) {
    return;
}
void _Script_MeshDescription::MeshDescriptionBase::DeleteTriangle(_Script_MeshDescription::TriangleID TriangleID, void*& OrphanedEdges, void*& OrphanedVertexInstances, void*& OrphanedPolygonGroupsPtr) {
    return;
}
void _Script_MeshDescription::MeshDescriptionBase::DeletePolygon(_Script_MeshDescription::PolygonID PolygonID, void*& OrphanedEdges, void*& OrphanedVertexInstances, void*& OrphanedPolygonGroups) {
    return;
}
void _Script_MeshDescription::MeshDescriptionBase::DeleteEdge(_Script_MeshDescription::EdgeID EdgeID, void*& OrphanedVertices) {
    return;
}
void _Script_MeshDescription::MeshDescriptionBase::CreateVertexWithID(_Script_MeshDescription::VertexID VertexID) {
    return;
}
void _Script_MeshDescription::MeshDescriptionBase::CreateVertexInstanceWithID(_Script_MeshDescription::VertexInstanceID VertexInstanceID, _Script_MeshDescription::VertexID VertexID) {
    return;
}
_Script_MeshDescription::VertexInstanceID _Script_MeshDescription::MeshDescriptionBase::CreateVertexInstance(_Script_MeshDescription::VertexID VertexID) {
    return;
}
_Script_MeshDescription::VertexID _Script_MeshDescription::MeshDescriptionBase::CreateVertex() {
    return;
}
void _Script_MeshDescription::MeshDescriptionBase::CreateTriangleWithID(_Script_MeshDescription::TriangleID TriangleID, _Script_MeshDescription::PolygonGroupID PolygonGroupID, void*& VertexInstanceIDs, void*& NewEdgeIDs) {
    return;
}
_Script_MeshDescription::TriangleID _Script_MeshDescription::MeshDescriptionBase::CreateTriangle(_Script_MeshDescription::PolygonGroupID PolygonGroupID, void*& VertexInstanceIDs, void*& NewEdgeIDs) {
    return;
}
void _Script_MeshDescription::MeshDescriptionBase::CreatePolygonWithID(_Script_MeshDescription::PolygonID PolygonID, _Script_MeshDescription::PolygonGroupID PolygonGroupID, void*& VertexInstanceIDs, void*& NewEdgeIDs) {
    return;
}
void _Script_MeshDescription::MeshDescriptionBase::CreatePolygonGroupWithID(_Script_MeshDescription::PolygonGroupID PolygonGroupID) {
    return;
}
_Script_MeshDescription::PolygonGroupID _Script_MeshDescription::MeshDescriptionBase::CreatePolygonGroup() {
    return;
}
void _Script_MeshDescription::MeshDescriptionBase::CreateEdgeWithID(_Script_MeshDescription::EdgeID EdgeID, _Script_MeshDescription::VertexID VertexID0, _Script_MeshDescription::VertexID VertexID1) {
    return;
}
_Script_MeshDescription::EdgeID _Script_MeshDescription::MeshDescriptionBase::CreateEdge(_Script_MeshDescription::VertexID VertexID0, _Script_MeshDescription::VertexID VertexID1) {
    return;
}
void _Script_MeshDescription::MeshDescriptionBase::ComputePolygonTriangulation(_Script_MeshDescription::PolygonID PolygonID) {
    return;
}
