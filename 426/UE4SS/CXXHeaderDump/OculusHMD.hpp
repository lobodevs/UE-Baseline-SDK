#ifndef UE4SS_SDK_OculusHMD_HPP
#define UE4SS_SDK_OculusHMD_HPP

#include "OculusHMD_enums.hpp"

struct FGuardianTestResult
{
    bool IsTriggering;                                                                // 0x0000 (size: 0x1)
    ETrackedDeviceType DeviceType;                                                    // 0x0001 (size: 0x1)
    float ClosestDistance;                                                            // 0x0004 (size: 0x4)
    FVector ClosestPoint;                                                             // 0x0008 (size: 0xC)
    FVector ClosestPointNormal;                                                       // 0x0014 (size: 0xC)

}; // Size: 0x20

struct FHmdUserProfile
{
    FString Name;                                                                     // 0x0000 (size: 0x10)
    FString Gender;                                                                   // 0x0010 (size: 0x10)
    float PlayerHeight;                                                               // 0x0020 (size: 0x4)
    float EyeHeight;                                                                  // 0x0024 (size: 0x4)
    float IPD;                                                                        // 0x0028 (size: 0x4)
    FVector2D NeckToEyeDistance;                                                      // 0x002C (size: 0x8)
    TArray<FHmdUserProfileField> ExtraFields;                                         // 0x0038 (size: 0x10)

}; // Size: 0x48

struct FHmdUserProfileField
{
    FString FieldName;                                                                // 0x0000 (size: 0x10)
    FString FieldValue;                                                               // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FOculusSplashDesc
{
    FSoftObjectPath TexturePath;                                                      // 0x0000 (size: 0x18)
    FTransform TransformInMeters;                                                     // 0x0020 (size: 0x30)
    FVector2D QuadSizeInMeters;                                                       // 0x0050 (size: 0x8)
    FQuat DeltaRotation;                                                              // 0x0060 (size: 0x10)
    FVector2D TextureOffset;                                                          // 0x0070 (size: 0x8)
    FVector2D TextureScale;                                                           // 0x0078 (size: 0x8)
    bool bNoAlphaChannel;                                                             // 0x0080 (size: 0x1)

}; // Size: 0xA0

class UOculusFunctionLibrary : public UBlueprintFunctionLibrary
{

    void SetReorientHMDOnControllerRecenter(bool recenterMode);
    void SetPositionScale3D(FVector PosScale3D);
    void SetGuardianVisibility(bool GuardianVisible);
    void SetFixedFoveatedRenderingLevel(EFixedFoveatedRenderingLevel Level, bool isDynamic);
    void SetDisplayFrequency(float RequestedFrequency);
    void SetCPUAndGPULevels(int32 CPULevel, int32 GPULevel);
    void SetColorScaleAndOffset(FLinearColor ColorScale, FLinearColor ColorOffset, bool bApplyToAllLayers);
    void SetClientColorDesc(EColorSpace ColorSpace);
    void SetBaseRotationAndPositionOffset(FRotator BaseRot, FVector PosOffset, TEnumAsByte<EOrientPositionSelector::Type> Options);
    void SetBaseRotationAndBaseOffsetInMeters(FRotator Rotation, FVector BaseOffsetInMeters, TEnumAsByte<EOrientPositionSelector::Type> Options);
    bool IsGuardianDisplayed();
    bool IsGuardianConfigured();
    bool IsDeviceTracked(ETrackedDeviceType DeviceType);
    bool HasSystemOverlayPresent();
    bool HasInputFocus();
    bool GetUserProfile(FHmdUserProfile& Profile);
    bool GetSystemHmd3DofModeEnabled();
    void GetRawSensorData(FVector& AngularAcceleration, FVector& LinearAcceleration, FVector& AngularVelocity, FVector& LinearVelocity, float& TimeInSeconds, ETrackedDeviceType DeviceType);
    void GetPose(FRotator& DeviceRotation, FVector& DevicePosition, FVector& NeckPosition, bool bUseOrienationForPlayerCamera, bool bUsePositionForPlayerCamera, const FVector PositionScale);
    FGuardianTestResult GetPointGuardianIntersection(const FVector Point, EBoundaryType BoundaryType);
    FTransform GetPlayAreaTransform();
    FGuardianTestResult GetNodeGuardianIntersection(ETrackedDeviceType DeviceType, EBoundaryType BoundaryType);
    EColorSpace GetHmdColorDesc();
    TArray<FVector> GetGuardianPoints(EBoundaryType BoundaryType, bool UsePawnSpace);
    FVector GetGuardianDimensions(EBoundaryType BoundaryType);
    void GetGPUUtilization(bool& IsGPUAvailable, float& GPUUtilization);
    float GetGPUFrameTime();
    EFixedFoveatedRenderingLevel GetFixedFoveatedRenderingLevel();
    EOculusDeviceType GetDeviceType();
    FString GetDeviceName();
    float GetCurrentDisplayFrequency();
    void GetBaseRotationAndPositionOffset(FRotator& OutRot, FVector& OutPosOffset);
    void GetBaseRotationAndBaseOffsetInMeters(FRotator& OutRotation, FVector& OutBaseOffsetInMeters);
    TArray<float> GetAvailableDisplayFrequencies();
    void EnablePositionTracking(bool bPositionTracking);
    void EnableOrientationTracking(bool bOrientationTracking);
    void ClearLoadingSplashScreens();
    void AddLoadingSplashScreen(class UTexture2D* Texture, FVector TranslationInMeters, FRotator Rotation, FVector2D SizeInMeters, FRotator DeltaRotation, bool bClearBeforeAdd);
}; // Size: 0x28

class UOculusHMDRuntimeSettings : public UObject
{
    bool bAutoEnabled;                                                                // 0x0028 (size: 0x1)
    TArray<FOculusSplashDesc> SplashDescs;                                            // 0x0030 (size: 0x10)
    bool bEnableSpecificColorGamut;                                                   // 0x0040 (size: 0x1)
    EColorSpace ColorSpace;                                                           // 0x0041 (size: 0x1)
    bool bSupportsDash;                                                               // 0x0042 (size: 0x1)
    bool bCompositesDepth;                                                            // 0x0043 (size: 0x1)
    bool bHQDistortion;                                                               // 0x0044 (size: 0x1)
    float PixelDensityMin;                                                            // 0x0048 (size: 0x4)
    float PixelDensityMax;                                                            // 0x004C (size: 0x4)
    int32 CPULevel;                                                                   // 0x0050 (size: 0x4)
    int32 GPULevel;                                                                   // 0x0054 (size: 0x4)
    EFixedFoveatedRenderingLevel FFRLevel;                                            // 0x0058 (size: 0x1)
    bool FFRDynamic;                                                                  // 0x0059 (size: 0x1)
    bool bChromaCorrection;                                                           // 0x005A (size: 0x1)
    bool bRecenterHMDWithController;                                                  // 0x005B (size: 0x1)
    bool bFocusAware;                                                                 // 0x005C (size: 0x1)
    bool bRequiresSystemKeyboard;                                                     // 0x005D (size: 0x1)
    EHandTrackingSupport HandTrackingSupport;                                         // 0x005E (size: 0x1)

}; // Size: 0x60

class UOculusResourceHolder : public UObject
{
    class UMaterial* PokeAHoleMaterial;                                               // 0x0028 (size: 0x8)

}; // Size: 0x30

class UOculusSceneCaptureCubemap : public UObject
{
    TArray<class USceneCaptureComponent2D*> CaptureComponents;                        // 0x0038 (size: 0x10)

}; // Size: 0x90

#endif
