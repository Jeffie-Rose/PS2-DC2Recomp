#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _FLS__FP9SPI_STACKi
// Address: 0x28eed0 - 0x28ef34
void ps2__FLS__FP9SPI_STACKi_0x28eed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__FLS__FP9SPI_STACKi_0x28eed0");
#endif

    switch (ctx->pc) {
        case 0x28eee4u: goto label_28eee4;
        case 0x28eef0u: goto label_28eef0;
        default: break;
    }

    ctx->pc = 0x28eed0u;

    // 0x28eed0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28eed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28eed4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28eed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28eed8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28eed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28eedc: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x28EEDCu;
    SET_GPR_U32(ctx, 31, 0x28EEE4u);
    ctx->pc = 0x28EEE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28EEDCu;
            // 0x28eee0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EEE4u; }
        if (ctx->pc != 0x28EEE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EEE4u; }
        if (ctx->pc != 0x28EEE4u) { return; }
    }
    ctx->pc = 0x28EEE4u;
label_28eee4:
    // 0x28eee4: 0xaf829838  sw          $v0, -0x67C8($gp)
    ctx->pc = 0x28eee4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940728), GPR_U32(ctx, 2));
    // 0x28eee8: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x28EEE8u;
    SET_GPR_U32(ctx, 31, 0x28EEF0u);
    ctx->pc = 0x28EEECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28EEE8u;
            // 0x28eeec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EEF0u; }
        if (ctx->pc != 0x28EEF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EEF0u; }
        if (ctx->pc != 0x28EEF0u) { return; }
    }
    ctx->pc = 0x28EEF0u;
label_28eef0:
    // 0x28eef0: 0x8f848da8  lw          $a0, -0x7258($gp)
    ctx->pc = 0x28eef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938024)));
    // 0x28eef4: 0x8f829838  lw          $v0, -0x67C8($gp)
    ctx->pc = 0x28eef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940728)));
    // 0x28eef8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x28eef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28eefc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28eefcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28ef00: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x28ef00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x28ef04: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x28ef04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x28ef08: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x28EF08u;
    {
        const bool branch_taken_0x28ef08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x28ef08) {
            ctx->pc = 0x28EF20u;
            goto label_28ef20;
        }
    }
    ctx->pc = 0x28EF10u;
    // 0x28ef10: 0x8f828db8  lw          $v0, -0x7248($gp)
    ctx->pc = 0x28ef10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x28ef14: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x28ef14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x28ef18: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x28ef18u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x28ef1c: 0xac20fff4  sw          $zero, -0xC($at)
    ctx->pc = 0x28ef1cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294967284), GPR_U32(ctx, 0));
label_28ef20:
    // 0x28ef20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28ef20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28ef24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28ef24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ef28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28ef28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ef2c: 0x3e00008  jr          $ra
    ctx->pc = 0x28EF2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28EF30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EF2Cu;
            // 0x28ef30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28EF34u;
}
