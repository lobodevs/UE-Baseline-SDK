#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AISubsystem.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_AIModule {
struct EnvQuery;
}
namespace _Script_AIModule {
struct EnvQueryInstanceBlueprintWrapper;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct EnvQueryManager : public AISubsystem {
    private: char pad_38[0x108]; public:
    void* get_InstanceCache();
    void* get_LocalContexts();
    void* get_GCShieldedWrappers();
    float& get_MaxAllowedTestingTime();
    bool get_bTestQueriesUsingBreadth();
    void set_bTestQueriesUsingBreadth(bool value);
    int32_t& get_QueryCountWarningThreshold();
    double& get_QueryCountWarningInterval();
    static _Script_CoreUObject::Class* static_class();
    _Script_AIModule::EnvQueryInstanceBlueprintWrapper* RunEQSQuery(_Script_CoreUObject::Object* WorldContextObject, _Script_AIModule::EnvQuery* QueryTemplate, _Script_CoreUObject::Object* Querier, void* RunMode, void* WrapperClass);
}; // Size: 0x140
#pragma pack(pop)
}
