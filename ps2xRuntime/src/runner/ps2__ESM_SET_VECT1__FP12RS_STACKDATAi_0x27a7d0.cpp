#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ESM_SET_VECT1__FP12RS_STACKDATAi
// Address: 0x27a7d0 - 0x27a888
void ps2__ESM_SET_VECT1__FP12RS_STACKDATAi_0x27a7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ESM_SET_VECT1__FP12RS_STACKDATAi_0x27a7d0");
#endif

    switch (ctx->pc) {
        case 0x27a818u: goto label_27a818;
        case 0x27a82cu: goto label_27a82c;
        case 0x27a83cu: goto label_27a83c;
        case 0x27a84cu: goto label_27a84c;
        case 0x27a85cu: goto label_27a85c;
        case 0x27a86cu: goto label_27a86c;
        default: break;
    }

    ctx->pc = 0x27a7d0u;

    // 0x27a7d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x27a7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x27a7d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x27a7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x27a7d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27a7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27a7dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27a7dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27a7e0: 0x8f8297ec  lw          $v0, -0x6814($gp)
    ctx->pc = 0x27a7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940652)));
    // 0x27a7e4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27A7E4u;
    {
        const bool branch_taken_0x27a7e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A7E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A7E4u;
            // 0x27a7e8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a7e4) {
            ctx->pc = 0x27A7F4u;
            goto label_27a7f4;
        }
    }
    ctx->pc = 0x27A7ECu;
    // 0x27a7ec: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x27A7ECu;
    {
        const bool branch_taken_0x27a7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A7F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A7ECu;
            // 0x27a7f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a7ec) {
            ctx->pc = 0x27A874u;
            goto label_27a874;
        }
    }
    ctx->pc = 0x27A7F4u;
label_27a7f4:
    // 0x27a7f4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x27a7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27a7f8: 0x10a2000e  beq         $a1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x27A7F8u;
    {
        const bool branch_taken_0x27a7f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x27A7FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A7F8u;
            // 0x27a7fc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a7f8) {
            ctx->pc = 0x27A834u;
            goto label_27a834;
        }
    }
    ctx->pc = 0x27A800u;
    // 0x27a800: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27A800u;
    {
        const bool branch_taken_0x27a800 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x27A804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A800u;
            // 0x27a804: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a800) {
            ctx->pc = 0x27A810u;
            goto label_27a810;
        }
    }
    ctx->pc = 0x27A808u;
    // 0x27a808: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x27A808u;
    {
        const bool branch_taken_0x27a808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A80Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A808u;
            // 0x27a80c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a808) {
            ctx->pc = 0x27A874u;
            goto label_27a874;
        }
    }
    ctx->pc = 0x27A810u;
label_27a810:
    // 0x27a810: 0xc097e34  jal         func_25F8D0
    ctx->pc = 0x27A810u;
    SET_GPR_U32(ctx, 31, 0x27A818u);
    ctx->pc = 0x27A814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A810u;
            // 0x27a814: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A818u; }
        if (ctx->pc != 0x27A818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A818u; }
        if (ctx->pc != 0x27A818u) { return; }
    }
    ctx->pc = 0x27A818u;
label_27a818:
    // 0x27a818: 0x8f8497ec  lw          $a0, -0x6814($gp)
    ctx->pc = 0x27a818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940652)));
    // 0x27a81c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x27a81cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27a820: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x27a820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x27a824: 0xc0b8894  jal         func_2E2250
    ctx->pc = 0x27A824u;
    SET_GPR_U32(ctx, 31, 0x27A82Cu);
    ctx->pc = 0x27A828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A824u;
            // 0x27a828: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2250u;
    if (runtime->hasFunction(0x2E2250u)) {
        auto targetFn = runtime->lookupFunction(0x2E2250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A82Cu; }
        if (ctx->pc != 0x27A82Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptVect1__16CEffectScriptManFPfii_0x2e2250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A82Cu; }
        if (ctx->pc != 0x27A82Cu) { return; }
    }
    ctx->pc = 0x27A82Cu;
label_27a82c:
    // 0x27a82c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x27A82Cu;
    {
        const bool branch_taken_0x27a82c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a82c) {
            ctx->pc = 0x27A874u;
            goto label_27a874;
        }
    }
    ctx->pc = 0x27A834u;
label_27a834:
    // 0x27a834: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27A834u;
    SET_GPR_U32(ctx, 31, 0x27A83Cu);
    ctx->pc = 0x27A838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A834u;
            // 0x27a838: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A83Cu; }
        if (ctx->pc != 0x27A83Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A83Cu; }
        if (ctx->pc != 0x27A83Cu) { return; }
    }
    ctx->pc = 0x27A83Cu;
label_27a83c:
    // 0x27a83c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27a83cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a840: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27a840u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a844: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27A844u;
    SET_GPR_U32(ctx, 31, 0x27A84Cu);
    ctx->pc = 0x27A848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A844u;
            // 0x27a848: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A84Cu; }
        if (ctx->pc != 0x27A84Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A84Cu; }
        if (ctx->pc != 0x27A84Cu) { return; }
    }
    ctx->pc = 0x27A84Cu;
label_27a84c:
    // 0x27a84c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x27a84cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a850: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27a850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a854: 0xc097e34  jal         func_25F8D0
    ctx->pc = 0x27A854u;
    SET_GPR_U32(ctx, 31, 0x27A85Cu);
    ctx->pc = 0x27A858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A854u;
            // 0x27a858: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A85Cu; }
        if (ctx->pc != 0x27A85Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A85Cu; }
        if (ctx->pc != 0x27A85Cu) { return; }
    }
    ctx->pc = 0x27A85Cu;
label_27a85c:
    // 0x27a85c: 0x8f8497ec  lw          $a0, -0x6814($gp)
    ctx->pc = 0x27a85cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940652)));
    // 0x27a860: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27a860u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a864: 0xc0b8894  jal         func_2E2250
    ctx->pc = 0x27A864u;
    SET_GPR_U32(ctx, 31, 0x27A86Cu);
    ctx->pc = 0x27A868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A864u;
            // 0x27a868: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2250u;
    if (runtime->hasFunction(0x2E2250u)) {
        auto targetFn = runtime->lookupFunction(0x2E2250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A86Cu; }
        if (ctx->pc != 0x27A86Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptVect1__16CEffectScriptManFPfii_0x2e2250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A86Cu; }
        if (ctx->pc != 0x27A86Cu) { return; }
    }
    ctx->pc = 0x27A86Cu;
label_27a86c:
    // 0x27a86c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x27A86Cu;
    {
        const bool branch_taken_0x27a86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a86c) {
            ctx->pc = 0x27A874u;
            goto label_27a874;
        }
    }
    ctx->pc = 0x27A874u;
label_27a874:
    // 0x27a874: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x27a874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27a878: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27a878u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27a87c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27a87cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27a880: 0x3e00008  jr          $ra
    ctx->pc = 0x27A880u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A880u;
            // 0x27a884: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27A888u;
}
