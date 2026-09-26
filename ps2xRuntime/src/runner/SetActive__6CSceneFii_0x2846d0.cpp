#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetActive__6CSceneFii
// Address: 0x2846d0 - 0x284700
void SetActive__6CSceneFii_0x2846d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetActive__6CSceneFii_0x2846d0");
#endif

    switch (ctx->pc) {
        case 0x2846e0u: goto label_2846e0;
        default: break;
    }

    ctx->pc = 0x2846d0u;

    // 0x2846d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2846d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2846d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2846d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2846d8: 0xc0a0da8  jal         func_2836A0
    ctx->pc = 0x2846D8u;
    SET_GPR_U32(ctx, 31, 0x2846E0u);
    ctx->pc = 0x2836A0u;
    if (runtime->hasFunction(0x2836A0u)) {
        auto targetFn = runtime->lookupFunction(0x2836A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2846E0u; }
        if (ctx->pc != 0x2846E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetData__6CSceneFii_0x2836a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2846E0u; }
        if (ctx->pc != 0x2846E0u) { return; }
    }
    ctx->pc = 0x2846E0u;
label_2846e0:
    // 0x2846e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2846E0u;
    {
        const bool branch_taken_0x2846e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2846e0) {
            ctx->pc = 0x2846F4u;
            goto label_2846f4;
        }
    }
    ctx->pc = 0x2846E8u;
    // 0x2846e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2846e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2846ec: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x2846ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x2846f0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2846f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2846f4:
    // 0x2846f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2846f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2846f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2846F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2846FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2846F8u;
            // 0x2846fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x284700u;
}
