#include "..\FUObjectArray.hpp"
#include "ActorLayer.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ActorLayerUtilities::ActorLayer::get_Name() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_ActorLayerUtilities::ActorLayer::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ActorLayerUtilities.ActorLayer");
    return result;
}
