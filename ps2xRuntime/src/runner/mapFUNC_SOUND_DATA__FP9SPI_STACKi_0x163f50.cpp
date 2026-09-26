#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mapFUNC_SOUND_DATA__FP9SPI_STACKi
// Address: 0x163f50 - 0x164004
void mapFUNC_SOUND_DATA__FP9SPI_STACKi_0x163f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapFUNC_SOUND_DATA__FP9SPI_STACKi_0x163f50");
#endif

    switch (ctx->pc) {
        case 0x163f7cu: goto label_163f7c;
        case 0x163f8cu: goto label_163f8c;
        case 0x163f9cu: goto label_163f9c;
        case 0x163facu: goto label_163fac;
        case 0x163fc4u: goto label_163fc4;
        case 0x163fd4u: goto label_163fd4;
        case 0x163fe0u: goto label_163fe0;
        default: break;
    }

    ctx->pc = 0x163f50u;

    // 0x163f50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x163f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x163f54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x163f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x163f58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x163f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x163f5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x163f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x163f60: 0x8f828940  lw          $v0, -0x76C0($gp)
    ctx->pc = 0x163f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936896)));
    // 0x163f64: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x163F64u;
    {
        const bool branch_taken_0x163f64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x163F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163F64u;
            // 0x163f68: 0x24500020  addiu       $s0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163f64) {
            ctx->pc = 0x163F74u;
            goto label_163f74;
        }
    }
    ctx->pc = 0x163F6Cu;
    // 0x163f6c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x163F6Cu;
    {
        const bool branch_taken_0x163f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163F6Cu;
            // 0x163f70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163f6c) {
            ctx->pc = 0x163FF0u;
            goto label_163ff0;
        }
    }
    ctx->pc = 0x163F74u;
label_163f74:
    // 0x163f74: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x163F74u;
    SET_GPR_U32(ctx, 31, 0x163F7Cu);
    ctx->pc = 0x163F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163F74u;
            // 0x163f78: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163F7Cu; }
        if (ctx->pc != 0x163F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163F7Cu; }
        if (ctx->pc != 0x163F7Cu) { return; }
    }
    ctx->pc = 0x163F7Cu;
label_163f7c:
    // 0x163f7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x163f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163f80: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x163f80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x163f84: 0xc05190c  jal         func_146430
    ctx->pc = 0x163F84u;
    SET_GPR_U32(ctx, 31, 0x163F8Cu);
    ctx->pc = 0x163F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163F84u;
            // 0x163f88: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163F8Cu; }
        if (ctx->pc != 0x163F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163F8Cu; }
        if (ctx->pc != 0x163F8Cu) { return; }
    }
    ctx->pc = 0x163F8Cu;
label_163f8c:
    // 0x163f8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x163f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163f90: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x163f90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x163f94: 0xc05190c  jal         func_146430
    ctx->pc = 0x163F94u;
    SET_GPR_U32(ctx, 31, 0x163F9Cu);
    ctx->pc = 0x163F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163F94u;
            // 0x163f98: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163F9Cu; }
        if (ctx->pc != 0x163F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163F9Cu; }
        if (ctx->pc != 0x163F9Cu) { return; }
    }
    ctx->pc = 0x163F9Cu;
label_163f9c:
    // 0x163f9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x163f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163fa0: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x163fa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x163fa4: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x163FA4u;
    SET_GPR_U32(ctx, 31, 0x163FACu);
    ctx->pc = 0x163FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163FA4u;
            // 0x163fa8: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163FACu; }
        if (ctx->pc != 0x163FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163FACu; }
        if (ctx->pc != 0x163FACu) { return; }
    }
    ctx->pc = 0x163FACu;
label_163fac:
    // 0x163fac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163facu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163fb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x163fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163fb4: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x163fb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x163fb8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x163fb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x163fbc: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x163FBCu;
    SET_GPR_U32(ctx, 31, 0x163FC4u);
    ctx->pc = 0x163FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163FBCu;
            // 0x163fc0: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163FC4u; }
        if (ctx->pc != 0x163FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163FC4u; }
        if (ctx->pc != 0x163FC4u) { return; }
    }
    ctx->pc = 0x163FC4u;
label_163fc4:
    // 0x163fc4: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x163fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x163fc8: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x163fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x163fcc: 0xc051928  jal         func_1464A0
    ctx->pc = 0x163FCCu;
    SET_GPR_U32(ctx, 31, 0x163FD4u);
    ctx->pc = 0x163FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163FCCu;
            // 0x163fd0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1464A0u;
    if (runtime->hasFunction(0x1464A0u)) {
        auto targetFn = runtime->lookupFunction(0x1464A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163FD4u; }
        if (ctx->pc != 0x163FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackVector__FPfP9SPI_STACK_0x1464a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163FD4u; }
        if (ctx->pc != 0x163FD4u) { return; }
    }
    ctx->pc = 0x163FD4u;
label_163fd4:
    // 0x163fd4: 0x26250018  addiu       $a1, $s1, 0x18
    ctx->pc = 0x163fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x163fd8: 0xc051928  jal         func_1464A0
    ctx->pc = 0x163FD8u;
    SET_GPR_U32(ctx, 31, 0x163FE0u);
    ctx->pc = 0x163FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163FD8u;
            // 0x163fdc: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1464A0u;
    if (runtime->hasFunction(0x1464A0u)) {
        auto targetFn = runtime->lookupFunction(0x1464A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163FE0u; }
        if (ctx->pc != 0x163FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackVector__FPfP9SPI_STACK_0x1464a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163FE0u; }
        if (ctx->pc != 0x163FE0u) { return; }
    }
    ctx->pc = 0x163FE0u;
label_163fe0:
    // 0x163fe0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x163fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x163fe4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x163fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x163fe8: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x163fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x163fec: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x163fecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_163ff0:
    // 0x163ff0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x163ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x163ff4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x163ff4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x163ff8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x163ff8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163ffc: 0x3e00008  jr          $ra
    ctx->pc = 0x163FFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163FFCu;
            // 0x164000: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x164004u;
}
