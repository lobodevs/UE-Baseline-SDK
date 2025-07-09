#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_Engine {
struct Texture2D;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Transform;
}
namespace _Script_VariantManagerContent {
struct LevelVariantSets;
}
namespace _Script_VariantManagerContent {
struct Variant;
}
namespace _Script_VariantManagerContent {
#pragma pack(push, 1)
struct VariantSet : public _Script_CoreUObject::Object {
    private: char pad_28[0x50]; public:
    void* get_DisplayText();
    bool get_bExpanded();
    void set_bExpanded(bool value);
    void* get_Variants();
    _Script_Engine::Texture2D*& get_Thumbnail();
    static _Script_CoreUObject::Class* static_class();
    void SetThumbnailFromTexture(_Script_Engine::Texture2D* NewThumbnail);
    void SetThumbnailFromFile(void* FilePath);
    void SetThumbnailFromEditorViewport();
    void SetThumbnailFromCamera(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Transform& CameraTransform, float FOVDegrees, float MinZ, float Gamma);
    void SetDisplayText(void*& NewDisplayText);
    _Script_VariantManagerContent::Variant* GetVariantByName(void* VariantName);
    _Script_VariantManagerContent::Variant* GetVariant(int32_t VariantIndex);
    _Script_Engine::Texture2D* GetThumbnail();
    _Script_VariantManagerContent::LevelVariantSets* GetParent();
    int32_t GetNumVariants();
    void* GetDisplayText();
}; // Size: 0x78
#pragma pack(pop)
}
