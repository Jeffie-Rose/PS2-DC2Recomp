#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetChrEquipDirect__16CUserDataManagerFii
// Address: 0x19d560 - 0x19d604
void SetChrEquipDirect__16CUserDataManagerFii_0x19d560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetChrEquipDirect__16CUserDataManagerFii_0x19d560");
#endif

    switch (ctx->pc) {
        case 0x19d5b0u: goto label_19d5b0;
        case 0x19d5c8u: goto label_19d5c8;
        case 0x19d5d8u: goto label_19d5d8;
        case 0x19d5e8u: goto label_19d5e8;
        default: break;
    }

    ctx->pc = 0x19d560u;

    // 0x19d560: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x19d560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x19d564: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x19d564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19d568: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19d568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19d56c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19d56cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19d570: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19d570u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d574: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19d574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19d578: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x19d578u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d57c: 0x1e000003  bgtz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19D57Cu;
    {
        const bool branch_taken_0x19d57c = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x19D580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D57Cu;
            // 0x19d580: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d57c) {
            ctx->pc = 0x19D58Cu;
            goto label_19d58c;
        }
    }
    ctx->pc = 0x19D584u;
    // 0x19d584: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x19D584u;
    {
        const bool branch_taken_0x19d584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D584u;
            // 0x19d588: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d584) {
            ctx->pc = 0x19D5ECu;
            goto label_19d5ec;
        }
    }
    ctx->pc = 0x19D58Cu;
label_19d58c:
    // 0x19d58c: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19D58Cu;
    {
        const bool branch_taken_0x19d58c = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x19D590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D58Cu;
            // 0x19d590: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d58c) {
            ctx->pc = 0x19D5A0u;
            goto label_19d5a0;
        }
    }
    ctx->pc = 0x19D594u;
    // 0x19d594: 0x2a210003  slti        $at, $s1, 0x3
    ctx->pc = 0x19d594u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x19d598: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x19D598u;
    {
        const bool branch_taken_0x19d598 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x19d598) {
            ctx->pc = 0x19D5A8u;
            goto label_19d5a8;
        }
    }
    ctx->pc = 0x19D5A0u;
label_19d5a0:
    // 0x19d5a0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x19D5A0u;
    {
        const bool branch_taken_0x19d5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D5A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D5A0u;
            // 0x19d5a4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d5a0) {
            ctx->pc = 0x19D5F0u;
            goto label_19d5f0;
        }
    }
    ctx->pc = 0x19D5A8u;
label_19d5a8:
    // 0x19d5a8: 0xc067584  jal         func_19D610
    ctx->pc = 0x19D5A8u;
    SET_GPR_U32(ctx, 31, 0x19D5B0u);
    ctx->pc = 0x19D610u;
    if (runtime->hasFunction(0x19D610u)) {
        auto targetFn = runtime->lookupFunction(0x19D610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D5B0u; }
        if (ctx->pc != 0x19D5B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchEquip__16CUserDataManagerFii_0x19d610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D5B0u; }
        if (ctx->pc != 0x19D5B0u) { return; }
    }
    ctx->pc = 0x19D5B0u;
label_19d5b0:
    // 0x19d5b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19D5B0u;
    {
        const bool branch_taken_0x19d5b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D5B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D5B0u;
            // 0x19d5b4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d5b0) {
            ctx->pc = 0x19D5C0u;
            goto label_19d5c0;
        }
    }
    ctx->pc = 0x19D5B8u;
    // 0x19d5b8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x19D5B8u;
    {
        const bool branch_taken_0x19d5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D5BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D5B8u;
            // 0x19d5bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d5b8) {
            ctx->pc = 0x19D5ECu;
            goto label_19d5ec;
        }
    }
    ctx->pc = 0x19D5C0u;
label_19d5c0:
    // 0x19d5c0: 0xc065c24  jal         func_197090
    ctx->pc = 0x19D5C0u;
    SET_GPR_U32(ctx, 31, 0x19D5C8u);
    ctx->pc = 0x197090u;
    if (runtime->hasFunction(0x197090u)) {
        auto targetFn = runtime->lookupFunction(0x197090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D5C8u; }
        if (ctx->pc != 0x19D5C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__13CGameDataUsedFv_0x197090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D5C8u; }
        if (ctx->pc != 0x19D5C8u) { return; }
    }
    ctx->pc = 0x19D5C8u;
label_19d5c8:
    // 0x19d5c8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x19d5c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d5cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19d5ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d5d0: 0xc067a78  jal         func_19E9E0
    ctx->pc = 0x19D5D0u;
    SET_GPR_U32(ctx, 31, 0x19D5D8u);
    ctx->pc = 0x19D5D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D5D0u;
            // 0x19d5d4: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19E9E0u;
    if (runtime->hasFunction(0x19E9E0u)) {
        auto targetFn = runtime->lookupFunction(0x19E9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D5D8u; }
        if (ctx->pc != 0x19D5D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyGameData__16CUserDataManagerFP13CGameDataUsedi_0x19e9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D5D8u; }
        if (ctx->pc != 0x19D5D8u) { return; }
    }
    ctx->pc = 0x19D5D8u;
label_19d5d8:
    // 0x19d5d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19d5d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d5dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19d5dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d5e0: 0xc0674cc  jal         func_19D330
    ctx->pc = 0x19D5E0u;
    SET_GPR_U32(ctx, 31, 0x19D5E8u);
    ctx->pc = 0x19D5E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D5E0u;
            // 0x19d5e4: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D330u;
    if (runtime->hasFunction(0x19D330u)) {
        auto targetFn = runtime->lookupFunction(0x19D330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D5E8u; }
        if (ctx->pc != 0x19D5E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetChrEquip__16CUserDataManagerFiP13CGameDataUsed_0x19d330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D5E8u; }
        if (ctx->pc != 0x19D5E8u) { return; }
    }
    ctx->pc = 0x19D5E8u;
label_19d5e8:
    // 0x19d5e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19d5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19d5ec:
    // 0x19d5ec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19d5ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19d5f0:
    // 0x19d5f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19d5f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19d5f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19d5f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d5f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19d5f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d5fc: 0x3e00008  jr          $ra
    ctx->pc = 0x19D5FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D5FCu;
            // 0x19d600: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19D604u;
}
