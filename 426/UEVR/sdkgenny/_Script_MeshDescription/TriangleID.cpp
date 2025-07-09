#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ElementID.hpp"
#include "TriangleID.hpp"
_Script_CoreUObject::Class* _Script_MeshDescription::TriangleID::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MeshDescription.TriangleID");
    return result;
}
