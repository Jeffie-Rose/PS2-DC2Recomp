#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchFrame__8mgCFrameFPc
// Address: 0x1376d0 - 0x137750
void SearchFrame__8mgCFrameFPc_0x1376d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchFrame__8mgCFrameFPc_0x1376d0");
#endif

    switch (ctx->pc) {
        case 0x1376f0u: goto label_1376f0;
        case 0x137710u: goto label_137710;
        case 0x137718u: goto label_137718;
        default: break;
    }

    ctx->pc = 0x1376d0u;

label_1376d0:
    // 0x1376d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1376d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1376d4: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x1376d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1376d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1376d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1376dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1376dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1376e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1376e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1376e4: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x1376e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x1376e8: 0xc04dd70  jal         func_1375C0
    ctx->pc = 0x1376E8u;
    SET_GPR_U32(ctx, 31, 0x1376F0u);
    ctx->pc = 0x1376ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1376E8u;
            // 0x1376ec: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1375C0u;
    if (runtime->hasFunction(0x1375C0u)) {
        auto targetFn = runtime->lookupFunction(0x1375C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1376F0u; }
        if (ctx->pc != 0x1376F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StrCmp__FPcPc_0x1375c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1376F0u; }
        if (ctx->pc != 0x1376F0u) { return; }
    }
    ctx->pc = 0x1376F0u;
label_1376f0:
    // 0x1376f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1376F0u;
    {
        const bool branch_taken_0x1376f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1376F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1376F0u;
            // 0x1376f4: 0x140102d  daddu       $v0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1376f0) {
            ctx->pc = 0x137700u;
            goto label_137700;
        }
    }
    ctx->pc = 0x1376F8u;
    // 0x1376f8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1376F8u;
    {
        const bool branch_taken_0x1376f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1376FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1376F8u;
            // 0x1376fc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1376f8) {
            ctx->pc = 0x137740u;
            goto label_137740;
        }
    }
    ctx->pc = 0x137700u;
label_137700:
    // 0x137700: 0x8d500058  lw          $s0, 0x58($t2)
    ctx->pc = 0x137700u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 88)));
    // 0x137704: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x137704u;
    {
        const bool branch_taken_0x137704 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x137704) {
            ctx->pc = 0x137734u;
            goto label_137734;
        }
    }
    ctx->pc = 0x13770Cu;
    // 0x13770c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13770cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_137710:
    // 0x137710: 0xc04ddb4  jal         func_1376D0
    ctx->pc = 0x137710u;
    SET_GPR_U32(ctx, 31, 0x137718u);
    ctx->pc = 0x137714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137710u;
            // 0x137714: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1376D0u;
    goto label_1376d0;
    ctx->pc = 0x137718u;
label_137718:
    // 0x137718: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x137718u;
    {
        const bool branch_taken_0x137718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x137718) {
            ctx->pc = 0x137728u;
            goto label_137728;
        }
    }
    ctx->pc = 0x137720u;
    // 0x137720: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x137720u;
    {
        const bool branch_taken_0x137720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137720) {
            ctx->pc = 0x13773Cu;
            goto label_13773c;
        }
    }
    ctx->pc = 0x137728u;
label_137728:
    // 0x137728: 0x8e10005c  lw          $s0, 0x5C($s0)
    ctx->pc = 0x137728u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x13772c: 0x1600fff8  bnez        $s0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x13772Cu;
    {
        const bool branch_taken_0x13772c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x137730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13772Cu;
            // 0x137730: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13772c) {
            ctx->pc = 0x137710u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_137710;
        }
    }
    ctx->pc = 0x137734u;
label_137734:
    // 0x137734: 0x0  nop
    ctx->pc = 0x137734u;
    // NOP
    // 0x137738: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x137738u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13773c:
    // 0x13773c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13773cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_137740:
    // 0x137740: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x137740u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137744: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x137744u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137748: 0x3e00008  jr          $ra
    ctx->pc = 0x137748u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13774Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137748u;
            // 0x13774c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x137750u;
}
