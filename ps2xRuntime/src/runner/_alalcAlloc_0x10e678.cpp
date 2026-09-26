#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _alalcAlloc
// Address: 0x10e678 - 0x10e6e4
void _alalcAlloc_0x10e678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_alalcAlloc_0x10e678");
#endif

    switch (ctx->pc) {
        case 0x10e6d4u: goto label_10e6d4;
        default: break;
    }

    ctx->pc = 0x10e678u;

    // 0x10e678: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10e678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10e67c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x10e67cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e680: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10e680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10e684: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x10E684u;
    {
        const bool branch_taken_0x10e684 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e684) {
            ctx->pc = 0x10E688u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10E684u;
            // 0x10e688: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x10E68Cu;
            goto label_10e68c;
        }
    }
    ctx->pc = 0x10E68Cu;
label_10e68c:
    // 0x10e68c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x10e68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x10e690: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x10e690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x10e694: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x10e694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x10e698: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x10e698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10e69c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10e69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x10e6a0: 0x47001b  divu        $zero, $v0, $a3
    ctx->pc = 0x10e6a0u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x10e6a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10e6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x10e6a8: 0x1012  mflo        $v0
    ctx->pc = 0x10e6a8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x10e6ac: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x10e6acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x10e6b0: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x10e6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x10e6b4: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x10e6b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x10e6b8: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x10E6B8u;
    {
        const bool branch_taken_0x10e6b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e6b8) {
            ctx->pc = 0x10E6BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10E6B8u;
            // 0x10e6bc: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10E6C8u;
            goto label_10e6c8;
        }
    }
    ctx->pc = 0x10E6C0u;
    // 0x10e6c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x10E6C0u;
    {
        const bool branch_taken_0x10e6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E6C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E6C0u;
            // 0x10e6c4: 0xaca40008  sw          $a0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e6c0) {
            ctx->pc = 0x10E6D8u;
            goto label_10e6d8;
        }
    }
    ctx->pc = 0x10E6C8u;
label_10e6c8:
    // 0x10e6c8: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x10e6c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e6cc: 0xc043b64  jal         func_10ED90
    ctx->pc = 0x10E6CCu;
    SET_GPR_U32(ctx, 31, 0x10E6D4u);
    ctx->pc = 0x10E6D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10E6CCu;
            // 0x10e6d0: 0x24a508b8  addiu       $a1, $a1, 0x8B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10ED90u;
    if (runtime->hasFunction(0x10ED90u)) {
        auto targetFn = runtime->lookupFunction(0x10ED90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E6D4u; }
        if (ctx->pc != 0x10E6D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x10ed90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E6D4u; }
        if (ctx->pc != 0x10E6D4u) { return; }
    }
    ctx->pc = 0x10E6D4u;
label_10e6d4:
    // 0x10e6d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10e6d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10e6d8:
    // 0x10e6d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10e6d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10e6dc: 0x3e00008  jr          $ra
    ctx->pc = 0x10E6DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E6E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E6DCu;
            // 0x10e6e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E6E4u;
}
