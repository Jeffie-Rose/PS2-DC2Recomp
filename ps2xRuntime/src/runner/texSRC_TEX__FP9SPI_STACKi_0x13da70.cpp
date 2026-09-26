#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: texSRC_TEX__FP9SPI_STACKi
// Address: 0x13da70 - 0x13db88
void texSRC_TEX__FP9SPI_STACKi_0x13da70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("texSRC_TEX__FP9SPI_STACKi_0x13da70");
#endif

    switch (ctx->pc) {
        case 0x13da88u: goto label_13da88;
        case 0x13dab0u: goto label_13dab0;
        case 0x13dac8u: goto label_13dac8;
        case 0x13dae4u: goto label_13dae4;
        case 0x13db00u: goto label_13db00;
        case 0x13db18u: goto label_13db18;
        case 0x13db70u: goto label_13db70;
        default: break;
    }

    ctx->pc = 0x13da70u;

    // 0x13da70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13da70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13da74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13da74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13da78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13da78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13da7c: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x13da7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x13da80: 0xc05191c  jal         func_146470
    ctx->pc = 0x13DA80u;
    SET_GPR_U32(ctx, 31, 0x13DA88u);
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DA88u; }
        if (ctx->pc != 0x13DA88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DA88u; }
        if (ctx->pc != 0x13DA88u) { return; }
    }
    ctx->pc = 0x13DA88u;
label_13da88:
    // 0x13da88: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13DA88u;
    {
        const bool branch_taken_0x13da88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13da88) {
            ctx->pc = 0x13DA9Cu;
            goto label_13da9c;
        }
    }
    ctx->pc = 0x13DA90u;
    // 0x13da90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13da90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13da94: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x13DA94u;
    {
        const bool branch_taken_0x13da94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13da94) {
            ctx->pc = 0x13DB74u;
            goto label_13db74;
        }
    }
    ctx->pc = 0x13DA9Cu;
label_13da9c:
    // 0x13da9c: 0x8f848738  lw          $a0, -0x78C8($gp)
    ctx->pc = 0x13da9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936376)));
    // 0x13daa0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13daa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13daa4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x13daa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13daa8: 0xc04b414  jal         func_12D050
    ctx->pc = 0x13DAA8u;
    SET_GPR_U32(ctx, 31, 0x13DAB0u);
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DAB0u; }
        if (ctx->pc != 0x13DAB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DAB0u; }
        if (ctx->pc != 0x13DAB0u) { return; }
    }
    ctx->pc = 0x13DAB0u;
label_13dab0:
    // 0x13dab0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x13dab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x13dab4: 0xac220e74  sw          $v0, 0xE74($at)
    ctx->pc = 0x13dab4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3700), GPR_U32(ctx, 2));
    // 0x13dab8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13dab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dabc: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x13dabcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x13dac0: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x13DAC0u;
    SET_GPR_U32(ctx, 31, 0x13DAC8u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DAC8u; }
        if (ctx->pc != 0x13DAC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DAC8u; }
        if (ctx->pc != 0x13DAC8u) { return; }
    }
    ctx->pc = 0x13DAC8u;
label_13dac8:
    // 0x13dac8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13dac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13dacc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x13daccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x13dad0: 0xa4220e7c  sh          $v0, 0xE7C($at)
    ctx->pc = 0x13dad0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 3708), (uint16_t)GPR_U32(ctx, 2));
    // 0x13dad4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13dad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dad8: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x13dad8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x13dadc: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x13DADCu;
    SET_GPR_U32(ctx, 31, 0x13DAE4u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DAE4u; }
        if (ctx->pc != 0x13DAE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DAE4u; }
        if (ctx->pc != 0x13DAE4u) { return; }
    }
    ctx->pc = 0x13DAE4u;
label_13dae4:
    // 0x13dae4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13dae4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13dae8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x13dae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x13daec: 0xa4220e7e  sh          $v0, 0xE7E($at)
    ctx->pc = 0x13daecu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 3710), (uint16_t)GPR_U32(ctx, 2));
    // 0x13daf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13daf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13daf4: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x13daf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x13daf8: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x13DAF8u;
    SET_GPR_U32(ctx, 31, 0x13DB00u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DB00u; }
        if (ctx->pc != 0x13DB00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DB00u; }
        if (ctx->pc != 0x13DB00u) { return; }
    }
    ctx->pc = 0x13DB00u;
label_13db00:
    // 0x13db00: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13db00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13db04: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x13db04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x13db08: 0xa4220e80  sh          $v0, 0xE80($at)
    ctx->pc = 0x13db08u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 3712), (uint16_t)GPR_U32(ctx, 2));
    // 0x13db0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13db0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13db10: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x13DB10u;
    SET_GPR_U32(ctx, 31, 0x13DB18u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DB18u; }
        if (ctx->pc != 0x13DB18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DB18u; }
        if (ctx->pc != 0x13DB18u) { return; }
    }
    ctx->pc = 0x13DB18u;
label_13db18:
    // 0x13db18: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13db18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13db1c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x13db1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x13db20: 0xa4220e82  sh          $v0, 0xE82($at)
    ctx->pc = 0x13db20u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 3714), (uint16_t)GPR_U32(ctx, 2));
    // 0x13db24: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x13db24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x13db28: 0x8c230e74  lw          $v1, 0xE74($at)
    ctx->pc = 0x13db28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 3700)));
    // 0x13db2c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x13DB2Cu;
    {
        const bool branch_taken_0x13db2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13db2c) {
            ctx->pc = 0x13DB70u;
            goto label_13db70;
        }
    }
    ctx->pc = 0x13DB34u;
    // 0x13db34: 0x8f848748  lw          $a0, -0x78B8($gp)
    ctx->pc = 0x13db34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936392)));
    // 0x13db38: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13DB38u;
    {
        const bool branch_taken_0x13db38 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x13db38) {
            ctx->pc = 0x13DB50u;
            goto label_13db50;
        }
    }
    ctx->pc = 0x13DB40u;
    // 0x13db40: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x13db40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13db44: 0xaf828748  sw          $v0, -0x78B8($gp)
    ctx->pc = 0x13db44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936392), GPR_U32(ctx, 2));
    // 0x13db48: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x13DB48u;
    {
        const bool branch_taken_0x13db48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13db48) {
            ctx->pc = 0x13DB70u;
            goto label_13db70;
        }
    }
    ctx->pc = 0x13DB50u;
label_13db50:
    // 0x13db50: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x13db50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13db54: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13DB54u;
    {
        const bool branch_taken_0x13db54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x13db54) {
            ctx->pc = 0x13DB70u;
            goto label_13db70;
        }
    }
    ctx->pc = 0x13DB5Cu;
    // 0x13db5c: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x13db5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x13db60: 0x24842690  addiu       $a0, $a0, 0x2690
    ctx->pc = 0x13db60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9872));
    // 0x13db64: 0x24650008  addiu       $a1, $v1, 0x8
    ctx->pc = 0x13db64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x13db68: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x13DB68u;
    SET_GPR_U32(ctx, 31, 0x13DB70u);
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DB70u; }
        if (ctx->pc != 0x13DB70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DB70u; }
        if (ctx->pc != 0x13DB70u) { return; }
    }
    ctx->pc = 0x13DB70u;
label_13db70:
    // 0x13db70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13db70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13db74:
    // 0x13db74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13db74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13db78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13db78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13db7c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x13db7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13db80: 0x3e00008  jr          $ra
    ctx->pc = 0x13DB80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13DB88u;
}
