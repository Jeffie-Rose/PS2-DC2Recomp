#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_PADDOWN__FP12RS_STACKDATAi
// Address: 0x2ce600 - 0x2ce648
void ps2__GET_PADDOWN__FP12RS_STACKDATAi_0x2ce600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_PADDOWN__FP12RS_STACKDATAi_0x2ce600");
#endif

    switch (ctx->pc) {
        case 0x2ce628u: goto label_2ce628;
        case 0x2ce634u: goto label_2ce634;
        default: break;
    }

    ctx->pc = 0x2ce600u;

    // 0x2ce600: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ce600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ce604: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ce604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ce608: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ce608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ce60c: 0x1ca00003  bgtz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CE60Cu;
    {
        const bool branch_taken_0x2ce60c = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x2CE610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE60Cu;
            // 0x2ce610: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce60c) {
            ctx->pc = 0x2CE61Cu;
            goto label_2ce61c;
        }
    }
    ctx->pc = 0x2CE614u;
    // 0x2ce614: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2CE614u;
    {
        const bool branch_taken_0x2ce614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE614u;
            // 0x2ce618: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce614) {
            ctx->pc = 0x2CE638u;
            goto label_2ce638;
        }
    }
    ctx->pc = 0x2CE61Cu;
label_2ce61c:
    // 0x2ce61c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2ce61cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x2ce620: 0xc052c88  jal         func_14B220
    ctx->pc = 0x2CE620u;
    SET_GPR_U32(ctx, 31, 0x2CE628u);
    ctx->pc = 0x2CE624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE620u;
            // 0x2ce624: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B220u;
    if (runtime->hasFunction(0x14B220u)) {
        auto targetFn = runtime->lookupFunction(0x14B220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE628u; }
        if (ctx->pc != 0x2CE628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPadDown__8CGamePadFv_0x14b220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE628u; }
        if (ctx->pc != 0x2CE628u) { return; }
    }
    ctx->pc = 0x2CE628u;
label_2ce628:
    // 0x2ce628: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ce628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce62c: 0xc0b37ac  jal         func_2CDEB0
    ctx->pc = 0x2CE62Cu;
    SET_GPR_U32(ctx, 31, 0x2CE634u);
    ctx->pc = 0x2CE630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE62Cu;
            // 0x2ce630: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDEB0u;
    if (runtime->hasFunction(0x2CDEB0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE634u; }
        if (ctx->pc != 0x2CE634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x2cdeb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE634u; }
        if (ctx->pc != 0x2CE634u) { return; }
    }
    ctx->pc = 0x2CE634u;
label_2ce634:
    // 0x2ce634: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ce634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ce638:
    // 0x2ce638: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ce638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ce63c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ce63cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ce640: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE640u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE640u;
            // 0x2ce644: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CE648u;
}
