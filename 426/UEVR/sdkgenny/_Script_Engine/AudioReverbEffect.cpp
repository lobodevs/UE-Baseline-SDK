#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AudioEffectParameters.hpp"
#include "AudioReverbEffect.hpp"
_Script_CoreUObject::Class* _Script_Engine::AudioReverbEffect::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.AudioReverbEffect");
    return result;
}
