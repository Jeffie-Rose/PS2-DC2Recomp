#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CDRead__FPcPUiPi
// Address: 0x149750 - 0x14982c
void CDRead__FPcPUiPi_0x149750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CDRead__FPcPUiPi_0x149750");
#endif

    switch (ctx->pc) {
        case 0x149780u: goto label_149780;
        case 0x149788u: goto label_149788;
        case 0x1497b4u: goto label_1497b4;
        case 0x1497c4u: goto label_1497c4;
        case 0x1497e0u: goto label_1497e0;
        case 0x1497f0u: goto label_1497f0;
        case 0x1497f8u: goto label_1497f8;
        default: break;
    }

    ctx->pc = 0x149750u;

    // 0x149750: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x149750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x149754: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x149754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x149758: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x149758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14975c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14975cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x149760: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x149760u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149764: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x149764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x149768: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x149768u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14976c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14976cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149770: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x149770u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x149774: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x149774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149778: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x149778u;
    SET_GPR_U32(ctx, 31, 0x149780u);
    ctx->pc = 0x14977Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149778u;
            // 0x14977c: 0x24842830  addiu       $a0, $a0, 0x2830 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149780u; }
        if (ctx->pc != 0x149780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149780u; }
        if (ctx->pc != 0x149780u) { return; }
    }
    ctx->pc = 0x149780u;
label_149780:
    // 0x149780: 0xc052214  jal         func_148850
    ctx->pc = 0x149780u;
    SET_GPR_U32(ctx, 31, 0x149788u);
    ctx->pc = 0x149784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149780u;
            // 0x149784: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148850u;
    if (runtime->hasFunction(0x148850u)) {
        auto targetFn = runtime->lookupFunction(0x148850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149788u; }
        if (ctx->pc != 0x149788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFile__FPc_0x148850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149788u; }
        if (ctx->pc != 0x149788u) { return; }
    }
    ctx->pc = 0x149788u;
label_149788:
    // 0x149788: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x149788u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14978c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14978Cu;
    {
        const bool branch_taken_0x14978c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x149790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14978Cu;
            // 0x149790: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14978c) {
            ctx->pc = 0x14979Cu;
            goto label_14979c;
        }
    }
    ctx->pc = 0x149794u;
    // 0x149794: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x149794u;
    {
        const bool branch_taken_0x149794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149794u;
            // 0x149798: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149794) {
            ctx->pc = 0x149818u;
            goto label_149818;
        }
    }
    ctx->pc = 0x14979Cu;
label_14979c:
    // 0x14979c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x14979cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1497a0: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1497a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1497a4: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x1497a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1497a8: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x1497a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1497ac: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x1497ACu;
    SET_GPR_U32(ctx, 31, 0x1497B4u);
    ctx->pc = 0x1497B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1497ACu;
            // 0x1497b0: 0x24842840  addiu       $a0, $a0, 0x2840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1497B4u; }
        if (ctx->pc != 0x1497B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1497B4u; }
        if (ctx->pc != 0x1497B4u) { return; }
    }
    ctx->pc = 0x1497B4u;
label_1497b4:
    // 0x1497b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1497b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1497b8: 0xa3a0004c  sb          $zero, 0x4C($sp)
    ctx->pc = 0x1497b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 0));
    // 0x1497bc: 0xa3a2004d  sb          $v0, 0x4D($sp)
    ctx->pc = 0x1497bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 77), (uint8_t)GPR_U32(ctx, 2));
    // 0x1497c0: 0xa3a0004e  sb          $zero, 0x4E($sp)
    ctx->pc = 0x1497c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 78), (uint8_t)GPR_U32(ctx, 0));
label_1497c4:
    // 0x1497c4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1497c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1497c8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1497c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1497cc: 0x8f8288a4  lw          $v0, -0x775C($gp)
    ctx->pc = 0x1497ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936740)));
    // 0x1497d0: 0x27a7004c  addiu       $a3, $sp, 0x4C
    ctx->pc = 0x1497d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1497d4: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1497d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1497d8: 0xc0481cc  jal         func_120730
    ctx->pc = 0x1497D8u;
    SET_GPR_U32(ctx, 31, 0x1497E0u);
    ctx->pc = 0x1497DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1497D8u;
            // 0x1497dc: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120730u;
    if (runtime->hasFunction(0x120730u)) {
        auto targetFn = runtime->lookupFunction(0x120730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1497E0u; }
        if (ctx->pc != 0x1497E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceCdRead_0x120730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1497E0u; }
        if (ctx->pc != 0x1497E0u) { return; }
    }
    ctx->pc = 0x1497E0u;
label_1497e0:
    // 0x1497e0: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1497E0u;
    {
        const bool branch_taken_0x1497e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1497E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1497E0u;
            // 0x1497e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1497e0) {
            ctx->pc = 0x1497C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1497c4;
        }
    }
    ctx->pc = 0x1497E8u;
    // 0x1497e8: 0xc047fc4  jal         func_11FF10
    ctx->pc = 0x1497E8u;
    SET_GPR_U32(ctx, 31, 0x1497F0u);
    ctx->pc = 0x11FF10u;
    if (runtime->hasFunction(0x11FF10u)) {
        auto targetFn = runtime->lookupFunction(0x11FF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1497F0u; }
        if (ctx->pc != 0x1497F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceCdSync_0x11ff10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1497F0u; }
        if (ctx->pc != 0x1497F0u) { return; }
    }
    ctx->pc = 0x1497F0u;
label_1497f0:
    // 0x1497f0: 0xc048278  jal         func_1209E0
    ctx->pc = 0x1497F0u;
    SET_GPR_U32(ctx, 31, 0x1497F8u);
    ctx->pc = 0x1209E0u;
    if (runtime->hasFunction(0x1209E0u)) {
        auto targetFn = runtime->lookupFunction(0x1209E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1497F8u; }
        if (ctx->pc != 0x1497F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceCdGetError_0x1209e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1497F8u; }
        if (ctx->pc != 0x1497F8u) { return; }
    }
    ctx->pc = 0x1497F8u;
label_1497f8:
    // 0x1497f8: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1497F8u;
    {
        const bool branch_taken_0x1497f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1497f8) {
            ctx->pc = 0x1497C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1497c4;
        }
    }
    ctx->pc = 0x149800u;
    // 0x149800: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x149800u;
    {
        const bool branch_taken_0x149800 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x149804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149800u;
            // 0x149804: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149800) {
            ctx->pc = 0x149814u;
            goto label_149814;
        }
    }
    ctx->pc = 0x149808u;
    // 0x149808: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x149808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x14980c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x14980cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x149810: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x149810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_149814:
    // 0x149814: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x149814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_149818:
    // 0x149818: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x149818u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14981c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14981cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149820: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x149820u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149824: 0x3e00008  jr          $ra
    ctx->pc = 0x149824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149824u;
            // 0x149828: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14982Cu;
}
