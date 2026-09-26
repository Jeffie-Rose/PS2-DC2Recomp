#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StartVoiceSystem__16CRoboVoiceSystemFv
// Address: 0x1b96c0 - 0x1b9704
void StartVoiceSystem__16CRoboVoiceSystemFv_0x1b96c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StartVoiceSystem__16CRoboVoiceSystemFv_0x1b96c0");
#endif

    switch (ctx->pc) {
        case 0x1b96e8u: goto label_1b96e8;
        default: break;
    }

    ctx->pc = 0x1b96c0u;

    // 0x1b96c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b96c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b96c4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1b96c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b96c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b96c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b96cc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b96ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b96d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b96d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b96d4: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x1b96d4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1b96d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b96d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b96dc: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1b96dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x1b96e0: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x1B96E0u;
    SET_GPR_U32(ctx, 31, 0x1B96E8u);
    ctx->pc = 0x1B96E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B96E0u;
            // 0x1b96e4: 0x240400f0  addiu       $a0, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B96E8u; }
        if (ctx->pc != 0x1B96E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B96E8u; }
        if (ctx->pc != 0x1B96E8u) { return; }
    }
    ctx->pc = 0x1B96E8u;
label_1b96e8:
    // 0x1b96e8: 0x2443003c  addiu       $v1, $v0, 0x3C
    ctx->pc = 0x1b96e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x1b96ec: 0xa6030012  sh          $v1, 0x12($s0)
    ctx->pc = 0x1b96ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x1b96f0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1b96f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1b96f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b96f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b96f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b96f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b96fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B96FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B96FCu;
            // 0x1b9700: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B9704u;
}
