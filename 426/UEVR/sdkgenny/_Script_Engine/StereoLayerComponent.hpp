#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Box2D.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "EquirectProps.hpp"
#include "SceneComponent.hpp"
namespace _Script_Engine {
struct Texture;
}
namespace _Script_Engine {
struct StereoLayerShape;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct StereoLayerComponent : public SceneComponent {
    private: char pad_200[0xe0]; public:
    bool get_bLiveTexture();
    void set_bLiveTexture(bool value);
    bool get_bSupportsDepth();
    void set_bSupportsDepth(bool value);
    bool get_bNoAlphaChannel();
    void set_bNoAlphaChannel(bool value);
    _Script_Engine::Texture*& get_Texture();
    _Script_Engine::Texture*& get_LeftTexture();
    bool get_bQuadPreserveTextureRatio();
    void set_bQuadPreserveTextureRatio(bool value);
    void* get_QuadSize();
    void* get_UVRect();
    float& get_CylinderRadius();
    float& get_CylinderOverlayArc();
    int32_t& get_CylinderHeight();
    void* get_EquirectProps();
    void* get_StereoLayerType();
    void* get_StereoLayerShape();
    _Script_Engine::StereoLayerShape*& get_Shape();
    int32_t& get_Priority();
    static _Script_CoreUObject::Class* static_class();
    void SetUVRect(_Script_CoreUObject::Box2D InUVRect);
    void SetTexture(_Script_Engine::Texture* InTexture);
    void SetQuadSize(_Script_CoreUObject::Vector2D InQuadSize);
    void SetPriority(int32_t InPriority);
    void SetLeftTexture(_Script_Engine::Texture* InTexture);
    void SetEquirectProps(_Script_Engine::EquirectProps InScaleBiases);
    void MarkTextureForUpdate();
    _Script_CoreUObject::Box2D GetUVRect();
    _Script_Engine::Texture* GetTexture();
    _Script_CoreUObject::Vector2D GetQuadSize();
    int32_t GetPriority();
    _Script_Engine::Texture* GetLeftTexture();
}; // Size: 0x2e0
#pragma pack(pop)
}
