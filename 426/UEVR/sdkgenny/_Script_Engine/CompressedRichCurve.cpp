#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CompressedRichCurve.hpp"
_Script_CoreUObject::Class* _Script_Engine::CompressedRichCurve::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.CompressedRichCurve");
    return result;
}
