#include "..\FUObjectArray.hpp"
#include "ClothSharedSimConfigBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
_Script_CoreUObject::Class* _Script_ClothingSystemRuntimeInterface::ClothSharedSimConfigBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ClothingSystemRuntimeInterface.ClothSharedSimConfigBase");
    return result;
}
