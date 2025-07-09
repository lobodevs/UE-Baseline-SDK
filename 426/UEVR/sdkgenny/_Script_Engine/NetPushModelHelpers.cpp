#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "BlueprintFunctionLibrary.hpp"
#include "NetPushModelHelpers.hpp"
_Script_CoreUObject::Class* _Script_Engine::NetPushModelHelpers::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.NetPushModelHelpers");
    return result;
}
void _Script_Engine::NetPushModelHelpers::MarkPropertyDirtyFromRepIndex(_Script_CoreUObject::Object* Object, int32_t RepIndex, void* PropertyName) {
    return;
}
void _Script_Engine::NetPushModelHelpers::MarkPropertyDirty(_Script_CoreUObject::Object* Object, void* PropertyName) {
    return;
}
