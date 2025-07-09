#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "MyPluginObject.hpp"
void* _Script_UObjectPlugin::MyPluginObject::get_MyStruct() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_UObjectPlugin::MyPluginObject::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UObjectPlugin.MyPluginObject");
    return result;
}
