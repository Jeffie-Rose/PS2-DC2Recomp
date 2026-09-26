#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _PARTS_NAME_STRCMP__FP12RS_STACKDATAi
// Address: 0x27b670 - 0x27b720
void ps2__PARTS_NAME_STRCMP__FP12RS_STACKDATAi_0x27b670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__PARTS_NAME_STRCMP__FP12RS_STACKDATAi_0x27b670");
#endif

    switch (ctx->pc) {
        case 0x27b69cu: goto label_27b69c;
        case 0x27b6acu: goto label_27b6ac;
        case 0x27b6bcu: goto label_27b6bc;
        case 0x27b6d0u: goto label_27b6d0;
        case 0x27b6e4u: goto label_27b6e4;
        case 0x27b6f0u: goto label_27b6f0;
        case 0x27b704u: goto label_27b704;
        default: break;
    }

    ctx->pc = 0x27b670u;

    // 0x27b670: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x27b670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x27b674: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x27b674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27b678: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x27b678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x27b67c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27b67cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x27b680: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27b680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27b684: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27B684u;
    {
        const bool branch_taken_0x27b684 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x27B688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B684u;
            // 0x27b688: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b684) {
            ctx->pc = 0x27B694u;
            goto label_27b694;
        }
    }
    ctx->pc = 0x27B68Cu;
    // 0x27b68c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x27B68Cu;
    {
        const bool branch_taken_0x27b68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B68Cu;
            // 0x27b690: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b68c) {
            ctx->pc = 0x27B708u;
            goto label_27b708;
        }
    }
    ctx->pc = 0x27B694u;
label_27b694:
    // 0x27b694: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27B694u;
    SET_GPR_U32(ctx, 31, 0x27B69Cu);
    ctx->pc = 0x27B698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B694u;
            // 0x27b698: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B69Cu; }
        if (ctx->pc != 0x27B69Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B69Cu; }
        if (ctx->pc != 0x27B69Cu) { return; }
    }
    ctx->pc = 0x27B69Cu;
label_27b69c:
    // 0x27b69c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27b69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b6a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27b6a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b6a4: 0xc097e48  jal         func_25F920
    ctx->pc = 0x27B6A4u;
    SET_GPR_U32(ctx, 31, 0x27B6ACu);
    ctx->pc = 0x27B6A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B6A4u;
            // 0x27b6a8: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B6ACu; }
        if (ctx->pc != 0x27B6ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B6ACu; }
        if (ctx->pc != 0x27B6ACu) { return; }
    }
    ctx->pc = 0x27B6ACu;
label_27b6ac:
    // 0x27b6ac: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x27b6acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x27b6b0: 0x8c852e5c  lw          $a1, 0x2E5C($a0)
    ctx->pc = 0x27b6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
    // 0x27b6b4: 0xc0a0f58  jal         func_283D60
    ctx->pc = 0x27B6B4u;
    SET_GPR_U32(ctx, 31, 0x27B6BCu);
    ctx->pc = 0x27B6B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B6B4u;
            // 0x27b6b8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B6BCu; }
        if (ctx->pc != 0x27B6BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B6BCu; }
        if (ctx->pc != 0x27B6BCu) { return; }
    }
    ctx->pc = 0x27B6BCu;
label_27b6bc:
    // 0x27b6bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27b6bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b6c0: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x27B6C0u;
    {
        const bool branch_taken_0x27b6c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B6C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B6C0u;
            // 0x27b6c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b6c0) {
            ctx->pc = 0x27B6F8u;
            goto label_27b6f8;
        }
    }
    ctx->pc = 0x27B6C8u;
    // 0x27b6c8: 0xc057530  jal         func_15D4C0
    ctx->pc = 0x27B6C8u;
    SET_GPR_U32(ctx, 31, 0x27B6D0u);
    ctx->pc = 0x15D4C0u;
    if (runtime->hasFunction(0x15D4C0u)) {
        auto targetFn = runtime->lookupFunction(0x15D4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B6D0u; }
        if (ctx->pc != 0x27B6D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlaceParts__4CMapFi_0x15d4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B6D0u; }
        if (ctx->pc != 0x27B6D0u) { return; }
    }
    ctx->pc = 0x27B6D0u;
label_27b6d0:
    // 0x27b6d0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x27B6D0u;
    {
        const bool branch_taken_0x27b6d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B6D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B6D0u;
            // 0x27b6d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b6d0) {
            ctx->pc = 0x27B6FCu;
            goto label_27b6fc;
        }
    }
    ctx->pc = 0x27B6D8u;
    // 0x27b6d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27b6d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b6dc: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x27B6DCu;
    SET_GPR_U32(ctx, 31, 0x27B6E4u);
    ctx->pc = 0x27B6E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B6DCu;
            // 0x27b6e0: 0x24440090  addiu       $a0, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B6E4u; }
        if (ctx->pc != 0x27B6E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B6E4u; }
        if (ctx->pc != 0x27B6E4u) { return; }
    }
    ctx->pc = 0x27B6E4u;
label_27b6e4:
    // 0x27b6e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27b6e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b6e8: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x27B6E8u;
    SET_GPR_U32(ctx, 31, 0x27B6F0u);
    ctx->pc = 0x27B6ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B6E8u;
            // 0x27b6ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B6F0u; }
        if (ctx->pc != 0x27B6F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B6F0u; }
        if (ctx->pc != 0x27B6F0u) { return; }
    }
    ctx->pc = 0x27B6F0u;
label_27b6f0:
    // 0x27b6f0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x27B6F0u;
    {
        const bool branch_taken_0x27b6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B6F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B6F0u;
            // 0x27b6f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b6f0) {
            ctx->pc = 0x27B708u;
            goto label_27b708;
        }
    }
    ctx->pc = 0x27B6F8u;
label_27b6f8:
    // 0x27b6f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27b6f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27b6fc:
    // 0x27b6fc: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x27B6FCu;
    SET_GPR_U32(ctx, 31, 0x27B704u);
    ctx->pc = 0x27B700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B6FCu;
            // 0x27b700: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B704u; }
        if (ctx->pc != 0x27B704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B704u; }
        if (ctx->pc != 0x27B704u) { return; }
    }
    ctx->pc = 0x27B704u;
label_27b704:
    // 0x27b704: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27b704u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27b708:
    // 0x27b708: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x27b708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27b70c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27b70cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27b710: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27b710u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27b714: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27b714u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27b718: 0x3e00008  jr          $ra
    ctx->pc = 0x27B718u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B71Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B718u;
            // 0x27b71c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27B720u;
}
