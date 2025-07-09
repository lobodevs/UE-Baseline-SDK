#include "..\FUObjectArray.hpp"
#include "..\_Script_ClothingSystemRuntimeInterface\ClothingSimulationInteractor.hpp"
#include "ClothingSimulationInteractorNv.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ClothingSystemRuntimeNv::ClothingSimulationInteractorNv::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ClothingSystemRuntimeNv.ClothingSimulationInteractorNv");
    return result;
}
void _Script_ClothingSystemRuntimeNv::ClothingSimulationInteractorNv::SetAnimDriveDamperStiffness(float InStiffness) {
    return;
}
