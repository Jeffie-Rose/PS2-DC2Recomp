#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckLoadInfo__13CMenuItemInfoFi
// Address: 0x240c80 - 0x240d38
void CheckLoadInfo__13CMenuItemInfoFi_0x240c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckLoadInfo__13CMenuItemInfoFi_0x240c80");
#endif

    switch (ctx->pc) {
        case 0x240ca0u: goto label_240ca0;
        case 0x240cb0u: goto label_240cb0;
        case 0x240cd0u: goto label_240cd0;
        default: break;
    }

    ctx->pc = 0x240c80u;

    // 0x240c80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x240c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x240c84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x240c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x240c88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x240c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x240c8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x240c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x240c90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x240c90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240c94: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x240c94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240c98: 0xc08ff70  jal         func_23FDC0
    ctx->pc = 0x240C98u;
    SET_GPR_U32(ctx, 31, 0x240CA0u);
    ctx->pc = 0x240C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240C98u;
            // 0x240c9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23FDC0u;
    if (runtime->hasFunction(0x23FDC0u)) {
        auto targetFn = runtime->lookupFunction(0x23FDC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240CA0u; }
        if (ctx->pc != 0x240CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckEquipListNo__13CMenuItemInfoFi_0x23fdc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240CA0u; }
        if (ctx->pc != 0x240CA0u) { return; }
    }
    ctx->pc = 0x240CA0u;
label_240ca0:
    // 0x240ca0: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x240CA0u;
    {
        const bool branch_taken_0x240ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240CA0u;
            // 0x240ca4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240ca0) {
            ctx->pc = 0x240D20u;
            goto label_240d20;
        }
    }
    ctx->pc = 0x240CA8u;
    // 0x240ca8: 0xc090c40  jal         func_243100
    ctx->pc = 0x240CA8u;
    SET_GPR_U32(ctx, 31, 0x240CB0u);
    ctx->pc = 0x243100u;
    if (runtime->hasFunction(0x243100u)) {
        auto targetFn = runtime->lookupFunction(0x243100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240CB0u; }
        if (ctx->pc != 0x240CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveCharaNo__13CMenuItemInfoFv_0x243100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240CB0u; }
        if (ctx->pc != 0x240CB0u) { return; }
    }
    ctx->pc = 0x240CB0u;
label_240cb0:
    // 0x240cb0: 0x1602001b  bne         $s0, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x240CB0u;
    {
        const bool branch_taken_0x240cb0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x240CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240CB0u;
            // 0x240cb4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240cb0) {
            ctx->pc = 0x240D20u;
            goto label_240d20;
        }
    }
    ctx->pc = 0x240CB8u;
    // 0x240cb8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x240CB8u;
    {
        const bool branch_taken_0x240cb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x240CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240CB8u;
            // 0x240cbc: 0xa3839b77  sb          $v1, -0x6489($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941559), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240cb8) {
            ctx->pc = 0x240CC8u;
            goto label_240cc8;
        }
    }
    ctx->pc = 0x240CC0u;
    // 0x240cc0: 0x1603000e  bne         $s0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x240CC0u;
    {
        const bool branch_taken_0x240cc0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x240CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240CC0u;
            // 0x240cc4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240cc0) {
            ctx->pc = 0x240CFCu;
            goto label_240cfc;
        }
    }
    ctx->pc = 0x240CC8u;
label_240cc8:
    // 0x240cc8: 0xc090c40  jal         func_243100
    ctx->pc = 0x240CC8u;
    SET_GPR_U32(ctx, 31, 0x240CD0u);
    ctx->pc = 0x240CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240CC8u;
            // 0x240ccc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243100u;
    if (runtime->hasFunction(0x243100u)) {
        auto targetFn = runtime->lookupFunction(0x243100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240CD0u; }
        if (ctx->pc != 0x240CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveCharaNo__13CMenuItemInfoFv_0x243100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240CD0u; }
        if (ctx->pc != 0x240CD0u) { return; }
    }
    ctx->pc = 0x240CD0u;
label_240cd0:
    // 0x240cd0: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x240cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x240cd4: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x240cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x240cd8: 0x2463d8c0  addiu       $v1, $v1, -0x2740
    ctx->pc = 0x240cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957248));
    // 0x240cdc: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x240cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x240ce0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x240ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x240ce4: 0x86230138  lh          $v1, 0x138($s1)
    ctx->pc = 0x240ce4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 312)));
    // 0x240ce8: 0x848401de  lh          $a0, 0x1DE($a0)
    ctx->pc = 0x240ce8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 478)));
    // 0x240cec: 0x10640002  beq         $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x240CECu;
    {
        const bool branch_taken_0x240cec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x240CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240CECu;
            // 0x240cf0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240cec) {
            ctx->pc = 0x240CF8u;
            goto label_240cf8;
        }
    }
    ctx->pc = 0x240CF4u;
    // 0x240cf4: 0xa223016f  sb          $v1, 0x16F($s1)
    ctx->pc = 0x240cf4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 367), (uint8_t)GPR_U32(ctx, 3));
label_240cf8:
    // 0x240cf8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x240cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_240cfc:
    // 0x240cfc: 0x16030009  bne         $s0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x240CFCu;
    {
        const bool branch_taken_0x240cfc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x240D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240CFCu;
            // 0x240d00: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240cfc) {
            ctx->pc = 0x240D24u;
            goto label_240d24;
        }
    }
    ctx->pc = 0x240D04u;
    // 0x240d04: 0x86240138  lh          $a0, 0x138($s1)
    ctx->pc = 0x240d04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 312)));
    // 0x240d08: 0x8c23d8c8  lw          $v1, -0x2738($at)
    ctx->pc = 0x240d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957256)));
    // 0x240d0c: 0x84630032  lh          $v1, 0x32($v1)
    ctx->pc = 0x240d0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 50)));
    // 0x240d10: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x240D10u;
    {
        const bool branch_taken_0x240d10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x240D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240D10u;
            // 0x240d14: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240d10) {
            ctx->pc = 0x240D24u;
            goto label_240d24;
        }
    }
    ctx->pc = 0x240D18u;
    // 0x240d18: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x240D18u;
    {
        const bool branch_taken_0x240d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240D18u;
            // 0x240d1c: 0xa223016f  sb          $v1, 0x16F($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 367), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240d18) {
            ctx->pc = 0x240D24u;
            goto label_240d24;
        }
    }
    ctx->pc = 0x240D20u;
label_240d20:
    // 0x240d20: 0xa3809b77  sb          $zero, -0x6489($gp)
    ctx->pc = 0x240d20u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941559), (uint8_t)GPR_U32(ctx, 0));
label_240d24:
    // 0x240d24: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x240d24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x240d28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x240d28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x240d2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x240d2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240d30: 0x3e00008  jr          $ra
    ctx->pc = 0x240D30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240D30u;
            // 0x240d34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x240D38u;
}
