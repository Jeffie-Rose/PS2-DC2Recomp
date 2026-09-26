#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__9CMapPieceFv
// Address: 0x168680 - 0x1686cc
void Step__9CMapPieceFv_0x168680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__9CMapPieceFv_0x168680");
#endif

    switch (ctx->pc) {
        case 0x168680u: goto label_168680;
        case 0x168684u: goto label_168684;
        case 0x168688u: goto label_168688;
        case 0x16868cu: goto label_16868c;
        case 0x168690u: goto label_168690;
        case 0x168694u: goto label_168694;
        case 0x168698u: goto label_168698;
        case 0x16869cu: goto label_16869c;
        case 0x1686a0u: goto label_1686a0;
        case 0x1686a4u: goto label_1686a4;
        case 0x1686a8u: goto label_1686a8;
        case 0x1686acu: goto label_1686ac;
        case 0x1686b0u: goto label_1686b0;
        case 0x1686b4u: goto label_1686b4;
        case 0x1686b8u: goto label_1686b8;
        case 0x1686bcu: goto label_1686bc;
        case 0x1686c0u: goto label_1686c0;
        case 0x1686c4u: goto label_1686c4;
        case 0x1686c8u: goto label_1686c8;
        default: break;
    }

    ctx->pc = 0x168680u;

label_168680:
    // 0x168680: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x168680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_168684:
    // 0x168684: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x168684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_168688:
    // 0x168688: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x168688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16868c:
    // 0x16868c: 0x8c83009c  lw          $v1, 0x9C($a0)
    ctx->pc = 0x16868cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
label_168690:
    // 0x168690: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_168694:
    if (ctx->pc == 0x168694u) {
        ctx->pc = 0x168694u;
            // 0x168694: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x168698u;
        goto label_168698;
    }
    ctx->pc = 0x168690u;
    {
        const bool branch_taken_0x168690 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x168694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168690u;
            // 0x168694: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168690) {
            ctx->pc = 0x1686BCu;
            goto label_1686bc;
        }
    }
    ctx->pc = 0x168698u;
label_168698:
    // 0x168698: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x168698u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16869c:
    // 0x16869c: 0x8f390074  lw          $t9, 0x74($t9)
    ctx->pc = 0x16869cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 116)));
label_1686a0:
    // 0x1686a0: 0x320f809  jalr        $t9
label_1686a4:
    if (ctx->pc == 0x1686A4u) {
        ctx->pc = 0x1686A8u;
        goto label_1686a8;
    }
    ctx->pc = 0x1686A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1686A8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1686A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1686A8u; }
            if (ctx->pc != 0x1686A8u) { return; }
        }
        }
    }
    ctx->pc = 0x1686A8u;
label_1686a8:
    // 0x1686a8: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x1686a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_1686ac:
    // 0x1686ac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1686acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1686b0:
    // 0x1686b0: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x1686b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_1686b4:
    // 0x1686b4: 0x320f809  jalr        $t9
label_1686b8:
    if (ctx->pc == 0x1686B8u) {
        ctx->pc = 0x1686BCu;
        goto label_1686bc;
    }
    ctx->pc = 0x1686B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1686BCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1686BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1686BCu; }
            if (ctx->pc != 0x1686BCu) { return; }
        }
        }
    }
    ctx->pc = 0x1686BCu;
label_1686bc:
    // 0x1686bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1686bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1686c0:
    // 0x1686c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1686c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1686c4:
    // 0x1686c4: 0x3e00008  jr          $ra
label_1686c8:
    if (ctx->pc == 0x1686C8u) {
        ctx->pc = 0x1686C8u;
            // 0x1686c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1686CCu;
        goto label_fallthrough_0x1686c4;
    }
    ctx->pc = 0x1686C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1686C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1686C4u;
            // 0x1686c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1686c4:
    ctx->pc = 0x1686CCu;
}
