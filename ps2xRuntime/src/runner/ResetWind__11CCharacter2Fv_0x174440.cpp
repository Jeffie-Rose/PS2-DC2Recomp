#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ResetWind__11CCharacter2Fv
// Address: 0x174440 - 0x1744a0
void ResetWind__11CCharacter2Fv_0x174440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetWind__11CCharacter2Fv_0x174440");
#endif

    switch (ctx->pc) {
        case 0x174464u: goto label_174464;
        case 0x174470u: goto label_174470;
        default: break;
    }

    ctx->pc = 0x174440u;

    // 0x174440: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x174440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x174444: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x174444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x174448: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x174448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17444c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17444cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x174450: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x174450u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174454: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x174454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x174458: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x174458u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17445c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x17445Cu;
    {
        const bool branch_taken_0x17445c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17445Cu;
            // 0x174460: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17445c) {
            ctx->pc = 0x174478u;
            goto label_174478;
        }
    }
    ctx->pc = 0x174464u;
label_174464:
    // 0x174464: 0x8e420130  lw          $v0, 0x130($s2)
    ctx->pc = 0x174464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
    // 0x174468: 0xc05e7a0  jal         func_179E80
    ctx->pc = 0x174468u;
    SET_GPR_U32(ctx, 31, 0x174470u);
    ctx->pc = 0x17446Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174468u;
            // 0x17446c: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x179E80u;
    if (runtime->hasFunction(0x179E80u)) {
        auto targetFn = runtime->lookupFunction(0x179E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174470u; }
        if (ctx->pc != 0x174470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetWind__13CDynamicAnimeFv_0x179e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174470u; }
        if (ctx->pc != 0x174470u) { return; }
    }
    ctx->pc = 0x174470u;
label_174470:
    // 0x174470: 0x26310090  addiu       $s1, $s1, 0x90
    ctx->pc = 0x174470u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x174474: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x174474u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_174478:
    // 0x174478: 0x8e43012c  lw          $v1, 0x12C($s2)
    ctx->pc = 0x174478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 300)));
    // 0x17447c: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x17447cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x174480: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x174480u;
    {
        const bool branch_taken_0x174480 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x174480) {
            ctx->pc = 0x174464u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_174464;
        }
    }
    ctx->pc = 0x174488u;
    // 0x174488: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x174488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17448c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17448cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x174490: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x174490u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174494: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x174494u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174498: 0x3e00008  jr          $ra
    ctx->pc = 0x174498u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17449Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174498u;
            // 0x17449c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1744A0u;
}
