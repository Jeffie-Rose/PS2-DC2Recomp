#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PreDraw__4CMapFPf
// Address: 0x15d7a0 - 0x15dbd8
void PreDraw__4CMapFPf_0x15d7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PreDraw__4CMapFPf_0x15d7a0");
#endif

    switch (ctx->pc) {
        case 0x15d7d4u: goto label_15d7d4;
        case 0x15d7f8u: goto label_15d7f8;
        case 0x15d810u: goto label_15d810;
        case 0x15d840u: goto label_15d840;
        case 0x15d850u: goto label_15d850;
        case 0x15d860u: goto label_15d860;
        case 0x15d870u: goto label_15d870;
        case 0x15d880u: goto label_15d880;
        case 0x15d88cu: goto label_15d88c;
        case 0x15d8a4u: goto label_15d8a4;
        case 0x15d8b8u: goto label_15d8b8;
        case 0x15d8d4u: goto label_15d8d4;
        case 0x15d8f8u: goto label_15d8f8;
        case 0x15da34u: goto label_15da34;
        case 0x15da84u: goto label_15da84;
        case 0x15dac4u: goto label_15dac4;
        case 0x15db28u: goto label_15db28;
        case 0x15db7cu: goto label_15db7c;
        default: break;
    }

    ctx->pc = 0x15d7a0u;

    // 0x15d7a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x15d7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x15d7a4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x15d7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x15d7a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15d7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15d7ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15d7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15d7b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15d7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15d7b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15d7b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15d7b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15d7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15d7bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15d7bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d7c0: 0x8c820334  lw          $v0, 0x334($a0)
    ctx->pc = 0x15d7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 820)));
    // 0x15d7c4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x15D7C4u;
    {
        const bool branch_taken_0x15d7c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D7C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D7C4u;
            // 0x15d7c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d7c4) {
            ctx->pc = 0x15D7E8u;
            goto label_15d7e8;
        }
    }
    ctx->pc = 0x15D7CCu;
    // 0x15d7cc: 0xc04d7a4  jal         func_135E90
    ctx->pc = 0x15D7CCu;
    SET_GPR_U32(ctx, 31, 0x15D7D4u);
    ctx->pc = 0x15D7D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D7CCu;
            // 0x15d7d0: 0x26240340  addiu       $a0, $s1, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135E90u;
    if (runtime->hasFunction(0x135E90u)) {
        auto targetFn = runtime->lookupFunction(0x135E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D7D4u; }
        if (ctx->pc != 0x15D7D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgInsideScreen__FP9mgVu0FBOX_0x135e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D7D4u; }
        if (ctx->pc != 0x15D7D4u) { return; }
    }
    ctx->pc = 0x15D7D4u;
label_15d7d4:
    // 0x15d7d4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15D7D4u;
    {
        const bool branch_taken_0x15d7d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D7D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D7D4u;
            // 0x15d7d8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d7d4) {
            ctx->pc = 0x15D7ECu;
            goto label_15d7ec;
        }
    }
    ctx->pc = 0x15D7DCu;
    // 0x15d7dc: 0xae200360  sw          $zero, 0x360($s1)
    ctx->pc = 0x15d7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 864), GPR_U32(ctx, 0));
    // 0x15d7e0: 0x100000f5  b           . + 4 + (0xF5 << 2)
    ctx->pc = 0x15D7E0u;
    {
        const bool branch_taken_0x15d7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D7E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D7E0u;
            // 0x15d7e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d7e0) {
            ctx->pc = 0x15DBB8u;
            goto label_15dbb8;
        }
    }
    ctx->pc = 0x15D7E8u;
label_15d7e8:
    // 0x15d7e8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x15d7e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15d7ec:
    // 0x15d7ec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x15d7ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d7f0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x15D7F0u;
    {
        const bool branch_taken_0x15d7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D7F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D7F0u;
            // 0x15d7f4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d7f0) {
            ctx->pc = 0x15D820u;
            goto label_15d820;
        }
    }
    ctx->pc = 0x15D7F8u;
label_15d7f8:
    // 0x15d7f8: 0x24440680  addiu       $a0, $v0, 0x680
    ctx->pc = 0x15d7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1664));
    // 0x15d7fc: 0x8c420680  lw          $v0, 0x680($v0)
    ctx->pc = 0x15d7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1664)));
    // 0x15d800: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15D800u;
    {
        const bool branch_taken_0x15d800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D800u;
            // 0x15d804: 0x3c050038  lui         $a1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d800) {
            ctx->pc = 0x15D814u;
            goto label_15d814;
        }
    }
    ctx->pc = 0x15D808u;
    // 0x15d808: 0xc0b5770  jal         func_2D5DC0
    ctx->pc = 0x15D808u;
    SET_GPR_U32(ctx, 31, 0x15D810u);
    ctx->pc = 0x15D80Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D808u;
            // 0x15d80c: 0x24a51060  addiu       $a1, $a1, 0x1060 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5DC0u;
    if (runtime->hasFunction(0x2D5DC0u)) {
        auto targetFn = runtime->lookupFunction(0x2D5DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D810u; }
        if (ctx->pc != 0x15D810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Setup__10COcclusionFPA4_f_0x2d5dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D810u; }
        if (ctx->pc != 0x15D810u) { return; }
    }
    ctx->pc = 0x15D810u;
label_15d810:
    // 0x15d810: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x15d810u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_15d814:
    // 0x15d814: 0x0  nop
    ctx->pc = 0x15d814u;
    // NOP
    // 0x15d818: 0x269400c0  addiu       $s4, $s4, 0xC0
    ctx->pc = 0x15d818u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 192));
    // 0x15d81c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x15d81cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_15d820:
    // 0x15d820: 0x8e220670  lw          $v0, 0x670($s1)
    ctx->pc = 0x15d820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
    // 0x15d824: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x15d824u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15d828: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x15D828u;
    {
        const bool branch_taken_0x15d828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D82Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D828u;
            // 0x15d82c: 0x2341021  addu        $v0, $s1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d828) {
            ctx->pc = 0x15D7F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15d7f8;
        }
    }
    ctx->pc = 0x15D830u;
    // 0x15d830: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15d830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d834: 0x27a50068  addiu       $a1, $sp, 0x68
    ctx->pc = 0x15d834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x15d838: 0xc0575cc  jal         func_15D730
    ctx->pc = 0x15D838u;
    SET_GPR_U32(ctx, 31, 0x15D840u);
    ctx->pc = 0x15D83Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D838u;
            // 0x15d83c: 0xafa00068  sw          $zero, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D730u;
    if (runtime->hasFunction(0x15D730u)) {
        auto targetFn = runtime->lookupFunction(0x15D730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D840u; }
        if (ctx->pc != 0x15D840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateFuncCheck__4CMapFP15CFuncPointCheck_0x15d730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D840u; }
        if (ctx->pc != 0x15D840u) { return; }
    }
    ctx->pc = 0x15D840u;
label_15d840:
    // 0x15d840: 0x26240cb0  addiu       $a0, $s1, 0xCB0
    ctx->pc = 0x15d840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3248));
    // 0x15d844: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15d844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15d848: 0xc0a77f4  jal         func_29DFD0
    ctx->pc = 0x15D848u;
    SET_GPR_U32(ctx, 31, 0x15D850u);
    ctx->pc = 0x15D84Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D848u;
            // 0x15d84c: 0x27a60068  addiu       $a2, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29DFD0u;
    if (runtime->hasFunction(0x29DFD0u)) {
        auto targetFn = runtime->lookupFunction(0x29DFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D850u; }
        if (ctx->pc != 0x15D850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdateFlag__14CFuncPointMngrFiP15CFuncPointCheck_0x29dfd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D850u; }
        if (ctx->pc != 0x15D850u) { return; }
    }
    ctx->pc = 0x15D850u;
label_15d850:
    // 0x15d850: 0x26240cb0  addiu       $a0, $s1, 0xCB0
    ctx->pc = 0x15d850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3248));
    // 0x15d854: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x15d854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15d858: 0xc0a77f4  jal         func_29DFD0
    ctx->pc = 0x15D858u;
    SET_GPR_U32(ctx, 31, 0x15D860u);
    ctx->pc = 0x15D85Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D858u;
            // 0x15d85c: 0x27a60068  addiu       $a2, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29DFD0u;
    if (runtime->hasFunction(0x29DFD0u)) {
        auto targetFn = runtime->lookupFunction(0x29DFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D860u; }
        if (ctx->pc != 0x15D860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdateFlag__14CFuncPointMngrFiP15CFuncPointCheck_0x29dfd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D860u; }
        if (ctx->pc != 0x15D860u) { return; }
    }
    ctx->pc = 0x15D860u;
label_15d860:
    // 0x15d860: 0x26240cb0  addiu       $a0, $s1, 0xCB0
    ctx->pc = 0x15d860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3248));
    // 0x15d864: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x15d864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15d868: 0xc0a77f0  jal         func_29DFC0
    ctx->pc = 0x15D868u;
    SET_GPR_U32(ctx, 31, 0x15D870u);
    ctx->pc = 0x15D86Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D868u;
            // 0x15d86c: 0x27a60068  addiu       $a2, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29DFC0u;
    if (runtime->hasFunction(0x29DFC0u)) {
        auto targetFn = runtime->lookupFunction(0x29DFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D870u; }
        if (ctx->pc != 0x15D870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__14CFuncPointMngrFiP15CFuncPointCheck_0x29dfc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D870u; }
        if (ctx->pc != 0x15D870u) { return; }
    }
    ctx->pc = 0x15D870u;
label_15d870:
    // 0x15d870: 0x26240cb0  addiu       $a0, $s1, 0xCB0
    ctx->pc = 0x15d870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3248));
    // 0x15d874: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15d874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15d878: 0xc0a77f4  jal         func_29DFD0
    ctx->pc = 0x15D878u;
    SET_GPR_U32(ctx, 31, 0x15D880u);
    ctx->pc = 0x15D87Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D878u;
            // 0x15d87c: 0x27a60068  addiu       $a2, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29DFD0u;
    if (runtime->hasFunction(0x29DFD0u)) {
        auto targetFn = runtime->lookupFunction(0x29DFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D880u; }
        if (ctx->pc != 0x15D880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdateFlag__14CFuncPointMngrFiP15CFuncPointCheck_0x29dfd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D880u; }
        if (ctx->pc != 0x15D880u) { return; }
    }
    ctx->pc = 0x15D880u;
label_15d880:
    // 0x15d880: 0x8e32032c  lw          $s2, 0x32C($s1)
    ctx->pc = 0x15d880u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 812)));
    // 0x15d884: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x15D884u;
    {
        const bool branch_taken_0x15d884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D884u;
            // 0x15d888: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d884) {
            ctx->pc = 0x15D8E0u;
            goto label_15d8e0;
        }
    }
    ctx->pc = 0x15D88Cu;
label_15d88c:
    // 0x15d88c: 0x1a600007  blez        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x15D88Cu;
    {
        const bool branch_taken_0x15d88c = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x15d88c) {
            ctx->pc = 0x15D8ACu;
            goto label_15d8ac;
        }
    }
    ctx->pc = 0x15D894u;
    // 0x15d894: 0x8e260670  lw          $a2, 0x670($s1)
    ctx->pc = 0x15d894u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
    // 0x15d898: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15d898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d89c: 0xc059ce8  jal         func_1673A0
    ctx->pc = 0x15D89Cu;
    SET_GPR_U32(ctx, 31, 0x15D8A4u);
    ctx->pc = 0x15D8A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D89Cu;
            // 0x15d8a0: 0x26250680  addiu       $a1, $s1, 0x680 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1664));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1673A0u;
    if (runtime->hasFunction(0x1673A0u)) {
        auto targetFn = runtime->lookupFunction(0x1673A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D8A4u; }
        if (ctx->pc != 0x15D8A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InsideScreen__9CMapPartsFP10COcclusioni_0x1673a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D8A4u; }
        if (ctx->pc != 0x15D8A4u) { return; }
    }
    ctx->pc = 0x15D8A4u;
label_15d8a4:
    // 0x15d8a4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x15D8A4u;
    {
        const bool branch_taken_0x15d8a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D8A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D8A4u;
            // 0x15d8a8: 0xae4202f8  sw          $v0, 0x2F8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d8a4) {
            ctx->pc = 0x15D8BCu;
            goto label_15d8bc;
        }
    }
    ctx->pc = 0x15D8ACu;
label_15d8ac:
    // 0x15d8ac: 0x0  nop
    ctx->pc = 0x15d8acu;
    // NOP
    // 0x15d8b0: 0xc059cd4  jal         func_167350
    ctx->pc = 0x15D8B0u;
    SET_GPR_U32(ctx, 31, 0x15D8B8u);
    ctx->pc = 0x15D8B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D8B0u;
            // 0x15d8b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167350u;
    if (runtime->hasFunction(0x167350u)) {
        auto targetFn = runtime->lookupFunction(0x167350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D8B8u; }
        if (ctx->pc != 0x15D8B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InsideScreen__9CMapPartsFv_0x167350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D8B8u; }
        if (ctx->pc != 0x15D8B8u) { return; }
    }
    ctx->pc = 0x15D8B8u;
label_15d8b8:
    // 0x15d8b8: 0xae4202f8  sw          $v0, 0x2F8($s2)
    ctx->pc = 0x15d8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 760), GPR_U32(ctx, 2));
label_15d8bc:
    // 0x15d8bc: 0x0  nop
    ctx->pc = 0x15d8bcu;
    // NOP
    // 0x15d8c0: 0x8e4202f8  lw          $v0, 0x2F8($s2)
    ctx->pc = 0x15d8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 760)));
    // 0x15d8c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15D8C4u;
    {
        const bool branch_taken_0x15d8c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D8C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D8C4u;
            // 0x15d8c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d8c4) {
            ctx->pc = 0x15D8D4u;
            goto label_15d8d4;
        }
    }
    ctx->pc = 0x15D8CCu;
    // 0x15d8cc: 0xc059e7c  jal         func_1679F0
    ctx->pc = 0x15D8CCu;
    SET_GPR_U32(ctx, 31, 0x15D8D4u);
    ctx->pc = 0x15D8D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D8CCu;
            // 0x15d8d0: 0x27a50068  addiu       $a1, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1679F0u;
    if (runtime->hasFunction(0x1679F0u)) {
        auto targetFn = runtime->lookupFunction(0x1679F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D8D4u; }
        if (ctx->pc != 0x15D8D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepFuncPoint__9CMapPartsFR15CFuncPointCheck_0x1679f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D8D4u; }
        if (ctx->pc != 0x15D8D4u) { return; }
    }
    ctx->pc = 0x15D8D4u;
label_15d8d4:
    // 0x15d8d4: 0x0  nop
    ctx->pc = 0x15d8d4u;
    // NOP
    // 0x15d8d8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x15d8d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x15d8dc: 0x26520310  addiu       $s2, $s2, 0x310
    ctx->pc = 0x15d8dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 784));
label_15d8e0:
    // 0x15d8e0: 0x8e220330  lw          $v0, 0x330($s1)
    ctx->pc = 0x15d8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 816)));
    // 0x15d8e4: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x15d8e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15d8e8: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x15D8E8u;
    {
        const bool branch_taken_0x15d8e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D8ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D8E8u;
            // 0x15d8ec: 0x26230370  addiu       $v1, $s1, 0x370 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d8e8) {
            ctx->pc = 0x15D88Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15d88c;
        }
    }
    ctx->pc = 0x15D8F0u;
    // 0x15d8f0: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x15D8F0u;
    {
        const bool branch_taken_0x15d8f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D8F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D8F0u;
            // 0x15d8f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d8f0) {
            ctx->pc = 0x15DA60u;
            goto label_15da60;
        }
    }
    ctx->pc = 0x15D8F8u;
label_15d8f8:
    // 0x15d8f8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x15d8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x15d8fc: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x15D8FCu;
    {
        const bool branch_taken_0x15d8fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d8fc) {
            ctx->pc = 0x15DA54u;
            goto label_15da54;
        }
    }
    ctx->pc = 0x15D904u;
    // 0x15d904: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x15d904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x15d908: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x15D908u;
    {
        const bool branch_taken_0x15d908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d908) {
            ctx->pc = 0x15D99Cu;
            goto label_15d99c;
        }
    }
    ctx->pc = 0x15D910u;
    // 0x15d910: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x15d910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d914: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x15d914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d918: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15d918u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15d91c: 0x0  nop
    ctx->pc = 0x15d91cu;
    // NOP
    // 0x15d920: 0x4501004c  bc1t        . + 4 + (0x4C << 2)
    ctx->pc = 0x15D920u;
    {
        const bool branch_taken_0x15d920 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15d920) {
            ctx->pc = 0x15DA54u;
            goto label_15da54;
        }
    }
    ctx->pc = 0x15D928u;
    // 0x15d928: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x15d928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15d92c: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x15d92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d930: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x15d930u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15d934: 0x0  nop
    ctx->pc = 0x15d934u;
    // NOP
    // 0x15d938: 0x45010046  bc1t        . + 4 + (0x46 << 2)
    ctx->pc = 0x15D938u;
    {
        const bool branch_taken_0x15d938 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15d938) {
            ctx->pc = 0x15DA54u;
            goto label_15da54;
        }
    }
    ctx->pc = 0x15D940u;
    // 0x15d940: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x15d940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15d944: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x15d944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d948: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x15d948u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15d94c: 0x0  nop
    ctx->pc = 0x15d94cu;
    // NOP
    // 0x15d950: 0x45010040  bc1t        . + 4 + (0x40 << 2)
    ctx->pc = 0x15D950u;
    {
        const bool branch_taken_0x15d950 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15d950) {
            ctx->pc = 0x15DA54u;
            goto label_15da54;
        }
    }
    ctx->pc = 0x15D958u;
    // 0x15d958: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x15d958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d95c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x15d95cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15d960: 0x0  nop
    ctx->pc = 0x15d960u;
    // NOP
    // 0x15d964: 0x4500003b  bc1f        . + 4 + (0x3B << 2)
    ctx->pc = 0x15D964u;
    {
        const bool branch_taken_0x15d964 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15d964) {
            ctx->pc = 0x15DA54u;
            goto label_15da54;
        }
    }
    ctx->pc = 0x15D96Cu;
    // 0x15d96c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x15d96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d970: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x15d970u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15d974: 0x0  nop
    ctx->pc = 0x15d974u;
    // NOP
    // 0x15d978: 0x45000036  bc1f        . + 4 + (0x36 << 2)
    ctx->pc = 0x15D978u;
    {
        const bool branch_taken_0x15d978 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15d978) {
            ctx->pc = 0x15DA54u;
            goto label_15da54;
        }
    }
    ctx->pc = 0x15D980u;
    // 0x15d980: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x15d980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d984: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x15d984u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15d988: 0x0  nop
    ctx->pc = 0x15d988u;
    // NOP
    // 0x15d98c: 0x45000031  bc1f        . + 4 + (0x31 << 2)
    ctx->pc = 0x15D98Cu;
    {
        const bool branch_taken_0x15d98c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15d98c) {
            ctx->pc = 0x15DA54u;
            goto label_15da54;
        }
    }
    ctx->pc = 0x15D994u;
    // 0x15d994: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x15D994u;
    {
        const bool branch_taken_0x15d994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d994) {
            ctx->pc = 0x15DA24u;
            goto label_15da24;
        }
    }
    ctx->pc = 0x15D99Cu;
label_15d99c:
    // 0x15d99c: 0x0  nop
    ctx->pc = 0x15d99cu;
    // NOP
    // 0x15d9a0: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x15d9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d9a4: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x15d9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d9a8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x15d9a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15d9ac: 0x0  nop
    ctx->pc = 0x15d9acu;
    // NOP
    // 0x15d9b0: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
    ctx->pc = 0x15D9B0u;
    {
        const bool branch_taken_0x15d9b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15d9b0) {
            ctx->pc = 0x15DA24u;
            goto label_15da24;
        }
    }
    ctx->pc = 0x15D9B8u;
    // 0x15d9b8: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x15d9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15d9bc: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x15d9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d9c0: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x15d9c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15d9c4: 0x0  nop
    ctx->pc = 0x15d9c4u;
    // NOP
    // 0x15d9c8: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x15D9C8u;
    {
        const bool branch_taken_0x15d9c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15d9c8) {
            ctx->pc = 0x15DA24u;
            goto label_15da24;
        }
    }
    ctx->pc = 0x15D9D0u;
    // 0x15d9d0: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x15d9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15d9d4: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x15d9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d9d8: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x15d9d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15d9dc: 0x0  nop
    ctx->pc = 0x15d9dcu;
    // NOP
    // 0x15d9e0: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x15D9E0u;
    {
        const bool branch_taken_0x15d9e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15d9e0) {
            ctx->pc = 0x15DA24u;
            goto label_15da24;
        }
    }
    ctx->pc = 0x15D9E8u;
    // 0x15d9e8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x15d9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d9ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15d9ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15d9f0: 0x0  nop
    ctx->pc = 0x15d9f0u;
    // NOP
    // 0x15d9f4: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x15D9F4u;
    {
        const bool branch_taken_0x15d9f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15d9f4) {
            ctx->pc = 0x15DA24u;
            goto label_15da24;
        }
    }
    ctx->pc = 0x15D9FCu;
    // 0x15d9fc: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x15d9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15da00: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x15da00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15da04: 0x0  nop
    ctx->pc = 0x15da04u;
    // NOP
    // 0x15da08: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x15DA08u;
    {
        const bool branch_taken_0x15da08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15da08) {
            ctx->pc = 0x15DA24u;
            goto label_15da24;
        }
    }
    ctx->pc = 0x15DA10u;
    // 0x15da10: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x15da10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15da14: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x15da14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15da18: 0x0  nop
    ctx->pc = 0x15da18u;
    // NOP
    // 0x15da1c: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x15DA1Cu;
    {
        const bool branch_taken_0x15da1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15da1c) {
            ctx->pc = 0x15DA54u;
            goto label_15da54;
        }
    }
    ctx->pc = 0x15DA24u;
label_15da24:
    // 0x15da24: 0x0  nop
    ctx->pc = 0x15da24u;
    // NOP
    // 0x15da28: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x15da28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x15da2c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x15DA2Cu;
    {
        const bool branch_taken_0x15da2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15da2c) {
            ctx->pc = 0x15DA54u;
            goto label_15da54;
        }
    }
    ctx->pc = 0x15DA34u;
label_15da34:
    // 0x15da34: 0x0  nop
    ctx->pc = 0x15da34u;
    // NOP
    // 0x15da38: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x15da38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x15da3c: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15DA3Cu;
    {
        const bool branch_taken_0x15da3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15da3c) {
            ctx->pc = 0x15DA48u;
            goto label_15da48;
        }
    }
    ctx->pc = 0x15DA44u;
    // 0x15da44: 0xac8002f8  sw          $zero, 0x2F8($a0)
    ctx->pc = 0x15da44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 760), GPR_U32(ctx, 0));
label_15da48:
    // 0x15da48: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15da48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15da4c: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x15DA4Cu;
    {
        const bool branch_taken_0x15da4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15da4c) {
            ctx->pc = 0x15DA34u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15da34;
        }
    }
    ctx->pc = 0x15DA54u;
label_15da54:
    // 0x15da54: 0x0  nop
    ctx->pc = 0x15da54u;
    // NOP
    // 0x15da58: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15da58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15da5c: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x15da5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_15da60:
    // 0x15da60: 0x8e220368  lw          $v0, 0x368($s1)
    ctx->pc = 0x15da60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 872)));
    // 0x15da64: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x15da64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15da68: 0x1440ffa3  bnez        $v0, . + 4 + (-0x5D << 2)
    ctx->pc = 0x15DA68u;
    {
        const bool branch_taken_0x15da68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15da68) {
            ctx->pc = 0x15D8F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15d8f8;
        }
    }
    ctx->pc = 0x15DA70u;
    // 0x15da70: 0x8e230108  lw          $v1, 0x108($s1)
    ctx->pc = 0x15da70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
    // 0x15da74: 0x2624010c  addiu       $a0, $s1, 0x10C
    ctx->pc = 0x15da74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 268));
    // 0x15da78: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x15da78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x15da7c: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x15DA7Cu;
    {
        const bool branch_taken_0x15da7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DA80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DA7Cu;
            // 0x15da80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15da7c) {
            ctx->pc = 0x15DB00u;
            goto label_15db00;
        }
    }
    ctx->pc = 0x15DA84u;
label_15da84:
    // 0x15da84: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x15da84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15da88: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x15da88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x15da8c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x15da8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x15da90: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15da90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15da94: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x15DA94u;
    {
        const bool branch_taken_0x15da94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15da94) {
            ctx->pc = 0x15DAECu;
            goto label_15daec;
        }
    }
    ctx->pc = 0x15DA9Cu;
    // 0x15da9c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x15da9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x15daa0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15DAA0u;
    {
        const bool branch_taken_0x15daa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15daa0) {
            ctx->pc = 0x15DAB4u;
            goto label_15dab4;
        }
    }
    ctx->pc = 0x15DAA8u;
    // 0x15daa8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x15daa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x15daac: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x15DAACu;
    {
        const bool branch_taken_0x15daac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15daac) {
            ctx->pc = 0x15DAECu;
            goto label_15daec;
        }
    }
    ctx->pc = 0x15DAB4u;
label_15dab4:
    // 0x15dab4: 0x0  nop
    ctx->pc = 0x15dab4u;
    // NOP
    // 0x15dab8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x15dab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x15dabc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x15DABCu;
    {
        const bool branch_taken_0x15dabc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15dabc) {
            ctx->pc = 0x15DAE4u;
            goto label_15dae4;
        }
    }
    ctx->pc = 0x15DAC4u;
label_15dac4:
    // 0x15dac4: 0x0  nop
    ctx->pc = 0x15dac4u;
    // NOP
    // 0x15dac8: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x15dac8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x15dacc: 0x10c00002  beqz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x15DACCu;
    {
        const bool branch_taken_0x15dacc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x15dacc) {
            ctx->pc = 0x15DAD8u;
            goto label_15dad8;
        }
    }
    ctx->pc = 0x15DAD4u;
    // 0x15dad4: 0xacc002f8  sw          $zero, 0x2F8($a2)
    ctx->pc = 0x15dad4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 760), GPR_U32(ctx, 0));
label_15dad8:
    // 0x15dad8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15dad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15dadc: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x15DADCu;
    {
        const bool branch_taken_0x15dadc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15dadc) {
            ctx->pc = 0x15DAC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15dac4;
        }
    }
    ctx->pc = 0x15DAE4u;
label_15dae4:
    // 0x15dae4: 0x0  nop
    ctx->pc = 0x15dae4u;
    // NOP
    // 0x15dae8: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x15dae8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_15daec:
    // 0x15daec: 0x0  nop
    ctx->pc = 0x15daecu;
    // NOP
    // 0x15daf0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15daf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15daf4: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x15daf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x15daf8: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x15DAF8u;
    {
        const bool branch_taken_0x15daf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15DAFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DAF8u;
            // 0x15dafc: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15daf8) {
            ctx->pc = 0x15DA84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15da84;
        }
    }
    ctx->pc = 0x15DB00u;
label_15db00:
    // 0x15db00: 0xae200360  sw          $zero, 0x360($s1)
    ctx->pc = 0x15db00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 864), GPR_U32(ctx, 0));
    // 0x15db04: 0x8e220364  lw          $v0, 0x364($s1)
    ctx->pc = 0x15db04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 868)));
    // 0x15db08: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15DB08u;
    {
        const bool branch_taken_0x15db08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15DB0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DB08u;
            // 0x15db0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15db08) {
            ctx->pc = 0x15DB18u;
            goto label_15db18;
        }
    }
    ctx->pc = 0x15DB10u;
    // 0x15db10: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x15DB10u;
    {
        const bool branch_taken_0x15db10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DB14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DB10u;
            // 0x15db14: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15db10) {
            ctx->pc = 0x15DBBCu;
            goto label_15dbbc;
        }
    }
    ctx->pc = 0x15DB18u;
label_15db18:
    // 0x15db18: 0x8e26032c  lw          $a2, 0x32C($s1)
    ctx->pc = 0x15db18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 812)));
    // 0x15db1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15db1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15db20: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x15DB20u;
    {
        const bool branch_taken_0x15db20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DB24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DB20u;
            // 0x15db24: 0x3c03bf80  lui         $v1, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15db20) {
            ctx->pc = 0x15DBA8u;
            goto label_15dba8;
        }
    }
    ctx->pc = 0x15DB28u;
label_15db28:
    // 0x15db28: 0x80c20070  lb          $v0, 0x70($a2)
    ctx->pc = 0x15db28u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 112)));
    // 0x15db2c: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x15db2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x15db30: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x15db30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x15db34: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x15DB34u;
    {
        const bool branch_taken_0x15db34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15db34) {
            ctx->pc = 0x15DB9Cu;
            goto label_15db9c;
        }
    }
    ctx->pc = 0x15DB3Cu;
    // 0x15db3c: 0x8cc202f8  lw          $v0, 0x2F8($a2)
    ctx->pc = 0x15db3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 760)));
    // 0x15db40: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x15DB40u;
    {
        const bool branch_taken_0x15db40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15db40) {
            ctx->pc = 0x15DB6Cu;
            goto label_15db6c;
        }
    }
    ctx->pc = 0x15DB48u;
    // 0x15db48: 0x8e240360  lw          $a0, 0x360($s1)
    ctx->pc = 0x15db48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 864)));
    // 0x15db4c: 0x8e220364  lw          $v0, 0x364($s1)
    ctx->pc = 0x15db4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 868)));
    // 0x15db50: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x15db50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15db54: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x15db54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x15db58: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x15db58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x15db5c: 0x8e220360  lw          $v0, 0x360($s1)
    ctx->pc = 0x15db5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 864)));
    // 0x15db60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15db60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15db64: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x15DB64u;
    {
        const bool branch_taken_0x15db64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DB68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DB64u;
            // 0x15db68: 0xae220360  sw          $v0, 0x360($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15db64) {
            ctx->pc = 0x15DB9Cu;
            goto label_15db9c;
        }
    }
    ctx->pc = 0x15DB6Cu;
label_15db6c:
    // 0x15db6c: 0x0  nop
    ctx->pc = 0x15db6cu;
    // NOP
    // 0x15db70: 0x8cc200b0  lw          $v0, 0xB0($a2)
    ctx->pc = 0x15db70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 176)));
    // 0x15db74: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x15DB74u;
    {
        const bool branch_taken_0x15db74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15db74) {
            ctx->pc = 0x15DB9Cu;
            goto label_15db9c;
        }
    }
    ctx->pc = 0x15DB7Cu;
label_15db7c:
    // 0x15db7c: 0x0  nop
    ctx->pc = 0x15db7cu;
    // NOP
    // 0x15db80: 0xac430068  sw          $v1, 0x68($v0)
    ctx->pc = 0x15db80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 3));
    // 0x15db84: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15db84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15db88: 0x0  nop
    ctx->pc = 0x15db88u;
    // NOP
    // 0x15db8c: 0x0  nop
    ctx->pc = 0x15db8cu;
    // NOP
    // 0x15db90: 0x0  nop
    ctx->pc = 0x15db90u;
    // NOP
    // 0x15db94: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x15DB94u;
    {
        const bool branch_taken_0x15db94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15db94) {
            ctx->pc = 0x15DB7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15db7c;
        }
    }
    ctx->pc = 0x15DB9Cu;
label_15db9c:
    // 0x15db9c: 0x0  nop
    ctx->pc = 0x15db9cu;
    // NOP
    // 0x15dba0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15dba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15dba4: 0x24c60310  addiu       $a2, $a2, 0x310
    ctx->pc = 0x15dba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 784));
label_15dba8:
    // 0x15dba8: 0x8e220330  lw          $v0, 0x330($s1)
    ctx->pc = 0x15dba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 816)));
    // 0x15dbac: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x15dbacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15dbb0: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x15DBB0u;
    {
        const bool branch_taken_0x15dbb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15DBB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DBB0u;
            // 0x15dbb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dbb0) {
            ctx->pc = 0x15DB28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15db28;
        }
    }
    ctx->pc = 0x15DBB8u;
label_15dbb8:
    // 0x15dbb8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x15dbb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_15dbbc:
    // 0x15dbbc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15dbbcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15dbc0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15dbc0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15dbc4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15dbc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15dbc8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15dbc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15dbcc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15dbccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15dbd0: 0x3e00008  jr          $ra
    ctx->pc = 0x15DBD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15DBD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DBD0u;
            // 0x15dbd4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15DBD8u;
}
