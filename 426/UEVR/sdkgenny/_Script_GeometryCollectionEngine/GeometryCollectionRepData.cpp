#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GeometryCollectionRepData.hpp"
_Script_CoreUObject::Class* _Script_GeometryCollectionEngine::GeometryCollectionRepData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/GeometryCollectionEngine.GeometryCollectionRepData");
    return result;
}
