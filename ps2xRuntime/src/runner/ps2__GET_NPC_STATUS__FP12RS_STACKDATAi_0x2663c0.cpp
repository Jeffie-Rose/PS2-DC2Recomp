#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_NPC_STATUS__FP12RS_STACKDATAi
// Address: 0x2663c0 - 0x266458
void ps2__GET_NPC_STATUS__FP12RS_STACKDATAi_0x2663c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_NPC_STATUS__FP12RS_STACKDATAi_0x2663c0");
#endif

    switch (ctx->pc) {
        case 0x2663dcu: goto label_2663dc;
        case 0x266408u: goto label_266408;
        case 0x266430u: goto label_266430;
        case 0x26643cu: goto label_26643c;
        default: break;
    }

    ctx->pc = 0x2663c0u;

    // 0x2663c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2663c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2663c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2663c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2663c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2663c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2663cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2663ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2663d0: 0x24920008  addiu       $s2, $a0, 0x8
    ctx->pc = 0x2663d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2663d4: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2663D4u;
    SET_GPR_U32(ctx, 31, 0x2663DCu);
    ctx->pc = 0x2663D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2663D4u;
            // 0x2663d8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2663DCu; }
        if (ctx->pc != 0x2663DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2663DCu; }
        if (ctx->pc != 0x2663DCu) { return; }
    }
    ctx->pc = 0x2663DCu;
label_2663dc:
    // 0x2663dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2663dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2663e0: 0x1e000003  bgtz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2663E0u;
    {
        const bool branch_taken_0x2663e0 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x2663E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2663E0u;
            // 0x2663e4: 0x2a010021  slti        $at, $s0, 0x21 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)33) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2663e0) {
            ctx->pc = 0x2663F0u;
            goto label_2663f0;
        }
    }
    ctx->pc = 0x2663E8u;
    // 0x2663e8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2663E8u;
    {
        const bool branch_taken_0x2663e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2663ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2663E8u;
            // 0x2663ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2663e8) {
            ctx->pc = 0x266440u;
            goto label_266440;
        }
    }
    ctx->pc = 0x2663F0u;
label_2663f0:
    // 0x2663f0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2663F0u;
    {
        const bool branch_taken_0x2663f0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2663F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2663F0u;
            // 0x2663f4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2663f0) {
            ctx->pc = 0x266400u;
            goto label_266400;
        }
    }
    ctx->pc = 0x2663F8u;
    // 0x2663f8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2663F8u;
    {
        const bool branch_taken_0x2663f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2663FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2663F8u;
            // 0x2663fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2663f8) {
            ctx->pc = 0x266440u;
            goto label_266440;
        }
    }
    ctx->pc = 0x266400u;
label_266400:
    // 0x266400: 0xc064220  jal         func_190880
    ctx->pc = 0x266400u;
    SET_GPR_U32(ctx, 31, 0x266408u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266408u; }
        if (ctx->pc != 0x266408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266408u; }
        if (ctx->pc != 0x266408u) { return; }
    }
    ctx->pc = 0x266408u;
label_266408:
    // 0x266408: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x266408u;
    {
        const bool branch_taken_0x266408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26640Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266408u;
            // 0x26640c: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266408) {
            ctx->pc = 0x266418u;
            goto label_266418;
        }
    }
    ctx->pc = 0x266410u;
    // 0x266410: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x266410u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
    // 0x266414: 0x418821  addu        $s1, $v0, $at
    ctx->pc = 0x266414u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_266418:
    // 0x266418: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x266418u;
    {
        const bool branch_taken_0x266418 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x26641Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266418u;
            // 0x26641c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266418) {
            ctx->pc = 0x266428u;
            goto label_266428;
        }
    }
    ctx->pc = 0x266420u;
    // 0x266420: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x266420u;
    {
        const bool branch_taken_0x266420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266420u;
            // 0x266424: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266420) {
            ctx->pc = 0x266440u;
            goto label_266440;
        }
    }
    ctx->pc = 0x266428u;
label_266428:
    // 0x266428: 0xc06723c  jal         func_19C8F0
    ctx->pc = 0x266428u;
    SET_GPR_U32(ctx, 31, 0x266430u);
    ctx->pc = 0x26642Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266428u;
            // 0x26642c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C8F0u;
    if (runtime->hasFunction(0x19C8F0u)) {
        auto targetFn = runtime->lookupFunction(0x19C8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266430u; }
        if (ctx->pc != 0x266430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartyCharaStatus__16CUserDataManagerFi_0x19c8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266430u; }
        if (ctx->pc != 0x266430u) { return; }
    }
    ctx->pc = 0x266430u;
label_266430:
    // 0x266430: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x266430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266434: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x266434u;
    SET_GPR_U32(ctx, 31, 0x26643Cu);
    ctx->pc = 0x266438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266434u;
            // 0x266438: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26643Cu; }
        if (ctx->pc != 0x26643Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26643Cu; }
        if (ctx->pc != 0x26643Cu) { return; }
    }
    ctx->pc = 0x26643Cu;
label_26643c:
    // 0x26643c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26643cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_266440:
    // 0x266440: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x266440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x266444: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x266444u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x266448: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x266448u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26644c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26644cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x266450: 0x3e00008  jr          $ra
    ctx->pc = 0x266450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266450u;
            // 0x266454: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x266458u;
}
