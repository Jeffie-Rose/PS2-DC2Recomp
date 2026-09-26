#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StopBGM__6CSceneFi
// Address: 0x2a6280 - 0x2a62d8
void StopBGM__6CSceneFi_0x2a6280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StopBGM__6CSceneFi_0x2a6280");
#endif

    switch (ctx->pc) {
        case 0x2a6298u: goto label_2a6298;
        case 0x2a62acu: goto label_2a62ac;
        case 0x2a62b4u: goto label_2a62b4;
        default: break;
    }

    ctx->pc = 0x2a6280u;

    // 0x2a6280: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a6280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a6284: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a6284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a6288: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a6288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a628c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a628cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6290: 0xc0a9838  jal         func_2A60E0
    ctx->pc = 0x2A6290u;
    SET_GPR_U32(ctx, 31, 0x2A6298u);
    ctx->pc = 0x2A6294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6290u;
            // 0x2a6294: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A60E0u;
    if (runtime->hasFunction(0x2A60E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A60E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6298u; }
        if (ctx->pc != 0x2A6298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveBgmInfo__6CSceneFv_0x2a60e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6298u; }
        if (ctx->pc != 0x2A6298u) { return; }
    }
    ctx->pc = 0x2A6298u;
label_2a6298:
    // 0x2a6298: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2a6298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2a629c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a629cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a62a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a62a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a62a4: 0xc063a0c  jal         func_18E830
    ctx->pc = 0x2A62A4u;
    SET_GPR_U32(ctx, 31, 0x2A62ACu);
    ctx->pc = 0x2A62A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A62A4u;
            // 0x2a62a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E830u;
    if (runtime->hasFunction(0x18E830u)) {
        auto targetFn = runtime->lookupFunction(0x18E830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A62ACu; }
        if (ctx->pc != 0x2A62ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSeStop__FUiii_0x18e830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A62ACu; }
        if (ctx->pc != 0x2A62ACu) { return; }
    }
    ctx->pc = 0x2A62ACu;
label_2a62ac:
    // 0x2a62ac: 0xc0633f8  jal         func_18CFE0
    ctx->pc = 0x2A62ACu;
    SET_GPR_U32(ctx, 31, 0x2A62B4u);
    ctx->pc = 0x2A62B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A62ACu;
            // 0x2a62b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CFE0u;
    if (runtime->hasFunction(0x18CFE0u)) {
        auto targetFn = runtime->lookupFunction(0x18CFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A62B4u; }
        if (ctx->pc != 0x2A62B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndStopVoice__Fi_0x18cfe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A62B4u; }
        if (ctx->pc != 0x2A62B4u) { return; }
    }
    ctx->pc = 0x2A62B4u;
label_2a62b4:
    // 0x2a62b4: 0xae110020  sw          $s1, 0x20($s0)
    ctx->pc = 0x2a62b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 17));
    // 0x2a62b8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2a62b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2a62bc: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x2a62bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x2a62c0: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x2a62c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x2a62c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a62c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a62c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a62c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a62cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a62ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a62d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A62D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A62D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A62D0u;
            // 0x2a62d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A62D8u;
}
