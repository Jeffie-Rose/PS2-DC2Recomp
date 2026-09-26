#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: viBufCreate__FP5ViBufP1P1iP9TimeStampi
// Address: 0x299d00 - 0x299d74
void viBufCreate__FP5ViBufP1P1iP9TimeStampi_0x299d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("viBufCreate__FP5ViBufP1P1iP9TimeStampi_0x299d00");
#endif

    switch (ctx->pc) {
        case 0x299d50u: goto label_299d50;
        case 0x299d5cu: goto label_299d5c;
        default: break;
    }

    ctx->pc = 0x299d00u;

    // 0x299d00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x299d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x299d04: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x299d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x299d08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x299d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x299d0c: 0x71ac0  sll         $v1, $a3, 11
    ctx->pc = 0x299d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 11));
    // 0x299d10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x299d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x299d14: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x299d14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x299d18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x299d18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299d1c: 0x6293c  dsll32      $a1, $a2, 4
    ctx->pc = 0x299d1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 4));
    // 0x299d20: 0x5293e  dsrl32      $a1, $a1, 4
    ctx->pc = 0x299d20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 4));
    // 0x299d24: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x299d24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x299d28: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x299d28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x299d2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x299d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x299d30: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x299d30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
    // 0x299d34: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x299d34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x299d38: 0xac880050  sw          $t0, 0x50($a0)
    ctx->pc = 0x299d38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 8));
    // 0x299d3c: 0xac890054  sw          $t1, 0x54($a0)
    ctx->pc = 0x299d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 9));
    // 0x299d40: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x299d40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x299d44: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x299d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x299d48: 0xc044038  jal         func_1100E0
    ctx->pc = 0x299D48u;
    SET_GPR_U32(ctx, 31, 0x299D50u);
    ctx->pc = 0x299D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299D48u;
            // 0x299d4c: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1100E0u;
    if (runtime->hasFunction(0x1100E0u)) {
        auto targetFn = runtime->lookupFunction(0x1100E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299D50u; }
        if (ctx->pc != 0x299D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateSema_0x1100e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299D50u; }
        if (ctx->pc != 0x299D50u) { return; }
    }
    ctx->pc = 0x299D50u;
label_299d50:
    // 0x299d50: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x299d50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x299d54: 0xc0a6760  jal         func_299D80
    ctx->pc = 0x299D54u;
    SET_GPR_U32(ctx, 31, 0x299D5Cu);
    ctx->pc = 0x299D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299D54u;
            // 0x299d58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299D80u;
    if (runtime->hasFunction(0x299D80u)) {
        auto targetFn = runtime->lookupFunction(0x299D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299D5Cu; }
        if (ctx->pc != 0x299D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        viBufReset__FP5ViBuf_0x299d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299D5Cu; }
        if (ctx->pc != 0x299D5Cu) { return; }
    }
    ctx->pc = 0x299D5Cu;
label_299d5c:
    // 0x299d5c: 0xfe000048  sd          $zero, 0x48($s0)
    ctx->pc = 0x299d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 0));
    // 0x299d60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x299d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x299d64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x299d64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299d68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x299d68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299d6c: 0x3e00008  jr          $ra
    ctx->pc = 0x299D6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299D6Cu;
            // 0x299d70: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x299D74u;
}
