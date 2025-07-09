#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "FieldNodeBase.hpp"
#include "FieldNodeVector.hpp"
_Script_CoreUObject::Class* _Script_FieldSystemEngine::FieldNodeVector::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/FieldSystemEngine.FieldNodeVector");
    return result;
}
