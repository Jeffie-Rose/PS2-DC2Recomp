#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _TRANS_RESERV_IMG__FP12RS_STACKDATAi
// Address: 0x1e7440 - 0x1e74b4
void ps2__TRANS_RESERV_IMG__FP12RS_STACKDATAi_0x1e7440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__TRANS_RESERV_IMG__FP12RS_STACKDATAi_0x1e7440");
#endif

    switch (ctx->pc) {
        case 0x1e7460u: goto label_1e7460;
        case 0x1e74a4u: goto label_1e74a4;
        default: break;
    }

    ctx->pc = 0x1e7440u;

    // 0x1e7440: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e7440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e7444: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e7444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e7448: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E7448u;
    {
        const bool branch_taken_0x1e7448 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E744Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7448u;
            // 0x1e744c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7448) {
            ctx->pc = 0x1E7458u;
            goto label_1e7458;
        }
    }
    ctx->pc = 0x1E7450u;
    // 0x1e7450: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1E7450u;
    {
        const bool branch_taken_0x1e7450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7450u;
            // 0x1e7454: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7450) {
            ctx->pc = 0x1E74A8u;
            goto label_1e74a8;
        }
    }
    ctx->pc = 0x1E7458u;
label_1e7458:
    // 0x1e7458: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E7458u;
    SET_GPR_U32(ctx, 31, 0x1E7460u);
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7460u; }
        if (ctx->pc != 0x1E7460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7460u; }
        if (ctx->pc != 0x1E7460u) { return; }
    }
    ctx->pc = 0x1E7460u;
label_1e7460:
    // 0x1e7460: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E7460u;
    {
        const bool branch_taken_0x1e7460 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1E7464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7460u;
            // 0x1e7464: 0x28410002  slti        $at, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7460) {
            ctx->pc = 0x1E7470u;
            goto label_1e7470;
        }
    }
    ctx->pc = 0x1E7468u;
    // 0x1e7468: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E7468u;
    {
        const bool branch_taken_0x1e7468 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e7468) {
            ctx->pc = 0x1E7478u;
            goto label_1e7478;
        }
    }
    ctx->pc = 0x1E7470u;
label_1e7470:
    // 0x1e7470: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1E7470u;
    {
        const bool branch_taken_0x1e7470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7470u;
            // 0x1e7474: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7470) {
            ctx->pc = 0x1E74A8u;
            goto label_1e74a8;
        }
    }
    ctx->pc = 0x1E7478u;
label_1e7478:
    // 0x1e7478: 0x8f838e70  lw          $v1, -0x7190($gp)
    ctx->pc = 0x1e7478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e747c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e747cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e7480: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e7480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e7484: 0x8c4512c0  lw          $a1, 0x12C0($v0)
    ctx->pc = 0x1e7484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4800)));
    // 0x1e7488: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E7488u;
    {
        const bool branch_taken_0x1e7488 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e7488) {
            ctx->pc = 0x1E7498u;
            goto label_1e7498;
        }
    }
    ctx->pc = 0x1E7490u;
    // 0x1e7490: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E7490u;
    {
        const bool branch_taken_0x1e7490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7490u;
            // 0x1e7494: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7490) {
            ctx->pc = 0x1E74A8u;
            goto label_1e74a8;
        }
    }
    ctx->pc = 0x1E7498u;
label_1e7498:
    // 0x1e7498: 0x8c4612c8  lw          $a2, 0x12C8($v0)
    ctx->pc = 0x1e7498u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4808)));
    // 0x1e749c: 0xc049c18  jal         func_127060
    ctx->pc = 0x1E749Cu;
    SET_GPR_U32(ctx, 31, 0x1E74A4u);
    ctx->pc = 0x1E74A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E749Cu;
            // 0x1e74a0: 0x8c6402c4  lw          $a0, 0x2C4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 708)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E74A4u; }
        if (ctx->pc != 0x1E74A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E74A4u; }
        if (ctx->pc != 0x1E74A4u) { return; }
    }
    ctx->pc = 0x1E74A4u;
label_1e74a4:
    // 0x1e74a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e74a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e74a8:
    // 0x1e74a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e74a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e74ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1E74ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E74B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E74ACu;
            // 0x1e74b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E74B4u;
}
