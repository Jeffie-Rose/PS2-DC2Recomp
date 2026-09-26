#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _EOH_SET_TEX_ANIM__FP12RS_STACKDATAi
// Address: 0x274f00 - 0x275040
void ps2__EOH_SET_TEX_ANIM__FP12RS_STACKDATAi_0x274f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__EOH_SET_TEX_ANIM__FP12RS_STACKDATAi_0x274f00");
#endif

    switch (ctx->pc) {
        case 0x274f20u: goto label_274f20;
        case 0x274f64u: goto label_274f64;
        case 0x274f7cu: goto label_274f7c;
        case 0x274f88u: goto label_274f88;
        case 0x274f9cu: goto label_274f9c;
        case 0x274fbcu: goto label_274fbc;
        case 0x274fd4u: goto label_274fd4;
        case 0x274fe4u: goto label_274fe4;
        case 0x274ff0u: goto label_274ff0;
        case 0x275008u: goto label_275008;
        case 0x275028u: goto label_275028;
        default: break;
    }

    ctx->pc = 0x274f00u;

    // 0x274f00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x274f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x274f04: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x274f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x274f08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x274f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x274f0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x274f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x274f10: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x274f10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274f14: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x274f14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274f18: 0xc097e18  jal         func_25F860
    ctx->pc = 0x274F18u;
    SET_GPR_U32(ctx, 31, 0x274F20u);
    ctx->pc = 0x274F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274F18u;
            // 0x274f1c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274F20u; }
        if (ctx->pc != 0x274F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274F20u; }
        if (ctx->pc != 0x274F20u) { return; }
    }
    ctx->pc = 0x274F20u;
label_274f20:
    // 0x274f20: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x274f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x274f24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x274f24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274f28: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x274f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x274f2c: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x274F2Cu;
    {
        const bool branch_taken_0x274f2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x274f2c) {
            ctx->pc = 0x274FACu;
            goto label_274fac;
        }
    }
    ctx->pc = 0x274F34u;
    // 0x274f34: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x274F34u;
    {
        const bool branch_taken_0x274f34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x274f34) {
            ctx->pc = 0x274F44u;
            goto label_274f44;
        }
    }
    ctx->pc = 0x274F3Cu;
    // 0x274f3c: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x274F3Cu;
    {
        const bool branch_taken_0x274f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274F3Cu;
            // 0x274f40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274f3c) {
            ctx->pc = 0x275028u;
            goto label_275028;
        }
    }
    ctx->pc = 0x274F44u;
label_274f44:
    // 0x274f44: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x274F44u;
    {
        const bool branch_taken_0x274f44 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x274F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274F44u;
            // 0x274f48: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274f44) {
            ctx->pc = 0x274F6Cu;
            goto label_274f6c;
        }
    }
    ctx->pc = 0x274F4Cu;
    // 0x274f4c: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x274f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x274f50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x274f50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274f54: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x274f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
    // 0x274f58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x274f58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274f5c: 0xc0979dc  jal         func_25E770
    ctx->pc = 0x274F5Cu;
    SET_GPR_U32(ctx, 31, 0x274F64u);
    ctx->pc = 0x274F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274F5Cu;
            // 0x274f60: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25E770u;
    if (runtime->hasFunction(0x25E770u)) {
        auto targetFn = runtime->lookupFunction(0x25E770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274F64u; }
        if (ctx->pc != 0x274F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTexAnim__10CEohMotherFiiPc_0x25e770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274F64u; }
        if (ctx->pc != 0x274F64u) { return; }
    }
    ctx->pc = 0x274F64u;
label_274f64:
    // 0x274f64: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x274F64u;
    {
        const bool branch_taken_0x274f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274F64u;
            // 0x274f68: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274f64) {
            ctx->pc = 0x27502Cu;
            goto label_27502c;
        }
    }
    ctx->pc = 0x274F6Cu;
label_274f6c:
    // 0x274f6c: 0x1622000d  bne         $s1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x274F6Cu;
    {
        const bool branch_taken_0x274f6c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x274F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274F6Cu;
            // 0x274f70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274f6c) {
            ctx->pc = 0x274FA4u;
            goto label_274fa4;
        }
    }
    ctx->pc = 0x274F74u;
    // 0x274f74: 0xc097e18  jal         func_25F860
    ctx->pc = 0x274F74u;
    SET_GPR_U32(ctx, 31, 0x274F7Cu);
    ctx->pc = 0x274F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274F74u;
            // 0x274f78: 0x26440008  addiu       $a0, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274F7Cu; }
        if (ctx->pc != 0x274F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274F7Cu; }
        if (ctx->pc != 0x274F7Cu) { return; }
    }
    ctx->pc = 0x274F7Cu;
label_274f7c:
    // 0x274f7c: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x274f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x274f80: 0xc097e48  jal         func_25F920
    ctx->pc = 0x274F80u;
    SET_GPR_U32(ctx, 31, 0x274F88u);
    ctx->pc = 0x274F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274F80u;
            // 0x274f84: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274F88u; }
        if (ctx->pc != 0x274F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274F88u; }
        if (ctx->pc != 0x274F88u) { return; }
    }
    ctx->pc = 0x274F88u;
label_274f88:
    // 0x274f88: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x274f88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x274f8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x274f8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274f90: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x274f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
    // 0x274f94: 0xc0979dc  jal         func_25E770
    ctx->pc = 0x274F94u;
    SET_GPR_U32(ctx, 31, 0x274F9Cu);
    ctx->pc = 0x274F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274F94u;
            // 0x274f98: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25E770u;
    if (runtime->hasFunction(0x25E770u)) {
        auto targetFn = runtime->lookupFunction(0x25E770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274F9Cu; }
        if (ctx->pc != 0x274F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTexAnim__10CEohMotherFiiPc_0x25e770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274F9Cu; }
        if (ctx->pc != 0x274F9Cu) { return; }
    }
    ctx->pc = 0x274F9Cu;
label_274f9c:
    // 0x274f9c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x274F9Cu;
    {
        const bool branch_taken_0x274f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274f9c) {
            ctx->pc = 0x275028u;
            goto label_275028;
        }
    }
    ctx->pc = 0x274FA4u;
label_274fa4:
    // 0x274fa4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x274FA4u;
    {
        const bool branch_taken_0x274fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274fa4) {
            ctx->pc = 0x275028u;
            goto label_275028;
        }
    }
    ctx->pc = 0x274FACu;
label_274fac:
    // 0x274fac: 0x1622000b  bne         $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x274FACu;
    {
        const bool branch_taken_0x274fac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x274FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274FACu;
            // 0x274fb0: 0x26440008  addiu       $a0, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274fac) {
            ctx->pc = 0x274FDCu;
            goto label_274fdc;
        }
    }
    ctx->pc = 0x274FB4u;
    // 0x274fb4: 0xc097e48  jal         func_25F920
    ctx->pc = 0x274FB4u;
    SET_GPR_U32(ctx, 31, 0x274FBCu);
    ctx->pc = 0x274FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274FB4u;
            // 0x274fb8: 0x26440008  addiu       $a0, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274FBCu; }
        if (ctx->pc != 0x274FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274FBCu; }
        if (ctx->pc != 0x274FBCu) { return; }
    }
    ctx->pc = 0x274FBCu;
label_274fbc:
    // 0x274fbc: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x274fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x274fc0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x274fc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274fc4: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x274fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
    // 0x274fc8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x274fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x274fcc: 0xc0979dc  jal         func_25E770
    ctx->pc = 0x274FCCu;
    SET_GPR_U32(ctx, 31, 0x274FD4u);
    ctx->pc = 0x274FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274FCCu;
            // 0x274fd0: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25E770u;
    if (runtime->hasFunction(0x25E770u)) {
        auto targetFn = runtime->lookupFunction(0x25E770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274FD4u; }
        if (ctx->pc != 0x274FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTexAnim__10CEohMotherFiiPc_0x25e770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274FD4u; }
        if (ctx->pc != 0x274FD4u) { return; }
    }
    ctx->pc = 0x274FD4u;
label_274fd4:
    // 0x274fd4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x274FD4u;
    {
        const bool branch_taken_0x274fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274fd4) {
            ctx->pc = 0x275028u;
            goto label_275028;
        }
    }
    ctx->pc = 0x274FDCu;
label_274fdc:
    // 0x274fdc: 0xc097e48  jal         func_25F920
    ctx->pc = 0x274FDCu;
    SET_GPR_U32(ctx, 31, 0x274FE4u);
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274FE4u; }
        if (ctx->pc != 0x274FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274FE4u; }
        if (ctx->pc != 0x274FE4u) { return; }
    }
    ctx->pc = 0x274FE4u;
label_274fe4:
    // 0x274fe4: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x274fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x274fe8: 0xc097e48  jal         func_25F920
    ctx->pc = 0x274FE8u;
    SET_GPR_U32(ctx, 31, 0x274FF0u);
    ctx->pc = 0x274FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274FE8u;
            // 0x274fec: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274FF0u; }
        if (ctx->pc != 0x274FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274FF0u; }
        if (ctx->pc != 0x274FF0u) { return; }
    }
    ctx->pc = 0x274FF0u;
label_274ff0:
    // 0x274ff0: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x274ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x274ff4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x274ff4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274ff8: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x274ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
    // 0x274ffc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x274ffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275000: 0xc0979dc  jal         func_25E770
    ctx->pc = 0x275000u;
    SET_GPR_U32(ctx, 31, 0x275008u);
    ctx->pc = 0x275004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275000u;
            // 0x275004: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25E770u;
    if (runtime->hasFunction(0x25E770u)) {
        auto targetFn = runtime->lookupFunction(0x25E770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275008u; }
        if (ctx->pc != 0x275008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTexAnim__10CEohMotherFiiPc_0x25e770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275008u; }
        if (ctx->pc != 0x275008u) { return; }
    }
    ctx->pc = 0x275008u;
label_275008:
    // 0x275008: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x275008u;
    {
        const bool branch_taken_0x275008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27500Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275008u;
            // 0x27500c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275008) {
            ctx->pc = 0x275028u;
            goto label_275028;
        }
    }
    ctx->pc = 0x275010u;
    // 0x275010: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x275010u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x275014: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x275014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275018: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x275018u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27501c: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x27501cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
    // 0x275020: 0xc0979dc  jal         func_25E770
    ctx->pc = 0x275020u;
    SET_GPR_U32(ctx, 31, 0x275028u);
    ctx->pc = 0x275024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275020u;
            // 0x275024: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25E770u;
    if (runtime->hasFunction(0x25E770u)) {
        auto targetFn = runtime->lookupFunction(0x25E770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275028u; }
        if (ctx->pc != 0x275028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTexAnim__10CEohMotherFiiPc_0x25e770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275028u; }
        if (ctx->pc != 0x275028u) { return; }
    }
    ctx->pc = 0x275028u;
label_275028:
    // 0x275028: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x275028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_27502c:
    // 0x27502c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27502cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x275030: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x275030u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275034: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x275034u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275038: 0x3e00008  jr          $ra
    ctx->pc = 0x275038u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27503Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275038u;
            // 0x27503c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x275040u;
}
