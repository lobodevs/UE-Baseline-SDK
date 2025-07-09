#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
struct NiagaraComponent;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraPreviewAxis : public _Script_CoreUObject::Object {
    static _Script_CoreUObject::Class* static_class();
    int32_t Num();
    void ApplyToPreview(_Script_Niagara::NiagaraComponent* PreviewComponent, int32_t PreviewIndex, bool bIsXAxis, void*& OutLabelText);
}; // Size: 0x28
#pragma pack(pop)
}
