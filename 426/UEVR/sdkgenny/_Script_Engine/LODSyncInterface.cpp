#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
#include "LODSyncInterface.hpp"
_Script_CoreUObject::Class* _Script_Engine::LODSyncInterface::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.LODSyncInterface");
    return result;
}
