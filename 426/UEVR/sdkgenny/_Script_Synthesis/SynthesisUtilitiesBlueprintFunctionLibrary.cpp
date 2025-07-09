#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "SynthesisUtilitiesBlueprintFunctionLibrary.hpp"
float _Script_Synthesis::SynthesisUtilitiesBlueprintFunctionLibrary::GetLogFrequency(float InLinearValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax) {
    return;
}
_Script_CoreUObject::Class* _Script_Synthesis::SynthesisUtilitiesBlueprintFunctionLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary");
    return result;
}
float _Script_Synthesis::SynthesisUtilitiesBlueprintFunctionLibrary::GetLinearFrequency(float InLogFrequencyValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax) {
    return;
}
