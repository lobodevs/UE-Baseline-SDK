#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Paper2D {
struct PaperSprite;
}
namespace _Script_Paper2D {
#pragma pack(push, 1)
struct PaperFlipbook : public _Script_CoreUObject::Object {
    private: char pad_28[0x28]; public:
    float& get_FramesPerSecond();
    void* get_KeyFrames();
    _Script_Engine::MaterialInterface*& get_DefaultMaterial();
    void* get_CollisionSource();
    static _Script_CoreUObject::Class* static_class();
    bool IsValidKeyFrameIndex(int32_t Index);
    float GetTotalDuration();
    _Script_Paper2D::PaperSprite* GetSpriteAtTime(float Time, bool bClampToEnds);
    _Script_Paper2D::PaperSprite* GetSpriteAtFrame(int32_t FrameIndex);
    int32_t GetNumKeyFrames();
    int32_t GetNumFrames();
    int32_t GetKeyFrameIndexAtTime(float Time, bool bClampToEnds);
}; // Size: 0x50
#pragma pack(pop)
}
