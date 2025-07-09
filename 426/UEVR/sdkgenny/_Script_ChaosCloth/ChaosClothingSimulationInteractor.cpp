#include "..\FUObjectArray.hpp"
#include "ChaosClothingSimulationInteractor.hpp"
#include "..\_Script_ClothingSystemRuntimeInterface\ClothingSimulationInteractor.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ChaosCloth::ChaosClothingSimulationInteractor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ChaosCloth.ChaosClothingSimulationInteractor");
    return result;
}
