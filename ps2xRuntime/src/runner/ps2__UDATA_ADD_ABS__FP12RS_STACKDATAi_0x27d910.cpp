#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _UDATA_ADD_ABS__FP12RS_STACKDATAi
// Address: 0x27d910 - 0x27d9a8
void ps2__UDATA_ADD_ABS__FP12RS_STACKDATAi_0x27d910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__UDATA_ADD_ABS__FP12RS_STACKDATAi_0x27d910");
#endif

    switch (ctx->pc) {
        case 0x27d92cu: goto label_27d92c;
        case 0x27d95cu: goto label_27d95c;
        case 0x27d96cu: goto label_27d96c;
        case 0x27d978u: goto label_27d978;
        case 0x27d98cu: goto label_27d98c;
        default: break;
    }

    ctx->pc = 0x27d910u;

    // 0x27d910: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x27d910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x27d914: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x27d914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x27d918: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27d918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x27d91c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27d91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27d920: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27d920u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d924: 0xc064220  jal         func_190880
    ctx->pc = 0x27D924u;
    SET_GPR_U32(ctx, 31, 0x27D92Cu);
    ctx->pc = 0x27D928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D924u;
            // 0x27d928: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D92Cu; }
        if (ctx->pc != 0x27D92Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D92Cu; }
        if (ctx->pc != 0x27D92Cu) { return; }
    }
    ctx->pc = 0x27D92Cu;
label_27d92c:
    // 0x27d92c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27D92Cu;
    {
        const bool branch_taken_0x27d92c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D92Cu;
            // 0x27d930: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d92c) {
            ctx->pc = 0x27D93Cu;
            goto label_27d93c;
        }
    }
    ctx->pc = 0x27D934u;
    // 0x27d934: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x27D934u;
    {
        const bool branch_taken_0x27d934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D934u;
            // 0x27d938: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d934) {
            ctx->pc = 0x27D990u;
            goto label_27d990;
        }
    }
    ctx->pc = 0x27D93Cu;
label_27d93c:
    // 0x27d93c: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x27d93cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
    // 0x27d940: 0x419021  addu        $s2, $v0, $at
    ctx->pc = 0x27d940u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x27d944: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x27D944u;
    {
        const bool branch_taken_0x27d944 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D944u;
            // 0x27d948: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d944) {
            ctx->pc = 0x27D954u;
            goto label_27d954;
        }
    }
    ctx->pc = 0x27D94Cu;
    // 0x27d94c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x27D94Cu;
    {
        const bool branch_taken_0x27d94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D94Cu;
            // 0x27d950: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d94c) {
            ctx->pc = 0x27D990u;
            goto label_27d990;
        }
    }
    ctx->pc = 0x27D954u;
label_27d954:
    // 0x27d954: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27D954u;
    SET_GPR_U32(ctx, 31, 0x27D95Cu);
    ctx->pc = 0x27D958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D954u;
            // 0x27d958: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D95Cu; }
        if (ctx->pc != 0x27D95Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D95Cu; }
        if (ctx->pc != 0x27D95Cu) { return; }
    }
    ctx->pc = 0x27D95Cu;
label_27d95c:
    // 0x27d95c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27d95cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d960: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27d960u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d964: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27D964u;
    SET_GPR_U32(ctx, 31, 0x27D96Cu);
    ctx->pc = 0x27D968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D964u;
            // 0x27d968: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D96Cu; }
        if (ctx->pc != 0x27D96Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D96Cu; }
        if (ctx->pc != 0x27D96Cu) { return; }
    }
    ctx->pc = 0x27D96Cu;
label_27d96c:
    // 0x27d96c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27d96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d970: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27D970u;
    SET_GPR_U32(ctx, 31, 0x27D978u);
    ctx->pc = 0x27D974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D970u;
            // 0x27d974: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D978u; }
        if (ctx->pc != 0x27D978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D978u; }
        if (ctx->pc != 0x27D978u) { return; }
    }
    ctx->pc = 0x27D978u;
label_27d978:
    // 0x27d978: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27d978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d97c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27d97cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d980: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x27d980u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d984: 0xc066e20  jal         func_19B880
    ctx->pc = 0x27D984u;
    SET_GPR_U32(ctx, 31, 0x27D98Cu);
    ctx->pc = 0x27D988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D984u;
            // 0x27d988: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B880u;
    if (runtime->hasFunction(0x19B880u)) {
        auto targetFn = runtime->lookupFunction(0x19B880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D98Cu; }
        if (ctx->pc != 0x27D98Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddAbs__16CUserDataManagerFiii_0x19b880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D98Cu; }
        if (ctx->pc != 0x27D98Cu) { return; }
    }
    ctx->pc = 0x27D98Cu;
label_27d98c:
    // 0x27d98c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27d98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27d990:
    // 0x27d990: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x27d990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27d994: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27d994u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27d998: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27d998u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27d99c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27d99cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27d9a0: 0x3e00008  jr          $ra
    ctx->pc = 0x27D9A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D9A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D9A0u;
            // 0x27d9a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27D9A8u;
}
