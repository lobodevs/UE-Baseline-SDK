#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "ActorComponentInstanceData.hpp"
_Script_CoreUObject::Object*& _Script_Engine::ActorComponentInstanceData::get_SourceComponentTemplate() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x8);
}
void* _Script_Engine::ActorComponentInstanceData::get_SourceComponentCreationMethod() {
    return (void*)((uintptr_t)this + 0x10);
}
int32_t& _Script_Engine::ActorComponentInstanceData::get_SourceComponentTypeSerializedIndex() {
    return *(int32_t*)((uintptr_t)this + 0x14);
}
void* _Script_Engine::ActorComponentInstanceData::get_SavedProperties() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_Engine::ActorComponentInstanceData::get_UniqueTransientPackage() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Engine::ActorComponentInstanceData::get_ReferencedObjects() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_Engine::ActorComponentInstanceData::get_DuplicatedObjects() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Engine::ActorComponentInstanceData::get_ReferencedNames() {
    return (void*)((uintptr_t)this + 0x58);
}
_Script_CoreUObject::Class* _Script_Engine::ActorComponentInstanceData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.ActorComponentInstanceData");
    return result;
}
