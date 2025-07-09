#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ActorComponentInstanceData {
    private: char pad_0[0x68]; public:
    _Script_CoreUObject::Object*& get_SourceComponentTemplate();
    void* get_SourceComponentCreationMethod();
    int32_t& get_SourceComponentTypeSerializedIndex();
    void* get_SavedProperties();
    void* get_UniqueTransientPackage();
    void* get_DuplicatedObjects();
    void* get_ReferencedObjects();
    void* get_ReferencedNames();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x68
#pragma pack(pop)
}
