#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_REF_ROT__FP12RS_STACKDATAi
// Address: 0x1e4d70 - 0x1e4e2c
void ps2__GET_REF_ROT__FP12RS_STACKDATAi_0x1e4d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_REF_ROT__FP12RS_STACKDATAi_0x1e4d70");
#endif

    switch (ctx->pc) {
        case 0x1e4d70u: goto label_1e4d70;
        case 0x1e4d74u: goto label_1e4d74;
        case 0x1e4d78u: goto label_1e4d78;
        case 0x1e4d7cu: goto label_1e4d7c;
        case 0x1e4d80u: goto label_1e4d80;
        case 0x1e4d84u: goto label_1e4d84;
        case 0x1e4d88u: goto label_1e4d88;
        case 0x1e4d8cu: goto label_1e4d8c;
        case 0x1e4d90u: goto label_1e4d90;
        case 0x1e4d94u: goto label_1e4d94;
        case 0x1e4d98u: goto label_1e4d98;
        case 0x1e4d9cu: goto label_1e4d9c;
        case 0x1e4da0u: goto label_1e4da0;
        case 0x1e4da4u: goto label_1e4da4;
        case 0x1e4da8u: goto label_1e4da8;
        case 0x1e4dacu: goto label_1e4dac;
        case 0x1e4db0u: goto label_1e4db0;
        case 0x1e4db4u: goto label_1e4db4;
        case 0x1e4db8u: goto label_1e4db8;
        case 0x1e4dbcu: goto label_1e4dbc;
        case 0x1e4dc0u: goto label_1e4dc0;
        case 0x1e4dc4u: goto label_1e4dc4;
        case 0x1e4dc8u: goto label_1e4dc8;
        case 0x1e4dccu: goto label_1e4dcc;
        case 0x1e4dd0u: goto label_1e4dd0;
        case 0x1e4dd4u: goto label_1e4dd4;
        case 0x1e4dd8u: goto label_1e4dd8;
        case 0x1e4ddcu: goto label_1e4ddc;
        case 0x1e4de0u: goto label_1e4de0;
        case 0x1e4de4u: goto label_1e4de4;
        case 0x1e4de8u: goto label_1e4de8;
        case 0x1e4decu: goto label_1e4dec;
        case 0x1e4df0u: goto label_1e4df0;
        case 0x1e4df4u: goto label_1e4df4;
        case 0x1e4df8u: goto label_1e4df8;
        case 0x1e4dfcu: goto label_1e4dfc;
        case 0x1e4e00u: goto label_1e4e00;
        case 0x1e4e04u: goto label_1e4e04;
        case 0x1e4e08u: goto label_1e4e08;
        case 0x1e4e0cu: goto label_1e4e0c;
        case 0x1e4e10u: goto label_1e4e10;
        case 0x1e4e14u: goto label_1e4e14;
        case 0x1e4e18u: goto label_1e4e18;
        case 0x1e4e1cu: goto label_1e4e1c;
        case 0x1e4e20u: goto label_1e4e20;
        case 0x1e4e24u: goto label_1e4e24;
        case 0x1e4e28u: goto label_1e4e28;
        default: break;
    }

    ctx->pc = 0x1e4d70u;

label_1e4d70:
    // 0x1e4d70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e4d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1e4d74:
    // 0x1e4d74: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1e4d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1e4d78:
    // 0x1e4d78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e4d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e4d7c:
    // 0x1e4d7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e4d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e4d80:
    // 0x1e4d80: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
label_1e4d84:
    if (ctx->pc == 0x1E4D84u) {
        ctx->pc = 0x1E4D84u;
            // 0x1e4d84: 0xafa4002c  sw          $a0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
        ctx->pc = 0x1E4D88u;
        goto label_1e4d88;
    }
    ctx->pc = 0x1E4D80u;
    {
        const bool branch_taken_0x1e4d80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E4D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4D80u;
            // 0x1e4d84: 0xafa4002c  sw          $a0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4d80) {
            ctx->pc = 0x1E4D90u;
            goto label_1e4d90;
        }
    }
    ctx->pc = 0x1E4D88u;
label_1e4d88:
    // 0x1e4d88: 0x10000024  b           . + 4 + (0x24 << 2)
label_1e4d8c:
    if (ctx->pc == 0x1E4D8Cu) {
        ctx->pc = 0x1E4D8Cu;
            // 0x1e4d8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E4D90u;
        goto label_1e4d90;
    }
    ctx->pc = 0x1E4D88u;
    {
        const bool branch_taken_0x1e4d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4D88u;
            // 0x1e4d8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4d88) {
            ctx->pc = 0x1E4E1Cu;
            goto label_1e4e1c;
        }
    }
    ctx->pc = 0x1E4D90u;
label_1e4d90:
    // 0x1e4d90: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1e4d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1e4d94:
    // 0x1e4d94: 0xc0781cc  jal         func_1E0730
label_1e4d98:
    if (ctx->pc == 0x1E4D98u) {
        ctx->pc = 0x1E4D98u;
            // 0x1e4d98: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->pc = 0x1E4D9Cu;
        goto label_1e4d9c;
    }
    ctx->pc = 0x1E4D94u;
    SET_GPR_U32(ctx, 31, 0x1E4D9Cu);
    ctx->pc = 0x1E4D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4D94u;
            // 0x1e4d98: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0730u;
    if (runtime->hasFunction(0x1E0730u)) {
        auto targetFn = runtime->lookupFunction(0x1E0730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4D9Cu; }
        if (ctx->pc != 0x1E4D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfPP12RS_STACKDATA_0x1e0730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4D9Cu; }
        if (ctx->pc != 0x1E4D9Cu) { return; }
    }
    ctx->pc = 0x1E4D9Cu;
label_1e4d9c:
    // 0x1e4d9c: 0x8f848e70  lw          $a0, -0x7190($gp)
    ctx->pc = 0x1e4d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
label_1e4da0:
    // 0x1e4da0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e4da0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e4da4:
    // 0x1e4da4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1e4da4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1e4da8:
    // 0x1e4da8: 0x320f809  jalr        $t9
label_1e4dac:
    if (ctx->pc == 0x1E4DACu) {
        ctx->pc = 0x1E4DACu;
            // 0x1e4dac: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1E4DB0u;
        goto label_1e4db0;
    }
    ctx->pc = 0x1E4DA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E4DB0u);
        ctx->pc = 0x1E4DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4DA8u;
            // 0x1e4dac: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E4DB0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E4DB0u; }
            if (ctx->pc != 0x1E4DB0u) { return; }
        }
        }
    }
    ctx->pc = 0x1E4DB0u;
label_1e4db0:
    // 0x1e4db0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1e4db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1e4db4:
    // 0x1e4db4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1e4db4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1e4db8:
    // 0x1e4db8: 0xc041c3e  jal         func_1070F8
label_1e4dbc:
    if (ctx->pc == 0x1E4DBCu) {
        ctx->pc = 0x1E4DBCu;
            // 0x1e4dbc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E4DC0u;
        goto label_1e4dc0;
    }
    ctx->pc = 0x1E4DB8u;
    SET_GPR_U32(ctx, 31, 0x1E4DC0u);
    ctx->pc = 0x1E4DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4DB8u;
            // 0x1e4dbc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4DC0u; }
        if (ctx->pc != 0x1E4DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4DC0u; }
        if (ctx->pc != 0x1E4DC0u) { return; }
    }
    ctx->pc = 0x1E4DC0u;
label_1e4dc0:
    // 0x1e4dc0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1e4dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1e4dc4:
    // 0x1e4dc4: 0xc041be0  jal         func_106F80
label_1e4dc8:
    if (ctx->pc == 0x1E4DC8u) {
        ctx->pc = 0x1E4DC8u;
            // 0x1e4dc8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E4DCCu;
        goto label_1e4dcc;
    }
    ctx->pc = 0x1E4DC4u;
    SET_GPR_U32(ctx, 31, 0x1E4DCCu);
    ctx->pc = 0x1E4DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4DC4u;
            // 0x1e4dc8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4DCCu; }
        if (ctx->pc != 0x1E4DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4DCCu; }
        if (ctx->pc != 0x1E4DCCu) { return; }
    }
    ctx->pc = 0x1E4DCCu;
label_1e4dcc:
    // 0x1e4dcc: 0x27b00048  addiu       $s0, $sp, 0x48
    ctx->pc = 0x1e4dccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_1e4dd0:
    // 0x1e4dd0: 0xc60d0000  lwc1        $f13, 0x0($s0)
    ctx->pc = 0x1e4dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1e4dd4:
    // 0x1e4dd4: 0xc047c76  jal         func_11F1D8
label_1e4dd8:
    if (ctx->pc == 0x1E4DD8u) {
        ctx->pc = 0x1E4DD8u;
            // 0x1e4dd8: 0xc7ac0040  lwc1        $f12, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1E4DDCu;
        goto label_1e4ddc;
    }
    ctx->pc = 0x1E4DD4u;
    SET_GPR_U32(ctx, 31, 0x1E4DDCu);
    ctx->pc = 0x1E4DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4DD4u;
            // 0x1e4dd8: 0xc7ac0040  lwc1        $f12, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4DDCu; }
        if (ctx->pc != 0x1E4DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4DDCu; }
        if (ctx->pc != 0x1E4DDCu) { return; }
    }
    ctx->pc = 0x1E4DDCu;
label_1e4ddc:
    // 0x1e4ddc: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1e4ddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1e4de0:
    // 0x1e4de0: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x1e4de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e4de4:
    // 0x1e4de4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1e4de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e4de8:
    // 0x1e4de8: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x1e4de8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_1e4dec:
    // 0x1e4dec: 0xc047cc0  jal         func_11F300
label_1e4df0:
    if (ctx->pc == 0x1E4DF0u) {
        ctx->pc = 0x1E4DF0u;
            // 0x1e4df0: 0x4600031c  madd.s      $f12, $f0, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
        ctx->pc = 0x1E4DF4u;
        goto label_1e4df4;
    }
    ctx->pc = 0x1E4DECu;
    SET_GPR_U32(ctx, 31, 0x1E4DF4u);
    ctx->pc = 0x1E4DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4DECu;
            // 0x1e4df0: 0x4600031c  madd.s      $f12, $f0, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F300u;
    if (runtime->hasFunction(0x11F300u)) {
        auto targetFn = runtime->lookupFunction(0x11F300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4DF4u; }
        if (ctx->pc != 0x1E4DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x11f300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4DF4u; }
        if (ctx->pc != 0x1E4DF4u) { return; }
    }
    ctx->pc = 0x1E4DF4u;
label_1e4df4:
    // 0x1e4df4: 0xc7ac0044  lwc1        $f12, 0x44($sp)
    ctx->pc = 0x1e4df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e4df8:
    // 0x1e4df8: 0xc047c76  jal         func_11F1D8
label_1e4dfc:
    if (ctx->pc == 0x1E4DFCu) {
        ctx->pc = 0x1E4DFCu;
            // 0x1e4dfc: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1E4E00u;
        goto label_1e4e00;
    }
    ctx->pc = 0x1E4DF8u;
    SET_GPR_U32(ctx, 31, 0x1E4E00u);
    ctx->pc = 0x1E4DFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4DF8u;
            // 0x1e4dfc: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4E00u; }
        if (ctx->pc != 0x1E4E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4E00u; }
        if (ctx->pc != 0x1E4E00u) { return; }
    }
    ctx->pc = 0x1E4E00u;
label_1e4e00:
    // 0x1e4e00: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1e4e00u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1e4e04:
    // 0x1e4e04: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1e4e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1e4e08:
    // 0x1e4e08: 0x27a5002c  addiu       $a1, $sp, 0x2C
    ctx->pc = 0x1e4e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_1e4e0c:
    // 0x1e4e0c: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x1e4e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_1e4e10:
    // 0x1e4e10: 0xc0781e4  jal         func_1E0790
label_1e4e14:
    if (ctx->pc == 0x1E4E14u) {
        ctx->pc = 0x1E4E14u;
            // 0x1e4e14: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->pc = 0x1E4E18u;
        goto label_1e4e18;
    }
    ctx->pc = 0x1E4E10u;
    SET_GPR_U32(ctx, 31, 0x1E4E18u);
    ctx->pc = 0x1E4E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4E10u;
            // 0x1e4e14: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0790u;
    if (runtime->hasFunction(0x1E0790u)) {
        auto targetFn = runtime->lookupFunction(0x1E0790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4E18u; }
        if (ctx->pc != 0x1E4E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStackVector__FPfPP12RS_STACKDATA_0x1e0790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4E18u; }
        if (ctx->pc != 0x1E4E18u) { return; }
    }
    ctx->pc = 0x1E4E18u;
label_1e4e18:
    // 0x1e4e18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e4e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e4e1c:
    // 0x1e4e1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e4e1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e4e20:
    // 0x1e4e20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e4e20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e4e24:
    // 0x1e4e24: 0x3e00008  jr          $ra
label_1e4e28:
    if (ctx->pc == 0x1E4E28u) {
        ctx->pc = 0x1E4E28u;
            // 0x1e4e28: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1E4E2Cu;
        goto label_fallthrough_0x1e4e24;
    }
    ctx->pc = 0x1E4E24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4E24u;
            // 0x1e4e28: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1e4e24:
    ctx->pc = 0x1E4E2Cu;
}
