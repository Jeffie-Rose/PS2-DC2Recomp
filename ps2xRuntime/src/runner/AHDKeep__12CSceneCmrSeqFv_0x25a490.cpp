#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AHDKeep__12CSceneCmrSeqFv
// Address: 0x25a490 - 0x25a4b8
void AHDKeep__12CSceneCmrSeqFv_0x25a490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AHDKeep__12CSceneCmrSeqFv_0x25a490");
#endif

    switch (ctx->pc) {
        case 0x25a4a0u: goto label_25a4a0;
        default: break;
    }

    ctx->pc = 0x25a490u;

    // 0x25a490: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25a490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25a494: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25a494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25a498: 0xc096698  jal         func_259A60
    ctx->pc = 0x25A498u;
    SET_GPR_U32(ctx, 31, 0x25A4A0u);
    ctx->pc = 0x259A60u;
    if (runtime->hasFunction(0x259A60u)) {
        auto targetFn = runtime->lookupFunction(0x259A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A4A0u; }
        if (ctx->pc != 0x25A4A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNextAhdSeq__12CSceneCmrSeqFv_0x259a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A4A0u; }
        if (ctx->pc != 0x25A4A0u) { return; }
    }
    ctx->pc = 0x25A4A0u;
label_25a4a0:
    // 0x25a4a0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25A4A0u;
    {
        const bool branch_taken_0x25a4a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A4A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A4A0u;
            // 0x25a4a4: 0x24030019  addiu       $v1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a4a0) {
            ctx->pc = 0x25A4ACu;
            goto label_25a4ac;
        }
    }
    ctx->pc = 0x25A4A8u;
    // 0x25a4a8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x25a4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_25a4ac:
    // 0x25a4ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25a4acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a4b0: 0x3e00008  jr          $ra
    ctx->pc = 0x25A4B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A4B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A4B0u;
            // 0x25a4b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25A4B8u;
}
