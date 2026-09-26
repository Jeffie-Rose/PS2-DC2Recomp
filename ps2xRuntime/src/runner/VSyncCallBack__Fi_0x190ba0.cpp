#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: VSyncCallBack__Fi
// Address: 0x190ba0 - 0x190be0
void VSyncCallBack__Fi_0x190ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("VSyncCallBack__Fi_0x190ba0");
#endif

    switch (ctx->pc) {
        case 0x190bc0u: goto label_190bc0;
        case 0x190bc8u: goto label_190bc8;
        default: break;
    }

    ctx->pc = 0x190ba0u;

    // 0x190ba0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x190ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x190ba4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x190ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x190ba8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x190ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x190bac: 0x8f838afc  lw          $v1, -0x7504($gp)
    ctx->pc = 0x190bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937340)));
    // 0x190bb0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x190BB0u;
    {
        const bool branch_taken_0x190bb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x190bb0) {
            ctx->pc = 0x190BD0u;
            goto label_190bd0;
        }
    }
    ctx->pc = 0x190BB8u;
    // 0x190bb8: 0xc064220  jal         func_190880
    ctx->pc = 0x190BB8u;
    SET_GPR_U32(ctx, 31, 0x190BC0u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190BC0u; }
        if (ctx->pc != 0x190BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190BC0u; }
        if (ctx->pc != 0x190BC0u) { return; }
    }
    ctx->pc = 0x190BC0u;
label_190bc0:
    // 0x190bc0: 0xc064220  jal         func_190880
    ctx->pc = 0x190BC0u;
    SET_GPR_U32(ctx, 31, 0x190BC8u);
    ctx->pc = 0x190BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190BC0u;
            // 0x190bc4: 0xdc501a00  ld          $s0, 0x1A00($v0) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 6656)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190BC8u; }
        if (ctx->pc != 0x190BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190BC8u; }
        if (ctx->pc != 0x190BC8u) { return; }
    }
    ctx->pc = 0x190BC8u;
label_190bc8:
    // 0x190bc8: 0x66030001  daddiu      $v1, $s0, 0x1
    ctx->pc = 0x190bc8u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)1);
    // 0x190bcc: 0xfc431a00  sd          $v1, 0x1A00($v0)
    ctx->pc = 0x190bccu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 6656), GPR_U64(ctx, 3));
label_190bd0:
    // 0x190bd0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x190bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190bd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x190bd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190bd8: 0x3e00008  jr          $ra
    ctx->pc = 0x190BD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190BD8u;
            // 0x190bdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x190BE0u;
}
