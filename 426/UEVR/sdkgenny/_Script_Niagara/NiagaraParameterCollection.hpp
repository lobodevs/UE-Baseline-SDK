#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_Engine {
struct MaterialParameterCollection;
}
namespace _Script_Niagara {
struct NiagaraParameterCollectionInstance;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraParameterCollection : public _Script_CoreUObject::Object {
    private: char pad_28[0x38]; public:
    void* get_Namespace();
    void* get_Parameters();
    _Script_Engine::MaterialParameterCollection*& get_SourceMaterialCollection();
    _Script_Niagara::NiagaraParameterCollectionInstance*& get_DefaultInstance();
    void* get_CompileId();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
