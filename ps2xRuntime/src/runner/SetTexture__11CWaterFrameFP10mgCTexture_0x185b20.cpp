#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetTexture__11CWaterFrameFP10mgCTexture
// Address: 0x185b20 - 0x185b58
void SetTexture__11CWaterFrameFP10mgCTexture_0x185b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetTexture__11CWaterFrameFP10mgCTexture_0x185b20");
#endif

    switch (ctx->pc) {
        case 0x185b20u: goto label_185b20;
        case 0x185b24u: goto label_185b24;
        case 0x185b28u: goto label_185b28;
        case 0x185b2cu: goto label_185b2c;
        case 0x185b30u: goto label_185b30;
        case 0x185b34u: goto label_185b34;
        case 0x185b38u: goto label_185b38;
        case 0x185b3cu: goto label_185b3c;
        case 0x185b40u: goto label_185b40;
        case 0x185b44u: goto label_185b44;
        case 0x185b48u: goto label_185b48;
        case 0x185b4cu: goto label_185b4c;
        case 0x185b50u: goto label_185b50;
        case 0x185b54u: goto label_185b54;
        default: break;
    }

    ctx->pc = 0x185b20u;

label_185b20:
    // 0x185b20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x185b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_185b24:
    // 0x185b24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x185b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_185b28:
    // 0x185b28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x185b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_185b2c:
    // 0x185b2c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x185b2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_185b30:
    // 0x185b30: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x185b30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_185b34:
    // 0x185b34: 0x320f809  jalr        $t9
label_185b38:
    if (ctx->pc == 0x185B38u) {
        ctx->pc = 0x185B38u;
            // 0x185b38: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x185B3Cu;
        goto label_185b3c;
    }
    ctx->pc = 0x185B34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x185B3Cu);
        ctx->pc = 0x185B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185B34u;
            // 0x185b38: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x185B3Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x185B3Cu; }
            if (ctx->pc != 0x185B3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x185B3Cu;
label_185b3c:
    // 0x185b3c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_185b40:
    if (ctx->pc == 0x185B40u) {
        ctx->pc = 0x185B44u;
        goto label_185b44;
    }
    ctx->pc = 0x185B3Cu;
    {
        const bool branch_taken_0x185b3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x185b3c) {
            ctx->pc = 0x185B48u;
            goto label_185b48;
        }
    }
    ctx->pc = 0x185B44u;
label_185b44:
    // 0x185b44: 0xac500028  sw          $s0, 0x28($v0)
    ctx->pc = 0x185b44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 16));
label_185b48:
    // 0x185b48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x185b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_185b4c:
    // 0x185b4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x185b4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_185b50:
    // 0x185b50: 0x3e00008  jr          $ra
label_185b54:
    if (ctx->pc == 0x185B54u) {
        ctx->pc = 0x185B54u;
            // 0x185b54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x185B58u;
        goto label_fallthrough_0x185b50;
    }
    ctx->pc = 0x185B50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185B50u;
            // 0x185b54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x185b50:
    ctx->pc = 0x185B58u;
}
