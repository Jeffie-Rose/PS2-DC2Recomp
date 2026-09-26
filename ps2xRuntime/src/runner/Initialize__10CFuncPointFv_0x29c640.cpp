#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__10CFuncPointFv
// Address: 0x29c640 - 0x29c6b4
void Initialize__10CFuncPointFv_0x29c640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__10CFuncPointFv_0x29c640");
#endif

    switch (ctx->pc) {
        case 0x29c680u: goto label_29c680;
        case 0x29c688u: goto label_29c688;
        case 0x29c690u: goto label_29c690;
        default: break;
    }

    ctx->pc = 0x29c640u;

    // 0x29c640: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29c640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29c644: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29c644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29c648: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29c648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29c64c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29c64cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c650: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29c650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29c654: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x29c654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x29c658: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x29c658u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x29c65c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29c65cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c660: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x29c660u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x29c664: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x29c664u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x29c668: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x29c668u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x29c66c: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x29c66cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x29c670: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x29c670u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x29c674: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x29c674u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x29c678: 0xc049c86  jal         func_127218
    ctx->pc = 0x29C678u;
    SET_GPR_U32(ctx, 31, 0x29C680u);
    ctx->pc = 0x29C67Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C678u;
            // 0x29c67c: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C680u; }
        if (ctx->pc != 0x29C680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C680u; }
        if (ctx->pc != 0x29C680u) { return; }
    }
    ctx->pc = 0x29C680u;
label_29c680:
    // 0x29c680: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x29C680u;
    SET_GPR_U32(ctx, 31, 0x29C688u);
    ctx->pc = 0x29C684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C680u;
            // 0x29c684: 0x26040180  addiu       $a0, $s0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C688u; }
        if (ctx->pc != 0x29C688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C688u; }
        if (ctx->pc != 0x29C688u) { return; }
    }
    ctx->pc = 0x29C688u;
label_29c688:
    // 0x29c688: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x29C688u;
    SET_GPR_U32(ctx, 31, 0x29C690u);
    ctx->pc = 0x29C68Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C688u;
            // 0x29c68c: 0x26040190  addiu       $a0, $s0, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C690u; }
        if (ctx->pc != 0x29C690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C690u; }
        if (ctx->pc != 0x29C690u) { return; }
    }
    ctx->pc = 0x29C690u;
label_29c690:
    // 0x29c690: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x29c690u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x29c694: 0xae0301a8  sw          $v1, 0x1A8($s0)
    ctx->pc = 0x29c694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 3));
    // 0x29c698: 0xae0301a4  sw          $v1, 0x1A4($s0)
    ctx->pc = 0x29c698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 420), GPR_U32(ctx, 3));
    // 0x29c69c: 0xae0301a0  sw          $v1, 0x1A0($s0)
    ctx->pc = 0x29c69cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 416), GPR_U32(ctx, 3));
    // 0x29c6a0: 0xae0001ac  sw          $zero, 0x1AC($s0)
    ctx->pc = 0x29c6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 0));
    // 0x29c6a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29c6a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29c6a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29c6a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29c6ac: 0x3e00008  jr          $ra
    ctx->pc = 0x29C6ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C6B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C6ACu;
            // 0x29c6b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29C6B4u;
}
