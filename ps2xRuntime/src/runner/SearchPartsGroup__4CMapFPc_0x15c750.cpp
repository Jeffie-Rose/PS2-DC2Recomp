#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchPartsGroup__4CMapFPc
// Address: 0x15c750 - 0x15c780
void SearchPartsGroup__4CMapFPc_0x15c750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchPartsGroup__4CMapFPc_0x15c750");
#endif

    switch (ctx->pc) {
        case 0x15c764u: goto label_15c764;
        case 0x15c770u: goto label_15c770;
        default: break;
    }

    ctx->pc = 0x15c750u;

    // 0x15c750: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15c750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15c754: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15c754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15c758: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15c758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15c75c: 0xc0571e0  jal         func_15C780
    ctx->pc = 0x15C75Cu;
    SET_GPR_U32(ctx, 31, 0x15C764u);
    ctx->pc = 0x15C760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C75Cu;
            // 0x15c760: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C780u;
    if (runtime->hasFunction(0x15C780u)) {
        auto targetFn = runtime->lookupFunction(0x15C780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C764u; }
        if (ctx->pc != 0x15C764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchPartsGroupNo__4CMapFPc_0x15c780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C764u; }
        if (ctx->pc != 0x15C764u) { return; }
    }
    ctx->pc = 0x15C764u;
label_15c764:
    // 0x15c764: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15c764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c768: 0xc057180  jal         func_15C600
    ctx->pc = 0x15C768u;
    SET_GPR_U32(ctx, 31, 0x15C770u);
    ctx->pc = 0x15C76Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C768u;
            // 0x15c76c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C600u;
    if (runtime->hasFunction(0x15C600u)) {
        auto targetFn = runtime->lookupFunction(0x15C600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C770u; }
        if (ctx->pc != 0x15C770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartsGroup__4CMapFi_0x15c600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C770u; }
        if (ctx->pc != 0x15C770u) { return; }
    }
    ctx->pc = 0x15C770u;
label_15c770:
    // 0x15c770: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15c770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15c774: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15c774u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15c778: 0x3e00008  jr          $ra
    ctx->pc = 0x15C778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C778u;
            // 0x15c77c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15C780u;
}
