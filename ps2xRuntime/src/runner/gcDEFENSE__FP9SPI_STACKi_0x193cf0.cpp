#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: gcDEFENSE__FP9SPI_STACKi
// Address: 0x193cf0 - 0x193d54
void gcDEFENSE__FP9SPI_STACKi_0x193cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gcDEFENSE__FP9SPI_STACKi_0x193cf0");
#endif

    switch (ctx->pc) {
        case 0x193d08u: goto label_193d08;
        case 0x193d14u: goto label_193d14;
        case 0x193d1cu: goto label_193d1c;
        case 0x193d30u: goto label_193d30;
        default: break;
    }

    ctx->pc = 0x193cf0u;

    // 0x193cf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x193cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x193cf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x193cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x193cf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x193cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x193cfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x193cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x193d00: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x193D00u;
    SET_GPR_U32(ctx, 31, 0x193D08u);
    ctx->pc = 0x193D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193D00u;
            // 0x193d04: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193D08u; }
        if (ctx->pc != 0x193D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193D08u; }
        if (ctx->pc != 0x193D08u) { return; }
    }
    ctx->pc = 0x193D08u;
label_193d08:
    // 0x193d08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193d0c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x193D0Cu;
    SET_GPR_U32(ctx, 31, 0x193D14u);
    ctx->pc = 0x193D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193D0Cu;
            // 0x193d10: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193D14u; }
        if (ctx->pc != 0x193D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193D14u; }
        if (ctx->pc != 0x193D14u) { return; }
    }
    ctx->pc = 0x193D14u;
label_193d14:
    // 0x193d14: 0xc064220  jal         func_190880
    ctx->pc = 0x193D14u;
    SET_GPR_U32(ctx, 31, 0x193D1Cu);
    ctx->pc = 0x193D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193D14u;
            // 0x193d18: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193D1Cu; }
        if (ctx->pc != 0x193D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193D1Cu; }
        if (ctx->pc != 0x193D1Cu) { return; }
    }
    ctx->pc = 0x193D1Cu;
label_193d1c:
    // 0x193d1c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x193d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x193d20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x193d20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193d24: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x193d24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
    // 0x193d28: 0xc066d24  jal         func_19B490
    ctx->pc = 0x193D28u;
    SET_GPR_U32(ctx, 31, 0x193D30u);
    ctx->pc = 0x193D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193D28u;
            // 0x193d2c: 0x412021  addu        $a0, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B490u;
    if (runtime->hasFunction(0x19B490u)) {
        auto targetFn = runtime->lookupFunction(0x19B490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193D30u; }
        if (ctx->pc != 0x193D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaDataPtr__16CUserDataManagerFi_0x19b490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193D30u; }
        if (ctx->pc != 0x193D30u) { return; }
    }
    ctx->pc = 0x193D30u;
label_193d30:
    // 0x193d30: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x193D30u;
    {
        const bool branch_taken_0x193d30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x193d30) {
            ctx->pc = 0x193D3Cu;
            goto label_193d3c;
        }
    }
    ctx->pc = 0x193D38u;
    // 0x193d38: 0xa451000a  sh          $s1, 0xA($v0)
    ctx->pc = 0x193d38u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 17));
label_193d3c:
    // 0x193d3c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x193d3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193d40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x193d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193d44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x193d44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193d48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x193d48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193d4c: 0x3e00008  jr          $ra
    ctx->pc = 0x193D4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193D4Cu;
            // 0x193d50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x193D54u;
}
