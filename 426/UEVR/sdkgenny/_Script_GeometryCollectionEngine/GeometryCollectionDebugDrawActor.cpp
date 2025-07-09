#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\BillboardComponent.hpp"
#include "GeometryCollectionDebugDrawActor.hpp"
void* _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::get_HideGeometry() {
    return (void*)((uintptr_t)this + 0x243);
}
void* _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::get_WarningMessage() {
    return (void*)((uintptr_t)this + 0x220);
}
void _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::set_bShowBoundingBox(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x253 + 0);
    *(uint8_t*)((uintptr_t)this + 0x253 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::set_bDebugDrawClustering(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x242 + 0);
    *(uint8_t*)((uintptr_t)this + 0x242 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::get_bShowFaces() {
    return (*(uint8_t*)((uintptr_t)this + 0x254 + 0)) & 1 != 0;
}
void _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::set_bShowRigidBodyInfos(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x24b + 0);
    *(uint8_t*)((uintptr_t)this + 0x24b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::set_bDebugDrawHierarchy(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x241 + 0);
    *(uint8_t*)((uintptr_t)this + 0x241 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::get_SelectedRigidBody() {
    return (void*)((uintptr_t)this + 0x228);
}
bool _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::get_bUseActiveVisualization() {
    return (*(uint8_t*)((uintptr_t)this + 0x25f + 0)) & 1 != 0;
}
bool _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::get_bDebugDrawWholeCollection() {
    return (*(uint8_t*)((uintptr_t)this + 0x240 + 0)) & 1 != 0;
}
bool _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::get_bShowParent() {
    return (*(uint8_t*)((uintptr_t)this + 0x24e + 0)) & 1 != 0;
}
void _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::set_bDebugDrawWholeCollection(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x240 + 0);
    *(uint8_t*)((uintptr_t)this + 0x240 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::get_bTextShadow() {
    return (*(uint8_t*)((uintptr_t)this + 0x268 + 0)) & 1 != 0;
}
bool _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::get_bDebugDrawHierarchy() {
    return (*(uint8_t*)((uintptr_t)this + 0x241 + 0)) & 1 != 0;
}
bool _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::get_bShowLevel() {
    return (*(uint8_t*)((uintptr_t)this + 0x24f + 0)) & 1 != 0;
}
bool _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::get_bDebugDrawClustering() {
    return (*(uint8_t*)((uintptr_t)this + 0x242 + 0)) & 1 != 0;
}
bool _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::get_bShowRigidBodyId() {
    return (*(uint8_t*)((uintptr_t)this + 0x244 + 0)) & 1 != 0;
}
void _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::set_bShowVertexNormals(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x25e + 0);
    *(uint8_t*)((uintptr_t)this + 0x25e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::get_bShowTransformIndex() {
    return (*(uint8_t*)((uintptr_t)this + 0x24c + 0)) & 1 != 0;
}
bool _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::get_bShowBoundingBox() {
    return (*(uint8_t*)((uintptr_t)this + 0x253 + 0)) & 1 != 0;
}
void _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::set_bShowRigidBodyId(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x244 + 0);
    *(uint8_t*)((uintptr_t)this + 0x244 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::set_bShowConnectivityEdges(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x250 + 0);
    *(uint8_t*)((uintptr_t)this + 0x250 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::get_bShowRigidBodyCollision() {
    return (*(uint8_t*)((uintptr_t)this + 0x245 + 0)) & 1 != 0;
}
bool _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::get_bShowRigidBodyForce() {
    return (*(uint8_t*)((uintptr_t)this + 0x24a + 0)) & 1 != 0;
}
void _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::set_bShowRigidBodyCollision(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x245 + 0);
    *(uint8_t*)((uintptr_t)this + 0x245 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::get_bCollisionAtOrigin() {
    return (*(uint8_t*)((uintptr_t)this + 0x246 + 0)) & 1 != 0;
}
void _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::set_bTextShadow(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x268 + 0);
    *(uint8_t*)((uintptr_t)this + 0x268 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::set_bCollisionAtOrigin(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x246 + 0);
    *(uint8_t*)((uintptr_t)this + 0x246 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::set_bUseActiveVisualization(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x25f + 0);
    *(uint8_t*)((uintptr_t)this + 0x25f + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::get_bShowRigidBodyTransform() {
    return (*(uint8_t*)((uintptr_t)this + 0x247 + 0)) & 1 != 0;
}
void _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::set_bShowSingleFace(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x257 + 0);
    *(uint8_t*)((uintptr_t)this + 0x257 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::set_bShowRigidBodyTransform(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x247 + 0);
    *(uint8_t*)((uintptr_t)this + 0x247 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::get_LineThickness() {
    return *(float*)((uintptr_t)this + 0x264);
}
bool _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::get_bShowRigidBodyInertia() {
    return (*(uint8_t*)((uintptr_t)this + 0x248 + 0)) & 1 != 0;
}
void _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::set_bShowRigidBodyInertia(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x248 + 0);
    *(uint8_t*)((uintptr_t)this + 0x248 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::get_bShowRigidBodyVelocity() {
    return (*(uint8_t*)((uintptr_t)this + 0x249 + 0)) & 1 != 0;
}
void _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::set_bShowRigidBodyVelocity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x249 + 0);
    *(uint8_t*)((uintptr_t)this + 0x249 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::get_bShowGeometryTransform() {
    return (*(uint8_t*)((uintptr_t)this + 0x252 + 0)) & 1 != 0;
}
void _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::set_bShowRigidBodyForce(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x24a + 0);
    *(uint8_t*)((uintptr_t)this + 0x24a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::get_bShowRigidBodyInfos() {
    return (*(uint8_t*)((uintptr_t)this + 0x24b + 0)) & 1 != 0;
}
void _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::set_bShowTransformIndex(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x24c + 0);
    *(uint8_t*)((uintptr_t)this + 0x24c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::get_bShowTransform() {
    return (*(uint8_t*)((uintptr_t)this + 0x24d + 0)) & 1 != 0;
}
void _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::set_bShowTransform(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x24d + 0);
    *(uint8_t*)((uintptr_t)this + 0x24d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::set_bShowParent(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x24e + 0);
    *(uint8_t*)((uintptr_t)this + 0x24e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::set_bShowLevel(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x24f + 0);
    *(uint8_t*)((uintptr_t)this + 0x24f + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::get_bShowConnectivityEdges() {
    return (*(uint8_t*)((uintptr_t)this + 0x250 + 0)) & 1 != 0;
}
bool _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::get_bShowGeometryIndex() {
    return (*(uint8_t*)((uintptr_t)this + 0x251 + 0)) & 1 != 0;
}
void _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::set_bShowGeometryIndex(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x251 + 0);
    *(uint8_t*)((uintptr_t)this + 0x251 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::set_bShowGeometryTransform(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x252 + 0);
    *(uint8_t*)((uintptr_t)this + 0x252 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::set_bShowFaces(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x254 + 0);
    *(uint8_t*)((uintptr_t)this + 0x254 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::get_bShowFaceIndices() {
    return (*(uint8_t*)((uintptr_t)this + 0x255 + 0)) & 1 != 0;
}
void _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::set_bShowFaceIndices(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x255 + 0);
    *(uint8_t*)((uintptr_t)this + 0x255 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::get_bShowFaceNormals() {
    return (*(uint8_t*)((uintptr_t)this + 0x256 + 0)) & 1 != 0;
}
void _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::set_bShowFaceNormals(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x256 + 0);
    *(uint8_t*)((uintptr_t)this + 0x256 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::get_bShowSingleFace() {
    return (*(uint8_t*)((uintptr_t)this + 0x257 + 0)) & 1 != 0;
}
int32_t& _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::get_SingleFaceIndex() {
    return *(int32_t*)((uintptr_t)this + 0x258);
}
bool _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::get_bShowVertices() {
    return (*(uint8_t*)((uintptr_t)this + 0x25c + 0)) & 1 != 0;
}
void _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::set_bShowVertices(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x25c + 0);
    *(uint8_t*)((uintptr_t)this + 0x25c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::get_bShowVertexIndices() {
    return (*(uint8_t*)((uintptr_t)this + 0x25d + 0)) & 1 != 0;
}
void _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::set_bShowVertexIndices(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x25d + 0);
    *(uint8_t*)((uintptr_t)this + 0x25d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::get_bShowVertexNormals() {
    return (*(uint8_t*)((uintptr_t)this + 0x25e + 0)) & 1 != 0;
}
float& _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::get_PointThickness() {
    return *(float*)((uintptr_t)this + 0x260);
}
float& _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::get_TextScale() {
    return *(float*)((uintptr_t)this + 0x26c);
}
float& _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::get_NormalScale() {
    return *(float*)((uintptr_t)this + 0x270);
}
float& _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::get_AxisScale() {
    return *(float*)((uintptr_t)this + 0x274);
}
float& _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::get_ArrowScale() {
    return *(float*)((uintptr_t)this + 0x278);
}
void* _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::get_RigidBodyIdColor() {
    return (void*)((uintptr_t)this + 0x27c);
}
float& _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::get_RigidBodyTransformScale() {
    return *(float*)((uintptr_t)this + 0x280);
}
void* _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::get_RigidBodyCollisionColor() {
    return (void*)((uintptr_t)this + 0x284);
}
void* _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::get_RigidBodyInertiaColor() {
    return (void*)((uintptr_t)this + 0x288);
}
void* _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::get_RigidBodyVelocityColor() {
    return (void*)((uintptr_t)this + 0x28c);
}
void* _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::get_RigidBodyForceColor() {
    return (void*)((uintptr_t)this + 0x290);
}
void* _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::get_RigidBodyInfoColor() {
    return (void*)((uintptr_t)this + 0x294);
}
void* _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::get_TransformIndexColor() {
    return (void*)((uintptr_t)this + 0x298);
}
float& _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::get_TransformScale() {
    return *(float*)((uintptr_t)this + 0x29c);
}
void* _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::get_LevelColor() {
    return (void*)((uintptr_t)this + 0x2a0);
}
void* _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::get_ParentColor() {
    return (void*)((uintptr_t)this + 0x2a4);
}
float& _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::get_ConnectivityEdgeThickness() {
    return *(float*)((uintptr_t)this + 0x2a8);
}
void* _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::get_GeometryIndexColor() {
    return (void*)((uintptr_t)this + 0x2ac);
}
float& _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::get_GeometryTransformScale() {
    return *(float*)((uintptr_t)this + 0x2b0);
}
void* _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::get_BoundingBoxColor() {
    return (void*)((uintptr_t)this + 0x2b4);
}
void* _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::get_FaceColor() {
    return (void*)((uintptr_t)this + 0x2b8);
}
void* _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::get_FaceIndexColor() {
    return (void*)((uintptr_t)this + 0x2bc);
}
void* _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::get_FaceNormalColor() {
    return (void*)((uintptr_t)this + 0x2c0);
}
void* _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::get_SingleFaceColor() {
    return (void*)((uintptr_t)this + 0x2c4);
}
void* _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::get_VertexColor() {
    return (void*)((uintptr_t)this + 0x2c8);
}
void* _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::get_VertexIndexColor() {
    return (void*)((uintptr_t)this + 0x2cc);
}
void* _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::get_VertexNormalColor() {
    return (void*)((uintptr_t)this + 0x2d0);
}
_Script_Engine::BillboardComponent*& _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::get_SpriteComponent() {
    return *(_Script_Engine::BillboardComponent**)((uintptr_t)this + 0x2d8);
}
_Script_CoreUObject::Class* _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/GeometryCollectionEngine.GeometryCollectionDebugDrawActor");
    return result;
}
