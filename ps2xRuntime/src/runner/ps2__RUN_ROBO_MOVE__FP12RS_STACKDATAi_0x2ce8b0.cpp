#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _RUN_ROBO_MOVE__FP12RS_STACKDATAi
// Address: 0x2ce8b0 - 0x2ce93c
void ps2__RUN_ROBO_MOVE__FP12RS_STACKDATAi_0x2ce8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__RUN_ROBO_MOVE__FP12RS_STACKDATAi_0x2ce8b0");
#endif

    switch (ctx->pc) {
        case 0x2ce8c0u: goto label_2ce8c0;
        case 0x2ce8f8u: goto label_2ce8f8;
        case 0x2ce908u: goto label_2ce908;
        case 0x2ce918u: goto label_2ce918;
        case 0x2ce92cu: goto label_2ce92c;
        default: break;
    }

    ctx->pc = 0x2ce8b0u;

    // 0x2ce8b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ce8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ce8b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ce8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ce8b8: 0xc0b378c  jal         func_2CDE30
    ctx->pc = 0x2CE8B8u;
    SET_GPR_U32(ctx, 31, 0x2CE8C0u);
    ctx->pc = 0x2CDE30u;
    if (runtime->hasFunction(0x2CDE30u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE8C0u; }
        if (ctx->pc != 0x2CE8C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2cde30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE8C0u; }
        if (ctx->pc != 0x2CE8C0u) { return; }
    }
    ctx->pc = 0x2CE8C0u;
label_2ce8c0:
    // 0x2ce8c0: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2ce8c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2ce8c4: 0x8c24d430  lw          $a0, -0x2BD0($at)
    ctx->pc = 0x2ce8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2ce8c8: 0x8c8306a8  lw          $v1, 0x6A8($a0)
    ctx->pc = 0x2ce8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1704)));
    // 0x2ce8cc: 0x2c610008  sltiu       $at, $v1, 0x8
    ctx->pc = 0x2ce8ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2ce8d0: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x2CE8D0u;
    {
        const bool branch_taken_0x2ce8d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE8D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE8D0u;
            // 0x2ce8d4: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce8d0) {
            ctx->pc = 0x2CE92Cu;
            goto label_2ce92c;
        }
    }
    ctx->pc = 0x2CE8D8u;
    // 0x2ce8d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ce8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ce8dc: 0x24a50240  addiu       $a1, $a1, 0x240
    ctx->pc = 0x2ce8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 576));
    // 0x2ce8e0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2ce8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ce8e4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2ce8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ce8e8: 0x600008  jr          $v1
    ctx->pc = 0x2CE8E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CE8F0u: goto label_2ce8f0;
            case 0x2CE900u: goto label_2ce900;
            case 0x2CE910u: goto label_2ce910;
            case 0x2CE920u: goto label_2ce920;
            case 0x2CE92Cu: goto label_2ce92c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2CE8F0u;
label_2ce8f0:
    // 0x2ce8f0: 0xc05b760  jal         func_16DD80
    ctx->pc = 0x2CE8F0u;
    SET_GPR_U32(ctx, 31, 0x2CE8F8u);
    ctx->pc = 0x2CE8F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE8F0u;
            // 0x2ce8f4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16DD80u;
    if (runtime->hasFunction(0x16DD80u)) {
        auto targetFn = runtime->lookupFunction(0x16DD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE8F8u; }
        if (ctx->pc != 0x2CE8F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RoboWalkMoveIF__12CActionCharaFi_0x16dd80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE8F8u; }
        if (ctx->pc != 0x2CE8F8u) { return; }
    }
    ctx->pc = 0x2CE8F8u;
label_2ce8f8:
    // 0x2ce8f8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2CE8F8u;
    {
        const bool branch_taken_0x2ce8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE8FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE8F8u;
            // 0x2ce8fc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce8f8) {
            ctx->pc = 0x2CE930u;
            goto label_2ce930;
        }
    }
    ctx->pc = 0x2CE900u;
label_2ce900:
    // 0x2ce900: 0xc05b8a8  jal         func_16E2A0
    ctx->pc = 0x2CE900u;
    SET_GPR_U32(ctx, 31, 0x2CE908u);
    ctx->pc = 0x2CE904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE900u;
            // 0x2ce904: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E2A0u;
    if (runtime->hasFunction(0x16E2A0u)) {
        auto targetFn = runtime->lookupFunction(0x16E2A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE908u; }
        if (ctx->pc != 0x2CE908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RoboTankMoveIF__12CActionCharaFi_0x16e2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE908u; }
        if (ctx->pc != 0x2CE908u) { return; }
    }
    ctx->pc = 0x2CE908u;
label_2ce908:
    // 0x2ce908: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2CE908u;
    {
        const bool branch_taken_0x2ce908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce908) {
            ctx->pc = 0x2CE92Cu;
            goto label_2ce92c;
        }
    }
    ctx->pc = 0x2CE910u;
label_2ce910:
    // 0x2ce910: 0xc05ba7c  jal         func_16E9F0
    ctx->pc = 0x2CE910u;
    SET_GPR_U32(ctx, 31, 0x2CE918u);
    ctx->pc = 0x2CE914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE910u;
            // 0x2ce914: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E9F0u;
    if (runtime->hasFunction(0x16E9F0u)) {
        auto targetFn = runtime->lookupFunction(0x16E9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE918u; }
        if (ctx->pc != 0x2CE918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RoboBikeMoveIF__12CActionCharaFi_0x16e9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE918u; }
        if (ctx->pc != 0x2CE918u) { return; }
    }
    ctx->pc = 0x2CE918u;
label_2ce918:
    // 0x2ce918: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2CE918u;
    {
        const bool branch_taken_0x2ce918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce918) {
            ctx->pc = 0x2CE92Cu;
            goto label_2ce92c;
        }
    }
    ctx->pc = 0x2CE920u;
label_2ce920:
    // 0x2ce920: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2ce920u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce924: 0xc05bccc  jal         func_16F330
    ctx->pc = 0x2CE924u;
    SET_GPR_U32(ctx, 31, 0x2CE92Cu);
    ctx->pc = 0x2CE928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE924u;
            // 0x2ce928: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F330u;
    if (runtime->hasFunction(0x16F330u)) {
        auto targetFn = runtime->lookupFunction(0x16F330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE92Cu; }
        if (ctx->pc != 0x2CE92Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RoboAirMoveIF__12CActionCharaFii_0x16f330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE92Cu; }
        if (ctx->pc != 0x2CE92Cu) { return; }
    }
    ctx->pc = 0x2CE92Cu;
label_2ce92c:
    // 0x2ce92c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ce92cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ce930:
    // 0x2ce930: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ce930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ce934: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE934u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE934u;
            // 0x2ce938: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CE93Cu;
}
