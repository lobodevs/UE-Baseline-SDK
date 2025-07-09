#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_SlateCore\SlateWidgetStyle.hpp"
#include "SynthSlateStyle.hpp"
void* _Script_Synthesis::SynthSlateStyle::get_SizeType() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Synthesis::SynthSlateStyle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Synthesis.SynthSlateStyle");
    return result;
}
void* _Script_Synthesis::SynthSlateStyle::get_ColorStyle() {
    return (void*)((uintptr_t)this + 0x9);
}
