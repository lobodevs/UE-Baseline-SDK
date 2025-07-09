#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_Engine {
struct Level;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct LevelScriptActor;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct LevelStreaming : public _Script_CoreUObject::Object {
    private: char pad_28[0x128]; public:
    void* get_WorldAsset();
    void* get_PackageNameToLoad();
    void* get_LODPackageNames();
    void* get_LevelTransform();
    int32_t& get_LevelLODIndex();
    int32_t& get_StreamingPriority();
    bool get_bShouldBeVisible();
    void set_bShouldBeVisible(bool value);
    bool get_bShouldBeLoaded();
    void set_bShouldBeLoaded(bool value);
    bool get_bLocked();
    void set_bLocked(bool value);
    bool get_bIsStatic();
    void set_bIsStatic(bool value);
    bool get_bShouldBlockOnLoad();
    void set_bShouldBlockOnLoad(bool value);
    bool get_bShouldBlockOnUnload();
    void set_bShouldBlockOnUnload(bool value);
    bool get_bDisableDistanceStreaming();
    void set_bDisableDistanceStreaming(bool value);
    bool get_bDrawOnLevelStatusMap();
    void set_bDrawOnLevelStatusMap(bool value);
    void* get_LevelColor();
    void* get_EditorStreamingVolumes();
    float& get_MinTimeBetweenVolumeUnloadRequests();
    void* get_OnLevelLoaded();
    void* get_OnLevelUnloaded();
    void* get_OnLevelShown();
    void* get_OnLevelHidden();
    _Script_Engine::Level*& get_LoadedLevel();
    _Script_Engine::Level*& get_PendingUnloadLevel();
    static _Script_CoreUObject::Class* static_class();
    bool ShouldBeLoaded();
    void SetShouldBeVisible(bool bInShouldBeVisible);
    void SetShouldBeLoaded(bool bInShouldBeLoaded);
    void SetPriority(int32_t NewPriority);
    void SetLevelLODIndex(int32_t LODIndex);
    void SetIsRequestingUnloadAndRemoval(bool bInIsRequestingUnloadAndRemoval);
    bool IsStreamingStatePending();
    bool IsLevelVisible();
    bool IsLevelLoaded();
    void* GetWorldAssetPackageFName();
    _Script_Engine::Level* GetLoadedLevel();
    _Script_Engine::LevelScriptActor* GetLevelScriptActor();
    bool GetIsRequestingUnloadAndRemoval();
    _Script_Engine::LevelStreaming* CreateInstance(void* UniqueInstanceName);
}; // Size: 0x150
#pragma pack(pop)
}
