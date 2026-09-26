#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawNumber__FP11mgCDrawPrimiii
// Address: 0x2fe4f0 - 0x2fe584
void DrawNumber__FP11mgCDrawPrimiii_0x2fe4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawNumber__FP11mgCDrawPrimiii_0x2fe4f0");
#endif

    switch (ctx->pc) {
        case 0x2fe530u: goto label_2fe530;
        case 0x2fe544u: goto label_2fe544;
        case 0x2fe554u: goto label_2fe554;
        case 0x2fe568u: goto label_2fe568;
        default: break;
    }

    ctx->pc = 0x2fe4f0u;

    // 0x2fe4f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2fe4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2fe4f4: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x2fe4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2fe4f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2fe4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2fe4fc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2fe4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2fe500: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2fe500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2fe504: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2fe504u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2fe508: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2fe508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2fe50c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2fe50cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe510: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fe510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2fe514: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2fe514u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe518: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fe518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2fe51c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2fe51cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe520: 0x28021  addu        $s0, $zero, $v0
    ctx->pc = 0x2fe520u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2fe524: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x2fe524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x2fe528: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x2FE528u;
    SET_GPR_U32(ctx, 31, 0x2FE530u);
    ctx->pc = 0x2FE52Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE528u;
            // 0x2fe52c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE530u; }
        if (ctx->pc != 0x2FE530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE530u; }
        if (ctx->pc != 0x2FE530u) { return; }
    }
    ctx->pc = 0x2FE530u;
label_2fe530:
    // 0x2fe530: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2fe530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe534: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2fe534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe538: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2fe538u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe53c: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x2FE53Cu;
    SET_GPR_U32(ctx, 31, 0x2FE544u);
    ctx->pc = 0x2FE540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE53Cu;
            // 0x2fe540: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE544u; }
        if (ctx->pc != 0x2FE544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE544u; }
        if (ctx->pc != 0x2FE544u) { return; }
    }
    ctx->pc = 0x2FE544u;
label_2fe544:
    // 0x2fe544: 0x2605000c  addiu       $a1, $s0, 0xC
    ctx->pc = 0x2fe544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2fe548: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2fe548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe54c: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x2FE54Cu;
    SET_GPR_U32(ctx, 31, 0x2FE554u);
    ctx->pc = 0x2FE550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE54Cu;
            // 0x2fe550: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE554u; }
        if (ctx->pc != 0x2FE554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE554u; }
        if (ctx->pc != 0x2FE554u) { return; }
    }
    ctx->pc = 0x2FE554u;
label_2fe554:
    // 0x2fe554: 0x2645000c  addiu       $a1, $s2, 0xC
    ctx->pc = 0x2fe554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x2fe558: 0x2626000e  addiu       $a2, $s1, 0xE
    ctx->pc = 0x2fe558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 14));
    // 0x2fe55c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2fe55cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe560: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x2FE560u;
    SET_GPR_U32(ctx, 31, 0x2FE568u);
    ctx->pc = 0x2FE564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE560u;
            // 0x2fe564: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE568u; }
        if (ctx->pc != 0x2FE568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE568u; }
        if (ctx->pc != 0x2FE568u) { return; }
    }
    ctx->pc = 0x2FE568u;
label_2fe568:
    // 0x2fe568: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2fe568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2fe56c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2fe56cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fe570: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2fe570u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fe574: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fe574u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fe578: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fe578u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fe57c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE57Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE57Cu;
            // 0x2fe580: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FE584u;
}
