#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetCoord__8CColPrimFP8mgCFramef
// Address: 0x1b9f00 - 0x1b9f44
void SetCoord__8CColPrimFP8mgCFramef_0x1b9f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetCoord__8CColPrimFP8mgCFramef_0x1b9f00");
#endif

    switch (ctx->pc) {
        case 0x1b9f38u: goto label_1b9f38;
        default: break;
    }

    ctx->pc = 0x1b9f00u;

    // 0x1b9f00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b9f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b9f04: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b9f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b9f08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b9f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b9f0c: 0xac850038  sw          $a1, 0x38($a0)
    ctx->pc = 0x1b9f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 5));
    // 0x1b9f10: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x1b9f10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x1b9f14: 0xe48c0084  swc1        $f12, 0x84($a0)
    ctx->pc = 0x1b9f14u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
    // 0x1b9f18: 0xac830030  sw          $v1, 0x30($a0)
    ctx->pc = 0x1b9f18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
    // 0x1b9f1c: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x1b9f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1b9f20: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B9F20u;
    {
        const bool branch_taken_0x1b9f20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9F20u;
            // 0x1b9f24: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9f20) {
            ctx->pc = 0x1B9F38u;
            goto label_1b9f38;
        }
    }
    ctx->pc = 0x1B9F28u;
    // 0x1b9f28: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B9F28u;
    {
        const bool branch_taken_0x1b9f28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9F28u;
            // 0x1b9f2c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9f28) {
            ctx->pc = 0x1B9F38u;
            goto label_1b9f38;
        }
    }
    ctx->pc = 0x1B9F30u;
    // 0x1b9f30: 0xc04de0c  jal         func_137830
    ctx->pc = 0x1B9F30u;
    SET_GPR_U32(ctx, 31, 0x1B9F38u);
    ctx->pc = 0x1B9F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9F30u;
            // 0x1b9f34: 0x24c500b0  addiu       $a1, $a2, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137830u;
    if (runtime->hasFunction(0x137830u)) {
        auto targetFn = runtime->lookupFunction(0x137830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9F38u; }
        if (ctx->pc != 0x1B9F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWorldPosition0__8mgCFrameFPf_0x137830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9F38u; }
        if (ctx->pc != 0x1B9F38u) { return; }
    }
    ctx->pc = 0x1B9F38u;
label_1b9f38:
    // 0x1b9f38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b9f38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9f3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9F3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9F3Cu;
            // 0x1b9f40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B9F44u;
}
