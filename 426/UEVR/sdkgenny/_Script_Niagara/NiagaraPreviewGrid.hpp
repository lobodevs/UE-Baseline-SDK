#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Niagara {
struct NiagaraSystem;
}
namespace _Script_Niagara {
struct NiagaraPreviewAxis;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraPreviewGrid : public _Script_Engine::Actor {
    private: char pad_220[0x50]; public:
    _Script_Niagara::NiagaraSystem*& get_System();
    void* get_ResetMode();
    _Script_Niagara::NiagaraPreviewAxis*& get_PreviewAxisX();
    _Script_Niagara::NiagaraPreviewAxis*& get_PreviewAxisY();
    void* get_PreviewClass();
    float& get_SpacingX();
    float& get_SpacingY();
    int32_t& get_NumX();
    int32_t& get_NumY();
    void* get_PreviewComponents();
    static _Script_CoreUObject::Class* static_class();
    void SetPaused(bool bPaused);
    void GetPreviews(void*& OutPreviews);
    void DeactivatePreviews();
    void ActivatePreviews(bool bReset);
}; // Size: 0x270
#pragma pack(pop)
}
