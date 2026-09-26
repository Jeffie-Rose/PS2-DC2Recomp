#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetChrEquip__16CUserDataManagerFii
// Address: 0x19d4b0 - 0x19d560
void SetChrEquip__16CUserDataManagerFii_0x19d4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetChrEquip__16CUserDataManagerFii_0x19d4b0");
#endif

    switch (ctx->pc) {
        case 0x19d500u: goto label_19d500;
        case 0x19d51cu: goto label_19d51c;
        case 0x19d530u: goto label_19d530;
        case 0x19d544u: goto label_19d544;
        default: break;
    }

    ctx->pc = 0x19d4b0u;

    // 0x19d4b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19d4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19d4b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x19d4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19d4b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19d4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19d4bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19d4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19d4c0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19d4c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d4c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19d4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19d4c8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x19d4c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d4cc: 0x1e000003  bgtz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19D4CCu;
    {
        const bool branch_taken_0x19d4cc = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x19D4D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D4CCu;
            // 0x19d4d0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d4cc) {
            ctx->pc = 0x19D4DCu;
            goto label_19d4dc;
        }
    }
    ctx->pc = 0x19D4D4u;
    // 0x19d4d4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x19D4D4u;
    {
        const bool branch_taken_0x19d4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D4D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D4D4u;
            // 0x19d4d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d4d4) {
            ctx->pc = 0x19D548u;
            goto label_19d548;
        }
    }
    ctx->pc = 0x19D4DCu;
label_19d4dc:
    // 0x19d4dc: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19D4DCu;
    {
        const bool branch_taken_0x19d4dc = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x19D4E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D4DCu;
            // 0x19d4e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d4dc) {
            ctx->pc = 0x19D4F0u;
            goto label_19d4f0;
        }
    }
    ctx->pc = 0x19D4E4u;
    // 0x19d4e4: 0x2a210003  slti        $at, $s1, 0x3
    ctx->pc = 0x19d4e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x19d4e8: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x19D4E8u;
    {
        const bool branch_taken_0x19d4e8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x19d4e8) {
            ctx->pc = 0x19D4F8u;
            goto label_19d4f8;
        }
    }
    ctx->pc = 0x19D4F0u;
label_19d4f0:
    // 0x19d4f0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x19D4F0u;
    {
        const bool branch_taken_0x19d4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D4F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D4F0u;
            // 0x19d4f4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d4f0) {
            ctx->pc = 0x19D54Cu;
            goto label_19d54c;
        }
    }
    ctx->pc = 0x19D4F8u;
label_19d4f8:
    // 0x19d4f8: 0xc067584  jal         func_19D610
    ctx->pc = 0x19D4F8u;
    SET_GPR_U32(ctx, 31, 0x19D500u);
    ctx->pc = 0x19D610u;
    if (runtime->hasFunction(0x19D610u)) {
        auto targetFn = runtime->lookupFunction(0x19D610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D500u; }
        if (ctx->pc != 0x19D500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchEquip__16CUserDataManagerFii_0x19d610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D500u; }
        if (ctx->pc != 0x19D500u) { return; }
    }
    ctx->pc = 0x19D500u;
label_19d500:
    // 0x19d500: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19D500u;
    {
        const bool branch_taken_0x19d500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D500u;
            // 0x19d504: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d500) {
            ctx->pc = 0x19D510u;
            goto label_19d510;
        }
    }
    ctx->pc = 0x19D508u;
    // 0x19d508: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x19D508u;
    {
        const bool branch_taken_0x19d508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D508u;
            // 0x19d50c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d508) {
            ctx->pc = 0x19D548u;
            goto label_19d548;
        }
    }
    ctx->pc = 0x19D510u;
label_19d510:
    // 0x19d510: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19d510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d514: 0xc0676bc  jal         func_19DAF0
    ctx->pc = 0x19D514u;
    SET_GPR_U32(ctx, 31, 0x19D51Cu);
    ctx->pc = 0x19D518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D514u;
            // 0x19d518: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19DAF0u;
    if (runtime->hasFunction(0x19DAF0u)) {
        auto targetFn = runtime->lookupFunction(0x19DAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D51Cu; }
        if (ctx->pc != 0x19D51Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchItemOnItemBrd__16CUserDataManagerFii_0x19daf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D51Cu; }
        if (ctx->pc != 0x19D51Cu) { return; }
    }
    ctx->pc = 0x19D51Cu;
label_19d51c:
    // 0x19d51c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19D51Cu;
    {
        const bool branch_taken_0x19d51c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D51Cu;
            // 0x19d520: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d51c) {
            ctx->pc = 0x19D538u;
            goto label_19d538;
        }
    }
    ctx->pc = 0x19D524u;
    // 0x19d524: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x19d524u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x19d528: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x19D528u;
    SET_GPR_U32(ctx, 31, 0x19D530u);
    ctx->pc = 0x19D52Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D528u;
            // 0x19d52c: 0x248459d0  addiu       $a0, $a0, 0x59D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D530u; }
        if (ctx->pc != 0x19D530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D530u; }
        if (ctx->pc != 0x19D530u) { return; }
    }
    ctx->pc = 0x19D530u;
label_19d530:
    // 0x19d530: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x19D530u;
    {
        const bool branch_taken_0x19d530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D530u;
            // 0x19d534: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d530) {
            ctx->pc = 0x19D548u;
            goto label_19d548;
        }
    }
    ctx->pc = 0x19D538u;
label_19d538:
    // 0x19d538: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19d538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d53c: 0xc0674cc  jal         func_19D330
    ctx->pc = 0x19D53Cu;
    SET_GPR_U32(ctx, 31, 0x19D544u);
    ctx->pc = 0x19D540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D53Cu;
            // 0x19d540: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D330u;
    if (runtime->hasFunction(0x19D330u)) {
        auto targetFn = runtime->lookupFunction(0x19D330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D544u; }
        if (ctx->pc != 0x19D544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetChrEquip__16CUserDataManagerFiP13CGameDataUsed_0x19d330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D544u; }
        if (ctx->pc != 0x19D544u) { return; }
    }
    ctx->pc = 0x19D544u;
label_19d544:
    // 0x19d544: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19d544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19d548:
    // 0x19d548: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19d548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19d54c:
    // 0x19d54c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19d54cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19d550: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19d550u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d554: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19d554u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d558: 0x3e00008  jr          $ra
    ctx->pc = 0x19D558u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D55Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D558u;
            // 0x19d55c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19D560u;
}
