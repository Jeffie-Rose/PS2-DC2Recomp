#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _TREE_MAPINFO__FP9SPI_STACKi
// Address: 0x2f8ce0 - 0x2f8da8
void ps2__TREE_MAPINFO__FP9SPI_STACKi_0x2f8ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__TREE_MAPINFO__FP9SPI_STACKi_0x2f8ce0");
#endif

    switch (ctx->pc) {
        case 0x2f8d00u: goto label_2f8d00;
        case 0x2f8d10u: goto label_2f8d10;
        case 0x2f8d1cu: goto label_2f8d1c;
        case 0x2f8d60u: goto label_2f8d60;
        case 0x2f8d6cu: goto label_2f8d6c;
        default: break;
    }

    ctx->pc = 0x2f8ce0u;

    // 0x2f8ce0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2f8ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2f8ce4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2f8ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2f8ce8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f8ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2f8cec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f8cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f8cf0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f8cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f8cf4: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x2f8cf4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2f8cf8: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2F8CF8u;
    SET_GPR_U32(ctx, 31, 0x2F8D00u);
    ctx->pc = 0x2F8CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8CF8u;
            // 0x2f8cfc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8D00u; }
        if (ctx->pc != 0x2F8D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8D00u; }
        if (ctx->pc != 0x2F8D00u) { return; }
    }
    ctx->pc = 0x2F8D00u;
label_2f8d00:
    // 0x2f8d00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f8d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8d04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f8d04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8d08: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2F8D08u;
    SET_GPR_U32(ctx, 31, 0x2F8D10u);
    ctx->pc = 0x2F8D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8D08u;
            // 0x2f8d0c: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8D10u; }
        if (ctx->pc != 0x2F8D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8D10u; }
        if (ctx->pc != 0x2F8D10u) { return; }
    }
    ctx->pc = 0x2F8D10u;
label_2f8d10:
    // 0x2f8d10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f8d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8d14: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2F8D14u;
    SET_GPR_U32(ctx, 31, 0x2F8D1Cu);
    ctx->pc = 0x2F8D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8D14u;
            // 0x2f8d18: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8D1Cu; }
        if (ctx->pc != 0x2F8D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8D1Cu; }
        if (ctx->pc != 0x2F8D1Cu) { return; }
    }
    ctx->pc = 0x2F8D1Cu;
label_2f8d1c:
    // 0x2f8d1c: 0x8f839f4c  lw          $v1, -0x60B4($gp)
    ctx->pc = 0x2f8d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942540)));
    // 0x2f8d20: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2f8d20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8d24: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2f8d24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2f8d28: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x2f8d28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2f8d2c: 0x29900  sll         $s3, $v0, 4
    ctx->pc = 0x2f8d2cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2f8d30: 0x3262000f  andi        $v0, $s3, 0xF
    ctx->pc = 0x2f8d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)15);
    // 0x2f8d34: 0xa470000c  sh          $s0, 0xC($v1)
    ctx->pc = 0x2f8d34u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 16));
    // 0x2f8d38: 0x8f839f4c  lw          $v1, -0x60B4($gp)
    ctx->pc = 0x2f8d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942540)));
    // 0x2f8d3c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F8D3Cu;
    {
        const bool branch_taken_0x2f8d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8D40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8D3Cu;
            // 0x2f8d40: 0xa471000e  sh          $s1, 0xE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8d3c) {
            ctx->pc = 0x2F8D50u;
            goto label_2f8d50;
        }
    }
    ctx->pc = 0x2F8D44u;
    // 0x2f8d44: 0x131102  srl         $v0, $s3, 4
    ctx->pc = 0x2f8d44u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), 4));
    // 0x2f8d48: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F8D48u;
    {
        const bool branch_taken_0x2f8d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8D48u;
            // 0x2f8d4c: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8d48) {
            ctx->pc = 0x2F8D54u;
            goto label_2f8d54;
        }
    }
    ctx->pc = 0x2F8D50u;
label_2f8d50:
    // 0x2f8d50: 0x131102  srl         $v0, $s3, 4
    ctx->pc = 0x2f8d50u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), 4));
label_2f8d54:
    // 0x2f8d54: 0x8f849f54  lw          $a0, -0x60AC($gp)
    ctx->pc = 0x2f8d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942548)));
    // 0x2f8d58: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2F8D58u;
    SET_GPR_U32(ctx, 31, 0x2F8D60u);
    ctx->pc = 0x2F8D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8D58u;
            // 0x2f8d5c: 0x24450002  addiu       $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8D60u; }
        if (ctx->pc != 0x2F8D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8D60u; }
        if (ctx->pc != 0x2F8D60u) { return; }
    }
    ctx->pc = 0x2F8D60u;
label_2f8d60:
    // 0x2f8d60: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f8d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8d64: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x2F8D64u;
    SET_GPR_U32(ctx, 31, 0x2F8D6Cu);
    ctx->pc = 0x2F8D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8D64u;
            // 0x2f8d68: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8D6Cu; }
        if (ctx->pc != 0x2F8D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8D6Cu; }
        if (ctx->pc != 0x2F8D6Cu) { return; }
    }
    ctx->pc = 0x2F8D6Cu;
label_2f8d6c:
    // 0x2f8d6c: 0x8f839f4c  lw          $v1, -0x60B4($gp)
    ctx->pc = 0x2f8d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942540)));
    // 0x2f8d70: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2f8d70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2f8d74: 0x8f839f4c  lw          $v1, -0x60B4($gp)
    ctx->pc = 0x2f8d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942540)));
    // 0x2f8d78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f8d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f8d7c: 0xac720008  sw          $s2, 0x8($v1)
    ctx->pc = 0x2f8d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 18));
    // 0x2f8d80: 0x8f839f4c  lw          $v1, -0x60B4($gp)
    ctx->pc = 0x2f8d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942540)));
    // 0x2f8d84: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x2f8d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2f8d88: 0xaf839f50  sw          $v1, -0x60B0($gp)
    ctx->pc = 0x2f8d88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942544), GPR_U32(ctx, 3));
    // 0x2f8d8c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2f8d8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f8d90: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f8d90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f8d94: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f8d94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f8d98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f8d98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f8d9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f8d9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f8da0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F8DA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8DA0u;
            // 0x2f8da4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F8DA8u;
}
