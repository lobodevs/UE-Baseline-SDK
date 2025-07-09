#include "..\FUObjectArray.hpp"
#include "ClothCollisionPrim_Box.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
int32_t& _Script_ClothingSystemRuntimeInterface::ClothCollisionPrim_Box::get_BoneIndex() {
    return *(int32_t*)((uintptr_t)this + 0x2c);
}
void* _Script_ClothingSystemRuntimeInterface::ClothCollisionPrim_Box::get_LocalPosition() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_ClothingSystemRuntimeInterface::ClothCollisionPrim_Box::get_LocalRotation() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_ClothingSystemRuntimeInterface::ClothCollisionPrim_Box::get_HalfExtents() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_ClothingSystemRuntimeInterface::ClothCollisionPrim_Box::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ClothingSystemRuntimeInterface.ClothCollisionPrim_Box");
    return result;
}
