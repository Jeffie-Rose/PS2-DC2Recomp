#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchVisualType__FP18mgCreateVisualTypePc
// Address: 0x132600 - 0x1326a0
void SearchVisualType__FP18mgCreateVisualTypePc_0x132600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchVisualType__FP18mgCreateVisualTypePc_0x132600");
#endif

    switch (ctx->pc) {
        case 0x132634u: goto label_132634;
        case 0x13265cu: goto label_13265c;
        default: break;
    }

    ctx->pc = 0x132600u;

    // 0x132600: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x132600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x132604: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x132604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x132608: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x132608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13260c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13260cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x132610: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x132610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x132614: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x132614u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132618: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x132618u;
    {
        const bool branch_taken_0x132618 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x132618) {
            ctx->pc = 0x13262Cu;
            goto label_13262c;
        }
    }
    ctx->pc = 0x132620u;
    // 0x132620: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x132620u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132624: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x132624u;
    {
        const bool branch_taken_0x132624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132624) {
            ctx->pc = 0x132684u;
            goto label_132684;
        }
    }
    ctx->pc = 0x13262Cu;
label_13262c:
    // 0x13262c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13262cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132630: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x132630u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_132634:
    // 0x132634: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x132634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x132638: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x132638u;
    {
        const bool branch_taken_0x132638 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x132638) {
            ctx->pc = 0x13267Cu;
            goto label_13267c;
        }
    }
    ctx->pc = 0x132640u;
    // 0x132640: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x132640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x132644: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x132644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x132648: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x132648u;
    {
        const bool branch_taken_0x132648 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x132648) {
            ctx->pc = 0x13267Cu;
            goto label_13267c;
        }
    }
    ctx->pc = 0x132650u;
    // 0x132650: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x132650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132654: 0xc04ddb0  jal         func_1376C0
    ctx->pc = 0x132654u;
    SET_GPR_U32(ctx, 31, 0x13265Cu);
    ctx->pc = 0x1376C0u;
    if (runtime->hasFunction(0x1376C0u)) {
        auto targetFn = runtime->lookupFunction(0x1376C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13265Cu; }
        if (ctx->pc != 0x13265Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgFrameNameComp__FPcPc_0x1376c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13265Cu; }
        if (ctx->pc != 0x13265Cu) { return; }
    }
    ctx->pc = 0x13265Cu;
label_13265c:
    // 0x13265c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13265Cu;
    {
        const bool branch_taken_0x13265c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13265c) {
            ctx->pc = 0x132670u;
            goto label_132670;
        }
    }
    ctx->pc = 0x132664u;
    // 0x132664: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x132664u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132668: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x132668u;
    {
        const bool branch_taken_0x132668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132668) {
            ctx->pc = 0x13267Cu;
            goto label_13267c;
        }
    }
    ctx->pc = 0x132670u;
label_132670:
    // 0x132670: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x132670u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x132674: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x132674u;
    {
        const bool branch_taken_0x132674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132674) {
            ctx->pc = 0x132634u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_132634;
        }
    }
    ctx->pc = 0x13267Cu;
label_13267c:
    // 0x13267c: 0x0  nop
    ctx->pc = 0x13267cu;
    // NOP
    // 0x132680: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x132680u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_132684:
    // 0x132684: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x132684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x132688: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x132688u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13268c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13268cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132690: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x132690u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x132694: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x132694u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x132698: 0x3e00008  jr          $ra
    ctx->pc = 0x132698u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1326A0u;
}
