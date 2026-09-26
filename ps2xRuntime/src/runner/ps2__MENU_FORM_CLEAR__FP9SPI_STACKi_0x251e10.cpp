#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_FORM_CLEAR__FP9SPI_STACKi
// Address: 0x251e10 - 0x251e6c
void ps2__MENU_FORM_CLEAR__FP9SPI_STACKi_0x251e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_FORM_CLEAR__FP9SPI_STACKi_0x251e10");
#endif

    switch (ctx->pc) {
        case 0x251e34u: goto label_251e34;
        case 0x251e40u: goto label_251e40;
        case 0x251e50u: goto label_251e50;
        case 0x251e58u: goto label_251e58;
        default: break;
    }

    ctx->pc = 0x251e10u;

    // 0x251e10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x251e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x251e14: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x251e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x251e18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x251e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x251e1c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x251e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x251e20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x251e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x251e24: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x251E24u;
    {
        const bool branch_taken_0x251e24 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x251E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251E24u;
            // 0x251e28: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251e24) {
            ctx->pc = 0x251E40u;
            goto label_251e40;
        }
    }
    ctx->pc = 0x251E2Cu;
    // 0x251e2c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x251E2Cu;
    SET_GPR_U32(ctx, 31, 0x251E34u);
    ctx->pc = 0x251E30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x251E2Cu;
            // 0x251e30: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251E34u; }
        if (ctx->pc != 0x251E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251E34u; }
        if (ctx->pc != 0x251E34u) { return; }
    }
    ctx->pc = 0x251E34u;
label_251e34:
    // 0x251e34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x251e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251e38: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x251E38u;
    SET_GPR_U32(ctx, 31, 0x251E40u);
    ctx->pc = 0x251E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x251E38u;
            // 0x251e3c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251E40u; }
        if (ctx->pc != 0x251E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251E40u; }
        if (ctx->pc != 0x251E40u) { return; }
    }
    ctx->pc = 0x251E40u;
label_251e40:
    // 0x251e40: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x251e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x251e44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x251e44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251e48: 0xc08abcc  jal         func_22AF30
    ctx->pc = 0x251E48u;
    SET_GPR_U32(ctx, 31, 0x251E50u);
    ctx->pc = 0x251E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x251E48u;
            // 0x251e4c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AF30u;
    if (runtime->hasFunction(0x22AF30u)) {
        auto targetFn = runtime->lookupFunction(0x22AF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251E50u; }
        if (ctx->pc != 0x251E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FormInfoClear__14CPosDataManageFii_0x22af30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251E50u; }
        if (ctx->pc != 0x251E50u) { return; }
    }
    ctx->pc = 0x251E50u;
label_251e50:
    // 0x251e50: 0xc08ac10  jal         func_22B040
    ctx->pc = 0x251E50u;
    SET_GPR_U32(ctx, 31, 0x251E58u);
    ctx->pc = 0x251E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x251E50u;
            // 0x251e54: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B040u;
    if (runtime->hasFunction(0x22B040u)) {
        auto targetFn = runtime->lookupFunction(0x22B040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251E58u; }
        if (ctx->pc != 0x251E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitDrawList__14CPosDataManageFv_0x22b040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251E58u; }
        if (ctx->pc != 0x251E58u) { return; }
    }
    ctx->pc = 0x251E58u;
label_251e58:
    // 0x251e58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x251e58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x251e5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x251e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x251e60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x251e60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x251e64: 0x3e00008  jr          $ra
    ctx->pc = 0x251E64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x251E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251E64u;
            // 0x251e68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x251E6Cu;
}
