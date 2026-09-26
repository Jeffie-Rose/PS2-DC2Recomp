#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ESM_SET_VECT2__FP12RS_STACKDATAi
// Address: 0x27a890 - 0x27a948
void ps2__ESM_SET_VECT2__FP12RS_STACKDATAi_0x27a890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ESM_SET_VECT2__FP12RS_STACKDATAi_0x27a890");
#endif

    switch (ctx->pc) {
        case 0x27a8d8u: goto label_27a8d8;
        case 0x27a8ecu: goto label_27a8ec;
        case 0x27a8fcu: goto label_27a8fc;
        case 0x27a90cu: goto label_27a90c;
        case 0x27a91cu: goto label_27a91c;
        case 0x27a92cu: goto label_27a92c;
        default: break;
    }

    ctx->pc = 0x27a890u;

    // 0x27a890: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x27a890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x27a894: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x27a894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x27a898: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27a898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27a89c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27a89cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27a8a0: 0x8f8297ec  lw          $v0, -0x6814($gp)
    ctx->pc = 0x27a8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940652)));
    // 0x27a8a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27A8A4u;
    {
        const bool branch_taken_0x27a8a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A8A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A8A4u;
            // 0x27a8a8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a8a4) {
            ctx->pc = 0x27A8B4u;
            goto label_27a8b4;
        }
    }
    ctx->pc = 0x27A8ACu;
    // 0x27a8ac: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x27A8ACu;
    {
        const bool branch_taken_0x27a8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A8B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A8ACu;
            // 0x27a8b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a8ac) {
            ctx->pc = 0x27A934u;
            goto label_27a934;
        }
    }
    ctx->pc = 0x27A8B4u;
label_27a8b4:
    // 0x27a8b4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x27a8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27a8b8: 0x10a2000e  beq         $a1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x27A8B8u;
    {
        const bool branch_taken_0x27a8b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x27A8BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A8B8u;
            // 0x27a8bc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a8b8) {
            ctx->pc = 0x27A8F4u;
            goto label_27a8f4;
        }
    }
    ctx->pc = 0x27A8C0u;
    // 0x27a8c0: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27A8C0u;
    {
        const bool branch_taken_0x27a8c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x27A8C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A8C0u;
            // 0x27a8c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a8c0) {
            ctx->pc = 0x27A8D0u;
            goto label_27a8d0;
        }
    }
    ctx->pc = 0x27A8C8u;
    // 0x27a8c8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x27A8C8u;
    {
        const bool branch_taken_0x27a8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A8CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A8C8u;
            // 0x27a8cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a8c8) {
            ctx->pc = 0x27A934u;
            goto label_27a934;
        }
    }
    ctx->pc = 0x27A8D0u;
label_27a8d0:
    // 0x27a8d0: 0xc097e34  jal         func_25F8D0
    ctx->pc = 0x27A8D0u;
    SET_GPR_U32(ctx, 31, 0x27A8D8u);
    ctx->pc = 0x27A8D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A8D0u;
            // 0x27a8d4: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A8D8u; }
        if (ctx->pc != 0x27A8D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A8D8u; }
        if (ctx->pc != 0x27A8D8u) { return; }
    }
    ctx->pc = 0x27A8D8u;
label_27a8d8:
    // 0x27a8d8: 0x8f8497ec  lw          $a0, -0x6814($gp)
    ctx->pc = 0x27a8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940652)));
    // 0x27a8dc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x27a8dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27a8e0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x27a8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x27a8e4: 0xc0b88d8  jal         func_2E2360
    ctx->pc = 0x27A8E4u;
    SET_GPR_U32(ctx, 31, 0x27A8ECu);
    ctx->pc = 0x27A8E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A8E4u;
            // 0x27a8e8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2360u;
    if (runtime->hasFunction(0x2E2360u)) {
        auto targetFn = runtime->lookupFunction(0x2E2360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A8ECu; }
        if (ctx->pc != 0x27A8ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptVect2__16CEffectScriptManFPfii_0x2e2360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A8ECu; }
        if (ctx->pc != 0x27A8ECu) { return; }
    }
    ctx->pc = 0x27A8ECu;
label_27a8ec:
    // 0x27a8ec: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x27A8ECu;
    {
        const bool branch_taken_0x27a8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a8ec) {
            ctx->pc = 0x27A934u;
            goto label_27a934;
        }
    }
    ctx->pc = 0x27A8F4u;
label_27a8f4:
    // 0x27a8f4: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27A8F4u;
    SET_GPR_U32(ctx, 31, 0x27A8FCu);
    ctx->pc = 0x27A8F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A8F4u;
            // 0x27a8f8: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A8FCu; }
        if (ctx->pc != 0x27A8FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A8FCu; }
        if (ctx->pc != 0x27A8FCu) { return; }
    }
    ctx->pc = 0x27A8FCu;
label_27a8fc:
    // 0x27a8fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27a8fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a900: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27a900u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a904: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27A904u;
    SET_GPR_U32(ctx, 31, 0x27A90Cu);
    ctx->pc = 0x27A908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A904u;
            // 0x27a908: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A90Cu; }
        if (ctx->pc != 0x27A90Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A90Cu; }
        if (ctx->pc != 0x27A90Cu) { return; }
    }
    ctx->pc = 0x27A90Cu;
label_27a90c:
    // 0x27a90c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x27a90cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a910: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27a910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a914: 0xc097e34  jal         func_25F8D0
    ctx->pc = 0x27A914u;
    SET_GPR_U32(ctx, 31, 0x27A91Cu);
    ctx->pc = 0x27A918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A914u;
            // 0x27a918: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A91Cu; }
        if (ctx->pc != 0x27A91Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A91Cu; }
        if (ctx->pc != 0x27A91Cu) { return; }
    }
    ctx->pc = 0x27A91Cu;
label_27a91c:
    // 0x27a91c: 0x8f8497ec  lw          $a0, -0x6814($gp)
    ctx->pc = 0x27a91cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940652)));
    // 0x27a920: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27a920u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a924: 0xc0b88d8  jal         func_2E2360
    ctx->pc = 0x27A924u;
    SET_GPR_U32(ctx, 31, 0x27A92Cu);
    ctx->pc = 0x27A928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A924u;
            // 0x27a928: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2360u;
    if (runtime->hasFunction(0x2E2360u)) {
        auto targetFn = runtime->lookupFunction(0x2E2360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A92Cu; }
        if (ctx->pc != 0x27A92Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptVect2__16CEffectScriptManFPfii_0x2e2360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A92Cu; }
        if (ctx->pc != 0x27A92Cu) { return; }
    }
    ctx->pc = 0x27A92Cu;
label_27a92c:
    // 0x27a92c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x27A92Cu;
    {
        const bool branch_taken_0x27a92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a92c) {
            ctx->pc = 0x27A934u;
            goto label_27a934;
        }
    }
    ctx->pc = 0x27A934u;
label_27a934:
    // 0x27a934: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x27a934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27a938: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27a938u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27a93c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27a93cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27a940: 0x3e00008  jr          $ra
    ctx->pc = 0x27A940u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A940u;
            // 0x27a944: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27A948u;
}
