#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "FieldNodeBase.hpp"
#include "FieldNodeInt.hpp"
_Script_CoreUObject::Class* _Script_FieldSystemEngine::FieldNodeInt::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/FieldSystemEngine.FieldNodeInt");
    return result;
}
