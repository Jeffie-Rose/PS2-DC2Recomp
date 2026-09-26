#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _LOD_MODEL__FP9SPI_STACKi
// Address: 0x1786f0 - 0x178a34
void ps2__LOD_MODEL__FP9SPI_STACKi_0x1786f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__LOD_MODEL__FP9SPI_STACKi_0x1786f0");
#endif

    switch (ctx->pc) {
        case 0x178724u: goto label_178724;
        case 0x178768u: goto label_178768;
        case 0x178778u: goto label_178778;
        case 0x178788u: goto label_178788;
        case 0x178794u: goto label_178794;
        case 0x1787a8u: goto label_1787a8;
        case 0x1787bcu: goto label_1787bc;
        case 0x1787d0u: goto label_1787d0;
        case 0x178808u: goto label_178808;
        case 0x178818u: goto label_178818;
        case 0x178830u: goto label_178830;
        case 0x178880u: goto label_178880;
        case 0x1788b8u: goto label_1788b8;
        case 0x17892cu: goto label_17892c;
        case 0x17896cu: goto label_17896c;
        case 0x178978u: goto label_178978;
        case 0x1789acu: goto label_1789ac;
        case 0x1789ccu: goto label_1789cc;
        default: break;
    }

    ctx->pc = 0x1786f0u;

    // 0x1786f0: 0x3c01fffe  lui         $at, 0xFFFE
    ctx->pc = 0x1786f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65534 << 16));
    // 0x1786f4: 0x34216d10  ori         $at, $at, 0x6D10
    ctx->pc = 0x1786f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27920);
    // 0x1786f8: 0x3a1e821  addu        $sp, $sp, $at
    ctx->pc = 0x1786f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x1786fc: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1786fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x178700: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x178700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x178704: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x178704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x178708: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x178708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x17870c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17870cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x178710: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x178710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x178714: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x178714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x178718: 0x24920008  addiu       $s2, $a0, 0x8
    ctx->pc = 0x178718u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x17871c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x17871Cu;
    SET_GPR_U32(ctx, 31, 0x178724u);
    ctx->pc = 0x178720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17871Cu;
            // 0x178720: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178724u; }
        if (ctx->pc != 0x178724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178724u; }
        if (ctx->pc != 0x178724u) { return; }
    }
    ctx->pc = 0x178724u;
label_178724:
    // 0x178724: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x178724u;
    {
        const bool branch_taken_0x178724 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x178724) {
            ctx->pc = 0x178740u;
            goto label_178740;
        }
    }
    ctx->pc = 0x17872Cu;
    // 0x17872c: 0x8f8489a8  lw          $a0, -0x7658($gp)
    ctx->pc = 0x17872cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x178730: 0x8c83034c  lw          $v1, 0x34C($a0)
    ctx->pc = 0x178730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 844)));
    // 0x178734: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x178734u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x178738: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x178738u;
    {
        const bool branch_taken_0x178738 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x178738) {
            ctx->pc = 0x178748u;
            goto label_178748;
        }
    }
    ctx->pc = 0x178740u;
label_178740:
    // 0x178740: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x178740u;
    {
        const bool branch_taken_0x178740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178740u;
            // 0x178744: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178740) {
            ctx->pc = 0x178A04u;
            goto label_178a04;
        }
    }
    ctx->pc = 0x178748u;
label_178748:
    // 0x178748: 0x8c830350  lw          $v1, 0x350($a0)
    ctx->pc = 0x178748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 848)));
    // 0x17874c: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x17874cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x178750: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x178750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x178754: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x178754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178758: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x178758u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x17875c: 0x24920008  addiu       $s2, $a0, 0x8
    ctx->pc = 0x17875cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x178760: 0xc05191c  jal         func_146470
    ctx->pc = 0x178760u;
    SET_GPR_U32(ctx, 31, 0x178768u);
    ctx->pc = 0x178764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178760u;
            // 0x178764: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178768u; }
        if (ctx->pc != 0x178768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178768u; }
        if (ctx->pc != 0x178768u) { return; }
    }
    ctx->pc = 0x178768u;
label_178768:
    // 0x178768: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x178768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17876c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x17876cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178770: 0xc05191c  jal         func_146470
    ctx->pc = 0x178770u;
    SET_GPR_U32(ctx, 31, 0x178778u);
    ctx->pc = 0x178774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178770u;
            // 0x178774: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178778u; }
        if (ctx->pc != 0x178778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178778u; }
        if (ctx->pc != 0x178778u) { return; }
    }
    ctx->pc = 0x178778u;
label_178778:
    // 0x178778: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x178778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17877c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x17877cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178780: 0xc05191c  jal         func_146470
    ctx->pc = 0x178780u;
    SET_GPR_U32(ctx, 31, 0x178788u);
    ctx->pc = 0x178784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178780u;
            // 0x178784: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178788u; }
        if (ctx->pc != 0x178788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178788u; }
        if (ctx->pc != 0x178788u) { return; }
    }
    ctx->pc = 0x178788u;
label_178788:
    // 0x178788: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x178788u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17878c: 0xc05190c  jal         func_146430
    ctx->pc = 0x17878Cu;
    SET_GPR_U32(ctx, 31, 0x178794u);
    ctx->pc = 0x178790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17878Cu;
            // 0x178790: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178794u; }
        if (ctx->pc != 0x178794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178794u; }
        if (ctx->pc != 0x178794u) { return; }
    }
    ctx->pc = 0x178794u;
label_178794:
    // 0x178794: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x178794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x178798: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x178798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17879c: 0x8f8489f0  lw          $a0, -0x7610($gp)
    ctx->pc = 0x17879cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937072)));
    // 0x1787a0: 0xc052734  jal         func_149CD0
    ctx->pc = 0x1787A0u;
    SET_GPR_U32(ctx, 31, 0x1787A8u);
    ctx->pc = 0x1787A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1787A0u;
            // 0x1787a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1787A8u; }
        if (ctx->pc != 0x1787A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1787A8u; }
        if (ctx->pc != 0x1787A8u) { return; }
    }
    ctx->pc = 0x1787A8u;
label_1787a8:
    // 0x1787a8: 0x8f8489f0  lw          $a0, -0x7610($gp)
    ctx->pc = 0x1787a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937072)));
    // 0x1787ac: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1787acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1787b0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1787b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1787b4: 0xc052734  jal         func_149CD0
    ctx->pc = 0x1787B4u;
    SET_GPR_U32(ctx, 31, 0x1787BCu);
    ctx->pc = 0x1787B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1787B4u;
            // 0x1787b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1787BCu; }
        if (ctx->pc != 0x1787BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1787BCu; }
        if (ctx->pc != 0x1787BCu) { return; }
    }
    ctx->pc = 0x1787BCu;
label_1787bc:
    // 0x1787bc: 0x8f8489f0  lw          $a0, -0x7610($gp)
    ctx->pc = 0x1787bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937072)));
    // 0x1787c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1787c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1787c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1787c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1787c8: 0xc052734  jal         func_149CD0
    ctx->pc = 0x1787C8u;
    SET_GPR_U32(ctx, 31, 0x1787D0u);
    ctx->pc = 0x1787CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1787C8u;
            // 0x1787cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1787D0u; }
        if (ctx->pc != 0x1787D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1787D0u; }
        if (ctx->pc != 0x1787D0u) { return; }
    }
    ctx->pc = 0x1787D0u;
label_1787d0:
    // 0x1787d0: 0x16a00003  bnez        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x1787D0u;
    {
        const bool branch_taken_0x1787d0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x1787D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1787D0u;
            // 0x1787d4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1787d0) {
            ctx->pc = 0x1787E0u;
            goto label_1787e0;
        }
    }
    ctx->pc = 0x1787D8u;
    // 0x1787d8: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x1787D8u;
    {
        const bool branch_taken_0x1787d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1787DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1787D8u;
            // 0x1787dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1787d8) {
            ctx->pc = 0x178A04u;
            goto label_178a04;
        }
    }
    ctx->pc = 0x1787E0u;
label_1787e0:
    // 0x1787e0: 0x8f8289a8  lw          $v0, -0x7658($gp)
    ctx->pc = 0x1787e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x1787e4: 0x8c540070  lw          $s4, 0x70($v0)
    ctx->pc = 0x1787e4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x1787e8: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1787E8u;
    {
        const bool branch_taken_0x1787e8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1787ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1787E8u;
            // 0x1787ec: 0x27a40280  addiu       $a0, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1787e8) {
            ctx->pc = 0x1787F8u;
            goto label_1787f8;
        }
    }
    ctx->pc = 0x1787F0u;
    // 0x1787f0: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x1787F0u;
    {
        const bool branch_taken_0x1787f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1787F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1787F0u;
            // 0x1787f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1787f0) {
            ctx->pc = 0x178A04u;
            goto label_178a04;
        }
    }
    ctx->pc = 0x1787F8u;
label_1787f8:
    // 0x1787f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1787f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1787fc: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1787fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x178800: 0xc049c86  jal         func_127218
    ctx->pc = 0x178800u;
    SET_GPR_U32(ctx, 31, 0x178808u);
    ctx->pc = 0x178804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178800u;
            // 0x178804: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178808u; }
        if (ctx->pc != 0x178808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178808u; }
        if (ctx->pc != 0x178808u) { return; }
    }
    ctx->pc = 0x178808u;
label_178808:
    // 0x178808: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x178808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x17880c: 0x342192c0  ori         $at, $at, 0x92C0
    ctx->pc = 0x17880cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37568);
    // 0x178810: 0xc04e640  jal         func_139900
    ctx->pc = 0x178810u;
    SET_GPR_U32(ctx, 31, 0x178818u);
    ctx->pc = 0x178814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178810u;
            // 0x178814: 0x3a12021  addu        $a0, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178818u; }
        if (ctx->pc != 0x178818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178818u; }
        if (ctx->pc != 0x178818u) { return; }
    }
    ctx->pc = 0x178818u;
label_178818:
    // 0x178818: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x178818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x17881c: 0x27a502c0  addiu       $a1, $sp, 0x2C0
    ctx->pc = 0x17881cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
    // 0x178820: 0x342192c0  ori         $at, $at, 0x92C0
    ctx->pc = 0x178820u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37568);
    // 0x178824: 0x24061900  addiu       $a2, $zero, 0x1900
    ctx->pc = 0x178824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6400));
    // 0x178828: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x178828u;
    SET_GPR_U32(ctx, 31, 0x178830u);
    ctx->pc = 0x17882Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178828u;
            // 0x17882c: 0x3a12021  addu        $a0, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178830u; }
        if (ctx->pc != 0x178830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178830u; }
        if (ctx->pc != 0x178830u) { return; }
    }
    ctx->pc = 0x178830u;
label_178830:
    // 0x178830: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x178830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x178834: 0xafb50280  sw          $s5, 0x280($sp)
    ctx->pc = 0x178834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 21));
    // 0x178838: 0x342192c0  ori         $at, $at, 0x92C0
    ctx->pc = 0x178838u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37568);
    // 0x17883c: 0x3a11021  addu        $v0, $sp, $at
    ctx->pc = 0x17883cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x178840: 0xafa20288  sw          $v0, 0x288($sp)
    ctx->pc = 0x178840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 648), GPR_U32(ctx, 2));
    // 0x178844: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x178844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x178848: 0xafa2028c  sw          $v0, 0x28C($sp)
    ctx->pc = 0x178848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 652), GPR_U32(ctx, 2));
    // 0x17884c: 0x8f8289dc  lw          $v0, -0x7624($gp)
    ctx->pc = 0x17884cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937052)));
    // 0x178850: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x178850u;
    {
        const bool branch_taken_0x178850 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x178854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178850u;
            // 0x178854: 0xafa20284  sw          $v0, 0x284($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 644), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178850) {
            ctx->pc = 0x178860u;
            goto label_178860;
        }
    }
    ctx->pc = 0x178858u;
    // 0x178858: 0x16400011  bnez        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x178858u;
    {
        const bool branch_taken_0x178858 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x17885Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178858u;
            // 0x17885c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178858) {
            ctx->pc = 0x1788A0u;
            goto label_1788a0;
        }
    }
    ctx->pc = 0x178860u;
label_178860:
    // 0x178860: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x178860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x178864: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x178864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x178868: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x178868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
    // 0x17886c: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x17886cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x178870: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x178870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x178874: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x178874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x178878: 0xc04cb98  jal         func_132E60
    ctx->pc = 0x178878u;
    SET_GPR_U32(ctx, 31, 0x178880u);
    ctx->pc = 0x17887Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178878u;
            // 0x17887c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132E60u;
    if (runtime->hasFunction(0x132E60u)) {
        auto targetFn = runtime->lookupFunction(0x132E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178880u; }
        if (ctx->pc != 0x178880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgLoadMDSFile__FP10mgLoadData_0x132e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178880u; }
        if (ctx->pc != 0x178880u) { return; }
    }
    ctx->pc = 0x178880u;
label_178880:
    // 0x178880: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x178880u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x178884: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x178884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x178888: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x178888u;
    {
        const bool branch_taken_0x178888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17888Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178888u;
            // 0x17888c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178888) {
            ctx->pc = 0x178898u;
            goto label_178898;
        }
    }
    ctx->pc = 0x178890u;
    // 0x178890: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x178890u;
    {
        const bool branch_taken_0x178890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178890u;
            // 0x178894: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178890) {
            ctx->pc = 0x178A04u;
            goto label_178a04;
        }
    }
    ctx->pc = 0x178898u;
label_178898:
    // 0x178898: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x178898u;
    {
        const bool branch_taken_0x178898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17889Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178898u;
            // 0x17889c: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178898) {
            ctx->pc = 0x178A08u;
            goto label_178a08;
        }
    }
    ctx->pc = 0x1788A0u;
label_1788a0:
    // 0x1788a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1788a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1788a4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1788a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1788a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1788a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1788ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1788acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1788b0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1788B0u;
    {
        const bool branch_taken_0x1788b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1788B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1788B0u;
            // 0x1788b4: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1788b0) {
            ctx->pc = 0x1788ECu;
            goto label_1788ec;
        }
    }
    ctx->pc = 0x1788B8u;
label_1788b8:
    // 0x1788b8: 0x244702e8  addiu       $a3, $v0, 0x2E8
    ctx->pc = 0x1788b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 744));
    // 0x1788bc: 0x8c4202e8  lw          $v0, 0x2E8($v0)
    ctx->pc = 0x1788bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 744)));
    // 0x1788c0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1788C0u;
    {
        const bool branch_taken_0x1788c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1788C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1788C0u;
            // 0x1788c4: 0xdd1021  addu        $v0, $a2, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1788c0) {
            ctx->pc = 0x1788E8u;
            goto label_1788e8;
        }
    }
    ctx->pc = 0x1788C8u;
    // 0x1788c8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1788c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1788cc: 0x24480080  addiu       $t0, $v0, 0x80
    ctx->pc = 0x1788ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1788d0: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x1788d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x1788d4: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x1788d4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x1788d8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1788d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1788dc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1788dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1788e0: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x1788e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x1788e4: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x1788e4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
label_1788e8:
    // 0x1788e8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1788e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1788ec:
    // 0x1788ec: 0x0  nop
    ctx->pc = 0x1788ecu;
    // NOP
    // 0x1788f0: 0x8f8789a8  lw          $a3, -0x7658($gp)
    ctx->pc = 0x1788f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x1788f4: 0x8ce20348  lw          $v0, 0x348($a3)
    ctx->pc = 0x1788f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 840)));
    // 0x1788f8: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1788f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1788fc: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1788FCu;
    {
        const bool branch_taken_0x1788fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x178900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1788FCu;
            // 0x178900: 0xe51021  addu        $v0, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1788fc) {
            ctx->pc = 0x1788B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1788b8;
        }
    }
    ctx->pc = 0x178904u;
    // 0x178904: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x178904u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x178908: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x178908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17890c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x17890cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x178910: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x178910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x178914: 0xac430080  sw          $v1, 0x80($v0)
    ctx->pc = 0x178914u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 3));
    // 0x178918: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x178918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17891c: 0xac400084  sw          $zero, 0x84($v0)
    ctx->pc = 0x17891cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 0));
    // 0x178920: 0xafb10294  sw          $s1, 0x294($sp)
    ctx->pc = 0x178920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 660), GPR_U32(ctx, 17));
    // 0x178924: 0xc05e004  jal         func_178010
    ctx->pc = 0x178924u;
    SET_GPR_U32(ctx, 31, 0x17892Cu);
    ctx->pc = 0x178928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178924u;
            // 0x178928: 0xafb20298  sw          $s2, 0x298($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 664), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178010u;
    if (runtime->hasFunction(0x178010u)) {
        auto targetFn = runtime->lookupFunction(0x178010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17892Cu; }
        if (ctx->pc != 0x17892Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateChangeFrame__FP10mgLoadDataP8mgCFrame_0x178010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17892Cu; }
        if (ctx->pc != 0x17892Cu) { return; }
    }
    ctx->pc = 0x17892Cu;
label_17892c:
    // 0x17892c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x17892cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x178930: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x178930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x178934: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x178934u;
    {
        const bool branch_taken_0x178934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x178934) {
            ctx->pc = 0x178944u;
            goto label_178944;
        }
    }
    ctx->pc = 0x17893Cu;
    // 0x17893c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x17893Cu;
    {
        const bool branch_taken_0x17893c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17893Cu;
            // 0x178940: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17893c) {
            ctx->pc = 0x178A04u;
            goto label_178a04;
        }
    }
    ctx->pc = 0x178944u;
label_178944:
    // 0x178944: 0x8c530064  lw          $s3, 0x64($v0)
    ctx->pc = 0x178944u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x178948: 0x1388c0  sll         $s1, $s3, 3
    ctx->pc = 0x178948u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x17894c: 0x3222000f  andi        $v0, $s1, 0xF
    ctx->pc = 0x17894cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
    // 0x178950: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x178950u;
    {
        const bool branch_taken_0x178950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x178954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178950u;
            // 0x178954: 0x111102  srl         $v0, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178950) {
            ctx->pc = 0x178960u;
            goto label_178960;
        }
    }
    ctx->pc = 0x178958u;
    // 0x178958: 0x111102  srl         $v0, $s1, 4
    ctx->pc = 0x178958u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 4));
    // 0x17895c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17895cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_178960:
    // 0x178960: 0x8f8489dc  lw          $a0, -0x7624($gp)
    ctx->pc = 0x178960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937052)));
    // 0x178964: 0xc04e748  jal         func_139D20
    ctx->pc = 0x178964u;
    SET_GPR_U32(ctx, 31, 0x17896Cu);
    ctx->pc = 0x178968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178964u;
            // 0x178968: 0x24450002  addiu       $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17896Cu; }
        if (ctx->pc != 0x17896Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17896Cu; }
        if (ctx->pc != 0x17896Cu) { return; }
    }
    ctx->pc = 0x17896Cu;
label_17896c:
    // 0x17896c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17896cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178970: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x178970u;
    SET_GPR_U32(ctx, 31, 0x178978u);
    ctx->pc = 0x178974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178970u;
            // 0x178974: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178978u; }
        if (ctx->pc != 0x178978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178978u; }
        if (ctx->pc != 0x178978u) { return; }
    }
    ctx->pc = 0x178978u;
label_178978:
    // 0x178978: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x178978u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x17897c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x17897cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x178980: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x178980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x178984: 0x8c550068  lw          $s5, 0x68($v0)
    ctx->pc = 0x178984u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x178988: 0x16a00003  bnez        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x178988u;
    {
        const bool branch_taken_0x178988 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x17898Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178988u;
            // 0x17898c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178988) {
            ctx->pc = 0x178998u;
            goto label_178998;
        }
    }
    ctx->pc = 0x178990u;
    // 0x178990: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x178990u;
    {
        const bool branch_taken_0x178990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x178990) {
            ctx->pc = 0x178A04u;
            goto label_178a04;
        }
    }
    ctx->pc = 0x178998u;
label_178998:
    // 0x178998: 0x8e110014  lw          $s1, 0x14($s0)
    ctx->pc = 0x178998u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x17899c: 0x13082a  slt         $at, $zero, $s3
    ctx->pc = 0x17899cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1789a0: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x1789A0u;
    {
        const bool branch_taken_0x1789a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1789A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1789A0u;
            // 0x1789a4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1789a0) {
            ctx->pc = 0x178A00u;
            goto label_178a00;
        }
    }
    ctx->pc = 0x1789A8u;
    // 0x1789a8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1789a8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1789ac:
    // 0x1789ac: 0x2b61021  addu        $v0, $s5, $s6
    ctx->pc = 0x1789acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 22)));
    // 0x1789b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1789b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1789b4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1789B4u;
    {
        const bool branch_taken_0x1789b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1789b4) {
            ctx->pc = 0x1789ECu;
            goto label_1789ec;
        }
    }
    ctx->pc = 0x1789BCu;
    // 0x1789bc: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x1789bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
    // 0x1789c0: 0x8c450050  lw          $a1, 0x50($v0)
    ctx->pc = 0x1789c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x1789c4: 0xc04ddd4  jal         func_137750
    ctx->pc = 0x1789C4u;
    SET_GPR_U32(ctx, 31, 0x1789CCu);
    ctx->pc = 0x1789C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1789C4u;
            // 0x1789c8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137750u;
    if (runtime->hasFunction(0x137750u)) {
        auto targetFn = runtime->lookupFunction(0x137750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1789CCu; }
        if (ctx->pc != 0x1789CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrameID__8mgCFrameFPc_0x137750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1789CCu; }
        if (ctx->pc != 0x1789CCu) { return; }
    }
    ctx->pc = 0x1789CCu;
label_1789cc:
    // 0x1789cc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1789ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1789d0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1789d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1789d4: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1789D4u;
    {
        const bool branch_taken_0x1789d4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1789d4) {
            ctx->pc = 0x1789ECu;
            goto label_1789ec;
        }
    }
    ctx->pc = 0x1789DCu;
    // 0x1789dc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1789dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1789e0: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x1789e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1789e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1789e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1789e8: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1789e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_1789ec:
    // 0x1789ec: 0x0  nop
    ctx->pc = 0x1789ecu;
    // NOP
    // 0x1789f0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1789f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1789f4: 0x253102a  slt         $v0, $s2, $s3
    ctx->pc = 0x1789f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1789f8: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1789F8u;
    {
        const bool branch_taken_0x1789f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1789FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1789F8u;
            // 0x1789fc: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1789f8) {
            ctx->pc = 0x1789ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1789ac;
        }
    }
    ctx->pc = 0x178A00u;
label_178a00:
    // 0x178a00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x178a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_178a04:
    // 0x178a04: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x178a04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_178a08:
    // 0x178a08: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x178a08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x178a0c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x178a0cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x178a10: 0x342192f0  ori         $at, $at, 0x92F0
    ctx->pc = 0x178a10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37616);
    // 0x178a14: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x178a14u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x178a18: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x178a18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x178a1c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x178a1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x178a20: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x178a20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x178a24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x178a24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178a28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x178a28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178a2c: 0x3e00008  jr          $ra
    ctx->pc = 0x178A2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178A2Cu;
            // 0x178a30: 0x3a1e821  addu        $sp, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x178A34u;
}
