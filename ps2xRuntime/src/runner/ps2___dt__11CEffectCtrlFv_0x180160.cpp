#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __dt__11CEffectCtrlFv
// Address: 0x180160 - 0x1801a4
void ps2___dt__11CEffectCtrlFv_0x180160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___dt__11CEffectCtrlFv_0x180160");
#endif

    switch (ctx->pc) {
        case 0x180190u: goto label_180190;
        default: break;
    }

    ctx->pc = 0x180160u;

    // 0x180160: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x180160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x180164: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x180164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x180168: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x180168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18016c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18016cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180170: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x180170u;
    {
        const bool branch_taken_0x180170 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x180174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180170u;
            // 0x180174: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180170) {
            ctx->pc = 0x180194u;
            goto label_180194;
        }
    }
    ctx->pc = 0x180178u;
    // 0x180178: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x180178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x18017c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x18017cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x180180: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x180180u;
    {
        const bool branch_taken_0x180180 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x180180) {
            ctx->pc = 0x180190u;
            goto label_180190;
        }
    }
    ctx->pc = 0x180188u;
    // 0x180188: 0xc040110  jal         func_100440
    ctx->pc = 0x180188u;
    SET_GPR_U32(ctx, 31, 0x180190u);
    ctx->pc = 0x100440u;
    if (runtime->hasFunction(0x100440u)) {
        auto targetFn = runtime->lookupFunction(0x100440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180190u; }
        if (ctx->pc != 0x180190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___dl__FPv_0x100440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180190u; }
        if (ctx->pc != 0x180190u) { return; }
    }
    ctx->pc = 0x180190u;
label_180190:
    // 0x180190: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x180190u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_180194:
    // 0x180194: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x180194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180198: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x180198u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18019c: 0x3e00008  jr          $ra
    ctx->pc = 0x18019Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1801A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18019Cu;
            // 0x1801a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1801A4u;
}
