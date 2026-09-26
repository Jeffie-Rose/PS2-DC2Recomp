#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _IMG_SET_NAME__FP12RS_STACKDATAi
// Address: 0x26eb10 - 0x26eb50
void ps2__IMG_SET_NAME__FP12RS_STACKDATAi_0x26eb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__IMG_SET_NAME__FP12RS_STACKDATAi_0x26eb10");
#endif

    switch (ctx->pc) {
        case 0x26eb24u: goto label_26eb24;
        case 0x26eb30u: goto label_26eb30;
        case 0x26eb40u: goto label_26eb40;
        default: break;
    }

    ctx->pc = 0x26eb10u;

    // 0x26eb10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26eb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26eb14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26eb14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26eb18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26eb18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26eb1c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26EB1Cu;
    SET_GPR_U32(ctx, 31, 0x26EB24u);
    ctx->pc = 0x26EB20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26EB1Cu;
            // 0x26eb20: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EB24u; }
        if (ctx->pc != 0x26EB24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EB24u; }
        if (ctx->pc != 0x26EB24u) { return; }
    }
    ctx->pc = 0x26EB24u;
label_26eb24:
    // 0x26eb24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26eb24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eb28: 0xc097e48  jal         func_25F920
    ctx->pc = 0x26EB28u;
    SET_GPR_U32(ctx, 31, 0x26EB30u);
    ctx->pc = 0x26EB2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26EB28u;
            // 0x26eb2c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EB30u; }
        if (ctx->pc != 0x26EB30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EB30u; }
        if (ctx->pc != 0x26EB30u) { return; }
    }
    ctx->pc = 0x26EB30u;
label_26eb30:
    // 0x26eb30: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x26eb30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x26eb34: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x26eb34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eb38: 0xc0a419c  jal         func_290670
    ctx->pc = 0x26EB38u;
    SET_GPR_U32(ctx, 31, 0x26EB40u);
    ctx->pc = 0x26EB3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26EB38u;
            // 0x26eb3c: 0x2484ea80  addiu       $a0, $a0, -0x1580 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961792));
        ctx->in_delay_slot = false;
    ctx->pc = 0x290670u;
    if (runtime->hasFunction(0x290670u)) {
        auto targetFn = runtime->lookupFunction(0x290670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EB40u; }
        if (ctx->pc != 0x26EB40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetName__18CEventSpriteMotherFiPc_0x290670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EB40u; }
        if (ctx->pc != 0x26EB40u) { return; }
    }
    ctx->pc = 0x26EB40u;
label_26eb40:
    // 0x26eb40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26eb40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26eb44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26eb44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26eb48: 0x3e00008  jr          $ra
    ctx->pc = 0x26EB48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26EB4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26EB48u;
            // 0x26eb4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26EB50u;
}
