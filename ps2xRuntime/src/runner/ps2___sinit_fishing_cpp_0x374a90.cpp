#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __sinit_fishing.cpp
// Address: 0x374a90 - 0x374b04
void ps2___sinit_fishing_cpp_0x374a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sinit_fishing_cpp_0x374a90");
#endif

    switch (ctx->pc) {
        case 0x374aa4u: goto label_374aa4;
        case 0x374ab0u: goto label_374ab0;
        case 0x374abcu: goto label_374abc;
        case 0x374ac8u: goto label_374ac8;
        case 0x374ad4u: goto label_374ad4;
        case 0x374ae0u: goto label_374ae0;
        case 0x374aecu: goto label_374aec;
        case 0x374af8u: goto label_374af8;
        default: break;
    }

    ctx->pc = 0x374a90u;

    // 0x374a90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x374a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x374a94: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x374a94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x374a98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x374a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x374a9c: 0xc04e640  jal         func_139900
    ctx->pc = 0x374A9Cu;
    SET_GPR_U32(ctx, 31, 0x374AA4u);
    ctx->pc = 0x374AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374A9Cu;
            // 0x374aa0: 0x24849880  addiu       $a0, $a0, -0x6780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374AA4u; }
        if (ctx->pc != 0x374AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374AA4u; }
        if (ctx->pc != 0x374AA4u) { return; }
    }
    ctx->pc = 0x374AA4u;
label_374aa4:
    // 0x374aa4: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x374aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x374aa8: 0xc04e640  jal         func_139900
    ctx->pc = 0x374AA8u;
    SET_GPR_U32(ctx, 31, 0x374AB0u);
    ctx->pc = 0x374AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374AA8u;
            // 0x374aac: 0x248498b0  addiu       $a0, $a0, -0x6750 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374AB0u; }
        if (ctx->pc != 0x374AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374AB0u; }
        if (ctx->pc != 0x374AB0u) { return; }
    }
    ctx->pc = 0x374AB0u;
label_374ab0:
    // 0x374ab0: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x374ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x374ab4: 0xc0bafa0  jal         func_2EBE80
    ctx->pc = 0x374AB4u;
    SET_GPR_U32(ctx, 31, 0x374ABCu);
    ctx->pc = 0x374AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374AB4u;
            // 0x374ab8: 0x248498e0  addiu       $a0, $a0, -0x6720 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBE80u;
    if (runtime->hasFunction(0x2EBE80u)) {
        auto targetFn = runtime->lookupFunction(0x2EBE80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374ABCu; }
        if (ctx->pc != 0x374ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__14CCameraControlFv_0x2ebe80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374ABCu; }
        if (ctx->pc != 0x374ABCu) { return; }
    }
    ctx->pc = 0x374ABCu;
label_374abc:
    // 0x374abc: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x374abcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x374ac0: 0xc0bafa0  jal         func_2EBE80
    ctx->pc = 0x374AC0u;
    SET_GPR_U32(ctx, 31, 0x374AC8u);
    ctx->pc = 0x374AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374AC0u;
            // 0x374ac4: 0x24849ad0  addiu       $a0, $a0, -0x6530 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBE80u;
    if (runtime->hasFunction(0x2EBE80u)) {
        auto targetFn = runtime->lookupFunction(0x2EBE80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374AC8u; }
        if (ctx->pc != 0x374AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__14CCameraControlFv_0x2ebe80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374AC8u; }
        if (ctx->pc != 0x374AC8u) { return; }
    }
    ctx->pc = 0x374AC8u;
label_374ac8:
    // 0x374ac8: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x374ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x374acc: 0xc04e640  jal         func_139900
    ctx->pc = 0x374ACCu;
    SET_GPR_U32(ctx, 31, 0x374AD4u);
    ctx->pc = 0x374AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374ACCu;
            // 0x374ad0: 0x24849d30  addiu       $a0, $a0, -0x62D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374AD4u; }
        if (ctx->pc != 0x374AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374AD4u; }
        if (ctx->pc != 0x374AD4u) { return; }
    }
    ctx->pc = 0x374AD4u;
label_374ad4:
    // 0x374ad4: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x374ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x374ad8: 0xc04e640  jal         func_139900
    ctx->pc = 0x374AD8u;
    SET_GPR_U32(ctx, 31, 0x374AE0u);
    ctx->pc = 0x374ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374AD8u;
            // 0x374adc: 0x24849d60  addiu       $a0, $a0, -0x62A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374AE0u; }
        if (ctx->pc != 0x374AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374AE0u; }
        if (ctx->pc != 0x374AE0u) { return; }
    }
    ctx->pc = 0x374AE0u;
label_374ae0:
    // 0x374ae0: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x374ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x374ae4: 0xc04e640  jal         func_139900
    ctx->pc = 0x374AE4u;
    SET_GPR_U32(ctx, 31, 0x374AECu);
    ctx->pc = 0x374AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374AE4u;
            // 0x374ae8: 0x24849d90  addiu       $a0, $a0, -0x6270 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374AECu; }
        if (ctx->pc != 0x374AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374AECu; }
        if (ctx->pc != 0x374AECu) { return; }
    }
    ctx->pc = 0x374AECu;
label_374aec:
    // 0x374aec: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x374aecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x374af0: 0xc04e640  jal         func_139900
    ctx->pc = 0x374AF0u;
    SET_GPR_U32(ctx, 31, 0x374AF8u);
    ctx->pc = 0x374AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374AF0u;
            // 0x374af4: 0x24849dc0  addiu       $a0, $a0, -0x6240 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374AF8u; }
        if (ctx->pc != 0x374AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374AF8u; }
        if (ctx->pc != 0x374AF8u) { return; }
    }
    ctx->pc = 0x374AF8u;
label_374af8:
    // 0x374af8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x374af8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374afc: 0x3e00008  jr          $ra
    ctx->pc = 0x374AFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x374AFCu;
            // 0x374b00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x374B04u;
}
