#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "PaperSpriteAtlas.hpp"
_Script_CoreUObject::Class* _Script_Paper2D::PaperSpriteAtlas::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Paper2D.PaperSpriteAtlas");
    return result;
}
