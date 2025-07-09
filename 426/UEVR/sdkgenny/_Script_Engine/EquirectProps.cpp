#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "EquirectProps.hpp"
_Script_CoreUObject::Class* _Script_Engine::EquirectProps::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.EquirectProps");
    return result;
}
void* _Script_Engine::EquirectProps::get_LeftUVRect() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::EquirectProps::get_LeftScale() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Engine::EquirectProps::get_RightUVRect() {
    return (void*)((uintptr_t)this + 0x14);
}
void* _Script_Engine::EquirectProps::get_RightScale() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::EquirectProps::get_LeftBias() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Engine::EquirectProps::get_RightBias() {
    return (void*)((uintptr_t)this + 0x40);
}
