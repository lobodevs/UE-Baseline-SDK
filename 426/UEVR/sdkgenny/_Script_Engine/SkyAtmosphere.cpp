#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Info.hpp"
#include "SkyAtmosphere.hpp"
#include "SkyAtmosphereComponent.hpp"
_Script_Engine::SkyAtmosphereComponent*& _Script_Engine::SkyAtmosphere::get_SkyAtmosphereComponent() {
    return *(_Script_Engine::SkyAtmosphereComponent**)((uintptr_t)this + 0x220);
}
_Script_CoreUObject::Class* _Script_Engine::SkyAtmosphere::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SkyAtmosphere");
    return result;
}
