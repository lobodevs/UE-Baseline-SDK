#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Blueprint.hpp"
#include "BlueprintCore.hpp"
#include "InheritableComponentHandler.hpp"
#include "SimpleConstructionScript.hpp"
void* _Script_Engine::Blueprint::get_BlueprintType() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_Engine::Blueprint::get_ParentClass() {
    return (void*)((uintptr_t)this + 0x50);
}
bool _Script_Engine::Blueprint::get_bHasBeenRegenerated() {
    return (*(uint8_t*)((uintptr_t)this + 0x59 + 0)) & 2 != 0;
}
bool _Script_Engine::Blueprint::get_bRecompileOnLoad() {
    return (*(uint8_t*)((uintptr_t)this + 0x59 + 0)) & 1 != 0;
}
void _Script_Engine::Blueprint::set_bIsRegeneratingOnLoad(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x59 + 0);
    *(uint8_t*)((uintptr_t)this + 0x59 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::Blueprint::get_bIsRegeneratingOnLoad() {
    return (*(uint8_t*)((uintptr_t)this + 0x59 + 0)) & 4 != 0;
}
void _Script_Engine::Blueprint::set_bRecompileOnLoad(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x59 + 0);
    *(uint8_t*)((uintptr_t)this + 0x59 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::Blueprint::set_bHasBeenRegenerated(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x59 + 0);
    *(uint8_t*)((uintptr_t)this + 0x59 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
int32_t& _Script_Engine::Blueprint::get_BlueprintSystemVersion() {
    return *(int32_t*)((uintptr_t)this + 0x5c);
}
_Script_Engine::SimpleConstructionScript*& _Script_Engine::Blueprint::get_SimpleConstructionScript() {
    return *(_Script_Engine::SimpleConstructionScript**)((uintptr_t)this + 0x60);
}
void* _Script_Engine::Blueprint::get_ComponentTemplates() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_Engine::Blueprint::get_Timelines() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_Engine::Blueprint::get_ComponentClassOverrides() {
    return (void*)((uintptr_t)this + 0x88);
}
_Script_Engine::InheritableComponentHandler*& _Script_Engine::Blueprint::get_InheritableComponentHandler() {
    return *(_Script_Engine::InheritableComponentHandler**)((uintptr_t)this + 0x98);
}
_Script_CoreUObject::Class* _Script_Engine::Blueprint::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.Blueprint");
    return result;
}
