#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "FrameMetrics.hpp"
#include "MovieSceneImageCaptureProtocolBase.hpp"
namespace _Script_Engine {
struct World;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneCapture {
struct CapturedPixelsID;
}
namespace _Script_Engine {
struct Texture;
}
namespace _Script_MovieSceneCapture {
struct CapturedPixels;
}
namespace _Script_MovieSceneCapture {
#pragma pack(push, 1)
struct UserDefinedCaptureProtocol : public MovieSceneImageCaptureProtocolBase {
    private: char pad_58[0x80]; public:
    _Script_Engine::World*& get_World();
    static _Script_CoreUObject::Class* static_class();
    void StopCapturingFinalPixels();
    void StartCapturingFinalPixels(_Script_MovieSceneCapture::CapturedPixelsID& StreamID);
    void ResolveBuffer(_Script_Engine::Texture* Buffer, _Script_MovieSceneCapture::CapturedPixelsID& BufferID);
    void OnWarmUp();
    void OnTick();
    void OnStartCapture();
    bool OnSetup();
    void OnPreTick();
    void OnPixelsReceived(_Script_MovieSceneCapture::CapturedPixels& Pixels, _Script_MovieSceneCapture::CapturedPixelsID& ID, _Script_MovieSceneCapture::FrameMetrics FrameMetrics);
    void OnPauseCapture();
    void OnFinalize();
    void OnCaptureFrame();
    bool OnCanFinalize();
    void OnBeginFinalize();
    _Script_MovieSceneCapture::FrameMetrics GetCurrentFrameMetrics();
    void* GenerateFilename(_Script_MovieSceneCapture::FrameMetrics& InFrameMetrics);
}; // Size: 0xd8
#pragma pack(pop)
}
