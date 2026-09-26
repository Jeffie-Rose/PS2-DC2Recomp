#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _LOAD_MONSTER_FILE__FP12RS_STACKDATAi
// Address: 0x266310 - 0x2663b4
void ps2__LOAD_MONSTER_FILE__FP12RS_STACKDATAi_0x266310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__LOAD_MONSTER_FILE__FP12RS_STACKDATAi_0x266310");
#endif

    switch (ctx->pc) {
        case 0x26632cu: goto label_26632c;
        case 0x266364u: goto label_266364;
        case 0x266374u: goto label_266374;
        case 0x266380u: goto label_266380;
        case 0x26638cu: goto label_26638c;
        default: break;
    }

    ctx->pc = 0x266310u;

    // 0x266310: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x266310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x266314: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x266314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x266318: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x266318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26631c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26631cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x266320: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x266320u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266324: 0xc064268  jal         func_1909A0
    ctx->pc = 0x266324u;
    SET_GPR_U32(ctx, 31, 0x26632Cu);
    ctx->pc = 0x266328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266324u;
            // 0x266328: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1909A0u;
    if (runtime->hasFunction(0x1909A0u)) {
        auto targetFn = runtime->lookupFunction(0x1909A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26632Cu; }
        if (ctx->pc != 0x26632Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowLoopNo__Fv_0x1909a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26632Cu; }
        if (ctx->pc != 0x26632Cu) { return; }
    }
    ctx->pc = 0x26632Cu;
label_26632c:
    // 0x26632c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x26632cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x266330: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x266330u;
    {
        const bool branch_taken_0x266330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x266334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266330u;
            // 0x266334: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266330) {
            ctx->pc = 0x266340u;
            goto label_266340;
        }
    }
    ctx->pc = 0x266338u;
    // 0x266338: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x266338u;
    {
        const bool branch_taken_0x266338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26633Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266338u;
            // 0x26633c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266338) {
            ctx->pc = 0x2663A4u;
            goto label_2663a4;
        }
    }
    ctx->pc = 0x266340u;
label_266340:
    // 0x266340: 0x1203000a  beq         $s0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x266340u;
    {
        const bool branch_taken_0x266340 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x266344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266340u;
            // 0x266344: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266340) {
            ctx->pc = 0x26636Cu;
            goto label_26636c;
        }
    }
    ctx->pc = 0x266348u;
    // 0x266348: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x266348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26634c: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26634Cu;
    {
        const bool branch_taken_0x26634c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x26634c) {
            ctx->pc = 0x26635Cu;
            goto label_26635c;
        }
    }
    ctx->pc = 0x266354u;
    // 0x266354: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x266354u;
    {
        const bool branch_taken_0x266354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266354u;
            // 0x266358: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266354) {
            ctx->pc = 0x266394u;
            goto label_266394;
        }
    }
    ctx->pc = 0x26635Cu;
label_26635c:
    // 0x26635c: 0xc0a3f50  jal         func_28FD40
    ctx->pc = 0x26635Cu;
    SET_GPR_U32(ctx, 31, 0x266364u);
    ctx->pc = 0x28FD40u;
    if (runtime->hasFunction(0x28FD40u)) {
        auto targetFn = runtime->lookupFunction(0x28FD40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266364u; }
        if (ctx->pc != 0x266364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadMonsterFile__Fv_0x28fd40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266364u; }
        if (ctx->pc != 0x266364u) { return; }
    }
    ctx->pc = 0x266364u;
label_266364:
    // 0x266364: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x266364u;
    {
        const bool branch_taken_0x266364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266364u;
            // 0x266368: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266364) {
            ctx->pc = 0x2663A0u;
            goto label_2663a0;
        }
    }
    ctx->pc = 0x26636Cu;
label_26636c:
    // 0x26636c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26636Cu;
    SET_GPR_U32(ctx, 31, 0x266374u);
    ctx->pc = 0x266370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26636Cu;
            // 0x266370: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266374u; }
        if (ctx->pc != 0x266374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266374u; }
        if (ctx->pc != 0x266374u) { return; }
    }
    ctx->pc = 0x266374u;
label_266374:
    // 0x266374: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x266374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266378: 0xc097e18  jal         func_25F860
    ctx->pc = 0x266378u;
    SET_GPR_U32(ctx, 31, 0x266380u);
    ctx->pc = 0x26637Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266378u;
            // 0x26637c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266380u; }
        if (ctx->pc != 0x266380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266380u; }
        if (ctx->pc != 0x266380u) { return; }
    }
    ctx->pc = 0x266380u;
label_266380:
    // 0x266380: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x266380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266384: 0xc0a3fc8  jal         func_28FF20
    ctx->pc = 0x266384u;
    SET_GPR_U32(ctx, 31, 0x26638Cu);
    ctx->pc = 0x266388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266384u;
            // 0x266388: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28FF20u;
    if (runtime->hasFunction(0x28FF20u)) {
        auto targetFn = runtime->lookupFunction(0x28FF20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26638Cu; }
        if (ctx->pc != 0x26638Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadMonsterFile__Fii_0x28ff20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26638Cu; }
        if (ctx->pc != 0x26638Cu) { return; }
    }
    ctx->pc = 0x26638Cu;
label_26638c:
    // 0x26638c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26638Cu;
    {
        const bool branch_taken_0x26638c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26638c) {
            ctx->pc = 0x26639Cu;
            goto label_26639c;
        }
    }
    ctx->pc = 0x266394u;
label_266394:
    // 0x266394: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x266394u;
    {
        const bool branch_taken_0x266394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266394) {
            ctx->pc = 0x2663A0u;
            goto label_2663a0;
        }
    }
    ctx->pc = 0x26639Cu;
label_26639c:
    // 0x26639c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26639cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2663a0:
    // 0x2663a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2663a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2663a4:
    // 0x2663a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2663a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2663a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2663a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2663ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2663ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2663B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2663ACu;
            // 0x2663b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2663B4u;
}
