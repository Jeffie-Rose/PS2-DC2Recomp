#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ProgChg__9sndCSeSeqFii
// Address: 0x18bf70 - 0x18bfc8
void ProgChg__9sndCSeSeqFii_0x18bf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ProgChg__9sndCSeSeqFii_0x18bf70");
#endif

    switch (ctx->pc) {
        case 0x18bf94u: goto label_18bf94;
        case 0x18bfb0u: goto label_18bfb0;
        default: break;
    }

    ctx->pc = 0x18bf70u;

    // 0x18bf70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18bf70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18bf74: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18bf74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x18bf78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18bf78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18bf7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18bf7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18bf80: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18bf80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bf84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18bf84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18bf88: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x18bf88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bf8c: 0xc062efc  jal         func_18BBF0
    ctx->pc = 0x18BF8Cu;
    SET_GPR_U32(ctx, 31, 0x18BF94u);
    ctx->pc = 0x18BF90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BF8Cu;
            // 0x18bf90: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18BBF0u;
    if (runtime->hasFunction(0x18BBF0u)) {
        auto targetFn = runtime->lookupFunction(0x18BBF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BF94u; }
        if (ctx->pc != 0x18BF94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        chk_trk__9sndCSeSeqFi_0x18bbf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BF94u; }
        if (ctx->pc != 0x18BF94u) { return; }
    }
    ctx->pc = 0x18BF94u;
label_18bf94:
    // 0x18bf94: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18BF94u;
    {
        const bool branch_taken_0x18bf94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bf94) {
            ctx->pc = 0x18BFB0u;
            goto label_18bfb0;
        }
    }
    ctx->pc = 0x18BF9Cu;
    // 0x18bf9c: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x18bf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x18bfa0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18bfa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bfa4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x18bfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x18bfa8: 0xc063114  jal         func_18C450
    ctx->pc = 0x18BFA8u;
    SET_GPR_U32(ctx, 31, 0x18BFB0u);
    ctx->pc = 0x18BFACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BFA8u;
            // 0x18bfac: 0x24440030  addiu       $a0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18C450u;
    if (runtime->hasFunction(0x18C450u)) {
        auto targetFn = runtime->lookupFunction(0x18C450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BFB0u; }
        if (ctx->pc != 0x18BFB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProgChg__8sndTrackFi_0x18c450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BFB0u; }
        if (ctx->pc != 0x18BFB0u) { return; }
    }
    ctx->pc = 0x18BFB0u;
label_18bfb0:
    // 0x18bfb0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18bfb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18bfb4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18bfb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18bfb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18bfb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18bfbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18bfbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18bfc0: 0x3e00008  jr          $ra
    ctx->pc = 0x18BFC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18BFC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BFC0u;
            // 0x18bfc4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18BFC8u;
}
