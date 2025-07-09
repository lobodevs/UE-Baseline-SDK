#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SceneComponentInstanceData.hpp"
#include "WidgetComponentInstanceData.hpp"
_Script_CoreUObject::Class* _Script_UMG::WidgetComponentInstanceData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/UMG.WidgetComponentInstanceData");
    return result;
}
