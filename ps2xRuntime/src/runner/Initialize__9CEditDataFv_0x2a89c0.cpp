#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__9CEditDataFv
// Address: 0x2a89c0 - 0x2a8a04
void Initialize__9CEditDataFv_0x2a89c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__9CEditDataFv_0x2a89c0");
#endif

    switch (ctx->pc) {
        case 0x2a89dcu: goto label_2a89dc;
        case 0x2a89e4u: goto label_2a89e4;
        case 0x2a89f4u: goto label_2a89f4;
        default: break;
    }

    ctx->pc = 0x2a89c0u;

    // 0x2a89c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a89c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a89c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a89c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a89c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a89c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a89cc: 0x24065510  addiu       $a2, $zero, 0x5510
    ctx->pc = 0x2a89ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21776));
    // 0x2a89d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a89d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a89d4: 0xc049c86  jal         func_127218
    ctx->pc = 0x2A89D4u;
    SET_GPR_U32(ctx, 31, 0x2A89DCu);
    ctx->pc = 0x2A89D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A89D4u;
            // 0x2a89d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A89DCu; }
        if (ctx->pc != 0x2A89DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A89DCu; }
        if (ctx->pc != 0x2A89DCu) { return; }
    }
    ctx->pc = 0x2A89DCu;
label_2a89dc:
    // 0x2a89dc: 0xc0aa284  jal         func_2A8A10
    ctx->pc = 0x2A89DCu;
    SET_GPR_U32(ctx, 31, 0x2A89E4u);
    ctx->pc = 0x2A89E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A89DCu;
            // 0x2a89e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A8A10u;
    if (runtime->hasFunction(0x2A8A10u)) {
        auto targetFn = runtime->lookupFunction(0x2A8A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A89E4u; }
        if (ctx->pc != 0x2A89E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitPlaceData__9CEditDataFv_0x2a8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A89E4u; }
        if (ctx->pc != 0x2A89E4u) { return; }
    }
    ctx->pc = 0x2A89E4u;
label_2a89e4:
    // 0x2a89e4: 0x26045040  addiu       $a0, $s0, 0x5040
    ctx->pc = 0x2a89e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20544));
    // 0x2a89e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a89e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a89ec: 0xc049c86  jal         func_127218
    ctx->pc = 0x2A89ECu;
    SET_GPR_U32(ctx, 31, 0x2A89F4u);
    ctx->pc = 0x2A89F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A89ECu;
            // 0x2a89f0: 0x240600d0  addiu       $a2, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A89F4u; }
        if (ctx->pc != 0x2A89F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A89F4u; }
        if (ctx->pc != 0x2A89F4u) { return; }
    }
    ctx->pc = 0x2A89F4u;
label_2a89f4:
    // 0x2a89f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a89f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a89f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a89f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a89fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2A89FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A89FCu;
            // 0x2a8a00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A8A04u;
}
