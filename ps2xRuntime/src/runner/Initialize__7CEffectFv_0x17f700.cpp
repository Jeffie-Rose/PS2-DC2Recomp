#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__7CEffectFv
// Address: 0x17f700 - 0x17f76c
void Initialize__7CEffectFv_0x17f700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__7CEffectFv_0x17f700");
#endif

    switch (ctx->pc) {
        case 0x17f720u: goto label_17f720;
        default: break;
    }

    ctx->pc = 0x17f700u;

    // 0x17f700: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17f700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17f704: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17f704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17f708: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17f708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17f70c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x17f70cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x17f710: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17f710u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f714: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x17f714u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x17f718: 0xc05fd60  jal         func_17F580
    ctx->pc = 0x17F718u;
    SET_GPR_U32(ctx, 31, 0x17F720u);
    ctx->pc = 0x17F71Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F718u;
            // 0x17f71c: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F580u;
    if (runtime->hasFunction(0x17F580u)) {
        auto targetFn = runtime->lookupFunction(0x17F580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F720u; }
        if (ctx->pc != 0x17F720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEffectParam__FP12EFFECT_PARAM_0x17f580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F720u; }
        if (ctx->pc != 0x17F720u) { return; }
    }
    ctx->pc = 0x17F720u;
label_17f720:
    // 0x17f720: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x17f720u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x17f724: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x17f724u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x17f728: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x17f728u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x17f72c: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x17f72cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x17f730: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x17f730u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x17f734: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x17f734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x17f738: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x17f738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x17f73c: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x17f73cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x17f740: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x17f740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x17f744: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x17f744u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x17f748: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x17f748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x17f74c: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x17f74cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x17f750: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x17f750u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x17f754: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x17f754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x17f758: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x17f758u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x17f75c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17f75cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f760: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17f760u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f764: 0x3e00008  jr          $ra
    ctx->pc = 0x17F764u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F764u;
            // 0x17f768: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17F76Cu;
}
