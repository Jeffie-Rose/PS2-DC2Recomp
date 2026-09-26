#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LRCheck__12CMenuGeoramaFv
// Address: 0x1f9dc0 - 0x1f9e8c
void LRCheck__12CMenuGeoramaFv_0x1f9dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LRCheck__12CMenuGeoramaFv_0x1f9dc0");
#endif

    switch (ctx->pc) {
        case 0x1f9dc0u: goto label_1f9dc0;
        case 0x1f9dc4u: goto label_1f9dc4;
        case 0x1f9dc8u: goto label_1f9dc8;
        case 0x1f9dccu: goto label_1f9dcc;
        case 0x1f9dd0u: goto label_1f9dd0;
        case 0x1f9dd4u: goto label_1f9dd4;
        case 0x1f9dd8u: goto label_1f9dd8;
        case 0x1f9ddcu: goto label_1f9ddc;
        case 0x1f9de0u: goto label_1f9de0;
        case 0x1f9de4u: goto label_1f9de4;
        case 0x1f9de8u: goto label_1f9de8;
        case 0x1f9decu: goto label_1f9dec;
        case 0x1f9df0u: goto label_1f9df0;
        case 0x1f9df4u: goto label_1f9df4;
        case 0x1f9df8u: goto label_1f9df8;
        case 0x1f9dfcu: goto label_1f9dfc;
        case 0x1f9e00u: goto label_1f9e00;
        case 0x1f9e04u: goto label_1f9e04;
        case 0x1f9e08u: goto label_1f9e08;
        case 0x1f9e0cu: goto label_1f9e0c;
        case 0x1f9e10u: goto label_1f9e10;
        case 0x1f9e14u: goto label_1f9e14;
        case 0x1f9e18u: goto label_1f9e18;
        case 0x1f9e1cu: goto label_1f9e1c;
        case 0x1f9e20u: goto label_1f9e20;
        case 0x1f9e24u: goto label_1f9e24;
        case 0x1f9e28u: goto label_1f9e28;
        case 0x1f9e2cu: goto label_1f9e2c;
        case 0x1f9e30u: goto label_1f9e30;
        case 0x1f9e34u: goto label_1f9e34;
        case 0x1f9e38u: goto label_1f9e38;
        case 0x1f9e3cu: goto label_1f9e3c;
        case 0x1f9e40u: goto label_1f9e40;
        case 0x1f9e44u: goto label_1f9e44;
        case 0x1f9e48u: goto label_1f9e48;
        case 0x1f9e4cu: goto label_1f9e4c;
        case 0x1f9e50u: goto label_1f9e50;
        case 0x1f9e54u: goto label_1f9e54;
        case 0x1f9e58u: goto label_1f9e58;
        case 0x1f9e5cu: goto label_1f9e5c;
        case 0x1f9e60u: goto label_1f9e60;
        case 0x1f9e64u: goto label_1f9e64;
        case 0x1f9e68u: goto label_1f9e68;
        case 0x1f9e6cu: goto label_1f9e6c;
        case 0x1f9e70u: goto label_1f9e70;
        case 0x1f9e74u: goto label_1f9e74;
        case 0x1f9e78u: goto label_1f9e78;
        case 0x1f9e7cu: goto label_1f9e7c;
        case 0x1f9e80u: goto label_1f9e80;
        case 0x1f9e84u: goto label_1f9e84;
        case 0x1f9e88u: goto label_1f9e88;
        default: break;
    }

    ctx->pc = 0x1f9dc0u;

label_1f9dc0:
    // 0x1f9dc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f9dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1f9dc4:
    // 0x1f9dc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f9dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1f9dc8:
    // 0x1f9dc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f9dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f9dcc:
    // 0x1f9dcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f9dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f9dd0:
    // 0x1f9dd0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f9dd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f9dd4:
    // 0x1f9dd4: 0x8c840118  lw          $a0, 0x118($a0)
    ctx->pc = 0x1f9dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 280)));
label_1f9dd8:
    // 0x1f9dd8: 0x10800026  beqz        $a0, . + 4 + (0x26 << 2)
label_1f9ddc:
    if (ctx->pc == 0x1F9DDCu) {
        ctx->pc = 0x1F9DE0u;
        goto label_1f9de0;
    }
    ctx->pc = 0x1F9DD8u;
    {
        const bool branch_taken_0x1f9dd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9dd8) {
            ctx->pc = 0x1F9E74u;
            goto label_1f9e74;
        }
    }
    ctx->pc = 0x1F9DE0u;
label_1f9de0:
    // 0x1f9de0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1f9de0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f9de4:
    // 0x1f9de4: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x1f9de4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_1f9de8:
    // 0x1f9de8: 0x320f809  jalr        $t9
label_1f9dec:
    if (ctx->pc == 0x1F9DECu) {
        ctx->pc = 0x1F9DECu;
            // 0x1f9dec: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1F9DF0u;
        goto label_1f9df0;
    }
    ctx->pc = 0x1F9DE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F9DF0u);
        ctx->pc = 0x1F9DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9DE8u;
            // 0x1f9dec: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F9DF0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F9DF0u; }
            if (ctx->pc != 0x1F9DF0u) { return; }
        }
        }
    }
    ctx->pc = 0x1F9DF0u;
label_1f9df0:
    // 0x1f9df0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1f9df0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1f9df4:
    // 0x1f9df4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f9df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f9df8:
    // 0x1f9df8: 0xc052cf0  jal         func_14B3C0
label_1f9dfc:
    if (ctx->pc == 0x1F9DFCu) {
        ctx->pc = 0x1F9DFCu;
            // 0x1f9dfc: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1F9E00u;
        goto label_1f9e00;
    }
    ctx->pc = 0x1F9DF8u;
    SET_GPR_U32(ctx, 31, 0x1F9E00u);
    ctx->pc = 0x1F9DFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9DF8u;
            // 0x1f9dfc: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9E00u; }
        if (ctx->pc != 0x1F9E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9E00u; }
        if (ctx->pc != 0x1F9E00u) { return; }
    }
    ctx->pc = 0x1F9E00u;
label_1f9e00:
    // 0x1f9e00: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1f9e04:
    if (ctx->pc == 0x1F9E04u) {
        ctx->pc = 0x1F9E04u;
            // 0x1f9e04: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x1F9E08u;
        goto label_1f9e08;
    }
    ctx->pc = 0x1F9E00u;
    {
        const bool branch_taken_0x1f9e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9E00u;
            // 0x1f9e04: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9e00) {
            ctx->pc = 0x1F9E24u;
            goto label_1f9e24;
        }
    }
    ctx->pc = 0x1F9E08u;
label_1f9e08:
    // 0x1f9e08: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x1f9e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f9e0c:
    // 0x1f9e0c: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x1f9e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
label_1f9e10:
    // 0x1f9e10: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x1f9e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
label_1f9e14:
    // 0x1f9e14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f9e14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f9e18:
    // 0x1f9e18: 0x0  nop
    ctx->pc = 0x1f9e18u;
    // NOP
label_1f9e1c:
    // 0x1f9e1c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1f9e1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1f9e20:
    // 0x1f9e20: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1f9e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_1f9e24:
    // 0x1f9e24: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1f9e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f9e28:
    // 0x1f9e28: 0xc052cf0  jal         func_14B3C0
label_1f9e2c:
    if (ctx->pc == 0x1F9E2Cu) {
        ctx->pc = 0x1F9E2Cu;
            // 0x1f9e2c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1F9E30u;
        goto label_1f9e30;
    }
    ctx->pc = 0x1F9E28u;
    SET_GPR_U32(ctx, 31, 0x1F9E30u);
    ctx->pc = 0x1F9E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9E28u;
            // 0x1f9e2c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9E30u; }
        if (ctx->pc != 0x1F9E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9E30u; }
        if (ctx->pc != 0x1F9E30u) { return; }
    }
    ctx->pc = 0x1F9E30u;
label_1f9e30:
    // 0x1f9e30: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1f9e34:
    if (ctx->pc == 0x1F9E34u) {
        ctx->pc = 0x1F9E34u;
            // 0x1f9e34: 0x27b00034  addiu       $s0, $sp, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
        ctx->pc = 0x1F9E38u;
        goto label_1f9e38;
    }
    ctx->pc = 0x1F9E30u;
    {
        const bool branch_taken_0x1f9e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9E30u;
            // 0x1f9e34: 0x27b00034  addiu       $s0, $sp, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9e30) {
            ctx->pc = 0x1F9E54u;
            goto label_1f9e54;
        }
    }
    ctx->pc = 0x1F9E38u;
label_1f9e38:
    // 0x1f9e38: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x1f9e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f9e3c:
    // 0x1f9e3c: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x1f9e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
label_1f9e40:
    // 0x1f9e40: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x1f9e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
label_1f9e44:
    // 0x1f9e44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f9e44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f9e48:
    // 0x1f9e48: 0x0  nop
    ctx->pc = 0x1f9e48u;
    // NOP
label_1f9e4c:
    // 0x1f9e4c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f9e4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1f9e50:
    // 0x1f9e50: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1f9e50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_1f9e54:
    // 0x1f9e54: 0xc04c374  jal         func_130DD0
label_1f9e58:
    if (ctx->pc == 0x1F9E58u) {
        ctx->pc = 0x1F9E58u;
            // 0x1f9e58: 0xc60c0000  lwc1        $f12, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1F9E5Cu;
        goto label_1f9e5c;
    }
    ctx->pc = 0x1F9E54u;
    SET_GPR_U32(ctx, 31, 0x1F9E5Cu);
    ctx->pc = 0x1F9E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9E54u;
            // 0x1f9e58: 0xc60c0000  lwc1        $f12, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9E5Cu; }
        if (ctx->pc != 0x1F9E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9E5Cu; }
        if (ctx->pc != 0x1F9E5Cu) { return; }
    }
    ctx->pc = 0x1F9E5Cu;
label_1f9e5c:
    // 0x1f9e5c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1f9e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_1f9e60:
    // 0x1f9e60: 0x8e240118  lw          $a0, 0x118($s1)
    ctx->pc = 0x1f9e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
label_1f9e64:
    // 0x1f9e64: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1f9e64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f9e68:
    // 0x1f9e68: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1f9e68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1f9e6c:
    // 0x1f9e6c: 0x320f809  jalr        $t9
label_1f9e70:
    if (ctx->pc == 0x1F9E70u) {
        ctx->pc = 0x1F9E70u;
            // 0x1f9e70: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1F9E74u;
        goto label_1f9e74;
    }
    ctx->pc = 0x1F9E6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F9E74u);
        ctx->pc = 0x1F9E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9E6Cu;
            // 0x1f9e70: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F9E74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F9E74u; }
            if (ctx->pc != 0x1F9E74u) { return; }
        }
        }
    }
    ctx->pc = 0x1F9E74u;
label_1f9e74:
    // 0x1f9e74: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f9e74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1f9e78:
    // 0x1f9e78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f9e78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f9e7c:
    // 0x1f9e7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f9e7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f9e80:
    // 0x1f9e80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f9e80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f9e84:
    // 0x1f9e84: 0x3e00008  jr          $ra
label_1f9e88:
    if (ctx->pc == 0x1F9E88u) {
        ctx->pc = 0x1F9E88u;
            // 0x1f9e88: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1F9E8Cu;
        goto label_fallthrough_0x1f9e84;
    }
    ctx->pc = 0x1F9E84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9E84u;
            // 0x1f9e88: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1f9e84:
    ctx->pc = 0x1F9E8Cu;
}
