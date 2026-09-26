#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_TEXDATA_CLEAR__FP9SPI_STACKi
// Address: 0x251d90 - 0x251e10
void ps2__MENU_TEXDATA_CLEAR__FP9SPI_STACKi_0x251d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_TEXDATA_CLEAR__FP9SPI_STACKi_0x251d90");
#endif

    switch (ctx->pc) {
        case 0x251db0u: goto label_251db0;
        case 0x251dc8u: goto label_251dc8;
        case 0x251df4u: goto label_251df4;
        default: break;
    }

    ctx->pc = 0x251d90u;

    // 0x251d90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x251d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x251d94: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x251d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x251d98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x251d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x251d9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x251d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x251da0: 0x24920008  addiu       $s2, $a0, 0x8
    ctx->pc = 0x251da0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x251da4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x251da4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251da8: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x251DA8u;
    SET_GPR_U32(ctx, 31, 0x251DB0u);
    ctx->pc = 0x251DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x251DA8u;
            // 0x251dac: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251DB0u; }
        if (ctx->pc != 0x251DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251DB0u; }
        if (ctx->pc != 0x251DB0u) { return; }
    }
    ctx->pc = 0x251DB0u;
label_251db0:
    // 0x251db0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x251db0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251db4: 0x2a210002  slti        $at, $s1, 0x2
    ctx->pc = 0x251db4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x251db8: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x251DB8u;
    {
        const bool branch_taken_0x251db8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x251DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251DB8u;
            // 0x251dbc: 0x240201f4  addiu       $v0, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251db8) {
            ctx->pc = 0x251DC8u;
            goto label_251dc8;
        }
    }
    ctx->pc = 0x251DC0u;
    // 0x251dc0: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x251DC0u;
    SET_GPR_U32(ctx, 31, 0x251DC8u);
    ctx->pc = 0x251DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x251DC0u;
            // 0x251dc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251DC8u; }
        if (ctx->pc != 0x251DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251DC8u; }
        if (ctx->pc != 0x251DC8u) { return; }
    }
    ctx->pc = 0x251DC8u;
label_251dc8:
    // 0x251dc8: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x251dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x251dcc: 0x2a210002  slti        $at, $s1, 0x2
    ctx->pc = 0x251dccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x251dd0: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x251DD0u;
    {
        const bool branch_taken_0x251dd0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x251DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251DD0u;
            // 0x251dd4: 0x94830014  lhu         $v1, 0x14($a0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251dd0) {
            ctx->pc = 0x251DE4u;
            goto label_251de4;
        }
    }
    ctx->pc = 0x251DD8u;
    // 0x251dd8: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x251dd8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x251ddc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x251DDCu;
    {
        const bool branch_taken_0x251ddc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x251DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251DDCu;
            // 0x251de0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251ddc) {
            ctx->pc = 0x251DECu;
            goto label_251dec;
        }
    }
    ctx->pc = 0x251DE4u;
label_251de4:
    // 0x251de4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x251de4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251de8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x251de8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_251dec:
    // 0x251dec: 0xc08aa38  jal         func_22A8E0
    ctx->pc = 0x251DECu;
    SET_GPR_U32(ctx, 31, 0x251DF4u);
    ctx->pc = 0x251DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x251DECu;
            // 0x251df0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A8E0u;
    if (runtime->hasFunction(0x22A8E0u)) {
        auto targetFn = runtime->lookupFunction(0x22A8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251DF4u; }
        if (ctx->pc != 0x251DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TexGetInfoClear__14CPosDataManageFii_0x22a8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251DF4u; }
        if (ctx->pc != 0x251DF4u) { return; }
    }
    ctx->pc = 0x251DF4u;
label_251df4:
    // 0x251df4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x251df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x251df8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x251df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x251dfc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x251dfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x251e00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x251e00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x251e04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x251e04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x251e08: 0x3e00008  jr          $ra
    ctx->pc = 0x251E08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x251E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251E08u;
            // 0x251e0c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x251E10u;
}
