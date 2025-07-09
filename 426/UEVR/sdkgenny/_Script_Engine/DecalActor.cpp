#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Actor.hpp"
#include "DecalActor.hpp"
#include "DecalComponent.hpp"
#include "MaterialInstanceDynamic.hpp"
#include "MaterialInterface.hpp"
_Script_Engine::DecalComponent*& _Script_Engine::DecalActor::get_Decal() {
    return *(_Script_Engine::DecalComponent**)((uintptr_t)this + 0x220);
}
_Script_CoreUObject::Class* _Script_Engine::DecalActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.DecalActor");
    return result;
}
void _Script_Engine::DecalActor::SetDecalMaterial(_Script_Engine::MaterialInterface* NewDecalMaterial) {
    return;
}
_Script_Engine::MaterialInterface* _Script_Engine::DecalActor::GetDecalMaterial() {
    return;
}
_Script_Engine::MaterialInstanceDynamic* _Script_Engine::DecalActor::CreateDynamicMaterialInstance() {
    return;
}
