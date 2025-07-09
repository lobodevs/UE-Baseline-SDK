#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InputActionSpeechMapping.hpp"
void* _Script_Engine::InputActionSpeechMapping::get_SpeechKeyword() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::InputActionSpeechMapping::get_ActionName() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::InputActionSpeechMapping::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.InputActionSpeechMapping");
    return result;
}
