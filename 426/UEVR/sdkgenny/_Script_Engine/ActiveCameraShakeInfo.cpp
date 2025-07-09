#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ActiveCameraShakeInfo.hpp"
#include "CameraShakeBase.hpp"
_Script_Engine::CameraShakeBase*& _Script_Engine::ActiveCameraShakeInfo::get_ShakeInstance() {
    return *(_Script_Engine::CameraShakeBase**)((uintptr_t)this + 0x0);
}
void* _Script_Engine::ActiveCameraShakeInfo::get_ShakeSource() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::ActiveCameraShakeInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.ActiveCameraShakeInfo");
    return result;
}
