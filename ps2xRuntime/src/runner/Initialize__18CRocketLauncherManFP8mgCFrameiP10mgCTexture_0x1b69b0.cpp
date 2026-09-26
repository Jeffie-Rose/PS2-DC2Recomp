#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__18CRocketLauncherManFP8mgCFrameiP10mgCTexture
// Address: 0x1b69b0 - 0x1b6a3c
void Initialize__18CRocketLauncherManFP8mgCFrameiP10mgCTexture_0x1b69b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__18CRocketLauncherManFP8mgCFrameiP10mgCTexture_0x1b69b0");
#endif

    switch (ctx->pc) {
        case 0x1b69ecu: goto label_1b69ec;
        case 0x1b69f8u: goto label_1b69f8;
        default: break;
    }

    ctx->pc = 0x1b69b0u;

    // 0x1b69b0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1b69b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1b69b4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1b69b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1b69b8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1b69b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1b69bc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1b69bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1b69c0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1b69c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1b69c4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1b69c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b69c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b69c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b69cc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1b69ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b69d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b69d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b69d4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1b69d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b69d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b69d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b69dc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1b69dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b69e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b69e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b69e4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1b69e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b69e8: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1b69e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1b69ec:
    // 0x1b69ec: 0x275b021  addu        $s6, $s3, $s5
    ctx->pc = 0x1b69ecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
    // 0x1b69f0: 0xc06da00  jal         func_1B6800
    ctx->pc = 0x1B69F0u;
    SET_GPR_U32(ctx, 31, 0x1B69F8u);
    ctx->pc = 0x1B69F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B69F0u;
            // 0x1b69f4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6800u;
    if (runtime->hasFunction(0x1B6800u)) {
        auto targetFn = runtime->lookupFunction(0x1B6800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B69F8u; }
        if (ctx->pc != 0x1B69F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__15CRocketLauncherFv_0x1b6800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B69F8u; }
        if (ctx->pc != 0x1B69F8u) { return; }
    }
    ctx->pc = 0x1B69F8u;
label_1b69f8:
    // 0x1b69f8: 0xaed2017c  sw          $s2, 0x17C($s6)
    ctx->pc = 0x1b69f8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 380), GPR_U32(ctx, 18));
    // 0x1b69fc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1b69fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1b6a00: 0xaed10180  sw          $s1, 0x180($s6)
    ctx->pc = 0x1b6a00u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 384), GPR_U32(ctx, 17));
    // 0x1b6a04: 0x2a830018  slti        $v1, $s4, 0x18
    ctx->pc = 0x1b6a04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x1b6a08: 0x26b50190  addiu       $s5, $s5, 0x190
    ctx->pc = 0x1b6a08u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 400));
    // 0x1b6a0c: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1B6A0Cu;
    {
        const bool branch_taken_0x1b6a0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6A0Cu;
            // 0x1b6a10: 0xaed00178  sw          $s0, 0x178($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 376), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6a0c) {
            ctx->pc = 0x1B69ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b69ec;
        }
    }
    ctx->pc = 0x1B6A14u;
    // 0x1b6a14: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1b6a14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b6a18: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1b6a18u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b6a1c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1b6a1cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b6a20: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b6a20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b6a24: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b6a24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b6a28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b6a28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b6a2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b6a2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6a30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b6a30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6a34: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6A34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6A34u;
            // 0x1b6a38: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B6A3Cu;
}
