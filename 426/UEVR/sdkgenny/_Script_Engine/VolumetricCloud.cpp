#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Info.hpp"
#include "VolumetricCloud.hpp"
#include "VolumetricCloudComponent.hpp"
_Script_Engine::VolumetricCloudComponent*& _Script_Engine::VolumetricCloud::get_VolumetricCloudComponent() {
    return *(_Script_Engine::VolumetricCloudComponent**)((uintptr_t)this + 0x220);
}
_Script_CoreUObject::Class* _Script_Engine::VolumetricCloud::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.VolumetricCloud");
    return result;
}
