#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetFrameNum__8mgCFrameFv
// Address: 0x136a80 - 0x136ad8
void GetFrameNum__8mgCFrameFv_0x136a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetFrameNum__8mgCFrameFv_0x136a80");
#endif

    switch (ctx->pc) {
        case 0x136a9cu: goto label_136a9c;
        case 0x136aa4u: goto label_136aa4;
        default: break;
    }

    ctx->pc = 0x136a80u;

label_136a80:
    // 0x136a80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x136a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x136a84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x136a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x136a88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x136a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x136a8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x136a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x136a90: 0x8c910058  lw          $s1, 0x58($a0)
    ctx->pc = 0x136a90u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x136a94: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x136A94u;
    {
        const bool branch_taken_0x136a94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x136A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136A94u;
            // 0x136a98: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136a94) {
            ctx->pc = 0x136ABCu;
            goto label_136abc;
        }
    }
    ctx->pc = 0x136A9Cu;
label_136a9c:
    // 0x136a9c: 0xc04daa0  jal         func_136A80
    ctx->pc = 0x136A9Cu;
    SET_GPR_U32(ctx, 31, 0x136AA4u);
    ctx->pc = 0x136AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136A9Cu;
            // 0x136aa0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136A80u;
    goto label_136a80;
    ctx->pc = 0x136AA4u;
label_136aa4:
    // 0x136aa4: 0x8e31005c  lw          $s1, 0x5C($s1)
    ctx->pc = 0x136aa4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x136aa8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x136aa8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x136aac: 0x0  nop
    ctx->pc = 0x136aacu;
    // NOP
    // 0x136ab0: 0x0  nop
    ctx->pc = 0x136ab0u;
    // NOP
    // 0x136ab4: 0x1620fff9  bnez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x136AB4u;
    {
        const bool branch_taken_0x136ab4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x136ab4) {
            ctx->pc = 0x136A9Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_136a9c;
        }
    }
    ctx->pc = 0x136ABCu;
label_136abc:
    // 0x136abc: 0x0  nop
    ctx->pc = 0x136abcu;
    // NOP
    // 0x136ac0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x136ac0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136ac4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x136ac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x136ac8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x136ac8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136acc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x136accu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x136AD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136AD0u;
            // 0x136ad4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x136AD8u;
}
