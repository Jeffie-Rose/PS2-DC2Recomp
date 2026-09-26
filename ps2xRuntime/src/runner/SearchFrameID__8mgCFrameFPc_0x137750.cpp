#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchFrameID__8mgCFrameFPc
// Address: 0x137750 - 0x1377d4
void SearchFrameID__8mgCFrameFPc_0x137750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchFrameID__8mgCFrameFPc_0x137750");
#endif

    switch (ctx->pc) {
        case 0x13777cu: goto label_13777c;
        case 0x13779cu: goto label_13779c;
        default: break;
    }

    ctx->pc = 0x137750u;

    // 0x137750: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x137750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x137754: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x137754u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137758: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x137758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13775c: 0x8c820068  lw          $v0, 0x68($a0)
    ctx->pc = 0x13775cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x137760: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x137760u;
    {
        const bool branch_taken_0x137760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x137764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137760u;
            // 0x137764: 0x80682d  daddu       $t5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137760) {
            ctx->pc = 0x137770u;
            goto label_137770;
        }
    }
    ctx->pc = 0x137768u;
    // 0x137768: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x137768u;
    {
        const bool branch_taken_0x137768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13776Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137768u;
            // 0x13776c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137768) {
            ctx->pc = 0x1377C8u;
            goto label_1377c8;
        }
    }
    ctx->pc = 0x137770u;
label_137770:
    // 0x137770: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x137770u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137774: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x137774u;
    {
        const bool branch_taken_0x137774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137774u;
            // 0x137778: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137774) {
            ctx->pc = 0x1377B4u;
            goto label_1377b4;
        }
    }
    ctx->pc = 0x13777Cu;
label_13777c:
    // 0x13777c: 0x8da20068  lw          $v0, 0x68($t5)
    ctx->pc = 0x13777cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 104)));
    // 0x137780: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x137780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x137784: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x137784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x137788: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x137788u;
    {
        const bool branch_taken_0x137788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x137788) {
            ctx->pc = 0x1377ACu;
            goto label_1377ac;
        }
    }
    ctx->pc = 0x137790u;
    // 0x137790: 0x8c440050  lw          $a0, 0x50($v0)
    ctx->pc = 0x137790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x137794: 0xc04dd70  jal         func_1375C0
    ctx->pc = 0x137794u;
    SET_GPR_U32(ctx, 31, 0x13779Cu);
    ctx->pc = 0x137798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137794u;
            // 0x137798: 0x180282d  daddu       $a1, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1375C0u;
    if (runtime->hasFunction(0x1375C0u)) {
        auto targetFn = runtime->lookupFunction(0x1375C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13779Cu; }
        if (ctx->pc != 0x13779Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StrCmp__FPcPc_0x1375c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13779Cu; }
        if (ctx->pc != 0x13779Cu) { return; }
    }
    ctx->pc = 0x13779Cu;
label_13779c:
    // 0x13779c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13779Cu;
    {
        const bool branch_taken_0x13779c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1377A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13779Cu;
            // 0x1377a0: 0x140102d  daddu       $v0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13779c) {
            ctx->pc = 0x1377ACu;
            goto label_1377ac;
        }
    }
    ctx->pc = 0x1377A4u;
    // 0x1377a4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1377A4u;
    {
        const bool branch_taken_0x1377a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1377A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1377A4u;
            // 0x1377a8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1377a4) {
            ctx->pc = 0x1377CCu;
            goto label_1377cc;
        }
    }
    ctx->pc = 0x1377ACu;
label_1377ac:
    // 0x1377ac: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x1377acu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x1377b0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1377b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_1377b4:
    // 0x1377b4: 0x0  nop
    ctx->pc = 0x1377b4u;
    // NOP
    // 0x1377b8: 0x8da20064  lw          $v0, 0x64($t5)
    ctx->pc = 0x1377b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 100)));
    // 0x1377bc: 0x142102a  slt         $v0, $t2, $v0
    ctx->pc = 0x1377bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1377c0: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1377C0u;
    {
        const bool branch_taken_0x1377c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1377C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1377C0u;
            // 0x1377c4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1377c0) {
            ctx->pc = 0x13777Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13777c;
        }
    }
    ctx->pc = 0x1377C8u;
label_1377c8:
    // 0x1377c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1377c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1377cc:
    // 0x1377cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1377CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1377D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1377CCu;
            // 0x1377d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1377D4u;
}
