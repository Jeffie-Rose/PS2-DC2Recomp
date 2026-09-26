#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetFishImageColor__Fii
// Address: 0x211ce0 - 0x211d44
void GetFishImageColor__Fii_0x211ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetFishImageColor__Fii_0x211ce0");
#endif

    switch (ctx->pc) {
        case 0x211cf0u: goto label_211cf0;
        default: break;
    }

    ctx->pc = 0x211ce0u;

    // 0x211ce0: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x211ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x211ce4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x211ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x211ce8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x211CE8u;
    {
        const bool branch_taken_0x211ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211CE8u;
            // 0x211cec: 0x24c6f980  addiu       $a2, $a2, -0x680 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211ce8) {
            ctx->pc = 0x211D2Cu;
            goto label_211d2c;
        }
    }
    ctx->pc = 0x211CF0u;
label_211cf0:
    // 0x211cf0: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x211CF0u;
    {
        const bool branch_taken_0x211cf0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x211cf0) {
            ctx->pc = 0x211D0Cu;
            goto label_211d0c;
        }
    }
    ctx->pc = 0x211CF8u;
    // 0x211cf8: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x211cf8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x211cfc: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x211CFCu;
    {
        const bool branch_taken_0x211cfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x211cfc) {
            ctx->pc = 0x211D0Cu;
            goto label_211d0c;
        }
    }
    ctx->pc = 0x211D04u;
    // 0x211d04: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x211D04u;
    {
        const bool branch_taken_0x211d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211D04u;
            // 0x211d08: 0x80c20008  lb          $v0, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211d04) {
            ctx->pc = 0x211D3Cu;
            goto label_211d3c;
        }
    }
    ctx->pc = 0x211D0Cu;
label_211d0c:
    // 0x211d0c: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x211D0Cu;
    {
        const bool branch_taken_0x211d0c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x211d0c) {
            ctx->pc = 0x211D28u;
            goto label_211d28;
        }
    }
    ctx->pc = 0x211D14u;
    // 0x211d14: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x211d14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x211d18: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x211D18u;
    {
        const bool branch_taken_0x211d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x211d18) {
            ctx->pc = 0x211D28u;
            goto label_211d28;
        }
    }
    ctx->pc = 0x211D20u;
    // 0x211d20: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x211D20u;
    {
        const bool branch_taken_0x211d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211D20u;
            // 0x211d24: 0x80c20009  lb          $v0, 0x9($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211d20) {
            ctx->pc = 0x211D3Cu;
            goto label_211d3c;
        }
    }
    ctx->pc = 0x211D28u;
label_211d28:
    // 0x211d28: 0x24c6000c  addiu       $a2, $a2, 0xC
    ctx->pc = 0x211d28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
label_211d2c:
    // 0x211d2c: 0x0  nop
    ctx->pc = 0x211d2cu;
    // NOP
    // 0x211d30: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x211d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x211d34: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x211D34u;
    {
        const bool branch_taken_0x211d34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x211D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211D34u;
            // 0x211d38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211d34) {
            ctx->pc = 0x211CF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_211cf0;
        }
    }
    ctx->pc = 0x211D3Cu;
label_211d3c:
    // 0x211d3c: 0x3e00008  jr          $ra
    ctx->pc = 0x211D3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x211D44u;
}
