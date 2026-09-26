#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetBrother__8mgCFrameFP8mgCFrame
// Address: 0x136b20 - 0x136b60
void SetBrother__8mgCFrameFP8mgCFrame_0x136b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetBrother__8mgCFrameFP8mgCFrame_0x136b20");
#endif

    switch (ctx->pc) {
        case 0x136b40u: goto label_136b40;
        default: break;
    }

    ctx->pc = 0x136b20u;

label_136b20:
    // 0x136b20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x136b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x136b24: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x136B24u;
    {
        const bool branch_taken_0x136b24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x136B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136B24u;
            // 0x136b28: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136b24) {
            ctx->pc = 0x136B54u;
            goto label_136b54;
        }
    }
    ctx->pc = 0x136B2Cu;
    // 0x136b2c: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x136b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x136b30: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x136B30u;
    {
        const bool branch_taken_0x136b30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x136b30) {
            ctx->pc = 0x136B48u;
            goto label_136b48;
        }
    }
    ctx->pc = 0x136B38u;
    // 0x136b38: 0xc04dac8  jal         func_136B20
    ctx->pc = 0x136B38u;
    SET_GPR_U32(ctx, 31, 0x136B40u);
    ctx->pc = 0x136B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136B38u;
            // 0x136b3c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136B20u;
    goto label_136b20;
    ctx->pc = 0x136B40u;
label_136b40:
    // 0x136b40: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x136B40u;
    {
        const bool branch_taken_0x136b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136B40u;
            // 0x136b44: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136b40) {
            ctx->pc = 0x136B58u;
            goto label_136b58;
        }
    }
    ctx->pc = 0x136B48u;
label_136b48:
    // 0x136b48: 0xac85005c  sw          $a1, 0x5C($a0)
    ctx->pc = 0x136b48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 5));
    // 0x136b4c: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x136b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x136b50: 0xac640060  sw          $a0, 0x60($v1)
    ctx->pc = 0x136b50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 4));
label_136b54:
    // 0x136b54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x136b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_136b58:
    // 0x136b58: 0x3e00008  jr          $ra
    ctx->pc = 0x136B58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136B58u;
            // 0x136b5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x136B60u;
}
