#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__12CSceneCmrSeqFP12_SEN_CMR_SEQi
// Address: 0x2591e0 - 0x25922c
void Initialize__12CSceneCmrSeqFP12_SEN_CMR_SEQi_0x2591e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__12CSceneCmrSeqFP12_SEN_CMR_SEQi_0x2591e0");
#endif

    switch (ctx->pc) {
        case 0x259204u: goto label_259204;
        case 0x259214u: goto label_259214;
        default: break;
    }

    ctx->pc = 0x2591e0u;

    // 0x2591e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2591e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2591e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2591e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2591e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2591e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2591ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2591ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2591f0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2591f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2591f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2591f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2591f8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2591f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2591fc: 0xc096468  jal         func_2591A0
    ctx->pc = 0x2591FCu;
    SET_GPR_U32(ctx, 31, 0x259204u);
    ctx->pc = 0x259200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2591FCu;
            // 0x259200: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2591A0u;
    if (runtime->hasFunction(0x2591A0u)) {
        auto targetFn = runtime->lookupFunction(0x2591A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259204u; }
        if (ctx->pc != 0x259204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZeroInitialize__12CSceneCmrSeqFv_0x2591a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259204u; }
        if (ctx->pc != 0x259204u) { return; }
    }
    ctx->pc = 0x259204u;
label_259204:
    // 0x259204: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x259204u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x259208: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x259208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25920c: 0xc09648c  jal         func_259230
    ctx->pc = 0x25920Cu;
    SET_GPR_U32(ctx, 31, 0x259214u);
    ctx->pc = 0x259210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25920Cu;
            // 0x259210: 0xae500004  sw          $s0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259230u;
    if (runtime->hasFunction(0x259230u)) {
        auto targetFn = runtime->lookupFunction(0x259230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259214u; }
        if (ctx->pc != 0x259214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Clear__12CSceneCmrSeqFv_0x259230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259214u; }
        if (ctx->pc != 0x259214u) { return; }
    }
    ctx->pc = 0x259214u;
label_259214:
    // 0x259214: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x259214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x259218: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x259218u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25921c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25921cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259220: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x259220u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259224: 0x3e00008  jr          $ra
    ctx->pc = 0x259224u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259224u;
            // 0x259228: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25922Cu;
}
