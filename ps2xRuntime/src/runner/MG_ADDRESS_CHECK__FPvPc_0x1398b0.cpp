#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MG_ADDRESS_CHECK__FPvPc
// Address: 0x1398b0 - 0x1398e0
void MG_ADDRESS_CHECK__FPvPc_0x1398b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MG_ADDRESS_CHECK__FPvPc_0x1398b0");
#endif

    switch (ctx->pc) {
        case 0x1398c8u: goto label_1398c8;
        default: break;
    }

    ctx->pc = 0x1398b0u;

    // 0x1398b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1398b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1398b4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1398B4u;
    {
        const bool branch_taken_0x1398b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1398B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1398B4u;
            // 0x1398b8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1398b4) {
            ctx->pc = 0x1398D0u;
            goto label_1398d0;
        }
    }
    ctx->pc = 0x1398BCu;
    // 0x1398bc: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1398bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1398c0: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x1398C0u;
    SET_GPR_U32(ctx, 31, 0x1398C8u);
    ctx->pc = 0x1398C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1398C0u;
            // 0x1398c4: 0x24842570  addiu       $a0, $a0, 0x2570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1398C8u; }
        if (ctx->pc != 0x1398C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1398C8u; }
        if (ctx->pc != 0x1398C8u) { return; }
    }
    ctx->pc = 0x1398C8u;
label_1398c8:
    // 0x1398c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1398C8u;
    {
        const bool branch_taken_0x1398c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1398CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1398C8u;
            // 0x1398cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1398c8) {
            ctx->pc = 0x1398D4u;
            goto label_1398d4;
        }
    }
    ctx->pc = 0x1398D0u;
label_1398d0:
    // 0x1398d0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1398d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1398d4:
    // 0x1398d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1398d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1398d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1398D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1398DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1398D8u;
            // 0x1398dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1398E0u;
}
