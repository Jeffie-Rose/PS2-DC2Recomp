#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SE_LOOP_PLAY__FP12RS_STACKDATAi
// Address: 0x2ce3c0 - 0x2ce468
void ps2__SE_LOOP_PLAY__FP12RS_STACKDATAi_0x2ce3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SE_LOOP_PLAY__FP12RS_STACKDATAi_0x2ce3c0");
#endif

    switch (ctx->pc) {
        case 0x2ce3e8u: goto label_2ce3e8;
        case 0x2ce3f8u: goto label_2ce3f8;
        case 0x2ce404u: goto label_2ce404;
        case 0x2ce450u: goto label_2ce450;
        default: break;
    }

    ctx->pc = 0x2ce3c0u;

    // 0x2ce3c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ce3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ce3c4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2ce3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ce3c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ce3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ce3cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ce3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ce3d0: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CE3D0u;
    {
        const bool branch_taken_0x2ce3d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CE3D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE3D0u;
            // 0x2ce3d4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce3d0) {
            ctx->pc = 0x2CE3E0u;
            goto label_2ce3e0;
        }
    }
    ctx->pc = 0x2CE3D8u;
    // 0x2ce3d8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2CE3D8u;
    {
        const bool branch_taken_0x2ce3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE3DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE3D8u;
            // 0x2ce3dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce3d8) {
            ctx->pc = 0x2CE454u;
            goto label_2ce454;
        }
    }
    ctx->pc = 0x2CE3E0u;
label_2ce3e0:
    // 0x2ce3e0: 0xc0b378c  jal         func_2CDE30
    ctx->pc = 0x2CE3E0u;
    SET_GPR_U32(ctx, 31, 0x2CE3E8u);
    ctx->pc = 0x2CE3E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE3E0u;
            // 0x2ce3e4: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDE30u;
    if (runtime->hasFunction(0x2CDE30u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE3E8u; }
        if (ctx->pc != 0x2CE3E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2cde30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE3E8u; }
        if (ctx->pc != 0x2CE3E8u) { return; }
    }
    ctx->pc = 0x2CE3E8u;
label_2ce3e8:
    // 0x2ce3e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ce3e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce3ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ce3ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce3f0: 0xc0b378c  jal         func_2CDE30
    ctx->pc = 0x2CE3F0u;
    SET_GPR_U32(ctx, 31, 0x2CE3F8u);
    ctx->pc = 0x2CE3F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE3F0u;
            // 0x2ce3f4: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDE30u;
    if (runtime->hasFunction(0x2CDE30u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE3F8u; }
        if (ctx->pc != 0x2CE3F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2cde30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE3F8u; }
        if (ctx->pc != 0x2CE3F8u) { return; }
    }
    ctx->pc = 0x2CE3F8u;
label_2ce3f8:
    // 0x2ce3f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ce3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce3fc: 0xc0b378c  jal         func_2CDE30
    ctx->pc = 0x2CE3FCu;
    SET_GPR_U32(ctx, 31, 0x2CE404u);
    ctx->pc = 0x2CE400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE3FCu;
            // 0x2ce400: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDE30u;
    if (runtime->hasFunction(0x2CDE30u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE404u; }
        if (ctx->pc != 0x2CE404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2cde30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE404u; }
        if (ctx->pc != 0x2CE404u) { return; }
    }
    ctx->pc = 0x2CE404u;
label_2ce404:
    // 0x2ce404: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2ce404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ce408: 0x16050006  bne         $s0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CE408u;
    {
        const bool branch_taken_0x2ce408 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 5));
        ctx->pc = 0x2CE40Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE408u;
            // 0x2ce40c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce408) {
            ctx->pc = 0x2CE424u;
            goto label_2ce424;
        }
    }
    ctx->pc = 0x2CE410u;
    // 0x2ce410: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2ce410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2ce414: 0x8c23d430  lw          $v1, -0x2BD0($at)
    ctx->pc = 0x2ce414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2ce418: 0x8c650588  lw          $a1, 0x588($v1)
    ctx->pc = 0x2ce418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1416)));
    // 0x2ce41c: 0x0  nop
    ctx->pc = 0x2ce41cu;
    // NOP
    // 0x2ce420: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2ce420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2ce424:
    // 0x2ce424: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CE424u;
    {
        const bool branch_taken_0x2ce424 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x2CE428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE424u;
            // 0x2ce428: 0x3c0101f1  lui         $at, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce424) {
            ctx->pc = 0x2CE434u;
            goto label_2ce434;
        }
    }
    ctx->pc = 0x2CE42Cu;
    // 0x2ce42c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2CE42Cu;
    {
        const bool branch_taken_0x2ce42c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE42Cu;
            // 0x2ce430: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce42c) {
            ctx->pc = 0x2CE454u;
            goto label_2ce454;
        }
    }
    ctx->pc = 0x2CE434u;
label_2ce434:
    // 0x2ce434: 0x8c23d430  lw          $v1, -0x2BD0($at)
    ctx->pc = 0x2ce434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2ce438: 0x8c6405a0  lw          $a0, 0x5A0($v1)
    ctx->pc = 0x2ce438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1440)));
    // 0x2ce43c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CE43Cu;
    {
        const bool branch_taken_0x2ce43c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE43Cu;
            // 0x2ce440: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce43c) {
            ctx->pc = 0x2CE450u;
            goto label_2ce450;
        }
    }
    ctx->pc = 0x2CE444u;
    // 0x2ce444: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2ce444u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce448: 0xc0631a8  jal         func_18C6A0
    ctx->pc = 0x2CE448u;
    SET_GPR_U32(ctx, 31, 0x2CE450u);
    ctx->pc = 0x2CE44Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE448u;
            // 0x2ce44c: 0x2408000d  addiu       $t0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18C6A0u;
    if (runtime->hasFunction(0x18C6A0u)) {
        auto targetFn = runtime->lookupFunction(0x18C6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE450u; }
        if (ctx->pc != 0x2CE450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SeLoopPlayStop__11CLoopSeMngrFUiiii_0x18c6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE450u; }
        if (ctx->pc != 0x2CE450u) { return; }
    }
    ctx->pc = 0x2CE450u;
label_2ce450:
    // 0x2ce450: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ce450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ce454:
    // 0x2ce454: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ce454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ce458: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ce458u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ce45c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ce45cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ce460: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE460u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE460u;
            // 0x2ce464: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CE468u;
}
