#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetConfigCaptionOff__Fv
// Address: 0x264760 - 0x2647a8
void GetConfigCaptionOff__Fv_0x264760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetConfigCaptionOff__Fv_0x264760");
#endif

    switch (ctx->pc) {
        case 0x264774u: goto label_264774;
        default: break;
    }

    ctx->pc = 0x264760u;

    // 0x264760: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x264760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x264764: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x264764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x264768: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x264768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26476c: 0xc064220  jal         func_190880
    ctx->pc = 0x26476Cu;
    SET_GPR_U32(ctx, 31, 0x264774u);
    ctx->pc = 0x264770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26476Cu;
            // 0x264770: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264774u; }
        if (ctx->pc != 0x264774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264774u; }
        if (ctx->pc != 0x264774u) { return; }
    }
    ctx->pc = 0x264774u;
label_264774:
    // 0x264774: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x264774u;
    {
        const bool branch_taken_0x264774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x264778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264774u;
            // 0x264778: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264774) {
            ctx->pc = 0x264794u;
            goto label_264794;
        }
    }
    ctx->pc = 0x26477Cu;
    // 0x26477c: 0x3421c574  ori         $at, $at, 0xC574
    ctx->pc = 0x26477cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50548);
    // 0x264780: 0x411021  addu        $v0, $v0, $at
    ctx->pc = 0x264780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x264784: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x264784u;
    {
        const bool branch_taken_0x264784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x264784) {
            ctx->pc = 0x264794u;
            goto label_264794;
        }
    }
    ctx->pc = 0x26478Cu;
    // 0x26478c: 0x80500034  lb          $s0, 0x34($v0)
    ctx->pc = 0x26478cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x264790: 0x0  nop
    ctx->pc = 0x264790u;
    // NOP
label_264794:
    // 0x264794: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x264794u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264798: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x264798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26479c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26479cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2647a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2647A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2647A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2647A0u;
            // 0x2647a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2647A8u;
}
