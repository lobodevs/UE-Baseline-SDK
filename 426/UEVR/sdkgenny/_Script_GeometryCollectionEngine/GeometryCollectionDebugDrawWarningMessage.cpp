#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GeometryCollectionDebugDrawWarningMessage.hpp"
_Script_CoreUObject::Class* _Script_GeometryCollectionEngine::GeometryCollectionDebugDrawWarningMessage::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/GeometryCollectionEngine.GeometryCollectionDebugDrawWarningMessage");
    return result;
}
