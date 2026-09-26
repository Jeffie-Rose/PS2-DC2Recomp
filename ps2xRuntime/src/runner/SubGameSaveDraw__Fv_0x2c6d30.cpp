#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SubGameSaveDraw__Fv
// Address: 0x2c6d30 - 0x2c6dd0
void SubGameSaveDraw__Fv_0x2c6d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SubGameSaveDraw__Fv_0x2c6d30");
#endif

    switch (ctx->pc) {
        case 0x2c6d54u: goto label_2c6d54;
        case 0x2c6d68u: goto label_2c6d68;
        case 0x2c6d80u: goto label_2c6d80;
        case 0x2c6da0u: goto label_2c6da0;
        case 0x2c6db4u: goto label_2c6db4;
        case 0x2c6dc0u: goto label_2c6dc0;
        default: break;
    }

    ctx->pc = 0x2c6d30u;

    // 0x2c6d30: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x2c6d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x2c6d34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c6d34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6d38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c6d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c6d3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c6d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c6d40: 0x87859d30  lh          $a1, -0x62D0($gp)
    ctx->pc = 0x2c6d40u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294942000)));
    // 0x2c6d44: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x2c6d44u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x2c6d48: 0x26101ef0  addiu       $s0, $s0, 0x1EF0
    ctx->pc = 0x2c6d48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7920));
    // 0x2c6d4c: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x2C6D4Cu;
    SET_GPR_U32(ctx, 31, 0x2C6D54u);
    ctx->pc = 0x2C6D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6D4Cu;
            // 0x2c6d50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6D54u; }
        if (ctx->pc != 0x2C6D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6D54u; }
        if (ctx->pc != 0x2C6D54u) { return; }
    }
    ctx->pc = 0x2C6D54u;
label_2c6d54:
    // 0x2c6d54: 0x8f829d10  lw          $v0, -0x62F0($gp)
    ctx->pc = 0x2c6d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941968)));
    // 0x2c6d58: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2C6D58u;
    {
        const bool branch_taken_0x2c6d58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6d58) {
            ctx->pc = 0x2C6DA0u;
            goto label_2c6da0;
        }
    }
    ctx->pc = 0x2C6D60u;
    // 0x2c6d60: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x2C6D60u;
    SET_GPR_U32(ctx, 31, 0x2C6D68u);
    ctx->pc = 0x2C6D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6D60u;
            // 0x2c6d64: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6D68u; }
        if (ctx->pc != 0x2C6D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6D68u; }
        if (ctx->pc != 0x2C6D68u) { return; }
    }
    ctx->pc = 0x2C6D68u;
label_2c6d68:
    // 0x2c6d68: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x2c6d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2c6d6c: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2c6d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2c6d70: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2c6d70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6d74: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2c6d74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6d78: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2C6D78u;
    SET_GPR_U32(ctx, 31, 0x2C6D80u);
    ctx->pc = 0x2C6D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6D78u;
            // 0x2c6d7c: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6D80u; }
        if (ctx->pc != 0x2C6D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6D80u; }
        if (ctx->pc != 0x2C6D80u) { return; }
    }
    ctx->pc = 0x2C6D80u;
label_2c6d80:
    // 0x2c6d80: 0xc78c9d40  lwc1        $f12, -0x62C0($gp)
    ctx->pc = 0x2c6d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c6d84: 0x8f859d10  lw          $a1, -0x62F0($gp)
    ctx->pc = 0x2c6d84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941968)));
    // 0x2c6d88: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2c6d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c6d8c: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x2c6d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2c6d90: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c6d90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6d94: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2c6d94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6d98: 0xc088f58  jal         func_223D60
    ctx->pc = 0x2C6D98u;
    SET_GPR_U32(ctx, 31, 0x2C6DA0u);
    ctx->pc = 0x2C6D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6D98u;
            // 0x2c6d9c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x223D60u;
    if (runtime->hasFunction(0x223D60u)) {
        auto targetFn = runtime->lookupFunction(0x223D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6DA0u; }
        if (ctx->pc != 0x2C6DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuTilePattern__FP11mgCDrawPrimP10mgCTextureff9mgRect_i_iPUc_0x223d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6DA0u; }
        if (ctx->pc != 0x2C6DA0u) { return; }
    }
    ctx->pc = 0x2C6DA0u;
label_2c6da0:
    // 0x2c6da0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c6da0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2c6da4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c6da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6da8: 0x8c25d624  lw          $a1, -0x29DC($at)
    ctx->pc = 0x2c6da8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956580)));
    // 0x2c6dac: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x2C6DACu;
    SET_GPR_U32(ctx, 31, 0x2C6DB4u);
    ctx->pc = 0x2C6DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6DACu;
            // 0x2c6db0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6DB4u; }
        if (ctx->pc != 0x2C6DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6DB4u; }
        if (ctx->pc != 0x2C6DB4u) { return; }
    }
    ctx->pc = 0x2C6DB4u;
label_2c6db4:
    // 0x2c6db4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c6db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2c6db8: 0xc0878c8  jal         func_21E320
    ctx->pc = 0x2C6DB8u;
    SET_GPR_U32(ctx, 31, 0x2C6DC0u);
    ctx->pc = 0x2C6DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6DB8u;
            // 0x2c6dbc: 0x8c24ca40  lw          $a0, -0x35C0($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953536)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E320u;
    if (runtime->hasFunction(0x21E320u)) {
        auto targetFn = runtime->lookupFunction(0x21E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6DC0u; }
        if (ctx->pc != 0x2C6DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMsg__7CDC2MesFv_0x21e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6DC0u; }
        if (ctx->pc != 0x2C6DC0u) { return; }
    }
    ctx->pc = 0x2C6DC0u;
label_2c6dc0:
    // 0x2c6dc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c6dc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c6dc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c6dc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c6dc8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C6DC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6DC8u;
            // 0x2c6dcc: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C6DD0u;
}
