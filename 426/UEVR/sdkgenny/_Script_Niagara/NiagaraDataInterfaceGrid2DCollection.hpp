#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "NiagaraDataInterfaceGrid2D.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
struct NiagaraComponent;
}
namespace _Script_Engine {
struct TextureRenderTarget2D;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraDataInterfaceGrid2DCollection : public NiagaraDataInterfaceGrid2D {
    private: char pad_f8[0xc8]; public:
    void* get_RenderTargetUserParameter();
    void* get_OverrideBufferFormat();
    bool get_bOverrideFormat();
    void set_bOverrideFormat(bool value);
    void* get_ManagedRenderTargets();
    static _Script_CoreUObject::Class* static_class();
    void GetTextureSize(_Script_Niagara::NiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY);
    void GetRawTextureSize(_Script_Niagara::NiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY);
    bool FillTexture2D(_Script_Niagara::NiagaraComponent* Component, _Script_Engine::TextureRenderTarget2D* Dest, int32_t AttributeIndex);
    bool FillRawTexture2D(_Script_Niagara::NiagaraComponent* Component, _Script_Engine::TextureRenderTarget2D* Dest, int32_t& TilesX, int32_t& TilesY);
}; // Size: 0x1c0
#pragma pack(pop)
}
