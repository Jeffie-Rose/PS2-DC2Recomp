#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: changeInputVolume__FUi
// Address: 0x29b7d0 - 0x29b818
void changeInputVolume__FUi_0x29b7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("changeInputVolume__FUi_0x29b7d0");
#endif

    switch (ctx->pc) {
        case 0x29b7f4u: goto label_29b7f4;
        case 0x29b808u: goto label_29b808;
        default: break;
    }

    ctx->pc = 0x29b7d0u;

    // 0x29b7d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29b7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29b7d4: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x29b7d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    // 0x29b7d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29b7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29b7dc: 0x24060f81  addiu       $a2, $zero, 0xF81
    ctx->pc = 0x29b7dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3969));
    // 0x29b7e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29b7e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29b7e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29b7e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b7e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29b7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29b7ec: 0xc046454  jal         func_119150
    ctx->pc = 0x29B7ECu;
    SET_GPR_U32(ctx, 31, 0x29B7F4u);
    ctx->pc = 0x29B7F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B7ECu;
            // 0x29b7f0: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119150u;
    if (runtime->hasFunction(0x119150u)) {
        auto targetFn = runtime->lookupFunction(0x119150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B7F4u; }
        if (ctx->pc != 0x29B7F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x119150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B7F4u; }
        if (ctx->pc != 0x29B7F4u) { return; }
    }
    ctx->pc = 0x29B7F4u;
label_29b7f4:
    // 0x29b7f4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x29b7f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b7f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29b7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29b7fc: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x29b7fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    // 0x29b800: 0xc046454  jal         func_119150
    ctx->pc = 0x29B800u;
    SET_GPR_U32(ctx, 31, 0x29B808u);
    ctx->pc = 0x29B804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B800u;
            // 0x29b804: 0x24061081  addiu       $a2, $zero, 0x1081 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4225));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119150u;
    if (runtime->hasFunction(0x119150u)) {
        auto targetFn = runtime->lookupFunction(0x119150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B808u; }
        if (ctx->pc != 0x29B808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x119150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B808u; }
        if (ctx->pc != 0x29B808u) { return; }
    }
    ctx->pc = 0x29B808u;
label_29b808:
    // 0x29b808: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29b808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b80c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29b80cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b810: 0x3e00008  jr          $ra
    ctx->pc = 0x29B810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B810u;
            // 0x29b814: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29B818u;
}
