#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "FixedFrameRateCustomTimeStep.hpp"
#include "GenlockedCustomTimeStep.hpp"
_Script_CoreUObject::Class* _Script_TimeManagement::GenlockedCustomTimeStep::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/TimeManagement.GenlockedCustomTimeStep");
    return result;
}
