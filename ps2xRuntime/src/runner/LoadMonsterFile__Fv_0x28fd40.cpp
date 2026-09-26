#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadMonsterFile__Fv
// Address: 0x28fd40 - 0x28ff18
void LoadMonsterFile__Fv_0x28fd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadMonsterFile__Fv_0x28fd40");
#endif

    switch (ctx->pc) {
        case 0x28fd70u: goto label_28fd70;
        case 0x28fd7cu: goto label_28fd7c;
        case 0x28fd88u: goto label_28fd88;
        case 0x28fd94u: goto label_28fd94;
        case 0x28fda4u: goto label_28fda4;
        case 0x28fdb0u: goto label_28fdb0;
        case 0x28fdc8u: goto label_28fdc8;
        case 0x28fde8u: goto label_28fde8;
        case 0x28fe14u: goto label_28fe14;
        case 0x28fe78u: goto label_28fe78;
        case 0x28fe88u: goto label_28fe88;
        case 0x28fe94u: goto label_28fe94;
        case 0x28feb4u: goto label_28feb4;
        case 0x28fed0u: goto label_28fed0;
        case 0x28fee8u: goto label_28fee8;
        default: break;
    }

    ctx->pc = 0x28fd40u;

    // 0x28fd40: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x28fd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x28fd44: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x28fd44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x28fd48: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x28fd48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x28fd4c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28fd4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x28fd50: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28fd50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28fd54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28fd54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28fd58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28fd58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28fd5c: 0x8f848db8  lw          $a0, -0x7248($gp)
    ctx->pc = 0x28fd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x28fd60: 0x10800065  beqz        $a0, . + 4 + (0x65 << 2)
    ctx->pc = 0x28FD60u;
    {
        const bool branch_taken_0x28fd60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FD64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FD60u;
            // 0x28fd64: 0x8f858dac  lw          $a1, -0x7254($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fd60) {
            ctx->pc = 0x28FEF8u;
            goto label_28fef8;
        }
    }
    ctx->pc = 0x28FD68u;
    // 0x28fd68: 0xc076bb0  jal         func_1DAEC0
    ctx->pc = 0x28FD68u;
    SET_GPR_U32(ctx, 31, 0x28FD70u);
    ctx->pc = 0x1DAEC0u;
    if (runtime->hasFunction(0x1DAEC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DAEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FD70u; }
        if (ctx->pc != 0x28FD70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11CMonsterManFP6CScene_0x1daec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FD70u; }
        if (ctx->pc != 0x28FD70u) { return; }
    }
    ctx->pc = 0x28FD70u;
label_28fd70:
    // 0x28fd70: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x28fd70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
    // 0x28fd74: 0xc0a0c9c  jal         func_283270
    ctx->pc = 0x28FD74u;
    SET_GPR_U32(ctx, 31, 0x28FD7Cu);
    ctx->pc = 0x28FD78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28FD74u;
            // 0x28fd78: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283270u;
    if (runtime->hasFunction(0x283270u)) {
        auto targetFn = runtime->lookupFunction(0x283270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FD7Cu; }
        if (ctx->pc != 0x28FD7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AssignStack__6CSceneFi_0x283270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FD7Cu; }
        if (ctx->pc != 0x28FD7Cu) { return; }
    }
    ctx->pc = 0x28FD7Cu;
label_28fd7c:
    // 0x28fd7c: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x28fd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
    // 0x28fd80: 0xc0a0c74  jal         func_2831D0
    ctx->pc = 0x28FD80u;
    SET_GPR_U32(ctx, 31, 0x28FD88u);
    ctx->pc = 0x28FD84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28FD80u;
            // 0x28fd84: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2831D0u;
    if (runtime->hasFunction(0x2831D0u)) {
        auto targetFn = runtime->lookupFunction(0x2831D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FD88u; }
        if (ctx->pc != 0x28FD88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ClearStack__6CSceneFi_0x2831d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FD88u; }
        if (ctx->pc != 0x28FD88u) { return; }
    }
    ctx->pc = 0x28FD88u;
label_28fd88:
    // 0x28fd88: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x28fd88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
    // 0x28fd8c: 0xc0a0c64  jal         func_283190
    ctx->pc = 0x28FD8Cu;
    SET_GPR_U32(ctx, 31, 0x28FD94u);
    ctx->pc = 0x28FD90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28FD8Cu;
            // 0x28fd90: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283190u;
    if (runtime->hasFunction(0x283190u)) {
        auto targetFn = runtime->lookupFunction(0x283190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FD94u; }
        if (ctx->pc != 0x28FD94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStack__6CSceneFi_0x283190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FD94u; }
        if (ctx->pc != 0x28FD94u) { return; }
    }
    ctx->pc = 0x28FD94u;
label_28fd94:
    // 0x28fd94: 0x8f928db8  lw          $s2, -0x7248($gp)
    ctx->pc = 0x28fd94u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x28fd98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28fd98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fd9c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x28fd9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fda0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x28fda0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28fda4:
    // 0x28fda4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28fda4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fda8: 0xc04e704  jal         func_139C10
    ctx->pc = 0x28FDA8u;
    SET_GPR_U32(ctx, 31, 0x28FDB0u);
    ctx->pc = 0x28FDACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28FDA8u;
            // 0x28fdac: 0x24050fa0  addiu       $a1, $zero, 0xFA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FDB0u; }
        if (ctx->pc != 0x28FDB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FDB0u; }
        if (ctx->pc != 0x28FDB0u) { return; }
    }
    ctx->pc = 0x28FDB0u;
label_28fdb0:
    // 0x28fdb0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28fdb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fdb4: 0x24060fa0  addiu       $a2, $zero, 0xFA0
    ctx->pc = 0x28fdb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4000));
    // 0x28fdb8: 0x2531021  addu        $v0, $s2, $s3
    ctx->pc = 0x28fdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x28fdbc: 0x24540004  addiu       $s4, $v0, 0x4
    ctx->pc = 0x28fdbcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x28fdc0: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x28FDC0u;
    SET_GPR_U32(ctx, 31, 0x28FDC8u);
    ctx->pc = 0x28FDC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28FDC0u;
            // 0x28fdc4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FDC8u; }
        if (ctx->pc != 0x28FDC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FDC8u; }
        if (ctx->pc != 0x28FDC8u) { return; }
    }
    ctx->pc = 0x28FDC8u;
label_28fdc8:
    // 0x28fdc8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x28fdc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x28fdcc: 0xae800024  sw          $zero, 0x24($s4)
    ctx->pc = 0x28fdccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 0));
    // 0x28fdd0: 0x2a220018  slti        $v0, $s1, 0x18
    ctx->pc = 0x28fdd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x28fdd4: 0x26730030  addiu       $s3, $s3, 0x30
    ctx->pc = 0x28fdd4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x28fdd8: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x28FDD8u;
    {
        const bool branch_taken_0x28fdd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28FDDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FDD8u;
            // 0x28fddc: 0xae80001c  sw          $zero, 0x1C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fdd8) {
            ctx->pc = 0x28FDA4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28fda4;
        }
    }
    ctx->pc = 0x28FDE0u;
    // 0x28fde0: 0xc06334c  jal         func_18CD30
    ctx->pc = 0x28FDE0u;
    SET_GPR_U32(ctx, 31, 0x28FDE8u);
    ctx->pc = 0x28FDE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28FDE0u;
            // 0x28fde4: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CD30u;
    if (runtime->hasFunction(0x18CD30u)) {
        auto targetFn = runtime->lookupFunction(0x18CD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FDE8u; }
        if (ctx->pc != 0x28FDE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndInitPort__Fi_0x18cd30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FDE8u; }
        if (ctx->pc != 0x28FDE8u) { return; }
    }
    ctx->pc = 0x28FDE8u;
label_28fde8:
    // 0x28fde8: 0x8f838da8  lw          $v1, -0x7258($gp)
    ctx->pc = 0x28fde8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938024)));
    // 0x28fdec: 0x3405fff4  ori         $a1, $zero, 0xFFF4
    ctx->pc = 0x28fdecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65524);
    // 0x28fdf0: 0x8f828db8  lw          $v0, -0x7248($gp)
    ctx->pc = 0x28fdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x28fdf4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28fdf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fdf8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28fdf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fdfc: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x28fdfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28fe00: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x28fe00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x28fe04: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x28fe04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x28fe08: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x28fe08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x28fe0c: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x28fe0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x28fe10: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x28fe10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_28fe14:
    // 0x28fe14: 0xa74021  addu        $t0, $a1, $a3
    ctx->pc = 0x28fe14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x28fe18: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x28fe18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x28fe1c: 0xa503004c  sh          $v1, 0x4C($t0)
    ctx->pc = 0x28fe1cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 76), (uint16_t)GPR_U32(ctx, 3));
    // 0x28fe20: 0x28820020  slti        $v0, $a0, 0x20
    ctx->pc = 0x28fe20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x28fe24: 0xa503000c  sh          $v1, 0xC($t0)
    ctx->pc = 0x28fe24u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x28fe28: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x28fe28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x28fe2c: 0xa503004e  sh          $v1, 0x4E($t0)
    ctx->pc = 0x28fe2cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 78), (uint16_t)GPR_U32(ctx, 3));
    // 0x28fe30: 0xa503000e  sh          $v1, 0xE($t0)
    ctx->pc = 0x28fe30u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x28fe34: 0xa5030050  sh          $v1, 0x50($t0)
    ctx->pc = 0x28fe34u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 80), (uint16_t)GPR_U32(ctx, 3));
    // 0x28fe38: 0xa5030010  sh          $v1, 0x10($t0)
    ctx->pc = 0x28fe38u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x28fe3c: 0xa5030052  sh          $v1, 0x52($t0)
    ctx->pc = 0x28fe3cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 82), (uint16_t)GPR_U32(ctx, 3));
    // 0x28fe40: 0xa5030012  sh          $v1, 0x12($t0)
    ctx->pc = 0x28fe40u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x28fe44: 0xa5030054  sh          $v1, 0x54($t0)
    ctx->pc = 0x28fe44u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 84), (uint16_t)GPR_U32(ctx, 3));
    // 0x28fe48: 0xa5030014  sh          $v1, 0x14($t0)
    ctx->pc = 0x28fe48u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x28fe4c: 0xa5030056  sh          $v1, 0x56($t0)
    ctx->pc = 0x28fe4cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 86), (uint16_t)GPR_U32(ctx, 3));
    // 0x28fe50: 0xa5030016  sh          $v1, 0x16($t0)
    ctx->pc = 0x28fe50u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 22), (uint16_t)GPR_U32(ctx, 3));
    // 0x28fe54: 0xa5030058  sh          $v1, 0x58($t0)
    ctx->pc = 0x28fe54u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 88), (uint16_t)GPR_U32(ctx, 3));
    // 0x28fe58: 0xa5030018  sh          $v1, 0x18($t0)
    ctx->pc = 0x28fe58u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 24), (uint16_t)GPR_U32(ctx, 3));
    // 0x28fe5c: 0xa503005a  sh          $v1, 0x5A($t0)
    ctx->pc = 0x28fe5cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 90), (uint16_t)GPR_U32(ctx, 3));
    // 0x28fe60: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x28FE60u;
    {
        const bool branch_taken_0x28fe60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28FE64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FE60u;
            // 0x28fe64: 0xa503001a  sh          $v1, 0x1A($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 26), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fe60) {
            ctx->pc = 0x28FE14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28fe14;
        }
    }
    ctx->pc = 0x28FE68u;
    // 0x28fe68: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x28fe68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x28fe6c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x28fe6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x28fe70: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x28FE70u;
    SET_GPR_U32(ctx, 31, 0x28FE78u);
    ctx->pc = 0x28FE74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28FE70u;
            // 0x28fe74: 0x24a5d8c0  addiu       $a1, $a1, -0x2740 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FE78u; }
        if (ctx->pc != 0x28FE78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FE78u; }
        if (ctx->pc != 0x28FE78u) { return; }
    }
    ctx->pc = 0x28FE78u;
label_28fe78:
    // 0x28fe78: 0x8f858d74  lw          $a1, -0x728C($gp)
    ctx->pc = 0x28fe78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937972)));
    // 0x28fe7c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x28fe7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x28fe80: 0xc0524c8  jal         func_149320
    ctx->pc = 0x28FE80u;
    SET_GPR_U32(ctx, 31, 0x28FE88u);
    ctx->pc = 0x28FE84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28FE80u;
            // 0x28fe84: 0x27a600ac  addiu       $a2, $sp, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149320u;
    if (runtime->hasFunction(0x149320u)) {
        auto targetFn = runtime->lookupFunction(0x149320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FE88u; }
        if (ctx->pc != 0x28FE88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile__FPcPvPi_0x149320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FE88u; }
        if (ctx->pc != 0x28FE88u) { return; }
    }
    ctx->pc = 0x28FE88u;
label_28fe88:
    // 0x28fe88: 0x8fa500ac  lw          $a1, 0xAC($sp)
    ctx->pc = 0x28fe88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x28fe8c: 0xc0a3c14  jal         func_28F050
    ctx->pc = 0x28FE8Cu;
    SET_GPR_U32(ctx, 31, 0x28FE94u);
    ctx->pc = 0x28FE90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28FE8Cu;
            // 0x28fe90: 0x8f848d74  lw          $a0, -0x728C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937972)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28F050u;
    if (runtime->hasFunction(0x28F050u)) {
        auto targetFn = runtime->lookupFunction(0x28F050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FE94u; }
        if (ctx->pc != 0x28FE94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatMonsterFloorInfo__FPci_0x28f050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FE94u; }
        if (ctx->pc != 0x28FE94u) { return; }
    }
    ctx->pc = 0x28FE94u;
label_28fe94:
    // 0x28fe94: 0x8f838db8  lw          $v1, -0x7248($gp)
    ctx->pc = 0x28fe94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x28fe98: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x28fe98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x28fe9c: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x28fe9cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x28fea0: 0x8c31fff4  lw          $s1, -0xC($at)
    ctx->pc = 0x28fea0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294967284)));
    // 0x28fea4: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x28fea4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x28fea8: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x28FEA8u;
    {
        const bool branch_taken_0x28fea8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FEACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FEA8u;
            // 0x28feac: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fea8) {
            ctx->pc = 0x28FEF8u;
            goto label_28fef8;
        }
    }
    ctx->pc = 0x28FEB0u;
    // 0x28feb0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x28feb0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28feb4:
    // 0x28feb4: 0x8f848db8  lw          $a0, -0x7248($gp)
    ctx->pc = 0x28feb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x28feb8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x28feb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x28febc: 0x941021  addu        $v0, $a0, $s4
    ctx->pc = 0x28febcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x28fec0: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x28fec0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x28fec4: 0x84330000  lh          $s3, 0x0($at)
    ctx->pc = 0x28fec4u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 0)));
    // 0x28fec8: 0xc076db0  jal         func_1DB6C0
    ctx->pc = 0x28FEC8u;
    SET_GPR_U32(ctx, 31, 0x28FED0u);
    ctx->pc = 0x28FECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28FEC8u;
            // 0x28fecc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB6C0u;
    if (runtime->hasFunction(0x1DB6C0u)) {
        auto targetFn = runtime->lookupFunction(0x1DB6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FED0u; }
        if (ctx->pc != 0x28FED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchBaseIndex__11CMonsterManFi_0x1db6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FED0u; }
        if (ctx->pc != 0x28FED0u) { return; }
    }
    ctx->pc = 0x28FED0u;
label_28fed0:
    // 0x28fed0: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28FED0u;
    {
        const bool branch_taken_0x28fed0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x28fed0) {
            ctx->pc = 0x28FEE8u;
            goto label_28fee8;
        }
    }
    ctx->pc = 0x28FED8u;
    // 0x28fed8: 0x8f848db8  lw          $a0, -0x7248($gp)
    ctx->pc = 0x28fed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x28fedc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x28fedcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fee0: 0xc076e14  jal         func_1DB850
    ctx->pc = 0x28FEE0u;
    SET_GPR_U32(ctx, 31, 0x28FEE8u);
    ctx->pc = 0x28FEE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28FEE0u;
            // 0x28fee4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB850u;
    if (runtime->hasFunction(0x1DB850u)) {
        auto targetFn = runtime->lookupFunction(0x1DB850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FEE8u; }
        if (ctx->pc != 0x28FEE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EntryRefer__11CMonsterManFiP9mgCMemory_0x1db850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FEE8u; }
        if (ctx->pc != 0x28FEE8u) { return; }
    }
    ctx->pc = 0x28FEE8u;
label_28fee8:
    // 0x28fee8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x28fee8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x28feec: 0x251182a  slt         $v1, $s2, $s1
    ctx->pc = 0x28feecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x28fef0: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x28FEF0u;
    {
        const bool branch_taken_0x28fef0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28FEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FEF0u;
            // 0x28fef4: 0x26940002  addiu       $s4, $s4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fef0) {
            ctx->pc = 0x28FEB4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28feb4;
        }
    }
    ctx->pc = 0x28FEF8u;
label_28fef8:
    // 0x28fef8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x28fef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28fefc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28fefcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28ff00: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28ff00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28ff04: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28ff04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28ff08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28ff08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28ff0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28ff0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ff10: 0x3e00008  jr          $ra
    ctx->pc = 0x28FF10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28FF14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FF10u;
            // 0x28ff14: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28FF18u;
}
