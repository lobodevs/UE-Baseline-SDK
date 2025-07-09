#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MyPluginStruct.hpp"
void* _Script_UObjectPlugin::MyPluginStruct::get_TestString() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_UObjectPlugin::MyPluginStruct::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/UObjectPlugin.MyPluginStruct");
    return result;
}
