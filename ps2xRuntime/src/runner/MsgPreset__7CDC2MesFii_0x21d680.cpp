#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MsgPreset__7CDC2MesFii
// Address: 0x21d680 - 0x21d6b4
void MsgPreset__7CDC2MesFii_0x21d680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MsgPreset__7CDC2MesFii_0x21d680");
#endif

    switch (ctx->pc) {
        case 0x21d694u: goto label_21d694;
        default: break;
    }

    ctx->pc = 0x21d680u;

    // 0x21d680: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21d680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21d684: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21d684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21d688: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21d688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21d68c: 0xc0874e8  jal         func_21D3A0
    ctx->pc = 0x21D68Cu;
    SET_GPR_U32(ctx, 31, 0x21D694u);
    ctx->pc = 0x21D690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D68Cu;
            // 0x21d690: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D694u; }
        if (ctx->pc != 0x21D694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D694u; }
        if (ctx->pc != 0x21D694u) { return; }
    }
    ctx->pc = 0x21D694u;
label_21d694:
    // 0x21d694: 0x8f838ad0  lw          $v1, -0x7530($gp)
    ctx->pc = 0x21d694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x21d698: 0x18600002  blez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x21D698u;
    {
        const bool branch_taken_0x21d698 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x21D69Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D698u;
            // 0x21d69c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d698) {
            ctx->pc = 0x21D6A4u;
            goto label_21d6a4;
        }
    }
    ctx->pc = 0x21D6A0u;
    // 0x21d6a0: 0xae031ad0  sw          $v1, 0x1AD0($s0)
    ctx->pc = 0x21d6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6864), GPR_U32(ctx, 3));
label_21d6a4:
    // 0x21d6a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21d6a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21d6a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21d6a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d6ac: 0x3e00008  jr          $ra
    ctx->pc = 0x21D6ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D6B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D6ACu;
            // 0x21d6b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21D6B4u;
}
