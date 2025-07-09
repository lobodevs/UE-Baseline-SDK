#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "StaticMeshSocket.hpp"
void* _Script_Engine::StaticMeshSocket::get_SocketName() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Engine::StaticMeshSocket::get_RelativeLocation() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::StaticMeshSocket::get_RelativeRotation() {
    return (void*)((uintptr_t)this + 0x3c);
}
_Script_CoreUObject::Class* _Script_Engine::StaticMeshSocket::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.StaticMeshSocket");
    return result;
}
void* _Script_Engine::StaticMeshSocket::get_RelativeScale() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_Engine::StaticMeshSocket::get_Tag() {
    return (void*)((uintptr_t)this + 0x58);
}
