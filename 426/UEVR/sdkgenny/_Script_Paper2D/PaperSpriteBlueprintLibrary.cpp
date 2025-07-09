#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "PaperSprite.hpp"
#include "PaperSpriteBlueprintLibrary.hpp"
#include "..\_Script_SlateCore\SlateBrush.hpp"
_Script_CoreUObject::Class* _Script_Paper2D::PaperSpriteBlueprintLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Paper2D.PaperSpriteBlueprintLibrary");
    return result;
}
_Script_SlateCore::SlateBrush _Script_Paper2D::PaperSpriteBlueprintLibrary::MakeBrushFromSprite(_Script_Paper2D::PaperSprite* Sprite, int32_t Width, int32_t Height) {
    return;
}
