#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FishIMGReplace__FP1P11CCharacter2iP14BREEDFISH_USED
// Address: 0x211d50 - 0x211e4c
void FishIMGReplace__FP1P11CCharacter2iP14BREEDFISH_USED_0x211d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FishIMGReplace__FP1P11CCharacter2iP14BREEDFISH_USED_0x211d50");
#endif

    switch (ctx->pc) {
        case 0x211db0u: goto label_211db0;
        case 0x211dc0u: goto label_211dc0;
        case 0x211dc8u: goto label_211dc8;
        case 0x211ddcu: goto label_211ddc;
        case 0x211df8u: goto label_211df8;
        case 0x211e08u: goto label_211e08;
        case 0x211e24u: goto label_211e24;
        case 0x211e30u: goto label_211e30;
        default: break;
    }

    ctx->pc = 0x211d50u;

    // 0x211d50: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x211d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x211d54: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x211d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x211d58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x211d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x211d5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x211d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x211d60: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x211d60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211d64: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x211d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x211d68: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x211D68u;
    {
        const bool branch_taken_0x211d68 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x211D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211D68u;
            // 0x211d6c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211d68) {
            ctx->pc = 0x211D80u;
            goto label_211d80;
        }
    }
    ctx->pc = 0x211D70u;
    // 0x211d70: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x211D70u;
    {
        const bool branch_taken_0x211d70 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x211D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211D70u;
            // 0x211d74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211d70) {
            ctx->pc = 0x211D84u;
            goto label_211d84;
        }
    }
    ctx->pc = 0x211D78u;
    // 0x211d78: 0x14e00004  bnez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x211D78u;
    {
        const bool branch_taken_0x211d78 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x211d78) {
            ctx->pc = 0x211D8Cu;
            goto label_211d8c;
        }
    }
    ctx->pc = 0x211D80u;
label_211d80:
    // 0x211d80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x211d80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_211d84:
    // 0x211d84: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x211D84u;
    {
        const bool branch_taken_0x211d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211D84u;
            // 0x211d88: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211d84) {
            ctx->pc = 0x211E38u;
            goto label_211e38;
        }
    }
    ctx->pc = 0x211D8Cu;
label_211d8c:
    // 0x211d8c: 0x94e20038  lhu         $v0, 0x38($a3)
    ctx->pc = 0x211d8cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x211d90: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x211d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x211d94: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x211D94u;
    {
        const bool branch_taken_0x211d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211D94u;
            // 0x211d98: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211d94) {
            ctx->pc = 0x211DA4u;
            goto label_211da4;
        }
    }
    ctx->pc = 0x211D9Cu;
    // 0x211d9c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x211D9Cu;
    {
        const bool branch_taken_0x211d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211D9Cu;
            // 0x211da0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211d9c) {
            ctx->pc = 0x211E34u;
            goto label_211e34;
        }
    }
    ctx->pc = 0x211DA4u;
label_211da4:
    // 0x211da4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x211da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x211da8: 0xc084714  jal         func_211C50
    ctx->pc = 0x211DA8u;
    SET_GPR_U32(ctx, 31, 0x211DB0u);
    ctx->pc = 0x211DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211DA8u;
            // 0x211dac: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211C50u;
    if (runtime->hasFunction(0x211C50u)) {
        auto targetFn = runtime->lookupFunction(0x211C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211DB0u; }
        if (ctx->pc != 0x211DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFishImgPath__FPciP14BREEDFISH_USED_0x211c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211DB0u; }
        if (ctx->pc != 0x211DB0u) { return; }
    }
    ctx->pc = 0x211DB0u;
label_211db0:
    // 0x211db0: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x211DB0u;
    {
        const bool branch_taken_0x211db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211DB0u;
            // 0x211db4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211db0) {
            ctx->pc = 0x211E34u;
            goto label_211e34;
        }
    }
    ctx->pc = 0x211DB8u;
    // 0x211db8: 0xc0521f0  jal         func_1487C0
    ctx->pc = 0x211DB8u;
    SET_GPR_U32(ctx, 31, 0x211DC0u);
    ctx->pc = 0x211DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211DB8u;
            // 0x211dbc: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1487C0u;
    if (runtime->hasFunction(0x1487C0u)) {
        auto targetFn = runtime->lookupFunction(0x1487C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211DC0u; }
        if (ctx->pc != 0x211DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCurrentDir__FPc_0x1487c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211DC0u; }
        if (ctx->pc != 0x211DC0u) { return; }
    }
    ctx->pc = 0x211DC0u;
label_211dc0:
    // 0x211dc0: 0xc0521d8  jal         func_148760
    ctx->pc = 0x211DC0u;
    SET_GPR_U32(ctx, 31, 0x211DC8u);
    ctx->pc = 0x211DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211DC0u;
            // 0x211dc4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148760u;
    if (runtime->hasFunction(0x148760u)) {
        auto targetFn = runtime->lookupFunction(0x148760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211DC8u; }
        if (ctx->pc != 0x211DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCurrentDir__FPc_0x148760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211DC8u; }
        if (ctx->pc != 0x211DC8u) { return; }
    }
    ctx->pc = 0x211DC8u;
label_211dc8:
    // 0x211dc8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x211dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x211dcc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x211dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211dd0: 0x27a6012c  addiu       $a2, $sp, 0x12C
    ctx->pc = 0x211dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
    // 0x211dd4: 0xc0524dc  jal         func_149370
    ctx->pc = 0x211DD4u;
    SET_GPR_U32(ctx, 31, 0x211DDCu);
    ctx->pc = 0x211DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211DD4u;
            // 0x211dd8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211DDCu; }
        if (ctx->pc != 0x211DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211DDCu; }
        if (ctx->pc != 0x211DDCu) { return; }
    }
    ctx->pc = 0x211DDCu;
label_211ddc:
    // 0x211ddc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x211DDCu;
    {
        const bool branch_taken_0x211ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211DDCu;
            // 0x211de0: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211ddc) {
            ctx->pc = 0x211E28u;
            goto label_211e28;
        }
    }
    ctx->pc = 0x211DE4u;
    // 0x211de4: 0x8e2502e4  lw          $a1, 0x2E4($s1)
    ctx->pc = 0x211de4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 740)));
    // 0x211de8: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x211de8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x211dec: 0x8e3002c4  lw          $s0, 0x2C4($s1)
    ctx->pc = 0x211decu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 708)));
    // 0x211df0: 0xc04b950  jal         func_12E540
    ctx->pc = 0x211DF0u;
    SET_GPR_U32(ctx, 31, 0x211DF8u);
    ctx->pc = 0x211DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211DF0u;
            // 0x211df4: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211DF8u; }
        if (ctx->pc != 0x211DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211DF8u; }
        if (ctx->pc != 0x211DF8u) { return; }
    }
    ctx->pc = 0x211DF8u;
label_211df8:
    // 0x211df8: 0x8fa6012c  lw          $a2, 0x12C($sp)
    ctx->pc = 0x211df8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x211dfc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x211dfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211e00: 0xc049c18  jal         func_127060
    ctx->pc = 0x211E00u;
    SET_GPR_U32(ctx, 31, 0x211E08u);
    ctx->pc = 0x211E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211E00u;
            // 0x211e04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211E08u; }
        if (ctx->pc != 0x211E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211E08u; }
        if (ctx->pc != 0x211E08u) { return; }
    }
    ctx->pc = 0x211E08u;
label_211e08:
    // 0x211e08: 0x8e2602e4  lw          $a2, 0x2E4($s1)
    ctx->pc = 0x211e08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 740)));
    // 0x211e0c: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x211e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x211e10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x211e10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211e14: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x211e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x211e18: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x211e18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211e1c: 0xc04b6a4  jal         func_12DA90
    ctx->pc = 0x211E1Cu;
    SET_GPR_U32(ctx, 31, 0x211E24u);
    ctx->pc = 0x211E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211E1Cu;
            // 0x211e20: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211E24u; }
        if (ctx->pc != 0x211E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211E24u; }
        if (ctx->pc != 0x211E24u) { return; }
    }
    ctx->pc = 0x211E24u;
label_211e24:
    // 0x211e24: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x211e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_211e28:
    // 0x211e28: 0xc0521d8  jal         func_148760
    ctx->pc = 0x211E28u;
    SET_GPR_U32(ctx, 31, 0x211E30u);
    ctx->pc = 0x148760u;
    if (runtime->hasFunction(0x148760u)) {
        auto targetFn = runtime->lookupFunction(0x148760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211E30u; }
        if (ctx->pc != 0x211E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCurrentDir__FPc_0x148760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211E30u; }
        if (ctx->pc != 0x211E30u) { return; }
    }
    ctx->pc = 0x211E30u;
label_211e30:
    // 0x211e30: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x211e30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_211e34:
    // 0x211e34: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x211e34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_211e38:
    // 0x211e38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x211e38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x211e3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x211e3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211e40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x211e40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211e44: 0x3e00008  jr          $ra
    ctx->pc = 0x211E44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211E44u;
            // 0x211e48: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x211E4Cu;
}
