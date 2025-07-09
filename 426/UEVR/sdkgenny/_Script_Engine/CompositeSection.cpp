#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimLinkableElement.hpp"
#include "CompositeSection.hpp"
void* _Script_Engine::CompositeSection::get_MetaData() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_Engine::CompositeSection::get_SectionName() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::CompositeSection::get_NextSectionName() {
    return (void*)((uintptr_t)this + 0x3c);
}
float& _Script_Engine::CompositeSection::get_StartTime() {
    return *(float*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_Engine::CompositeSection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.CompositeSection");
    return result;
}
