#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetRot__12CSceneObjSeqFPf
// Address: 0x25cd60 - 0x25cd9c
void SetRot__12CSceneObjSeqFPf_0x25cd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetRot__12CSceneObjSeqFPf_0x25cd60");
#endif

    switch (ctx->pc) {
        case 0x25cd74u: goto label_25cd74;
        case 0x25cd8cu: goto label_25cd8c;
        default: break;
    }

    ctx->pc = 0x25cd60u;

    // 0x25cd60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25cd60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25cd64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25cd64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25cd68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25cd68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25cd6c: 0xc097118  jal         func_25C460
    ctx->pc = 0x25CD6Cu;
    SET_GPR_U32(ctx, 31, 0x25CD74u);
    ctx->pc = 0x25CD70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25CD6Cu;
            // 0x25cd70: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25C460u;
    if (runtime->hasFunction(0x25C460u)) {
        auto targetFn = runtime->lookupFunction(0x25C460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CD74u; }
        if (ctx->pc != 0x25CD74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNextRotSeq__12CSceneObjSeqFv_0x25c460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CD74u; }
        if (ctx->pc != 0x25CD74u) { return; }
    }
    ctx->pc = 0x25CD74u;
label_25cd74:
    // 0x25cd74: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25CD74u;
    {
        const bool branch_taken_0x25cd74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CD78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25CD74u;
            // 0x25cd78: 0x2403000e  addiu       $v1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cd74) {
            ctx->pc = 0x25CD8Cu;
            goto label_25cd8c;
        }
    }
    ctx->pc = 0x25CD7Cu;
    // 0x25cd7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25cd7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cd80: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x25cd80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x25cd84: 0xc041c5c  jal         func_107170
    ctx->pc = 0x25CD84u;
    SET_GPR_U32(ctx, 31, 0x25CD8Cu);
    ctx->pc = 0x25CD88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25CD84u;
            // 0x25cd88: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CD8Cu; }
        if (ctx->pc != 0x25CD8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CD8Cu; }
        if (ctx->pc != 0x25CD8Cu) { return; }
    }
    ctx->pc = 0x25CD8Cu;
label_25cd8c:
    // 0x25cd8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25cd8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25cd90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25cd90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25cd94: 0x3e00008  jr          $ra
    ctx->pc = 0x25CD94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25CD98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25CD94u;
            // 0x25cd98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25CD9Cu;
}
