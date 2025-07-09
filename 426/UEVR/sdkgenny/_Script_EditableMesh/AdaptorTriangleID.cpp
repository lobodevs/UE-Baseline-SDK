#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AdaptorTriangleID.hpp"
#include "..\_Script_MeshDescription\ElementID.hpp"
_Script_CoreUObject::Class* _Script_EditableMesh::AdaptorTriangleID::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/EditableMesh.AdaptorTriangleID");
    return result;
}
