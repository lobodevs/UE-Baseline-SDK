#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_Engine {
struct Texture2D;
}
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_Engine {
struct BodySetup;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Paper2D {
#pragma pack(push, 1)
struct PaperSprite : public _Script_CoreUObject::Object {
    private: char pad_28[0x80]; public:
    void* get_AdditionalSourceTextures();
    void* get_BakedSourceUV();
    void* get_BakedSourceDimension();
    _Script_Engine::Texture2D*& get_BakedSourceTexture();
    _Script_Engine::MaterialInterface*& get_DefaultMaterial();
    _Script_Engine::MaterialInterface*& get_AlternateMaterial();
    void* get_Sockets();
    void* get_SpriteCollisionDomain();
    float& get_PixelsPerUnrealUnit();
    _Script_Engine::BodySetup*& get_BodySetup();
    int32_t& get_AlternateMaterialSplitIndex();
    void* get_BakedRenderData();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa8
#pragma pack(pop)
}
