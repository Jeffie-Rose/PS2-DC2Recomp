#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SCElogoFade__FiP9mgCMemory
// Address: 0x30a290 - 0x30a60c
void SCElogoFade__FiP9mgCMemory_0x30a290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SCElogoFade__FiP9mgCMemory_0x30a290");
#endif

    switch (ctx->pc) {
        case 0x30a2bcu: goto label_30a2bc;
        case 0x30a2c4u: goto label_30a2c4;
        case 0x30a2ccu: goto label_30a2cc;
        case 0x30a2d4u: goto label_30a2d4;
        case 0x30a2e0u: goto label_30a2e0;
        case 0x30a2f0u: goto label_30a2f0;
        case 0x30a304u: goto label_30a304;
        case 0x30a310u: goto label_30a310;
        case 0x30a320u: goto label_30a320;
        case 0x30a32cu: goto label_30a32c;
        case 0x30a33cu: goto label_30a33c;
        case 0x30a348u: goto label_30a348;
        case 0x30a354u: goto label_30a354;
        case 0x30a364u: goto label_30a364;
        case 0x30a370u: goto label_30a370;
        case 0x30a384u: goto label_30a384;
        case 0x30a394u: goto label_30a394;
        case 0x30a3b0u: goto label_30a3b0;
        case 0x30a3b8u: goto label_30a3b8;
        case 0x30a3c8u: goto label_30a3c8;
        case 0x30a3d0u: goto label_30a3d0;
        case 0x30a3f8u: goto label_30a3f8;
        case 0x30a414u: goto label_30a414;
        case 0x30a434u: goto label_30a434;
        case 0x30a444u: goto label_30a444;
        case 0x30a458u: goto label_30a458;
        case 0x30a46cu: goto label_30a46c;
        case 0x30a474u: goto label_30a474;
        case 0x30a498u: goto label_30a498;
        case 0x30a4a0u: goto label_30a4a0;
        case 0x30a4b0u: goto label_30a4b0;
        case 0x30a4c4u: goto label_30a4c4;
        case 0x30a4d0u: goto label_30a4d0;
        case 0x30a4e0u: goto label_30a4e0;
        case 0x30a4ecu: goto label_30a4ec;
        case 0x30a4f8u: goto label_30a4f8;
        case 0x30a504u: goto label_30a504;
        case 0x30a554u: goto label_30a554;
        case 0x30a574u: goto label_30a574;
        case 0x30a584u: goto label_30a584;
        case 0x30a594u: goto label_30a594;
        case 0x30a5a8u: goto label_30a5a8;
        case 0x30a5b8u: goto label_30a5b8;
        case 0x30a5ccu: goto label_30a5cc;
        case 0x30a5d4u: goto label_30a5d4;
        case 0x30a5dcu: goto label_30a5dc;
        default: break;
    }

    ctx->pc = 0x30a290u;

    // 0x30a290: 0x27bdfdc0  addiu       $sp, $sp, -0x240
    ctx->pc = 0x30a290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966720));
    // 0x30a294: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x30a294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x30a298: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x30a298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x30a29c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x30a29cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x30a2a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30a2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30a2a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30a2a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30a2a8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x30a2a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a2ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30a2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30a2b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30a2b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a2b4: 0xc04e640  jal         func_139900
    ctx->pc = 0x30A2B4u;
    SET_GPR_U32(ctx, 31, 0x30A2BCu);
    ctx->pc = 0x30A2B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A2B4u;
            // 0x30a2b8: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A2BCu; }
        if (ctx->pc != 0x30A2BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A2BCu; }
        if (ctx->pc != 0x30A2BCu) { return; }
    }
    ctx->pc = 0x30A2BCu;
label_30a2bc:
    // 0x30a2bc: 0xc04e640  jal         func_139900
    ctx->pc = 0x30A2BCu;
    SET_GPR_U32(ctx, 31, 0x30A2C4u);
    ctx->pc = 0x30A2C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A2BCu;
            // 0x30a2c0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A2C4u; }
        if (ctx->pc != 0x30A2C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A2C4u; }
        if (ctx->pc != 0x30A2C4u) { return; }
    }
    ctx->pc = 0x30A2C4u;
label_30a2c4:
    // 0x30a2c4: 0xc04e640  jal         func_139900
    ctx->pc = 0x30A2C4u;
    SET_GPR_U32(ctx, 31, 0x30A2CCu);
    ctx->pc = 0x30A2C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A2C4u;
            // 0x30a2c8: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A2CCu; }
        if (ctx->pc != 0x30A2CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A2CCu; }
        if (ctx->pc != 0x30A2CCu) { return; }
    }
    ctx->pc = 0x30A2CCu;
label_30a2cc:
    // 0x30a2cc: 0xc04e640  jal         func_139900
    ctx->pc = 0x30A2CCu;
    SET_GPR_U32(ctx, 31, 0x30A2D4u);
    ctx->pc = 0x30A2D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A2CCu;
            // 0x30a2d0: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A2D4u; }
        if (ctx->pc != 0x30A2D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A2D4u; }
        if (ctx->pc != 0x30A2D4u) { return; }
    }
    ctx->pc = 0x30A2D4u;
label_30a2d4:
    // 0x30a2d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30a2d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a2d8: 0xc04e704  jal         func_139C10
    ctx->pc = 0x30A2D8u;
    SET_GPR_U32(ctx, 31, 0x30A2E0u);
    ctx->pc = 0x30A2DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A2D8u;
            // 0x30a2dc: 0x24052710  addiu       $a1, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A2E0u; }
        if (ctx->pc != 0x30A2E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A2E0u; }
        if (ctx->pc != 0x30A2E0u) { return; }
    }
    ctx->pc = 0x30A2E0u;
label_30a2e0:
    // 0x30a2e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x30a2e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a2e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30a2e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a2e8: 0xc04e704  jal         func_139C10
    ctx->pc = 0x30A2E8u;
    SET_GPR_U32(ctx, 31, 0x30A2F0u);
    ctx->pc = 0x30A2ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A2E8u;
            // 0x30a2ec: 0x24052710  addiu       $a1, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A2F0u; }
        if (ctx->pc != 0x30A2F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A2F0u; }
        if (ctx->pc != 0x30A2F0u) { return; }
    }
    ctx->pc = 0x30A2F0u;
label_30a2f0:
    // 0x30a2f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30a2f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a2f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30a2f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a2f8: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x30a2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x30a2fc: 0xc050784  jal         func_141E10
    ctx->pc = 0x30A2FCu;
    SET_GPR_U32(ctx, 31, 0x30A304u);
    ctx->pc = 0x30A300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A2FCu;
            // 0x30a300: 0x34467100  ori         $a2, $v0, 0x7100 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28928);
        ctx->in_delay_slot = false;
    ctx->pc = 0x141E10u;
    if (runtime->hasFunction(0x141E10u)) {
        auto targetFn = runtime->lookupFunction(0x141E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A304u; }
        if (ctx->pc != 0x30A304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgInitVif1Packet__FP1P1i_0x141e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A304u; }
        if (ctx->pc != 0x30A304u) { return; }
    }
    ctx->pc = 0x30A304u;
label_30a304:
    // 0x30a304: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30a304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a308: 0xc04e704  jal         func_139C10
    ctx->pc = 0x30A308u;
    SET_GPR_U32(ctx, 31, 0x30A310u);
    ctx->pc = 0x30A30Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A308u;
            // 0x30a30c: 0x24052710  addiu       $a1, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A310u; }
        if (ctx->pc != 0x30A310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A310u; }
        if (ctx->pc != 0x30A310u) { return; }
    }
    ctx->pc = 0x30A310u;
label_30a310:
    // 0x30a310: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30a310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a314: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x30a314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x30a318: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x30A318u;
    SET_GPR_U32(ctx, 31, 0x30A320u);
    ctx->pc = 0x30A31Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A318u;
            // 0x30a31c: 0x24062710  addiu       $a2, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A320u; }
        if (ctx->pc != 0x30A320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A320u; }
        if (ctx->pc != 0x30A320u) { return; }
    }
    ctx->pc = 0x30A320u;
label_30a320:
    // 0x30a320: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30a320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a324: 0xc04e704  jal         func_139C10
    ctx->pc = 0x30A324u;
    SET_GPR_U32(ctx, 31, 0x30A32Cu);
    ctx->pc = 0x30A328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A324u;
            // 0x30a328: 0x24052710  addiu       $a1, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A32Cu; }
        if (ctx->pc != 0x30A32Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A32Cu; }
        if (ctx->pc != 0x30A32Cu) { return; }
    }
    ctx->pc = 0x30A32Cu;
label_30a32c:
    // 0x30a32c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30a32cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a330: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x30a330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x30a334: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x30A334u;
    SET_GPR_U32(ctx, 31, 0x30A33Cu);
    ctx->pc = 0x30A338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A334u;
            // 0x30a338: 0x24062710  addiu       $a2, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A33Cu; }
        if (ctx->pc != 0x30A33Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A33Cu; }
        if (ctx->pc != 0x30A33Cu) { return; }
    }
    ctx->pc = 0x30A33Cu;
label_30a33c:
    // 0x30a33c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x30a33cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x30a340: 0xc0507bc  jal         func_141EF0
    ctx->pc = 0x30A340u;
    SET_GPR_U32(ctx, 31, 0x30A348u);
    ctx->pc = 0x30A344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A340u;
            // 0x30a344: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141EF0u;
    if (runtime->hasFunction(0x141EF0u)) {
        auto targetFn = runtime->lookupFunction(0x141EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A348u; }
        if (ctx->pc != 0x30A348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPacketBuffer__FP9mgCMemoryP9mgCMemory_0x141ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A348u; }
        if (ctx->pc != 0x30A348u) { return; }
    }
    ctx->pc = 0x30A348u;
label_30a348:
    // 0x30a348: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30a348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a34c: 0xc04e704  jal         func_139C10
    ctx->pc = 0x30A34Cu;
    SET_GPR_U32(ctx, 31, 0x30A354u);
    ctx->pc = 0x30A350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A34Cu;
            // 0x30a350: 0x24052710  addiu       $a1, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A354u; }
        if (ctx->pc != 0x30A354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A354u; }
        if (ctx->pc != 0x30A354u) { return; }
    }
    ctx->pc = 0x30A354u;
label_30a354:
    // 0x30a354: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30a354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a358: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x30a358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x30a35c: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x30A35Cu;
    SET_GPR_U32(ctx, 31, 0x30A364u);
    ctx->pc = 0x30A360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A35Cu;
            // 0x30a360: 0x24062710  addiu       $a2, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A364u; }
        if (ctx->pc != 0x30A364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A364u; }
        if (ctx->pc != 0x30A364u) { return; }
    }
    ctx->pc = 0x30A364u;
label_30a364:
    // 0x30a364: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30a364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a368: 0xc04e704  jal         func_139C10
    ctx->pc = 0x30A368u;
    SET_GPR_U32(ctx, 31, 0x30A370u);
    ctx->pc = 0x30A36Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A368u;
            // 0x30a36c: 0x24052710  addiu       $a1, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A370u; }
        if (ctx->pc != 0x30A370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A370u; }
        if (ctx->pc != 0x30A370u) { return; }
    }
    ctx->pc = 0x30A370u;
label_30a370:
    // 0x30a370: 0x27b100f0  addiu       $s1, $sp, 0xF0
    ctx->pc = 0x30a370u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x30a374: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30a374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a378: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30a378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a37c: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x30A37Cu;
    SET_GPR_U32(ctx, 31, 0x30A384u);
    ctx->pc = 0x30A380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A37Cu;
            // 0x30a380: 0x24062710  addiu       $a2, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A384u; }
        if (ctx->pc != 0x30A384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A384u; }
        if (ctx->pc != 0x30A384u) { return; }
    }
    ctx->pc = 0x30A384u;
label_30a384:
    // 0x30a384: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x30a384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a388: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x30a388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x30a38c: 0xc050810  jal         func_142040
    ctx->pc = 0x30A38Cu;
    SET_GPR_U32(ctx, 31, 0x30A394u);
    ctx->pc = 0x30A390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A38Cu;
            // 0x30a390: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142040u;
    if (runtime->hasFunction(0x142040u)) {
        auto targetFn = runtime->lookupFunction(0x142040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A394u; }
        if (ctx->pc != 0x30A394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetDataBuffer__FP9mgCMemoryP9mgCMemoryi_0x142040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A394u; }
        if (ctx->pc != 0x30A394u) { return; }
    }
    ctx->pc = 0x30A394u;
label_30a394:
    // 0x30a394: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x30a394u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
    // 0x30a398: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x30a398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x30a39c: 0x26311ef0  addiu       $s1, $s1, 0x1EF0
    ctx->pc = 0x30a39cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 7920));
    // 0x30a3a0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x30a3a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a3a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30a3a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a3a8: 0xc04b20c  jal         func_12C830
    ctx->pc = 0x30A3A8u;
    SET_GPR_U32(ctx, 31, 0x30A3B0u);
    ctx->pc = 0x30A3ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A3A8u;
            // 0x30a3ac: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C830u;
    if (runtime->hasFunction(0x12C830u)) {
        auto targetFn = runtime->lookupFunction(0x12C830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A3B0u; }
        if (ctx->pc != 0x30A3B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTableBuffer__17mgCTextureManagerFiiP9mgCMemory_0x12c830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A3B0u; }
        if (ctx->pc != 0x30A3B0u) { return; }
    }
    ctx->pc = 0x30A3B0u;
label_30a3b0:
    // 0x30a3b0: 0xc050848  jal         func_142120
    ctx->pc = 0x30A3B0u;
    SET_GPR_U32(ctx, 31, 0x30A3B8u);
    ctx->pc = 0x142120u;
    if (runtime->hasFunction(0x142120u)) {
        auto targetFn = runtime->lookupFunction(0x142120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A3B8u; }
        if (ctx->pc != 0x30A3B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetTopVRAMAddress__Fv_0x142120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A3B8u; }
        if (ctx->pc != 0x30A3B8u) { return; }
    }
    ctx->pc = 0x30A3B8u;
label_30a3b8:
    // 0x30a3b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30a3b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a3bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30a3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a3c0: 0xc04b2b4  jal         func_12CAD0
    ctx->pc = 0x30A3C0u;
    SET_GPR_U32(ctx, 31, 0x30A3C8u);
    ctx->pc = 0x30A3C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A3C0u;
            // 0x30a3c4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12CAD0u;
    if (runtime->hasFunction(0x12CAD0u)) {
        auto targetFn = runtime->lookupFunction(0x12CAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A3C8u; }
        if (ctx->pc != 0x30A3C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__17mgCTextureManagerFii_0x12cad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A3C8u; }
        if (ctx->pc != 0x30A3C8u) { return; }
    }
    ctx->pc = 0x30A3C8u;
label_30a3c8:
    // 0x30a3c8: 0xc04e780  jal         func_139E00
    ctx->pc = 0x30A3C8u;
    SET_GPR_U32(ctx, 31, 0x30A3D0u);
    ctx->pc = 0x30A3CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A3C8u;
            // 0x30a3cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A3D0u; }
        if (ctx->pc != 0x30A3D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A3D0u; }
        if (ctx->pc != 0x30A3D0u) { return; }
    }
    ctx->pc = 0x30A3D0u;
label_30a3d0:
    // 0x30a3d0: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x30a3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x30a3d4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x30a3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x30a3d8: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x30a3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x30a3dc: 0x248424a0  addiu       $a0, $a0, 0x24A0
    ctx->pc = 0x30a3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9376));
    // 0x30a3e0: 0x27a6023c  addiu       $a2, $sp, 0x23C
    ctx->pc = 0x30a3e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 572));
    // 0x30a3e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30a3e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a3e8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x30a3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30a3ec: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x30a3ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30a3f0: 0xc0524dc  jal         func_149370
    ctx->pc = 0x30A3F0u;
    SET_GPR_U32(ctx, 31, 0x30A3F8u);
    ctx->pc = 0x30A3F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A3F0u;
            // 0x30a3f4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A3F8u; }
        if (ctx->pc != 0x30A3F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A3F8u; }
        if (ctx->pc != 0x30A3F8u) { return; }
    }
    ctx->pc = 0x30A3F8u;
label_30a3f8:
    // 0x30a3f8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x30A3F8u;
    {
        const bool branch_taken_0x30a3f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A3FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A3F8u;
            // 0x30a3fc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a3f8) {
            ctx->pc = 0x30A434u;
            goto label_30a434;
        }
    }
    ctx->pc = 0x30A400u;
    // 0x30a400: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30a400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a404: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30a404u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a408: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30a408u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a40c: 0xc04b6a4  jal         func_12DA90
    ctx->pc = 0x30A40Cu;
    SET_GPR_U32(ctx, 31, 0x30A414u);
    ctx->pc = 0x30A410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A40Cu;
            // 0x30a410: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A414u; }
        if (ctx->pc != 0x30A414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A414u; }
        if (ctx->pc != 0x30A414u) { return; }
    }
    ctx->pc = 0x30A414u;
label_30a414:
    // 0x30a414: 0x8fa3023c  lw          $v1, 0x23C($sp)
    ctx->pc = 0x30a414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
    // 0x30a418: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30A418u;
    {
        const bool branch_taken_0x30a418 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x30A41Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A418u;
            // 0x30a41c: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a418) {
            ctx->pc = 0x30A428u;
            goto label_30a428;
        }
    }
    ctx->pc = 0x30A420u;
    // 0x30a420: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x30a420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x30a424: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x30a424u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_30a428:
    // 0x30a428: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x30a428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30a42c: 0xc04e748  jal         func_139D20
    ctx->pc = 0x30A42Cu;
    SET_GPR_U32(ctx, 31, 0x30A434u);
    ctx->pc = 0x30A430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A42Cu;
            // 0x30a430: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A434u; }
        if (ctx->pc != 0x30A434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A434u; }
        if (ctx->pc != 0x30A434u) { return; }
    }
    ctx->pc = 0x30A434u;
label_30a434:
    // 0x30a434: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30A434u;
    {
        const bool branch_taken_0x30a434 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x30a434) {
            ctx->pc = 0x30A44Cu;
            goto label_30a44c;
        }
    }
    ctx->pc = 0x30A43Cu;
    // 0x30a43c: 0xc0504c4  jal         func_141310
    ctx->pc = 0x30A43Cu;
    SET_GPR_U32(ctx, 31, 0x30A444u);
    ctx->pc = 0x141310u;
    if (runtime->hasFunction(0x141310u)) {
        auto targetFn = runtime->lookupFunction(0x141310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A444u; }
        if (ctx->pc != 0x30A444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetVSyncCount__Fv_0x141310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A444u; }
        if (ctx->pc != 0x30A444u) { return; }
    }
    ctx->pc = 0x30A444u;
label_30a444:
    // 0x30a444: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x30A444u;
    {
        const bool branch_taken_0x30a444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A444u;
            // 0x30a448: 0xaf82a1d0  sw          $v0, -0x5E30($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a444) {
            ctx->pc = 0x30A48Cu;
            goto label_30a48c;
        }
    }
    ctx->pc = 0x30A44Cu;
label_30a44c:
    // 0x30a44c: 0x8f82a1d0  lw          $v0, -0x5E30($gp)
    ctx->pc = 0x30a44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943184)));
    // 0x30a450: 0xc0504c4  jal         func_141310
    ctx->pc = 0x30A450u;
    SET_GPR_U32(ctx, 31, 0x30A458u);
    ctx->pc = 0x30A454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A450u;
            // 0x30a454: 0x2452012c  addiu       $s2, $v0, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141310u;
    if (runtime->hasFunction(0x141310u)) {
        auto targetFn = runtime->lookupFunction(0x141310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A458u; }
        if (ctx->pc != 0x30A458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetVSyncCount__Fv_0x141310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A458u; }
        if (ctx->pc != 0x30A458u) { return; }
    }
    ctx->pc = 0x30A458u;
label_30a458:
    // 0x30a458: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x30a458u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x30a45c: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x30A45Cu;
    {
        const bool branch_taken_0x30a45c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x30A460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A45Cu;
            // 0x30a460: 0x2841012c  slti        $at, $v0, 0x12C (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)300) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a45c) {
            ctx->pc = 0x30A48Cu;
            goto label_30a48c;
        }
    }
    ctx->pc = 0x30A464u;
    // 0x30a464: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x30A464u;
    {
        const bool branch_taken_0x30a464 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A464u;
            // 0x30a468: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a464) {
            ctx->pc = 0x30A48Cu;
            goto label_30a48c;
        }
    }
    ctx->pc = 0x30A46Cu;
label_30a46c:
    // 0x30a46c: 0xc040cc0  jal         func_103300
    ctx->pc = 0x30A46Cu;
    SET_GPR_U32(ctx, 31, 0x30A474u);
    ctx->pc = 0x30A470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A46Cu;
            // 0x30a470: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103300u;
    if (runtime->hasFunction(0x103300u)) {
        auto targetFn = runtime->lookupFunction(0x103300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A474u; }
        if (ctx->pc != 0x30A474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncV_0x103300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A474u; }
        if (ctx->pc != 0x30A474u) { return; }
    }
    ctx->pc = 0x30A474u;
label_30a474:
    // 0x30a474: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x30a474u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x30a478: 0x2a420041  slti        $v0, $s2, 0x41
    ctx->pc = 0x30a478u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)65) ? 1 : 0);
    // 0x30a47c: 0x0  nop
    ctx->pc = 0x30a47cu;
    // NOP
    // 0x30a480: 0x0  nop
    ctx->pc = 0x30a480u;
    // NOP
    // 0x30a484: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x30A484u;
    {
        const bool branch_taken_0x30a484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30a484) {
            ctx->pc = 0x30A46Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30a46c;
        }
    }
    ctx->pc = 0x30A48Cu;
label_30a48c:
    // 0x30a48c: 0x0  nop
    ctx->pc = 0x30a48cu;
    // NOP
    // 0x30a490: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x30a490u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a494: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x30a494u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30a498:
    // 0x30a498: 0xc050878  jal         func_1421E0
    ctx->pc = 0x30A498u;
    SET_GPR_U32(ctx, 31, 0x30A4A0u);
    ctx->pc = 0x30A49Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A498u;
            // 0x30a49c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1421E0u;
    if (runtime->hasFunction(0x1421E0u)) {
        auto targetFn = runtime->lookupFunction(0x1421E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A4A0u; }
        if (ctx->pc != 0x30A4A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgBeginFrame__FP14mgCDrawManager_0x1421e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A4A0u; }
        if (ctx->pc != 0x30A4A0u) { return; }
    }
    ctx->pc = 0x30A4A0u;
label_30a4a0:
    // 0x30a4a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30a4a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a4a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30a4a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a4a8: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x30A4A8u;
    SET_GPR_U32(ctx, 31, 0x30A4B0u);
    ctx->pc = 0x30A4ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A4A8u;
            // 0x30a4ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A4B0u; }
        if (ctx->pc != 0x30A4B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A4B0u; }
        if (ctx->pc != 0x30A4B0u) { return; }
    }
    ctx->pc = 0x30A4B0u;
label_30a4b0:
    // 0x30a4b0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x30a4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x30a4b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30a4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a4b8: 0x24a524b8  addiu       $a1, $a1, 0x24B8
    ctx->pc = 0x30a4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9400));
    // 0x30a4bc: 0xc04b414  jal         func_12D050
    ctx->pc = 0x30A4BCu;
    SET_GPR_U32(ctx, 31, 0x30A4C4u);
    ctx->pc = 0x30A4C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A4BCu;
            // 0x30a4c0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A4C4u; }
        if (ctx->pc != 0x30A4C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A4C4u; }
        if (ctx->pc != 0x30A4C4u) { return; }
    }
    ctx->pc = 0x30A4C4u;
label_30a4c4:
    // 0x30a4c4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x30a4c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a4c8: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x30A4C8u;
    SET_GPR_U32(ctx, 31, 0x30A4D0u);
    ctx->pc = 0x30A4CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A4C8u;
            // 0x30a4cc: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A4D0u; }
        if (ctx->pc != 0x30A4D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A4D0u; }
        if (ctx->pc != 0x30A4D0u) { return; }
    }
    ctx->pc = 0x30A4D0u;
label_30a4d0:
    // 0x30a4d0: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x30a4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x30a4d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30a4d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a4d8: 0xc04d104  jal         func_134410
    ctx->pc = 0x30A4D8u;
    SET_GPR_U32(ctx, 31, 0x30A4E0u);
    ctx->pc = 0x30A4DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A4D8u;
            // 0x30a4dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A4E0u; }
        if (ctx->pc != 0x30A4E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A4E0u; }
        if (ctx->pc != 0x30A4E0u) { return; }
    }
    ctx->pc = 0x30A4E0u;
label_30a4e0:
    // 0x30a4e0: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x30a4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x30a4e4: 0xc04d3b0  jal         func_134EC0
    ctx->pc = 0x30A4E4u;
    SET_GPR_U32(ctx, 31, 0x30A4ECu);
    ctx->pc = 0x30A4E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A4E4u;
            // 0x30a4e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A4ECu; }
        if (ctx->pc != 0x30A4ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A4ECu; }
        if (ctx->pc != 0x30A4ECu) { return; }
    }
    ctx->pc = 0x30A4ECu;
label_30a4ec:
    // 0x30a4ec: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x30a4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x30a4f0: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x30A4F0u;
    SET_GPR_U32(ctx, 31, 0x30A4F8u);
    ctx->pc = 0x30A4F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A4F0u;
            // 0x30a4f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A4F8u; }
        if (ctx->pc != 0x30A4F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A4F8u; }
        if (ctx->pc != 0x30A4F8u) { return; }
    }
    ctx->pc = 0x30A4F8u;
label_30a4f8:
    // 0x30a4f8: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x30a4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x30a4fc: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x30A4FCu;
    SET_GPR_U32(ctx, 31, 0x30A504u);
    ctx->pc = 0x30A500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A4FCu;
            // 0x30a500: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A504u; }
        if (ctx->pc != 0x30A504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A504u; }
        if (ctx->pc != 0x30A504u) { return; }
    }
    ctx->pc = 0x30A504u;
label_30a504:
    // 0x30a504: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x30a504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x30a508: 0x141fc2  srl         $v1, $s4, 31
    ctx->pc = 0x30a508u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 20), 31));
    // 0x30a50c: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x30a50cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x30a510: 0x540018  mult        $zero, $v0, $s4
    ctx->pc = 0x30a510u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x30a514: 0x0  nop
    ctx->pc = 0x30a514u;
    // NOP
    // 0x30a518: 0x0  nop
    ctx->pc = 0x30a518u;
    // NOP
    // 0x30a51c: 0x1010  mfhi        $v0
    ctx->pc = 0x30a51cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x30a520: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x30a520u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x30a524: 0x434021  addu        $t0, $v0, $v1
    ctx->pc = 0x30a524u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30a528: 0x29010081  slti        $at, $t0, 0x81
    ctx->pc = 0x30a528u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x30a52c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x30A52Cu;
    {
        const bool branch_taken_0x30a52c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x30a52c) {
            ctx->pc = 0x30A538u;
            goto label_30a538;
        }
    }
    ctx->pc = 0x30A534u;
    // 0x30a534: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x30a534u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_30a538:
    // 0x30a538: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x30A538u;
    {
        const bool branch_taken_0x30a538 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A53Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A538u;
            // 0x30a53c: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a538) {
            ctx->pc = 0x30A55Cu;
            goto label_30a55c;
        }
    }
    ctx->pc = 0x30A540u;
    // 0x30a540: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x30a540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x30a544: 0xa84023  subu        $t0, $a1, $t0
    ctx->pc = 0x30a544u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x30a548: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x30a548u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a54c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x30A54Cu;
    SET_GPR_U32(ctx, 31, 0x30A554u);
    ctx->pc = 0x30A550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A54Cu;
            // 0x30a550: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A554u; }
        if (ctx->pc != 0x30A554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A554u; }
        if (ctx->pc != 0x30A554u) { return; }
    }
    ctx->pc = 0x30A554u;
label_30a554:
    // 0x30a554: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30A554u;
    {
        const bool branch_taken_0x30a554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a554) {
            ctx->pc = 0x30A574u;
            goto label_30a574;
        }
    }
    ctx->pc = 0x30A55Cu;
label_30a55c:
    // 0x30a55c: 0x0  nop
    ctx->pc = 0x30a55cu;
    // NOP
    // 0x30a560: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x30a560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x30a564: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x30a564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x30a568: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x30a568u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a56c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x30A56Cu;
    SET_GPR_U32(ctx, 31, 0x30A574u);
    ctx->pc = 0x30A570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A56Cu;
            // 0x30a570: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A574u; }
        if (ctx->pc != 0x30A574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A574u; }
        if (ctx->pc != 0x30A574u) { return; }
    }
    ctx->pc = 0x30A574u;
label_30a574:
    // 0x30a574: 0x0  nop
    ctx->pc = 0x30a574u;
    // NOP
    // 0x30a578: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x30a578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a57c: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x30A57Cu;
    SET_GPR_U32(ctx, 31, 0x30A584u);
    ctx->pc = 0x30A580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A57Cu;
            // 0x30a580: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A584u; }
        if (ctx->pc != 0x30A584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A584u; }
        if (ctx->pc != 0x30A584u) { return; }
    }
    ctx->pc = 0x30A584u;
label_30a584:
    // 0x30a584: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x30a584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x30a588: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30a588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a58c: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x30A58Cu;
    SET_GPR_U32(ctx, 31, 0x30A594u);
    ctx->pc = 0x30A590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A58Cu;
            // 0x30a590: 0x24060144  addiu       $a2, $zero, 0x144 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 324));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A594u; }
        if (ctx->pc != 0x30A594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A594u; }
        if (ctx->pc != 0x30A594u) { return; }
    }
    ctx->pc = 0x30A594u;
label_30a594:
    // 0x30a594: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x30a594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x30a598: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30a598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a59c: 0x240600b0  addiu       $a2, $zero, 0xB0
    ctx->pc = 0x30a59cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x30a5a0: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x30A5A0u;
    SET_GPR_U32(ctx, 31, 0x30A5A8u);
    ctx->pc = 0x30A5A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A5A0u;
            // 0x30a5a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A5A8u; }
        if (ctx->pc != 0x30A5A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A5A8u; }
        if (ctx->pc != 0x30A5A8u) { return; }
    }
    ctx->pc = 0x30A5A8u;
label_30a5a8:
    // 0x30a5a8: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x30a5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x30a5ac: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x30a5acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x30a5b0: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x30A5B0u;
    SET_GPR_U32(ctx, 31, 0x30A5B8u);
    ctx->pc = 0x30A5B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A5B0u;
            // 0x30a5b4: 0x24060180  addiu       $a2, $zero, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A5B8u; }
        if (ctx->pc != 0x30A5B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A5B8u; }
        if (ctx->pc != 0x30A5B8u) { return; }
    }
    ctx->pc = 0x30A5B8u;
label_30a5b8:
    // 0x30a5b8: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x30a5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x30a5bc: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x30a5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x30a5c0: 0x240600ec  addiu       $a2, $zero, 0xEC
    ctx->pc = 0x30a5c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
    // 0x30a5c4: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x30A5C4u;
    SET_GPR_U32(ctx, 31, 0x30A5CCu);
    ctx->pc = 0x30A5C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A5C4u;
            // 0x30a5c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A5CCu; }
        if (ctx->pc != 0x30A5CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A5CCu; }
        if (ctx->pc != 0x30A5CCu) { return; }
    }
    ctx->pc = 0x30A5CCu;
label_30a5cc:
    // 0x30a5cc: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x30A5CCu;
    SET_GPR_U32(ctx, 31, 0x30A5D4u);
    ctx->pc = 0x30A5D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A5CCu;
            // 0x30a5d0: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A5D4u; }
        if (ctx->pc != 0x30A5D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A5D4u; }
        if (ctx->pc != 0x30A5D4u) { return; }
    }
    ctx->pc = 0x30A5D4u;
label_30a5d4:
    // 0x30a5d4: 0xc05096c  jal         func_1425B0
    ctx->pc = 0x30A5D4u;
    SET_GPR_U32(ctx, 31, 0x30A5DCu);
    ctx->pc = 0x30A5D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A5D4u;
            // 0x30a5d8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1425B0u;
    if (runtime->hasFunction(0x1425B0u)) {
        auto targetFn = runtime->lookupFunction(0x1425B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A5DCu; }
        if (ctx->pc != 0x30A5DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgEndFrame__FP14mgCDrawManager_0x1425b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A5DCu; }
        if (ctx->pc != 0x30A5DCu) { return; }
    }
    ctx->pc = 0x30A5DCu;
label_30a5dc:
    // 0x30a5dc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x30a5dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x30a5e0: 0x2a410017  slti        $at, $s2, 0x17
    ctx->pc = 0x30a5e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x30a5e4: 0x1420ffac  bnez        $at, . + 4 + (-0x54 << 2)
    ctx->pc = 0x30A5E4u;
    {
        const bool branch_taken_0x30a5e4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A5E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A5E4u;
            // 0x30a5e8: 0x26940080  addiu       $s4, $s4, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a5e4) {
            ctx->pc = 0x30A498u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30a498;
        }
    }
    ctx->pc = 0x30A5ECu;
    // 0x30a5ec: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x30a5ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30a5f0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x30a5f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30a5f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x30a5f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30a5f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30a5f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30a5fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30a5fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30a600: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30a600u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30a604: 0x3e00008  jr          $ra
    ctx->pc = 0x30A604u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30A608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A604u;
            // 0x30a608: 0x27bd0240  addiu       $sp, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30A60Cu;
}
