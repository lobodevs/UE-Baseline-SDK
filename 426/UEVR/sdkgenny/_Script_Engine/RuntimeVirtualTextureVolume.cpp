#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Actor.hpp"
#include "RuntimeVirtualTextureComponent.hpp"
#include "RuntimeVirtualTextureVolume.hpp"
_Script_Engine::RuntimeVirtualTextureComponent*& _Script_Engine::RuntimeVirtualTextureVolume::get_VirtualTextureComponent() {
    return *(_Script_Engine::RuntimeVirtualTextureComponent**)((uintptr_t)this + 0x220);
}
_Script_CoreUObject::Class* _Script_Engine::RuntimeVirtualTextureVolume::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.RuntimeVirtualTextureVolume");
    return result;
}
