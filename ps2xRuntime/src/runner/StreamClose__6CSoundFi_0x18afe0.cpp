#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StreamClose__6CSoundFi
// Address: 0x18afe0 - 0x18b024
void StreamClose__6CSoundFi_0x18afe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StreamClose__6CSoundFi_0x18afe0");
#endif

    switch (ctx->pc) {
        case 0x18affcu: goto label_18affc;
        case 0x18b008u: goto label_18b008;
        case 0x18b014u: goto label_18b014;
        default: break;
    }

    ctx->pc = 0x18afe0u;

    // 0x18afe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18afe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18afe4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18afe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18afe8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18afe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18afec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x18afecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aff0: 0x36040060  ori         $a0, $s0, 0x60
    ctx->pc = 0x18aff0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)96);
    // 0x18aff4: 0xc0a2b88  jal         func_28AE20
    ctx->pc = 0x18AFF4u;
    SET_GPR_U32(ctx, 31, 0x18AFFCu);
    ctx->pc = 0x18AFF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AFF4u;
            // 0x18aff8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28AE20u;
    if (runtime->hasFunction(0x28AE20u)) {
        auto targetFn = runtime->lookupFunction(0x28AE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AFFCu; }
        if (ctx->pc != 0x18AFFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ezBgm__Fii_0x28ae20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AFFCu; }
        if (ctx->pc != 0x18AFFCu) { return; }
    }
    ctx->pc = 0x18AFFCu;
label_18affc:
    // 0x18affc: 0x36040030  ori         $a0, $s0, 0x30
    ctx->pc = 0x18affcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)48);
    // 0x18b000: 0xc0a2b88  jal         func_28AE20
    ctx->pc = 0x18B000u;
    SET_GPR_U32(ctx, 31, 0x18B008u);
    ctx->pc = 0x18B004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B000u;
            // 0x18b004: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28AE20u;
    if (runtime->hasFunction(0x28AE20u)) {
        auto targetFn = runtime->lookupFunction(0x28AE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B008u; }
        if (ctx->pc != 0x18B008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ezBgm__Fii_0x28ae20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B008u; }
        if (ctx->pc != 0x18B008u) { return; }
    }
    ctx->pc = 0x18B008u;
label_18b008:
    // 0x18b008: 0x36040010  ori         $a0, $s0, 0x10
    ctx->pc = 0x18b008u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)16);
    // 0x18b00c: 0xc0a2b88  jal         func_28AE20
    ctx->pc = 0x18B00Cu;
    SET_GPR_U32(ctx, 31, 0x18B014u);
    ctx->pc = 0x18B010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B00Cu;
            // 0x18b010: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28AE20u;
    if (runtime->hasFunction(0x28AE20u)) {
        auto targetFn = runtime->lookupFunction(0x28AE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B014u; }
        if (ctx->pc != 0x18B014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ezBgm__Fii_0x28ae20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B014u; }
        if (ctx->pc != 0x18B014u) { return; }
    }
    ctx->pc = 0x18B014u;
label_18b014:
    // 0x18b014: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18b014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18b018: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18b018u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b01c: 0x3e00008  jr          $ra
    ctx->pc = 0x18B01Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B01Cu;
            // 0x18b020: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18B024u;
}
