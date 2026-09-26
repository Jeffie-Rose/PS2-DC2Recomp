#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: RotDelay__12CSceneObjSeqFi
// Address: 0x25cd20 - 0x25cd54
void RotDelay__12CSceneObjSeqFi_0x25cd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RotDelay__12CSceneObjSeqFi_0x25cd20");
#endif

    switch (ctx->pc) {
        case 0x25cd34u: goto label_25cd34;
        default: break;
    }

    ctx->pc = 0x25cd20u;

    // 0x25cd20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25cd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25cd24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25cd24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25cd28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25cd28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25cd2c: 0xc097118  jal         func_25C460
    ctx->pc = 0x25CD2Cu;
    SET_GPR_U32(ctx, 31, 0x25CD34u);
    ctx->pc = 0x25CD30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25CD2Cu;
            // 0x25cd30: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25C460u;
    if (runtime->hasFunction(0x25C460u)) {
        auto targetFn = runtime->lookupFunction(0x25C460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CD34u; }
        if (ctx->pc != 0x25CD34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNextRotSeq__12CSceneObjSeqFv_0x25c460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CD34u; }
        if (ctx->pc != 0x25CD34u) { return; }
    }
    ctx->pc = 0x25CD34u;
label_25cd34:
    // 0x25cd34: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25CD34u;
    {
        const bool branch_taken_0x25cd34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CD38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25CD34u;
            // 0x25cd38: 0x2403000d  addiu       $v1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cd34) {
            ctx->pc = 0x25CD44u;
            goto label_25cd44;
        }
    }
    ctx->pc = 0x25CD3Cu;
    // 0x25cd3c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x25cd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x25cd40: 0xac500020  sw          $s0, 0x20($v0)
    ctx->pc = 0x25cd40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 16));
label_25cd44:
    // 0x25cd44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25cd44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25cd48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25cd48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25cd4c: 0x3e00008  jr          $ra
    ctx->pc = 0x25CD4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25CD50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25CD4Cu;
            // 0x25cd50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25CD54u;
}
