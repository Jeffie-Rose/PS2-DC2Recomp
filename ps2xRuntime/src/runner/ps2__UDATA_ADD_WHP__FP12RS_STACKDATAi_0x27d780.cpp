#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _UDATA_ADD_WHP__FP12RS_STACKDATAi
// Address: 0x27d780 - 0x27d818
void ps2__UDATA_ADD_WHP__FP12RS_STACKDATAi_0x27d780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__UDATA_ADD_WHP__FP12RS_STACKDATAi_0x27d780");
#endif

    switch (ctx->pc) {
        case 0x27d79cu: goto label_27d79c;
        case 0x27d7ccu: goto label_27d7cc;
        case 0x27d7dcu: goto label_27d7dc;
        case 0x27d7e8u: goto label_27d7e8;
        case 0x27d7fcu: goto label_27d7fc;
        default: break;
    }

    ctx->pc = 0x27d780u;

    // 0x27d780: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x27d780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x27d784: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x27d784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x27d788: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27d788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x27d78c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27d78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27d790: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27d790u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d794: 0xc064220  jal         func_190880
    ctx->pc = 0x27D794u;
    SET_GPR_U32(ctx, 31, 0x27D79Cu);
    ctx->pc = 0x27D798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D794u;
            // 0x27d798: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D79Cu; }
        if (ctx->pc != 0x27D79Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D79Cu; }
        if (ctx->pc != 0x27D79Cu) { return; }
    }
    ctx->pc = 0x27D79Cu;
label_27d79c:
    // 0x27d79c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27D79Cu;
    {
        const bool branch_taken_0x27d79c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D7A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D79Cu;
            // 0x27d7a0: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d79c) {
            ctx->pc = 0x27D7ACu;
            goto label_27d7ac;
        }
    }
    ctx->pc = 0x27D7A4u;
    // 0x27d7a4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x27D7A4u;
    {
        const bool branch_taken_0x27d7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D7A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D7A4u;
            // 0x27d7a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d7a4) {
            ctx->pc = 0x27D800u;
            goto label_27d800;
        }
    }
    ctx->pc = 0x27D7ACu;
label_27d7ac:
    // 0x27d7ac: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x27d7acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
    // 0x27d7b0: 0x419021  addu        $s2, $v0, $at
    ctx->pc = 0x27d7b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x27d7b4: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x27D7B4u;
    {
        const bool branch_taken_0x27d7b4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D7B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D7B4u;
            // 0x27d7b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d7b4) {
            ctx->pc = 0x27D7C4u;
            goto label_27d7c4;
        }
    }
    ctx->pc = 0x27D7BCu;
    // 0x27d7bc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x27D7BCu;
    {
        const bool branch_taken_0x27d7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D7C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D7BCu;
            // 0x27d7c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d7bc) {
            ctx->pc = 0x27D800u;
            goto label_27d800;
        }
    }
    ctx->pc = 0x27D7C4u;
label_27d7c4:
    // 0x27d7c4: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27D7C4u;
    SET_GPR_U32(ctx, 31, 0x27D7CCu);
    ctx->pc = 0x27D7C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D7C4u;
            // 0x27d7c8: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D7CCu; }
        if (ctx->pc != 0x27D7CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D7CCu; }
        if (ctx->pc != 0x27D7CCu) { return; }
    }
    ctx->pc = 0x27D7CCu;
label_27d7cc:
    // 0x27d7cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27d7ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d7d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27d7d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d7d4: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27D7D4u;
    SET_GPR_U32(ctx, 31, 0x27D7DCu);
    ctx->pc = 0x27D7D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D7D4u;
            // 0x27d7d8: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D7DCu; }
        if (ctx->pc != 0x27D7DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D7DCu; }
        if (ctx->pc != 0x27D7DCu) { return; }
    }
    ctx->pc = 0x27D7DCu;
label_27d7dc:
    // 0x27d7dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27d7dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d7e0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27D7E0u;
    SET_GPR_U32(ctx, 31, 0x27D7E8u);
    ctx->pc = 0x27D7E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D7E0u;
            // 0x27d7e4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D7E8u; }
        if (ctx->pc != 0x27D7E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D7E8u; }
        if (ctx->pc != 0x27D7E8u) { return; }
    }
    ctx->pc = 0x27D7E8u;
label_27d7e8:
    // 0x27d7e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27d7e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d7ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27d7ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d7f0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x27d7f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d7f4: 0xc066df0  jal         func_19B7C0
    ctx->pc = 0x27D7F4u;
    SET_GPR_U32(ctx, 31, 0x27D7FCu);
    ctx->pc = 0x27D7F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D7F4u;
            // 0x27d7f8: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B7C0u;
    if (runtime->hasFunction(0x19B7C0u)) {
        auto targetFn = runtime->lookupFunction(0x19B7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D7FCu; }
        if (ctx->pc != 0x27D7FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddWhp__16CUserDataManagerFiii_0x19b7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D7FCu; }
        if (ctx->pc != 0x27D7FCu) { return; }
    }
    ctx->pc = 0x27D7FCu;
label_27d7fc:
    // 0x27d7fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27d7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27d800:
    // 0x27d800: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x27d800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27d804: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27d804u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27d808: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27d808u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27d80c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27d80cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27d810: 0x3e00008  jr          $ra
    ctx->pc = 0x27D810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D810u;
            // 0x27d814: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27D818u;
}
