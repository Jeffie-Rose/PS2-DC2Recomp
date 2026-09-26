#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_TRG_DISTANCE__FP12RS_STACKDATAi
// Address: 0x2cf7b0 - 0x2cf800
void ps2__GET_TRG_DISTANCE__FP12RS_STACKDATAi_0x2cf7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_TRG_DISTANCE__FP12RS_STACKDATAi_0x2cf7b0");
#endif

    switch (ctx->pc) {
        case 0x2cf7e0u: goto label_2cf7e0;
        case 0x2cf7ecu: goto label_2cf7ec;
        default: break;
    }

    ctx->pc = 0x2cf7b0u;

    // 0x2cf7b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cf7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cf7b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cf7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cf7b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cf7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cf7bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cf7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cf7c0: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CF7C0u;
    {
        const bool branch_taken_0x2cf7c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CF7C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF7C0u;
            // 0x2cf7c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf7c0) {
            ctx->pc = 0x2CF7D0u;
            goto label_2cf7d0;
        }
    }
    ctx->pc = 0x2CF7C8u;
    // 0x2cf7c8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2CF7C8u;
    {
        const bool branch_taken_0x2cf7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF7CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF7C8u;
            // 0x2cf7cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf7c8) {
            ctx->pc = 0x2CF7F0u;
            goto label_2cf7f0;
        }
    }
    ctx->pc = 0x2CF7D0u;
label_2cf7d0:
    // 0x2cf7d0: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cf7d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2cf7d4: 0x8c24d430  lw          $a0, -0x2BD0($at)
    ctx->pc = 0x2cf7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2cf7d8: 0xc05af94  jal         func_16BE50
    ctx->pc = 0x2CF7D8u;
    SET_GPR_U32(ctx, 31, 0x2CF7E0u);
    ctx->pc = 0x2CF7DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF7D8u;
            // 0x2cf7dc: 0x8f859da4  lw          $a1, -0x625C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942116)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BE50u;
    if (runtime->hasFunction(0x16BE50u)) {
        auto targetFn = runtime->lookupFunction(0x16BE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF7E0u; }
        if (ctx->pc != 0x2CF7E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTargetDist__12CActionCharaFP6CScene_0x16be50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF7E0u; }
        if (ctx->pc != 0x2CF7E0u) { return; }
    }
    ctx->pc = 0x2CF7E0u;
label_2cf7e0:
    // 0x2cf7e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cf7e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf7e4: 0xc0b37b4  jal         func_2CDED0
    ctx->pc = 0x2CF7E4u;
    SET_GPR_U32(ctx, 31, 0x2CF7ECu);
    ctx->pc = 0x2CF7E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF7E4u;
            // 0x2cf7e8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDED0u;
    if (runtime->hasFunction(0x2CDED0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF7ECu; }
        if (ctx->pc != 0x2CF7ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2cded0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF7ECu; }
        if (ctx->pc != 0x2CF7ECu) { return; }
    }
    ctx->pc = 0x2CF7ECu;
label_2cf7ec:
    // 0x2cf7ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cf7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cf7f0:
    // 0x2cf7f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cf7f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf7f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cf7f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cf7f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF7F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF7FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF7F8u;
            // 0x2cf7fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CF800u;
}
