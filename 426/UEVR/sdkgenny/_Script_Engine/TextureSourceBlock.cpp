#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "TextureSourceBlock.hpp"
int32_t& _Script_Engine::TextureSourceBlock::get_BlockY() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
int32_t& _Script_Engine::TextureSourceBlock::get_BlockX() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::TextureSourceBlock::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.TextureSourceBlock");
    return result;
}
int32_t& _Script_Engine::TextureSourceBlock::get_SizeX() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
int32_t& _Script_Engine::TextureSourceBlock::get_SizeY() {
    return *(int32_t*)((uintptr_t)this + 0xc);
}
int32_t& _Script_Engine::TextureSourceBlock::get_NumSlices() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
int32_t& _Script_Engine::TextureSourceBlock::get_NumMips() {
    return *(int32_t*)((uintptr_t)this + 0x14);
}
