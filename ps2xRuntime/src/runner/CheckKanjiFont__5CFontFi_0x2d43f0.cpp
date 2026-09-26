#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckKanjiFont__5CFontFi
// Address: 0x2d43f0 - 0x2d443c
void CheckKanjiFont__5CFontFi_0x2d43f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckKanjiFont__5CFontFi_0x2d43f0");
#endif

    switch (ctx->pc) {
        case 0x2d4404u: goto label_2d4404;
        case 0x2d4420u: goto label_2d4420;
        default: break;
    }

    ctx->pc = 0x2d43f0u;

    // 0x2d43f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d43f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d43f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d43f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d43f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d43f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d43fc: 0xc0b50f4  jal         func_2D43D0
    ctx->pc = 0x2D43FCu;
    SET_GPR_U32(ctx, 31, 0x2D4404u);
    ctx->pc = 0x2D4400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D43FCu;
            // 0x2d4400: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D43D0u;
    if (runtime->hasFunction(0x2D43D0u)) {
        auto targetFn = runtime->lookupFunction(0x2D43D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4404u; }
        if (ctx->pc != 0x2D4404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetKanjiTopNo__Fv_0x2d43d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4404u; }
        if (ctx->pc != 0x2D4404u) { return; }
    }
    ctx->pc = 0x2D4404u;
label_2d4404:
    // 0x2d4404: 0x202082a  slt         $at, $s0, $v0
    ctx->pc = 0x2d4404u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d4408: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D4408u;
    {
        const bool branch_taken_0x2d4408 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D440Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4408u;
            // 0x2d440c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4408) {
            ctx->pc = 0x2D4418u;
            goto label_2d4418;
        }
    }
    ctx->pc = 0x2D4410u;
    // 0x2d4410: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D4410u;
    {
        const bool branch_taken_0x2d4410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4410u;
            // 0x2d4414: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4410) {
            ctx->pc = 0x2D4430u;
            goto label_2d4430;
        }
    }
    ctx->pc = 0x2D4418u;
label_2d4418:
    // 0x2d4418: 0xc0b50f0  jal         func_2D43C0
    ctx->pc = 0x2D4418u;
    SET_GPR_U32(ctx, 31, 0x2D4420u);
    ctx->pc = 0x2D43C0u;
    if (runtime->hasFunction(0x2D43C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D43C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4420u; }
        if (ctx->pc != 0x2D4420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetYoyakuTblNum__Fv_0x2d43c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4420u; }
        if (ctx->pc != 0x2D4420u) { return; }
    }
    ctx->pc = 0x2D4420u;
label_2d4420:
    // 0x2d4420: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2d4420u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d4424: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2d4424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2d4428: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2d4428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2d442c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d442cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d4430:
    // 0x2d4430: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d4430u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d4434: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4434u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4434u;
            // 0x2d4438: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D443Cu;
}
