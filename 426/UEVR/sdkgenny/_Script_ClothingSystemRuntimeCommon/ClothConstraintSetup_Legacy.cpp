#include "..\FUObjectArray.hpp"
#include "ClothConstraintSetup_Legacy.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_ClothingSystemRuntimeCommon::ClothConstraintSetup_Legacy::get_CompressionLimit() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_ClothingSystemRuntimeCommon::ClothConstraintSetup_Legacy::get_StiffnessMultiplier() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_ClothingSystemRuntimeCommon::ClothConstraintSetup_Legacy::get_Stiffness() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_ClothingSystemRuntimeCommon::ClothConstraintSetup_Legacy::get_StretchLimit() {
    return *(float*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_ClothingSystemRuntimeCommon::ClothConstraintSetup_Legacy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ClothingSystemRuntimeCommon.ClothConstraintSetup_Legacy");
    return result;
}
