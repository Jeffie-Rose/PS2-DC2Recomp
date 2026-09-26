#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetAttrParamDraw__8mgCFrameFii
// Address: 0x137da0 - 0x137e0c
void SetAttrParamDraw__8mgCFrameFii_0x137da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetAttrParamDraw__8mgCFrameFii_0x137da0");
#endif

    switch (ctx->pc) {
        case 0x137dd4u: goto label_137dd4;
        case 0x137de4u: goto label_137de4;
        default: break;
    }

    ctx->pc = 0x137da0u;

label_137da0:
    // 0x137da0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x137da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x137da4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x137da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x137da8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x137da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x137dac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x137dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x137db0: 0x8c8300f4  lw          $v1, 0xF4($a0)
    ctx->pc = 0x137db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x137db4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x137DB4u;
    {
        const bool branch_taken_0x137db4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x137DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137DB4u;
            // 0x137db8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137db4) {
            ctx->pc = 0x137DC0u;
            goto label_137dc0;
        }
    }
    ctx->pc = 0x137DBCu;
    // 0x137dbc: 0xac710018  sw          $s1, 0x18($v1)
    ctx->pc = 0x137dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 17));
label_137dc0:
    // 0x137dc0: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x137DC0u;
    {
        const bool branch_taken_0x137dc0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x137dc0) {
            ctx->pc = 0x137DF8u;
            goto label_137df8;
        }
    }
    ctx->pc = 0x137DC8u;
    // 0x137dc8: 0x8c900058  lw          $s0, 0x58($a0)
    ctx->pc = 0x137dc8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x137dcc: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x137DCCu;
    {
        const bool branch_taken_0x137dcc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x137dcc) {
            ctx->pc = 0x137DF4u;
            goto label_137df4;
        }
    }
    ctx->pc = 0x137DD4u;
label_137dd4:
    // 0x137dd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x137dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137dd8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x137dd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137ddc: 0xc04df68  jal         func_137DA0
    ctx->pc = 0x137DDCu;
    SET_GPR_U32(ctx, 31, 0x137DE4u);
    ctx->pc = 0x137DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137DDCu;
            // 0x137de0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137DA0u;
    goto label_137da0;
    ctx->pc = 0x137DE4u;
label_137de4:
    // 0x137de4: 0x8e10005c  lw          $s0, 0x5C($s0)
    ctx->pc = 0x137de4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x137de8: 0x0  nop
    ctx->pc = 0x137de8u;
    // NOP
    // 0x137dec: 0x1600fff9  bnez        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x137DECu;
    {
        const bool branch_taken_0x137dec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x137dec) {
            ctx->pc = 0x137DD4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_137dd4;
        }
    }
    ctx->pc = 0x137DF4u;
label_137df4:
    // 0x137df4: 0x0  nop
    ctx->pc = 0x137df4u;
    // NOP
label_137df8:
    // 0x137df8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x137df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137dfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x137dfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137e00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x137e00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137e04: 0x3e00008  jr          $ra
    ctx->pc = 0x137E04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137E04u;
            // 0x137e08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x137E0Cu;
}
