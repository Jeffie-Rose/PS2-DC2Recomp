#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: irnd__Fv
// Address: 0x320560 - 0x3205b0
void irnd__Fv_0x320560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("irnd__Fv_0x320560");
#endif

    switch (ctx->pc) {
        case 0x320584u: goto label_320584;
        default: break;
    }

    ctx->pc = 0x320560u;

    // 0x320560: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x320560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x320564: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x320564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x320568: 0x8f82a3ec  lw          $v0, -0x5C14($gp)
    ctx->pc = 0x320568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943724)));
    // 0x32056c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32056cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x320570: 0x28410038  slti        $at, $v0, 0x38
    ctx->pc = 0x320570u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)56) ? 1 : 0);
    // 0x320574: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x320574u;
    {
        const bool branch_taken_0x320574 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x320578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320574u;
            // 0x320578: 0xaf82a3ec  sw          $v0, -0x5C14($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943724), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320574) {
            ctx->pc = 0x32058Cu;
            goto label_32058c;
        }
    }
    ctx->pc = 0x32057Cu;
    // 0x32057c: 0xc0c80f8  jal         func_3203E0
    ctx->pc = 0x32057Cu;
    SET_GPR_U32(ctx, 31, 0x320584u);
    ctx->pc = 0x3203E0u;
    if (runtime->hasFunction(0x3203E0u)) {
        auto targetFn = runtime->lookupFunction(0x3203E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320584u; }
        if (ctx->pc != 0x320584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        irn55__Fv_0x3203e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320584u; }
        if (ctx->pc != 0x320584u) { return; }
    }
    ctx->pc = 0x320584u;
label_320584:
    // 0x320584: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x320584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x320588: 0xaf82a3ec  sw          $v0, -0x5C14($gp)
    ctx->pc = 0x320588u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943724), GPR_U32(ctx, 2));
label_32058c:
    // 0x32058c: 0x8f83a3ec  lw          $v1, -0x5C14($gp)
    ctx->pc = 0x32058cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943724)));
    // 0x320590: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x320590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x320594: 0x244249c0  addiu       $v0, $v0, 0x49C0
    ctx->pc = 0x320594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18880));
    // 0x320598: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x320598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32059c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32059cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3205a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3205a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3205a4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3205a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3205a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3205A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3205ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3205A8u;
            // 0x3205ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3205B0u;
}
