#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__9mgCObjectFv
// Address: 0x161df0 - 0x161e2c
void ps2___ct__9mgCObjectFv_0x161df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__9mgCObjectFv_0x161df0");
#endif

    switch (ctx->pc) {
        case 0x161df0u: goto label_161df0;
        case 0x161df4u: goto label_161df4;
        case 0x161df8u: goto label_161df8;
        case 0x161dfcu: goto label_161dfc;
        case 0x161e00u: goto label_161e00;
        case 0x161e04u: goto label_161e04;
        case 0x161e08u: goto label_161e08;
        case 0x161e0cu: goto label_161e0c;
        case 0x161e10u: goto label_161e10;
        case 0x161e14u: goto label_161e14;
        case 0x161e18u: goto label_161e18;
        case 0x161e1cu: goto label_161e1c;
        case 0x161e20u: goto label_161e20;
        case 0x161e24u: goto label_161e24;
        case 0x161e28u: goto label_161e28;
        default: break;
    }

    ctx->pc = 0x161df0u;

label_161df0:
    // 0x161df0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x161df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_161df4:
    // 0x161df4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x161df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_161df8:
    // 0x161df8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x161df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_161dfc:
    // 0x161dfc: 0x24424fe0  addiu       $v0, $v0, 0x4FE0
    ctx->pc = 0x161dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20448));
label_161e00:
    // 0x161e00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x161e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_161e04:
    // 0x161e04: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x161e04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_161e08:
    // 0x161e08: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x161e08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_161e0c:
    // 0x161e0c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x161e0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_161e10:
    // 0x161e10: 0x320f809  jalr        $t9
label_161e14:
    if (ctx->pc == 0x161E14u) {
        ctx->pc = 0x161E14u;
            // 0x161e14: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x161E18u;
        goto label_161e18;
    }
    ctx->pc = 0x161E10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x161E18u);
        ctx->pc = 0x161E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161E10u;
            // 0x161e14: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x161E18u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x161E18u; }
            if (ctx->pc != 0x161E18u) { return; }
        }
        }
    }
    ctx->pc = 0x161E18u;
label_161e18:
    // 0x161e18: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x161e18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_161e1c:
    // 0x161e1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x161e1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_161e20:
    // 0x161e20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x161e20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_161e24:
    // 0x161e24: 0x3e00008  jr          $ra
label_161e28:
    if (ctx->pc == 0x161E28u) {
        ctx->pc = 0x161E28u;
            // 0x161e28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x161E2Cu;
        goto label_fallthrough_0x161e24;
    }
    ctx->pc = 0x161E24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161E24u;
            // 0x161e28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x161e24:
    ctx->pc = 0x161E2Cu;
}
