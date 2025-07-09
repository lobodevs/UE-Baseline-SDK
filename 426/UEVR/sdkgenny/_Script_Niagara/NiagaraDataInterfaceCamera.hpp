#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "NiagaraDataInterface.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraDataInterfaceCamera : public NiagaraDataInterface {
    private: char pad_38[0x8]; public:
    int32_t& get_PlayerControllerIndex();
    bool get_bRequireCurrentFrameData();
    void set_bRequireCurrentFrameData(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
