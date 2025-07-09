#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\TextureRenderTarget2D.hpp"
#include "NiagaraComponent.hpp"
#include "NiagaraDataInterfaceGrid2D.hpp"
#include "NiagaraDataInterfaceGrid2DCollection.hpp"
void* _Script_Niagara::NiagaraDataInterfaceGrid2DCollection::get_RenderTargetUserParameter() {
    return (void*)((uintptr_t)this + 0xf8);
}
void* _Script_Niagara::NiagaraDataInterfaceGrid2DCollection::get_OverrideBufferFormat() {
    return (void*)((uintptr_t)this + 0x118);
}
void _Script_Niagara::NiagaraDataInterfaceGrid2DCollection::set_bOverrideFormat(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x119 + 0);
    *(uint8_t*)((uintptr_t)this + 0x119 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Niagara::NiagaraDataInterfaceGrid2DCollection::get_bOverrideFormat() {
    return (*(uint8_t*)((uintptr_t)this + 0x119 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraDataInterfaceGrid2DCollection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraDataInterfaceGrid2DCollection");
    return result;
}
void* _Script_Niagara::NiagaraDataInterfaceGrid2DCollection::get_ManagedRenderTargets() {
    return (void*)((uintptr_t)this + 0x170);
}
void _Script_Niagara::NiagaraDataInterfaceGrid2DCollection::GetTextureSize(_Script_Niagara::NiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY) {
    return;
}
void _Script_Niagara::NiagaraDataInterfaceGrid2DCollection::GetRawTextureSize(_Script_Niagara::NiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY) {
    return;
}
bool _Script_Niagara::NiagaraDataInterfaceGrid2DCollection::FillTexture2D(_Script_Niagara::NiagaraComponent* Component, _Script_Engine::TextureRenderTarget2D* Dest, int32_t AttributeIndex) {
    return;
}
bool _Script_Niagara::NiagaraDataInterfaceGrid2DCollection::FillRawTexture2D(_Script_Niagara::NiagaraComponent* Component, _Script_Engine::TextureRenderTarget2D* Dest, int32_t& TilesX, int32_t& TilesY) {
    return;
}
