#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ClearHeapMem__9mgCMemoryFv
// Address: 0x1399d0 - 0x139a1c
void ClearHeapMem__9mgCMemoryFv_0x1399d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClearHeapMem__9mgCMemoryFv_0x1399d0");
#endif

    switch (ctx->pc) {
        case 0x1399f4u: goto label_1399f4;
        case 0x139a04u: goto label_139a04;
        default: break;
    }

    ctx->pc = 0x1399d0u;

    // 0x1399d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1399d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1399d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1399d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1399d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1399d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1399dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1399dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1399e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1399e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1399e4: 0x8c900014  lw          $s0, 0x14($a0)
    ctx->pc = 0x1399e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1399e8: 0x8c910010  lw          $s1, 0x10($a0)
    ctx->pc = 0x1399e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1399ec: 0xc04e640  jal         func_139900
    ctx->pc = 0x1399ECu;
    SET_GPR_U32(ctx, 31, 0x1399F4u);
    ctx->pc = 0x1399F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1399ECu;
            // 0x1399f0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1399F4u; }
        if (ctx->pc != 0x1399F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1399F4u; }
        if (ctx->pc != 0x1399F4u) { return; }
    }
    ctx->pc = 0x1399F4u;
label_1399f4:
    // 0x1399f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1399f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1399f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1399f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1399fc: 0xc04e64c  jal         func_139930
    ctx->pc = 0x1399FCu;
    SET_GPR_U32(ctx, 31, 0x139A04u);
    ctx->pc = 0x139A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1399FCu;
            // 0x139a00: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139930u;
    if (runtime->hasFunction(0x139930u)) {
        auto targetFn = runtime->lookupFunction(0x139930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139A04u; }
        if (ctx->pc != 0x139A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHeapMem__9mgCMemoryFP1i_0x139930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139A04u; }
        if (ctx->pc != 0x139A04u) { return; }
    }
    ctx->pc = 0x139A04u;
label_139a04:
    // 0x139a04: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x139a04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x139a08: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x139a08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x139a0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x139a0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139a10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x139a10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139a14: 0x3e00008  jr          $ra
    ctx->pc = 0x139A14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139A14u;
            // 0x139a18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x139A1Cu;
}
