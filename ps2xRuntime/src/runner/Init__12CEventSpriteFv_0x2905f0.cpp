#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Init__12CEventSpriteFv
// Address: 0x2905f0 - 0x290668
void Init__12CEventSpriteFv_0x2905f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__12CEventSpriteFv_0x2905f0");
#endif

    switch (ctx->pc) {
        case 0x290618u: goto label_290618;
        case 0x290628u: goto label_290628;
        case 0x290638u: goto label_290638;
        case 0x290648u: goto label_290648;
        case 0x290658u: goto label_290658;
        default: break;
    }

    ctx->pc = 0x2905f0u;

    // 0x2905f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2905f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2905f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2905f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2905f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2905f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2905fc: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x2905fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x290600: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x290600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x290604: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x290604u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x290608: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x290608u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29060c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x29060cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x290610: 0xc049c86  jal         func_127218
    ctx->pc = 0x290610u;
    SET_GPR_U32(ctx, 31, 0x290618u);
    ctx->pc = 0x290614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290610u;
            // 0x290614: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290618u; }
        if (ctx->pc != 0x290618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290618u; }
        if (ctx->pc != 0x290618u) { return; }
    }
    ctx->pc = 0x290618u;
label_290618:
    // 0x290618: 0x26040048  addiu       $a0, $s0, 0x48
    ctx->pc = 0x290618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    // 0x29061c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29061cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290620: 0xc049c86  jal         func_127218
    ctx->pc = 0x290620u;
    SET_GPR_U32(ctx, 31, 0x290628u);
    ctx->pc = 0x290624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290620u;
            // 0x290624: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290628u; }
        if (ctx->pc != 0x290628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290628u; }
        if (ctx->pc != 0x290628u) { return; }
    }
    ctx->pc = 0x290628u;
label_290628:
    // 0x290628: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x290628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x29062c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29062cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290630: 0xc049c86  jal         func_127218
    ctx->pc = 0x290630u;
    SET_GPR_U32(ctx, 31, 0x290638u);
    ctx->pc = 0x290634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290630u;
            // 0x290634: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290638u; }
        if (ctx->pc != 0x290638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290638u; }
        if (ctx->pc != 0x290638u) { return; }
    }
    ctx->pc = 0x290638u;
label_290638:
    // 0x290638: 0x26040068  addiu       $a0, $s0, 0x68
    ctx->pc = 0x290638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    // 0x29063c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29063cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290640: 0xc049c86  jal         func_127218
    ctx->pc = 0x290640u;
    SET_GPR_U32(ctx, 31, 0x290648u);
    ctx->pc = 0x290644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290640u;
            // 0x290644: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290648u; }
        if (ctx->pc != 0x290648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290648u; }
        if (ctx->pc != 0x290648u) { return; }
    }
    ctx->pc = 0x290648u;
label_290648:
    // 0x290648: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x290648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x29064c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x29064cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x290650: 0xc049c86  jal         func_127218
    ctx->pc = 0x290650u;
    SET_GPR_U32(ctx, 31, 0x290658u);
    ctx->pc = 0x290654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290650u;
            // 0x290654: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290658u; }
        if (ctx->pc != 0x290658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290658u; }
        if (ctx->pc != 0x290658u) { return; }
    }
    ctx->pc = 0x290658u;
label_290658:
    // 0x290658: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x290658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29065c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29065cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290660: 0x3e00008  jr          $ra
    ctx->pc = 0x290660u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290660u;
            // 0x290664: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x290668u;
}
