#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__9CMenuFontFv
// Address: 0x21cf30 - 0x21cf8c
void ps2___ct__9CMenuFontFv_0x21cf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__9CMenuFontFv_0x21cf30");
#endif

    switch (ctx->pc) {
        case 0x21cf44u: goto label_21cf44;
        case 0x21cf4cu: goto label_21cf4c;
        case 0x21cf5cu: goto label_21cf5c;
        case 0x21cf68u: goto label_21cf68;
        case 0x21cf78u: goto label_21cf78;
        default: break;
    }

    ctx->pc = 0x21cf30u;

    // 0x21cf30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21cf30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21cf34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21cf34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21cf38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21cf38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21cf3c: 0xc0b5750  jal         func_2D5D40
    ctx->pc = 0x21CF3Cu;
    SET_GPR_U32(ctx, 31, 0x21CF44u);
    ctx->pc = 0x21CF40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CF3Cu;
            // 0x21cf40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5D40u;
    if (runtime->hasFunction(0x2D5D40u)) {
        auto targetFn = runtime->lookupFunction(0x2D5D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CF44u; }
        if (ctx->pc != 0x21CF44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__5CFontFv_0x2d5d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CF44u; }
        if (ctx->pc != 0x21CF44u) { return; }
    }
    ctx->pc = 0x21CF44u;
label_21cf44:
    // 0x21cf44: 0xc0b5750  jal         func_2D5D40
    ctx->pc = 0x21CF44u;
    SET_GPR_U32(ctx, 31, 0x21CF4Cu);
    ctx->pc = 0x21CF48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CF44u;
            // 0x21cf48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5D40u;
    if (runtime->hasFunction(0x2D5D40u)) {
        auto targetFn = runtime->lookupFunction(0x2D5D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CF4Cu; }
        if (ctx->pc != 0x21CF4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__5CFontFv_0x2d5d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CF4Cu; }
        if (ctx->pc != 0x21CF4Cu) { return; }
    }
    ctx->pc = 0x21CF4Cu;
label_21cf4c:
    // 0x21cf4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21cf4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cf50: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x21cf50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x21cf54: 0xc0b512c  jal         func_2D44B0
    ctx->pc = 0x21CF54u;
    SET_GPR_U32(ctx, 31, 0x21CF5Cu);
    ctx->pc = 0x21CF58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CF54u;
            // 0x21cf58: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44B0u;
    if (runtime->hasFunction(0x2D44B0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CF5Cu; }
        if (ctx->pc != 0x21CF5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetClearance__5CFontFii_0x2d44b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CF5Cu; }
        if (ctx->pc != 0x21CF5Cu) { return; }
    }
    ctx->pc = 0x21CF5Cu;
label_21cf5c:
    // 0x21cf5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21cf5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cf60: 0xc0b515c  jal         func_2D4570
    ctx->pc = 0x21CF60u;
    SET_GPR_U32(ctx, 31, 0x21CF68u);
    ctx->pc = 0x21CF64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CF60u;
            // 0x21cf64: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4570u;
    if (runtime->hasFunction(0x2D4570u)) {
        auto targetFn = runtime->lookupFunction(0x2D4570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CF68u; }
        if (ctx->pc != 0x21CF68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFuchi__5CFontFi_0x2d4570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CF68u; }
        if (ctx->pc != 0x21CF68u) { return; }
    }
    ctx->pc = 0x21CF68u;
label_21cf68:
    // 0x21cf68: 0x3c028068  lui         $v0, 0x8068
    ctx->pc = 0x21cf68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32872 << 16));
    // 0x21cf6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21cf6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cf70: 0xc0b5148  jal         func_2D4520
    ctx->pc = 0x21CF70u;
    SET_GPR_U32(ctx, 31, 0x21CF78u);
    ctx->pc = 0x21CF74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CF70u;
            // 0x21cf74: 0x34456a6b  ori         $a1, $v0, 0x6A6B (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27243);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4520u;
    if (runtime->hasFunction(0x2D4520u)) {
        auto targetFn = runtime->lookupFunction(0x2D4520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CF78u; }
        if (ctx->pc != 0x21CF78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetColor__5CFontFUi_0x2d4520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CF78u; }
        if (ctx->pc != 0x21CF78u) { return; }
    }
    ctx->pc = 0x21CF78u;
label_21cf78:
    // 0x21cf78: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x21cf78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cf7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21cf7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21cf80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21cf80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21cf84: 0x3e00008  jr          $ra
    ctx->pc = 0x21CF84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CF88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21CF84u;
            // 0x21cf88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21CF8Cu;
}
