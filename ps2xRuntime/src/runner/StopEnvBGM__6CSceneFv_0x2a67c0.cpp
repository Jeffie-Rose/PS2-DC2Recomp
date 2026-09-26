#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StopEnvBGM__6CSceneFv
// Address: 0x2a67c0 - 0x2a6814
void StopEnvBGM__6CSceneFv_0x2a67c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StopEnvBGM__6CSceneFv_0x2a67c0");
#endif

    switch (ctx->pc) {
        case 0x2a67f4u: goto label_2a67f4;
        default: break;
    }

    ctx->pc = 0x2a67c0u;

    // 0x2a67c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a67c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a67c4: 0x3403a484  ori         $v1, $zero, 0xA484
    ctx->pc = 0x2a67c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)42116);
    // 0x2a67c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a67c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a67cc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2a67ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2a67d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a67d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a67d4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2a67d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a67d8: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x2A67D8u;
    {
        const bool branch_taken_0x2a67d8 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2A67DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A67D8u;
            // 0x2a67dc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a67d8) {
            ctx->pc = 0x2A6804u;
            goto label_2a6804;
        }
    }
    ctx->pc = 0x2A67E0u;
    // 0x2a67e0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a67e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a67e4: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x2a67e4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2a67e8: 0x8c24a040  lw          $a0, -0x5FC0($at)
    ctx->pc = 0x2a67e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294942784)));
    // 0x2a67ec: 0xc063a0c  jal         func_18E830
    ctx->pc = 0x2A67ECu;
    SET_GPR_U32(ctx, 31, 0x2A67F4u);
    ctx->pc = 0x2A67F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A67ECu;
            // 0x2a67f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E830u;
    if (runtime->hasFunction(0x18E830u)) {
        auto targetFn = runtime->lookupFunction(0x18E830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A67F4u; }
        if (ctx->pc != 0x2A67F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSeStop__FUiii_0x18e830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A67F4u; }
        if (ctx->pc != 0x2A67F4u) { return; }
    }
    ctx->pc = 0x2A67F4u;
label_2a67f4:
    // 0x2a67f4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a67f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a67f8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2a67f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a67fc: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x2a67fcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2a6800: 0xac23a484  sw          $v1, -0x5B7C($at)
    ctx->pc = 0x2a6800u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943876), GPR_U32(ctx, 3));
label_2a6804:
    // 0x2a6804: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a6804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a6808: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a6808u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a680c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A680Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A680Cu;
            // 0x2a6810: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A6814u;
}
