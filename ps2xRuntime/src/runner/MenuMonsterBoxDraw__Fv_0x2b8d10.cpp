#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuMonsterBoxDraw__Fv
// Address: 0x2b8d10 - 0x2b8f3c
void MenuMonsterBoxDraw__Fv_0x2b8d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuMonsterBoxDraw__Fv_0x2b8d10");
#endif

    switch (ctx->pc) {
        case 0x2b8d10u: goto label_2b8d10;
        case 0x2b8d14u: goto label_2b8d14;
        case 0x2b8d18u: goto label_2b8d18;
        case 0x2b8d1cu: goto label_2b8d1c;
        case 0x2b8d20u: goto label_2b8d20;
        case 0x2b8d24u: goto label_2b8d24;
        case 0x2b8d28u: goto label_2b8d28;
        case 0x2b8d2cu: goto label_2b8d2c;
        case 0x2b8d30u: goto label_2b8d30;
        case 0x2b8d34u: goto label_2b8d34;
        case 0x2b8d38u: goto label_2b8d38;
        case 0x2b8d3cu: goto label_2b8d3c;
        case 0x2b8d40u: goto label_2b8d40;
        case 0x2b8d44u: goto label_2b8d44;
        case 0x2b8d48u: goto label_2b8d48;
        case 0x2b8d4cu: goto label_2b8d4c;
        case 0x2b8d50u: goto label_2b8d50;
        case 0x2b8d54u: goto label_2b8d54;
        case 0x2b8d58u: goto label_2b8d58;
        case 0x2b8d5cu: goto label_2b8d5c;
        case 0x2b8d60u: goto label_2b8d60;
        case 0x2b8d64u: goto label_2b8d64;
        case 0x2b8d68u: goto label_2b8d68;
        case 0x2b8d6cu: goto label_2b8d6c;
        case 0x2b8d70u: goto label_2b8d70;
        case 0x2b8d74u: goto label_2b8d74;
        case 0x2b8d78u: goto label_2b8d78;
        case 0x2b8d7cu: goto label_2b8d7c;
        case 0x2b8d80u: goto label_2b8d80;
        case 0x2b8d84u: goto label_2b8d84;
        case 0x2b8d88u: goto label_2b8d88;
        case 0x2b8d8cu: goto label_2b8d8c;
        case 0x2b8d90u: goto label_2b8d90;
        case 0x2b8d94u: goto label_2b8d94;
        case 0x2b8d98u: goto label_2b8d98;
        case 0x2b8d9cu: goto label_2b8d9c;
        case 0x2b8da0u: goto label_2b8da0;
        case 0x2b8da4u: goto label_2b8da4;
        case 0x2b8da8u: goto label_2b8da8;
        case 0x2b8dacu: goto label_2b8dac;
        case 0x2b8db0u: goto label_2b8db0;
        case 0x2b8db4u: goto label_2b8db4;
        case 0x2b8db8u: goto label_2b8db8;
        case 0x2b8dbcu: goto label_2b8dbc;
        case 0x2b8dc0u: goto label_2b8dc0;
        case 0x2b8dc4u: goto label_2b8dc4;
        case 0x2b8dc8u: goto label_2b8dc8;
        case 0x2b8dccu: goto label_2b8dcc;
        case 0x2b8dd0u: goto label_2b8dd0;
        case 0x2b8dd4u: goto label_2b8dd4;
        case 0x2b8dd8u: goto label_2b8dd8;
        case 0x2b8ddcu: goto label_2b8ddc;
        case 0x2b8de0u: goto label_2b8de0;
        case 0x2b8de4u: goto label_2b8de4;
        case 0x2b8de8u: goto label_2b8de8;
        case 0x2b8decu: goto label_2b8dec;
        case 0x2b8df0u: goto label_2b8df0;
        case 0x2b8df4u: goto label_2b8df4;
        case 0x2b8df8u: goto label_2b8df8;
        case 0x2b8dfcu: goto label_2b8dfc;
        case 0x2b8e00u: goto label_2b8e00;
        case 0x2b8e04u: goto label_2b8e04;
        case 0x2b8e08u: goto label_2b8e08;
        case 0x2b8e0cu: goto label_2b8e0c;
        case 0x2b8e10u: goto label_2b8e10;
        case 0x2b8e14u: goto label_2b8e14;
        case 0x2b8e18u: goto label_2b8e18;
        case 0x2b8e1cu: goto label_2b8e1c;
        case 0x2b8e20u: goto label_2b8e20;
        case 0x2b8e24u: goto label_2b8e24;
        case 0x2b8e28u: goto label_2b8e28;
        case 0x2b8e2cu: goto label_2b8e2c;
        case 0x2b8e30u: goto label_2b8e30;
        case 0x2b8e34u: goto label_2b8e34;
        case 0x2b8e38u: goto label_2b8e38;
        case 0x2b8e3cu: goto label_2b8e3c;
        case 0x2b8e40u: goto label_2b8e40;
        case 0x2b8e44u: goto label_2b8e44;
        case 0x2b8e48u: goto label_2b8e48;
        case 0x2b8e4cu: goto label_2b8e4c;
        case 0x2b8e50u: goto label_2b8e50;
        case 0x2b8e54u: goto label_2b8e54;
        case 0x2b8e58u: goto label_2b8e58;
        case 0x2b8e5cu: goto label_2b8e5c;
        case 0x2b8e60u: goto label_2b8e60;
        case 0x2b8e64u: goto label_2b8e64;
        case 0x2b8e68u: goto label_2b8e68;
        case 0x2b8e6cu: goto label_2b8e6c;
        case 0x2b8e70u: goto label_2b8e70;
        case 0x2b8e74u: goto label_2b8e74;
        case 0x2b8e78u: goto label_2b8e78;
        case 0x2b8e7cu: goto label_2b8e7c;
        case 0x2b8e80u: goto label_2b8e80;
        case 0x2b8e84u: goto label_2b8e84;
        case 0x2b8e88u: goto label_2b8e88;
        case 0x2b8e8cu: goto label_2b8e8c;
        case 0x2b8e90u: goto label_2b8e90;
        case 0x2b8e94u: goto label_2b8e94;
        case 0x2b8e98u: goto label_2b8e98;
        case 0x2b8e9cu: goto label_2b8e9c;
        case 0x2b8ea0u: goto label_2b8ea0;
        case 0x2b8ea4u: goto label_2b8ea4;
        case 0x2b8ea8u: goto label_2b8ea8;
        case 0x2b8eacu: goto label_2b8eac;
        case 0x2b8eb0u: goto label_2b8eb0;
        case 0x2b8eb4u: goto label_2b8eb4;
        case 0x2b8eb8u: goto label_2b8eb8;
        case 0x2b8ebcu: goto label_2b8ebc;
        case 0x2b8ec0u: goto label_2b8ec0;
        case 0x2b8ec4u: goto label_2b8ec4;
        case 0x2b8ec8u: goto label_2b8ec8;
        case 0x2b8eccu: goto label_2b8ecc;
        case 0x2b8ed0u: goto label_2b8ed0;
        case 0x2b8ed4u: goto label_2b8ed4;
        case 0x2b8ed8u: goto label_2b8ed8;
        case 0x2b8edcu: goto label_2b8edc;
        case 0x2b8ee0u: goto label_2b8ee0;
        case 0x2b8ee4u: goto label_2b8ee4;
        case 0x2b8ee8u: goto label_2b8ee8;
        case 0x2b8eecu: goto label_2b8eec;
        case 0x2b8ef0u: goto label_2b8ef0;
        case 0x2b8ef4u: goto label_2b8ef4;
        case 0x2b8ef8u: goto label_2b8ef8;
        case 0x2b8efcu: goto label_2b8efc;
        case 0x2b8f00u: goto label_2b8f00;
        case 0x2b8f04u: goto label_2b8f04;
        case 0x2b8f08u: goto label_2b8f08;
        case 0x2b8f0cu: goto label_2b8f0c;
        case 0x2b8f10u: goto label_2b8f10;
        case 0x2b8f14u: goto label_2b8f14;
        case 0x2b8f18u: goto label_2b8f18;
        case 0x2b8f1cu: goto label_2b8f1c;
        case 0x2b8f20u: goto label_2b8f20;
        case 0x2b8f24u: goto label_2b8f24;
        case 0x2b8f28u: goto label_2b8f28;
        case 0x2b8f2cu: goto label_2b8f2c;
        case 0x2b8f30u: goto label_2b8f30;
        case 0x2b8f34u: goto label_2b8f34;
        case 0x2b8f38u: goto label_2b8f38;
        default: break;
    }

    ctx->pc = 0x2b8d10u;

label_2b8d10:
    // 0x2b8d10: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x2b8d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_2b8d14:
    // 0x2b8d14: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2b8d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2b8d18:
    // 0x2b8d18: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2b8d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2b8d1c:
    // 0x2b8d1c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2b8d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2b8d20:
    // 0x2b8d20: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2b8d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2b8d24:
    // 0x2b8d24: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b8d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2b8d28:
    // 0x2b8d28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b8d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2b8d2c:
    // 0x2b8d2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b8d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2b8d30:
    // 0x2b8d30: 0xc08ad0c  jal         func_22B430
label_2b8d34:
    if (ctx->pc == 0x2B8D34u) {
        ctx->pc = 0x2B8D34u;
            // 0x2b8d34: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->pc = 0x2B8D38u;
        goto label_2b8d38;
    }
    ctx->pc = 0x2B8D30u;
    SET_GPR_U32(ctx, 31, 0x2B8D38u);
    ctx->pc = 0x2B8D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8D30u;
            // 0x2b8d34: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B430u;
    if (runtime->hasFunction(0x22B430u)) {
        auto targetFn = runtime->lookupFunction(0x22B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8D38u; }
        if (ctx->pc != 0x2B8D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FormDraw__14CPosDataManageFv_0x22b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8D38u; }
        if (ctx->pc != 0x2B8D38u) { return; }
    }
    ctx->pc = 0x2B8D38u;
label_2b8d38:
    // 0x2b8d38: 0x8f829be8  lw          $v0, -0x6418($gp)
    ctx->pc = 0x2b8d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941672)));
label_2b8d3c:
    // 0x2b8d3c: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x2b8d3cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
label_2b8d40:
    // 0x2b8d40: 0x26101ef0  addiu       $s0, $s0, 0x1EF0
    ctx->pc = 0x2b8d40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7920));
label_2b8d44:
    // 0x2b8d44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b8d44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b8d48:
    // 0x2b8d48: 0x8c451c7c  lw          $a1, 0x1C7C($v0)
    ctx->pc = 0x2b8d48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7292)));
label_2b8d4c:
    // 0x2b8d4c: 0xc04ba14  jal         func_12E850
label_2b8d50:
    if (ctx->pc == 0x2B8D50u) {
        ctx->pc = 0x2B8D50u;
            // 0x2b8d50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B8D54u;
        goto label_2b8d54;
    }
    ctx->pc = 0x2B8D4Cu;
    SET_GPR_U32(ctx, 31, 0x2B8D54u);
    ctx->pc = 0x2B8D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8D4Cu;
            // 0x2b8d50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8D54u; }
        if (ctx->pc != 0x2B8D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8D54u; }
        if (ctx->pc != 0x2B8D54u) { return; }
    }
    ctx->pc = 0x2B8D54u;
label_2b8d54:
    // 0x2b8d54: 0x8f849be8  lw          $a0, -0x6418($gp)
    ctx->pc = 0x2b8d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941672)));
label_2b8d58:
    // 0x2b8d58: 0x8c832420  lw          $v1, 0x2420($a0)
    ctx->pc = 0x2b8d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 9248)));
label_2b8d5c:
    // 0x2b8d5c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_2b8d60:
    if (ctx->pc == 0x2B8D60u) {
        ctx->pc = 0x2B8D64u;
        goto label_2b8d64;
    }
    ctx->pc = 0x2B8D5Cu;
    {
        const bool branch_taken_0x2b8d5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8d5c) {
            ctx->pc = 0x2B8D78u;
            goto label_2b8d78;
        }
    }
    ctx->pc = 0x2B8D64u;
label_2b8d64:
    // 0x2b8d64: 0xc087898  jal         func_21E260
label_2b8d68:
    if (ctx->pc == 0x2B8D68u) {
        ctx->pc = 0x2B8D68u;
            // 0x2b8d68: 0x24840150  addiu       $a0, $a0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
        ctx->pc = 0x2B8D6Cu;
        goto label_2b8d6c;
    }
    ctx->pc = 0x2B8D64u;
    SET_GPR_U32(ctx, 31, 0x2B8D6Cu);
    ctx->pc = 0x2B8D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8D64u;
            // 0x2b8d68: 0x24840150  addiu       $a0, $a0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8D6Cu; }
        if (ctx->pc != 0x2B8D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8D6Cu; }
        if (ctx->pc != 0x2B8D6Cu) { return; }
    }
    ctx->pc = 0x2B8D6Cu;
label_2b8d6c:
    // 0x2b8d6c: 0x8f829be8  lw          $v0, -0x6418($gp)
    ctx->pc = 0x2b8d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941672)));
label_2b8d70:
    // 0x2b8d70: 0xc0878c8  jal         func_21E320
label_2b8d74:
    if (ctx->pc == 0x2B8D74u) {
        ctx->pc = 0x2B8D74u;
            // 0x2b8d74: 0x24440150  addiu       $a0, $v0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
        ctx->pc = 0x2B8D78u;
        goto label_2b8d78;
    }
    ctx->pc = 0x2B8D70u;
    SET_GPR_U32(ctx, 31, 0x2B8D78u);
    ctx->pc = 0x2B8D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8D70u;
            // 0x2b8d74: 0x24440150  addiu       $a0, $v0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E320u;
    if (runtime->hasFunction(0x21E320u)) {
        auto targetFn = runtime->lookupFunction(0x21E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8D78u; }
        if (ctx->pc != 0x2B8D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMsg__7CDC2MesFv_0x21e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8D78u; }
        if (ctx->pc != 0x2B8D78u) { return; }
    }
    ctx->pc = 0x2B8D78u;
label_2b8d78:
    // 0x2b8d78: 0x8f849be8  lw          $a0, -0x6418($gp)
    ctx->pc = 0x2b8d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941672)));
label_2b8d7c:
    // 0x2b8d7c: 0x8c834608  lw          $v1, 0x4608($a0)
    ctx->pc = 0x2b8d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 17928)));
label_2b8d80:
    // 0x2b8d80: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_2b8d84:
    if (ctx->pc == 0x2B8D84u) {
        ctx->pc = 0x2B8D88u;
        goto label_2b8d88;
    }
    ctx->pc = 0x2B8D80u;
    {
        const bool branch_taken_0x2b8d80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8d80) {
            ctx->pc = 0x2B8D9Cu;
            goto label_2b8d9c;
        }
    }
    ctx->pc = 0x2B8D88u;
label_2b8d88:
    // 0x2b8d88: 0xc054ee8  jal         func_153BA0
label_2b8d8c:
    if (ctx->pc == 0x2B8D8Cu) {
        ctx->pc = 0x2B8D8Cu;
            // 0x2b8d8c: 0x24842428  addiu       $a0, $a0, 0x2428 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9256));
        ctx->pc = 0x2B8D90u;
        goto label_2b8d90;
    }
    ctx->pc = 0x2B8D88u;
    SET_GPR_U32(ctx, 31, 0x2B8D90u);
    ctx->pc = 0x2B8D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8D88u;
            // 0x2b8d8c: 0x24842428  addiu       $a0, $a0, 0x2428 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153BA0u;
    if (runtime->hasFunction(0x153BA0u)) {
        auto targetFn = runtime->lookupFunction(0x153BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8D90u; }
        if (ctx->pc != 0x2B8D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__6ClsMesFv_0x153ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8D90u; }
        if (ctx->pc != 0x2B8D90u) { return; }
    }
    ctx->pc = 0x2B8D90u;
label_2b8d90:
    // 0x2b8d90: 0x8f829be8  lw          $v0, -0x6418($gp)
    ctx->pc = 0x2b8d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941672)));
label_2b8d94:
    // 0x2b8d94: 0xc056cb0  jal         func_15B2C0
label_2b8d98:
    if (ctx->pc == 0x2B8D98u) {
        ctx->pc = 0x2B8D98u;
            // 0x2b8d98: 0x24442428  addiu       $a0, $v0, 0x2428 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 9256));
        ctx->pc = 0x2B8D9Cu;
        goto label_2b8d9c;
    }
    ctx->pc = 0x2B8D94u;
    SET_GPR_U32(ctx, 31, 0x2B8D9Cu);
    ctx->pc = 0x2B8D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8D94u;
            // 0x2b8d98: 0x24442428  addiu       $a0, $v0, 0x2428 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 9256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B2C0u;
    if (runtime->hasFunction(0x15B2C0u)) {
        auto targetFn = runtime->lookupFunction(0x15B2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8D9Cu; }
        if (ctx->pc != 0x2B8D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMesWin__6ClsMesFv_0x15b2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8D9Cu; }
        if (ctx->pc != 0x2B8D9Cu) { return; }
    }
    ctx->pc = 0x2B8D9Cu;
label_2b8d9c:
    // 0x2b8d9c: 0x8f859be8  lw          $a1, -0x6418($gp)
    ctx->pc = 0x2b8d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941672)));
label_2b8da0:
    // 0x2b8da0: 0x84a36758  lh          $v1, 0x6758($a1)
    ctx->pc = 0x2b8da0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 26456)));
label_2b8da4:
    // 0x2b8da4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_2b8da8:
    if (ctx->pc == 0x2B8DA8u) {
        ctx->pc = 0x2B8DACu;
        goto label_2b8dac;
    }
    ctx->pc = 0x2B8DA4u;
    {
        const bool branch_taken_0x2b8da4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8da4) {
            ctx->pc = 0x2B8DE0u;
            goto label_2b8de0;
        }
    }
    ctx->pc = 0x2B8DACu;
label_2b8dac:
    // 0x2b8dac: 0x84a3675a  lh          $v1, 0x675A($a1)
    ctx->pc = 0x2b8dacu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 26458)));
label_2b8db0:
    // 0x2b8db0: 0x28610015  slti        $at, $v1, 0x15
    ctx->pc = 0x2b8db0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)21) ? 1 : 0);
label_2b8db4:
    // 0x2b8db4: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
label_2b8db8:
    if (ctx->pc == 0x2B8DB8u) {
        ctx->pc = 0x2B8DBCu;
        goto label_2b8dbc;
    }
    ctx->pc = 0x2B8DB4u;
    {
        const bool branch_taken_0x2b8db4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b8db4) {
            ctx->pc = 0x2B8DE0u;
            goto label_2b8de0;
        }
    }
    ctx->pc = 0x2B8DBCu;
label_2b8dbc:
    // 0x2b8dbc: 0x8ca50020  lw          $a1, 0x20($a1)
    ctx->pc = 0x2b8dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
label_2b8dc0:
    // 0x2b8dc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b8dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b8dc4:
    // 0x2b8dc4: 0xc04ba14  jal         func_12E850
label_2b8dc8:
    if (ctx->pc == 0x2B8DC8u) {
        ctx->pc = 0x2B8DC8u;
            // 0x2b8dc8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B8DCCu;
        goto label_2b8dcc;
    }
    ctx->pc = 0x2B8DC4u;
    SET_GPR_U32(ctx, 31, 0x2B8DCCu);
    ctx->pc = 0x2B8DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8DC4u;
            // 0x2b8dc8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8DCCu; }
        if (ctx->pc != 0x2B8DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8DCCu; }
        if (ctx->pc != 0x2B8DCCu) { return; }
    }
    ctx->pc = 0x2B8DCCu;
label_2b8dcc:
    // 0x2b8dcc: 0x8f829be8  lw          $v0, -0x6418($gp)
    ctx->pc = 0x2b8dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941672)));
label_2b8dd0:
    // 0x2b8dd0: 0x8c5956c0  lw          $t9, 0x56C0($v0)
    ctx->pc = 0x2b8dd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22208)));
label_2b8dd4:
    // 0x2b8dd4: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x2b8dd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_2b8dd8:
    // 0x2b8dd8: 0x320f809  jalr        $t9
label_2b8ddc:
    if (ctx->pc == 0x2B8DDCu) {
        ctx->pc = 0x2B8DDCu;
            // 0x2b8ddc: 0x244456c0  addiu       $a0, $v0, 0x56C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 22208));
        ctx->pc = 0x2B8DE0u;
        goto label_2b8de0;
    }
    ctx->pc = 0x2B8DD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B8DE0u);
        ctx->pc = 0x2B8DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8DD8u;
            // 0x2b8ddc: 0x244456c0  addiu       $a0, $v0, 0x56C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 22208));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B8DE0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B8DE0u; }
            if (ctx->pc != 0x2B8DE0u) { return; }
        }
        }
    }
    ctx->pc = 0x2B8DE0u;
label_2b8de0:
    // 0x2b8de0: 0x8f839520  lw          $v1, -0x6AE0($gp)
    ctx->pc = 0x2b8de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939936)));
label_2b8de4:
    // 0x2b8de4: 0x1060004c  beqz        $v1, . + 4 + (0x4C << 2)
label_2b8de8:
    if (ctx->pc == 0x2B8DE8u) {
        ctx->pc = 0x2B8DECu;
        goto label_2b8dec;
    }
    ctx->pc = 0x2B8DE4u;
    {
        const bool branch_taken_0x2b8de4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8de4) {
            ctx->pc = 0x2B8F18u;
            goto label_2b8f18;
        }
    }
    ctx->pc = 0x2B8DECu;
label_2b8dec:
    // 0x2b8dec: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2b8decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_2b8df0:
    // 0x2b8df0: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x2b8df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_2b8df4:
    // 0x2b8df4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2b8df4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2b8df8:
    // 0x2b8df8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b8df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b8dfc:
    // 0x2b8dfc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b8dfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b8e00:
    // 0x2b8e00: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b8e00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b8e04:
    // 0x2b8e04: 0x3c0243af  lui         $v0, 0x43AF
    ctx->pc = 0x2b8e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17327 << 16));
label_2b8e08:
    // 0x2b8e08: 0x24100064  addiu       $s0, $zero, 0x64
    ctx->pc = 0x2b8e08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2b8e0c:
    // 0x2b8e0c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2b8e0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2b8e10:
    // 0x2b8e10: 0x3c024382  lui         $v0, 0x4382
    ctx->pc = 0x2b8e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17282 << 16));
label_2b8e14:
    // 0x2b8e14: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2b8e14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_2b8e18:
    // 0x2b8e18: 0xc0887b8  jal         func_221EE0
label_2b8e1c:
    if (ctx->pc == 0x2B8E1Cu) {
        ctx->pc = 0x2B8E1Cu;
            // 0x2b8e1c: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x2B8E20u;
        goto label_2b8e20;
    }
    ctx->pc = 0x2B8E18u;
    SET_GPR_U32(ctx, 31, 0x2B8E20u);
    ctx->pc = 0x2B8E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8E18u;
            // 0x2b8e1c: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x221EE0u;
    if (runtime->hasFunction(0x221EE0u)) {
        auto targetFn = runtime->lookupFunction(0x221EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8E20u; }
        if (ctx->pc != 0x2B8E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuFillBox__Fffffiiii_0x221ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8E20u; }
        if (ctx->pc != 0x2B8E20u) { return; }
    }
    ctx->pc = 0x2B8E20u;
label_2b8e20:
    // 0x2b8e20: 0xc0873cc  jal         func_21CF30
label_2b8e24:
    if (ctx->pc == 0x2B8E24u) {
        ctx->pc = 0x2B8E24u;
            // 0x2b8e24: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2B8E28u;
        goto label_2b8e28;
    }
    ctx->pc = 0x2B8E20u;
    SET_GPR_U32(ctx, 31, 0x2B8E28u);
    ctx->pc = 0x2B8E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8E20u;
            // 0x2b8e24: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CF30u;
    if (runtime->hasFunction(0x21CF30u)) {
        auto targetFn = runtime->lookupFunction(0x21CF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8E28u; }
        if (ctx->pc != 0x2B8E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__9CMenuFontFv_0x21cf30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8E28u; }
        if (ctx->pc != 0x2B8E28u) { return; }
    }
    ctx->pc = 0x2B8E28u;
label_2b8e28:
    // 0x2b8e28: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b8e28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2b8e2c:
    // 0x2b8e2c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2b8e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2b8e30:
    // 0x2b8e30: 0xc0b5160  jal         func_2D4580
label_2b8e34:
    if (ctx->pc == 0x2B8E34u) {
        ctx->pc = 0x2B8E34u;
            // 0x2b8e34: 0x24a5f3d0  addiu       $a1, $a1, -0xC30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964176));
        ctx->pc = 0x2B8E38u;
        goto label_2b8e38;
    }
    ctx->pc = 0x2B8E30u;
    SET_GPR_U32(ctx, 31, 0x2B8E38u);
    ctx->pc = 0x2B8E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8E30u;
            // 0x2b8e34: 0x24a5f3d0  addiu       $a1, $a1, -0xC30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8E38u; }
        if (ctx->pc != 0x2B8E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8E38u; }
        if (ctx->pc != 0x2B8E38u) { return; }
    }
    ctx->pc = 0x2B8E38u;
label_2b8e38:
    // 0x2b8e38: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2b8e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2b8e3c:
    // 0x2b8e3c: 0x2405015e  addiu       $a1, $zero, 0x15E
    ctx->pc = 0x2b8e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
label_2b8e40:
    // 0x2b8e40: 0xc0b5130  jal         func_2D44C0
label_2b8e44:
    if (ctx->pc == 0x2B8E44u) {
        ctx->pc = 0x2B8E44u;
            // 0x2b8e44: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B8E48u;
        goto label_2b8e48;
    }
    ctx->pc = 0x2B8E40u;
    SET_GPR_U32(ctx, 31, 0x2B8E48u);
    ctx->pc = 0x2B8E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8E40u;
            // 0x2b8e44: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8E48u; }
        if (ctx->pc != 0x2B8E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8E48u; }
        if (ctx->pc != 0x2B8E48u) { return; }
    }
    ctx->pc = 0x2B8E48u;
label_2b8e48:
    // 0x2b8e48: 0x27b40104  addiu       $s4, $sp, 0x104
    ctx->pc = 0x2b8e48u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
label_2b8e4c:
    // 0x2b8e4c: 0x27b50108  addiu       $s5, $sp, 0x108
    ctx->pc = 0x2b8e4cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
label_2b8e50:
    // 0x2b8e50: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x2b8e50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2b8e54:
    // 0x2b8e54: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2b8e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2b8e58:
    // 0x2b8e58: 0x8ea70000  lw          $a3, 0x0($s5)
    ctx->pc = 0x2b8e58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2b8e5c:
    // 0x2b8e5c: 0xc0b5688  jal         func_2D5A20
label_2b8e60:
    if (ctx->pc == 0x2B8E60u) {
        ctx->pc = 0x2B8E60u;
            // 0x2b8e60: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B8E64u;
        goto label_2b8e64;
    }
    ctx->pc = 0x2B8E5Cu;
    SET_GPR_U32(ctx, 31, 0x2B8E64u);
    ctx->pc = 0x2B8E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8E5Cu;
            // 0x2b8e60: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8E64u; }
        if (ctx->pc != 0x2B8E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8E64u; }
        if (ctx->pc != 0x2B8E64u) { return; }
    }
    ctx->pc = 0x2B8E64u;
label_2b8e64:
    // 0x2b8e64: 0xc065af8  jal         func_196BE0
label_2b8e68:
    if (ctx->pc == 0x2B8E68u) {
        ctx->pc = 0x2B8E68u;
            // 0x2b8e68: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->pc = 0x2B8E6Cu;
        goto label_2b8e6c;
    }
    ctx->pc = 0x2B8E64u;
    SET_GPR_U32(ctx, 31, 0x2B8E6Cu);
    ctx->pc = 0x2B8E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8E64u;
            // 0x2b8e68: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8E6Cu; }
        if (ctx->pc != 0x2B8E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8E6Cu; }
        if (ctx->pc != 0x2B8E6Cu) { return; }
    }
    ctx->pc = 0x2B8E6Cu;
label_2b8e6c:
    // 0x2b8e6c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2b8e6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b8e70:
    // 0x2b8e70: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2b8e70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b8e74:
    // 0x2b8e74: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2b8e74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b8e78:
    // 0x2b8e78: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2b8e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_2b8e7c:
    // 0x2b8e7c: 0x24424be0  addiu       $v0, $v0, 0x4BE0
    ctx->pc = 0x2b8e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19424));
label_2b8e80:
    // 0x2b8e80: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2b8e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_2b8e84:
    // 0x2b8e84: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2b8e84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2b8e88:
    // 0x2b8e88: 0xc04a3dc  jal         func_128F70
label_2b8e8c:
    if (ctx->pc == 0x2B8E8Cu) {
        ctx->pc = 0x2B8E8Cu;
            // 0x2b8e8c: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x2B8E90u;
        goto label_2b8e90;
    }
    ctx->pc = 0x2B8E88u;
    SET_GPR_U32(ctx, 31, 0x2B8E90u);
    ctx->pc = 0x2B8E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8E88u;
            // 0x2b8e8c: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8E90u; }
        if (ctx->pc != 0x2B8E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8E90u; }
        if (ctx->pc != 0x2B8E90u) { return; }
    }
    ctx->pc = 0x2B8E90u;
label_2b8e90:
    // 0x2b8e90: 0x8f829bec  lw          $v0, -0x6414($gp)
    ctx->pc = 0x2b8e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941676)));
label_2b8e94:
    // 0x2b8e94: 0x16220002  bne         $s1, $v0, . + 4 + (0x2 << 2)
label_2b8e98:
    if (ctx->pc == 0x2B8E98u) {
        ctx->pc = 0x2B8E98u;
            // 0x2b8e98: 0x2402003e  addiu       $v0, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->pc = 0x2B8E9Cu;
        goto label_2b8e9c;
    }
    ctx->pc = 0x2B8E94u;
    {
        const bool branch_taken_0x2b8e94 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B8E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8E94u;
            // 0x2b8e98: 0x2402003e  addiu       $v0, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8e94) {
            ctx->pc = 0x2B8EA0u;
            goto label_2b8ea0;
        }
    }
    ctx->pc = 0x2B8E9Cu;
label_2b8e9c:
    // 0x2b8e9c: 0xa3a20120  sb          $v0, 0x120($sp)
    ctx->pc = 0x2b8e9cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 288), (uint8_t)GPR_U32(ctx, 2));
label_2b8ea0:
    // 0x2b8ea0: 0x8f829be8  lw          $v0, -0x6418($gp)
    ctx->pc = 0x2b8ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941672)));
label_2b8ea4:
    // 0x2b8ea4: 0x8c420140  lw          $v0, 0x140($v0)
    ctx->pc = 0x2b8ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 320)));
label_2b8ea8:
    // 0x2b8ea8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2b8ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_2b8eac:
    // 0x2b8eac: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2b8eb0:
    if (ctx->pc == 0x2B8EB0u) {
        ctx->pc = 0x2B8EB4u;
        goto label_2b8eb4;
    }
    ctx->pc = 0x2B8EACu;
    {
        const bool branch_taken_0x2b8eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8eac) {
            ctx->pc = 0x2B8ECCu;
            goto label_2b8ecc;
        }
    }
    ctx->pc = 0x2B8EB4u;
label_2b8eb4:
    // 0x2b8eb4: 0x9046000a  lbu         $a2, 0xA($v0)
    ctx->pc = 0x2b8eb4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10)));
label_2b8eb8:
    // 0x2b8eb8: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x2b8eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_2b8ebc:
    // 0x2b8ebc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2b8ebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b8ec0:
    // 0x2b8ec0: 0x84420002  lh          $v0, 0x2($v0)
    ctx->pc = 0x2b8ec0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_2b8ec4:
    // 0x2b8ec4: 0xc04a234  jal         func_1288D0
label_2b8ec8:
    if (ctx->pc == 0x2B8EC8u) {
        ctx->pc = 0x2B8EC8u;
            // 0x2b8ec8: 0x24470001  addiu       $a3, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x2B8ECCu;
        goto label_2b8ecc;
    }
    ctx->pc = 0x2B8EC4u;
    SET_GPR_U32(ctx, 31, 0x2B8ECCu);
    ctx->pc = 0x2B8EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8EC4u;
            // 0x2b8ec8: 0x24470001  addiu       $a3, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8ECCu; }
        if (ctx->pc != 0x2B8ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8ECCu; }
        if (ctx->pc != 0x2B8ECCu) { return; }
    }
    ctx->pc = 0x2B8ECCu;
label_2b8ecc:
    // 0x2b8ecc: 0x0  nop
    ctx->pc = 0x2b8eccu;
    // NOP
label_2b8ed0:
    // 0x2b8ed0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2b8ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2b8ed4:
    // 0x2b8ed4: 0xc0b5160  jal         func_2D4580
label_2b8ed8:
    if (ctx->pc == 0x2B8ED8u) {
        ctx->pc = 0x2B8ED8u;
            // 0x2b8ed8: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x2B8EDCu;
        goto label_2b8edc;
    }
    ctx->pc = 0x2B8ED4u;
    SET_GPR_U32(ctx, 31, 0x2B8EDCu);
    ctx->pc = 0x2B8ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8ED4u;
            // 0x2b8ed8: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8EDCu; }
        if (ctx->pc != 0x2B8EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8EDCu; }
        if (ctx->pc != 0x2B8EDCu) { return; }
    }
    ctx->pc = 0x2B8EDCu;
label_2b8edc:
    // 0x2b8edc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2b8edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2b8ee0:
    // 0x2b8ee0: 0x24050162  addiu       $a1, $zero, 0x162
    ctx->pc = 0x2b8ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 354));
label_2b8ee4:
    // 0x2b8ee4: 0xc0b5130  jal         func_2D44C0
label_2b8ee8:
    if (ctx->pc == 0x2B8EE8u) {
        ctx->pc = 0x2B8EE8u;
            // 0x2b8ee8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B8EECu;
        goto label_2b8eec;
    }
    ctx->pc = 0x2B8EE4u;
    SET_GPR_U32(ctx, 31, 0x2B8EECu);
    ctx->pc = 0x2B8EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8EE4u;
            // 0x2b8ee8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8EECu; }
        if (ctx->pc != 0x2B8EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8EECu; }
        if (ctx->pc != 0x2B8EECu) { return; }
    }
    ctx->pc = 0x2B8EECu;
label_2b8eec:
    // 0x2b8eec: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x2b8eecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2b8ef0:
    // 0x2b8ef0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2b8ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2b8ef4:
    // 0x2b8ef4: 0x8ea70000  lw          $a3, 0x0($s5)
    ctx->pc = 0x2b8ef4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2b8ef8:
    // 0x2b8ef8: 0xc0b5688  jal         func_2D5A20
label_2b8efc:
    if (ctx->pc == 0x2B8EFCu) {
        ctx->pc = 0x2B8EFCu;
            // 0x2b8efc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B8F00u;
        goto label_2b8f00;
    }
    ctx->pc = 0x2B8EF8u;
    SET_GPR_U32(ctx, 31, 0x2B8F00u);
    ctx->pc = 0x2B8EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8EF8u;
            // 0x2b8efc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8F00u; }
        if (ctx->pc != 0x2B8F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8F00u; }
        if (ctx->pc != 0x2B8F00u) { return; }
    }
    ctx->pc = 0x2B8F00u;
label_2b8f00:
    // 0x2b8f00: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2b8f00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2b8f04:
    // 0x2b8f04: 0x26100014  addiu       $s0, $s0, 0x14
    ctx->pc = 0x2b8f04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_2b8f08:
    // 0x2b8f08: 0x2a23000c  slti        $v1, $s1, 0xC
    ctx->pc = 0x2b8f08u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)12) ? 1 : 0);
label_2b8f0c:
    // 0x2b8f0c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2b8f0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_2b8f10:
    // 0x2b8f10: 0x1460ffd9  bnez        $v1, . + 4 + (-0x27 << 2)
label_2b8f14:
    if (ctx->pc == 0x2B8F14u) {
        ctx->pc = 0x2B8F14u;
            // 0x2b8f14: 0x267300bc  addiu       $s3, $s3, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 188));
        ctx->pc = 0x2B8F18u;
        goto label_2b8f18;
    }
    ctx->pc = 0x2B8F10u;
    {
        const bool branch_taken_0x2b8f10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B8F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8F10u;
            // 0x2b8f14: 0x267300bc  addiu       $s3, $s3, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 188));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8f10) {
            ctx->pc = 0x2B8E78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b8e78;
        }
    }
    ctx->pc = 0x2B8F18u;
label_2b8f18:
    // 0x2b8f18: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2b8f18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2b8f1c:
    // 0x2b8f1c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2b8f1cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2b8f20:
    // 0x2b8f20: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2b8f20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2b8f24:
    // 0x2b8f24: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2b8f24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2b8f28:
    // 0x2b8f28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b8f28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2b8f2c:
    // 0x2b8f2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b8f2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b8f30:
    // 0x2b8f30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b8f30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2b8f34:
    // 0x2b8f34: 0x3e00008  jr          $ra
label_2b8f38:
    if (ctx->pc == 0x2B8F38u) {
        ctx->pc = 0x2B8F38u;
            // 0x2b8f38: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->pc = 0x2B8F3Cu;
        goto label_fallthrough_0x2b8f34;
    }
    ctx->pc = 0x2B8F34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8F34u;
            // 0x2b8f38: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2b8f34:
    ctx->pc = 0x2B8F3Cu;
}
