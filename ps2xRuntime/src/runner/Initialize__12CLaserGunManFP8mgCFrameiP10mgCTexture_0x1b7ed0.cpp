#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__12CLaserGunManFP8mgCFrameiP10mgCTexture
// Address: 0x1b7ed0 - 0x1b7f5c
void Initialize__12CLaserGunManFP8mgCFrameiP10mgCTexture_0x1b7ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__12CLaserGunManFP8mgCFrameiP10mgCTexture_0x1b7ed0");
#endif

    switch (ctx->pc) {
        case 0x1b7f0cu: goto label_1b7f0c;
        case 0x1b7f18u: goto label_1b7f18;
        default: break;
    }

    ctx->pc = 0x1b7ed0u;

    // 0x1b7ed0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1b7ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1b7ed4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1b7ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1b7ed8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1b7ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1b7edc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1b7edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1b7ee0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1b7ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1b7ee4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1b7ee4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7ee8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b7ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b7eec: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1b7eecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7ef0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b7ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b7ef4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1b7ef4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7ef8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b7ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b7efc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1b7efcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7f00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b7f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b7f04: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1b7f04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7f08: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1b7f08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1b7f0c:
    // 0x1b7f0c: 0x275b021  addu        $s6, $s3, $s5
    ctx->pc = 0x1b7f0cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
    // 0x1b7f10: 0xc06df48  jal         func_1B7D20
    ctx->pc = 0x1B7F10u;
    SET_GPR_U32(ctx, 31, 0x1B7F18u);
    ctx->pc = 0x1B7F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7F10u;
            // 0x1b7f14: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7D20u;
    if (runtime->hasFunction(0x1B7D20u)) {
        auto targetFn = runtime->lookupFunction(0x1B7D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7F18u; }
        if (ctx->pc != 0x1B7F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__9CLaserGunFv_0x1b7d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7F18u; }
        if (ctx->pc != 0x1B7F18u) { return; }
    }
    ctx->pc = 0x1B7F18u;
label_1b7f18:
    // 0x1b7f18: 0xaed20128  sw          $s2, 0x128($s6)
    ctx->pc = 0x1b7f18u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 296), GPR_U32(ctx, 18));
    // 0x1b7f1c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1b7f1cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1b7f20: 0xaed1012c  sw          $s1, 0x12C($s6)
    ctx->pc = 0x1b7f20u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 300), GPR_U32(ctx, 17));
    // 0x1b7f24: 0x2a830010  slti        $v1, $s4, 0x10
    ctx->pc = 0x1b7f24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1b7f28: 0x26b50130  addiu       $s5, $s5, 0x130
    ctx->pc = 0x1b7f28u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 304));
    // 0x1b7f2c: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1B7F2Cu;
    {
        const bool branch_taken_0x1b7f2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7F2Cu;
            // 0x1b7f30: 0xaed00124  sw          $s0, 0x124($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 292), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7f2c) {
            ctx->pc = 0x1B7F0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b7f0c;
        }
    }
    ctx->pc = 0x1B7F34u;
    // 0x1b7f34: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1b7f34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b7f38: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1b7f38u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b7f3c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1b7f3cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b7f40: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b7f40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b7f44: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b7f44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b7f48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b7f48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b7f4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b7f4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7f50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b7f50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7f54: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7F54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7F54u;
            // 0x1b7f58: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B7F5Cu;
}
