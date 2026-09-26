#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__7CObjectFv
// Address: 0x169de0 - 0x169e80
void Initialize__7CObjectFv_0x169de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__7CObjectFv_0x169de0");
#endif

    switch (ctx->pc) {
        case 0x169de0u: goto label_169de0;
        case 0x169de4u: goto label_169de4;
        case 0x169de8u: goto label_169de8;
        case 0x169decu: goto label_169dec;
        case 0x169df0u: goto label_169df0;
        case 0x169df4u: goto label_169df4;
        case 0x169df8u: goto label_169df8;
        case 0x169dfcu: goto label_169dfc;
        case 0x169e00u: goto label_169e00;
        case 0x169e04u: goto label_169e04;
        case 0x169e08u: goto label_169e08;
        case 0x169e0cu: goto label_169e0c;
        case 0x169e10u: goto label_169e10;
        case 0x169e14u: goto label_169e14;
        case 0x169e18u: goto label_169e18;
        case 0x169e1cu: goto label_169e1c;
        case 0x169e20u: goto label_169e20;
        case 0x169e24u: goto label_169e24;
        case 0x169e28u: goto label_169e28;
        case 0x169e2cu: goto label_169e2c;
        case 0x169e30u: goto label_169e30;
        case 0x169e34u: goto label_169e34;
        case 0x169e38u: goto label_169e38;
        case 0x169e3cu: goto label_169e3c;
        case 0x169e40u: goto label_169e40;
        case 0x169e44u: goto label_169e44;
        case 0x169e48u: goto label_169e48;
        case 0x169e4cu: goto label_169e4c;
        case 0x169e50u: goto label_169e50;
        case 0x169e54u: goto label_169e54;
        case 0x169e58u: goto label_169e58;
        case 0x169e5cu: goto label_169e5c;
        case 0x169e60u: goto label_169e60;
        case 0x169e64u: goto label_169e64;
        case 0x169e68u: goto label_169e68;
        case 0x169e6cu: goto label_169e6c;
        case 0x169e70u: goto label_169e70;
        case 0x169e74u: goto label_169e74;
        case 0x169e78u: goto label_169e78;
        case 0x169e7cu: goto label_169e7c;
        default: break;
    }

    ctx->pc = 0x169de0u;

label_169de0:
    // 0x169de0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x169de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_169de4:
    // 0x169de4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x169de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_169de8:
    // 0x169de8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x169de8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_169dec:
    // 0x169dec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x169decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_169df0:
    // 0x169df0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x169df0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_169df4:
    // 0x169df4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x169df4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_169df8:
    // 0x169df8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x169df8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_169dfc:
    // 0x169dfc: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x169dfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_169e00:
    // 0x169e00: 0x320f809  jalr        $t9
label_169e04:
    if (ctx->pc == 0x169E04u) {
        ctx->pc = 0x169E04u;
            // 0x169e04: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x169E08u;
        goto label_169e08;
    }
    ctx->pc = 0x169E00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x169E08u);
        ctx->pc = 0x169E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169E00u;
            // 0x169e04: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x169E08u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x169E08u; }
            if (ctx->pc != 0x169E08u) { return; }
        }
        }
    }
    ctx->pc = 0x169E08u;
label_169e08:
    // 0x169e08: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x169e08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_169e0c:
    // 0x169e0c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x169e0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_169e10:
    // 0x169e10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_169e14:
    // 0x169e14: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x169e14u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_169e18:
    // 0x169e18: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x169e18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_169e1c:
    // 0x169e1c: 0x320f809  jalr        $t9
label_169e20:
    if (ctx->pc == 0x169E20u) {
        ctx->pc = 0x169E20u;
            // 0x169e20: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x169E24u;
        goto label_169e24;
    }
    ctx->pc = 0x169E1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x169E24u);
        ctx->pc = 0x169E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169E1Cu;
            // 0x169e20: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x169E24u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x169E24u; }
            if (ctx->pc != 0x169E24u) { return; }
        }
        }
    }
    ctx->pc = 0x169E24u;
label_169e24:
    // 0x169e24: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x169e24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_169e28:
    // 0x169e28: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x169e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_169e2c:
    // 0x169e2c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x169e2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_169e30:
    // 0x169e30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_169e34:
    // 0x169e34: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x169e34u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_169e38:
    // 0x169e38: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x169e38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_169e3c:
    // 0x169e3c: 0x320f809  jalr        $t9
label_169e40:
    if (ctx->pc == 0x169E40u) {
        ctx->pc = 0x169E40u;
            // 0x169e40: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x169E44u;
        goto label_169e44;
    }
    ctx->pc = 0x169E3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x169E44u);
        ctx->pc = 0x169E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169E3Cu;
            // 0x169e40: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x169E44u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x169E44u; }
            if (ctx->pc != 0x169E44u) { return; }
        }
        }
    }
    ctx->pc = 0x169E44u;
label_169e44:
    // 0x169e44: 0x3c05bf80  lui         $a1, 0xBF80
    ctx->pc = 0x169e44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49024 << 16));
label_169e48:
    // 0x169e48: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x169e48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
label_169e4c:
    // 0x169e4c: 0xae050050  sw          $a1, 0x50($s0)
    ctx->pc = 0x169e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 5));
label_169e50:
    // 0x169e50: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x169e50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_169e54:
    // 0x169e54: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x169e54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
label_169e58:
    // 0x169e58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x169e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_169e5c:
    // 0x169e5c: 0xae050058  sw          $a1, 0x58($s0)
    ctx->pc = 0x169e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 5));
label_169e60:
    // 0x169e60: 0xae04005c  sw          $a0, 0x5C($s0)
    ctx->pc = 0x169e60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 4));
label_169e64:
    // 0x169e64: 0xae050060  sw          $a1, 0x60($s0)
    ctx->pc = 0x169e64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 5));
label_169e68:
    // 0x169e68: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x169e68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
label_169e6c:
    // 0x169e6c: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x169e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
label_169e70:
    // 0x169e70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x169e70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_169e74:
    // 0x169e74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x169e74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_169e78:
    // 0x169e78: 0x3e00008  jr          $ra
label_169e7c:
    if (ctx->pc == 0x169E7Cu) {
        ctx->pc = 0x169E7Cu;
            // 0x169e7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x169E80u;
        goto label_fallthrough_0x169e78;
    }
    ctx->pc = 0x169E78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169E78u;
            // 0x169e7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x169e78:
    ctx->pc = 0x169E80u;
}
