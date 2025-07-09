#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "NiagaraDataInterface.hpp"
#include "NiagaraDataInterfaceLandscape.hpp"
_Script_Engine::Actor*& _Script_Niagara::NiagaraDataInterfaceLandscape::get_SourceLandscape() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraDataInterfaceLandscape::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraDataInterfaceLandscape");
    return result;
}
