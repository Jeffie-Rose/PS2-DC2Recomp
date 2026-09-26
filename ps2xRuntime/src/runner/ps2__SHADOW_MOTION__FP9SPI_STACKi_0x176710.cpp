#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SHADOW_MOTION__FP9SPI_STACKi
// Address: 0x176710 - 0x1768f4
void ps2__SHADOW_MOTION__FP9SPI_STACKi_0x176710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SHADOW_MOTION__FP9SPI_STACKi_0x176710");
#endif

    switch (ctx->pc) {
        case 0x176798u: goto label_176798;
        case 0x1767a4u: goto label_1767a4;
        case 0x1767b4u: goto label_1767b4;
        case 0x1767c0u: goto label_1767c0;
        case 0x1767fcu: goto label_1767fc;
        case 0x176814u: goto label_176814;
        case 0x17682cu: goto label_17682c;
        case 0x176898u: goto label_176898;
        case 0x1768b8u: goto label_1768b8;
        default: break;
    }

    ctx->pc = 0x176710u;

    // 0x176710: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x176710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x176714: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x176714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x176718: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x176718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x17671c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x17671cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x176720: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x176720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x176724: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x176724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x176728: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x176728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17672c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17672cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x176730: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x176730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x176734: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x176734u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176738: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x176738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17673c: 0x8f8489a8  lw          $a0, -0x7658($gp)
    ctx->pc = 0x17673cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x176740: 0x8c8202c0  lw          $v0, 0x2C0($a0)
    ctx->pc = 0x176740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 704)));
    // 0x176744: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x176744u;
    {
        const bool branch_taken_0x176744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x176748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176744u;
            // 0x176748: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176744) {
            ctx->pc = 0x176754u;
            goto label_176754;
        }
    }
    ctx->pc = 0x17674Cu;
    // 0x17674c: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x17674Cu;
    {
        const bool branch_taken_0x17674c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17674Cu;
            // 0x176750: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17674c) {
            ctx->pc = 0x1768CCu;
            goto label_1768cc;
        }
    }
    ctx->pc = 0x176754u;
label_176754:
    // 0x176754: 0x8f8389b4  lw          $v1, -0x764C($gp)
    ctx->pc = 0x176754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937012)));
    // 0x176758: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x176758u;
    {
        const bool branch_taken_0x176758 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x17675Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176758u;
            // 0x17675c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176758) {
            ctx->pc = 0x176770u;
            goto label_176770;
        }
    }
    ctx->pc = 0x176760u;
    // 0x176760: 0x28620008  slti        $v0, $v1, 0x8
    ctx->pc = 0x176760u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x176764: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x176764u;
    {
        const bool branch_taken_0x176764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x176768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176764u;
            // 0x176768: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176764) {
            ctx->pc = 0x176778u;
            goto label_176778;
        }
    }
    ctx->pc = 0x17676Cu;
    // 0x17676c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17676cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_176770:
    // 0x176770: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x176770u;
    {
        const bool branch_taken_0x176770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x176770) {
            ctx->pc = 0x1768C8u;
            goto label_1768c8;
        }
    }
    ctx->pc = 0x176778u;
label_176778:
    // 0x176778: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x176778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17677c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17677cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176780: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x176780u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x176784: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x176784u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x176788: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x176788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x17678c: 0x24500460  addiu       $s0, $v0, 0x460
    ctx->pc = 0x17678cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1120));
    // 0x176790: 0xc049c86  jal         func_127218
    ctx->pc = 0x176790u;
    SET_GPR_U32(ctx, 31, 0x176798u);
    ctx->pc = 0x176794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176790u;
            // 0x176794: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176798u; }
        if (ctx->pc != 0x176798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176798u; }
        if (ctx->pc != 0x176798u) { return; }
    }
    ctx->pc = 0x176798u;
label_176798:
    // 0x176798: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x176798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17679c: 0xc05191c  jal         func_146470
    ctx->pc = 0x17679Cu;
    SET_GPR_U32(ctx, 31, 0x1767A4u);
    ctx->pc = 0x1767A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17679Cu;
            // 0x1767a0: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1767A4u; }
        if (ctx->pc != 0x1767A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1767A4u; }
        if (ctx->pc != 0x1767A4u) { return; }
    }
    ctx->pc = 0x1767A4u;
label_1767a4:
    // 0x1767a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1767a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1767a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1767a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1767ac: 0xc05191c  jal         func_146470
    ctx->pc = 0x1767ACu;
    SET_GPR_U32(ctx, 31, 0x1767B4u);
    ctx->pc = 0x1767B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1767ACu;
            // 0x1767b0: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1767B4u; }
        if (ctx->pc != 0x1767B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1767B4u; }
        if (ctx->pc != 0x1767B4u) { return; }
    }
    ctx->pc = 0x1767B4u;
label_1767b4:
    // 0x1767b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1767b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1767b8: 0xc05191c  jal         func_146470
    ctx->pc = 0x1767B8u;
    SET_GPR_U32(ctx, 31, 0x1767C0u);
    ctx->pc = 0x1767BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1767B8u;
            // 0x1767bc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1767C0u; }
        if (ctx->pc != 0x1767C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1767C0u; }
        if (ctx->pc != 0x1767C0u) { return; }
    }
    ctx->pc = 0x1767C0u;
label_1767c0:
    // 0x1767c0: 0x27a60098  addiu       $a2, $sp, 0x98
    ctx->pc = 0x1767c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x1767c4: 0x27b500a4  addiu       $s5, $sp, 0xA4
    ctx->pc = 0x1767c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x1767c8: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1767c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x1767cc: 0x27b400b0  addiu       $s4, $sp, 0xB0
    ctx->pc = 0x1767ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1767d0: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x1767d0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x1767d4: 0x27b6009c  addiu       $s6, $sp, 0x9C
    ctx->pc = 0x1767d4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x1767d8: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x1767d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x1767dc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1767dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1767e0: 0xaed10000  sw          $s1, 0x0($s6)
    ctx->pc = 0x1767e0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 17));
    // 0x1767e4: 0x27b700a8  addiu       $s7, $sp, 0xA8
    ctx->pc = 0x1767e4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x1767e8: 0xafb20090  sw          $s2, 0x90($sp)
    ctx->pc = 0x1767e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 18));
    // 0x1767ec: 0xaef30000  sw          $s3, 0x0($s7)
    ctx->pc = 0x1767ecu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 19));
    // 0x1767f0: 0x8f8489f0  lw          $a0, -0x7610($gp)
    ctx->pc = 0x1767f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937072)));
    // 0x1767f4: 0xc052734  jal         func_149CD0
    ctx->pc = 0x1767F4u;
    SET_GPR_U32(ctx, 31, 0x1767FCu);
    ctx->pc = 0x1767F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1767F4u;
            // 0x1767f8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1767FCu; }
        if (ctx->pc != 0x1767FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1767FCu; }
        if (ctx->pc != 0x1767FCu) { return; }
    }
    ctx->pc = 0x1767FCu;
label_1767fc:
    // 0x1767fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1767fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176800: 0x27b10094  addiu       $s1, $sp, 0x94
    ctx->pc = 0x176800u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x176804: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x176804u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x176808: 0x8f8489f0  lw          $a0, -0x7610($gp)
    ctx->pc = 0x176808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937072)));
    // 0x17680c: 0xc052734  jal         func_149CD0
    ctx->pc = 0x17680Cu;
    SET_GPR_U32(ctx, 31, 0x176814u);
    ctx->pc = 0x176810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17680Cu;
            // 0x176810: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176814u; }
        if (ctx->pc != 0x176814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176814u; }
        if (ctx->pc != 0x176814u) { return; }
    }
    ctx->pc = 0x176814u;
label_176814:
    // 0x176814: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x176814u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176818: 0x27b400a0  addiu       $s4, $sp, 0xA0
    ctx->pc = 0x176818u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x17681c: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x17681cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x176820: 0x8f8489f0  lw          $a0, -0x7610($gp)
    ctx->pc = 0x176820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937072)));
    // 0x176824: 0xc052734  jal         func_149CD0
    ctx->pc = 0x176824u;
    SET_GPR_U32(ctx, 31, 0x17682Cu);
    ctx->pc = 0x176828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176824u;
            // 0x176828: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17682Cu; }
        if (ctx->pc != 0x17682Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17682Cu; }
        if (ctx->pc != 0x17682Cu) { return; }
    }
    ctx->pc = 0x17682Cu;
label_17682c:
    // 0x17682c: 0x27a300ac  addiu       $v1, $sp, 0xAC
    ctx->pc = 0x17682cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x176830: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x176830u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x176834: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x176834u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x176838: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x176838u;
    {
        const bool branch_taken_0x176838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x176838) {
            ctx->pc = 0x176844u;
            goto label_176844;
        }
    }
    ctx->pc = 0x176840u;
    // 0x176840: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x176840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
label_176844:
    // 0x176844: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x176844u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x176848: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x176848u;
    {
        const bool branch_taken_0x176848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x176848) {
            ctx->pc = 0x176854u;
            goto label_176854;
        }
    }
    ctx->pc = 0x176850u;
    // 0x176850: 0xaee00000  sw          $zero, 0x0($s7)
    ctx->pc = 0x176850u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
label_176854:
    // 0x176854: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x176854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x176858: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x176858u;
    {
        const bool branch_taken_0x176858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x176858) {
            ctx->pc = 0x176880u;
            goto label_176880;
        }
    }
    ctx->pc = 0x176860u;
    // 0x176860: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x176860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x176864: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x176864u;
    {
        const bool branch_taken_0x176864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x176864) {
            ctx->pc = 0x176880u;
            goto label_176880;
        }
    }
    ctx->pc = 0x17686Cu;
    // 0x17686c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17686cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x176870: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x176870u;
    {
        const bool branch_taken_0x176870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x176874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176870u;
            // 0x176874: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176870) {
            ctx->pc = 0x176880u;
            goto label_176880;
        }
    }
    ctx->pc = 0x176878u;
    // 0x176878: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x176878u;
    {
        const bool branch_taken_0x176878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x176878) {
            ctx->pc = 0x1768C8u;
            goto label_1768c8;
        }
    }
    ctx->pc = 0x176880u;
label_176880:
    // 0x176880: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x176880u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x176884: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x176884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176888: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x176888u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x17688c: 0x8f8589e0  lw          $a1, -0x7620($gp)
    ctx->pc = 0x17688cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937056)));
    // 0x176890: 0xc053614  jal         func_14D850
    ctx->pc = 0x176890u;
    SET_GPR_U32(ctx, 31, 0x176898u);
    ctx->pc = 0x176894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176890u;
            // 0x176894: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14D850u;
    if (runtime->hasFunction(0x14D850u)) {
        auto targetFn = runtime->lookupFunction(0x14D850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176898u; }
        if (ctx->pc != 0x176898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateAnimeDataEX__FP14tagMOTION_TYPEP9mgCMemoryP16MOTION_FILE_INFO_0x14d850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176898u; }
        if (ctx->pc != 0x176898u) { return; }
    }
    ctx->pc = 0x176898u;
label_176898:
    // 0x176898: 0x8f8389a8  lw          $v1, -0x7658($gp)
    ctx->pc = 0x176898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x17689c: 0x8c620504  lw          $v0, 0x504($v1)
    ctx->pc = 0x17689cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1284)));
    // 0x1768a0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1768A0u;
    {
        const bool branch_taken_0x1768a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1768A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1768A0u;
            // 0x1768a4: 0x24670504  addiu       $a3, $v1, 0x504 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1768a0) {
            ctx->pc = 0x1768B8u;
            goto label_1768b8;
        }
    }
    ctx->pc = 0x1768A8u;
    // 0x1768a8: 0x8c6402c0  lw          $a0, 0x2C0($v1)
    ctx->pc = 0x1768a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 704)));
    // 0x1768ac: 0x8f8689dc  lw          $a2, -0x7624($gp)
    ctx->pc = 0x1768acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937052)));
    // 0x1768b0: 0xc05369c  jal         func_14DA70
    ctx->pc = 0x1768B0u;
    SET_GPR_U32(ctx, 31, 0x1768B8u);
    ctx->pc = 0x1768B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1768B0u;
            // 0x1768b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DA70u;
    if (runtime->hasFunction(0x14DA70u)) {
        auto targetFn = runtime->lookupFunction(0x14DA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1768B8u; }
        if (ctx->pc != 0x1768B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AnimeDataInit__FP8mgCFrameP14tagMOTION_TYPEP9mgCMemoryPP12tagFRAME_INF_0x14da70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1768B8u; }
        if (ctx->pc != 0x1768B8u) { return; }
    }
    ctx->pc = 0x1768B8u;
label_1768b8:
    // 0x1768b8: 0x8f8389a8  lw          $v1, -0x7658($gp)
    ctx->pc = 0x1768b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x1768bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1768bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1768c0: 0x8c630504  lw          $v1, 0x504($v1)
    ctx->pc = 0x1768c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1284)));
    // 0x1768c4: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x1768c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_1768c8:
    // 0x1768c8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1768c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1768cc:
    // 0x1768cc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1768ccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1768d0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1768d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1768d4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1768d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1768d8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1768d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1768dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1768dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1768e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1768e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1768e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1768e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1768e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1768e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1768ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1768ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1768F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1768ECu;
            // 0x1768f0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1768F4u;
}
