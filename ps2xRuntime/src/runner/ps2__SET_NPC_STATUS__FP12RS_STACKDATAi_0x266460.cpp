#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_NPC_STATUS__FP12RS_STACKDATAi
// Address: 0x266460 - 0x2664fc
void ps2__SET_NPC_STATUS__FP12RS_STACKDATAi_0x266460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_NPC_STATUS__FP12RS_STACKDATAi_0x266460");
#endif

    switch (ctx->pc) {
        case 0x26647cu: goto label_26647c;
        case 0x266488u: goto label_266488;
        case 0x2664b4u: goto label_2664b4;
        case 0x2664e0u: goto label_2664e0;
        default: break;
    }

    ctx->pc = 0x266460u;

    // 0x266460: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x266460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x266464: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x266464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x266468: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x266468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26646c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26646cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x266470: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x266470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x266474: 0xc097e18  jal         func_25F860
    ctx->pc = 0x266474u;
    SET_GPR_U32(ctx, 31, 0x26647Cu);
    ctx->pc = 0x266478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266474u;
            // 0x266478: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26647Cu; }
        if (ctx->pc != 0x26647Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26647Cu; }
        if (ctx->pc != 0x26647Cu) { return; }
    }
    ctx->pc = 0x26647Cu;
label_26647c:
    // 0x26647c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26647cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266480: 0xc097e18  jal         func_25F860
    ctx->pc = 0x266480u;
    SET_GPR_U32(ctx, 31, 0x266488u);
    ctx->pc = 0x266484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266480u;
            // 0x266484: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266488u; }
        if (ctx->pc != 0x266488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266488u; }
        if (ctx->pc != 0x266488u) { return; }
    }
    ctx->pc = 0x266488u;
label_266488:
    // 0x266488: 0x1e000003  bgtz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x266488u;
    {
        const bool branch_taken_0x266488 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x26648Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266488u;
            // 0x26648c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266488) {
            ctx->pc = 0x266498u;
            goto label_266498;
        }
    }
    ctx->pc = 0x266490u;
    // 0x266490: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x266490u;
    {
        const bool branch_taken_0x266490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266490u;
            // 0x266494: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266490) {
            ctx->pc = 0x2664E4u;
            goto label_2664e4;
        }
    }
    ctx->pc = 0x266498u;
label_266498:
    // 0x266498: 0x2a010021  slti        $at, $s0, 0x21
    ctx->pc = 0x266498u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x26649c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x26649Cu;
    {
        const bool branch_taken_0x26649c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2664A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26649Cu;
            // 0x2664a0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26649c) {
            ctx->pc = 0x2664ACu;
            goto label_2664ac;
        }
    }
    ctx->pc = 0x2664A4u;
    // 0x2664a4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2664A4u;
    {
        const bool branch_taken_0x2664a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2664A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2664A4u;
            // 0x2664a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2664a4) {
            ctx->pc = 0x2664E4u;
            goto label_2664e4;
        }
    }
    ctx->pc = 0x2664ACu;
label_2664ac:
    // 0x2664ac: 0xc064220  jal         func_190880
    ctx->pc = 0x2664ACu;
    SET_GPR_U32(ctx, 31, 0x2664B4u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2664B4u; }
        if (ctx->pc != 0x2664B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2664B4u; }
        if (ctx->pc != 0x2664B4u) { return; }
    }
    ctx->pc = 0x2664B4u;
label_2664b4:
    // 0x2664b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2664B4u;
    {
        const bool branch_taken_0x2664b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2664B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2664B4u;
            // 0x2664b8: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2664b4) {
            ctx->pc = 0x2664C4u;
            goto label_2664c4;
        }
    }
    ctx->pc = 0x2664BCu;
    // 0x2664bc: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x2664bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
    // 0x2664c0: 0x419021  addu        $s2, $v0, $at
    ctx->pc = 0x2664c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_2664c4:
    // 0x2664c4: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2664C4u;
    {
        const bool branch_taken_0x2664c4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2664C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2664C4u;
            // 0x2664c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2664c4) {
            ctx->pc = 0x2664D4u;
            goto label_2664d4;
        }
    }
    ctx->pc = 0x2664CCu;
    // 0x2664cc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2664CCu;
    {
        const bool branch_taken_0x2664cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2664D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2664CCu;
            // 0x2664d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2664cc) {
            ctx->pc = 0x2664E4u;
            goto label_2664e4;
        }
    }
    ctx->pc = 0x2664D4u;
label_2664d4:
    // 0x2664d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2664d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2664d8: 0xc0671d4  jal         func_19C750
    ctx->pc = 0x2664D8u;
    SET_GPR_U32(ctx, 31, 0x2664E0u);
    ctx->pc = 0x2664DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2664D8u;
            // 0x2664dc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C750u;
    if (runtime->hasFunction(0x19C750u)) {
        auto targetFn = runtime->lookupFunction(0x19C750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2664E0u; }
        if (ctx->pc != 0x2664E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPartyCharaStatus__16CUserDataManagerFii_0x19c750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2664E0u; }
        if (ctx->pc != 0x2664E0u) { return; }
    }
    ctx->pc = 0x2664E0u;
label_2664e0:
    // 0x2664e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2664e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2664e4:
    // 0x2664e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2664e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2664e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2664e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2664ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2664ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2664f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2664f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2664f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2664F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2664F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2664F4u;
            // 0x2664f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2664FCu;
}
