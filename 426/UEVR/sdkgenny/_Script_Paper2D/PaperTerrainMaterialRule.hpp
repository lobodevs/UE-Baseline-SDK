#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Paper2D {
struct PaperSprite;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Paper2D {
#pragma pack(push, 1)
struct PaperTerrainMaterialRule {
    private: char pad_0[0x38]; public:
    _Script_Paper2D::PaperSprite*& get_StartCap();
    void* get_Body();
    _Script_Paper2D::PaperSprite*& get_EndCap();
    float& get_MinimumAngle();
    float& get_MaximumAngle();
    bool get_bEnableCollision();
    void set_bEnableCollision(bool value);
    float& get_CollisionOffset();
    int32_t& get_DrawOrder();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
