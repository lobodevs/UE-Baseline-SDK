#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "NiagaraDataInterface.hpp"
namespace _Script_Engine {
struct Texture2D;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraDataInterfaceCurveBase : public NiagaraDataInterface {
    private: char pad_38[0x38]; public:
    void* get_ShaderLUT();
    float& get_LUTMinTime();
    float& get_LUTMaxTime();
    float& get_LUTInvTimeRange();
    float& get_LUTNumSamplesMinusOne();
    bool get_bUseLUT();
    void set_bUseLUT(bool value);
    bool get_bExposeCurve();
    void set_bExposeCurve(bool value);
    void* get_ExposedName();
    _Script_Engine::Texture2D*& get_ExposedTexture();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x70
#pragma pack(pop)
}
