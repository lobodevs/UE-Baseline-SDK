#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PaperFlipbookKeyFrame.hpp"
#include "PaperSprite.hpp"
_Script_Paper2D::PaperSprite*& _Script_Paper2D::PaperFlipbookKeyFrame::get_Sprite() {
    return *(_Script_Paper2D::PaperSprite**)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Paper2D::PaperFlipbookKeyFrame::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Paper2D.PaperFlipbookKeyFrame");
    return result;
}
int32_t& _Script_Paper2D::PaperFlipbookKeyFrame::get_FrameRun() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
