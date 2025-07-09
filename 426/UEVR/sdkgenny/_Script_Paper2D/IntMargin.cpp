#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "IntMargin.hpp"
int32_t& _Script_Paper2D::IntMargin::get_Left() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
int32_t& _Script_Paper2D::IntMargin::get_Top() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
int32_t& _Script_Paper2D::IntMargin::get_Right() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
int32_t& _Script_Paper2D::IntMargin::get_Bottom() {
    return *(int32_t*)((uintptr_t)this + 0xc);
}
_Script_CoreUObject::Class* _Script_Paper2D::IntMargin::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Paper2D.IntMargin");
    return result;
}
