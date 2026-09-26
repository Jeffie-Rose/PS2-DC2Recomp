#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: gcHP__FP9SPI_STACKi
// Address: 0x193d60 - 0x193dd4
void gcHP__FP9SPI_STACKi_0x193d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gcHP__FP9SPI_STACKi_0x193d60");
#endif

    switch (ctx->pc) {
        case 0x193d78u: goto label_193d78;
        case 0x193d84u: goto label_193d84;
        case 0x193d8cu: goto label_193d8c;
        case 0x193da0u: goto label_193da0;
        default: break;
    }

    ctx->pc = 0x193d60u;

    // 0x193d60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x193d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x193d64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x193d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x193d68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x193d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x193d6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x193d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x193d70: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x193D70u;
    SET_GPR_U32(ctx, 31, 0x193D78u);
    ctx->pc = 0x193D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193D70u;
            // 0x193d74: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193D78u; }
        if (ctx->pc != 0x193D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193D78u; }
        if (ctx->pc != 0x193D78u) { return; }
    }
    ctx->pc = 0x193D78u;
label_193d78:
    // 0x193d78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193d7c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x193D7Cu;
    SET_GPR_U32(ctx, 31, 0x193D84u);
    ctx->pc = 0x193D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193D7Cu;
            // 0x193d80: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193D84u; }
        if (ctx->pc != 0x193D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193D84u; }
        if (ctx->pc != 0x193D84u) { return; }
    }
    ctx->pc = 0x193D84u;
label_193d84:
    // 0x193d84: 0xc064220  jal         func_190880
    ctx->pc = 0x193D84u;
    SET_GPR_U32(ctx, 31, 0x193D8Cu);
    ctx->pc = 0x193D88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193D84u;
            // 0x193d88: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193D8Cu; }
        if (ctx->pc != 0x193D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193D8Cu; }
        if (ctx->pc != 0x193D8Cu) { return; }
    }
    ctx->pc = 0x193D8Cu;
label_193d8c:
    // 0x193d8c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x193d8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x193d90: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x193d90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193d94: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x193d94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
    // 0x193d98: 0xc066d24  jal         func_19B490
    ctx->pc = 0x193D98u;
    SET_GPR_U32(ctx, 31, 0x193DA0u);
    ctx->pc = 0x193D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193D98u;
            // 0x193d9c: 0x412021  addu        $a0, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B490u;
    if (runtime->hasFunction(0x19B490u)) {
        auto targetFn = runtime->lookupFunction(0x19B490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193DA0u; }
        if (ctx->pc != 0x193DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaDataPtr__16CUserDataManagerFi_0x19b490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193DA0u; }
        if (ctx->pc != 0x193DA0u) { return; }
    }
    ctx->pc = 0x193DA0u;
label_193da0:
    // 0x193da0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x193DA0u;
    {
        const bool branch_taken_0x193da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x193da0) {
            ctx->pc = 0x193DBCu;
            goto label_193dbc;
        }
    }
    ctx->pc = 0x193DA8u;
    // 0x193da8: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x193da8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193dac: 0x0  nop
    ctx->pc = 0x193dacu;
    // NOP
    // 0x193db0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x193db0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x193db4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x193db4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x193db8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x193db8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_193dbc:
    // 0x193dbc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x193dbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193dc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x193dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193dc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x193dc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193dc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x193dc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193dcc: 0x3e00008  jr          $ra
    ctx->pc = 0x193DCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193DCCu;
            // 0x193dd0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x193DD4u;
}
