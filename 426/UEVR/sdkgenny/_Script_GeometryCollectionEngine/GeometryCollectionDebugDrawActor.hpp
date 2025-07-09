#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct BillboardComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_GeometryCollectionEngine {
#pragma pack(push, 1)
struct GeometryCollectionDebugDrawActor : public _Script_Engine::Actor {
    private: char pad_220[0xe8]; public:
    void* get_WarningMessage();
    void* get_SelectedRigidBody();
    bool get_bDebugDrawWholeCollection();
    void set_bDebugDrawWholeCollection(bool value);
    bool get_bDebugDrawHierarchy();
    void set_bDebugDrawHierarchy(bool value);
    bool get_bDebugDrawClustering();
    void set_bDebugDrawClustering(bool value);
    void* get_HideGeometry();
    bool get_bShowRigidBodyId();
    void set_bShowRigidBodyId(bool value);
    bool get_bShowRigidBodyCollision();
    void set_bShowRigidBodyCollision(bool value);
    bool get_bCollisionAtOrigin();
    void set_bCollisionAtOrigin(bool value);
    bool get_bShowRigidBodyTransform();
    void set_bShowRigidBodyTransform(bool value);
    bool get_bShowRigidBodyInertia();
    void set_bShowRigidBodyInertia(bool value);
    bool get_bShowRigidBodyVelocity();
    void set_bShowRigidBodyVelocity(bool value);
    bool get_bShowRigidBodyForce();
    void set_bShowRigidBodyForce(bool value);
    bool get_bShowRigidBodyInfos();
    void set_bShowRigidBodyInfos(bool value);
    bool get_bShowTransformIndex();
    void set_bShowTransformIndex(bool value);
    bool get_bShowTransform();
    void set_bShowTransform(bool value);
    bool get_bShowParent();
    void set_bShowParent(bool value);
    bool get_bShowLevel();
    void set_bShowLevel(bool value);
    bool get_bShowConnectivityEdges();
    void set_bShowConnectivityEdges(bool value);
    bool get_bShowGeometryIndex();
    void set_bShowGeometryIndex(bool value);
    bool get_bShowGeometryTransform();
    void set_bShowGeometryTransform(bool value);
    bool get_bShowBoundingBox();
    void set_bShowBoundingBox(bool value);
    bool get_bShowFaces();
    void set_bShowFaces(bool value);
    bool get_bShowFaceIndices();
    void set_bShowFaceIndices(bool value);
    bool get_bShowFaceNormals();
    void set_bShowFaceNormals(bool value);
    bool get_bShowSingleFace();
    void set_bShowSingleFace(bool value);
    int32_t& get_SingleFaceIndex();
    bool get_bShowVertices();
    void set_bShowVertices(bool value);
    bool get_bShowVertexIndices();
    void set_bShowVertexIndices(bool value);
    bool get_bShowVertexNormals();
    void set_bShowVertexNormals(bool value);
    bool get_bUseActiveVisualization();
    void set_bUseActiveVisualization(bool value);
    float& get_PointThickness();
    float& get_LineThickness();
    bool get_bTextShadow();
    void set_bTextShadow(bool value);
    float& get_TextScale();
    float& get_NormalScale();
    float& get_AxisScale();
    float& get_ArrowScale();
    void* get_RigidBodyIdColor();
    float& get_RigidBodyTransformScale();
    void* get_RigidBodyCollisionColor();
    void* get_RigidBodyInertiaColor();
    void* get_RigidBodyVelocityColor();
    void* get_RigidBodyForceColor();
    void* get_RigidBodyInfoColor();
    void* get_TransformIndexColor();
    float& get_TransformScale();
    void* get_LevelColor();
    void* get_ParentColor();
    float& get_ConnectivityEdgeThickness();
    void* get_GeometryIndexColor();
    float& get_GeometryTransformScale();
    void* get_BoundingBoxColor();
    void* get_FaceColor();
    void* get_FaceIndexColor();
    void* get_FaceNormalColor();
    void* get_SingleFaceColor();
    void* get_VertexColor();
    void* get_VertexIndexColor();
    void* get_VertexNormalColor();
    _Script_Engine::BillboardComponent*& get_SpriteComponent();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x308
#pragma pack(pop)
}
