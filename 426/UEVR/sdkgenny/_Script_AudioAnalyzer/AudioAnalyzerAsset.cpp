#include "..\FUObjectArray.hpp"
#include "AudioAnalyzerAsset.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
_Script_CoreUObject::Class* _Script_AudioAnalyzer::AudioAnalyzerAsset::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AudioAnalyzer.AudioAnalyzerAsset");
    return result;
}
