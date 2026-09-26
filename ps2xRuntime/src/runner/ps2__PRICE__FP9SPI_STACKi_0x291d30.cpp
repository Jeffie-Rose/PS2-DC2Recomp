#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _PRICE__FP9SPI_STACKi
// Address: 0x291d30 - 0x291d94
void ps2__PRICE__FP9SPI_STACKi_0x291d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__PRICE__FP9SPI_STACKi_0x291d30");
#endif

    switch (ctx->pc) {
        case 0x291d48u: goto label_291d48;
        case 0x291d58u: goto label_291d58;
        case 0x291d70u: goto label_291d70;
        default: break;
    }

    ctx->pc = 0x291d30u;

    // 0x291d30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x291d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x291d34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x291d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x291d38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x291d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x291d3c: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x291d3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x291d40: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x291D40u;
    SET_GPR_U32(ctx, 31, 0x291D48u);
    ctx->pc = 0x291D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291D40u;
            // 0x291d44: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291D48u; }
        if (ctx->pc != 0x291D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291D48u; }
        if (ctx->pc != 0x291D48u) { return; }
    }
    ctx->pc = 0x291D48u;
label_291d48:
    // 0x291d48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x291d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291d4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x291d4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291d50: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x291D50u;
    SET_GPR_U32(ctx, 31, 0x291D58u);
    ctx->pc = 0x291D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291D50u;
            // 0x291d54: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291D58u; }
        if (ctx->pc != 0x291D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291D58u; }
        if (ctx->pc != 0x291D58u) { return; }
    }
    ctx->pc = 0x291D58u;
label_291d58:
    // 0x291d58: 0x8f839858  lw          $v1, -0x67A8($gp)
    ctx->pc = 0x291d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940760)));
    // 0x291d5c: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x291d5cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x291d60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x291d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291d64: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x291d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x291d68: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x291D68u;
    SET_GPR_U32(ctx, 31, 0x291D70u);
    ctx->pc = 0x291D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291D68u;
            // 0x291d6c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291D70u; }
        if (ctx->pc != 0x291D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291D70u; }
        if (ctx->pc != 0x291D70u) { return; }
    }
    ctx->pc = 0x291D70u;
label_291d70:
    // 0x291d70: 0x8f839858  lw          $v1, -0x67A8($gp)
    ctx->pc = 0x291d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940760)));
    // 0x291d74: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x291d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x291d78: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x291d78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x291d7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x291d7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x291d80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x291d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x291d84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x291d84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291d88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x291d88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x291D8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291D8Cu;
            // 0x291d90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x291D94u;
}
