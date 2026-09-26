#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_ETCINFO2_CLEAR__FP9SPI_STACKi
// Address: 0x251cd0 - 0x251d50
void ps2__MENU_ETCINFO2_CLEAR__FP9SPI_STACKi_0x251cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_ETCINFO2_CLEAR__FP9SPI_STACKi_0x251cd0");
#endif

    switch (ctx->pc) {
        case 0x251cf0u: goto label_251cf0;
        case 0x251d08u: goto label_251d08;
        case 0x251d34u: goto label_251d34;
        default: break;
    }

    ctx->pc = 0x251cd0u;

    // 0x251cd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x251cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x251cd4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x251cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x251cd8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x251cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x251cdc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x251cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x251ce0: 0x24920008  addiu       $s2, $a0, 0x8
    ctx->pc = 0x251ce0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x251ce4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x251ce4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251ce8: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x251CE8u;
    SET_GPR_U32(ctx, 31, 0x251CF0u);
    ctx->pc = 0x251CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x251CE8u;
            // 0x251cec: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251CF0u; }
        if (ctx->pc != 0x251CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251CF0u; }
        if (ctx->pc != 0x251CF0u) { return; }
    }
    ctx->pc = 0x251CF0u;
label_251cf0:
    // 0x251cf0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x251cf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251cf4: 0x2a210002  slti        $at, $s1, 0x2
    ctx->pc = 0x251cf4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x251cf8: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x251CF8u;
    {
        const bool branch_taken_0x251cf8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x251CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251CF8u;
            // 0x251cfc: 0x240203e8  addiu       $v0, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251cf8) {
            ctx->pc = 0x251D08u;
            goto label_251d08;
        }
    }
    ctx->pc = 0x251D00u;
    // 0x251d00: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x251D00u;
    SET_GPR_U32(ctx, 31, 0x251D08u);
    ctx->pc = 0x251D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x251D00u;
            // 0x251d04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251D08u; }
        if (ctx->pc != 0x251D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251D08u; }
        if (ctx->pc != 0x251D08u) { return; }
    }
    ctx->pc = 0x251D08u;
label_251d08:
    // 0x251d08: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x251d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x251d0c: 0x2a210002  slti        $at, $s1, 0x2
    ctx->pc = 0x251d0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x251d10: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x251D10u;
    {
        const bool branch_taken_0x251d10 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x251D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251D10u;
            // 0x251d14: 0x9483000c  lhu         $v1, 0xC($a0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251d10) {
            ctx->pc = 0x251D24u;
            goto label_251d24;
        }
    }
    ctx->pc = 0x251D18u;
    // 0x251d18: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x251d18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x251d1c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x251D1Cu;
    {
        const bool branch_taken_0x251d1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x251D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251D1Cu;
            // 0x251d20: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251d1c) {
            ctx->pc = 0x251D2Cu;
            goto label_251d2c;
        }
    }
    ctx->pc = 0x251D24u;
label_251d24:
    // 0x251d24: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x251d24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251d28: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x251d28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_251d2c:
    // 0x251d2c: 0xc08ab68  jal         func_22ADA0
    ctx->pc = 0x251D2Cu;
    SET_GPR_U32(ctx, 31, 0x251D34u);
    ctx->pc = 0x251D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x251D2Cu;
            // 0x251d30: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22ADA0u;
    if (runtime->hasFunction(0x22ADA0u)) {
        auto targetFn = runtime->lookupFunction(0x22ADA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251D34u; }
        if (ctx->pc != 0x251D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EtcTbl2Clear__14CPosDataManageFii_0x22ada0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251D34u; }
        if (ctx->pc != 0x251D34u) { return; }
    }
    ctx->pc = 0x251D34u;
label_251d34:
    // 0x251d34: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x251d34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x251d38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x251d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x251d3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x251d3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x251d40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x251d40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x251d44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x251d44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x251d48: 0x3e00008  jr          $ra
    ctx->pc = 0x251D48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x251D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251D48u;
            // 0x251d4c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x251D50u;
}
