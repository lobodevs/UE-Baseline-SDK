#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PaperSpriteSocket.hpp"
void* _Script_Paper2D::PaperSpriteSocket::get_LocalTransform() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Paper2D::PaperSpriteSocket::get_SocketName() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_Paper2D::PaperSpriteSocket::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Paper2D.PaperSpriteSocket");
    return result;
}
