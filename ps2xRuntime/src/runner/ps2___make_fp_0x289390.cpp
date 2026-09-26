#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __make_fp
// Address: 0x289390 - 0x2893bc
void ps2___make_fp_0x289390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___make_fp_0x289390");
#endif

    switch (ctx->pc) {
        case 0x2893b0u: goto label_2893b0;
        default: break;
    }

    ctx->pc = 0x289390u;

    // 0x289390: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x289390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x289394: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x289394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x289398: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x289398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28939c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x28939cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2893a0: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x2893a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x2893a4: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x2893a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x2893a8: 0xc0a2208  jal         func_288820
    ctx->pc = 0x2893A8u;
    SET_GPR_U32(ctx, 31, 0x2893B0u);
    ctx->pc = 0x2893ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2893A8u;
            // 0x2893ac: 0xafa7000c  sw          $a3, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288820u;
    if (runtime->hasFunction(0x288820u)) {
        auto targetFn = runtime->lookupFunction(0x288820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2893B0u; }
        if (ctx->pc != 0x2893B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___pack_f_0x288820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2893B0u; }
        if (ctx->pc != 0x2893B0u) { return; }
    }
    ctx->pc = 0x2893B0u;
label_2893b0:
    // 0x2893b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2893b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2893b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2893B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2893B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2893B4u;
            // 0x2893b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2893BCu;
}
