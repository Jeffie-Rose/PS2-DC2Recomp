#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SePlay__12CSceneObjSeqFii
// Address: 0x25d430 - 0x25d474
void SePlay__12CSceneObjSeqFii_0x25d430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SePlay__12CSceneObjSeqFii_0x25d430");
#endif

    switch (ctx->pc) {
        case 0x25d44cu: goto label_25d44c;
        default: break;
    }

    ctx->pc = 0x25d430u;

    // 0x25d430: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25d430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25d434: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25d434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25d438: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25d438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25d43c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25d43cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25d440: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x25d440u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d444: 0xc097190  jal         func_25C640
    ctx->pc = 0x25D444u;
    SET_GPR_U32(ctx, 31, 0x25D44Cu);
    ctx->pc = 0x25D448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25D444u;
            // 0x25d448: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25C640u;
    if (runtime->hasFunction(0x25C640u)) {
        auto targetFn = runtime->lookupFunction(0x25C640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D44Cu; }
        if (ctx->pc != 0x25D44Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNextSeSeq__12CSceneObjSeqFv_0x25c640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D44Cu; }
        if (ctx->pc != 0x25D44Cu) { return; }
    }
    ctx->pc = 0x25D44Cu;
label_25d44c:
    // 0x25d44c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25D44Cu;
    {
        const bool branch_taken_0x25d44c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D44Cu;
            // 0x25d450: 0x24030025  addiu       $v1, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d44c) {
            ctx->pc = 0x25D460u;
            goto label_25d460;
        }
    }
    ctx->pc = 0x25D454u;
    // 0x25d454: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x25d454u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x25d458: 0xac510020  sw          $s1, 0x20($v0)
    ctx->pc = 0x25d458u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 17));
    // 0x25d45c: 0xac500024  sw          $s0, 0x24($v0)
    ctx->pc = 0x25d45cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 16));
label_25d460:
    // 0x25d460: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25d460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25d464: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25d464u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d468: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25d468u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d46c: 0x3e00008  jr          $ra
    ctx->pc = 0x25D46Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D46Cu;
            // 0x25d470: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25D474u;
}
