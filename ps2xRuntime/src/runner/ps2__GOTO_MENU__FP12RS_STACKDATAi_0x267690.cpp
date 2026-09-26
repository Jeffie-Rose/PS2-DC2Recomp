#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GOTO_MENU__FP12RS_STACKDATAi
// Address: 0x267690 - 0x26772c
void ps2__GOTO_MENU__FP12RS_STACKDATAi_0x267690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GOTO_MENU__FP12RS_STACKDATAi_0x267690");
#endif

    switch (ctx->pc) {
        case 0x2676b4u: goto label_2676b4;
        case 0x2676d0u: goto label_2676d0;
        case 0x2676dcu: goto label_2676dc;
        default: break;
    }

    ctx->pc = 0x267690u;

    // 0x267690: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x267690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x267694: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x267694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x267698: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x267698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x26769c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26769cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2676a0: 0x24930008  addiu       $s3, $a0, 0x8
    ctx->pc = 0x2676a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2676a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2676a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2676a8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2676a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2676ac: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2676ACu;
    SET_GPR_U32(ctx, 31, 0x2676B4u);
    ctx->pc = 0x2676B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2676ACu;
            // 0x2676b0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2676B4u; }
        if (ctx->pc != 0x2676B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2676B4u; }
        if (ctx->pc != 0x2676B4u) { return; }
    }
    ctx->pc = 0x2676B4u;
label_2676b4:
    // 0x2676b4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2676b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2676b8: 0xac22d618  sw          $v0, -0x29E8($at)
    ctx->pc = 0x2676b8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956568), GPR_U32(ctx, 2));
    // 0x2676bc: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x2676bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x2676c0: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x2676c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2676c4: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x2676C4u;
    {
        const bool branch_taken_0x2676c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2676C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2676C4u;
            // 0x2676c8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2676c4) {
            ctx->pc = 0x267700u;
            goto label_267700;
        }
    }
    ctx->pc = 0x2676CCu;
    // 0x2676cc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2676ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2676d0:
    // 0x2676d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2676d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2676d4: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2676D4u;
    SET_GPR_U32(ctx, 31, 0x2676DCu);
    ctx->pc = 0x2676D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2676D4u;
            // 0x2676d8: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2676DCu; }
        if (ctx->pc != 0x2676DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2676DCu; }
        if (ctx->pc != 0x2676DCu) { return; }
    }
    ctx->pc = 0x2676DCu;
label_2676dc:
    // 0x2676dc: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x2676dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x2676e0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2676e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2676e4: 0x2463d5f0  addiu       $v1, $v1, -0x2A10
    ctx->pc = 0x2676e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956528));
    // 0x2676e8: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x2676e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2676ec: 0x2643ffff  addiu       $v1, $s2, -0x1
    ctx->pc = 0x2676ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x2676f0: 0xac820058  sw          $v0, 0x58($a0)
    ctx->pc = 0x2676f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 2));
    // 0x2676f4: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x2676f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2676f8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2676F8u;
    {
        const bool branch_taken_0x2676f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2676FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2676F8u;
            // 0x2676fc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2676f8) {
            ctx->pc = 0x2676D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2676d0;
        }
    }
    ctx->pc = 0x267700u;
label_267700:
    // 0x267700: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x267700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x267704: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x267704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x267708: 0xac22e500  sw          $v0, -0x1B00($at)
    ctx->pc = 0x267708u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960384), GPR_U32(ctx, 2));
    // 0x26770c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x26770cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x267710: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x267710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x267714: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x267714u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x267718: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x267718u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26771c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26771cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x267720: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x267720u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x267724: 0x3e00008  jr          $ra
    ctx->pc = 0x267724u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x267728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267724u;
            // 0x267728: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26772Cu;
}
