#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ResetDAPosition__12CSceneObjSeqFv
// Address: 0x25d480 - 0x25d4c8
void ResetDAPosition__12CSceneObjSeqFv_0x25d480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetDAPosition__12CSceneObjSeqFv_0x25d480");
#endif

    switch (ctx->pc) {
        case 0x25d494u: goto label_25d494;
        case 0x25d4acu: goto label_25d4ac;
        default: break;
    }

    ctx->pc = 0x25d480u;

    // 0x25d480: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25d480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25d484: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25d484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25d488: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25d488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25d48c: 0xc097190  jal         func_25C640
    ctx->pc = 0x25D48Cu;
    SET_GPR_U32(ctx, 31, 0x25D494u);
    ctx->pc = 0x25D490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25D48Cu;
            // 0x25d490: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25C640u;
    if (runtime->hasFunction(0x25C640u)) {
        auto targetFn = runtime->lookupFunction(0x25C640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D494u; }
        if (ctx->pc != 0x25D494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNextSeSeq__12CSceneObjSeqFv_0x25c640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D494u; }
        if (ctx->pc != 0x25D494u) { return; }
    }
    ctx->pc = 0x25D494u;
label_25d494:
    // 0x25d494: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25D494u;
    {
        const bool branch_taken_0x25d494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D494u;
            // 0x25d498: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d494) {
            ctx->pc = 0x25D4A4u;
            goto label_25d4a4;
        }
    }
    ctx->pc = 0x25D49Cu;
    // 0x25d49c: 0x24030026  addiu       $v1, $zero, 0x26
    ctx->pc = 0x25d49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x25d4a0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x25d4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_25d4a4:
    // 0x25d4a4: 0xc097130  jal         func_25C4C0
    ctx->pc = 0x25D4A4u;
    SET_GPR_U32(ctx, 31, 0x25D4ACu);
    ctx->pc = 0x25C4C0u;
    if (runtime->hasFunction(0x25C4C0u)) {
        auto targetFn = runtime->lookupFunction(0x25C4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D4ACu; }
        if (ctx->pc != 0x25D4ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNextMotSeq__12CSceneObjSeqFv_0x25c4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D4ACu; }
        if (ctx->pc != 0x25D4ACu) { return; }
    }
    ctx->pc = 0x25D4ACu;
label_25d4ac:
    // 0x25d4ac: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25D4ACu;
    {
        const bool branch_taken_0x25d4ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D4B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D4ACu;
            // 0x25d4b0: 0x24030026  addiu       $v1, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d4ac) {
            ctx->pc = 0x25D4B8u;
            goto label_25d4b8;
        }
    }
    ctx->pc = 0x25D4B4u;
    // 0x25d4b4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x25d4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_25d4b8:
    // 0x25d4b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25d4b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d4bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25d4bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d4c0: 0x3e00008  jr          $ra
    ctx->pc = 0x25D4C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D4C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D4C0u;
            // 0x25d4c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25D4C8u;
}
