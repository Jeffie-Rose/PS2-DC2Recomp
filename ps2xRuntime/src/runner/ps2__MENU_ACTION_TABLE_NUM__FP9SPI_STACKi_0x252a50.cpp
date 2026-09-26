#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_ACTION_TABLE_NUM__FP9SPI_STACKi
// Address: 0x252a50 - 0x252acc
void ps2__MENU_ACTION_TABLE_NUM__FP9SPI_STACKi_0x252a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_ACTION_TABLE_NUM__FP9SPI_STACKi_0x252a50");
#endif

    switch (ctx->pc) {
        case 0x252a78u: goto label_252a78;
        case 0x252aa4u: goto label_252aa4;
        default: break;
    }

    ctx->pc = 0x252a50u;

    // 0x252a50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x252a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x252a54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x252a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x252a58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x252a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x252a5c: 0x8f8297bc  lw          $v0, -0x6844($gp)
    ctx->pc = 0x252a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940604)));
    // 0x252a60: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x252A60u;
    {
        const bool branch_taken_0x252a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x252A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252A60u;
            // 0x252a64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252a60) {
            ctx->pc = 0x252A70u;
            goto label_252a70;
        }
    }
    ctx->pc = 0x252A68u;
    // 0x252a68: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x252A68u;
    {
        const bool branch_taken_0x252a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252A68u;
            // 0x252a6c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252a68) {
            ctx->pc = 0x252AC0u;
            goto label_252ac0;
        }
    }
    ctx->pc = 0x252A70u;
label_252a70:
    // 0x252a70: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x252A70u;
    SET_GPR_U32(ctx, 31, 0x252A78u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252A78u; }
        if (ctx->pc != 0x252A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252A78u; }
        if (ctx->pc != 0x252A78u) { return; }
    }
    ctx->pc = 0x252A78u;
label_252a78:
    // 0x252a78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x252a78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252a7c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x252a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x252a80: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x252a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x252a84: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x252a84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x252a88: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x252a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x252a8c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x252A8Cu;
    {
        const bool branch_taken_0x252a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x252A90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252A8Cu;
            // 0x252a90: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252a8c) {
            ctx->pc = 0x252A9Cu;
            goto label_252a9c;
        }
    }
    ctx->pc = 0x252A94u;
    // 0x252a94: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x252a94u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x252a98: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x252a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_252a9c:
    // 0x252a9c: 0xc04e748  jal         func_139D20
    ctx->pc = 0x252A9Cu;
    SET_GPR_U32(ctx, 31, 0x252AA4u);
    ctx->pc = 0x252AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x252A9Cu;
            // 0x252aa0: 0x8f8497b0  lw          $a0, -0x6850($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940592)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252AA4u; }
        if (ctx->pc != 0x252AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252AA4u; }
        if (ctx->pc != 0x252AA4u) { return; }
    }
    ctx->pc = 0x252AA4u;
label_252aa4:
    // 0x252aa4: 0x8f8397bc  lw          $v1, -0x6844($gp)
    ctx->pc = 0x252aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940604)));
    // 0x252aa8: 0xac620064  sw          $v0, 0x64($v1)
    ctx->pc = 0x252aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 2));
    // 0x252aac: 0x8f8397bc  lw          $v1, -0x6844($gp)
    ctx->pc = 0x252aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940604)));
    // 0x252ab0: 0xa4700062  sh          $s0, 0x62($v1)
    ctx->pc = 0x252ab0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 98), (uint16_t)GPR_U32(ctx, 16));
    // 0x252ab4: 0xaf8297d4  sw          $v0, -0x682C($gp)
    ctx->pc = 0x252ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940628), GPR_U32(ctx, 2));
    // 0x252ab8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x252ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x252abc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x252abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_252ac0:
    // 0x252ac0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x252ac0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x252AC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252AC4u;
            // 0x252ac8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x252ACCu;
}
