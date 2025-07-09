#include "..\FUObjectArray.hpp"
#include "AudioAnalyzerAsset.hpp"
#include "AudioAnalyzerNRTSettings.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_AudioAnalyzer::AudioAnalyzerNRTSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AudioAnalyzer.AudioAnalyzerNRTSettings");
    return result;
}
