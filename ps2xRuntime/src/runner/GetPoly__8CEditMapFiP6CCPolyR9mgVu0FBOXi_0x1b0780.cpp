#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetPoly__8CEditMapFiP6CCPolyR9mgVu0FBOXi
// Address: 0x1b0780 - 0x1b0958
void GetPoly__8CEditMapFiP6CCPolyR9mgVu0FBOXi_0x1b0780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPoly__8CEditMapFiP6CCPolyR9mgVu0FBOXi_0x1b0780");
#endif

    switch (ctx->pc) {
        case 0x1b07c0u: goto label_1b07c0;
        case 0x1b07e4u: goto label_1b07e4;
        case 0x1b081cu: goto label_1b081c;
        case 0x1b0838u: goto label_1b0838;
        case 0x1b0898u: goto label_1b0898;
        case 0x1b08b8u: goto label_1b08b8;
        case 0x1b08c8u: goto label_1b08c8;
        default: break;
    }

    ctx->pc = 0x1b0780u;

    // 0x1b0780: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1b0780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1b0784: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1b0784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1b0788: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1b0788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1b078c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1b078cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1b0790: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x1b0790u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0794: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1b0794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1b0798: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1b0798u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b079c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1b079cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1b07a0: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1b07a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b07a4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b07a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b07a8: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1b07a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b07ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b07acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b07b0: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x1b07b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b07b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b07b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b07b8: 0xc057c48  jal         func_15F120
    ctx->pc = 0x1B07B8u;
    SET_GPR_U32(ctx, 31, 0x1B07C0u);
    ctx->pc = 0x1B07BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B07B8u;
            // 0x1b07bc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15F120u;
    if (runtime->hasFunction(0x15F120u)) {
        auto targetFn = runtime->lookupFunction(0x15F120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B07C0u; }
        if (ctx->pc != 0x1B07C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPoly__4CMapFiP6CCPolyR9mgVu0FBOXi_0x15f120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B07C0u; }
        if (ctx->pc != 0x1B07C0u) { return; }
    }
    ctx->pc = 0x1B07C0u;
label_1b07c0:
    // 0x1b07c0: 0x8ed10d44  lw          $s1, 0xD44($s6)
    ctx->pc = 0x1b07c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 3396)));
    // 0x1b07c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b07c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b07c8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1b07c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b07cc: 0x2709823  subu        $s3, $s3, $s0
    ctx->pc = 0x1b07ccu;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1b07d0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1b07d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b07d4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b07d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b07d8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1b07d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1b07dc: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1B07DCu;
    {
        const bool branch_taken_0x1b07dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B07E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B07DCu;
            // 0x1b07e0: 0x2a2a821  addu        $s5, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b07dc) {
            ctx->pc = 0x1B0874u;
            goto label_1b0874;
        }
    }
    ctx->pc = 0x1B07E4u;
label_1b07e4:
    // 0x1b07e4: 0x82220070  lb          $v0, 0x70($s1)
    ctx->pc = 0x1b07e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x1b07e8: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x1b07e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x1b07ec: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b07ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1b07f0: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1B07F0u;
    {
        const bool branch_taken_0x1b07f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b07f0) {
            ctx->pc = 0x1B086Cu;
            goto label_1b086c;
        }
    }
    ctx->pc = 0x1B07F8u;
    // 0x1b07f8: 0x8e230310  lw          $v1, 0x310($s1)
    ctx->pc = 0x1b07f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
    // 0x1b07fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b07fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0800: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1B0800u;
    {
        const bool branch_taken_0x1b0800 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B0804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0800u;
            // 0x1b0804: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0800) {
            ctx->pc = 0x1B086Cu;
            goto label_1b086c;
        }
    }
    ctx->pc = 0x1B0808u;
    // 0x1b0808: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1b0808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b080c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1b080cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0810: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1b0810u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0814: 0xc059960  jal         func_166580
    ctx->pc = 0x1B0814u;
    SET_GPR_U32(ctx, 31, 0x1B081Cu);
    ctx->pc = 0x1B0818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0814u;
            // 0x1b0818: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166580u;
    if (runtime->hasFunction(0x166580u)) {
        auto targetFn = runtime->lookupFunction(0x166580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B081Cu; }
        if (ctx->pc != 0x1B081Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPoly__9CMapPartsFiP6CCPolyR9mgVu0FBOXi_0x166580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B081Cu; }
        if (ctx->pc != 0x1B081Cu) { return; }
    }
    ctx->pc = 0x1B081Cu;
label_1b081c:
    // 0x1b081c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1b081cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b0820: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x1B0820u;
    {
        const bool branch_taken_0x1b0820 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0820u;
            // 0x1b0824: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0820) {
            ctx->pc = 0x1B0854u;
            goto label_1b0854;
        }
    }
    ctx->pc = 0x1B0828u;
    // 0x1b0828: 0x3243ffff  andi        $v1, $s2, 0xFFFF
    ctx->pc = 0x1b0828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x1b082c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1b082cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1b0830: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1b0830u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1b0834: 0x34641000  ori         $a0, $v1, 0x1000
    ctx->pc = 0x1b0834u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
label_1b0838:
    // 0x1b0838: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b0838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1b083c: 0xa6a40048  sh          $a0, 0x48($s5)
    ctx->pc = 0x1b083cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 72), (uint16_t)GPR_U32(ctx, 4));
    // 0x1b0840: 0xa2182a  slt         $v1, $a1, $v0
    ctx->pc = 0x1b0840u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b0844: 0x26b50050  addiu       $s5, $s5, 0x50
    ctx->pc = 0x1b0844u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
    // 0x1b0848: 0x0  nop
    ctx->pc = 0x1b0848u;
    // NOP
    // 0x1b084c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B084Cu;
    {
        const bool branch_taken_0x1b084c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b084c) {
            ctx->pc = 0x1B0838u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b0838;
        }
    }
    ctx->pc = 0x1B0854u;
label_1b0854:
    // 0x1b0854: 0x0  nop
    ctx->pc = 0x1b0854u;
    // NOP
    // 0x1b0858: 0x2629823  subu        $s3, $s3, $v0
    ctx->pc = 0x1b0858u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1b085c: 0x1e600003  bgtz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B085Cu;
    {
        const bool branch_taken_0x1b085c = (GPR_S32(ctx, 19) > 0);
        ctx->pc = 0x1B0860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B085Cu;
            // 0x1b0860: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b085c) {
            ctx->pc = 0x1B086Cu;
            goto label_1b086c;
        }
    }
    ctx->pc = 0x1B0864u;
    // 0x1b0864: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1B0864u;
    {
        const bool branch_taken_0x1b0864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0864u;
            // 0x1b0868: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0864) {
            ctx->pc = 0x1B092Cu;
            goto label_1b092c;
        }
    }
    ctx->pc = 0x1B086Cu;
label_1b086c:
    // 0x1b086c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1b086cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1b0870: 0x26310330  addiu       $s1, $s1, 0x330
    ctx->pc = 0x1b0870u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 816));
label_1b0874:
    // 0x1b0874: 0x0  nop
    ctx->pc = 0x1b0874u;
    // NOP
    // 0x1b0878: 0x8ec20d40  lw          $v0, 0xD40($s6)
    ctx->pc = 0x1b0878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 3392)));
    // 0x1b087c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1b087cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b0880: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x1B0880u;
    {
        const bool branch_taken_0x1b0880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0880u;
            // 0x1b0884: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0880) {
            ctx->pc = 0x1B07E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b07e4;
        }
    }
    ctx->pc = 0x1B0888u;
    // 0x1b0888: 0x16e20027  bne         $s7, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1B0888u;
    {
        const bool branch_taken_0x1b0888 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B088Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0888u;
            // 0x1b088c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0888) {
            ctx->pc = 0x1B0928u;
            goto label_1b0928;
        }
    }
    ctx->pc = 0x1B0890u;
    // 0x1b0890: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1B0890u;
    {
        const bool branch_taken_0x1b0890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0890u;
            // 0x1b0894: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0890) {
            ctx->pc = 0x1B0914u;
            goto label_1b0914;
        }
    }
    ctx->pc = 0x1B0898u;
label_1b0898:
    // 0x1b0898: 0x8c440f54  lw          $a0, 0xF54($v0)
    ctx->pc = 0x1b0898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3924)));
    // 0x1b089c: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1B089Cu;
    {
        const bool branch_taken_0x1b089c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b089c) {
            ctx->pc = 0x1B090Cu;
            goto label_1b090c;
        }
    }
    ctx->pc = 0x1B08A4u;
    // 0x1b08a4: 0xc6cc0ff8  lwc1        $f12, 0xFF8($s6)
    ctx->pc = 0x1b08a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b08a8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1b08a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b08ac: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1b08acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b08b0: 0xc0a6080  jal         func_298200
    ctx->pc = 0x1B08B0u;
    SET_GPR_U32(ctx, 31, 0x1B08B8u);
    ctx->pc = 0x1B08B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B08B0u;
            // 0x1b08b4: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298200u;
    if (runtime->hasFunction(0x298200u)) {
        auto targetFn = runtime->lookupFunction(0x298200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B08B8u; }
        if (ctx->pc != 0x1B08B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRiverPoly__9CEditGridFP6CCPolyRC9mgVu0FBOXif_0x298200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B08B8u; }
        if (ctx->pc != 0x1B08B8u) { return; }
    }
    ctx->pc = 0x1B08B8u;
label_1b08b8:
    // 0x1b08b8: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1b08b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b08bc: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B08BCu;
    {
        const bool branch_taken_0x1b08bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B08C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B08BCu;
            // 0x1b08c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b08bc) {
            ctx->pc = 0x1B08E4u;
            goto label_1b08e4;
        }
    }
    ctx->pc = 0x1B08C4u;
    // 0x1b08c4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1b08c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1b08c8:
    // 0x1b08c8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b08c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1b08cc: 0xa6a40046  sh          $a0, 0x46($s5)
    ctx->pc = 0x1b08ccu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 70), (uint16_t)GPR_U32(ctx, 4));
    // 0x1b08d0: 0xa2182a  slt         $v1, $a1, $v0
    ctx->pc = 0x1b08d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b08d4: 0x26b50050  addiu       $s5, $s5, 0x50
    ctx->pc = 0x1b08d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
    // 0x1b08d8: 0x0  nop
    ctx->pc = 0x1b08d8u;
    // NOP
    // 0x1b08dc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B08DCu;
    {
        const bool branch_taken_0x1b08dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b08dc) {
            ctx->pc = 0x1B08C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b08c8;
        }
    }
    ctx->pc = 0x1B08E4u;
label_1b08e4:
    // 0x1b08e4: 0x0  nop
    ctx->pc = 0x1b08e4u;
    // NOP
    // 0x1b08e8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1b08e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b08ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b08ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b08f0: 0x2629823  subu        $s3, $s3, $v0
    ctx->pc = 0x1b08f0u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1b08f4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1b08f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1b08f8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1b08f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1b08fc: 0x6610003  bgez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B08FCu;
    {
        const bool branch_taken_0x1b08fc = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x1B0900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B08FCu;
            // 0x1b0900: 0x2a3a821  addu        $s5, $s5, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b08fc) {
            ctx->pc = 0x1B090Cu;
            goto label_1b090c;
        }
    }
    ctx->pc = 0x1B0904u;
    // 0x1b0904: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B0904u;
    {
        const bool branch_taken_0x1b0904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0904u;
            // 0x1b0908: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0904) {
            ctx->pc = 0x1B092Cu;
            goto label_1b092c;
        }
    }
    ctx->pc = 0x1B090Cu;
label_1b090c:
    // 0x1b090c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1b090cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1b0910: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1b0910u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1b0914:
    // 0x1b0914: 0x0  nop
    ctx->pc = 0x1b0914u;
    // NOP
    // 0x1b0918: 0x8ec20f50  lw          $v0, 0xF50($s6)
    ctx->pc = 0x1b0918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 3920)));
    // 0x1b091c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1b091cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b0920: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1B0920u;
    {
        const bool branch_taken_0x1b0920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0920u;
            // 0x1b0924: 0x2d21021  addu        $v0, $s6, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0920) {
            ctx->pc = 0x1B0898u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b0898;
        }
    }
    ctx->pc = 0x1B0928u;
label_1b0928:
    // 0x1b0928: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b0928u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b092c:
    // 0x1b092c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1b092cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b0930: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1b0930u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b0934: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1b0934u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b0938: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1b0938u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b093c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b093cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b0940: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b0940u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b0944: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b0944u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b0948: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b0948u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b094c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b094cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0950: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0950u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0950u;
            // 0x1b0954: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B0958u;
}
