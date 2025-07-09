#ifndef UE4SS_SDK_OculusMR_HPP
#define UE4SS_SDK_OculusMR_HPP

#include "OculusMR_enums.hpp"

struct FOculusMR_PlaneMeshTriangle
{
    FVector Vertex0;                                                                  // 0x0000 (size: 0xC)
    FVector2D UV0;                                                                    // 0x000C (size: 0x8)
    FVector Vertex1;                                                                  // 0x0014 (size: 0xC)
    FVector2D UV1;                                                                    // 0x0020 (size: 0x8)
    FVector Vertex2;                                                                  // 0x0028 (size: 0xC)
    FVector2D UV2;                                                                    // 0x0034 (size: 0x8)

}; // Size: 0x3C

struct FTrackedCamera
{
    int32 Index;                                                                      // 0x0000 (size: 0x4)
    FString Name;                                                                     // 0x0008 (size: 0x10)
    double UpdateTime;                                                                // 0x0018 (size: 0x8)
    float FieldOfView;                                                                // 0x0020 (size: 0x4)
    int32 SizeX;                                                                      // 0x0024 (size: 0x4)
    int32 SizeY;                                                                      // 0x0028 (size: 0x4)
    ETrackedDeviceType AttachedTrackedDevice;                                         // 0x002C (size: 0x1)
    FRotator CalibratedRotation;                                                      // 0x0030 (size: 0xC)
    FVector CalibratedOffset;                                                         // 0x003C (size: 0xC)
    FRotator UserRotation;                                                            // 0x0048 (size: 0xC)
    FVector UserOffset;                                                               // 0x0054 (size: 0xC)
    FRotator RawRotation;                                                             // 0x0060 (size: 0xC)
    FVector RawOffset;                                                                // 0x006C (size: 0xC)

}; // Size: 0x78

class AOculusMR_CastingCameraActor : public ASceneCapture2D
{
    class UVRNotificationsComponent* VRNotificationComponent;                         // 0x0238 (size: 0x8)
    class UTexture2D* CameraColorTexture;                                             // 0x0240 (size: 0x8)
    class UTexture2D* CameraDepthTexture;                                             // 0x0248 (size: 0x8)
    class UOculusMR_PlaneMeshComponent* PlaneMeshComponent;                           // 0x0250 (size: 0x8)
    class UMaterial* ChromaKeyMaterial;                                               // 0x0258 (size: 0x8)
    class UMaterial* OpaqueColoredMaterial;                                           // 0x0260 (size: 0x8)
    class UMaterialInstanceDynamic* ChromaKeyMaterialInstance;                        // 0x0268 (size: 0x8)
    class UMaterialInstanceDynamic* CameraFrameMaterialInstance;                      // 0x0270 (size: 0x8)
    class UMaterialInstanceDynamic* BackdropMaterialInstance;                         // 0x0278 (size: 0x8)
    class UTexture2D* DefaultTexture_White;                                           // 0x0280 (size: 0x8)
    TArray<class UTextureRenderTarget2D*> BackgroundRenderTargets;                    // 0x02D8 (size: 0x10)
    class ASceneCapture2D* ForegroundCaptureActor;                                    // 0x02E8 (size: 0x8)
    TArray<class UTextureRenderTarget2D*> ForegroundRenderTargets;                    // 0x02F0 (size: 0x10)
    TArray<double> PoseTimes;                                                         // 0x0300 (size: 0x10)
    class UOculusMR_Settings* MRSettings;                                             // 0x0310 (size: 0x8)
    class UOculusMR_State* MRState;                                                   // 0x0318 (size: 0x8)

}; // Size: 0x320

class UOculusMRFunctionLibrary : public UBlueprintFunctionLibrary
{

    bool SetTrackingReferenceComponent(class USceneComponent* Component);
    bool SetMrcScalingFactor(float ScalingFactor);
    bool IsMrcEnabled();
    bool IsMrcActive();
    class USceneComponent* GetTrackingReferenceComponent();
    class UOculusMR_Settings* GetOculusMRSettings();
    float GetMrcScalingFactor();
}; // Size: 0x28

class UOculusMR_PlaneMeshComponent : public UMeshComponent
{

    bool SetCustomMeshTriangles(const TArray<FOculusMR_PlaneMeshTriangle>& Triangles);
    void ClearCustomMeshTriangles();
    void AddCustomMeshTriangles(const TArray<FOculusMR_PlaneMeshTriangle>& Triangles);
}; // Size: 0x480

class UOculusMR_Settings : public UObject
{
    EOculusMR_ClippingReference ClippingReference;                                    // 0x0028 (size: 0x1)
    bool bUseTrackedCameraResolution;                                                 // 0x0029 (size: 0x1)
    int32 WidthPerView;                                                               // 0x002C (size: 0x4)
    int32 HeightPerView;                                                              // 0x0030 (size: 0x4)
    float CastingLatency;                                                             // 0x0034 (size: 0x4)
    FColor BackdropColor;                                                             // 0x0038 (size: 0x4)
    float HandPoseStateLatency;                                                       // 0x003C (size: 0x4)
    FColor ChromaKeyColor;                                                            // 0x0040 (size: 0x4)
    float ChromaKeySimilarity;                                                        // 0x0044 (size: 0x4)
    float ChromaKeySmoothRange;                                                       // 0x0048 (size: 0x4)
    float ChromaKeySpillRange;                                                        // 0x004C (size: 0x4)
    EOculusMR_PostProcessEffects ExternalCompositionPostProcessEffects;               // 0x0050 (size: 0x1)
    bool bIsCasting;                                                                  // 0x0051 (size: 0x1)
    EOculusMR_CompositionMethod CompositionMethod;                                    // 0x0052 (size: 0x1)
    EOculusMR_CameraDeviceEnum CapturingCamera;                                       // 0x0053 (size: 0x1)

    void SetIsCasting(bool Val);
    void SetCompositionMethod(EOculusMR_CompositionMethod Val);
    void SetCapturingCamera(EOculusMR_CameraDeviceEnum Val);
    void SaveToIni();
    void LoadFromIni();
    bool GetIsCasting();
    EOculusMR_CompositionMethod GetCompositionMethod();
    EOculusMR_CameraDeviceEnum GetCapturingCamera();
    int32 GetBindToTrackedCameraIndex();
    void BindToTrackedCameraIndexIfAvailable(int32 InTrackedCameraIndex);
}; // Size: 0x98

class UOculusMR_State : public UObject
{
    FTrackedCamera TrackedCamera;                                                     // 0x0028 (size: 0x78)
    class USceneComponent* TrackingReferenceComponent;                                // 0x00A0 (size: 0x8)
    double ScalingFactor;                                                             // 0x00A8 (size: 0x8)
    bool ChangeCameraStateRequested;                                                  // 0x00B4 (size: 0x1)
    bool BindToTrackedCameraIndexRequested;                                           // 0x00B5 (size: 0x1)

}; // Size: 0xB8

#endif
