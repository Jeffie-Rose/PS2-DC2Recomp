#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: gcEQUIP__FP9SPI_STACKi
// Address: 0x193c80 - 0x193ce4
void gcEQUIP__FP9SPI_STACKi_0x193c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gcEQUIP__FP9SPI_STACKi_0x193c80");
#endif

    switch (ctx->pc) {
        case 0x193c98u: goto label_193c98;
        case 0x193cb0u: goto label_193cb0;
        case 0x193cbcu: goto label_193cbc;
        case 0x193cccu: goto label_193ccc;
        default: break;
    }

    ctx->pc = 0x193c80u;

    // 0x193c80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x193c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x193c84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x193c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x193c88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x193c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x193c8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x193c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x193c90: 0xc064220  jal         func_190880
    ctx->pc = 0x193C90u;
    SET_GPR_U32(ctx, 31, 0x193C98u);
    ctx->pc = 0x193C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193C90u;
            // 0x193c94: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193C98u; }
        if (ctx->pc != 0x193C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193C98u; }
        if (ctx->pc != 0x193C98u) { return; }
    }
    ctx->pc = 0x193C98u;
label_193c98:
    // 0x193c98: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x193c98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x193c9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193ca0: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x193ca0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
    // 0x193ca4: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x193ca4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x193ca8: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x193CA8u;
    SET_GPR_U32(ctx, 31, 0x193CB0u);
    ctx->pc = 0x193CACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193CA8u;
            // 0x193cac: 0x418821  addu        $s1, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193CB0u; }
        if (ctx->pc != 0x193CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193CB0u; }
        if (ctx->pc != 0x193CB0u) { return; }
    }
    ctx->pc = 0x193CB0u;
label_193cb0:
    // 0x193cb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193cb4: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x193CB4u;
    SET_GPR_U32(ctx, 31, 0x193CBCu);
    ctx->pc = 0x193CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193CB4u;
            // 0x193cb8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193CBCu; }
        if (ctx->pc != 0x193CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193CBCu; }
        if (ctx->pc != 0x193CBCu) { return; }
    }
    ctx->pc = 0x193CBCu;
label_193cbc:
    // 0x193cbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x193cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193cc0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x193cc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193cc4: 0xc06752c  jal         func_19D4B0
    ctx->pc = 0x193CC4u;
    SET_GPR_U32(ctx, 31, 0x193CCCu);
    ctx->pc = 0x193CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193CC4u;
            // 0x193cc8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D4B0u;
    if (runtime->hasFunction(0x19D4B0u)) {
        auto targetFn = runtime->lookupFunction(0x19D4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193CCCu; }
        if (ctx->pc != 0x193CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetChrEquip__16CUserDataManagerFii_0x19d4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193CCCu; }
        if (ctx->pc != 0x193CCCu) { return; }
    }
    ctx->pc = 0x193CCCu;
label_193ccc:
    // 0x193ccc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x193cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193cd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x193cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193cd4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x193cd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193cd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x193cd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193cdc: 0x3e00008  jr          $ra
    ctx->pc = 0x193CDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193CDCu;
            // 0x193ce0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x193CE4u;
}
