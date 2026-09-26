#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__9sndCSeSeqFv
// Address: 0x18b880 - 0x18b914
void Initialize__9sndCSeSeqFv_0x18b880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__9sndCSeSeqFv_0x18b880");
#endif

    switch (ctx->pc) {
        case 0x18b8ccu: goto label_18b8cc;
        case 0x18b8d4u: goto label_18b8d4;
        default: break;
    }

    ctx->pc = 0x18b880u;

    // 0x18b880: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18b880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18b884: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x18b884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x18b888: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x18b888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x18b88c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x18b88cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x18b890: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18b890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18b894: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18b894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18b898: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18b898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18b89c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x18b89cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b8a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18b8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18b8a4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18b8a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b8a8: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x18b8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x18b8ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18b8acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b8b0: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x18b8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x18b8b4: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x18b8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x18b8b8: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x18b8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x18b8bc: 0xac850018  sw          $a1, 0x18($a0)
    ctx->pc = 0x18b8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 5));
    // 0x18b8c0: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x18b8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x18b8c4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18B8C4u;
    {
        const bool branch_taken_0x18b8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B8C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B8C4u;
            // 0x18b8c8: 0xac83002c  sw          $v1, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b8c4) {
            ctx->pc = 0x18B8E4u;
            goto label_18b8e4;
        }
    }
    ctx->pc = 0x18B8CCu;
label_18b8cc:
    // 0x18b8cc: 0xc062d2c  jal         func_18B4B0
    ctx->pc = 0x18B8CCu;
    SET_GPR_U32(ctx, 31, 0x18B8D4u);
    ctx->pc = 0x18B8D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B8CCu;
            // 0x18b8d0: 0x26640030  addiu       $a0, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B4B0u;
    if (runtime->hasFunction(0x18B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x18B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B8D4u; }
        if (ctx->pc != 0x18B8D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__8sndTrackFv_0x18b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B8D4u; }
        if (ctx->pc != 0x18B8D4u) { return; }
    }
    ctx->pc = 0x18B8D4u;
label_18b8d4:
    // 0x18b8d4: 0x26230040  addiu       $v1, $s1, 0x40
    ctx->pc = 0x18b8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x18b8d8: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x18b8d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x18b8dc: 0xa2630036  sb          $v1, 0x36($s3)
    ctx->pc = 0x18b8dcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 54), (uint8_t)GPR_U32(ctx, 3));
    // 0x18b8e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18b8e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_18b8e4:
    // 0x18b8e4: 0x0  nop
    ctx->pc = 0x18b8e4u;
    // NOP
    // 0x18b8e8: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x18b8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x18b8ec: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x18b8ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18b8f0: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x18B8F0u;
    {
        const bool branch_taken_0x18b8f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B8F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B8F0u;
            // 0x18b8f4: 0x2129821  addu        $s3, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b8f0) {
            ctx->pc = 0x18B8CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18b8cc;
        }
    }
    ctx->pc = 0x18B8F8u;
    // 0x18b8f8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x18b8f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18b8fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18b8fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18b900: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18b900u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18b904: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18b904u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18b908: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18b908u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b90c: 0x3e00008  jr          $ra
    ctx->pc = 0x18B90Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B90Cu;
            // 0x18b910: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18B914u;
}
