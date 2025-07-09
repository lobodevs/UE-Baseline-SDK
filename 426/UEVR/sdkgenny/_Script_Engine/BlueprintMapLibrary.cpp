#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "BlueprintFunctionLibrary.hpp"
#include "BlueprintMapLibrary.hpp"
_Script_CoreUObject::Class* _Script_Engine::BlueprintMapLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.BlueprintMapLibrary");
    return result;
}
bool _Script_Engine::BlueprintMapLibrary::Map_Contains(void*& TargetMap, int32_t& Key) {
    return;
}
void _Script_Engine::BlueprintMapLibrary::SetMapPropertyByName(_Script_CoreUObject::Object* Object, void* PropertyName, void*& Value) {
    return;
}
void _Script_Engine::BlueprintMapLibrary::Map_Values(void*& TargetMap, void*& Values) {
    return;
}
bool _Script_Engine::BlueprintMapLibrary::Map_Remove(void*& TargetMap, int32_t& Key) {
    return;
}
int32_t _Script_Engine::BlueprintMapLibrary::Map_Length(void*& TargetMap) {
    return;
}
void _Script_Engine::BlueprintMapLibrary::Map_Keys(void*& TargetMap, void*& Keys) {
    return;
}
bool _Script_Engine::BlueprintMapLibrary::Map_Find(void*& TargetMap, int32_t& Key, int32_t& Value) {
    return;
}
void _Script_Engine::BlueprintMapLibrary::Map_Clear(void*& TargetMap) {
    return;
}
void _Script_Engine::BlueprintMapLibrary::Map_Add(void*& TargetMap, int32_t& Key, int32_t& Value) {
    return;
}
