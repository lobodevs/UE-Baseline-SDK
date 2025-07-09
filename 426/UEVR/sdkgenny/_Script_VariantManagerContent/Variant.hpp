#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
#include "VariantDependency.hpp"
namespace _Script_Engine {
struct Texture2D;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_VariantManagerContent {
struct VariantSet;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_CoreUObject {
struct Transform;
}
namespace _Script_VariantManagerContent {
struct LevelVariantSets;
}
namespace _Script_VariantManagerContent {
#pragma pack(push, 1)
struct Variant : public _Script_CoreUObject::Object {
    private: char pad_28[0x58]; public:
    void* get_Dependencies();
    void* get_DisplayText();
    void* get_ObjectBindings();
    _Script_Engine::Texture2D*& get_Thumbnail();
    static _Script_CoreUObject::Class* static_class();
    void SwitchOn();
    void SetThumbnailFromTexture(_Script_Engine::Texture2D* NewThumbnail);
    void SetThumbnailFromFile(void* FilePath);
    void SetThumbnailFromEditorViewport();
    void SetThumbnailFromCamera(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Transform& CameraTransform, float FOVDegrees, float MinZ, float Gamma);
    void SetDisplayText(void*& NewDisplayText);
    void SetDependency(int32_t Index, _Script_VariantManagerContent::VariantDependency& Dependency);
    bool IsActive();
    _Script_Engine::Texture2D* GetThumbnail();
    _Script_VariantManagerContent::VariantSet* GetParent();
    int32_t GetNumDependencies();
    int32_t GetNumActors();
    void* GetDisplayText();
    void* GetDependents(_Script_VariantManagerContent::LevelVariantSets* LevelVariantSets, bool bOnlyEnabledDependencies);
    _Script_VariantManagerContent::VariantDependency GetDependency(int32_t Index);
    _Script_Engine::Actor* GetActor(int32_t ActorIndex);
    void DeleteDependency(int32_t Index);
    int32_t AddDependency(_Script_VariantManagerContent::VariantDependency& Dependency);
}; // Size: 0x80
#pragma pack(pop)
}
