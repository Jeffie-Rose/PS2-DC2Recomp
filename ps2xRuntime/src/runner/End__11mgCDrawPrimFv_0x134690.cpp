#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: End__11mgCDrawPrimFv
// Address: 0x134690 - 0x1346c8
void End__11mgCDrawPrimFv_0x134690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("End__11mgCDrawPrimFv_0x134690");
#endif

    switch (ctx->pc) {
        case 0x1346b0u: goto label_1346b0;
        case 0x1346b8u: goto label_1346b8;
        default: break;
    }

    ctx->pc = 0x134690u;

    // 0x134690: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x134690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x134694: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x134694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x134698: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x134698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13469c: 0x8c8300d0  lw          $v1, 0xD0($a0)
    ctx->pc = 0x13469cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
    // 0x1346a0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1346A0u;
    {
        const bool branch_taken_0x1346a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1346A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1346A0u;
            // 0x1346a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1346a0) {
            ctx->pc = 0x1346B8u;
            goto label_1346b8;
        }
    }
    ctx->pc = 0x1346A8u;
    // 0x1346a8: 0xc04d170  jal         func_1345C0
    ctx->pc = 0x1346A8u;
    SET_GPR_U32(ctx, 31, 0x1346B0u);
    ctx->pc = 0x1345C0u;
    if (runtime->hasFunction(0x1345C0u)) {
        auto targetFn = runtime->lookupFunction(0x1345C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1346B0u; }
        if (ctx->pc != 0x1346B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndDma__11mgCDrawPrimFv_0x1345c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1346B0u; }
        if (ctx->pc != 0x1346B0u) { return; }
    }
    ctx->pc = 0x1346B0u;
label_1346b0:
    // 0x1346b0: 0xc04d288  jal         func_134A20
    ctx->pc = 0x1346B0u;
    SET_GPR_U32(ctx, 31, 0x1346B8u);
    ctx->pc = 0x1346B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1346B0u;
            // 0x1346b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134A20u;
    if (runtime->hasFunction(0x134A20u)) {
        auto targetFn = runtime->lookupFunction(0x134A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1346B8u; }
        if (ctx->pc != 0x1346B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End2__11mgCDrawPrimFv_0x134a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1346B8u; }
        if (ctx->pc != 0x1346B8u) { return; }
    }
    ctx->pc = 0x1346B8u;
label_1346b8:
    // 0x1346b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1346b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1346bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1346bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1346c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1346C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1346C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1346C0u;
            // 0x1346c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1346C8u;
}
