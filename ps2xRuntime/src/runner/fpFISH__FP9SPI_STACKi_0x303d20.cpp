#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: fpFISH__FP9SPI_STACKi
// Address: 0x303d20 - 0x303dcc
void fpFISH__FP9SPI_STACKi_0x303d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fpFISH__FP9SPI_STACKi_0x303d20");
#endif

    switch (ctx->pc) {
        case 0x303d94u: goto label_303d94;
        case 0x303da4u: goto label_303da4;
        case 0x303db0u: goto label_303db0;
        default: break;
    }

    ctx->pc = 0x303d20u;

    // 0x303d20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x303d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x303d24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x303d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x303d28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x303d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x303d2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x303d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x303d30: 0x8f82a0fc  lw          $v0, -0x5F04($gp)
    ctx->pc = 0x303d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942972)));
    // 0x303d34: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x303D34u;
    {
        const bool branch_taken_0x303d34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x303d34) {
            ctx->pc = 0x303D44u;
            goto label_303d44;
        }
    }
    ctx->pc = 0x303D3Cu;
    // 0x303d3c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x303D3Cu;
    {
        const bool branch_taken_0x303d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303D40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303D3Cu;
            // 0x303d40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303d3c) {
            ctx->pc = 0x303DB8u;
            goto label_303db8;
        }
    }
    ctx->pc = 0x303D44u;
label_303d44:
    // 0x303d44: 0x8c450024  lw          $a1, 0x24($v0)
    ctx->pc = 0x303d44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x303d48: 0x24460024  addiu       $a2, $v0, 0x24
    ctx->pc = 0x303d48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x303d4c: 0x28a20008  slti        $v0, $a1, 0x8
    ctx->pc = 0x303d4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x303d50: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x303D50u;
    {
        const bool branch_taken_0x303d50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x303D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303D50u;
            // 0x303d54: 0x24a30001  addiu       $v1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303d50) {
            ctx->pc = 0x303D60u;
            goto label_303d60;
        }
    }
    ctx->pc = 0x303D58u;
    // 0x303d58: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x303D58u;
    {
        const bool branch_taken_0x303d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303D58u;
            // 0x303d5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303d58) {
            ctx->pc = 0x303DB8u;
            goto label_303db8;
        }
    }
    ctx->pc = 0x303D60u;
label_303d60:
    // 0x303d60: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x303d60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x303d64: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x303d64u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x303d68: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x303d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x303d6c: 0x8f83a0fc  lw          $v1, -0x5F04($gp)
    ctx->pc = 0x303d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942972)));
    // 0x303d70: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x303d70u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x303d74: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x303d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x303d78: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x303d78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x303d7c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x303d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x303d80: 0xac620028  sw          $v0, 0x28($v1)
    ctx->pc = 0x303d80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
    // 0x303d84: 0x24700028  addiu       $s0, $v1, 0x28
    ctx->pc = 0x303d84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x303d88: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x303d88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
    // 0x303d8c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x303D8Cu;
    SET_GPR_U32(ctx, 31, 0x303D94u);
    ctx->pc = 0x303D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x303D8Cu;
            // 0x303d90: 0xac60002c  sw          $zero, 0x2C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303D94u; }
        if (ctx->pc != 0x303D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303D94u; }
        if (ctx->pc != 0x303D94u) { return; }
    }
    ctx->pc = 0x303D94u;
label_303d94:
    // 0x303d94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x303d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303d98: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x303d98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x303d9c: 0xc05190c  jal         func_146430
    ctx->pc = 0x303D9Cu;
    SET_GPR_U32(ctx, 31, 0x303DA4u);
    ctx->pc = 0x303DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x303D9Cu;
            // 0x303da0: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303DA4u; }
        if (ctx->pc != 0x303DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303DA4u; }
        if (ctx->pc != 0x303DA4u) { return; }
    }
    ctx->pc = 0x303DA4u;
label_303da4:
    // 0x303da4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x303da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303da8: 0xc05190c  jal         func_146430
    ctx->pc = 0x303DA8u;
    SET_GPR_U32(ctx, 31, 0x303DB0u);
    ctx->pc = 0x303DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x303DA8u;
            // 0x303dac: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303DB0u; }
        if (ctx->pc != 0x303DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303DB0u; }
        if (ctx->pc != 0x303DB0u) { return; }
    }
    ctx->pc = 0x303DB0u;
label_303db0:
    // 0x303db0: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x303db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x303db4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x303db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_303db8:
    // 0x303db8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x303db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x303dbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x303dbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x303dc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x303dc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x303dc4: 0x3e00008  jr          $ra
    ctx->pc = 0x303DC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x303DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303DC4u;
            // 0x303dc8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303DCCu;
}
