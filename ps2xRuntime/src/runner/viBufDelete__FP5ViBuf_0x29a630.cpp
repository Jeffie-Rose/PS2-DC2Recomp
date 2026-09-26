#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: viBufDelete__FP5ViBuf
// Address: 0x29a630 - 0x29a67c
void viBufDelete__FP5ViBuf_0x29a630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("viBufDelete__FP5ViBuf_0x29a630");
#endif

    switch (ctx->pc) {
        case 0x29a648u: goto label_29a648;
        case 0x29a668u: goto label_29a668;
        default: break;
    }

    ctx->pc = 0x29a630u;

    // 0x29a630: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29a630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29a634: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29a634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29a638: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29a638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29a63c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29a63cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a640: 0xc0a6718  jal         func_299C60
    ctx->pc = 0x29A640u;
    SET_GPR_U32(ctx, 31, 0x29A648u);
    ctx->pc = 0x29A644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29A640u;
            // 0x29a644: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299C60u;
    if (runtime->hasFunction(0x299C60u)) {
        auto targetFn = runtime->lookupFunction(0x299C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A648u; }
        if (ctx->pc != 0x29A648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setD4_CHCR__FUi_0x299c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A648u; }
        if (ctx->pc != 0x29A648u) { return; }
    }
    ctx->pc = 0x29A648u;
label_29a648:
    // 0x29a648: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x29a648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x29a64c: 0xac20b420  sw          $zero, -0x4BE0($at)
    ctx->pc = 0x29a64cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294947872), GPR_U32(ctx, 0));
    // 0x29a650: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x29a650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x29a654: 0xac20b410  sw          $zero, -0x4BF0($at)
    ctx->pc = 0x29a654u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294947856), GPR_U32(ctx, 0));
    // 0x29a658: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x29a658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x29a65c: 0xac20b430  sw          $zero, -0x4BD0($at)
    ctx->pc = 0x29a65cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294947888), GPR_U32(ctx, 0));
    // 0x29a660: 0xc04403c  jal         func_1100F0
    ctx->pc = 0x29A660u;
    SET_GPR_U32(ctx, 31, 0x29A668u);
    ctx->pc = 0x29A664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29A660u;
            // 0x29a664: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1100F0u;
    if (runtime->hasFunction(0x1100F0u)) {
        auto targetFn = runtime->lookupFunction(0x1100F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A668u; }
        if (ctx->pc != 0x29A668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteSema_0x1100f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A668u; }
        if (ctx->pc != 0x29A668u) { return; }
    }
    ctx->pc = 0x29A668u;
label_29a668:
    // 0x29a668: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29a668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a66c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29a66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29a670: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29a670u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29a674: 0x3e00008  jr          $ra
    ctx->pc = 0x29A674u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A674u;
            // 0x29a678: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29A67Cu;
}
