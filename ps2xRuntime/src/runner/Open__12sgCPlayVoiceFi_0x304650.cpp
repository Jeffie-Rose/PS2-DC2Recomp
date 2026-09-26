#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Open__12sgCPlayVoiceFi
// Address: 0x304650 - 0x30469c
void Open__12sgCPlayVoiceFi_0x304650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Open__12sgCPlayVoiceFi_0x304650");
#endif

    switch (ctx->pc) {
        case 0x304678u: goto label_304678;
        default: break;
    }

    ctx->pc = 0x304650u;

    // 0x304650: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x304650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x304654: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x304654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x304658: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x304658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30465c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30465cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x304660: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x304660u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304664: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x304664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x304668: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x304668u;
    {
        const bool branch_taken_0x304668 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x30466Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304668u;
            // 0x30466c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304668) {
            ctx->pc = 0x304678u;
            goto label_304678;
        }
    }
    ctx->pc = 0x304670u;
    // 0x304670: 0xc0c121c  jal         func_304870
    ctx->pc = 0x304670u;
    SET_GPR_U32(ctx, 31, 0x304678u);
    ctx->pc = 0x304870u;
    if (runtime->hasFunction(0x304870u)) {
        auto targetFn = runtime->lookupFunction(0x304870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304678u; }
        if (ctx->pc != 0x304678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Close__12sgCPlayVoiceFv_0x304870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304678u; }
        if (ctx->pc != 0x304678u) { return; }
    }
    ctx->pc = 0x304678u;
label_304678:
    // 0x304678: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x304678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30467c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x30467cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x304680: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x304680u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x304684: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x304684u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x304688: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x304688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30468c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30468cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x304690: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x304690u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x304694: 0x3e00008  jr          $ra
    ctx->pc = 0x304694u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304694u;
            // 0x304698: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30469Cu;
}
