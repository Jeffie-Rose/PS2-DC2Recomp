#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StartPas__12CSceneObjSeqFi
// Address: 0x25cb30 - 0x25cb64
void StartPas__12CSceneObjSeqFi_0x25cb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StartPas__12CSceneObjSeqFi_0x25cb30");
#endif

    switch (ctx->pc) {
        case 0x25cb44u: goto label_25cb44;
        default: break;
    }

    ctx->pc = 0x25cb30u;

    // 0x25cb30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25cb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25cb34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25cb34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25cb38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25cb38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25cb3c: 0xc097100  jal         func_25C400
    ctx->pc = 0x25CB3Cu;
    SET_GPR_U32(ctx, 31, 0x25CB44u);
    ctx->pc = 0x25CB40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25CB3Cu;
            // 0x25cb40: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25C400u;
    if (runtime->hasFunction(0x25C400u)) {
        auto targetFn = runtime->lookupFunction(0x25C400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CB44u; }
        if (ctx->pc != 0x25CB44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNextPosSeq__12CSceneObjSeqFv_0x25c400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CB44u; }
        if (ctx->pc != 0x25CB44u) { return; }
    }
    ctx->pc = 0x25CB44u;
label_25cb44:
    // 0x25cb44: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25CB44u;
    {
        const bool branch_taken_0x25cb44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CB48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25CB44u;
            // 0x25cb48: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cb44) {
            ctx->pc = 0x25CB54u;
            goto label_25cb54;
        }
    }
    ctx->pc = 0x25CB4Cu;
    // 0x25cb4c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x25cb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x25cb50: 0xac500020  sw          $s0, 0x20($v0)
    ctx->pc = 0x25cb50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 16));
label_25cb54:
    // 0x25cb54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25cb54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25cb58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25cb58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25cb5c: 0x3e00008  jr          $ra
    ctx->pc = 0x25CB5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25CB60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25CB5Cu;
            // 0x25cb60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25CB64u;
}
