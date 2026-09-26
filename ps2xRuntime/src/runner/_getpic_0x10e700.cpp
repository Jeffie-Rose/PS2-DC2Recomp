#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _getpic
// Address: 0x10e700 - 0x10e870
void _getpic_0x10e700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_getpic_0x10e700");
#endif

    switch (ctx->pc) {
        case 0x10e748u: goto label_10e748;
        case 0x10e758u: goto label_10e758;
        case 0x10e760u: goto label_10e760;
        case 0x10e768u: goto label_10e768;
        case 0x10e7b8u: goto label_10e7b8;
        case 0x10e7e0u: goto label_10e7e0;
        case 0x10e804u: goto label_10e804;
        case 0x10e828u: goto label_10e828;
        default: break;
    }

    ctx->pc = 0x10e700u;

    // 0x10e700: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x10e700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x10e704: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x10e704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x10e708: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10e708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10e70c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x10e70cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10e710: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10e710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10e714: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x10e714u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e718: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x10e718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x10e71c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10e71cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e720: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10e720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10e724: 0x8e300040  lw          $s0, 0x40($s1)
    ctx->pc = 0x10e724u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x10e728: 0x8e0600d8  lw          $a2, 0xD8($s0)
    ctx->pc = 0x10e728u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x10e72c: 0x30c2003f  andi        $v0, $a2, 0x3F
    ctx->pc = 0x10e72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
    // 0x10e730: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10E730u;
    {
        const bool branch_taken_0x10e730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E730u;
            // 0x10e734: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e730) {
            ctx->pc = 0x10E750u;
            goto label_10e750;
        }
    }
    ctx->pc = 0x10E738u;
    // 0x10e738: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x10e738u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x10e73c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10e73cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e740: 0xc043b56  jal         func_10ED58
    ctx->pc = 0x10E740u;
    SET_GPR_U32(ctx, 31, 0x10E748u);
    ctx->pc = 0x10E744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10E740u;
            // 0x10e744: 0x24a508d8  addiu       $a1, $a1, 0x8D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10ED58u;
    if (runtime->hasFunction(0x10ED58u)) {
        auto targetFn = runtime->lookupFunction(0x10ED58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E748u; }
        if (ctx->pc != 0x10E748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error1_0x10ed58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E748u; }
        if (ctx->pc != 0x10E748u) { return; }
    }
    ctx->pc = 0x10E748u;
label_10e748:
    // 0x10e748: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x10E748u;
    {
        const bool branch_taken_0x10e748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E748u;
            // 0x10e74c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e748) {
            ctx->pc = 0x10E854u;
            goto label_10e854;
        }
    }
    ctx->pc = 0x10E750u;
label_10e750:
    // 0x10e750: 0xae000820  sw          $zero, 0x820($s0)
    ctx->pc = 0x10e750u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2080), GPR_U32(ctx, 0));
    // 0x10e754: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10e754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10e758:
    // 0x10e758: 0x1242000d  beq         $s2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x10E758u;
    {
        const bool branch_taken_0x10e758 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x10E75Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E758u;
            // 0x10e75c: 0x2e620005  sltiu       $v0, $s3, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e758) {
            ctx->pc = 0x10E790u;
            goto label_10e790;
        }
    }
    ctx->pc = 0x10E760u;
label_10e760:
    // 0x10e760: 0xc042c98  jal         func_10B260
    ctx->pc = 0x10E760u;
    SET_GPR_U32(ctx, 31, 0x10E768u);
    ctx->pc = 0x10E764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10E760u;
            // 0x10e764: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B260u;
    if (runtime->hasFunction(0x10B260u)) {
        auto targetFn = runtime->lookupFunction(0x10B260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E768u; }
        if (ctx->pc != 0x10E768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextHeader_0x10b260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E768u; }
        if (ctx->pc != 0x10E768u) { return; }
    }
    ctx->pc = 0x10E768u;
label_10e768:
    // 0x10e768: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x10e768u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e76c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x10E76Cu;
    {
        const bool branch_taken_0x10e76c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E76Cu;
            // 0x10e770: 0x2e620005  sltiu       $v0, $s3, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e76c) {
            ctx->pc = 0x10E790u;
            goto label_10e790;
        }
    }
    ctx->pc = 0x10E774u;
    // 0x10e774: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x10e774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x10e778: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x10e778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x10e77c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10E77Cu;
    {
        const bool branch_taken_0x10e77c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10E780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E77Cu;
            // 0x10e780: 0x2e620005  sltiu       $v0, $s3, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e77c) {
            ctx->pc = 0x10E790u;
            goto label_10e790;
        }
    }
    ctx->pc = 0x10E784u;
    // 0x10e784: 0x8e020848  lw          $v0, 0x848($s0)
    ctx->pc = 0x10e784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2120)));
    // 0x10e788: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x10E788u;
    {
        const bool branch_taken_0x10e788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E788u;
            // 0x10e78c: 0x2e620005  sltiu       $v0, $s3, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e788) {
            ctx->pc = 0x10E760u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10e760;
        }
    }
    ctx->pc = 0x10E790u;
label_10e790:
    // 0x10e790: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x10E790u;
    {
        const bool branch_taken_0x10e790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E790u;
            // 0x10e794: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e790) {
            ctx->pc = 0x10E838u;
            goto label_10e838;
        }
    }
    ctx->pc = 0x10E798u;
    // 0x10e798: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x10e798u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x10e79c: 0x24420920  addiu       $v0, $v0, 0x920
    ctx->pc = 0x10e79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2336));
    // 0x10e7a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10e7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10e7a4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x10e7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10e7a8: 0x800008  jr          $a0
    ctx->pc = 0x10E7A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10E7B0u: goto label_10e7b0;
            case 0x10E7C4u: goto label_10e7c4;
            case 0x10E7F4u: goto label_10e7f4;
            case 0x10E818u: goto label_10e818;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10E7B0u;
label_10e7b0:
    // 0x10e7b0: 0xc043acc  jal         func_10EB30
    ctx->pc = 0x10E7B0u;
    SET_GPR_U32(ctx, 31, 0x10E7B8u);
    ctx->pc = 0x10E7B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10E7B0u;
            // 0x10e7b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EB30u;
    if (runtime->hasFunction(0x10EB30u)) {
        auto targetFn = runtime->lookupFunction(0x10EB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E7B8u; }
        if (ctx->pc != 0x10E7B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sceMpegFlush_0x10eb30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E7B8u; }
        if (ctx->pc != 0x10E7B8u) { return; }
    }
    ctx->pc = 0x10E7B8u;
label_10e7b8:
    // 0x10e7b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10e7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10e7bc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x10E7BCu;
    {
        const bool branch_taken_0x10e7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E7C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E7BCu;
            // 0x10e7c0: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e7bc) {
            ctx->pc = 0x10E838u;
            goto label_10e838;
        }
    }
    ctx->pc = 0x10E7C4u;
label_10e7c4:
    // 0x10e7c4: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x10e7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x10e7c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10e7c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e7cc: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x10e7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x10e7d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10e7d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e7d4: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x10e7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x10e7d8: 0xc043a62  jal         func_10E988
    ctx->pc = 0x10E7D8u;
    SET_GPR_U32(ctx, 31, 0x10E7E0u);
    ctx->pc = 0x10E7DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10E7D8u;
            // 0x10e7dc: 0x8e060094  lw          $a2, 0x94($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E988u;
    if (runtime->hasFunction(0x10E988u)) {
        auto targetFn = runtime->lookupFunction(0x10E988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E7E0u; }
        if (ctx->pc != 0x10E7E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _decodeOrSkip_0x10e988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E7E0u; }
        if (ctx->pc != 0x10E7E0u) { return; }
    }
    ctx->pc = 0x10E7E0u;
label_10e7e0:
    // 0x10e7e0: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x10e7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x10e7e4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10e7e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e7e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x10e7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x10e7ec: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x10E7ECu;
    {
        const bool branch_taken_0x10e7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E7F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E7ECu;
            // 0x10e7f0: 0xae0300a0  sw          $v1, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e7ec) {
            ctx->pc = 0x10E838u;
            goto label_10e838;
        }
    }
    ctx->pc = 0x10E7F4u;
label_10e7f4:
    // 0x10e7f4: 0x8e0500a4  lw          $a1, 0xA4($s0)
    ctx->pc = 0x10e7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x10e7f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10e7f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e7fc: 0xc043a62  jal         func_10E988
    ctx->pc = 0x10E7FCu;
    SET_GPR_U32(ctx, 31, 0x10E804u);
    ctx->pc = 0x10E800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10E7FCu;
            // 0x10e800: 0x8e060098  lw          $a2, 0x98($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E988u;
    if (runtime->hasFunction(0x10E988u)) {
        auto targetFn = runtime->lookupFunction(0x10E988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E804u; }
        if (ctx->pc != 0x10E804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _decodeOrSkip_0x10e988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E804u; }
        if (ctx->pc != 0x10E804u) { return; }
    }
    ctx->pc = 0x10E804u;
label_10e804:
    // 0x10e804: 0x8e0300a4  lw          $v1, 0xA4($s0)
    ctx->pc = 0x10e804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x10e808: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10e808u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e80c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x10e80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x10e810: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x10E810u;
    {
        const bool branch_taken_0x10e810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E810u;
            // 0x10e814: 0xae0300a4  sw          $v1, 0xA4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e810) {
            ctx->pc = 0x10E838u;
            goto label_10e838;
        }
    }
    ctx->pc = 0x10E818u;
label_10e818:
    // 0x10e818: 0x8e0500a8  lw          $a1, 0xA8($s0)
    ctx->pc = 0x10e818u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x10e81c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10e81cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e820: 0xc043a62  jal         func_10E988
    ctx->pc = 0x10E820u;
    SET_GPR_U32(ctx, 31, 0x10E828u);
    ctx->pc = 0x10E824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10E820u;
            // 0x10e824: 0x8e06009c  lw          $a2, 0x9C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E988u;
    if (runtime->hasFunction(0x10E988u)) {
        auto targetFn = runtime->lookupFunction(0x10E988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E828u; }
        if (ctx->pc != 0x10E828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _decodeOrSkip_0x10e988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E828u; }
        if (ctx->pc != 0x10E828u) { return; }
    }
    ctx->pc = 0x10E828u;
label_10e828:
    // 0x10e828: 0x8e0300a8  lw          $v1, 0xA8($s0)
    ctx->pc = 0x10e828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x10e82c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10e82cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e830: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x10e830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x10e834: 0xae0300a8  sw          $v1, 0xA8($s0)
    ctx->pc = 0x10e834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
label_10e838:
    // 0x10e838: 0x8e020820  lw          $v0, 0x820($s0)
    ctx->pc = 0x10e838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x10e83c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10E83Cu;
    {
        const bool branch_taken_0x10e83c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E83Cu;
            // 0x10e840: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e83c) {
            ctx->pc = 0x10E854u;
            goto label_10e854;
        }
    }
    ctx->pc = 0x10E844u;
    // 0x10e844: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x10e844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10e848: 0x1040ffc3  beqz        $v0, . + 4 + (-0x3D << 2)
    ctx->pc = 0x10E848u;
    {
        const bool branch_taken_0x10e848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E84Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E848u;
            // 0x10e84c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e848) {
            ctx->pc = 0x10E758u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10e758;
        }
    }
    ctx->pc = 0x10E850u;
    // 0x10e850: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10e850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10e854:
    // 0x10e854: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x10e854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10e858: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x10e858u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10e85c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10e85cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10e860: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10e860u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e864: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10e864u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10e868: 0x3e00008  jr          $ra
    ctx->pc = 0x10E868u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E86Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E868u;
            // 0x10e86c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E870u;
}
