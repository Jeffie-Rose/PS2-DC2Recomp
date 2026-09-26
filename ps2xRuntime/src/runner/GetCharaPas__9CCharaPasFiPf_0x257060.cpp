#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetCharaPas__9CCharaPasFiPf
// Address: 0x257060 - 0x257098
void GetCharaPas__9CCharaPasFiPf_0x257060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetCharaPas__9CCharaPasFiPf_0x257060");
#endif

    switch (ctx->pc) {
        case 0x257088u: goto label_257088;
        default: break;
    }

    ctx->pc = 0x257060u;

    // 0x257060: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x257060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x257064: 0x28a20010  slti        $v0, $a1, 0x10
    ctx->pc = 0x257064u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x257068: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x257068u;
    {
        const bool branch_taken_0x257068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25706Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257068u;
            // 0x25706c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257068) {
            ctx->pc = 0x257078u;
            goto label_257078;
        }
    }
    ctx->pc = 0x257070u;
    // 0x257070: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x257070u;
    {
        const bool branch_taken_0x257070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257070u;
            // 0x257074: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257070) {
            ctx->pc = 0x25708Cu;
            goto label_25708c;
        }
    }
    ctx->pc = 0x257078u;
label_257078:
    // 0x257078: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x257078u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x25707c: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x25707cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x257080: 0xc041c5c  jal         func_107170
    ctx->pc = 0x257080u;
    SET_GPR_U32(ctx, 31, 0x257088u);
    ctx->pc = 0x257084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x257080u;
            // 0x257084: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257088u; }
        if (ctx->pc != 0x257088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257088u; }
        if (ctx->pc != 0x257088u) { return; }
    }
    ctx->pc = 0x257088u;
label_257088:
    // 0x257088: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x257088u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25708c:
    // 0x25708c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25708cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257090: 0x3e00008  jr          $ra
    ctx->pc = 0x257090u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257090u;
            // 0x257094: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x257098u;
}
