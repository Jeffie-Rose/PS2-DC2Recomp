#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _multiply
// Address: 0x1277a0 - 0x1279cc
void _multiply_0x1277a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_multiply_0x1277a0");
#endif

    switch (ctx->pc) {
        case 0x127804u: goto label_127804;
        case 0x127830u: goto label_127830;
        case 0x127880u: goto label_127880;
        case 0x1278a0u: goto label_1278a0;
        case 0x127920u: goto label_127920;
        case 0x127988u: goto label_127988;
        default: break;
    }

    ctx->pc = 0x1277a0u;

    // 0x1277a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1277a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1277a4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1277a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1277a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1277a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1277ac: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1277acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1277b0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1277b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1277b4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1277b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1277b8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1277b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1277bc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1277bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1277c0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1277c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1277c4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1277c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1277c8: 0x8e120010  lw          $s2, 0x10($s0)
    ctx->pc = 0x1277c8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1277cc: 0x8e330010  lw          $s3, 0x10($s1)
    ctx->pc = 0x1277ccu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1277d0: 0x253102a  slt         $v0, $s2, $s3
    ctx->pc = 0x1277d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1277d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1277D4u;
    {
        const bool branch_taken_0x1277d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1277D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1277D4u;
            // 0x1277d8: 0x200c82d  daddu       $t9, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1277d4) {
            ctx->pc = 0x1277ECu;
            goto label_1277ec;
        }
    }
    ctx->pc = 0x1277DCu;
    // 0x1277dc: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1277dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1277e0: 0x320882d  daddu       $s1, $t9, $zero
    ctx->pc = 0x1277e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1277e4: 0x8e120010  lw          $s2, 0x10($s0)
    ctx->pc = 0x1277e4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1277e8: 0x8e330010  lw          $s3, 0x10($s1)
    ctx->pc = 0x1277e8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1277ec:
    // 0x1277ec: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1277ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1277f0: 0x253a021  addu        $s4, $s2, $s3
    ctx->pc = 0x1277f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x1277f4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1277f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1277f8: 0xb4282a  slt         $a1, $a1, $s4
    ctx->pc = 0x1277f8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1277fc: 0xc049cba  jal         func_1272E8
    ctx->pc = 0x1277FCu;
    SET_GPR_U32(ctx, 31, 0x127804u);
    ctx->pc = 0x127800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1277FCu;
            // 0x127800: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272E8u;
    if (runtime->hasFunction(0x1272E8u)) {
        auto targetFn = runtime->lookupFunction(0x1272E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127804u; }
        if (ctx->pc != 0x127804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Balloc_0x1272e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127804u; }
        if (ctx->pc != 0x127804u) { return; }
    }
    ctx->pc = 0x127804u;
label_127804:
    // 0x127804: 0x40c82d  daddu       $t9, $v0, $zero
    ctx->pc = 0x127804u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127808: 0x14a880  sll         $s5, $s4, 2
    ctx->pc = 0x127808u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x12780c: 0x27380014  addiu       $t8, $t9, 0x14
    ctx->pc = 0x12780cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 25), 20));
    // 0x127810: 0x3152021  addu        $a0, $t8, $s5
    ctx->pc = 0x127810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 21)));
    // 0x127814: 0x304102b  sltu        $v0, $t8, $a0
    ctx->pc = 0x127814u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x127818: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x127818u;
    {
        const bool branch_taken_0x127818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12781Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127818u;
            // 0x12781c: 0x300482d  daddu       $t1, $t8, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127818) {
            ctx->pc = 0x127854u;
            goto label_127854;
        }
    }
    ctx->pc = 0x127820u;
    // 0x127820: 0x260e0014  addiu       $t6, $s0, 0x14
    ctx->pc = 0x127820u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x127824: 0x122880  sll         $a1, $s2, 2
    ctx->pc = 0x127824u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x127828: 0x26260014  addiu       $a2, $s1, 0x14
    ctx->pc = 0x127828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x12782c: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x12782cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_127830:
    // 0x127830: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x127830u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x127834: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x127834u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x127838: 0x124102b  sltu        $v0, $t1, $a0
    ctx->pc = 0x127838u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x12783c: 0x0  nop
    ctx->pc = 0x12783cu;
    // NOP
    // 0x127840: 0x0  nop
    ctx->pc = 0x127840u;
    // NOP
    // 0x127844: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x127844u;
    {
        const bool branch_taken_0x127844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127844) {
            ctx->pc = 0x127830u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_127830;
        }
    }
    ctx->pc = 0x12784Cu;
    // 0x12784c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12784Cu;
    {
        const bool branch_taken_0x12784c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12784Cu;
            // 0x127850: 0xc0602d  daddu       $t4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12784c) {
            ctx->pc = 0x127868u;
            goto label_127868;
        }
    }
    ctx->pc = 0x127854u;
label_127854:
    // 0x127854: 0x260e0014  addiu       $t6, $s0, 0x14
    ctx->pc = 0x127854u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x127858: 0x122880  sll         $a1, $s2, 2
    ctx->pc = 0x127858u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x12785c: 0x26260014  addiu       $a2, $s1, 0x14
    ctx->pc = 0x12785cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x127860: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x127860u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x127864: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x127864u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_127868:
    // 0x127868: 0x1c58821  addu        $s1, $t6, $a1
    ctx->pc = 0x127868u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
    // 0x12786c: 0x1839021  addu        $s2, $t4, $v1
    ctx->pc = 0x12786cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x127870: 0x192102b  sltu        $v0, $t4, $s2
    ctx->pc = 0x127870u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x127874: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x127874u;
    {
        const bool branch_taken_0x127874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127874u;
            // 0x127878: 0x300682d  daddu       $t5, $t8, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127874) {
            ctx->pc = 0x127984u;
            goto label_127984;
        }
    }
    ctx->pc = 0x12787Cu;
    // 0x12787c: 0x0  nop
    ctx->pc = 0x12787cu;
    // NOP
label_127880:
    // 0x127880: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x127880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x127884: 0x304affff  andi        $t2, $v0, 0xFFFF
    ctx->pc = 0x127884u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x127888: 0x1140001c  beqz        $t2, . + 4 + (0x1C << 2)
    ctx->pc = 0x127888u;
    {
        const bool branch_taken_0x127888 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x12788Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127888u;
            // 0x12788c: 0x1a0402d  daddu       $t0, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127888) {
            ctx->pc = 0x1278FCu;
            goto label_1278fc;
        }
    }
    ctx->pc = 0x127890u;
    // 0x127890: 0x1c0482d  daddu       $t1, $t6, $zero
    ctx->pc = 0x127890u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127894: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x127894u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127898: 0x25900004  addiu       $s0, $t4, 0x4
    ctx->pc = 0x127898u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x12789c: 0x250f0004  addiu       $t7, $t0, 0x4
    ctx->pc = 0x12789cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_1278a0:
    // 0x1278a0: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x1278a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1278a4: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x1278a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1278a8: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x1278a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x1278ac: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x1278acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1278b0: 0x131302b  sltu        $a2, $t1, $s1
    ctx->pc = 0x1278b0u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1278b4: 0x4a1018  mult        $v0, $v0, $t2
    ctx->pc = 0x1278b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1278b8: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x1278b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x1278bc: 0x706a1818  mult1       $v1, $v1, $t2
    ctx->pc = 0x1278bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 10); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1278c0: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x1278c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1278c4: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x1278c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x1278c8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1278c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1278cc: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x1278ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x1278d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1278d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1278d4: 0x25c02  srl         $t3, $v0, 16
    ctx->pc = 0x1278d4u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x1278d8: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x1278d8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1278dc: 0x6b3821  addu        $a3, $v1, $t3
    ctx->pc = 0x1278dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x1278e0: 0xa5070002  sh          $a3, 0x2($t0)
    ctx->pc = 0x1278e0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 7));
    // 0x1278e4: 0x75c02  srl         $t3, $a3, 16
    ctx->pc = 0x1278e4u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x1278e8: 0x14c0ffed  bnez        $a2, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1278E8u;
    {
        const bool branch_taken_0x1278e8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1278ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1278E8u;
            // 0x1278ec: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1278e8) {
            ctx->pc = 0x1278A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1278a0;
        }
    }
    ctx->pc = 0x1278F0u;
    // 0x1278f0: 0xad0b0000  sw          $t3, 0x0($t0)
    ctx->pc = 0x1278f0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 11));
    // 0x1278f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1278F4u;
    {
        const bool branch_taken_0x1278f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1278F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1278F4u;
            // 0x1278f8: 0x8d820000  lw          $v0, 0x0($t4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1278f4) {
            ctx->pc = 0x127904u;
            goto label_127904;
        }
    }
    ctx->pc = 0x1278FCu;
label_1278fc:
    // 0x1278fc: 0x25900004  addiu       $s0, $t4, 0x4
    ctx->pc = 0x1278fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x127900: 0x25af0004  addiu       $t7, $t5, 0x4
    ctx->pc = 0x127900u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
label_127904:
    // 0x127904: 0x25402  srl         $t2, $v0, 16
    ctx->pc = 0x127904u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x127908: 0x1140001a  beqz        $t2, . + 4 + (0x1A << 2)
    ctx->pc = 0x127908u;
    {
        const bool branch_taken_0x127908 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x12790Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127908u;
            // 0x12790c: 0x1a0402d  daddu       $t0, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127908) {
            ctx->pc = 0x127974u;
            goto label_127974;
        }
    }
    ctx->pc = 0x127910u;
    // 0x127910: 0x1c0482d  daddu       $t1, $t6, $zero
    ctx->pc = 0x127910u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127914: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x127914u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x127918: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x127918u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12791c: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x12791cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_127920:
    // 0x127920: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x127920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x127924: 0x21c02  srl         $v1, $v0, 16
    ctx->pc = 0x127924u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x127928: 0xa5070000  sh          $a3, 0x0($t0)
    ctx->pc = 0x127928u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x12792c: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x12792cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x127930: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x127930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x127934: 0x131282b  sltu        $a1, $t1, $s1
    ctx->pc = 0x127934u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x127938: 0x4a1018  mult        $v0, $v0, $t2
    ctx->pc = 0x127938u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x12793c: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x12793cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x127940: 0x708a2018  mult1       $a0, $a0, $t2
    ctx->pc = 0x127940u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 10); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x127944: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x127944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x127948: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x127948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x12794c: 0xa5020002  sh          $v0, 0x2($t0)
    ctx->pc = 0x12794cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x127950: 0x25c02  srl         $t3, $v0, 16
    ctx->pc = 0x127950u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x127954: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x127954u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x127958: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x127958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x12795c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x12795cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x127960: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x127960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x127964: 0x8b3821  addu        $a3, $a0, $t3
    ctx->pc = 0x127964u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x127968: 0x14a0ffed  bnez        $a1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x127968u;
    {
        const bool branch_taken_0x127968 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x12796Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127968u;
            // 0x12796c: 0x75c02  srl         $t3, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127968) {
            ctx->pc = 0x127920u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_127920;
        }
    }
    ctx->pc = 0x127970u;
    // 0x127970: 0xad070000  sw          $a3, 0x0($t0)
    ctx->pc = 0x127970u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
label_127974:
    // 0x127974: 0x200602d  daddu       $t4, $s0, $zero
    ctx->pc = 0x127974u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127978: 0x192102b  sltu        $v0, $t4, $s2
    ctx->pc = 0x127978u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x12797c: 0x1440ffc0  bnez        $v0, . + 4 + (-0x40 << 2)
    ctx->pc = 0x12797Cu;
    {
        const bool branch_taken_0x12797c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x127980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12797Cu;
            // 0x127980: 0x1e0682d  daddu       $t5, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12797c) {
            ctx->pc = 0x127880u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_127880;
        }
    }
    ctx->pc = 0x127984u;
label_127984:
    // 0x127984: 0x3154021  addu        $t0, $t8, $s5
    ctx->pc = 0x127984u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 21)));
label_127988:
    // 0x127988: 0x5a800006  blezl       $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x127988u;
    {
        const bool branch_taken_0x127988 = (GPR_S32(ctx, 20) <= 0);
        if (branch_taken_0x127988) {
            ctx->pc = 0x12798Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x127988u;
            // 0x12798c: 0xaf340010  sw          $s4, 0x10($t9) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 25), 16), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1279A4u;
            goto label_1279a4;
        }
    }
    ctx->pc = 0x127990u;
    // 0x127990: 0x2508fffc  addiu       $t0, $t0, -0x4
    ctx->pc = 0x127990u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
    // 0x127994: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x127994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x127998: 0x5040fffb  beql        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x127998u;
    {
        const bool branch_taken_0x127998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x127998) {
            ctx->pc = 0x12799Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x127998u;
            // 0x12799c: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x127988u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_127988;
        }
    }
    ctx->pc = 0x1279A0u;
    // 0x1279a0: 0xaf340010  sw          $s4, 0x10($t9)
    ctx->pc = 0x1279a0u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 16), GPR_U32(ctx, 20));
label_1279a4:
    // 0x1279a4: 0x320102d  daddu       $v0, $t9, $zero
    ctx->pc = 0x1279a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1279a8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1279a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1279ac: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1279acu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1279b0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1279b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1279b4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1279b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1279b8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1279b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1279bc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1279bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1279c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1279c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1279c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1279C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1279C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1279C4u;
            // 0x1279c8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1279CCu;
}
