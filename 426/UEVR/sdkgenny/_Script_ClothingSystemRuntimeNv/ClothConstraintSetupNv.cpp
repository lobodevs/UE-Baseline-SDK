#include "..\FUObjectArray.hpp"
#include "ClothConstraintSetupNv.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_ClothingSystemRuntimeNv::ClothConstraintSetupNv::get_Stiffness() {
    return *(float*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_ClothingSystemRuntimeNv::ClothConstraintSetupNv::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ClothingSystemRuntimeNv.ClothConstraintSetupNv");
    return result;
}
float& _Script_ClothingSystemRuntimeNv::ClothConstraintSetupNv::get_StretchLimit() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_ClothingSystemRuntimeNv::ClothConstraintSetupNv::get_StiffnessMultiplier() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_ClothingSystemRuntimeNv::ClothConstraintSetupNv::get_CompressionLimit() {
    return *(float*)((uintptr_t)this + 0xc);
}
