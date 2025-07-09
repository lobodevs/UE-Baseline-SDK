#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_Engine\MeshComponent.hpp"
namespace _Script_Paper2D {
struct PaperFlipbook;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_Engine {
struct BodySetup;
}
namespace _Script_Paper2D {
#pragma pack(push, 1)
struct PaperFlipbookComponent : public _Script_Engine::MeshComponent {
    private: char pad_470[0x40]; public:
    _Script_Paper2D::PaperFlipbook*& get_SourceFlipbook();
    _Script_Engine::MaterialInterface*& get_Material();
    float& get_PlayRate();
    bool get_bLooping();
    void set_bLooping(bool value);
    bool get_bReversePlayback();
    void set_bReversePlayback(bool value);
    bool get_bPlaying();
    void set_bPlaying(bool value);
    float& get_AccumulatedTime();
    int32_t& get_CachedFrameIndex();
    void* get_SpriteColor();
    _Script_Engine::BodySetup*& get_CachedBodySetup();
    void* get_OnFinishedPlaying();
    static _Script_CoreUObject::Class* static_class();
    void Stop();
    void SetSpriteColor(_Script_CoreUObject::LinearColor NewColor);
    void SetPlayRate(float NewRate);
    void SetPlaybackPositionInFrames(int32_t NewFramePosition, bool bFireEvents);
    void SetPlaybackPosition(float NewPosition, bool bFireEvents);
    void SetNewTime(float NewTime);
    void SetLooping(bool bNewLooping);
    bool SetFlipbook(_Script_Paper2D::PaperFlipbook* NewFlipbook);
    void ReverseFromEnd();
    void Reverse();
    void PlayFromStart();
    void Play();
    void OnRep_SourceFlipbook(_Script_Paper2D::PaperFlipbook* OldFlipbook);
    bool IsReversing();
    bool IsPlaying();
    bool IsLooping();
    _Script_CoreUObject::LinearColor GetSpriteColor();
    float GetPlayRate();
    int32_t GetPlaybackPositionInFrames();
    float GetPlaybackPosition();
    int32_t GetFlipbookLengthInFrames();
    float GetFlipbookLength();
    float GetFlipbookFramerate();
    _Script_Paper2D::PaperFlipbook* GetFlipbook();
}; // Size: 0x4b0
#pragma pack(pop)
}
