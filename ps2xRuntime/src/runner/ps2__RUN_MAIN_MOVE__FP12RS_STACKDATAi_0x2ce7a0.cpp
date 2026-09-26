#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _RUN_MAIN_MOVE__FP12RS_STACKDATAi
// Address: 0x2ce7a0 - 0x2ce7f8
void ps2__RUN_MAIN_MOVE__FP12RS_STACKDATAi_0x2ce7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__RUN_MAIN_MOVE__FP12RS_STACKDATAi_0x2ce7a0");
#endif

    switch (ctx->pc) {
        case 0x2ce7d8u: goto label_2ce7d8;
        case 0x2ce7e8u: goto label_2ce7e8;
        default: break;
    }

    ctx->pc = 0x2ce7a0u;

    // 0x2ce7a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ce7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ce7a4: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2ce7a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2ce7a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ce7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ce7ac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2ce7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ce7b0: 0x8c24d430  lw          $a0, -0x2BD0($at)
    ctx->pc = 0x2ce7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2ce7b4: 0x8c8306a8  lw          $v1, 0x6A8($a0)
    ctx->pc = 0x2ce7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1704)));
    // 0x2ce7b8: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CE7B8u;
    {
        const bool branch_taken_0x2ce7b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ce7b8) {
            ctx->pc = 0x2CE7E0u;
            goto label_2ce7e0;
        }
    }
    ctx->pc = 0x2CE7C0u;
    // 0x2ce7c0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CE7C0u;
    {
        const bool branch_taken_0x2ce7c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce7c0) {
            ctx->pc = 0x2CE7D0u;
            goto label_2ce7d0;
        }
    }
    ctx->pc = 0x2CE7C8u;
    // 0x2ce7c8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2CE7C8u;
    {
        const bool branch_taken_0x2ce7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE7CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE7C8u;
            // 0x2ce7cc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce7c8) {
            ctx->pc = 0x2CE7ECu;
            goto label_2ce7ec;
        }
    }
    ctx->pc = 0x2CE7D0u;
label_2ce7d0:
    // 0x2ce7d0: 0xc05b264  jal         func_16C990
    ctx->pc = 0x2CE7D0u;
    SET_GPR_U32(ctx, 31, 0x2CE7D8u);
    ctx->pc = 0x16C990u;
    if (runtime->hasFunction(0x16C990u)) {
        auto targetFn = runtime->lookupFunction(0x16C990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE7D8u; }
        if (ctx->pc != 0x2CE7D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        HumanMoveIF__12CActionCharaFv_0x16c990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE7D8u; }
        if (ctx->pc != 0x2CE7D8u) { return; }
    }
    ctx->pc = 0x2CE7D8u;
label_2ce7d8:
    // 0x2ce7d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CE7D8u;
    {
        const bool branch_taken_0x2ce7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce7d8) {
            ctx->pc = 0x2CE7E8u;
            goto label_2ce7e8;
        }
    }
    ctx->pc = 0x2CE7E0u;
label_2ce7e0:
    // 0x2ce7e0: 0xc05be8c  jal         func_16FA30
    ctx->pc = 0x2CE7E0u;
    SET_GPR_U32(ctx, 31, 0x2CE7E8u);
    ctx->pc = 0x16FA30u;
    if (runtime->hasFunction(0x16FA30u)) {
        auto targetFn = runtime->lookupFunction(0x16FA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE7E8u; }
        if (ctx->pc != 0x2CE7E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MonsterMoveIF__12CActionCharaFv_0x16fa30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE7E8u; }
        if (ctx->pc != 0x2CE7E8u) { return; }
    }
    ctx->pc = 0x2CE7E8u;
label_2ce7e8:
    // 0x2ce7e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ce7e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ce7ec:
    // 0x2ce7ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ce7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ce7f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE7F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE7F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE7F0u;
            // 0x2ce7f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CE7F8u;
}
