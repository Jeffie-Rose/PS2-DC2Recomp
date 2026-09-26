#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_PARTS_EFFECT__FP9SPI_STACKi
// Address: 0x253d80 - 0x253e58
void ps2__MENU_PARTS_EFFECT__FP9SPI_STACKi_0x253d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_PARTS_EFFECT__FP9SPI_STACKi_0x253d80");
#endif

    switch (ctx->pc) {
        case 0x253da8u: goto label_253da8;
        case 0x253dd0u: goto label_253dd0;
        case 0x253df4u: goto label_253df4;
        case 0x253e00u: goto label_253e00;
        default: break;
    }

    ctx->pc = 0x253d80u;

    // 0x253d80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x253d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x253d84: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x253d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x253d88: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x253d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x253d8c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x253d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x253d90: 0x24940008  addiu       $s4, $a0, 0x8
    ctx->pc = 0x253d90u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x253d94: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x253d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x253d98: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x253d98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253d9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x253d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x253da0: 0xc05191c  jal         func_146470
    ctx->pc = 0x253DA0u;
    SET_GPR_U32(ctx, 31, 0x253DA8u);
    ctx->pc = 0x253DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253DA0u;
            // 0x253da4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253DA8u; }
        if (ctx->pc != 0x253DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253DA8u; }
        if (ctx->pc != 0x253DA8u) { return; }
    }
    ctx->pc = 0x253DA8u;
label_253da8:
    // 0x253da8: 0x8f9297c4  lw          $s2, -0x683C($gp)
    ctx->pc = 0x253da8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940612)));
    // 0x253dac: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x253DACu;
    {
        const bool branch_taken_0x253dac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x253dac) {
            ctx->pc = 0x253DBCu;
            goto label_253dbc;
        }
    }
    ctx->pc = 0x253DB4u;
    // 0x253db4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x253DB4u;
    {
        const bool branch_taken_0x253db4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x253DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253DB4u;
            // 0x253db8: 0x3c040035  lui         $a0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253db4) {
            ctx->pc = 0x253DC4u;
            goto label_253dc4;
        }
    }
    ctx->pc = 0x253DBCu;
label_253dbc:
    // 0x253dbc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x253DBCu;
    {
        const bool branch_taken_0x253dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253DBCu;
            // 0x253dc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253dbc) {
            ctx->pc = 0x253E38u;
            goto label_253e38;
        }
    }
    ctx->pc = 0x253DC4u;
label_253dc4:
    // 0x253dc4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x253dc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253dc8: 0xc0948d4  jal         func_252350
    ctx->pc = 0x253DC8u;
    SET_GPR_U32(ctx, 31, 0x253DD0u);
    ctx->pc = 0x253DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253DC8u;
            // 0x253dcc: 0x24841650  addiu       $a0, $a0, 0x1650 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5712));
        ctx->in_delay_slot = false;
    ctx->pc = 0x252350u;
    if (runtime->hasFunction(0x252350u)) {
        auto targetFn = runtime->lookupFunction(0x252350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253DD0u; }
        if (ctx->pc != 0x253DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        menu_spi_analyze_func_strcut1__FP24MENU_SPI_ANALYZE_STRUCT1Pc_0x252350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253DD0u; }
        if (ctx->pc != 0x253DD0u) { return; }
    }
    ctx->pc = 0x253DD0u;
label_253dd0:
    // 0x253dd0: 0xa6420002  sh          $v0, 0x2($s2)
    ctx->pc = 0x253dd0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x253dd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x253dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x253dd8: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x253dd8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x253ddc: 0xa2420001  sb          $v0, 0x1($s2)
    ctx->pc = 0x253ddcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x253de0: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x253de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x253de4: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x253de4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x253de8: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x253DE8u;
    {
        const bool branch_taken_0x253de8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x253DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253DE8u;
            // 0x253dec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253de8) {
            ctx->pc = 0x253E24u;
            goto label_253e24;
        }
    }
    ctx->pc = 0x253DF0u;
    // 0x253df0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x253df0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_253df4:
    // 0x253df4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x253df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253df8: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x253DF8u;
    SET_GPR_U32(ctx, 31, 0x253E00u);
    ctx->pc = 0x253DFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253DF8u;
            // 0x253dfc: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253E00u; }
        if (ctx->pc != 0x253E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253E00u; }
        if (ctx->pc != 0x253E00u) { return; }
    }
    ctx->pc = 0x253E00u;
label_253e00:
    // 0x253e00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x253e00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253e04: 0x2511821  addu        $v1, $s2, $s1
    ctx->pc = 0x253e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x253e08: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x253e08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x253e0c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x253e0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x253e10: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x253e10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x253e14: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x253e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x253e18: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x253e18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x253e1c: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x253E1Cu;
    {
        const bool branch_taken_0x253e1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x253E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253E1Cu;
            // 0x253e20: 0xe4600004  swc1        $f0, 0x4($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x253e1c) {
            ctx->pc = 0x253DF4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_253df4;
        }
    }
    ctx->pc = 0x253E24u;
label_253e24:
    // 0x253e24: 0x0  nop
    ctx->pc = 0x253e24u;
    // NOP
    // 0x253e28: 0x8f8397c4  lw          $v1, -0x683C($gp)
    ctx->pc = 0x253e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940612)));
    // 0x253e2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x253e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x253e30: 0x24630024  addiu       $v1, $v1, 0x24
    ctx->pc = 0x253e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
    // 0x253e34: 0xaf8397c4  sw          $v1, -0x683C($gp)
    ctx->pc = 0x253e34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940612), GPR_U32(ctx, 3));
label_253e38:
    // 0x253e38: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x253e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x253e3c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x253e3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x253e40: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x253e40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x253e44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x253e44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x253e48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x253e48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253e4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x253e4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253e50: 0x3e00008  jr          $ra
    ctx->pc = 0x253E50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253E50u;
            // 0x253e54: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x253E58u;
}
