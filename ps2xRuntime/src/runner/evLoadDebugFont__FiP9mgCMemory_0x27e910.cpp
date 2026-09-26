#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: evLoadDebugFont__FiP9mgCMemory
// Address: 0x27e910 - 0x27ea1c
void evLoadDebugFont__FiP9mgCMemory_0x27e910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("evLoadDebugFont__FiP9mgCMemory_0x27e910");
#endif

    switch (ctx->pc) {
        case 0x27e940u: goto label_27e940;
        case 0x27e94cu: goto label_27e94c;
        case 0x27e968u: goto label_27e968;
        case 0x27e990u: goto label_27e990;
        case 0x27e9b0u: goto label_27e9b0;
        case 0x27e9bcu: goto label_27e9bc;
        case 0x27e9e8u: goto label_27e9e8;
        case 0x27e9f4u: goto label_27e9f4;
        default: break;
    }

    ctx->pc = 0x27e910u;

    // 0x27e910: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x27e910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x27e914: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x27e914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x27e918: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27e918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x27e91c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27e91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x27e920: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x27e920u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e924: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27e924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27e928: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x27e928u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e92c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27e92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27e930: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27e930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e934: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x27e934u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x27e938: 0xc04e780  jal         func_139E00
    ctx->pc = 0x27E938u;
    SET_GPR_U32(ctx, 31, 0x27E940u);
    ctx->pc = 0x27E93Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E938u;
            // 0x27e93c: 0x26101ef0  addiu       $s0, $s0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E940u; }
        if (ctx->pc != 0x27E940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E940u; }
        if (ctx->pc != 0x27E940u) { return; }
    }
    ctx->pc = 0x27E940u;
label_27e940:
    // 0x27e940: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27e940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e944: 0xc04e714  jal         func_139C50
    ctx->pc = 0x27E944u;
    SET_GPR_U32(ctx, 31, 0x27E94Cu);
    ctx->pc = 0x27E948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E944u;
            // 0x27e948: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C50u;
    if (runtime->hasFunction(0x139C50u)) {
        auto targetFn = runtime->lookupFunction(0x139C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E94Cu; }
        if (ctx->pc != 0x27E94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAllocTest__9mgCMemoryFi_0x139c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E94Cu; }
        if (ctx->pc != 0x27E94Cu) { return; }
    }
    ctx->pc = 0x27E94Cu;
label_27e94c:
    // 0x27e94c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27e94cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e950: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x27e950u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x27e954: 0x2484cf18  addiu       $a0, $a0, -0x30E8
    ctx->pc = 0x27e954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954776));
    // 0x27e958: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27e958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e95c: 0x27a6005c  addiu       $a2, $sp, 0x5C
    ctx->pc = 0x27e95cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x27e960: 0xc0524dc  jal         func_149370
    ctx->pc = 0x27E960u;
    SET_GPR_U32(ctx, 31, 0x27E968u);
    ctx->pc = 0x27E964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E960u;
            // 0x27e964: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E968u; }
        if (ctx->pc != 0x27E968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E968u; }
        if (ctx->pc != 0x27E968u) { return; }
    }
    ctx->pc = 0x27E968u;
label_27e968:
    // 0x27e968: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x27E968u;
    {
        const bool branch_taken_0x27e968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e968) {
            ctx->pc = 0x27E9B0u;
            goto label_27e9b0;
        }
    }
    ctx->pc = 0x27E970u;
    // 0x27e970: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x27e970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x27e974: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27E974u;
    {
        const bool branch_taken_0x27e974 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x27E978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E974u;
            // 0x27e978: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e974) {
            ctx->pc = 0x27E984u;
            goto label_27e984;
        }
    }
    ctx->pc = 0x27E97Cu;
    // 0x27e97c: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x27e97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x27e980: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x27e980u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_27e984:
    // 0x27e984: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x27e984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27e988: 0xc04e748  jal         func_139D20
    ctx->pc = 0x27E988u;
    SET_GPR_U32(ctx, 31, 0x27E990u);
    ctx->pc = 0x27E98Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E988u;
            // 0x27e98c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E990u; }
        if (ctx->pc != 0x27E990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E990u; }
        if (ctx->pc != 0x27E990u) { return; }
    }
    ctx->pc = 0x27E990u;
label_27e990:
    // 0x27e990: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x27e990u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x27e994: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27e994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e998: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x27e998u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e99c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x27e99cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e9a0: 0x24c6cf28  addiu       $a2, $a2, -0x30D8
    ctx->pc = 0x27e9a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954792));
    // 0x27e9a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27e9a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e9a8: 0xc04b628  jal         func_12D8A0
    ctx->pc = 0x27E9A8u;
    SET_GPR_U32(ctx, 31, 0x27E9B0u);
    ctx->pc = 0x27E9ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E9A8u;
            // 0x27e9ac: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D8A0u;
    if (runtime->hasFunction(0x12D8A0u)) {
        auto targetFn = runtime->lookupFunction(0x12D8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E9B0u; }
        if (ctx->pc != 0x27E9B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterTexture__17mgCTextureManagerFiPcP8TM2_headii_0x12d8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E9B0u; }
        if (ctx->pc != 0x27E9B0u) { return; }
    }
    ctx->pc = 0x27E9B0u;
label_27e9b0:
    // 0x27e9b0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x27e9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x27e9b4: 0xc0618a4  jal         func_186290
    ctx->pc = 0x27E9B4u;
    SET_GPR_U32(ctx, 31, 0x27E9BCu);
    ctx->pc = 0x27E9B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E9B4u;
            // 0x27e9b8: 0x248407e0  addiu       $a0, $a0, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186290u;
    if (runtime->hasFunction(0x186290u)) {
        auto targetFn = runtime->lookupFunction(0x186290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E9BCu; }
        if (ctx->pc != 0x27E9BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11dbgCJISFontFv_0x186290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E9BCu; }
        if (ctx->pc != 0x27E9BCu) { return; }
    }
    ctx->pc = 0x27E9BCu;
label_27e9bc:
    // 0x27e9bc: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x27e9bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x27e9c0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x27e9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x27e9c4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x27e9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27e9c8: 0x24c6cf30  addiu       $a2, $a2, -0x30D0
    ctx->pc = 0x27e9c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954800));
    // 0x27e9cc: 0x3c0a0037  lui         $t2, 0x37
    ctx->pc = 0x27e9ccu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)55 << 16));
    // 0x27e9d0: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x27e9d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e9d4: 0x248407e0  addiu       $a0, $a0, 0x7E0
    ctx->pc = 0x27e9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
    // 0x27e9d8: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x27e9d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e9dc: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x27e9dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e9e0: 0xc0618c0  jal         func_186300
    ctx->pc = 0x27E9E0u;
    SET_GPR_U32(ctx, 31, 0x27E9E8u);
    ctx->pc = 0x27E9E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E9E0u;
            // 0x27e9e4: 0x254acf28  addiu       $t2, $t2, -0x30D8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294954792));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186300u;
    if (runtime->hasFunction(0x186300u)) {
        auto targetFn = runtime->lookupFunction(0x186300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E9E8u; }
        if (ctx->pc != 0x27E9E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitTexture__11dbgCJISFontFiPciPciPc_0x186300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E9E8u; }
        if (ctx->pc != 0x27E9E8u) { return; }
    }
    ctx->pc = 0x27E9E8u;
label_27e9e8:
    // 0x27e9e8: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x27e9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x27e9ec: 0xc0618dc  jal         func_186370
    ctx->pc = 0x27E9ECu;
    SET_GPR_U32(ctx, 31, 0x27E9F4u);
    ctx->pc = 0x27E9F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E9ECu;
            // 0x27e9f0: 0x248407e0  addiu       $a0, $a0, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186370u;
    if (runtime->hasFunction(0x186370u)) {
        auto targetFn = runtime->lookupFunction(0x186370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E9F4u; }
        if (ctx->pc != 0x27E9F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Clear__11dbgCJISFontFv_0x186370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E9F4u; }
        if (ctx->pc != 0x27E9F4u) { return; }
    }
    ctx->pc = 0x27E9F4u;
label_27e9f4:
    // 0x27e9f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27e9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27e9f8: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x27e9f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x27e9fc: 0xac23108c  sw          $v1, 0x108C($at)
    ctx->pc = 0x27e9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4236), GPR_U32(ctx, 3));
    // 0x27ea00: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x27ea00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27ea04: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27ea04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27ea08: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27ea08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27ea0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27ea0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ea10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27ea10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27ea14: 0x3e00008  jr          $ra
    ctx->pc = 0x27EA14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27EA18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EA14u;
            // 0x27ea18: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27EA1Cu;
}
