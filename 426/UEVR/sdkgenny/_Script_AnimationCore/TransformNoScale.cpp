#include "..\FUObjectArray.hpp"
#include "TransformNoScale.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AnimationCore::TransformNoScale::get_Location() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_AnimationCore::TransformNoScale::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimationCore.TransformNoScale");
    return result;
}
void* _Script_AnimationCore::TransformNoScale::get_Rotation() {
    return (void*)((uintptr_t)this + 0x10);
}
