#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: pcpMDS_END__FP9SPI_STACKi
// Address: 0x169590 - 0x1696b0
void pcpMDS_END__FP9SPI_STACKi_0x169590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("pcpMDS_END__FP9SPI_STACKi_0x169590");
#endif

    switch (ctx->pc) {
        case 0x1695c4u: goto label_1695c4;
        case 0x16961cu: goto label_16961c;
        case 0x169630u: goto label_169630;
        case 0x16964cu: goto label_16964c;
        case 0x16967cu: goto label_16967c;
        case 0x169694u: goto label_169694;
        default: break;
    }

    ctx->pc = 0x169590u;

    // 0x169590: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x169590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x169594: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x169594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x169598: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x169598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16959c: 0x8f828980  lw          $v0, -0x7680($gp)
    ctx->pc = 0x16959cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936960)));
    // 0x1695a0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1695A0u;
    {
        const bool branch_taken_0x1695a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1695a0) {
            ctx->pc = 0x1695B0u;
            goto label_1695b0;
        }
    }
    ctx->pc = 0x1695A8u;
    // 0x1695a8: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1695A8u;
    {
        const bool branch_taken_0x1695a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1695ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1695A8u;
            // 0x1695ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1695a8) {
            ctx->pc = 0x1696A0u;
            goto label_1696a0;
        }
    }
    ctx->pc = 0x1695B0u;
label_1695b0:
    // 0x1695b0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1695b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1695b4: 0x27a600bc  addiu       $a2, $sp, 0xBC
    ctx->pc = 0x1695b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x1695b8: 0x8f848988  lw          $a0, -0x7678($gp)
    ctx->pc = 0x1695b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936968)));
    // 0x1695bc: 0xc052734  jal         func_149CD0
    ctx->pc = 0x1695BCu;
    SET_GPR_U32(ctx, 31, 0x1695C4u);
    ctx->pc = 0x1695C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1695BCu;
            // 0x1695c0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1695C4u; }
        if (ctx->pc != 0x1695C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1695C4u; }
        if (ctx->pc != 0x1695C4u) { return; }
    }
    ctx->pc = 0x1695C4u;
label_1695c4:
    // 0x1695c4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1695C4u;
    {
        const bool branch_taken_0x1695c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1695c4) {
            ctx->pc = 0x1695D4u;
            goto label_1695d4;
        }
    }
    ctx->pc = 0x1695CCu;
    // 0x1695cc: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x1695CCu;
    {
        const bool branch_taken_0x1695cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1695D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1695CCu;
            // 0x1695d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1695cc) {
            ctx->pc = 0x1696A0u;
            goto label_1696a0;
        }
    }
    ctx->pc = 0x1695D4u;
label_1695d4:
    // 0x1695d4: 0x8f848980  lw          $a0, -0x7680($gp)
    ctx->pc = 0x1695d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936960)));
    // 0x1695d8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1695d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1695dc: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1695dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1695e0: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1695E0u;
    {
        const bool branch_taken_0x1695e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1695E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1695E0u;
            // 0x1695e4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1695e0) {
            ctx->pc = 0x169638u;
            goto label_169638;
        }
    }
    ctx->pc = 0x1695E8u;
    // 0x1695e8: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1695E8u;
    {
        const bool branch_taken_0x1695e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1695ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1695E8u;
            // 0x1695ec: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1695e8) {
            ctx->pc = 0x169624u;
            goto label_169624;
        }
    }
    ctx->pc = 0x1695F0u;
    // 0x1695f0: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1695F0u;
    {
        const bool branch_taken_0x1695f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1695f0) {
            ctx->pc = 0x169624u;
            goto label_169624;
        }
    }
    ctx->pc = 0x1695F8u;
    // 0x1695f8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1695F8u;
    {
        const bool branch_taken_0x1695f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1695f8) {
            ctx->pc = 0x169608u;
            goto label_169608;
        }
    }
    ctx->pc = 0x169600u;
    // 0x169600: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x169600u;
    {
        const bool branch_taken_0x169600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169600u;
            // 0x169604: 0x8f82898c  lw          $v0, -0x7674($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169600) {
            ctx->pc = 0x169664u;
            goto label_169664;
        }
    }
    ctx->pc = 0x169608u;
label_169608:
    // 0x169608: 0x8f858984  lw          $a1, -0x767C($gp)
    ctx->pc = 0x169608u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936964)));
    // 0x16960c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16960cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169610: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x169610u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169614: 0xc04cb78  jal         func_132DE0
    ctx->pc = 0x169614u;
    SET_GPR_U32(ctx, 31, 0x16961Cu);
    ctx->pc = 0x169618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169614u;
            // 0x169618: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132DE0u;
    if (runtime->hasFunction(0x132DE0u)) {
        auto targetFn = runtime->lookupFunction(0x132DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16961Cu; }
        if (ctx->pc != 0x16961Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgLoadMDSFile__FP10MDS_HEADERP9mgCMemoryP18mgCreateVisualTypeP17mgCTextureManager_0x132de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16961Cu; }
        if (ctx->pc != 0x16961Cu) { return; }
    }
    ctx->pc = 0x16961Cu;
label_16961c:
    // 0x16961c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x16961Cu;
    {
        const bool branch_taken_0x16961c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16961Cu;
            // 0x169620: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16961c) {
            ctx->pc = 0x169660u;
            goto label_169660;
        }
    }
    ctx->pc = 0x169624u;
label_169624:
    // 0x169624: 0x8f858984  lw          $a1, -0x767C($gp)
    ctx->pc = 0x169624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936964)));
    // 0x169628: 0xc051fdc  jal         func_147F70
    ctx->pc = 0x169628u;
    SET_GPR_U32(ctx, 31, 0x169630u);
    ctx->pc = 0x16962Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169628u;
            // 0x16962c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x147F70u;
    if (runtime->hasFunction(0x147F70u)) {
        auto targetFn = runtime->lookupFunction(0x147F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169630u; }
        if (ctx->pc != 0x169630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadCollisionFile__FP10MDS_HEADERP9mgCMemory_0x147f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169630u; }
        if (ctx->pc != 0x169630u) { return; }
    }
    ctx->pc = 0x169630u;
label_169630:
    // 0x169630: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x169630u;
    {
        const bool branch_taken_0x169630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169630u;
            // 0x169634: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169630) {
            ctx->pc = 0x169660u;
            goto label_169660;
        }
    }
    ctx->pc = 0x169638u;
label_169638:
    // 0x169638: 0x8f868984  lw          $a2, -0x767C($gp)
    ctx->pc = 0x169638u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936964)));
    // 0x16963c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x16963cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x169640: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x169640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169644: 0xc05a630  jal         func_1698C0
    ctx->pc = 0x169644u;
    SET_GPR_U32(ctx, 31, 0x16964Cu);
    ctx->pc = 0x169648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169644u;
            // 0x169648: 0x24a534f0  addiu       $a1, $a1, 0x34F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13552));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1698C0u;
    if (runtime->hasFunction(0x1698C0u)) {
        auto targetFn = runtime->lookupFunction(0x1698C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16964Cu; }
        if (ctx->pc != 0x16964Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateChara__FPUiPcP9mgCMemory_0x1698c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16964Cu; }
        if (ctx->pc != 0x16964Cu) { return; }
    }
    ctx->pc = 0x16964Cu;
label_16964c:
    // 0x16964c: 0x8f838980  lw          $v1, -0x7680($gp)
    ctx->pc = 0x16964cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936960)));
    // 0x169650: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x169650u;
    {
        const bool branch_taken_0x169650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x169654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169650u;
            // 0x169654: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169650) {
            ctx->pc = 0x169660u;
            goto label_169660;
        }
    }
    ctx->pc = 0x169658u;
    // 0x169658: 0x8c500070  lw          $s0, 0x70($v0)
    ctx->pc = 0x169658u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x16965c: 0x0  nop
    ctx->pc = 0x16965cu;
    // NOP
label_169660:
    // 0x169660: 0x8f82898c  lw          $v0, -0x7674($gp)
    ctx->pc = 0x169660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
label_169664:
    // 0x169664: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x169664u;
    {
        const bool branch_taken_0x169664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169664) {
            ctx->pc = 0x169694u;
            goto label_169694;
        }
    }
    ctx->pc = 0x16966Cu;
    // 0x16966c: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16966Cu;
    {
        const bool branch_taken_0x16966c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x169670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16966Cu;
            // 0x169670: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16966c) {
            ctx->pc = 0x169694u;
            goto label_169694;
        }
    }
    ctx->pc = 0x169674u;
    // 0x169674: 0xc04d6d8  jal         func_135B60
    ctx->pc = 0x169674u;
    SET_GPR_U32(ctx, 31, 0x16967Cu);
    ctx->pc = 0x135B60u;
    if (runtime->hasFunction(0x135B60u)) {
        auto targetFn = runtime->lookupFunction(0x135B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16967Cu; }
        if (ctx->pc != 0x16967Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__12mgCFrameAttrFv_0x135b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16967Cu; }
        if (ctx->pc != 0x16967Cu) { return; }
    }
    ctx->pc = 0x16967Cu;
label_16967c:
    // 0x16967c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16967cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169680: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169684: 0xafa6003c  sw          $a2, 0x3C($sp)
    ctx->pc = 0x169684u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 6));
    // 0x169688: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x169688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x16968c: 0xc04de54  jal         func_137950
    ctx->pc = 0x16968Cu;
    SET_GPR_U32(ctx, 31, 0x169694u);
    ctx->pc = 0x169690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16968Cu;
            // 0x169690: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137950u;
    if (runtime->hasFunction(0x137950u)) {
        auto targetFn = runtime->lookupFunction(0x137950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169694u; }
        if (ctx->pc != 0x169694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttrParam__8mgCFrameFR12mgCFrameAttrii_0x137950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169694u; }
        if (ctx->pc != 0x169694u) { return; }
    }
    ctx->pc = 0x169694u;
label_169694:
    // 0x169694: 0x8f838980  lw          $v1, -0x7680($gp)
    ctx->pc = 0x169694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936960)));
    // 0x169698: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x169698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16969c: 0xac700008  sw          $s0, 0x8($v1)
    ctx->pc = 0x16969cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
label_1696a0:
    // 0x1696a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1696a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1696a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1696a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1696a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1696A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1696ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1696A8u;
            // 0x1696ac: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1696B0u;
}
