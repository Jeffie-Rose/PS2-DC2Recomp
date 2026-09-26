#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Close__12sgCPlayVoiceFv
// Address: 0x304870 - 0x3048a4
void Close__12sgCPlayVoiceFv_0x304870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Close__12sgCPlayVoiceFv_0x304870");
#endif

    switch (ctx->pc) {
        case 0x304890u: goto label_304890;
        default: break;
    }

    ctx->pc = 0x304870u;

    // 0x304870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x304870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x304874: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x304874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x304878: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x304878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30487c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x30487cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x304880: 0x18600004  blez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x304880u;
    {
        const bool branch_taken_0x304880 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x304884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304880u;
            // 0x304884: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304880) {
            ctx->pc = 0x304894u;
            goto label_304894;
        }
    }
    ctx->pc = 0x304888u;
    // 0x304888: 0xc064174  jal         func_1905D0
    ctx->pc = 0x304888u;
    SET_GPR_U32(ctx, 31, 0x304890u);
    ctx->pc = 0x1905D0u;
    if (runtime->hasFunction(0x1905D0u)) {
        auto targetFn = runtime->lookupFunction(0x1905D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304890u; }
        if (ctx->pc != 0x304890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndStreamClose__Fv_0x1905d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304890u; }
        if (ctx->pc != 0x304890u) { return; }
    }
    ctx->pc = 0x304890u;
label_304890:
    // 0x304890: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x304890u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_304894:
    // 0x304894: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x304894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x304898: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x304898u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30489c: 0x3e00008  jr          $ra
    ctx->pc = 0x30489Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3048A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30489Cu;
            // 0x3048a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3048A4u;
}
