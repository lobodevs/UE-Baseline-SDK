#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "TimedDataInputEvaluationData.hpp"
float& _Script_TimeManagement::TimedDataInputEvaluationData::get_DistanceToNewestSampleSeconds() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_TimeManagement::TimedDataInputEvaluationData::get_DistanceToOldestSampleSeconds() {
    return *(float*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_TimeManagement::TimedDataInputEvaluationData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/TimeManagement.TimedDataInputEvaluationData");
    return result;
}
