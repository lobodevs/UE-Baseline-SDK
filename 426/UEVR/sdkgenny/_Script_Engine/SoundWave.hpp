#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SoundBase.hpp"
namespace _Script_Engine {
struct CurveTable;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SoundWave : public SoundBase {
    private: char pad_1b8[0x1b8]; public:
    int32_t& get_CompressionQuality();
    int32_t& get_StreamingPriority();
    void* get_SampleRateQuality();
    void* get_SoundGroup();
    bool get_bLooping();
    void set_bLooping(bool value);
    bool get_bStreaming();
    void set_bStreaming(bool value);
    bool get_bSeekableStreaming();
    void set_bSeekableStreaming(bool value);
    void* get_LoadingBehavior();
    bool get_bMature();
    void set_bMature(bool value);
    bool get_bManualWordWrap();
    void set_bManualWordWrap(bool value);
    bool get_bSingleLine();
    void set_bSingleLine(bool value);
    bool get_bIsAmbisonics();
    void set_bIsAmbisonics(bool value);
    void* get_FrequenciesToAnalyze();
    void* get_CookedSpectralTimeData();
    void* get_CookedEnvelopeTimeData();
    int32_t& get_InitialChunkSize();
    void* get_SpokenText();
    float& get_SubtitlePriority();
    float& get_Volume();
    float& get_Pitch();
    int32_t& get_NumChannels();
    int32_t& get_SampleRate();
    void* get_Subtitles();
    _Script_Engine::CurveTable*& get_Curves();
    _Script_Engine::CurveTable*& get_InternalCurves();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x370
#pragma pack(pop)
}
