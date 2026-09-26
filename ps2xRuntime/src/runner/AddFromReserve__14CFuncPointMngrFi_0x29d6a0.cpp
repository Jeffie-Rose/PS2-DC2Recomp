#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AddFromReserve__14CFuncPointMngrFi
// Address: 0x29d6a0 - 0x29d704
void AddFromReserve__14CFuncPointMngrFi_0x29d6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddFromReserve__14CFuncPointMngrFi_0x29d6a0");
#endif

    switch (ctx->pc) {
        case 0x29d6c0u: goto label_29d6c0;
        case 0x29d6dcu: goto label_29d6dc;
        case 0x29d6ecu: goto label_29d6ec;
        default: break;
    }

    ctx->pc = 0x29d6a0u;

    // 0x29d6a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29d6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29d6a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x29d6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x29d6a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29d6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29d6ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29d6acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29d6b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x29d6b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d6b4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x29d6b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d6b8: 0xc0a7584  jal         func_29D610
    ctx->pc = 0x29D6B8u;
    SET_GPR_U32(ctx, 31, 0x29D6C0u);
    ctx->pc = 0x29D6BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29D6B8u;
            // 0x29d6bc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D610u;
    if (runtime->hasFunction(0x29D610u)) {
        auto targetFn = runtime->lookupFunction(0x29D610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D6C0u; }
        if (ctx->pc != 0x29D6C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetReserve__14CFuncPointMngrFv_0x29d610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D6C0u; }
        if (ctx->pc != 0x29D6C0u) { return; }
    }
    ctx->pc = 0x29D6C0u;
label_29d6c0:
    // 0x29d6c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29d6c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d6c4: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29D6C4u;
    {
        const bool branch_taken_0x29d6c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D6C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D6C4u;
            // 0x29d6c8: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d6c4) {
            ctx->pc = 0x29D6D4u;
            goto label_29d6d4;
        }
    }
    ctx->pc = 0x29D6CCu;
    // 0x29d6cc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x29D6CCu;
    {
        const bool branch_taken_0x29d6cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D6D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D6CCu;
            // 0x29d6d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d6cc) {
            ctx->pc = 0x29D6ECu;
            goto label_29d6ec;
        }
    }
    ctx->pc = 0x29D6D4u;
label_29d6d4:
    // 0x29d6d4: 0xc0a7190  jal         func_29C640
    ctx->pc = 0x29D6D4u;
    SET_GPR_U32(ctx, 31, 0x29D6DCu);
    ctx->pc = 0x29C640u;
    if (runtime->hasFunction(0x29C640u)) {
        auto targetFn = runtime->lookupFunction(0x29C640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D6DCu; }
        if (ctx->pc != 0x29D6DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__10CFuncPointFv_0x29c640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D6DCu; }
        if (ctx->pc != 0x29D6DCu) { return; }
    }
    ctx->pc = 0x29D6DCu;
label_29d6dc:
    // 0x29d6dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29d6dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d6e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x29d6e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d6e4: 0xc0a7514  jal         func_29D450
    ctx->pc = 0x29D6E4u;
    SET_GPR_U32(ctx, 31, 0x29D6ECu);
    ctx->pc = 0x29D6E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29D6E4u;
            // 0x29d6e8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D450u;
    if (runtime->hasFunction(0x29D450u)) {
        auto targetFn = runtime->lookupFunction(0x29D450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D6ECu; }
        if (ctx->pc != 0x29D6ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Add__14CFuncPointMngrFiP19CList_10CFuncPoint__0x29d450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D6ECu; }
        if (ctx->pc != 0x29D6ECu) { return; }
    }
    ctx->pc = 0x29D6ECu;
label_29d6ec:
    // 0x29d6ec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29d6ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29d6f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29d6f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29d6f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29d6f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29d6f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29d6f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29d6fc: 0x3e00008  jr          $ra
    ctx->pc = 0x29D6FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D6FCu;
            // 0x29d700: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29D704u;
}
