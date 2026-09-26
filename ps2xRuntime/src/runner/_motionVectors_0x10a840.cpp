#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _motionVectors
// Address: 0x10a840 - 0x10a9dc
void _motionVectors_0x10a840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_motionVectors_0x10a840");
#endif

    switch (ctx->pc) {
        case 0x10a8b0u: goto label_10a8b0;
        case 0x10a8d4u: goto label_10a8d4;
        case 0x10a90cu: goto label_10a90c;
        case 0x10a918u: goto label_10a918;
        case 0x10a99cu: goto label_10a99c;
        default: break;
    }

    ctx->pc = 0x10a840u;

    // 0x10a840: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x10a840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x10a844: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10a844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a848: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x10a848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x10a84c: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x10a84cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x10a850: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x10a850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x10a854: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x10a854u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a858: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x10a858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x10a85c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x10a85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x10a860: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x10a860u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a864: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x10a864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x10a868: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x10a868u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a86c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x10a86cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x10a870: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x10a870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x10a874: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10a874u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a878: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x10a878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x10a87c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x10a87cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a880: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x10a880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x10a884: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x10a884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x10a888: 0x8fb600b0  lw          $s6, 0xB0($sp)
    ctx->pc = 0x10a888u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x10a88c: 0x8fb300b8  lw          $s3, 0xB8($sp)
    ctx->pc = 0x10a88cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x10a890: 0x1522000d  bne         $t1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x10A890u;
    {
        const bool branch_taken_0x10a890 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x10A894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A890u;
            // 0x10a894: 0x8fbe00c0  lw          $fp, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a890) {
            ctx->pc = 0x10A8C8u;
            goto label_10a8c8;
        }
    }
    ctx->pc = 0x10A898u;
    // 0x10a898: 0x55400036  bnel        $t2, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x10A898u;
    {
        const bool branch_taken_0x10a898 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x10a898) {
            ctx->pc = 0x10A89Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10A898u;
            // 0x10a89c: 0x1080c0  sll         $s0, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10A974u;
            goto label_10a974;
        }
    }
    ctx->pc = 0x10A8A0u;
    // 0x10a8a0: 0x56600034  bnel        $s3, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x10A8A0u;
    {
        const bool branch_taken_0x10a8a0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x10a8a0) {
            ctx->pc = 0x10A8A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10A8A0u;
            // 0x10a8a4: 0x1080c0  sll         $s0, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10A974u;
            goto label_10a974;
        }
    }
    ctx->pc = 0x10A8A8u;
    // 0x10a8a8: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10A8A8u;
    SET_GPR_U32(ctx, 31, 0x10A8B0u);
    ctx->pc = 0x10A8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A8A8u;
            // 0x10a8ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A8B0u; }
        if (ctx->pc != 0x10A8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A8B0u; }
        if (ctx->pc != 0x10A8B0u) { return; }
    }
    ctx->pc = 0x10A8B0u;
label_10a8b0:
    // 0x10a8b0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x10a8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a8b4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x10a8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x10a8b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10a8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x10a8bc: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x10a8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x10a8c0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x10A8C0u;
    {
        const bool branch_taken_0x10a8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A8C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A8C0u;
            // 0x10a8c4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a8c0) {
            ctx->pc = 0x10A970u;
            goto label_10a970;
        }
    }
    ctx->pc = 0x10A8C8u;
label_10a8c8:
    // 0x10a8c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10a8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a8cc: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10A8CCu;
    SET_GPR_U32(ctx, 31, 0x10A8D4u);
    ctx->pc = 0x10A8D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A8CCu;
            // 0x10a8d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A8D4u; }
        if (ctx->pc != 0x10A8D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A8D4u; }
        if (ctx->pc != 0x10A8D4u) { return; }
    }
    ctx->pc = 0x10A8D4u;
label_10a8d4:
    // 0x10a8d4: 0x1088c0  sll         $s1, $s0, 3
    ctx->pc = 0x10a8d4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x10a8d8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x10a8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a8dc: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x10a8dcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x10a8e0: 0x2912821  addu        $a1, $s4, $s1
    ctx->pc = 0x10a8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x10a8e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10a8e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a8e8: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x10a8e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x10a8ec: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x10a8ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a8f0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x10a8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x10a8f4: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x10a8f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a8f8: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x10a8f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a8fc: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x10a8fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a900: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x10a900u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a904: 0xc042a78  jal         func_10A9E0
    ctx->pc = 0x10A904u;
    SET_GPR_U32(ctx, 31, 0x10A90Cu);
    ctx->pc = 0x10A908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A904u;
            // 0x10a908: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A9E0u;
    if (runtime->hasFunction(0x10A9E0u)) {
        auto targetFn = runtime->lookupFunction(0x10A9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A90Cu; }
        if (ctx->pc != 0x10A90Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _motionVector_0x10a9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A90Cu; }
        if (ctx->pc != 0x10A90Cu) { return; }
    }
    ctx->pc = 0x10A90Cu;
label_10a90c:
    // 0x10a90c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10a90cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a910: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10A910u;
    SET_GPR_U32(ctx, 31, 0x10A918u);
    ctx->pc = 0x10A914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A910u;
            // 0x10a914: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A918u; }
        if (ctx->pc != 0x10A918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A918u; }
        if (ctx->pc != 0x10A918u) { return; }
    }
    ctx->pc = 0x10A918u;
label_10a918:
    // 0x10a918: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x10a918u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x10a91c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x10a91cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x10a920: 0x2912821  addu        $a1, $s4, $s1
    ctx->pc = 0x10a920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x10a924: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10a924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a928: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x10a928u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a92c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x10a92cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a930: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x10a930u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a934: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x10a934u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a938: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x10a938u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a93c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x10a93cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x10a940: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x10a940u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x10a944: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x10a944u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a948: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x10a948u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10a94c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x10a94cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10a950: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x10a950u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10a954: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x10a954u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10a958: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x10a958u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10a95c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x10a95cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10a960: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x10a960u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10a964: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x10a964u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a968: 0x8042a78  j           func_10A9E0
    ctx->pc = 0x10A968u;
    ctx->pc = 0x10A96Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A968u;
            // 0x10a96c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A9E0u;
    if (runtime->hasFunction(0x10A9E0u)) {
        auto targetFn = runtime->lookupFunction(0x10A9E0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        _motionVector_0x10a9e0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x10A970u;
label_10a970:
    // 0x10a970: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x10a970u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_10a974:
    // 0x10a974: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10a974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a978: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x10a978u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x10a97c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x10a97cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a980: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x10a980u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a984: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x10a984u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a988: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x10a988u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a98c: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x10a98cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a990: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10a990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a994: 0xc042a78  jal         func_10A9E0
    ctx->pc = 0x10A994u;
    SET_GPR_U32(ctx, 31, 0x10A99Cu);
    ctx->pc = 0x10A998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A994u;
            // 0x10a998: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A9E0u;
    if (runtime->hasFunction(0x10A9E0u)) {
        auto targetFn = runtime->lookupFunction(0x10A9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A99Cu; }
        if (ctx->pc != 0x10A99Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _motionVector_0x10a9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A99Cu; }
        if (ctx->pc != 0x10A99Cu) { return; }
    }
    ctx->pc = 0x10A99Cu;
label_10a99c:
    // 0x10a99c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x10a99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10a9a0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x10a9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x10a9a4: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x10a9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x10a9a8: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x10a9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x10a9ac: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x10a9acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x10a9b0: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x10a9b0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x10a9b4: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x10a9b4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10a9b8: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x10a9b8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10a9bc: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x10a9bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10a9c0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x10a9c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10a9c4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x10a9c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10a9c8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x10a9c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10a9cc: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x10a9ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10a9d0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x10a9d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a9d4: 0x3e00008  jr          $ra
    ctx->pc = 0x10A9D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A9D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A9D4u;
            // 0x10a9d8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10A9DCu;
}
