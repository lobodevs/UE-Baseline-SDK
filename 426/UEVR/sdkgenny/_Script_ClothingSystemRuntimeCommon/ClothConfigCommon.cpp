#include "..\FUObjectArray.hpp"
#include "ClothConfigCommon.hpp"
#include "..\_Script_ClothingSystemRuntimeInterface\ClothConfigBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ClothingSystemRuntimeCommon::ClothConfigCommon::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ClothingSystemRuntimeCommon.ClothConfigCommon");
    return result;
}
