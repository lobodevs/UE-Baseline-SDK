#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AudioEffectParameters.hpp"
_Script_CoreUObject::Class* _Script_Engine::AudioEffectParameters::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.AudioEffectParameters");
    return result;
}
