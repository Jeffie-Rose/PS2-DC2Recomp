#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuGeoramaMakePush__FP12CMenuGeoramaii
// Address: 0x1fbbf0 - 0x1fbf88
void MenuGeoramaMakePush__FP12CMenuGeoramaii_0x1fbbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuGeoramaMakePush__FP12CMenuGeoramaii_0x1fbbf0");
#endif

    switch (ctx->pc) {
        case 0x1fbc38u: goto label_1fbc38;
        case 0x1fbc50u: goto label_1fbc50;
        case 0x1fbc70u: goto label_1fbc70;
        case 0x1fbc84u: goto label_1fbc84;
        case 0x1fbcc0u: goto label_1fbcc0;
        case 0x1fbcd0u: goto label_1fbcd0;
        case 0x1fbcd8u: goto label_1fbcd8;
        case 0x1fbd20u: goto label_1fbd20;
        case 0x1fbd4cu: goto label_1fbd4c;
        case 0x1fbdf8u: goto label_1fbdf8;
        case 0x1fbe08u: goto label_1fbe08;
        case 0x1fbe20u: goto label_1fbe20;
        case 0x1fbe40u: goto label_1fbe40;
        case 0x1fbe4cu: goto label_1fbe4c;
        case 0x1fbe64u: goto label_1fbe64;
        case 0x1fbe7cu: goto label_1fbe7c;
        case 0x1fbeacu: goto label_1fbeac;
        case 0x1fbebcu: goto label_1fbebc;
        case 0x1fbee0u: goto label_1fbee0;
        case 0x1fbf04u: goto label_1fbf04;
        case 0x1fbf14u: goto label_1fbf14;
        case 0x1fbf28u: goto label_1fbf28;
        case 0x1fbf30u: goto label_1fbf30;
        case 0x1fbf40u: goto label_1fbf40;
        case 0x1fbf48u: goto label_1fbf48;
        case 0x1fbf60u: goto label_1fbf60;
        default: break;
    }

    ctx->pc = 0x1fbbf0u;

    // 0x1fbbf0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1fbbf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1fbbf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fbbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fbbf8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1fbbf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1fbbfc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1fbbfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1fbc00: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1fbc00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1fbc04: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fbc04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1fbc08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fbc08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fbc0c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1fbc0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbc10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fbc10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fbc14: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x1fbc14u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1fbc18: 0x106200cd  beq         $v1, $v0, . + 4 + (0xCD << 2)
    ctx->pc = 0x1FBC18u;
    {
        const bool branch_taken_0x1fbc18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FBC1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBC18u;
            // 0x1fbc1c: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbc18) {
            ctx->pc = 0x1FBF50u;
            goto label_1fbf50;
        }
    }
    ctx->pc = 0x1FBC20u;
    // 0x1fbc20: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FBC20u;
    {
        const bool branch_taken_0x1fbc20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBC24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBC20u;
            // 0x1fbc24: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbc20) {
            ctx->pc = 0x1FBC30u;
            goto label_1fbc30;
        }
    }
    ctx->pc = 0x1FBC28u;
    // 0x1fbc28: 0x100000cf  b           . + 4 + (0xCF << 2)
    ctx->pc = 0x1FBC28u;
    {
        const bool branch_taken_0x1fbc28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBC2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBC28u;
            // 0x1fbc2c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbc28) {
            ctx->pc = 0x1FBF68u;
            goto label_1fbf68;
        }
    }
    ctx->pc = 0x1FBC30u;
label_1fbc30:
    // 0x1fbc30: 0xc07ecc8  jal         func_1FB320
    ctx->pc = 0x1FBC30u;
    SET_GPR_U32(ctx, 31, 0x1FBC38u);
    ctx->pc = 0x1FB320u;
    if (runtime->hasFunction(0x1FB320u)) {
        auto targetFn = runtime->lookupFunction(0x1FB320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBC38u; }
        if (ctx->pc != 0x1FBC38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        georama_menu_local_key__Fi_0x1fb320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBC38u; }
        if (ctx->pc != 0x1FBC38u) { return; }
    }
    ctx->pc = 0x1FBC38u;
label_1fbc38:
    // 0x1fbc38: 0x8e500154  lw          $s0, 0x154($s2)
    ctx->pc = 0x1fbc38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 340)));
    // 0x1fbc3c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1fbc3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbc40: 0x8e540150  lw          $s4, 0x150($s2)
    ctx->pc = 0x1fbc40u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
    // 0x1fbc44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fbc44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbc48: 0xc07e754  jal         func_1F9D50
    ctx->pc = 0x1FBC48u;
    SET_GPR_U32(ctx, 31, 0x1FBC50u);
    ctx->pc = 0x1FBC4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBC48u;
            // 0x1fbc4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F9D50u;
    if (runtime->hasFunction(0x1F9D50u)) {
        auto targetFn = runtime->lookupFunction(0x1F9D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBC50u; }
        if (ctx->pc != 0x1FBC50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowViewModeMax__12CMenuGeoramaFi_0x1f9d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBC50u; }
        if (ctx->pc != 0x1FBC50u) { return; }
    }
    ctx->pc = 0x1FBC50u;
label_1fbc50:
    // 0x1fbc50: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1fbc50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbc54: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1fbc54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbc58: 0x26450154  addiu       $a1, $s2, 0x154
    ctx->pc = 0x1fbc58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 340));
    // 0x1fbc5c: 0x26460150  addiu       $a2, $s2, 0x150
    ctx->pc = 0x1fbc5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
    // 0x1fbc60: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1fbc60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbc64: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x1fbc64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1fbc68: 0xc08ec6c  jal         func_23B1B0
    ctx->pc = 0x1FBC68u;
    SET_GPR_U32(ctx, 31, 0x1FBC70u);
    ctx->pc = 0x1FBC6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBC68u;
            // 0x1fbc6c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B1B0u;
    if (runtime->hasFunction(0x23B1B0u)) {
        auto targetFn = runtime->lookupFunction(0x23B1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBC70u; }
        if (ctx->pc != 0x1FBC70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuKeySelectCheck__FiPiPiiiii_0x23b1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBC70u; }
        if (ctx->pc != 0x1FBC70u) { return; }
    }
    ctx->pc = 0x1FBC70u;
label_1fbc70:
    // 0x1fbc70: 0x8e450148  lw          $a1, 0x148($s2)
    ctx->pc = 0x1fbc70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x1fbc74: 0x8e460154  lw          $a2, 0x154($s2)
    ctx->pc = 0x1fbc74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 340)));
    // 0x1fbc78: 0x8e470150  lw          $a3, 0x150($s2)
    ctx->pc = 0x1fbc78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
    // 0x1fbc7c: 0xc07e72c  jal         func_1F9CB0
    ctx->pc = 0x1FBC7Cu;
    SET_GPR_U32(ctx, 31, 0x1FBC84u);
    ctx->pc = 0x1FBC80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBC7Cu;
            // 0x1fbc80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F9CB0u;
    if (runtime->hasFunction(0x1F9CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1F9CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBC84u; }
        if (ctx->pc != 0x1FBC84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetGeoListInfo__12CMenuGeoramaFiii_0x1f9cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBC84u; }
        if (ctx->pc != 0x1FBC84u) { return; }
    }
    ctx->pc = 0x1FBC84u;
label_1fbc84:
    // 0x1fbc84: 0x8e420150  lw          $v0, 0x150($s2)
    ctx->pc = 0x1fbc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
    // 0x1fbc88: 0x12820008  beq         $s4, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FBC88u;
    {
        const bool branch_taken_0x1fbc88 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FBC8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBC88u;
            // 0x1fbc8c: 0x282082a  slt         $at, $s4, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbc88) {
            ctx->pc = 0x1FBCACu;
            goto label_1fbcac;
        }
    }
    ctx->pc = 0x1FBC90u;
    // 0x1fbc90: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FBC90u;
    {
        const bool branch_taken_0x1fbc90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBC94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBC90u;
            // 0x1fbc94: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbc90) {
            ctx->pc = 0x1FBC9Cu;
            goto label_1fbc9c;
        }
    }
    ctx->pc = 0x1FBC98u;
    // 0x1fbc98: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1fbc98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fbc9c:
    // 0x1fbc9c: 0x8e430148  lw          $v1, 0x148($s2)
    ctx->pc = 0x1fbc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x1fbca0: 0x27829030  addiu       $v0, $gp, -0x6FD0
    ctx->pc = 0x1fbca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938672));
    // 0x1fbca4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fbca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fbca8: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x1fbca8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
label_1fbcac:
    // 0x1fbcac: 0x8e420154  lw          $v0, 0x154($s2)
    ctx->pc = 0x1fbcacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 340)));
    // 0x1fbcb0: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1FBCB0u;
    {
        const bool branch_taken_0x1fbcb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FBCB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBCB0u;
            // 0x1fbcb4: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbcb0) {
            ctx->pc = 0x1FBCDCu;
            goto label_1fbcdc;
        }
    }
    ctx->pc = 0x1FBCB8u;
    // 0x1fbcb8: 0xc07e564  jal         func_1F9590
    ctx->pc = 0x1FBCB8u;
    SET_GPR_U32(ctx, 31, 0x1FBCC0u);
    ctx->pc = 0x1FBCBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBCB8u;
            // 0x1fbcbc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F9590u;
    if (runtime->hasFunction(0x1F9590u)) {
        auto targetFn = runtime->lookupFunction(0x1F9590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBCC0u; }
        if (ctx->pc != 0x1FBCC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowModeLoadPartsID__12CMenuGeoramaFv_0x1f9590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBCC0u; }
        if (ctx->pc != 0x1FBCC0u) { return; }
    }
    ctx->pc = 0x1FBCC0u;
label_1fbcc0:
    // 0x1fbcc0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fbcc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbcc4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fbcc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbcc8: 0xc07e5b0  jal         func_1F96C0
    ctx->pc = 0x1FBCC8u;
    SET_GPR_U32(ctx, 31, 0x1FBCD0u);
    ctx->pc = 0x1FBCCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBCC8u;
            // 0x1fbccc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F96C0u;
    if (runtime->hasFunction(0x1F96C0u)) {
        auto targetFn = runtime->lookupFunction(0x1F96C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBCD0u; }
        if (ctx->pc != 0x1FBCD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadGeoramaPart__12CMenuGeoramaFii_0x1f96c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBCD0u; }
        if (ctx->pc != 0x1FBCD0u) { return; }
    }
    ctx->pc = 0x1FBCD0u;
label_1fbcd0:
    // 0x1fbcd0: 0xc094274  jal         func_2509D0
    ctx->pc = 0x1FBCD0u;
    SET_GPR_U32(ctx, 31, 0x1FBCD8u);
    ctx->pc = 0x1FBCD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBCD0u;
            // 0x1fbcd4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBCD8u; }
        if (ctx->pc != 0x1FBCD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBCD8u; }
        if (ctx->pc != 0x1FBCD8u) { return; }
    }
    ctx->pc = 0x1FBCD8u;
label_1fbcd8:
    // 0x1fbcd8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1fbcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1fbcdc:
    // 0x1fbcdc: 0x1222008f  beq         $s1, $v0, . + 4 + (0x8F << 2)
    ctx->pc = 0x1FBCDCu;
    {
        const bool branch_taken_0x1fbcdc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FBCE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBCDCu;
            // 0x1fbce0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbcdc) {
            ctx->pc = 0x1FBF1Cu;
            goto label_1fbf1c;
        }
    }
    ctx->pc = 0x1FBCE4u;
    // 0x1fbce4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1fbce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1fbce8: 0x1222008d  beq         $s1, $v0, . + 4 + (0x8D << 2)
    ctx->pc = 0x1FBCE8u;
    {
        const bool branch_taken_0x1fbce8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FBCECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBCE8u;
            // 0x1fbcec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbce8) {
            ctx->pc = 0x1FBF20u;
            goto label_1fbf20;
        }
    }
    ctx->pc = 0x1FBCF0u;
    // 0x1fbcf0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fbcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fbcf4: 0x12220085  beq         $s1, $v0, . + 4 + (0x85 << 2)
    ctx->pc = 0x1FBCF4u;
    {
        const bool branch_taken_0x1fbcf4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FBCF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBCF4u;
            // 0x1fbcf8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbcf4) {
            ctx->pc = 0x1FBF0Cu;
            goto label_1fbf0c;
        }
    }
    ctx->pc = 0x1FBCFCu;
    // 0x1fbcfc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fbcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fbd00: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FBD00u;
    {
        const bool branch_taken_0x1fbd00 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fbd00) {
            ctx->pc = 0x1FBD10u;
            goto label_1fbd10;
        }
    }
    ctx->pc = 0x1FBD08u;
    // 0x1fbd08: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x1FBD08u;
    {
        const bool branch_taken_0x1fbd08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fbd08) {
            ctx->pc = 0x1FBF64u;
            goto label_1fbf64;
        }
    }
    ctx->pc = 0x1FBD10u;
label_1fbd10:
    // 0x1fbd10: 0x8e460154  lw          $a2, 0x154($s2)
    ctx->pc = 0x1fbd10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 340)));
    // 0x1fbd14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fbd14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbd18: 0xc07e580  jal         func_1F9600
    ctx->pc = 0x1FBD18u;
    SET_GPR_U32(ctx, 31, 0x1FBD20u);
    ctx->pc = 0x1FBD1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBD18u;
            // 0x1fbd1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F9600u;
    if (runtime->hasFunction(0x1F9600u)) {
        auto targetFn = runtime->lookupFunction(0x1F9600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBD20u; }
        if (ctx->pc != 0x1FBD20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowSelectEditPartsInfo__12CMenuGeoramaFii_0x1f9600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBD20u; }
        if (ctx->pc != 0x1FBD20u) { return; }
    }
    ctx->pc = 0x1FBD20u;
label_1fbd20:
    // 0x1fbd20: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1fbd20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1fbd24: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1fbd24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1fbd28: 0x3463b7f0  ori         $v1, $v1, 0xB7F0
    ctx->pc = 0x1fbd28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47088);
    // 0x1fbd2c: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x1fbd2cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x1fbd30: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1fbd30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1fbd34: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1fbd34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1fbd38: 0x8c22b7f0  lw          $v0, -0x4810($at)
    ctx->pc = 0x1fbd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948848)));
    // 0x1fbd3c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FBD3Cu;
    {
        const bool branch_taken_0x1fbd3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FBD40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBD3Cu;
            // 0x1fbd40: 0x3c010002  lui         $at, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbd3c) {
            ctx->pc = 0x1FBD54u;
            goto label_1fbd54;
        }
    }
    ctx->pc = 0x1FBD44u;
    // 0x1fbd44: 0xc094274  jal         func_2509D0
    ctx->pc = 0x1FBD44u;
    SET_GPR_U32(ctx, 31, 0x1FBD4Cu);
    ctx->pc = 0x1FBD48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBD44u;
            // 0x1fbd48: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBD4Cu; }
        if (ctx->pc != 0x1FBD4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBD4Cu; }
        if (ctx->pc != 0x1FBD4Cu) { return; }
    }
    ctx->pc = 0x1FBD4Cu;
label_1fbd4c:
    // 0x1fbd4c: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x1FBD4Cu;
    {
        const bool branch_taken_0x1fbd4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fbd4c) {
            ctx->pc = 0x1FBF64u;
            goto label_1fbf64;
        }
    }
    ctx->pc = 0x1FBD54u;
label_1fbd54:
    // 0x1fbd54: 0xa2400108  sb          $zero, 0x108($s2)
    ctx->pc = 0x1fbd54u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 264), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fbd58: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x1fbd58u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x1fbd5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fbd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fbd60: 0x8c23b7f0  lw          $v1, -0x4810($at)
    ctx->pc = 0x1fbd60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948848)));
    // 0x1fbd64: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1fbd64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fbd68: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1fbd68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1fbd6c: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x1fbd6cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x1fbd70: 0xae4300fc  sw          $v1, 0xFC($s2)
    ctx->pc = 0x1fbd70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 252), GPR_U32(ctx, 3));
    // 0x1fbd74: 0xae420100  sw          $v0, 0x100($s2)
    ctx->pc = 0x1fbd74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 256), GPR_U32(ctx, 2));
    // 0x1fbd78: 0x8c22b7f0  lw          $v0, -0x4810($at)
    ctx->pc = 0x1fbd78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948848)));
    // 0x1fbd7c: 0x84420014  lh          $v0, 0x14($v0)
    ctx->pc = 0x1fbd7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1fbd80: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1fbd80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1fbd84: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x1fbd84u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x1fbd88: 0xa642010a  sh          $v0, 0x10A($s2)
    ctx->pc = 0x1fbd88u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 266), (uint16_t)GPR_U32(ctx, 2));
    // 0x1fbd8c: 0x8c22b7f0  lw          $v0, -0x4810($at)
    ctx->pc = 0x1fbd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948848)));
    // 0x1fbd90: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x1fbd90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1fbd94: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x1fbd94u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x1fbd98: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FBD98u;
    {
        const bool branch_taken_0x1fbd98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fbd98) {
            ctx->pc = 0x1FBDACu;
            goto label_1fbdac;
        }
    }
    ctx->pc = 0x1FBDA0u;
    // 0x1fbda0: 0x8642010a  lh          $v0, 0x10A($s2)
    ctx->pc = 0x1fbda0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 266)));
    // 0x1fbda4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fbda4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fbda8: 0xa642010a  sh          $v0, 0x10A($s2)
    ctx->pc = 0x1fbda8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 266), (uint16_t)GPR_U32(ctx, 2));
label_1fbdac:
    // 0x1fbdac: 0x8642010a  lh          $v0, 0x10A($s2)
    ctx->pc = 0x1fbdacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 266)));
    // 0x1fbdb0: 0x28410064  slti        $at, $v0, 0x64
    ctx->pc = 0x1fbdb0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x1fbdb4: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FBDB4u;
    {
        const bool branch_taken_0x1fbdb4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FBDB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBDB4u;
            // 0x1fbdb8: 0x3c010002  lui         $at, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbdb4) {
            ctx->pc = 0x1FBDC4u;
            goto label_1fbdc4;
        }
    }
    ctx->pc = 0x1FBDBCu;
    // 0x1fbdbc: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x1fbdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x1fbdc0: 0xa642010a  sh          $v0, 0x10A($s2)
    ctx->pc = 0x1fbdc0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 266), (uint16_t)GPR_U32(ctx, 2));
label_1fbdc4:
    // 0x1fbdc4: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x1fbdc4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x1fbdc8: 0x8c31b7f0  lw          $s1, -0x4810($at)
    ctx->pc = 0x1fbdc8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948848)));
    // 0x1fbdcc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1fbdccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1fbdd0: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1fbdd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1fbdd4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1FBDD4u;
    {
        const bool branch_taken_0x1fbdd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBDD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBDD4u;
            // 0x1fbdd8: 0x8650010a  lh          $s0, 0x10A($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 266)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbdd4) {
            ctx->pc = 0x1FBE38u;
            goto label_1fbe38;
        }
    }
    ctx->pc = 0x1FBDDCu;
    // 0x1fbddc: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x1fbddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x1fbde0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1fbde0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1fbde4: 0x2442e970  addiu       $v0, $v0, -0x1690
    ctx->pc = 0x1fbde4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961520));
    // 0x1fbde8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1fbde8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fbdec: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x1fbdecu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x1fbdf0: 0xc0a5ae0  jal         func_296B80
    ctx->pc = 0x1FBDF0u;
    SET_GPR_U32(ctx, 31, 0x1FBDF8u);
    ctx->pc = 0x1FBDF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBDF0u;
            // 0x1fbdf4: 0x8f848ff8  lw          $a0, -0x7008($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938616)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296B80u;
    if (runtime->hasFunction(0x296B80u)) {
        auto targetFn = runtime->lookupFunction(0x296B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBDF8u; }
        if (ctx->pc != 0x1FBDF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRiverNum__8CEditMapFPf_0x296b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBDF8u; }
        if (ctx->pc != 0x1FBDF8u) { return; }
    }
    ctx->pc = 0x1FBDF8u;
label_1fbdf8:
    // 0x1fbdf8: 0x8643010a  lh          $v1, 0x10A($s2)
    ctx->pc = 0x1fbdf8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 266)));
    // 0x1fbdfc: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1fbdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fbe00: 0xc064220  jal         func_190880
    ctx->pc = 0x1FBE00u;
    SET_GPR_U32(ctx, 31, 0x1FBE08u);
    ctx->pc = 0x1FBE04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBE00u;
            // 0x1fbe04: 0xa642010a  sh          $v0, 0x10A($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 266), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBE08u; }
        if (ctx->pc != 0x1FBE08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBE08u; }
        if (ctx->pc != 0x1FBE08u) { return; }
    }
    ctx->pc = 0x1FBE08u;
label_1fbe08:
    // 0x1fbe08: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1fbe08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1fbe0c: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x1fbe0cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x1fbe10: 0x8c23b7f0  lw          $v1, -0x4810($at)
    ctx->pc = 0x1fbe10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948848)));
    // 0x1fbe14: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1fbe14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fbe18: 0xc0bd978  jal         func_2F65E0
    ctx->pc = 0x1FBE18u;
    SET_GPR_U32(ctx, 31, 0x1FBE20u);
    ctx->pc = 0x1FBE1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBE18u;
            // 0x1fbe1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F65E0u;
    if (runtime->hasFunction(0x2F65E0u)) {
        auto targetFn = runtime->lookupFunction(0x2F65E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBE20u; }
        if (ctx->pc != 0x1FBE20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBuildPartsNum__9CSaveDataFi_0x2f65e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBE20u; }
        if (ctx->pc != 0x1FBE20u) { return; }
    }
    ctx->pc = 0x1FBE20u;
label_1fbe20:
    // 0x1fbe20: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1fbe20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1fbe24: 0x8642010a  lh          $v0, 0x10A($s2)
    ctx->pc = 0x1fbe24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 266)));
    // 0x1fbe28: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1fbe28u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1fbe2c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1fbe2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fbe30: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1FBE30u;
    {
        const bool branch_taken_0x1fbe30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBE34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBE30u;
            // 0x1fbe34: 0xa642010a  sh          $v0, 0x10A($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 266), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbe30) {
            ctx->pc = 0x1FBE90u;
            goto label_1fbe90;
        }
    }
    ctx->pc = 0x1FBE38u;
label_1fbe38:
    // 0x1fbe38: 0xc064220  jal         func_190880
    ctx->pc = 0x1FBE38u;
    SET_GPR_U32(ctx, 31, 0x1FBE40u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBE40u; }
        if (ctx->pc != 0x1FBE40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBE40u; }
        if (ctx->pc != 0x1FBE40u) { return; }
    }
    ctx->pc = 0x1FBE40u;
label_1fbe40:
    // 0x1fbe40: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1fbe40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fbe44: 0xc0bd9b4  jal         func_2F66D0
    ctx->pc = 0x1FBE44u;
    SET_GPR_U32(ctx, 31, 0x1FBE4Cu);
    ctx->pc = 0x1FBE48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBE44u;
            // 0x1fbe48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F66D0u;
    if (runtime->hasFunction(0x2F66D0u)) {
        auto targetFn = runtime->lookupFunction(0x2F66D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBE4Cu; }
        if (ctx->pc != 0x1FBE4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlaceEditPartsNum__9CSaveDataFi_0x2f66d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBE4Cu; }
        if (ctx->pc != 0x1FBE4Cu) { return; }
    }
    ctx->pc = 0x1FBE4Cu;
label_1fbe4c:
    // 0x1fbe4c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1fbe4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1fbe50: 0x8642010a  lh          $v0, 0x10A($s2)
    ctx->pc = 0x1fbe50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 266)));
    // 0x1fbe54: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1fbe54u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1fbe58: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1fbe58u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fbe5c: 0xc064220  jal         func_190880
    ctx->pc = 0x1FBE5Cu;
    SET_GPR_U32(ctx, 31, 0x1FBE64u);
    ctx->pc = 0x1FBE60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBE5Cu;
            // 0x1fbe60: 0xa642010a  sh          $v0, 0x10A($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 266), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBE64u; }
        if (ctx->pc != 0x1FBE64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBE64u; }
        if (ctx->pc != 0x1FBE64u) { return; }
    }
    ctx->pc = 0x1FBE64u;
label_1fbe64:
    // 0x1fbe64: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1fbe64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1fbe68: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x1fbe68u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x1fbe6c: 0x8c23b7f0  lw          $v1, -0x4810($at)
    ctx->pc = 0x1fbe6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948848)));
    // 0x1fbe70: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1fbe70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fbe74: 0xc0bd978  jal         func_2F65E0
    ctx->pc = 0x1FBE74u;
    SET_GPR_U32(ctx, 31, 0x1FBE7Cu);
    ctx->pc = 0x1FBE78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBE74u;
            // 0x1fbe78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F65E0u;
    if (runtime->hasFunction(0x2F65E0u)) {
        auto targetFn = runtime->lookupFunction(0x2F65E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBE7Cu; }
        if (ctx->pc != 0x1FBE7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBuildPartsNum__9CSaveDataFi_0x2f65e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBE7Cu; }
        if (ctx->pc != 0x1FBE7Cu) { return; }
    }
    ctx->pc = 0x1FBE7Cu;
label_1fbe7c:
    // 0x1fbe7c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1fbe7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1fbe80: 0x8642010a  lh          $v0, 0x10A($s2)
    ctx->pc = 0x1fbe80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 266)));
    // 0x1fbe84: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1fbe84u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1fbe88: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1fbe88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fbe8c: 0xa642010a  sh          $v0, 0x10A($s2)
    ctx->pc = 0x1fbe8cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 266), (uint16_t)GPR_U32(ctx, 2));
label_1fbe90:
    // 0x1fbe90: 0x8642010a  lh          $v0, 0x10A($s2)
    ctx->pc = 0x1fbe90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 266)));
    // 0x1fbe94: 0x1c40000c  bgtz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FBE94u;
    {
        const bool branch_taken_0x1fbe94 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1FBE98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBE94u;
            // 0x1fbe98: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbe94) {
            ctx->pc = 0x1FBEC8u;
            goto label_1fbec8;
        }
    }
    ctx->pc = 0x1FBE9Cu;
    // 0x1fbe9c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1fbe9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1fbea0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fbea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbea4: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x1FBEA4u;
    SET_GPR_U32(ctx, 31, 0x1FBEACu);
    ctx->pc = 0x1FBEA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBEA4u;
            // 0x1fbea8: 0x24a58d98  addiu       $a1, $a1, -0x7268 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBEACu; }
        if (ctx->pc != 0x1FBEACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBEACu; }
        if (ctx->pc != 0x1FBEACu) { return; }
    }
    ctx->pc = 0x1FBEACu;
label_1fbeac:
    // 0x1fbeac: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1fbeacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1fbeb0: 0x8c24ca48  lw          $a0, -0x35B8($at)
    ctx->pc = 0x1fbeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953544)));
    // 0x1fbeb4: 0xc0877b8  jal         func_21DEE0
    ctx->pc = 0x1FBEB4u;
    SET_GPR_U32(ctx, 31, 0x1FBEBCu);
    ctx->pc = 0x1FBEB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBEB4u;
            // 0x1fbeb8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DEE0u;
    if (runtime->hasFunction(0x21DEE0u)) {
        auto targetFn = runtime->lookupFunction(0x21DEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBEBCu; }
        if (ctx->pc != 0x1FBEBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgVolumeNoOne__7CDC2MesFi_0x21dee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBEBCu; }
        if (ctx->pc != 0x1FBEBCu) { return; }
    }
    ctx->pc = 0x1FBEBCu;
label_1fbebc:
    // 0x1fbebc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fbebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fbec0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1FBEC0u;
    {
        const bool branch_taken_0x1fbec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBEC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBEC0u;
            // 0x1fbec4: 0xa6420002  sh          $v0, 0x2($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbec0) {
            ctx->pc = 0x1FBF64u;
            goto label_1fbf64;
        }
    }
    ctx->pc = 0x1FBEC8u;
label_1fbec8:
    // 0x1fbec8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1fbec8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1fbecc: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x1fbeccu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1fbed0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fbed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbed4: 0x24a58c48  addiu       $a1, $a1, -0x73B8
    ctx->pc = 0x1fbed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937672));
    // 0x1fbed8: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x1FBED8u;
    SET_GPR_U32(ctx, 31, 0x1FBEE0u);
    ctx->pc = 0x1FBEDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBED8u;
            // 0x1fbedc: 0xa6400002  sh          $zero, 0x2($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBEE0u; }
        if (ctx->pc != 0x1FBEE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBEE0u; }
        if (ctx->pc != 0x1FBEE0u) { return; }
    }
    ctx->pc = 0x1FBEE0u;
label_1fbee0:
    // 0x1fbee0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1fbee0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1fbee4: 0x8c24ca48  lw          $a0, -0x35B8($at)
    ctx->pc = 0x1fbee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953544)));
    // 0x1fbee8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1fbee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1fbeec: 0x3421b7c4  ori         $at, $at, 0xB7C4
    ctx->pc = 0x1fbeecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47044);
    // 0x1fbef0: 0x2413021  addu        $a2, $s2, $at
    ctx->pc = 0x1fbef0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x1fbef4: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1fbef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1fbef8: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x1fbef8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x1fbefc: 0xc07e7a4  jal         func_1F9E90
    ctx->pc = 0x1FBEFCu;
    SET_GPR_U32(ctx, 31, 0x1FBF04u);
    ctx->pc = 0x1FBF00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBEFCu;
            // 0x1fbf00: 0x8c25b7f0  lw          $a1, -0x4810($at) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948848)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F9E90u;
    if (runtime->hasFunction(0x1F9E90u)) {
        auto targetFn = runtime->lookupFunction(0x1F9E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBF04u; }
        if (ctx->pc != 0x1FBF04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsgPartsItemInfo__FP7CDC2MesP14CEditPartsInfoP21MENUFORM_MAKEBRD_INFO_0x1f9e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBF04u; }
        if (ctx->pc != 0x1FBF04u) { return; }
    }
    ctx->pc = 0x1FBF04u;
label_1fbf04:
    // 0x1fbf04: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1FBF04u;
    {
        const bool branch_taken_0x1fbf04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fbf04) {
            ctx->pc = 0x1FBF64u;
            goto label_1fbf64;
        }
    }
    ctx->pc = 0x1FBF0Cu;
label_1fbf0c:
    // 0x1fbf0c: 0xc07e738  jal         func_1F9CE0
    ctx->pc = 0x1FBF0Cu;
    SET_GPR_U32(ctx, 31, 0x1FBF14u);
    ctx->pc = 0x1FBF10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBF0Cu;
            // 0x1fbf10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F9CE0u;
    if (runtime->hasFunction(0x1F9CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1F9CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBF14u; }
        if (ctx->pc != 0x1FBF14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReturnSelectMode__12CMenuGeoramaFi_0x1f9ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBF14u; }
        if (ctx->pc != 0x1FBF14u) { return; }
    }
    ctx->pc = 0x1FBF14u;
label_1fbf14:
    // 0x1fbf14: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1FBF14u;
    {
        const bool branch_taken_0x1fbf14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fbf14) {
            ctx->pc = 0x1FBF64u;
            goto label_1fbf64;
        }
    }
    ctx->pc = 0x1FBF1Cu;
label_1fbf1c:
    // 0x1fbf1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fbf1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1fbf20:
    // 0x1fbf20: 0xc07e260  jal         func_1F8980
    ctx->pc = 0x1FBF20u;
    SET_GPR_U32(ctx, 31, 0x1FBF28u);
    ctx->pc = 0x1FBF24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBF20u;
            // 0x1fbf24: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F8980u;
    if (runtime->hasFunction(0x1F8980u)) {
        auto targetFn = runtime->lookupFunction(0x1F8980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBF28u; }
        if (ctx->pc != 0x1FBF28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ArrangePartsList__12CMenuGeoramaFii_0x1f8980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBF28u; }
        if (ctx->pc != 0x1FBF28u) { return; }
    }
    ctx->pc = 0x1FBF28u;
label_1fbf28:
    // 0x1fbf28: 0xc07e564  jal         func_1F9590
    ctx->pc = 0x1FBF28u;
    SET_GPR_U32(ctx, 31, 0x1FBF30u);
    ctx->pc = 0x1FBF2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBF28u;
            // 0x1fbf2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F9590u;
    if (runtime->hasFunction(0x1F9590u)) {
        auto targetFn = runtime->lookupFunction(0x1F9590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBF30u; }
        if (ctx->pc != 0x1FBF30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowModeLoadPartsID__12CMenuGeoramaFv_0x1f9590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBF30u; }
        if (ctx->pc != 0x1FBF30u) { return; }
    }
    ctx->pc = 0x1FBF30u;
label_1fbf30:
    // 0x1fbf30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fbf30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbf34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fbf34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbf38: 0xc07e5b0  jal         func_1F96C0
    ctx->pc = 0x1FBF38u;
    SET_GPR_U32(ctx, 31, 0x1FBF40u);
    ctx->pc = 0x1FBF3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBF38u;
            // 0x1fbf3c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F96C0u;
    if (runtime->hasFunction(0x1F96C0u)) {
        auto targetFn = runtime->lookupFunction(0x1F96C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBF40u; }
        if (ctx->pc != 0x1FBF40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadGeoramaPart__12CMenuGeoramaFii_0x1f96c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBF40u; }
        if (ctx->pc != 0x1FBF40u) { return; }
    }
    ctx->pc = 0x1FBF40u;
label_1fbf40:
    // 0x1fbf40: 0xc094274  jal         func_2509D0
    ctx->pc = 0x1FBF40u;
    SET_GPR_U32(ctx, 31, 0x1FBF48u);
    ctx->pc = 0x1FBF44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBF40u;
            // 0x1fbf44: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBF48u; }
        if (ctx->pc != 0x1FBF48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBF48u; }
        if (ctx->pc != 0x1FBF48u) { return; }
    }
    ctx->pc = 0x1FBF48u;
label_1fbf48:
    // 0x1fbf48: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1FBF48u;
    {
        const bool branch_taken_0x1fbf48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fbf48) {
            ctx->pc = 0x1FBF64u;
            goto label_1fbf64;
        }
    }
    ctx->pc = 0x1FBF50u;
label_1fbf50:
    // 0x1fbf50: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FBF50u;
    {
        const bool branch_taken_0x1fbf50 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBF50u;
            // 0x1fbf54: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbf50) {
            ctx->pc = 0x1FBF64u;
            goto label_1fbf64;
        }
    }
    ctx->pc = 0x1FBF58u;
    // 0x1fbf58: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x1FBF58u;
    SET_GPR_U32(ctx, 31, 0x1FBF60u);
    ctx->pc = 0x1FBF5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBF58u;
            // 0x1fbf5c: 0x24a58db0  addiu       $a1, $a1, -0x7250 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938032));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBF60u; }
        if (ctx->pc != 0x1FBF60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBF60u; }
        if (ctx->pc != 0x1FBF60u) { return; }
    }
    ctx->pc = 0x1FBF60u;
label_1fbf60:
    // 0x1fbf60: 0xa6400002  sh          $zero, 0x2($s2)
    ctx->pc = 0x1fbf60u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 0));
label_1fbf64:
    // 0x1fbf64: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1fbf64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1fbf68:
    // 0x1fbf68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fbf68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbf6c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1fbf6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fbf70: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1fbf70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fbf74: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fbf74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fbf78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fbf78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fbf7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fbf7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fbf80: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBF80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBF84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBF80u;
            // 0x1fbf84: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FBF88u;
}
