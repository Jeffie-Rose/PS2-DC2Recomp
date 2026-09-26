#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ScaleDelay__12CSceneObjSeqFi
// Address: 0x25d350 - 0x25d384
void ScaleDelay__12CSceneObjSeqFi_0x25d350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ScaleDelay__12CSceneObjSeqFi_0x25d350");
#endif

    switch (ctx->pc) {
        case 0x25d364u: goto label_25d364;
        default: break;
    }

    ctx->pc = 0x25d350u;

    // 0x25d350: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25d350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25d354: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25d354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25d358: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25d358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25d35c: 0xc097178  jal         func_25C5E0
    ctx->pc = 0x25D35Cu;
    SET_GPR_U32(ctx, 31, 0x25D364u);
    ctx->pc = 0x25D360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25D35Cu;
            // 0x25d360: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25C5E0u;
    if (runtime->hasFunction(0x25C5E0u)) {
        auto targetFn = runtime->lookupFunction(0x25C5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D364u; }
        if (ctx->pc != 0x25D364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNextScaleSeq__12CSceneObjSeqFv_0x25c5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D364u; }
        if (ctx->pc != 0x25D364u) { return; }
    }
    ctx->pc = 0x25D364u;
label_25d364:
    // 0x25d364: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25D364u;
    {
        const bool branch_taken_0x25d364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D364u;
            // 0x25d368: 0x24030022  addiu       $v1, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d364) {
            ctx->pc = 0x25D374u;
            goto label_25d374;
        }
    }
    ctx->pc = 0x25D36Cu;
    // 0x25d36c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x25d36cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x25d370: 0xac500020  sw          $s0, 0x20($v0)
    ctx->pc = 0x25d370u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 16));
label_25d374:
    // 0x25d374: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25d374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d378: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25d378u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d37c: 0x3e00008  jr          $ra
    ctx->pc = 0x25D37Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D37Cu;
            // 0x25d380: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25D384u;
}
