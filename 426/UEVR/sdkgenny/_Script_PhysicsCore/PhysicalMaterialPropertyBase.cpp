#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "PhysicalMaterialPropertyBase.hpp"
_Script_CoreUObject::Class* _Script_PhysicsCore::PhysicalMaterialPropertyBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/PhysicsCore.PhysicalMaterialPropertyBase");
    return result;
}
