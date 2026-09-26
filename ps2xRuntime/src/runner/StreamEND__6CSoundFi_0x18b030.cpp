#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StreamEND__6CSoundFi
// Address: 0x18b030 - 0x18b074
void StreamEND__6CSoundFi_0x18b030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StreamEND__6CSoundFi_0x18b030");
#endif

    switch (ctx->pc) {
        case 0x18b04cu: goto label_18b04c;
        case 0x18b058u: goto label_18b058;
        case 0x18b064u: goto label_18b064;
        default: break;
    }

    ctx->pc = 0x18b030u;

    // 0x18b030: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18b030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18b034: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18b034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18b038: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18b038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18b03c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x18b03cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b040: 0x36040060  ori         $a0, $s0, 0x60
    ctx->pc = 0x18b040u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)96);
    // 0x18b044: 0xc0a2b88  jal         func_28AE20
    ctx->pc = 0x18B044u;
    SET_GPR_U32(ctx, 31, 0x18B04Cu);
    ctx->pc = 0x18B048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B044u;
            // 0x18b048: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28AE20u;
    if (runtime->hasFunction(0x28AE20u)) {
        auto targetFn = runtime->lookupFunction(0x28AE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B04Cu; }
        if (ctx->pc != 0x18B04Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ezBgm__Fii_0x28ae20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B04Cu; }
        if (ctx->pc != 0x18B04Cu) { return; }
    }
    ctx->pc = 0x18B04Cu;
label_18b04c:
    // 0x18b04c: 0x36040070  ori         $a0, $s0, 0x70
    ctx->pc = 0x18b04cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)112);
    // 0x18b050: 0xc0a2b88  jal         func_28AE20
    ctx->pc = 0x18B050u;
    SET_GPR_U32(ctx, 31, 0x18B058u);
    ctx->pc = 0x18B054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B050u;
            // 0x18b054: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28AE20u;
    if (runtime->hasFunction(0x28AE20u)) {
        auto targetFn = runtime->lookupFunction(0x28AE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B058u; }
        if (ctx->pc != 0x18B058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ezBgm__Fii_0x28ae20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B058u; }
        if (ctx->pc != 0x18B058u) { return; }
    }
    ctx->pc = 0x18B058u;
label_18b058:
    // 0x18b058: 0x36040010  ori         $a0, $s0, 0x10
    ctx->pc = 0x18b058u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)16);
    // 0x18b05c: 0xc0a2b88  jal         func_28AE20
    ctx->pc = 0x18B05Cu;
    SET_GPR_U32(ctx, 31, 0x18B064u);
    ctx->pc = 0x18B060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B05Cu;
            // 0x18b060: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28AE20u;
    if (runtime->hasFunction(0x28AE20u)) {
        auto targetFn = runtime->lookupFunction(0x28AE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B064u; }
        if (ctx->pc != 0x18B064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ezBgm__Fii_0x28ae20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B064u; }
        if (ctx->pc != 0x18B064u) { return; }
    }
    ctx->pc = 0x18B064u;
label_18b064:
    // 0x18b064: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18b064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18b068: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18b068u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b06c: 0x3e00008  jr          $ra
    ctx->pc = 0x18B06Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B06Cu;
            // 0x18b070: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18B074u;
}
