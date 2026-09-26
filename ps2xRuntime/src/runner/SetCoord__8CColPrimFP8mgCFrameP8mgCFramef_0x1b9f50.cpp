#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetCoord__8CColPrimFP8mgCFrameP8mgCFramef
// Address: 0x1b9f50 - 0x1b9f94
void SetCoord__8CColPrimFP8mgCFrameP8mgCFramef_0x1b9f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetCoord__8CColPrimFP8mgCFrameP8mgCFramef_0x1b9f50");
#endif

    switch (ctx->pc) {
        case 0x1b9f88u: goto label_1b9f88;
        default: break;
    }

    ctx->pc = 0x1b9f50u;

    // 0x1b9f50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b9f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b9f54: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b9f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b9f58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b9f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b9f5c: 0xac850038  sw          $a1, 0x38($a0)
    ctx->pc = 0x1b9f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 5));
    // 0x1b9f60: 0xac86003c  sw          $a2, 0x3C($a0)
    ctx->pc = 0x1b9f60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 6));
    // 0x1b9f64: 0xe48c0084  swc1        $f12, 0x84($a0)
    ctx->pc = 0x1b9f64u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
    // 0x1b9f68: 0xac830030  sw          $v1, 0x30($a0)
    ctx->pc = 0x1b9f68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
    // 0x1b9f6c: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x1b9f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1b9f70: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B9F70u;
    {
        const bool branch_taken_0x1b9f70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9F70u;
            // 0x1b9f74: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9f70) {
            ctx->pc = 0x1B9F88u;
            goto label_1b9f88;
        }
    }
    ctx->pc = 0x1B9F78u;
    // 0x1b9f78: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B9F78u;
    {
        const bool branch_taken_0x1b9f78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9F78u;
            // 0x1b9f7c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9f78) {
            ctx->pc = 0x1B9F88u;
            goto label_1b9f88;
        }
    }
    ctx->pc = 0x1B9F80u;
    // 0x1b9f80: 0xc04de0c  jal         func_137830
    ctx->pc = 0x1B9F80u;
    SET_GPR_U32(ctx, 31, 0x1B9F88u);
    ctx->pc = 0x1B9F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9F80u;
            // 0x1b9f84: 0x24c500b0  addiu       $a1, $a2, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137830u;
    if (runtime->hasFunction(0x137830u)) {
        auto targetFn = runtime->lookupFunction(0x137830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9F88u; }
        if (ctx->pc != 0x1B9F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWorldPosition0__8mgCFrameFPf_0x137830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9F88u; }
        if (ctx->pc != 0x1B9F88u) { return; }
    }
    ctx->pc = 0x1B9F88u;
label_1b9f88:
    // 0x1b9f88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b9f88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9F8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9F8Cu;
            // 0x1b9f90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B9F94u;
}
