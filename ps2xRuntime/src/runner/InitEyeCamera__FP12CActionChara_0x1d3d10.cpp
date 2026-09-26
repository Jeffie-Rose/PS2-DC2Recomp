#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitEyeCamera__FP12CActionChara
// Address: 0x1d3d10 - 0x1d3e10
void InitEyeCamera__FP12CActionChara_0x1d3d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitEyeCamera__FP12CActionChara_0x1d3d10");
#endif

    switch (ctx->pc) {
        case 0x1d3d10u: goto label_1d3d10;
        case 0x1d3d14u: goto label_1d3d14;
        case 0x1d3d18u: goto label_1d3d18;
        case 0x1d3d1cu: goto label_1d3d1c;
        case 0x1d3d20u: goto label_1d3d20;
        case 0x1d3d24u: goto label_1d3d24;
        case 0x1d3d28u: goto label_1d3d28;
        case 0x1d3d2cu: goto label_1d3d2c;
        case 0x1d3d30u: goto label_1d3d30;
        case 0x1d3d34u: goto label_1d3d34;
        case 0x1d3d38u: goto label_1d3d38;
        case 0x1d3d3cu: goto label_1d3d3c;
        case 0x1d3d40u: goto label_1d3d40;
        case 0x1d3d44u: goto label_1d3d44;
        case 0x1d3d48u: goto label_1d3d48;
        case 0x1d3d4cu: goto label_1d3d4c;
        case 0x1d3d50u: goto label_1d3d50;
        case 0x1d3d54u: goto label_1d3d54;
        case 0x1d3d58u: goto label_1d3d58;
        case 0x1d3d5cu: goto label_1d3d5c;
        case 0x1d3d60u: goto label_1d3d60;
        case 0x1d3d64u: goto label_1d3d64;
        case 0x1d3d68u: goto label_1d3d68;
        case 0x1d3d6cu: goto label_1d3d6c;
        case 0x1d3d70u: goto label_1d3d70;
        case 0x1d3d74u: goto label_1d3d74;
        case 0x1d3d78u: goto label_1d3d78;
        case 0x1d3d7cu: goto label_1d3d7c;
        case 0x1d3d80u: goto label_1d3d80;
        case 0x1d3d84u: goto label_1d3d84;
        case 0x1d3d88u: goto label_1d3d88;
        case 0x1d3d8cu: goto label_1d3d8c;
        case 0x1d3d90u: goto label_1d3d90;
        case 0x1d3d94u: goto label_1d3d94;
        case 0x1d3d98u: goto label_1d3d98;
        case 0x1d3d9cu: goto label_1d3d9c;
        case 0x1d3da0u: goto label_1d3da0;
        case 0x1d3da4u: goto label_1d3da4;
        case 0x1d3da8u: goto label_1d3da8;
        case 0x1d3dacu: goto label_1d3dac;
        case 0x1d3db0u: goto label_1d3db0;
        case 0x1d3db4u: goto label_1d3db4;
        case 0x1d3db8u: goto label_1d3db8;
        case 0x1d3dbcu: goto label_1d3dbc;
        case 0x1d3dc0u: goto label_1d3dc0;
        case 0x1d3dc4u: goto label_1d3dc4;
        case 0x1d3dc8u: goto label_1d3dc8;
        case 0x1d3dccu: goto label_1d3dcc;
        case 0x1d3dd0u: goto label_1d3dd0;
        case 0x1d3dd4u: goto label_1d3dd4;
        case 0x1d3dd8u: goto label_1d3dd8;
        case 0x1d3ddcu: goto label_1d3ddc;
        case 0x1d3de0u: goto label_1d3de0;
        case 0x1d3de4u: goto label_1d3de4;
        case 0x1d3de8u: goto label_1d3de8;
        case 0x1d3decu: goto label_1d3dec;
        case 0x1d3df0u: goto label_1d3df0;
        case 0x1d3df4u: goto label_1d3df4;
        case 0x1d3df8u: goto label_1d3df8;
        case 0x1d3dfcu: goto label_1d3dfc;
        case 0x1d3e00u: goto label_1d3e00;
        case 0x1d3e04u: goto label_1d3e04;
        case 0x1d3e08u: goto label_1d3e08;
        case 0x1d3e0cu: goto label_1d3e0c;
        default: break;
    }

    ctx->pc = 0x1d3d10u;

label_1d3d10:
    // 0x1d3d10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d3d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1d3d14:
    // 0x1d3d14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d3d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1d3d18:
    // 0x1d3d18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d3d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d3d1c:
    // 0x1d3d1c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d3d1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d3d20:
    // 0x1d3d20: 0xc0683a8  jal         func_1A0EA0
label_1d3d24:
    if (ctx->pc == 0x1D3D24u) {
        ctx->pc = 0x1D3D24u;
            // 0x1d3d24: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x1D3D28u;
        goto label_1d3d28;
    }
    ctx->pc = 0x1D3D20u;
    SET_GPR_U32(ctx, 31, 0x1D3D28u);
    ctx->pc = 0x1D3D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3D20u;
            // 0x1d3d24: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0EA0u;
    if (runtime->hasFunction(0x1A0EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3D28u; }
        if (ctx->pc != 0x1D3D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBattleCharaInfo__Fv_0x1a0ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3D28u; }
        if (ctx->pc != 0x1D3D28u) { return; }
    }
    ctx->pc = 0x1D3D28u;
label_1d3d28:
    // 0x1d3d28: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1d3d28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d3d2c:
    // 0x1d3d2c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d3d2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d3d30:
    // 0x1d3d30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d3d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d3d34:
    // 0x1d3d34: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x1d3d34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_1d3d38:
    // 0x1d3d38: 0x320f809  jalr        $t9
label_1d3d3c:
    if (ctx->pc == 0x1D3D3Cu) {
        ctx->pc = 0x1D3D3Cu;
            // 0x1d3d3c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1D3D40u;
        goto label_1d3d40;
    }
    ctx->pc = 0x1D3D38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D3D40u);
        ctx->pc = 0x1D3D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3D38u;
            // 0x1d3d3c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D3D40u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D3D40u; }
            if (ctx->pc != 0x1D3D40u) { return; }
        }
        }
    }
    ctx->pc = 0x1D3D40u;
label_1d3d40:
    // 0x1d3d40: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x1d3d40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1d3d44:
    // 0x1d3d44: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d3d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d3d48:
    // 0x1d3d48: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
label_1d3d4c:
    if (ctx->pc == 0x1D3D4Cu) {
        ctx->pc = 0x1D3D50u;
        goto label_1d3d50;
    }
    ctx->pc = 0x1D3D48u;
    {
        const bool branch_taken_0x1d3d48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d3d48) {
            ctx->pc = 0x1D3D94u;
            goto label_1d3d94;
        }
    }
    ctx->pc = 0x1D3D50u;
label_1d3d50:
    // 0x1d3d50: 0x8f848dd8  lw          $a0, -0x7228($gp)
    ctx->pc = 0x1d3d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
label_1d3d54:
    // 0x1d3d54: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1d3d54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1d3d58:
    // 0x1d3d58: 0xc05af24  jal         func_16BC90
label_1d3d5c:
    if (ctx->pc == 0x1D3D5Cu) {
        ctx->pc = 0x1D3D5Cu;
            // 0x1d3d5c: 0x24a572f8  addiu       $a1, $a1, 0x72F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29432));
        ctx->pc = 0x1D3D60u;
        goto label_1d3d60;
    }
    ctx->pc = 0x1D3D58u;
    SET_GPR_U32(ctx, 31, 0x1D3D60u);
    ctx->pc = 0x1D3D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3D58u;
            // 0x1d3d5c: 0x24a572f8  addiu       $a1, $a1, 0x72F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BC90u;
    if (runtime->hasFunction(0x16BC90u)) {
        auto targetFn = runtime->lookupFunction(0x16BC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3D60u; }
        if (ctx->pc != 0x1D3D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchChara__12CActionCharaFPc_0x16bc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3D60u; }
        if (ctx->pc != 0x1D3D60u) { return; }
    }
    ctx->pc = 0x1D3D60u;
label_1d3d60:
    // 0x1d3d60: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1d3d64:
    if (ctx->pc == 0x1D3D64u) {
        ctx->pc = 0x1D3D68u;
        goto label_1d3d68;
    }
    ctx->pc = 0x1D3D60u;
    {
        const bool branch_taken_0x1d3d60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3d60) {
            ctx->pc = 0x1D3D94u;
            goto label_1d3d94;
        }
    }
    ctx->pc = 0x1D3D68u;
label_1d3d68:
    // 0x1d3d68: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1d3d68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d3d6c:
    // 0x1d3d6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d3d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d3d70:
    // 0x1d3d70: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x1d3d70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_1d3d74:
    // 0x1d3d74: 0x320f809  jalr        $t9
label_1d3d78:
    if (ctx->pc == 0x1D3D78u) {
        ctx->pc = 0x1D3D78u;
            // 0x1d3d78: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1D3D7Cu;
        goto label_1d3d7c;
    }
    ctx->pc = 0x1D3D74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D3D7Cu);
        ctx->pc = 0x1D3D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3D74u;
            // 0x1d3d78: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D3D7Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D3D7Cu; }
            if (ctx->pc != 0x1D3D7Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1D3D7Cu;
label_1d3d7c:
    // 0x1d3d7c: 0x27b00034  addiu       $s0, $sp, 0x34
    ctx->pc = 0x1d3d7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_1d3d80:
    // 0x1d3d80: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x1d3d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d3d84:
    // 0x1d3d84: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x1d3d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d3d88:
    // 0x1d3d88: 0xc04c374  jal         func_130DD0
label_1d3d8c:
    if (ctx->pc == 0x1D3D8Cu) {
        ctx->pc = 0x1D3D8Cu;
            // 0x1d3d8c: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x1D3D90u;
        goto label_1d3d90;
    }
    ctx->pc = 0x1D3D88u;
    SET_GPR_U32(ctx, 31, 0x1D3D90u);
    ctx->pc = 0x1D3D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3D88u;
            // 0x1d3d8c: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3D90u; }
        if (ctx->pc != 0x1D3D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3D90u; }
        if (ctx->pc != 0x1D3D90u) { return; }
    }
    ctx->pc = 0x1D3D90u;
label_1d3d90:
    // 0x1d3d90: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1d3d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_1d3d94:
    // 0x1d3d94: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x1d3d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d3d98:
    // 0x1d3d98: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1d3d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1d3d9c:
    // 0x1d3d9c: 0xaf808d80  sw          $zero, -0x7280($gp)
    ctx->pc = 0x1d3d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937984), GPR_U32(ctx, 0));
label_1d3da0:
    // 0x1d3da0: 0xe7808d7c  swc1        $f0, -0x7284($gp)
    ctx->pc = 0x1d3da0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937980), bits); }
label_1d3da4:
    // 0x1d3da4: 0xc0a0e30  jal         func_2838C0
label_1d3da8:
    if (ctx->pc == 0x1D3DA8u) {
        ctx->pc = 0x1D3DA8u;
            // 0x1d3da8: 0x8c852e54  lw          $a1, 0x2E54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
        ctx->pc = 0x1D3DACu;
        goto label_1d3dac;
    }
    ctx->pc = 0x1D3DA4u;
    SET_GPR_U32(ctx, 31, 0x1D3DACu);
    ctx->pc = 0x1D3DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3DA4u;
            // 0x1d3da8: 0x8c852e54  lw          $a1, 0x2E54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3DACu; }
        if (ctx->pc != 0x1D3DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3DACu; }
        if (ctx->pc != 0x1D3DACu) { return; }
    }
    ctx->pc = 0x1D3DACu;
label_1d3dac:
    // 0x1d3dac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d3dacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d3db0:
    // 0x1d3db0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_1d3db4:
    if (ctx->pc == 0x1D3DB4u) {
        ctx->pc = 0x1D3DB4u;
            // 0x1d3db4: 0x3c0501ed  lui         $a1, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
        ctx->pc = 0x1D3DB8u;
        goto label_1d3db8;
    }
    ctx->pc = 0x1D3DB0u;
    {
        const bool branch_taken_0x1d3db0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3DB0u;
            // 0x1d3db4: 0x3c0501ed  lui         $a1, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3db0) {
            ctx->pc = 0x1D3DD4u;
            goto label_1d3dd4;
        }
    }
    ctx->pc = 0x1D3DB8u;
label_1d3db8:
    // 0x1d3db8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d3dbc:
    // 0x1d3dbc: 0xc04c574  jal         func_1315D0
label_1d3dc0:
    if (ctx->pc == 0x1D3DC0u) {
        ctx->pc = 0x1D3DC0u;
            // 0x1d3dc0: 0x24a588f0  addiu       $a1, $a1, -0x7710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936816));
        ctx->pc = 0x1D3DC4u;
        goto label_1d3dc4;
    }
    ctx->pc = 0x1D3DBCu;
    SET_GPR_U32(ctx, 31, 0x1D3DC4u);
    ctx->pc = 0x1D3DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3DBCu;
            // 0x1d3dc0: 0x24a588f0  addiu       $a1, $a1, -0x7710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315D0u;
    if (runtime->hasFunction(0x1315D0u)) {
        auto targetFn = runtime->lookupFunction(0x1315D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3DC4u; }
        if (ctx->pc != 0x1D3DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPos__9mgCCameraFPf_0x1315d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3DC4u; }
        if (ctx->pc != 0x1D3DC4u) { return; }
    }
    ctx->pc = 0x1D3DC4u;
label_1d3dc4:
    // 0x1d3dc4: 0xc04c66c  jal         func_1319B0
label_1d3dc8:
    if (ctx->pc == 0x1D3DC8u) {
        ctx->pc = 0x1D3DC8u;
            // 0x1d3dc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D3DCCu;
        goto label_1d3dcc;
    }
    ctx->pc = 0x1D3DC4u;
    SET_GPR_U32(ctx, 31, 0x1D3DCCu);
    ctx->pc = 0x1D3DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3DC4u;
            // 0x1d3dc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1319B0u;
    if (runtime->hasFunction(0x1319B0u)) {
        auto targetFn = runtime->lookupFunction(0x1319B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3DCCu; }
        if (ctx->pc != 0x1D3DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FollowOff__15mgCCameraFollowFv_0x1319b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3DCCu; }
        if (ctx->pc != 0x1D3DCCu) { return; }
    }
    ctx->pc = 0x1D3DCCu;
label_1d3dcc:
    // 0x1d3dcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d3dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d3dd0:
    // 0x1d3dd0: 0xaf828d84  sw          $v0, -0x727C($gp)
    ctx->pc = 0x1d3dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937988), GPR_U32(ctx, 2));
label_1d3dd4:
    // 0x1d3dd4: 0x8f848dd8  lw          $a0, -0x7228($gp)
    ctx->pc = 0x1d3dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
label_1d3dd8:
    // 0x1d3dd8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d3dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d3ddc:
    // 0x1d3ddc: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1d3ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1d3de0:
    // 0x1d3de0: 0xac26f6e8  sw          $a2, -0x918($at)
    ctx->pc = 0x1d3de0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964968), GPR_U32(ctx, 6));
label_1d3de4:
    // 0x1d3de4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1d3de4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d3de8:
    // 0x1d3de8: 0x8f3900f8  lw          $t9, 0xF8($t9)
    ctx->pc = 0x1d3de8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 248)));
label_1d3dec:
    // 0x1d3dec: 0x320f809  jalr        $t9
label_1d3df0:
    if (ctx->pc == 0x1D3DF0u) {
        ctx->pc = 0x1D3DF0u;
            // 0x1d3df0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D3DF4u;
        goto label_1d3df4;
    }
    ctx->pc = 0x1D3DECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D3DF4u);
        ctx->pc = 0x1D3DF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3DECu;
            // 0x1d3df0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D3DF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D3DF4u; }
            if (ctx->pc != 0x1D3DF4u) { return; }
        }
        }
    }
    ctx->pc = 0x1D3DF4u;
label_1d3df4:
    // 0x1d3df4: 0xc050e84  jal         func_143A10
label_1d3df8:
    if (ctx->pc == 0x1D3DF8u) {
        ctx->pc = 0x1D3DF8u;
            // 0x1d3df8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1D3DFCu;
        goto label_1d3dfc;
    }
    ctx->pc = 0x1D3DF4u;
    SET_GPR_U32(ctx, 31, 0x1D3DFCu);
    ctx->pc = 0x1D3DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3DF4u;
            // 0x1d3df8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143A10u;
    if (runtime->hasFunction(0x143A10u)) {
        auto targetFn = runtime->lookupFunction(0x143A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3DFCu; }
        if (ctx->pc != 0x1D3DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetAllScissorFlag__Fi_0x143a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3DFCu; }
        if (ctx->pc != 0x1D3DFCu) { return; }
    }
    ctx->pc = 0x1D3DFCu;
label_1d3dfc:
    // 0x1d3dfc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d3dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d3e00:
    // 0x1d3e00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d3e00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d3e04:
    // 0x1d3e04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d3e04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d3e08:
    // 0x1d3e08: 0x3e00008  jr          $ra
label_1d3e0c:
    if (ctx->pc == 0x1D3E0Cu) {
        ctx->pc = 0x1D3E0Cu;
            // 0x1d3e0c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1D3E10u;
        goto label_fallthrough_0x1d3e08;
    }
    ctx->pc = 0x1D3E08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3E08u;
            // 0x1d3e0c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1d3e08:
    ctx->pc = 0x1D3E10u;
}
