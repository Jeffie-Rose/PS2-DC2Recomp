#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _V_PUSH__FP12RS_STACKDATAi
// Address: 0x1e2cf0 - 0x1e2e18
void ps2__V_PUSH__FP12RS_STACKDATAi_0x1e2cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__V_PUSH__FP12RS_STACKDATAi_0x1e2cf0");
#endif

    switch (ctx->pc) {
        case 0x1e2d18u: goto label_1e2d18;
        case 0x1e2d4cu: goto label_1e2d4c;
        case 0x1e2d7cu: goto label_1e2d7c;
        case 0x1e2db8u: goto label_1e2db8;
        case 0x1e2de8u: goto label_1e2de8;
        default: break;
    }

    ctx->pc = 0x1e2cf0u;

    // 0x1e2cf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e2cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e2cf4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e2cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e2cf8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e2cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e2cfc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e2cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e2d00: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E2D00u;
    {
        const bool branch_taken_0x1e2d00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E2D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2D00u;
            // 0x1e2d04: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2d00) {
            ctx->pc = 0x1E2D10u;
            goto label_1e2d10;
        }
    }
    ctx->pc = 0x1E2D08u;
    // 0x1e2d08: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x1E2D08u;
    {
        const bool branch_taken_0x1e2d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2D08u;
            // 0x1e2d0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2d08) {
            ctx->pc = 0x1E2E04u;
            goto label_1e2e04;
        }
    }
    ctx->pc = 0x1E2D10u;
label_1e2d10:
    // 0x1e2d10: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E2D10u;
    SET_GPR_U32(ctx, 31, 0x1E2D18u);
    ctx->pc = 0x1E2D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2D10u;
            // 0x1e2d14: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2D18u; }
        if (ctx->pc != 0x1E2D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2D18u; }
        if (ctx->pc != 0x1E2D18u) { return; }
    }
    ctx->pc = 0x1E2D18u;
label_1e2d18:
    // 0x1e2d18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e2d18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2d1c: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E2D1Cu;
    {
        const bool branch_taken_0x1e2d1c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1E2D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2D1Cu;
            // 0x1e2d20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2d1c) {
            ctx->pc = 0x1E2D2Cu;
            goto label_1e2d2c;
        }
    }
    ctx->pc = 0x1E2D24u;
    // 0x1e2d24: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1E2D24u;
    {
        const bool branch_taken_0x1e2d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2D24u;
            // 0x1e2d28: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2d24) {
            ctx->pc = 0x1E2E08u;
            goto label_1e2e08;
        }
    }
    ctx->pc = 0x1E2D2Cu;
label_1e2d2c:
    // 0x1e2d2c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1e2d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e2d30: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1E2D30u;
    {
        const bool branch_taken_0x1e2d30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E2D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2D30u;
            // 0x1e2d34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2d30) {
            ctx->pc = 0x1E2DA0u;
            goto label_1e2da0;
        }
    }
    ctx->pc = 0x1E2D38u;
    // 0x1e2d38: 0x2a010008  slti        $at, $s0, 0x8
    ctx->pc = 0x1e2d38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1e2d3c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E2D3Cu;
    {
        const bool branch_taken_0x1e2d3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2D40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2D3Cu;
            // 0x1e2d40: 0x2a020008  slti        $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2d3c) {
            ctx->pc = 0x1E2D60u;
            goto label_1e2d60;
        }
    }
    ctx->pc = 0x1E2D44u;
    // 0x1e2d44: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E2D44u;
    SET_GPR_U32(ctx, 31, 0x1E2D4Cu);
    ctx->pc = 0x1E2D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2D44u;
            // 0x1e2d48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2D4Cu; }
        if (ctx->pc != 0x1E2D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2D4Cu; }
        if (ctx->pc != 0x1E2D4Cu) { return; }
    }
    ctx->pc = 0x1E2D4Cu;
label_1e2d4c:
    // 0x1e2d4c: 0x8f848e70  lw          $a0, -0x7190($gp)
    ctx->pc = 0x1e2d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e2d50: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1e2d50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1e2d54: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e2d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e2d58: 0xac62115c  sw          $v0, 0x115C($v1)
    ctx->pc = 0x1e2d58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4444), GPR_U32(ctx, 2));
    // 0x1e2d5c: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x1e2d5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
label_1e2d60:
    // 0x1e2d60: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1E2D60u;
    {
        const bool branch_taken_0x1e2d60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E2D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2D60u;
            // 0x1e2d64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2d60) {
            ctx->pc = 0x1E2D98u;
            goto label_1e2d98;
        }
    }
    ctx->pc = 0x1E2D68u;
    // 0x1e2d68: 0x2a010088  slti        $at, $s0, 0x88
    ctx->pc = 0x1e2d68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)136) ? 1 : 0);
    // 0x1e2d6c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E2D6Cu;
    {
        const bool branch_taken_0x1e2d6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2D6Cu;
            // 0x1e2d70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2d6c) {
            ctx->pc = 0x1E2D94u;
            goto label_1e2d94;
        }
    }
    ctx->pc = 0x1E2D74u;
    // 0x1e2d74: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E2D74u;
    SET_GPR_U32(ctx, 31, 0x1E2D7Cu);
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2D7Cu; }
        if (ctx->pc != 0x1E2D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2D7Cu; }
        if (ctx->pc != 0x1E2D7Cu) { return; }
    }
    ctx->pc = 0x1E2D7Cu;
label_1e2d7c:
    // 0x1e2d7c: 0x8f848db8  lw          $a0, -0x7248($gp)
    ctx->pc = 0x1e2d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x1e2d80: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1e2d80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1e2d84: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1e2d84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1e2d88: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e2d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e2d8c: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x1e2d8cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x1e2d90: 0xac22fdd0  sw          $v0, -0x230($at)
    ctx->pc = 0x1e2d90u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966736), GPR_U32(ctx, 2));
label_1e2d94:
    // 0x1e2d94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e2d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e2d98:
    // 0x1e2d98: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1E2D98u;
    {
        const bool branch_taken_0x1e2d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2d98) {
            ctx->pc = 0x1E2E04u;
            goto label_1e2e04;
        }
    }
    ctx->pc = 0x1E2DA0u;
label_1e2da0:
    // 0x1e2da0: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1E2DA0u;
    {
        const bool branch_taken_0x1e2da0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E2DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2DA0u;
            // 0x1e2da4: 0x2a010008  slti        $at, $s0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2da0) {
            ctx->pc = 0x1E2E04u;
            goto label_1e2e04;
        }
    }
    ctx->pc = 0x1E2DA8u;
    // 0x1e2da8: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E2DA8u;
    {
        const bool branch_taken_0x1e2da8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2DA8u;
            // 0x1e2dac: 0x2a020008  slti        $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2da8) {
            ctx->pc = 0x1E2DCCu;
            goto label_1e2dcc;
        }
    }
    ctx->pc = 0x1E2DB0u;
    // 0x1e2db0: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E2DB0u;
    SET_GPR_U32(ctx, 31, 0x1E2DB8u);
    ctx->pc = 0x1E2DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2DB0u;
            // 0x1e2db4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2DB8u; }
        if (ctx->pc != 0x1E2DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2DB8u; }
        if (ctx->pc != 0x1E2DB8u) { return; }
    }
    ctx->pc = 0x1E2DB8u;
label_1e2db8:
    // 0x1e2db8: 0x8f838e70  lw          $v1, -0x7190($gp)
    ctx->pc = 0x1e2db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e2dbc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1e2dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1e2dc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e2dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e2dc4: 0xe440115c  swc1        $f0, 0x115C($v0)
    ctx->pc = 0x1e2dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4444), bits); }
    // 0x1e2dc8: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x1e2dc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
label_1e2dcc:
    // 0x1e2dcc: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1E2DCCu;
    {
        const bool branch_taken_0x1e2dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E2DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2DCCu;
            // 0x1e2dd0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2dcc) {
            ctx->pc = 0x1E2E04u;
            goto label_1e2e04;
        }
    }
    ctx->pc = 0x1E2DD4u;
    // 0x1e2dd4: 0x2a010088  slti        $at, $s0, 0x88
    ctx->pc = 0x1e2dd4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)136) ? 1 : 0);
    // 0x1e2dd8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E2DD8u;
    {
        const bool branch_taken_0x1e2dd8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2DD8u;
            // 0x1e2ddc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2dd8) {
            ctx->pc = 0x1E2E00u;
            goto label_1e2e00;
        }
    }
    ctx->pc = 0x1E2DE0u;
    // 0x1e2de0: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E2DE0u;
    SET_GPR_U32(ctx, 31, 0x1E2DE8u);
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2DE8u; }
        if (ctx->pc != 0x1E2DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2DE8u; }
        if (ctx->pc != 0x1E2DE8u) { return; }
    }
    ctx->pc = 0x1E2DE8u;
label_1e2de8:
    // 0x1e2de8: 0x8f838db8  lw          $v1, -0x7248($gp)
    ctx->pc = 0x1e2de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x1e2dec: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1e2decu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1e2df0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1e2df0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1e2df4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e2df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e2df8: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1e2df8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1e2dfc: 0xe420fdd0  swc1        $f0, -0x230($at)
    ctx->pc = 0x1e2dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294966736), bits); }
label_1e2e00:
    // 0x1e2e00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e2e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e2e04:
    // 0x1e2e04: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e2e04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e2e08:
    // 0x1e2e08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e2e08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2e0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e2e0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2e10: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2E10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2E10u;
            // 0x1e2e14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E2E18u;
}
