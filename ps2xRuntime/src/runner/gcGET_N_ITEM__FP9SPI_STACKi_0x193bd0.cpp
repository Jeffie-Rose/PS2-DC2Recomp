#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: gcGET_N_ITEM__FP9SPI_STACKi
// Address: 0x193bd0 - 0x193c74
void gcGET_N_ITEM__FP9SPI_STACKi_0x193bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gcGET_N_ITEM__FP9SPI_STACKi_0x193bd0");
#endif

    switch (ctx->pc) {
        case 0x193c00u: goto label_193c00;
        case 0x193c08u: goto label_193c08;
        case 0x193c20u: goto label_193c20;
        case 0x193c30u: goto label_193c30;
        case 0x193c40u: goto label_193c40;
        default: break;
    }

    ctx->pc = 0x193bd0u;

    // 0x193bd0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x193bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x193bd4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x193bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x193bd8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x193bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x193bdc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x193bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x193be0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x193be0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193be4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x193be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x193be8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x193be8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193bec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x193becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x193bf0: 0x13082a  slt         $at, $zero, $s3
    ctx->pc = 0x193bf0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x193bf4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x193bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x193bf8: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x193BF8u;
    {
        const bool branch_taken_0x193bf8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x193BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193BF8u;
            // 0x193bfc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193bf8) {
            ctx->pc = 0x193C50u;
            goto label_193c50;
        }
    }
    ctx->pc = 0x193C00u;
label_193c00:
    // 0x193c00: 0xc064220  jal         func_190880
    ctx->pc = 0x193C00u;
    SET_GPR_U32(ctx, 31, 0x193C08u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193C08u; }
        if (ctx->pc != 0x193C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193C08u; }
        if (ctx->pc != 0x193C08u) { return; }
    }
    ctx->pc = 0x193C08u;
label_193c08:
    // 0x193c08: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x193c08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x193c0c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x193c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193c10: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x193c10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
    // 0x193c14: 0x24940008  addiu       $s4, $a0, 0x8
    ctx->pc = 0x193c14u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x193c18: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x193C18u;
    SET_GPR_U32(ctx, 31, 0x193C20u);
    ctx->pc = 0x193C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193C18u;
            // 0x193c1c: 0x419021  addu        $s2, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193C20u; }
        if (ctx->pc != 0x193C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193C20u; }
        if (ctx->pc != 0x193C20u) { return; }
    }
    ctx->pc = 0x193C20u;
label_193c20:
    // 0x193c20: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x193c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193c24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x193c24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193c28: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x193C28u;
    SET_GPR_U32(ctx, 31, 0x193C30u);
    ctx->pc = 0x193C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193C28u;
            // 0x193c2c: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193C30u; }
        if (ctx->pc != 0x193C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193C30u; }
        if (ctx->pc != 0x193C30u) { return; }
    }
    ctx->pc = 0x193C30u;
label_193c30:
    // 0x193c30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x193c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193c34: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x193c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193c38: 0xc0677fc  jal         func_19DFF0
    ctx->pc = 0x193C38u;
    SET_GPR_U32(ctx, 31, 0x193C40u);
    ctx->pc = 0x193C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193C38u;
            // 0x193c3c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19DFF0u;
    if (runtime->hasFunction(0x19DFF0u)) {
        auto targetFn = runtime->lookupFunction(0x19DFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193C40u; }
        if (ctx->pc != 0x193C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItem__16CUserDataManagerFii_0x19dff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193C40u; }
        if (ctx->pc != 0x193C40u) { return; }
    }
    ctx->pc = 0x193C40u;
label_193c40:
    // 0x193c40: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x193c40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x193c44: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x193c44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x193c48: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x193C48u;
    {
        const bool branch_taken_0x193c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x193c48) {
            ctx->pc = 0x193C00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_193c00;
        }
    }
    ctx->pc = 0x193C50u;
label_193c50:
    // 0x193c50: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x193c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x193c54: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x193c54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x193c58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x193c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193c5c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x193c5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x193c60: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x193c60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193c64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x193c64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193c68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x193c68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x193C6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193C6Cu;
            // 0x193c70: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x193C74u;
}
