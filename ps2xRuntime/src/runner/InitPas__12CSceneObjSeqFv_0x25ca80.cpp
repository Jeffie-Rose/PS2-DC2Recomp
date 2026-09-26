#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitPas__12CSceneObjSeqFv
// Address: 0x25ca80 - 0x25caa8
void InitPas__12CSceneObjSeqFv_0x25ca80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitPas__12CSceneObjSeqFv_0x25ca80");
#endif

    switch (ctx->pc) {
        case 0x25ca90u: goto label_25ca90;
        default: break;
    }

    ctx->pc = 0x25ca80u;

    // 0x25ca80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25ca80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25ca84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25ca84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25ca88: 0xc097100  jal         func_25C400
    ctx->pc = 0x25CA88u;
    SET_GPR_U32(ctx, 31, 0x25CA90u);
    ctx->pc = 0x25C400u;
    if (runtime->hasFunction(0x25C400u)) {
        auto targetFn = runtime->lookupFunction(0x25C400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CA90u; }
        if (ctx->pc != 0x25CA90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNextPosSeq__12CSceneObjSeqFv_0x25c400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CA90u; }
        if (ctx->pc != 0x25CA90u) { return; }
    }
    ctx->pc = 0x25CA90u;
label_25ca90:
    // 0x25ca90: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25CA90u;
    {
        const bool branch_taken_0x25ca90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CA94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25CA90u;
            // 0x25ca94: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ca90) {
            ctx->pc = 0x25CA9Cu;
            goto label_25ca9c;
        }
    }
    ctx->pc = 0x25CA98u;
    // 0x25ca98: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x25ca98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_25ca9c:
    // 0x25ca9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25ca9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25caa0: 0x3e00008  jr          $ra
    ctx->pc = 0x25CAA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25CAA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25CAA0u;
            // 0x25caa4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25CAA8u;
}
