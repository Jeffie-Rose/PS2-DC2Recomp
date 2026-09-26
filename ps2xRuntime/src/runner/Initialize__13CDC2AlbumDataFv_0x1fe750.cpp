#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__13CDC2AlbumDataFv
// Address: 0x1fe750 - 0x1fe788
void Initialize__13CDC2AlbumDataFv_0x1fe750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__13CDC2AlbumDataFv_0x1fe750");
#endif

    switch (ctx->pc) {
        case 0x1fe770u: goto label_1fe770;
        case 0x1fe778u: goto label_1fe778;
        default: break;
    }

    ctx->pc = 0x1fe750u;

    // 0x1fe750: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fe750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fe754: 0x3c020006  lui         $v0, 0x6
    ctx->pc = 0x1fe754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
    // 0x1fe758: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fe758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1fe75c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fe75cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe760: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fe760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fe764: 0x34464cb0  ori         $a2, $v0, 0x4CB0
    ctx->pc = 0x1fe764u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19632);
    // 0x1fe768: 0xc049c86  jal         func_127218
    ctx->pc = 0x1FE768u;
    SET_GPR_U32(ctx, 31, 0x1FE770u);
    ctx->pc = 0x1FE76Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE768u;
            // 0x1fe76c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE770u; }
        if (ctx->pc != 0x1FE770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE770u; }
        if (ctx->pc != 0x1FE770u) { return; }
    }
    ctx->pc = 0x1FE770u;
label_1fe770:
    // 0x1fe770: 0xc07f9e4  jal         func_1FE790
    ctx->pc = 0x1FE770u;
    SET_GPR_U32(ctx, 31, 0x1FE778u);
    ctx->pc = 0x1FE774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE770u;
            // 0x1fe774: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE790u;
    if (runtime->hasFunction(0x1FE790u)) {
        auto targetFn = runtime->lookupFunction(0x1FE790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE778u; }
        if (ctx->pc != 0x1FE778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RelateAlbumPicData__13CDC2AlbumDataFv_0x1fe790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE778u; }
        if (ctx->pc != 0x1FE778u) { return; }
    }
    ctx->pc = 0x1FE778u;
label_1fe778:
    // 0x1fe778: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fe778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe77c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fe77cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe780: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE780u;
            // 0x1fe784: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FE788u;
}
