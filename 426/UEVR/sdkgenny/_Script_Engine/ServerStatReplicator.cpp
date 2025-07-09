#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Info.hpp"
#include "ServerStatReplicator.hpp"
void* _Script_Engine::ServerStatReplicator::get_PrioritizedActors() {
    return (void*)((uintptr_t)this + 0x2a4);
}
void* _Script_Engine::ServerStatReplicator::get_OutRate() {
    return (void*)((uintptr_t)this + 0x22c);
}
bool _Script_Engine::ServerStatReplicator::get_bUpdateStatNet() {
    return (*(uint8_t*)((uintptr_t)this + 0x220 + 0)) & 1 != 0;
}
void* _Script_Engine::ServerStatReplicator::get_VoicePacketsSent() {
    return (void*)((uintptr_t)this + 0x28c);
}
void* _Script_Engine::ServerStatReplicator::get_MaxPacketOverhead() {
    return (void*)((uintptr_t)this + 0x234);
}
void _Script_Engine::ServerStatReplicator::set_bUpdateStatNet(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x220 + 0);
    *(uint8_t*)((uintptr_t)this + 0x220 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::ServerStatReplicator::get_bOverwriteClientStats() {
    return (*(uint8_t*)((uintptr_t)this + 0x221 + 0)) & 1 != 0;
}
void _Script_Engine::ServerStatReplicator::set_bOverwriteClientStats(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x221 + 0);
    *(uint8_t*)((uintptr_t)this + 0x221 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::ServerStatReplicator::get_Channels() {
    return (void*)((uintptr_t)this + 0x224);
}
void* _Script_Engine::ServerStatReplicator::get_InRate() {
    return (void*)((uintptr_t)this + 0x228);
}
void* _Script_Engine::ServerStatReplicator::get_InRateClientMax() {
    return (void*)((uintptr_t)this + 0x238);
}
void* _Script_Engine::ServerStatReplicator::get_NumNetActors() {
    return (void*)((uintptr_t)this + 0x2bc);
}
void* _Script_Engine::ServerStatReplicator::get_InRateClientMin() {
    return (void*)((uintptr_t)this + 0x23c);
}
void* _Script_Engine::ServerStatReplicator::get_InBunches() {
    return (void*)((uintptr_t)this + 0x274);
}
void* _Script_Engine::ServerStatReplicator::get_InRateClientAvg() {
    return (void*)((uintptr_t)this + 0x240);
}
void* _Script_Engine::ServerStatReplicator::get_InPacketsClientMax() {
    return (void*)((uintptr_t)this + 0x244);
}
void* _Script_Engine::ServerStatReplicator::get_InPacketsClientAvg() {
    return (void*)((uintptr_t)this + 0x24c);
}
void* _Script_Engine::ServerStatReplicator::get_InPacketsClientMin() {
    return (void*)((uintptr_t)this + 0x248);
}
void* _Script_Engine::ServerStatReplicator::get_OutRateClientMax() {
    return (void*)((uintptr_t)this + 0x250);
}
void* _Script_Engine::ServerStatReplicator::get_OutRateClientMin() {
    return (void*)((uintptr_t)this + 0x254);
}
void* _Script_Engine::ServerStatReplicator::get_NumConsideredActors() {
    return (void*)((uintptr_t)this + 0x2a0);
}
void* _Script_Engine::ServerStatReplicator::get_OutRateClientAvg() {
    return (void*)((uintptr_t)this + 0x258);
}
void* _Script_Engine::ServerStatReplicator::get_VoiceBytesSent() {
    return (void*)((uintptr_t)this + 0x284);
}
void* _Script_Engine::ServerStatReplicator::get_OutPacketsClientMax() {
    return (void*)((uintptr_t)this + 0x25c);
}
void* _Script_Engine::ServerStatReplicator::get_OutPacketsClientMin() {
    return (void*)((uintptr_t)this + 0x260);
}
void* _Script_Engine::ServerStatReplicator::get_OutPacketsClientAvg() {
    return (void*)((uintptr_t)this + 0x264);
}
void* _Script_Engine::ServerStatReplicator::get_NetNumClients() {
    return (void*)((uintptr_t)this + 0x268);
}
void* _Script_Engine::ServerStatReplicator::get_InPackets() {
    return (void*)((uintptr_t)this + 0x26c);
}
void* _Script_Engine::ServerStatReplicator::get_OutPackets() {
    return (void*)((uintptr_t)this + 0x270);
}
void* _Script_Engine::ServerStatReplicator::get_OutBunches() {
    return (void*)((uintptr_t)this + 0x278);
}
void* _Script_Engine::ServerStatReplicator::get_OutLoss() {
    return (void*)((uintptr_t)this + 0x27c);
}
void* _Script_Engine::ServerStatReplicator::get_PercentOutVoice() {
    return (void*)((uintptr_t)this + 0x298);
}
void* _Script_Engine::ServerStatReplicator::get_InLoss() {
    return (void*)((uintptr_t)this + 0x280);
}
void* _Script_Engine::ServerStatReplicator::get_VoiceBytesRecv() {
    return (void*)((uintptr_t)this + 0x288);
}
void* _Script_Engine::ServerStatReplicator::get_VoicePacketsRecv() {
    return (void*)((uintptr_t)this + 0x290);
}
void* _Script_Engine::ServerStatReplicator::get_PercentInVoice() {
    return (void*)((uintptr_t)this + 0x294);
}
void* _Script_Engine::ServerStatReplicator::get_NumActorChannels() {
    return (void*)((uintptr_t)this + 0x29c);
}
void* _Script_Engine::ServerStatReplicator::get_NumRelevantActors() {
    return (void*)((uintptr_t)this + 0x2a8);
}
void* _Script_Engine::ServerStatReplicator::get_NumRelevantDeletedActors() {
    return (void*)((uintptr_t)this + 0x2ac);
}
void* _Script_Engine::ServerStatReplicator::get_NumReplicatedActorAttempts() {
    return (void*)((uintptr_t)this + 0x2b0);
}
void* _Script_Engine::ServerStatReplicator::get_NumNetGUIDsPending() {
    return (void*)((uintptr_t)this + 0x2cc);
}
void* _Script_Engine::ServerStatReplicator::get_NumReplicatedActors() {
    return (void*)((uintptr_t)this + 0x2b4);
}
void* _Script_Engine::ServerStatReplicator::get_NumActors() {
    return (void*)((uintptr_t)this + 0x2b8);
}
void* _Script_Engine::ServerStatReplicator::get_NumDormantActors() {
    return (void*)((uintptr_t)this + 0x2c0);
}
void* _Script_Engine::ServerStatReplicator::get_NumInitiallyDormantActors() {
    return (void*)((uintptr_t)this + 0x2c4);
}
void* _Script_Engine::ServerStatReplicator::get_NumNetGUIDsAckd() {
    return (void*)((uintptr_t)this + 0x2c8);
}
void* _Script_Engine::ServerStatReplicator::get_NumNetGUIDsUnAckd() {
    return (void*)((uintptr_t)this + 0x2d0);
}
void* _Script_Engine::ServerStatReplicator::get_ObjPathBytes() {
    return (void*)((uintptr_t)this + 0x2d4);
}
void* _Script_Engine::ServerStatReplicator::get_NetGUIDOutRate() {
    return (void*)((uintptr_t)this + 0x2d8);
}
void* _Script_Engine::ServerStatReplicator::get_NetGUIDInRate() {
    return (void*)((uintptr_t)this + 0x2dc);
}
void* _Script_Engine::ServerStatReplicator::get_NetSaturated() {
    return (void*)((uintptr_t)this + 0x2e0);
}
_Script_CoreUObject::Class* _Script_Engine::ServerStatReplicator::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ServerStatReplicator");
    return result;
}
