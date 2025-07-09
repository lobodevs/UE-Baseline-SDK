#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "NiagaraDataInterfaceGrid3D.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
struct NiagaraComponent;
}
namespace _Script_Engine {
struct VolumeTexture;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraDataInterfaceGrid3DCollection : public NiagaraDataInterfaceGrid3D {
    private: char pad_100[0x80]; public:
    int32_t& get_NumAttributes();
    void* get_RenderTargetUserParameter();
    void* get_BufferFormat();
    static _Script_CoreUObject::Class* static_class();
    void GetTextureSize(_Script_Niagara::NiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY, int32_t& SizeZ);
    void GetRawTextureSize(_Script_Niagara::NiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY, int32_t& SizeZ);
    bool FillVolumeTexture(_Script_Niagara::NiagaraComponent* Component, _Script_Engine::VolumeTexture* Dest, int32_t AttributeIndex);
    bool FillRawVolumeTexture(_Script_Niagara::NiagaraComponent* Component, _Script_Engine::VolumeTexture* Dest, int32_t& TilesX, int32_t& TilesY, int32_t& TileZ);
}; // Size: 0x180
#pragma pack(pop)
}
