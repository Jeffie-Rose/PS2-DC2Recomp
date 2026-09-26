#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawStep__7CObjectFv
// Address: 0x169d10 - 0x169d54
void DrawStep__7CObjectFv_0x169d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawStep__7CObjectFv_0x169d10");
#endif

    switch (ctx->pc) {
        case 0x169d10u: goto label_169d10;
        case 0x169d14u: goto label_169d14;
        case 0x169d18u: goto label_169d18;
        case 0x169d1cu: goto label_169d1c;
        case 0x169d20u: goto label_169d20;
        case 0x169d24u: goto label_169d24;
        case 0x169d28u: goto label_169d28;
        case 0x169d2cu: goto label_169d2c;
        case 0x169d30u: goto label_169d30;
        case 0x169d34u: goto label_169d34;
        case 0x169d38u: goto label_169d38;
        case 0x169d3cu: goto label_169d3c;
        case 0x169d40u: goto label_169d40;
        case 0x169d44u: goto label_169d44;
        case 0x169d48u: goto label_169d48;
        case 0x169d4cu: goto label_169d4c;
        case 0x169d50u: goto label_169d50;
        default: break;
    }

    ctx->pc = 0x169d10u;

label_169d10:
    // 0x169d10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x169d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_169d14:
    // 0x169d14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x169d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_169d18:
    // 0x169d18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x169d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_169d1c:
    // 0x169d1c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x169d1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_169d20:
    // 0x169d20: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x169d20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_169d24:
    // 0x169d24: 0x320f809  jalr        $t9
label_169d28:
    if (ctx->pc == 0x169D28u) {
        ctx->pc = 0x169D28u;
            // 0x169d28: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x169D2Cu;
        goto label_169d2c;
    }
    ctx->pc = 0x169D24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x169D2Cu);
        ctx->pc = 0x169D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169D24u;
            // 0x169d28: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x169D2Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x169D2Cu; }
            if (ctx->pc != 0x169D2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x169D2Cu;
label_169d2c:
    // 0x169d2c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x169d2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_169d30:
    // 0x169d30: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x169d30u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_169d34:
    // 0x169d34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_169d38:
    // 0x169d38: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x169d38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_169d3c:
    // 0x169d3c: 0x320f809  jalr        $t9
label_169d40:
    if (ctx->pc == 0x169D40u) {
        ctx->pc = 0x169D40u;
            // 0x169d40: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->pc = 0x169D44u;
        goto label_169d44;
    }
    ctx->pc = 0x169D3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x169D44u);
        ctx->pc = 0x169D40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169D3Cu;
            // 0x169d40: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x169D44u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x169D44u; }
            if (ctx->pc != 0x169D44u) { return; }
        }
        }
    }
    ctx->pc = 0x169D44u;
label_169d44:
    // 0x169d44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x169d44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_169d48:
    // 0x169d48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x169d48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_169d4c:
    // 0x169d4c: 0x3e00008  jr          $ra
label_169d50:
    if (ctx->pc == 0x169D50u) {
        ctx->pc = 0x169D50u;
            // 0x169d50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x169D54u;
        goto label_fallthrough_0x169d4c;
    }
    ctx->pc = 0x169D4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169D4Cu;
            // 0x169d50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x169d4c:
    ctx->pc = 0x169D54u;
}
