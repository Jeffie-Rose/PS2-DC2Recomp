#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: scsQuake__FP12_SEN_CMR_SEQP12CSceneCmrSeq
// Address: 0x258c60 - 0x258e3c
void scsQuake__FP12_SEN_CMR_SEQP12CSceneCmrSeq_0x258c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scsQuake__FP12_SEN_CMR_SEQP12CSceneCmrSeq_0x258c60");
#endif

    switch (ctx->pc) {
        case 0x258c98u: goto label_258c98;
        case 0x258ca4u: goto label_258ca4;
        case 0x258cd4u: goto label_258cd4;
        case 0x258ce4u: goto label_258ce4;
        case 0x258d00u: goto label_258d00;
        case 0x258d10u: goto label_258d10;
        case 0x258d5cu: goto label_258d5c;
        case 0x258d68u: goto label_258d68;
        case 0x258d74u: goto label_258d74;
        case 0x258da4u: goto label_258da4;
        case 0x258db4u: goto label_258db4;
        case 0x258dd0u: goto label_258dd0;
        case 0x258de0u: goto label_258de0;
        case 0x258df4u: goto label_258df4;
        case 0x258e08u: goto label_258e08;
        case 0x258e18u: goto label_258e18;
        default: break;
    }

    ctx->pc = 0x258c60u;

    // 0x258c60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x258c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x258c64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x258c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x258c68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x258c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x258c6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x258c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x258c70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x258c70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258c74: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x258c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x258c78: 0x28410000  slti        $at, $v0, 0x0
    ctx->pc = 0x258c78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x258c7c: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
    ctx->pc = 0x258C7Cu;
    {
        const bool branch_taken_0x258c7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x258C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258C7Cu;
            // 0x258c80: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258c7c) {
            ctx->pc = 0x258D20u;
            goto label_258d20;
        }
    }
    ctx->pc = 0x258C84u;
    // 0x258c84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x258c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x258c88: 0x260401a0  addiu       $a0, $s0, 0x1A0
    ctx->pc = 0x258c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x258c8c: 0xae020180  sw          $v0, 0x180($s0)
    ctx->pc = 0x258c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 2));
    // 0x258c90: 0xc041c5c  jal         func_107170
    ctx->pc = 0x258C90u;
    SET_GPR_U32(ctx, 31, 0x258C98u);
    ctx->pc = 0x258C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258C90u;
            // 0x258c94: 0x26050050  addiu       $a1, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258C98u; }
        if (ctx->pc != 0x258C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258C98u; }
        if (ctx->pc != 0x258C98u) { return; }
    }
    ctx->pc = 0x258C98u;
label_258c98:
    // 0x258c98: 0x260401b0  addiu       $a0, $s0, 0x1B0
    ctx->pc = 0x258c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
    // 0x258c9c: 0xc041c5c  jal         func_107170
    ctx->pc = 0x258C9Cu;
    SET_GPR_U32(ctx, 31, 0x258CA4u);
    ctx->pc = 0x258CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258C9Cu;
            // 0x258ca0: 0x26050060  addiu       $a1, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258CA4u; }
        if (ctx->pc != 0x258CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258CA4u; }
        if (ctx->pc != 0x258CA4u) { return; }
    }
    ctx->pc = 0x258CA4u;
label_258ca4:
    // 0x258ca4: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x258ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x258ca8: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x258CA8u;
    {
        const bool branch_taken_0x258ca8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x258CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258CA8u;
            // 0x258cac: 0x30430003  andi        $v1, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x258ca8) {
            ctx->pc = 0x258CBCu;
            goto label_258cbc;
        }
    }
    ctx->pc = 0x258CB0u;
    // 0x258cb0: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x258CB0u;
    {
        const bool branch_taken_0x258cb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x258cb0) {
            ctx->pc = 0x258CBCu;
            goto label_258cbc;
        }
    }
    ctx->pc = 0x258CB8u;
    // 0x258cb8: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x258cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_258cbc:
    // 0x258cbc: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x258CBCu;
    {
        const bool branch_taken_0x258cbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x258CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258CBCu;
            // 0x258cc0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258cbc) {
            ctx->pc = 0x258CECu;
            goto label_258cec;
        }
    }
    ctx->pc = 0x258CC4u;
    // 0x258cc4: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x258cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x258cc8: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x258cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x258ccc: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x258CCCu;
    SET_GPR_U32(ctx, 31, 0x258CD4u);
    ctx->pc = 0x258CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258CCCu;
            // 0x258cd0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258CD4u; }
        if (ctx->pc != 0x258CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258CD4u; }
        if (ctx->pc != 0x258CD4u) { return; }
    }
    ctx->pc = 0x258CD4u;
label_258cd4:
    // 0x258cd4: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x258cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x258cd8: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x258cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x258cdc: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x258CDCu;
    SET_GPR_U32(ctx, 31, 0x258CE4u);
    ctx->pc = 0x258CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258CDCu;
            // 0x258ce0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258CE4u; }
        if (ctx->pc != 0x258CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258CE4u; }
        if (ctx->pc != 0x258CE4u) { return; }
    }
    ctx->pc = 0x258CE4u;
label_258ce4:
    // 0x258ce4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x258CE4u;
    {
        const bool branch_taken_0x258ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258CE4u;
            // 0x258ce8: 0x8e020044  lw          $v0, 0x44($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258ce4) {
            ctx->pc = 0x258D14u;
            goto label_258d14;
        }
    }
    ctx->pc = 0x258CECu;
label_258cec:
    // 0x258cec: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x258CECu;
    {
        const bool branch_taken_0x258cec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x258CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258CECu;
            // 0x258cf0: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258cec) {
            ctx->pc = 0x258D10u;
            goto label_258d10;
        }
    }
    ctx->pc = 0x258CF4u;
    // 0x258cf4: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x258cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x258cf8: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x258CF8u;
    SET_GPR_U32(ctx, 31, 0x258D00u);
    ctx->pc = 0x258CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258CF8u;
            // 0x258cfc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258D00u; }
        if (ctx->pc != 0x258D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258D00u; }
        if (ctx->pc != 0x258D00u) { return; }
    }
    ctx->pc = 0x258D00u;
label_258d00:
    // 0x258d00: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x258d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x258d04: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x258d04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x258d08: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x258D08u;
    SET_GPR_U32(ctx, 31, 0x258D10u);
    ctx->pc = 0x258D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258D08u;
            // 0x258d0c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258D10u; }
        if (ctx->pc != 0x258D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258D10u; }
        if (ctx->pc != 0x258D10u) { return; }
    }
    ctx->pc = 0x258D10u;
label_258d10:
    // 0x258d10: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x258d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_258d14:
    // 0x258d14: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x258d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x258d18: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x258D18u;
    {
        const bool branch_taken_0x258d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258D18u;
            // 0x258d1c: 0xae020044  sw          $v0, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258d18) {
            ctx->pc = 0x258E24u;
            goto label_258e24;
        }
    }
    ctx->pc = 0x258D20u;
label_258d20:
    // 0x258d20: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x258d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x258d24: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x258d24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x258d28: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x258D28u;
    {
        const bool branch_taken_0x258d28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x258d28) {
            ctx->pc = 0x258D40u;
            goto label_258d40;
        }
    }
    ctx->pc = 0x258D30u;
    // 0x258d30: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x258d30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x258d34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x258d34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258d38: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x258D38u;
    {
        const bool branch_taken_0x258d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258D38u;
            // 0x258d3c: 0xae000180  sw          $zero, 0x180($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258d38) {
            ctx->pc = 0x258E28u;
            goto label_258e28;
        }
    }
    ctx->pc = 0x258D40u;
label_258d40:
    // 0x258d40: 0x1c600007  bgtz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x258D40u;
    {
        const bool branch_taken_0x258d40 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x258D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258D40u;
            // 0x258d44: 0x260401a0  addiu       $a0, $s0, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258d40) {
            ctx->pc = 0x258D60u;
            goto label_258d60;
        }
    }
    ctx->pc = 0x258D48u;
    // 0x258d48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x258d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x258d4c: 0x26040190  addiu       $a0, $s0, 0x190
    ctx->pc = 0x258d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x258d50: 0xae020180  sw          $v0, 0x180($s0)
    ctx->pc = 0x258d50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 2));
    // 0x258d54: 0xc041c5c  jal         func_107170
    ctx->pc = 0x258D54u;
    SET_GPR_U32(ctx, 31, 0x258D5Cu);
    ctx->pc = 0x258D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258D54u;
            // 0x258d58: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258D5Cu; }
        if (ctx->pc != 0x258D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258D5Cu; }
        if (ctx->pc != 0x258D5Cu) { return; }
    }
    ctx->pc = 0x258D5Cu;
label_258d5c:
    // 0x258d5c: 0x260401a0  addiu       $a0, $s0, 0x1A0
    ctx->pc = 0x258d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
label_258d60:
    // 0x258d60: 0xc041c5c  jal         func_107170
    ctx->pc = 0x258D60u;
    SET_GPR_U32(ctx, 31, 0x258D68u);
    ctx->pc = 0x258D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258D60u;
            // 0x258d64: 0x26050050  addiu       $a1, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258D68u; }
        if (ctx->pc != 0x258D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258D68u; }
        if (ctx->pc != 0x258D68u) { return; }
    }
    ctx->pc = 0x258D68u;
label_258d68:
    // 0x258d68: 0x260401b0  addiu       $a0, $s0, 0x1B0
    ctx->pc = 0x258d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
    // 0x258d6c: 0xc041c5c  jal         func_107170
    ctx->pc = 0x258D6Cu;
    SET_GPR_U32(ctx, 31, 0x258D74u);
    ctx->pc = 0x258D70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258D6Cu;
            // 0x258d70: 0x26050060  addiu       $a1, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258D74u; }
        if (ctx->pc != 0x258D74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258D74u; }
        if (ctx->pc != 0x258D74u) { return; }
    }
    ctx->pc = 0x258D74u;
label_258d74:
    // 0x258d74: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x258d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x258d78: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x258D78u;
    {
        const bool branch_taken_0x258d78 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x258D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258D78u;
            // 0x258d7c: 0x30430003  andi        $v1, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x258d78) {
            ctx->pc = 0x258D8Cu;
            goto label_258d8c;
        }
    }
    ctx->pc = 0x258D80u;
    // 0x258d80: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x258D80u;
    {
        const bool branch_taken_0x258d80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x258d80) {
            ctx->pc = 0x258D8Cu;
            goto label_258d8c;
        }
    }
    ctx->pc = 0x258D88u;
    // 0x258d88: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x258d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_258d8c:
    // 0x258d8c: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x258D8Cu;
    {
        const bool branch_taken_0x258d8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x258D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258D8Cu;
            // 0x258d90: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258d8c) {
            ctx->pc = 0x258DBCu;
            goto label_258dbc;
        }
    }
    ctx->pc = 0x258D94u;
    // 0x258d94: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x258d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x258d98: 0x26060190  addiu       $a2, $s0, 0x190
    ctx->pc = 0x258d98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x258d9c: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x258D9Cu;
    SET_GPR_U32(ctx, 31, 0x258DA4u);
    ctx->pc = 0x258DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258D9Cu;
            // 0x258da0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258DA4u; }
        if (ctx->pc != 0x258DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258DA4u; }
        if (ctx->pc != 0x258DA4u) { return; }
    }
    ctx->pc = 0x258DA4u;
label_258da4:
    // 0x258da4: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x258da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x258da8: 0x26060190  addiu       $a2, $s0, 0x190
    ctx->pc = 0x258da8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x258dac: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x258DACu;
    SET_GPR_U32(ctx, 31, 0x258DB4u);
    ctx->pc = 0x258DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258DACu;
            // 0x258db0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258DB4u; }
        if (ctx->pc != 0x258DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258DB4u; }
        if (ctx->pc != 0x258DB4u) { return; }
    }
    ctx->pc = 0x258DB4u;
label_258db4:
    // 0x258db4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x258DB4u;
    {
        const bool branch_taken_0x258db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258DB4u;
            // 0x258db8: 0x8e020044  lw          $v0, 0x44($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258db4) {
            ctx->pc = 0x258E1Cu;
            goto label_258e1c;
        }
    }
    ctx->pc = 0x258DBCu;
label_258dbc:
    // 0x258dbc: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x258DBCu;
    {
        const bool branch_taken_0x258dbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x258DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258DBCu;
            // 0x258dc0: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258dbc) {
            ctx->pc = 0x258E18u;
            goto label_258e18;
        }
    }
    ctx->pc = 0x258DC4u;
    // 0x258dc4: 0x26060190  addiu       $a2, $s0, 0x190
    ctx->pc = 0x258dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x258dc8: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x258DC8u;
    SET_GPR_U32(ctx, 31, 0x258DD0u);
    ctx->pc = 0x258DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258DC8u;
            // 0x258dcc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258DD0u; }
        if (ctx->pc != 0x258DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258DD0u; }
        if (ctx->pc != 0x258DD0u) { return; }
    }
    ctx->pc = 0x258DD0u;
label_258dd0:
    // 0x258dd0: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x258dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x258dd4: 0x26060190  addiu       $a2, $s0, 0x190
    ctx->pc = 0x258dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x258dd8: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x258DD8u;
    SET_GPR_U32(ctx, 31, 0x258DE0u);
    ctx->pc = 0x258DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258DD8u;
            // 0x258ddc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258DE0u; }
        if (ctx->pc != 0x258DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258DE0u; }
        if (ctx->pc != 0x258DE0u) { return; }
    }
    ctx->pc = 0x258DE0u;
label_258de0:
    // 0x258de0: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x258de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258de4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x258de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x258de8: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x258de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x258dec: 0xc041c1e  jal         func_107078
    ctx->pc = 0x258DECu;
    SET_GPR_U32(ctx, 31, 0x258DF4u);
    ctx->pc = 0x258DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258DECu;
            // 0x258df0: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x107078u;
    if (runtime->hasFunction(0x107078u)) {
        auto targetFn = runtime->lookupFunction(0x107078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258DF4u; }
        if (ctx->pc != 0x258DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0DivVector_0x107078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258DF4u; }
        if (ctx->pc != 0x258DF4u) { return; }
    }
    ctx->pc = 0x258DF4u;
label_258df4:
    // 0x258df4: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x258df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258df8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x258df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x258dfc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x258dfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258e00: 0xc041c4a  jal         func_107128
    ctx->pc = 0x258E00u;
    SET_GPR_U32(ctx, 31, 0x258E08u);
    ctx->pc = 0x258E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258E00u;
            // 0x258e04: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258E08u; }
        if (ctx->pc != 0x258E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258E08u; }
        if (ctx->pc != 0x258E08u) { return; }
    }
    ctx->pc = 0x258E08u;
label_258e08:
    // 0x258e08: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x258e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x258e0c: 0x26040190  addiu       $a0, $s0, 0x190
    ctx->pc = 0x258e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x258e10: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x258E10u;
    SET_GPR_U32(ctx, 31, 0x258E18u);
    ctx->pc = 0x258E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258E10u;
            // 0x258e14: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258E18u; }
        if (ctx->pc != 0x258E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258E18u; }
        if (ctx->pc != 0x258E18u) { return; }
    }
    ctx->pc = 0x258E18u;
label_258e18:
    // 0x258e18: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x258e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_258e1c:
    // 0x258e1c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x258e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x258e20: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x258e20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
label_258e24:
    // 0x258e24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x258e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_258e28:
    // 0x258e28: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x258e28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258e2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x258e2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258e30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x258e30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258e34: 0x3e00008  jr          $ra
    ctx->pc = 0x258E34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x258E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258E34u;
            // 0x258e38: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x258E3Cu;
}
