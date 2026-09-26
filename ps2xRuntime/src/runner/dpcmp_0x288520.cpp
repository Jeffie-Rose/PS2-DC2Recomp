#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: dpcmp
// Address: 0x288520 - 0x28856c
void dpcmp_0x288520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dpcmp_0x288520");
#endif

    switch (ctx->pc) {
        case 0x288540u: goto label_288540;
        case 0x288550u: goto label_288550;
        case 0x28855cu: goto label_28855c;
        default: break;
    }

    ctx->pc = 0x288520u;

    // 0x288520: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x288520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x288524: 0xffa40040  sd          $a0, 0x40($sp)
    ctx->pc = 0x288524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 4));
    // 0x288528: 0xffa50048  sd          $a1, 0x48($sp)
    ctx->pc = 0x288528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 5));
    // 0x28852c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x28852cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x288530: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x288530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x288534: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x288534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x288538: 0xc0a1f16  jal         func_287C58
    ctx->pc = 0x288538u;
    SET_GPR_U32(ctx, 31, 0x288540u);
    ctx->pc = 0x28853Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288538u;
            // 0x28853c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287C58u;
    if (runtime->hasFunction(0x287C58u)) {
        auto targetFn = runtime->lookupFunction(0x287C58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288540u; }
        if (ctx->pc != 0x288540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_d_0x287c58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288540u; }
        if (ctx->pc != 0x288540u) { return; }
    }
    ctx->pc = 0x288540u;
label_288540:
    // 0x288540: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x288540u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x288544: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x288544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x288548: 0xc0a1f16  jal         func_287C58
    ctx->pc = 0x288548u;
    SET_GPR_U32(ctx, 31, 0x288550u);
    ctx->pc = 0x28854Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288548u;
            // 0x28854c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287C58u;
    if (runtime->hasFunction(0x287C58u)) {
        auto targetFn = runtime->lookupFunction(0x287C58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288550u; }
        if (ctx->pc != 0x288550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_d_0x287c58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288550u; }
        if (ctx->pc != 0x288550u) { return; }
    }
    ctx->pc = 0x288550u;
label_288550:
    // 0x288550: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x288550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288554: 0xc0a2102  jal         func_288408
    ctx->pc = 0x288554u;
    SET_GPR_U32(ctx, 31, 0x28855Cu);
    ctx->pc = 0x288558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288554u;
            // 0x288558: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288408u;
    if (runtime->hasFunction(0x288408u)) {
        auto targetFn = runtime->lookupFunction(0x288408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28855Cu; }
        if (ctx->pc != 0x28855Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___fpcmp_parts_d_0x288408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28855Cu; }
        if (ctx->pc != 0x28855Cu) { return; }
    }
    ctx->pc = 0x28855Cu;
label_28855c:
    // 0x28855c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x28855cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x288560: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x288560u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x288564: 0x3e00008  jr          $ra
    ctx->pc = 0x288564u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288564u;
            // 0x288568: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28856Cu;
}
