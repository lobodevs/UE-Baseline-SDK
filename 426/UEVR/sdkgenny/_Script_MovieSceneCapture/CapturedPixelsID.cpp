#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CapturedPixelsID.hpp"
void* _Script_MovieSceneCapture::CapturedPixelsID::get_Identifiers() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_MovieSceneCapture::CapturedPixelsID::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneCapture.CapturedPixelsID");
    return result;
}
