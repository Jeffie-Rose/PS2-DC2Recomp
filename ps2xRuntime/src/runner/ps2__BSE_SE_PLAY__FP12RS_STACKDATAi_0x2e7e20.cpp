#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _BSE_SE_PLAY__FP12RS_STACKDATAi
// Address: 0x2e7e20 - 0x2e7e64
void ps2__BSE_SE_PLAY__FP12RS_STACKDATAi_0x2e7e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__BSE_SE_PLAY__FP12RS_STACKDATAi_0x2e7e20");
#endif

    switch (ctx->pc) {
        case 0x2e7e40u: goto label_2e7e40;
        case 0x2e7e50u: goto label_2e7e50;
        default: break;
    }

    ctx->pc = 0x2e7e20u;

    // 0x2e7e20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e7e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e7e24: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2e7e24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2e7e28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e7e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e7e2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e7e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e7e30: 0x8f829ec8  lw          $v0, -0x6138($gp)
    ctx->pc = 0x2e7e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942408)));
    // 0x2e7e34: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x2e7e34u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x2e7e38: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E7E38u;
    SET_GPR_U32(ctx, 31, 0x2E7E40u);
    ctx->pc = 0x2E7E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7E38u;
            // 0x2e7e3c: 0x8c30a498  lw          $s0, -0x5B68($at) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943896)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7E40u; }
        if (ctx->pc != 0x2E7E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7E40u; }
        if (ctx->pc != 0x2E7E40u) { return; }
    }
    ctx->pc = 0x2E7E40u;
label_2e7e40:
    // 0x2e7e40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e7e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7e44: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e7e44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7e48: 0xc063818  jal         func_18E060
    ctx->pc = 0x2E7E48u;
    SET_GPR_U32(ctx, 31, 0x2E7E50u);
    ctx->pc = 0x2E7E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7E48u;
            // 0x2e7e4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7E50u; }
        if (ctx->pc != 0x2E7E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7E50u; }
        if (ctx->pc != 0x2E7E50u) { return; }
    }
    ctx->pc = 0x2E7E50u;
label_2e7e50:
    // 0x2e7e50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e7e50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e7e54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e7e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e7e58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e7e58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e7e5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E7E5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E7E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7E5Cu;
            // 0x2e7e60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E7E64u;
}
