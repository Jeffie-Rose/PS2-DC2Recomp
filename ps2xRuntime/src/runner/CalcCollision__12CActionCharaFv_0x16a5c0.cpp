#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CalcCollision__12CActionCharaFv
// Address: 0x16a5c0 - 0x16a614
void CalcCollision__12CActionCharaFv_0x16a5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CalcCollision__12CActionCharaFv_0x16a5c0");
#endif

    switch (ctx->pc) {
        case 0x16a5d8u: goto label_16a5d8;
        case 0x16a5ecu: goto label_16a5ec;
        default: break;
    }

    ctx->pc = 0x16a5c0u;

    // 0x16a5c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16a5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16a5c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16a5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16a5c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16a5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16a5cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16a5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16a5d0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x16a5d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a5d4: 0x24900c00  addiu       $s0, $a0, 0xC00
    ctx->pc = 0x16a5d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 3072));
label_16a5d8:
    // 0x16a5d8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x16a5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16a5dc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16A5DCu;
    {
        const bool branch_taken_0x16a5dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A5E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A5DCu;
            // 0x16a5e0: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a5dc) {
            ctx->pc = 0x16A5ECu;
            goto label_16a5ec;
        }
    }
    ctx->pc = 0x16A5E4u;
    // 0x16a5e4: 0xc04de0c  jal         func_137830
    ctx->pc = 0x16A5E4u;
    SET_GPR_U32(ctx, 31, 0x16A5ECu);
    ctx->pc = 0x137830u;
    if (runtime->hasFunction(0x137830u)) {
        auto targetFn = runtime->lookupFunction(0x137830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A5ECu; }
        if (ctx->pc != 0x16A5ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWorldPosition0__8mgCFrameFPf_0x137830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A5ECu; }
        if (ctx->pc != 0x16A5ECu) { return; }
    }
    ctx->pc = 0x16A5ECu;
label_16a5ec:
    // 0x16a5ec: 0x0  nop
    ctx->pc = 0x16a5ecu;
    // NOP
    // 0x16a5f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x16a5f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x16a5f4: 0x2a230008  slti        $v1, $s1, 0x8
    ctx->pc = 0x16a5f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x16a5f8: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x16A5F8u;
    {
        const bool branch_taken_0x16a5f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A5FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A5F8u;
            // 0x16a5fc: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a5f8) {
            ctx->pc = 0x16A5D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16a5d8;
        }
    }
    ctx->pc = 0x16A600u;
    // 0x16a600: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16a600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16a604: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16a604u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a608: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16a608u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a60c: 0x3e00008  jr          $ra
    ctx->pc = 0x16A60Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A60Cu;
            // 0x16a610: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16A614u;
}
