#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StreamGetState__6CSoundFi
// Address: 0x18b0b0 - 0x18b0d8
void StreamGetState__6CSoundFi_0x18b0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StreamGetState__6CSoundFi_0x18b0b0");
#endif

    switch (ctx->pc) {
        case 0x18b0c4u: goto label_18b0c4;
        default: break;
    }

    ctx->pc = 0x18b0b0u;

    // 0x18b0b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18b0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18b0b4: 0x34a480b0  ori         $a0, $a1, 0x80B0
    ctx->pc = 0x18b0b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32944);
    // 0x18b0b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18b0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18b0bc: 0xc0a2b88  jal         func_28AE20
    ctx->pc = 0x18B0BCu;
    SET_GPR_U32(ctx, 31, 0x18B0C4u);
    ctx->pc = 0x18B0C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B0BCu;
            // 0x18b0c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28AE20u;
    if (runtime->hasFunction(0x28AE20u)) {
        auto targetFn = runtime->lookupFunction(0x28AE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B0C4u; }
        if (ctx->pc != 0x18B0C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ezBgm__Fii_0x28ae20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B0C4u; }
        if (ctx->pc != 0x18B0C4u) { return; }
    }
    ctx->pc = 0x18B0C4u;
label_18b0c4:
    // 0x18b0c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18b0c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b0c8: 0x2403f000  addiu       $v1, $zero, -0x1000
    ctx->pc = 0x18b0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x18b0cc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x18b0ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x18b0d0: 0x3e00008  jr          $ra
    ctx->pc = 0x18B0D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B0D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B0D0u;
            // 0x18b0d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18B0D8u;
}
