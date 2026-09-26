#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuItemBrdKey__FiPiPii
// Address: 0x23b780 - 0x23b900
void MenuItemBrdKey__FiPiPii_0x23b780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuItemBrdKey__FiPiPii_0x23b780");
#endif

    switch (ctx->pc) {
        case 0x23b7d8u: goto label_23b7d8;
        case 0x23b7f0u: goto label_23b7f0;
        case 0x23b804u: goto label_23b804;
        case 0x23b840u: goto label_23b840;
        case 0x23b89cu: goto label_23b89c;
        case 0x23b8c4u: goto label_23b8c4;
        case 0x23b8d8u: goto label_23b8d8;
        default: break;
    }

    ctx->pc = 0x23b780u;

    // 0x23b780: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x23b780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x23b784: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x23b784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x23b788: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x23b788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x23b78c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x23b78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x23b790: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x23b790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x23b794: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x23b794u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b798: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x23b798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x23b79c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x23b79cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b7a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23b7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x23b7a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23b7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23b7a8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x23b7a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b7ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23b7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23b7b0: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x23b7b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23b7b4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23B7B4u;
    {
        const bool branch_taken_0x23b7b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B7B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B7B4u;
            // 0x23b7b8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b7b4) {
            ctx->pc = 0x23B7C0u;
            goto label_23b7c0;
        }
    }
    ctx->pc = 0x23B7BCu;
    // 0x23b7bc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x23b7bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_23b7c0:
    // 0x23b7c0: 0x32a20002  andi        $v0, $s5, 0x2
    ctx->pc = 0x23b7c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)2);
    // 0x23b7c4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23B7C4u;
    {
        const bool branch_taken_0x23b7c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B7C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B7C4u;
            // 0x23b7c8: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b7c4) {
            ctx->pc = 0x23B7D0u;
            goto label_23b7d0;
        }
    }
    ctx->pc = 0x23B7CCu;
    // 0x23b7cc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x23b7ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_23b7d0:
    // 0x23b7d0: 0xc068644  jal         func_1A1910
    ctx->pc = 0x23B7D0u;
    SET_GPR_U32(ctx, 31, 0x23B7D8u);
    ctx->pc = 0x1A1910u;
    if (runtime->hasFunction(0x1A1910u)) {
        auto targetFn = runtime->lookupFunction(0x1A1910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B7D8u; }
        if (ctx->pc != 0x23B7D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowBagMax__Fi_0x1a1910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B7D8u; }
        if (ctx->pc != 0x23B7D8u) { return; }
    }
    ctx->pc = 0x23B7D8u;
label_23b7d8:
    // 0x23b7d8: 0x6210005  bgez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x23B7D8u;
    {
        const bool branch_taken_0x23b7d8 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x23B7DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B7D8u;
            // 0x23b7dc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b7d8) {
            ctx->pc = 0x23B7F0u;
            goto label_23b7f0;
        }
    }
    ctx->pc = 0x23B7E0u;
    // 0x23b7e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23b7e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b7e4: 0x2405fffa  addiu       $a1, $zero, -0x6
    ctx->pc = 0x23b7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
    // 0x23b7e8: 0xc094594  jal         func_251650
    ctx->pc = 0x23B7E8u;
    SET_GPR_U32(ctx, 31, 0x23B7F0u);
    ctx->pc = 0x23B7ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B7E8u;
            // 0x23b7ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251650u;
    if (runtime->hasFunction(0x251650u)) {
        auto targetFn = runtime->lookupFunction(0x251650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B7F0u; }
        if (ctx->pc != 0x23B7F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenuAdd2__FPiii_0x251650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B7F0u; }
        if (ctx->pc != 0x23B7F0u) { return; }
    }
    ctx->pc = 0x23B7F0u;
label_23b7f0:
    // 0x23b7f0: 0x1a200004  blez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x23B7F0u;
    {
        const bool branch_taken_0x23b7f0 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x23B7F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B7F0u;
            // 0x23b7f4: 0x2666ffff  addiu       $a2, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b7f0) {
            ctx->pc = 0x23B804u;
            goto label_23b804;
        }
    }
    ctx->pc = 0x23B7F8u;
    // 0x23b7f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23b7f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b7fc: 0xc094594  jal         func_251650
    ctx->pc = 0x23B7FCu;
    SET_GPR_U32(ctx, 31, 0x23B804u);
    ctx->pc = 0x23B800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B7FCu;
            // 0x23b800: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251650u;
    if (runtime->hasFunction(0x251650u)) {
        auto targetFn = runtime->lookupFunction(0x251650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B804u; }
        if (ctx->pc != 0x23B804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenuAdd2__FPiii_0x251650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B804u; }
        if (ctx->pc != 0x23B804u) { return; }
    }
    ctx->pc = 0x23B804u;
label_23b804:
    // 0x23b804: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x23b804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x23b808: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x23b808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
    // 0x23b80c: 0x3443aaab  ori         $v1, $v0, 0xAAAB
    ctx->pc = 0x23b80cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x23b810: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x23b810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x23b814: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x23b814u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x23b818: 0x0  nop
    ctx->pc = 0x23b818u;
    // NOP
    // 0x23b81c: 0x0  nop
    ctx->pc = 0x23b81cu;
    // NOP
    // 0x23b820: 0x1810  mfhi        $v1
    ctx->pc = 0x23b820u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x23b824: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x23b824u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x23b828: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x23b828u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x23b82c: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x23b82cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x23b830: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23B830u;
    {
        const bool branch_taken_0x23b830 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x23b830) {
            ctx->pc = 0x23B84Cu;
            goto label_23b84c;
        }
    }
    ctx->pc = 0x23B838u;
    // 0x23b838: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23B838u;
    {
        const bool branch_taken_0x23b838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B83Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B838u;
            // 0x23b83c: 0xae510000  sw          $s1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b838) {
            ctx->pc = 0x23B84Cu;
            goto label_23b84c;
        }
    }
    ctx->pc = 0x23B840u;
label_23b840:
    // 0x23b840: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x23b840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x23b844: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23b844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23b848: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x23b848u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_23b84c:
    // 0x23b84c: 0x0  nop
    ctx->pc = 0x23b84cu;
    // NOP
    // 0x23b850: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x23b850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x23b854: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x23b854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x23b858: 0x222082a  slt         $at, $s1, $v0
    ctx->pc = 0x23b858u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x23b85c: 0x1020fff8  beqz        $at, . + 4 + (-0x8 << 2)
    ctx->pc = 0x23B85Cu;
    {
        const bool branch_taken_0x23b85c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B85Cu;
            // 0x23b860: 0x32a20004  andi        $v0, $s5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b85c) {
            ctx->pc = 0x23B840u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23b840;
        }
    }
    ctx->pc = 0x23B864u;
    // 0x23b864: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23B864u;
    {
        const bool branch_taken_0x23b864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B864u;
            // 0x23b868: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b864) {
            ctx->pc = 0x23B870u;
            goto label_23b870;
        }
    }
    ctx->pc = 0x23B86Cu;
    // 0x23b86c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x23b86cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_23b870:
    // 0x23b870: 0x32a20008  andi        $v0, $s5, 0x8
    ctx->pc = 0x23b870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)8);
    // 0x23b874: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23B874u;
    {
        const bool branch_taken_0x23b874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B874u;
            // 0x23b878: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b874) {
            ctx->pc = 0x23B880u;
            goto label_23b880;
        }
    }
    ctx->pc = 0x23B87Cu;
    // 0x23b87c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x23b87cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_23b880:
    // 0x23b880: 0x6610007  bgez        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x23B880u;
    {
        const bool branch_taken_0x23b880 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x23B884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B880u;
            // 0x23b884: 0x111040  sll         $v0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b880) {
            ctx->pc = 0x23B8A0u;
            goto label_23b8a0;
        }
    }
    ctx->pc = 0x23B888u;
    // 0x23b888: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23b888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b88c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x23b88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x23b890: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x23b890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b894: 0xc094594  jal         func_251650
    ctx->pc = 0x23B894u;
    SET_GPR_U32(ctx, 31, 0x23B89Cu);
    ctx->pc = 0x23B898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B894u;
            // 0x23b898: 0x23040  sll         $a2, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251650u;
    if (runtime->hasFunction(0x251650u)) {
        auto targetFn = runtime->lookupFunction(0x251650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B89Cu; }
        if (ctx->pc != 0x23B89Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenuAdd2__FPiii_0x251650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B89Cu; }
        if (ctx->pc != 0x23B89Cu) { return; }
    }
    ctx->pc = 0x23B89Cu;
label_23b89c:
    // 0x23b89c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x23b89cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23b8a0:
    // 0x23b8a0: 0x1a600008  blez        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x23B8A0u;
    {
        const bool branch_taken_0x23b8a0 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x23B8A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B8A0u;
            // 0x23b8a4: 0x26230001  addiu       $v1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b8a0) {
            ctx->pc = 0x23B8C4u;
            goto label_23b8c4;
        }
    }
    ctx->pc = 0x23B8A8u;
    // 0x23b8a8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x23b8a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b8ac: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x23b8acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x23b8b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23b8b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b8b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23b8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23b8b8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x23b8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x23b8bc: 0xc094594  jal         func_251650
    ctx->pc = 0x23B8BCu;
    SET_GPR_U32(ctx, 31, 0x23B8C4u);
    ctx->pc = 0x23B8C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B8BCu;
            // 0x23b8c0: 0x2446ffff  addiu       $a2, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251650u;
    if (runtime->hasFunction(0x251650u)) {
        auto targetFn = runtime->lookupFunction(0x251650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B8C4u; }
        if (ctx->pc != 0x23B8C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenuAdd2__FPiii_0x251650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B8C4u; }
        if (ctx->pc != 0x23B8C4u) { return; }
    }
    ctx->pc = 0x23B8C4u;
label_23b8c4:
    // 0x23b8c4: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x23b8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x23b8c8: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23B8C8u;
    {
        const bool branch_taken_0x23b8c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x23B8CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B8C8u;
            // 0x23b8cc: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b8c8) {
            ctx->pc = 0x23B8DCu;
            goto label_23b8dc;
        }
    }
    ctx->pc = 0x23B8D0u;
    // 0x23b8d0: 0xc094274  jal         func_2509D0
    ctx->pc = 0x23B8D0u;
    SET_GPR_U32(ctx, 31, 0x23B8D8u);
    ctx->pc = 0x23B8D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B8D0u;
            // 0x23b8d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B8D8u; }
        if (ctx->pc != 0x23B8D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B8D8u; }
        if (ctx->pc != 0x23B8D8u) { return; }
    }
    ctx->pc = 0x23B8D8u;
label_23b8d8:
    // 0x23b8d8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x23b8d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23b8dc:
    // 0x23b8dc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x23b8dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23b8e0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x23b8e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23b8e4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x23b8e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23b8e8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23b8e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23b8ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23b8ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23b8f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23b8f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b8f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23b8f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b8f8: 0x3e00008  jr          $ra
    ctx->pc = 0x23B8F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B8FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B8F8u;
            // 0x23b8fc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23B900u;
}
