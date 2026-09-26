#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PreDraw__9CMapPartsFv
// Address: 0x166a00 - 0x166a64
void PreDraw__9CMapPartsFv_0x166a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PreDraw__9CMapPartsFv_0x166a00");
#endif

    switch (ctx->pc) {
        case 0x166a00u: goto label_166a00;
        case 0x166a04u: goto label_166a04;
        case 0x166a08u: goto label_166a08;
        case 0x166a0cu: goto label_166a0c;
        case 0x166a10u: goto label_166a10;
        case 0x166a14u: goto label_166a14;
        case 0x166a18u: goto label_166a18;
        case 0x166a1cu: goto label_166a1c;
        case 0x166a20u: goto label_166a20;
        case 0x166a24u: goto label_166a24;
        case 0x166a28u: goto label_166a28;
        case 0x166a2cu: goto label_166a2c;
        case 0x166a30u: goto label_166a30;
        case 0x166a34u: goto label_166a34;
        case 0x166a38u: goto label_166a38;
        case 0x166a3cu: goto label_166a3c;
        case 0x166a40u: goto label_166a40;
        case 0x166a44u: goto label_166a44;
        case 0x166a48u: goto label_166a48;
        case 0x166a4cu: goto label_166a4c;
        case 0x166a50u: goto label_166a50;
        case 0x166a54u: goto label_166a54;
        case 0x166a58u: goto label_166a58;
        case 0x166a5cu: goto label_166a5c;
        case 0x166a60u: goto label_166a60;
        default: break;
    }

    ctx->pc = 0x166a00u;

label_166a00:
    // 0x166a00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x166a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_166a04:
    // 0x166a04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x166a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_166a08:
    // 0x166a08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x166a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_166a0c:
    // 0x166a0c: 0xc05a76c  jal         func_169DB0
label_166a10:
    if (ctx->pc == 0x166A10u) {
        ctx->pc = 0x166A10u;
            // 0x166a10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x166A14u;
        goto label_166a14;
    }
    ctx->pc = 0x166A0Cu;
    SET_GPR_U32(ctx, 31, 0x166A14u);
    ctx->pc = 0x166A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166A0Cu;
            // 0x166a10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x169DB0u;
    if (runtime->hasFunction(0x169DB0u)) {
        auto targetFn = runtime->lookupFunction(0x169DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166A14u; }
        if (ctx->pc != 0x166A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PreDraw__7CObjectFv_0x169db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166A14u; }
        if (ctx->pc != 0x166A14u) { return; }
    }
    ctx->pc = 0x166A14u;
label_166a14:
    // 0x166a14: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_166a18:
    if (ctx->pc == 0x166A18u) {
        ctx->pc = 0x166A18u;
            // 0x166a18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x166A1Cu;
        goto label_166a1c;
    }
    ctx->pc = 0x166A14u;
    {
        const bool branch_taken_0x166a14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x166A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166A14u;
            // 0x166a18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166a14) {
            ctx->pc = 0x166A24u;
            goto label_166a24;
        }
    }
    ctx->pc = 0x166A1Cu;
label_166a1c:
    // 0x166a1c: 0x1000000e  b           . + 4 + (0xE << 2)
label_166a20:
    if (ctx->pc == 0x166A20u) {
        ctx->pc = 0x166A20u;
            // 0x166a20: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x166A24u;
        goto label_166a24;
    }
    ctx->pc = 0x166A1Cu;
    {
        const bool branch_taken_0x166a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166A1Cu;
            // 0x166a20: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166a1c) {
            ctx->pc = 0x166A58u;
            goto label_166a58;
        }
    }
    ctx->pc = 0x166A24u;
label_166a24:
    // 0x166a24: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x166a24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_166a28:
    // 0x166a28: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x166a28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_166a2c:
    // 0x166a2c: 0x320f809  jalr        $t9
label_166a30:
    if (ctx->pc == 0x166A30u) {
        ctx->pc = 0x166A30u;
            // 0x166a30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x166A34u;
        goto label_166a34;
    }
    ctx->pc = 0x166A2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x166A34u);
        ctx->pc = 0x166A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166A2Cu;
            // 0x166a30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x166A34u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x166A34u; }
            if (ctx->pc != 0x166A34u) { return; }
        }
        }
    }
    ctx->pc = 0x166A34u;
label_166a34:
    // 0x166a34: 0xc0516c8  jal         func_145B20
label_166a38:
    if (ctx->pc == 0x166A38u) {
        ctx->pc = 0x166A38u;
            // 0x166a38: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x166A3Cu;
        goto label_166a3c;
    }
    ctx->pc = 0x166A34u;
    SET_GPR_U32(ctx, 31, 0x166A3Cu);
    ctx->pc = 0x166A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166A34u;
            // 0x166a38: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145B20u;
    if (runtime->hasFunction(0x145B20u)) {
        auto targetFn = runtime->lookupFunction(0x145B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166A3Cu; }
        if (ctx->pc != 0x166A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetDistFromCamera__FPf_0x145b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166A3Cu; }
        if (ctx->pc != 0x166A3Cu) { return; }
    }
    ctx->pc = 0x166A3Cu;
label_166a3c:
    // 0x166a3c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x166a3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_166a40:
    // 0x166a40: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x166a40u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_166a44:
    // 0x166a44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x166a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_166a48:
    // 0x166a48: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x166a48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_166a4c:
    // 0x166a4c: 0x320f809  jalr        $t9
label_166a50:
    if (ctx->pc == 0x166A50u) {
        ctx->pc = 0x166A50u;
            // 0x166a50: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->pc = 0x166A54u;
        goto label_166a54;
    }
    ctx->pc = 0x166A4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x166A54u);
        ctx->pc = 0x166A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166A4Cu;
            // 0x166a50: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x166A54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x166A54u; }
            if (ctx->pc != 0x166A54u) { return; }
        }
        }
    }
    ctx->pc = 0x166A54u;
label_166a54:
    // 0x166a54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x166a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_166a58:
    // 0x166a58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x166a58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_166a5c:
    // 0x166a5c: 0x3e00008  jr          $ra
label_166a60:
    if (ctx->pc == 0x166A60u) {
        ctx->pc = 0x166A60u;
            // 0x166a60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x166A64u;
        goto label_fallthrough_0x166a5c;
    }
    ctx->pc = 0x166A5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166A5Cu;
            // 0x166a60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x166a5c:
    ctx->pc = 0x166A64u;
}
