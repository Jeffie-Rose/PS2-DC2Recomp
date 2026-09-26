#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CHR_SET_MOTION2__FP12RS_STACKDATAi
// Address: 0x2e4d20 - 0x2e4e28
void ps2__CHR_SET_MOTION2__FP12RS_STACKDATAi_0x2e4d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CHR_SET_MOTION2__FP12RS_STACKDATAi_0x2e4d20");
#endif

    switch (ctx->pc) {
        case 0x2e4d20u: goto label_2e4d20;
        case 0x2e4d24u: goto label_2e4d24;
        case 0x2e4d28u: goto label_2e4d28;
        case 0x2e4d2cu: goto label_2e4d2c;
        case 0x2e4d30u: goto label_2e4d30;
        case 0x2e4d34u: goto label_2e4d34;
        case 0x2e4d38u: goto label_2e4d38;
        case 0x2e4d3cu: goto label_2e4d3c;
        case 0x2e4d40u: goto label_2e4d40;
        case 0x2e4d44u: goto label_2e4d44;
        case 0x2e4d48u: goto label_2e4d48;
        case 0x2e4d4cu: goto label_2e4d4c;
        case 0x2e4d50u: goto label_2e4d50;
        case 0x2e4d54u: goto label_2e4d54;
        case 0x2e4d58u: goto label_2e4d58;
        case 0x2e4d5cu: goto label_2e4d5c;
        case 0x2e4d60u: goto label_2e4d60;
        case 0x2e4d64u: goto label_2e4d64;
        case 0x2e4d68u: goto label_2e4d68;
        case 0x2e4d6cu: goto label_2e4d6c;
        case 0x2e4d70u: goto label_2e4d70;
        case 0x2e4d74u: goto label_2e4d74;
        case 0x2e4d78u: goto label_2e4d78;
        case 0x2e4d7cu: goto label_2e4d7c;
        case 0x2e4d80u: goto label_2e4d80;
        case 0x2e4d84u: goto label_2e4d84;
        case 0x2e4d88u: goto label_2e4d88;
        case 0x2e4d8cu: goto label_2e4d8c;
        case 0x2e4d90u: goto label_2e4d90;
        case 0x2e4d94u: goto label_2e4d94;
        case 0x2e4d98u: goto label_2e4d98;
        case 0x2e4d9cu: goto label_2e4d9c;
        case 0x2e4da0u: goto label_2e4da0;
        case 0x2e4da4u: goto label_2e4da4;
        case 0x2e4da8u: goto label_2e4da8;
        case 0x2e4dacu: goto label_2e4dac;
        case 0x2e4db0u: goto label_2e4db0;
        case 0x2e4db4u: goto label_2e4db4;
        case 0x2e4db8u: goto label_2e4db8;
        case 0x2e4dbcu: goto label_2e4dbc;
        case 0x2e4dc0u: goto label_2e4dc0;
        case 0x2e4dc4u: goto label_2e4dc4;
        case 0x2e4dc8u: goto label_2e4dc8;
        case 0x2e4dccu: goto label_2e4dcc;
        case 0x2e4dd0u: goto label_2e4dd0;
        case 0x2e4dd4u: goto label_2e4dd4;
        case 0x2e4dd8u: goto label_2e4dd8;
        case 0x2e4ddcu: goto label_2e4ddc;
        case 0x2e4de0u: goto label_2e4de0;
        case 0x2e4de4u: goto label_2e4de4;
        case 0x2e4de8u: goto label_2e4de8;
        case 0x2e4decu: goto label_2e4dec;
        case 0x2e4df0u: goto label_2e4df0;
        case 0x2e4df4u: goto label_2e4df4;
        case 0x2e4df8u: goto label_2e4df8;
        case 0x2e4dfcu: goto label_2e4dfc;
        case 0x2e4e00u: goto label_2e4e00;
        case 0x2e4e04u: goto label_2e4e04;
        case 0x2e4e08u: goto label_2e4e08;
        case 0x2e4e0cu: goto label_2e4e0c;
        case 0x2e4e10u: goto label_2e4e10;
        case 0x2e4e14u: goto label_2e4e14;
        case 0x2e4e18u: goto label_2e4e18;
        case 0x2e4e1cu: goto label_2e4e1c;
        case 0x2e4e20u: goto label_2e4e20;
        case 0x2e4e24u: goto label_2e4e24;
        default: break;
    }

    ctx->pc = 0x2e4d20u;

label_2e4d20:
    // 0x2e4d20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e4d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2e4d24:
    // 0x2e4d24: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2e4d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2e4d28:
    // 0x2e4d28: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2e4d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_2e4d2c:
    // 0x2e4d2c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2e4d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2e4d30:
    // 0x2e4d30: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e4d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2e4d34:
    // 0x2e4d34: 0x24920008  addiu       $s2, $a0, 0x8
    ctx->pc = 0x2e4d34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_2e4d38:
    // 0x2e4d38: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e4d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2e4d3c:
    // 0x2e4d3c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2e4d3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2e4d40:
    // 0x2e4d40: 0xc0b8ca0  jal         func_2E3280
label_2e4d44:
    if (ctx->pc == 0x2E4D44u) {
        ctx->pc = 0x2E4D44u;
            // 0x2e4d44: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x2E4D48u;
        goto label_2e4d48;
    }
    ctx->pc = 0x2E4D40u;
    SET_GPR_U32(ctx, 31, 0x2E4D48u);
    ctx->pc = 0x2E4D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4D40u;
            // 0x2e4d44: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4D48u; }
        if (ctx->pc != 0x2E4D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4D48u; }
        if (ctx->pc != 0x2E4D48u) { return; }
    }
    ctx->pc = 0x2E4D48u;
label_2e4d48:
    // 0x2e4d48: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x2e4d48u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2e4d4c:
    // 0x2e4d4c: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e4d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
label_2e4d50:
    // 0x2e4d50: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2e4d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2e4d54:
    // 0x2e4d54: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x2e4d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2e4d58:
    // 0x2e4d58: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2e4d5c:
    if (ctx->pc == 0x2E4D5Cu) {
        ctx->pc = 0x2E4D5Cu;
            // 0x2e4d5c: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->pc = 0x2E4D60u;
        goto label_2e4d60;
    }
    ctx->pc = 0x2E4D58u;
    {
        const bool branch_taken_0x2e4d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E4D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4D58u;
            // 0x2e4d5c: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4d58) {
            ctx->pc = 0x2E4D68u;
            goto label_2e4d68;
        }
    }
    ctx->pc = 0x2E4D60u;
label_2e4d60:
    // 0x2e4d60: 0x10000029  b           . + 4 + (0x29 << 2)
label_2e4d64:
    if (ctx->pc == 0x2E4D64u) {
        ctx->pc = 0x2E4D64u;
            // 0x2e4d64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E4D68u;
        goto label_2e4d68;
    }
    ctx->pc = 0x2E4D60u;
    {
        const bool branch_taken_0x2e4d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4D60u;
            // 0x2e4d64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4d60) {
            ctx->pc = 0x2E4E08u;
            goto label_2e4e08;
        }
    }
    ctx->pc = 0x2E4D68u;
label_2e4d68:
    // 0x2e4d68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e4d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e4d6c:
    // 0x2e4d6c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x2e4d6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2e4d70:
    // 0x2e4d70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e4d70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e4d74:
    // 0x2e4d74: 0xc0b8cd0  jal         func_2E3340
label_2e4d78:
    if (ctx->pc == 0x2E4D78u) {
        ctx->pc = 0x2E4D78u;
            // 0x2e4d78: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x2E4D7Cu;
        goto label_2e4d7c;
    }
    ctx->pc = 0x2E4D74u;
    SET_GPR_U32(ctx, 31, 0x2E4D7Cu);
    ctx->pc = 0x2E4D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4D74u;
            // 0x2e4d78: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3340u;
    if (runtime->hasFunction(0x2E3340u)) {
        auto targetFn = runtime->lookupFunction(0x2E3340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4D7Cu; }
        if (ctx->pc != 0x2E4D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x2e3340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4D7Cu; }
        if (ctx->pc != 0x2E4D7Cu) { return; }
    }
    ctx->pc = 0x2E4D7Cu;
label_2e4d7c:
    // 0x2e4d7c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2e4d7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e4d80:
    // 0x2e4d80: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x2e4d80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_2e4d84:
    // 0x2e4d84: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2e4d88:
    if (ctx->pc == 0x2E4D88u) {
        ctx->pc = 0x2E4D88u;
            // 0x2e4d88: 0x2a220003  slti        $v0, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->pc = 0x2E4D8Cu;
        goto label_2e4d8c;
    }
    ctx->pc = 0x2E4D84u;
    {
        const bool branch_taken_0x2e4d84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E4D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4D84u;
            // 0x2e4d88: 0x2a220003  slti        $v0, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4d84) {
            ctx->pc = 0x2E4DA0u;
            goto label_2e4da0;
        }
    }
    ctx->pc = 0x2E4D8Cu;
label_2e4d8c:
    // 0x2e4d8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e4d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e4d90:
    // 0x2e4d90: 0xc0b8cb0  jal         func_2E32C0
label_2e4d94:
    if (ctx->pc == 0x2E4D94u) {
        ctx->pc = 0x2E4D94u;
            // 0x2e4d94: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x2E4D98u;
        goto label_2e4d98;
    }
    ctx->pc = 0x2E4D90u;
    SET_GPR_U32(ctx, 31, 0x2E4D98u);
    ctx->pc = 0x2E4D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4D90u;
            // 0x2e4d94: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4D98u; }
        if (ctx->pc != 0x2E4D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4D98u; }
        if (ctx->pc != 0x2E4D98u) { return; }
    }
    ctx->pc = 0x2E4D98u;
label_2e4d98:
    // 0x2e4d98: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2e4d98u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2e4d9c:
    // 0x2e4d9c: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x2e4d9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
label_2e4da0:
    // 0x2e4da0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2e4da4:
    if (ctx->pc == 0x2E4DA4u) {
        ctx->pc = 0x2E4DA4u;
            // 0x2e4da4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E4DA8u;
        goto label_2e4da8;
    }
    ctx->pc = 0x2E4DA0u;
    {
        const bool branch_taken_0x2e4da0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E4DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4DA0u;
            // 0x2e4da4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4da0) {
            ctx->pc = 0x2E4DB4u;
            goto label_2e4db4;
        }
    }
    ctx->pc = 0x2E4DA8u;
label_2e4da8:
    // 0x2e4da8: 0xc0b8ca0  jal         func_2E3280
label_2e4dac:
    if (ctx->pc == 0x2E4DACu) {
        ctx->pc = 0x2E4DB0u;
        goto label_2e4db0;
    }
    ctx->pc = 0x2E4DA8u;
    SET_GPR_U32(ctx, 31, 0x2E4DB0u);
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4DB0u; }
        if (ctx->pc != 0x2E4DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4DB0u; }
        if (ctx->pc != 0x2E4DB0u) { return; }
    }
    ctx->pc = 0x2E4DB0u;
label_2e4db0:
    // 0x2e4db0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2e4db0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e4db4:
    // 0x2e4db4: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e4db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
label_2e4db8:
    // 0x2e4db8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2e4db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2e4dbc:
    // 0x2e4dbc: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x2e4dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2e4dc0:
    // 0x2e4dc0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e4dc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e4dc4:
    // 0x2e4dc4: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x2e4dc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_2e4dc8:
    // 0x2e4dc8: 0x320f809  jalr        $t9
label_2e4dcc:
    if (ctx->pc == 0x2E4DCCu) {
        ctx->pc = 0x2E4DCCu;
            // 0x2e4dcc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E4DD0u;
        goto label_2e4dd0;
    }
    ctx->pc = 0x2E4DC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E4DD0u);
        ctx->pc = 0x2E4DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4DC8u;
            // 0x2e4dcc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E4DD0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E4DD0u; }
            if (ctx->pc != 0x2E4DD0u) { return; }
        }
        }
    }
    ctx->pc = 0x2E4DD0u;
label_2e4dd0:
    // 0x2e4dd0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e4dd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e4dd4:
    // 0x2e4dd4: 0x0  nop
    ctx->pc = 0x2e4dd4u;
    // NOP
label_2e4dd8:
    // 0x2e4dd8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2e4dd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e4ddc:
    // 0x2e4ddc: 0x0  nop
    ctx->pc = 0x2e4ddcu;
    // NOP
label_2e4de0:
    // 0x2e4de0: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_2e4de4:
    if (ctx->pc == 0x2E4DE4u) {
        ctx->pc = 0x2E4DE4u;
            // 0x2e4de4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2E4DE8u;
        goto label_2e4de8;
    }
    ctx->pc = 0x2E4DE0u;
    {
        const bool branch_taken_0x2e4de0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E4DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4DE0u;
            // 0x2e4de4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4de0) {
            ctx->pc = 0x2E4E08u;
            goto label_2e4e08;
        }
    }
    ctx->pc = 0x2E4DE8u;
label_2e4de8:
    // 0x2e4de8: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e4de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
label_2e4dec:
    // 0x2e4dec: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2e4decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2e4df0:
    // 0x2e4df0: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x2e4df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2e4df4:
    // 0x2e4df4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e4df4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e4df8:
    // 0x2e4df8: 0x8f3900b8  lw          $t9, 0xB8($t9)
    ctx->pc = 0x2e4df8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 184)));
label_2e4dfc:
    // 0x2e4dfc: 0x320f809  jalr        $t9
label_2e4e00:
    if (ctx->pc == 0x2E4E00u) {
        ctx->pc = 0x2E4E00u;
            // 0x2e4e00: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x2E4E04u;
        goto label_2e4e04;
    }
    ctx->pc = 0x2E4DFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E4E04u);
        ctx->pc = 0x2E4E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4DFCu;
            // 0x2e4e00: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E4E04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E4E04u; }
            if (ctx->pc != 0x2E4E04u) { return; }
        }
        }
    }
    ctx->pc = 0x2E4E04u;
label_2e4e04:
    // 0x2e4e04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e4e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e4e08:
    // 0x2e4e08: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2e4e08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2e4e0c:
    // 0x2e4e0c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2e4e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2e4e10:
    // 0x2e4e10: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2e4e10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2e4e14:
    // 0x2e4e14: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2e4e14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2e4e18:
    // 0x2e4e18: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e4e18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2e4e1c:
    // 0x2e4e1c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e4e1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e4e20:
    // 0x2e4e20: 0x3e00008  jr          $ra
label_2e4e24:
    if (ctx->pc == 0x2E4E24u) {
        ctx->pc = 0x2E4E24u;
            // 0x2e4e24: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2E4E28u;
        goto label_fallthrough_0x2e4e20;
    }
    ctx->pc = 0x2E4E20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4E20u;
            // 0x2e4e24: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2e4e20:
    ctx->pc = 0x2E4E28u;
}
