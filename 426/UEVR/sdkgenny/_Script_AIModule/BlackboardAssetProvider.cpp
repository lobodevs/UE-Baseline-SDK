#include "..\FUObjectArray.hpp"
#include "BlackboardAssetProvider.hpp"
#include "BlackboardData.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
_Script_CoreUObject::Class* _Script_AIModule::BlackboardAssetProvider::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.BlackboardAssetProvider");
    return result;
}
_Script_AIModule::BlackboardData* _Script_AIModule::BlackboardAssetProvider::GetBlackboardAsset() {
    return;
}
