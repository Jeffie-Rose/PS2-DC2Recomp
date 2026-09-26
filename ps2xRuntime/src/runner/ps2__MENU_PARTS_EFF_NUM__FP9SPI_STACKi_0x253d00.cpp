#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_PARTS_EFF_NUM__FP9SPI_STACKi
// Address: 0x253d00 - 0x253d7c
void ps2__MENU_PARTS_EFF_NUM__FP9SPI_STACKi_0x253d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_PARTS_EFF_NUM__FP9SPI_STACKi_0x253d00");
#endif

    switch (ctx->pc) {
        case 0x253d10u: goto label_253d10;
        case 0x253d58u: goto label_253d58;
        default: break;
    }

    ctx->pc = 0x253d00u;

    // 0x253d00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x253d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x253d04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x253d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x253d08: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x253D08u;
    SET_GPR_U32(ctx, 31, 0x253D10u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253D10u; }
        if (ctx->pc != 0x253D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253D10u; }
        if (ctx->pc != 0x253D10u) { return; }
    }
    ctx->pc = 0x253D10u;
label_253d10:
    // 0x253d10: 0x8f8397c0  lw          $v1, -0x6840($gp)
    ctx->pc = 0x253d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940608)));
    // 0x253d14: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x253D14u;
    {
        const bool branch_taken_0x253d14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x253d14) {
            ctx->pc = 0x253D24u;
            goto label_253d24;
        }
    }
    ctx->pc = 0x253D1Cu;
    // 0x253d1c: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x253D1Cu;
    {
        const bool branch_taken_0x253d1c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x253d1c) {
            ctx->pc = 0x253D2Cu;
            goto label_253d2c;
        }
    }
    ctx->pc = 0x253D24u;
label_253d24:
    // 0x253d24: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x253D24u;
    {
        const bool branch_taken_0x253d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253D24u;
            // 0x253d28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253d24) {
            ctx->pc = 0x253D70u;
            goto label_253d70;
        }
    }
    ctx->pc = 0x253D2Cu;
label_253d2c:
    // 0x253d2c: 0xa0620044  sb          $v0, 0x44($v1)
    ctx->pc = 0x253d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 68), (uint8_t)GPR_U32(ctx, 2));
    // 0x253d30: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x253d30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x253d34: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x253d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x253d38: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x253d38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x253d3c: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x253d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x253d40: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x253D40u;
    {
        const bool branch_taken_0x253d40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253D40u;
            // 0x253d44: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253d40) {
            ctx->pc = 0x253D50u;
            goto label_253d50;
        }
    }
    ctx->pc = 0x253D48u;
    // 0x253d48: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x253d48u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x253d4c: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x253d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_253d50:
    // 0x253d50: 0xc04e748  jal         func_139D20
    ctx->pc = 0x253D50u;
    SET_GPR_U32(ctx, 31, 0x253D58u);
    ctx->pc = 0x253D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253D50u;
            // 0x253d54: 0x8f8497b0  lw          $a0, -0x6850($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940592)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253D58u; }
        if (ctx->pc != 0x253D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253D58u; }
        if (ctx->pc != 0x253D58u) { return; }
    }
    ctx->pc = 0x253D58u;
label_253d58:
    // 0x253d58: 0x8f8397c0  lw          $v1, -0x6840($gp)
    ctx->pc = 0x253d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940608)));
    // 0x253d5c: 0xac620040  sw          $v0, 0x40($v1)
    ctx->pc = 0x253d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
    // 0x253d60: 0x8f8397c0  lw          $v1, -0x6840($gp)
    ctx->pc = 0x253d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940608)));
    // 0x253d64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x253d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x253d68: 0x8c630040  lw          $v1, 0x40($v1)
    ctx->pc = 0x253d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x253d6c: 0xaf8397c4  sw          $v1, -0x683C($gp)
    ctx->pc = 0x253d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940612), GPR_U32(ctx, 3));
label_253d70:
    // 0x253d70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x253d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253d74: 0x3e00008  jr          $ra
    ctx->pc = 0x253D74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253D74u;
            // 0x253d78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x253D7Cu;
}
