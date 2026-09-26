#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: menu_inputkey_limmit_check_glid__12CMenuKeyFuncFi
// Address: 0x23ecf0 - 0x23ee64
void menu_inputkey_limmit_check_glid__12CMenuKeyFuncFi_0x23ecf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("menu_inputkey_limmit_check_glid__12CMenuKeyFuncFi_0x23ecf0");
#endif

    switch (ctx->pc) {
        case 0x23ed54u: goto label_23ed54;
        case 0x23edecu: goto label_23edec;
        default: break;
    }

    ctx->pc = 0x23ecf0u;

    // 0x23ecf0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x23ecf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x23ecf4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x23ecf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x23ecf8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x23ecf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x23ecfc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x23ecfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x23ed00: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x23ed00u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ed04: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x23ed04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x23ed08: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x23ed08u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ed0c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x23ed0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x23ed10: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x23ed10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ed14: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23ed14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x23ed18: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x23ed18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ed1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23ed1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23ed20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23ed20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23ed24: 0x24910070  addiu       $s1, $a0, 0x70
    ctx->pc = 0x23ed24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x23ed28: 0x8c920134  lw          $s2, 0x134($a0)
    ctx->pc = 0x23ed28u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 308)));
    // 0x23ed2c: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x23ed2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23ed30: 0x92420013  lbu         $v0, 0x13($s2)
    ctx->pc = 0x23ed30u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 19)));
    // 0x23ed34: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x23ed34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
    // 0x23ed38: 0x92420012  lbu         $v0, 0x12($s2)
    ctx->pc = 0x23ed38u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x23ed3c: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x23ed3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
    // 0x23ed40: 0x92420011  lbu         $v0, 0x11($s2)
    ctx->pc = 0x23ed40u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 17)));
    // 0x23ed44: 0xafa20098  sw          $v0, 0x98($sp)
    ctx->pc = 0x23ed44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
    // 0x23ed48: 0x92420010  lbu         $v0, 0x10($s2)
    ctx->pc = 0x23ed48u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x23ed4c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x23ED4Cu;
    {
        const bool branch_taken_0x23ed4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23ED50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23ED4Cu;
            // 0x23ed50: 0xafa2009c  sw          $v0, 0x9C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ed4c) {
            ctx->pc = 0x23EE28u;
            goto label_23ee28;
        }
    }
    ctx->pc = 0x23ED54u;
label_23ed54:
    // 0x23ed54: 0x24420c70  addiu       $v0, $v0, 0xC70
    ctx->pc = 0x23ed54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3184));
    // 0x23ed58: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x23ed58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x23ed5c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x23ed5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23ed60: 0x2c21024  and         $v0, $s6, $v0
    ctx->pc = 0x23ed60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
    // 0x23ed64: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x23ED64u;
    {
        const bool branch_taken_0x23ed64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ed64) {
            ctx->pc = 0x23EE1Cu;
            goto label_23ee1c;
        }
    }
    ctx->pc = 0x23ED6Cu;
    // 0x23ed6c: 0x92430013  lbu         $v1, 0x13($s2)
    ctx->pc = 0x23ed6cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 19)));
    // 0x23ed70: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x23ed70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x23ed74: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x23ED74u;
    {
        const bool branch_taken_0x23ed74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23ED78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23ED74u;
            // 0x23ed78: 0x43001a  div         $zero, $v0, $v1 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ed74) {
            ctx->pc = 0x23ED80u;
            goto label_23ed80;
        }
    }
    ctx->pc = 0x23ED7Cu;
    // 0x23ed7c: 0x1cd  break       0, 7
    ctx->pc = 0x23ed7cu;
    runtime->handleBreak(rdram, ctx);
label_23ed80:
    // 0x23ed80: 0x1010  mfhi        $v0
    ctx->pc = 0x23ed80u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x23ed84: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x23ed84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
    // 0x23ed88: 0x92430013  lbu         $v1, 0x13($s2)
    ctx->pc = 0x23ed88u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 19)));
    // 0x23ed8c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x23ed8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x23ed90: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x23ED90u;
    {
        const bool branch_taken_0x23ed90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23ED94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23ED90u;
            // 0x23ed94: 0x43001a  div         $zero, $v0, $v1 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ed90) {
            ctx->pc = 0x23ED9Cu;
            goto label_23ed9c;
        }
    }
    ctx->pc = 0x23ED98u;
    // 0x23ed98: 0x1cd  break       0, 7
    ctx->pc = 0x23ed98u;
    runtime->handleBreak(rdram, ctx);
label_23ed9c:
    // 0x23ed9c: 0x1012  mflo        $v0
    ctx->pc = 0x23ed9cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x23eda0: 0x2a610002  slti        $at, $s3, 0x2
    ctx->pc = 0x23eda0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x23eda4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23eda4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23eda8: 0x27a50088  addiu       $a1, $sp, 0x88
    ctx->pc = 0x23eda8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x23edac: 0x27a30098  addiu       $v1, $sp, 0x98
    ctx->pc = 0x23edacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x23edb0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x23edb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x23edb4: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x23EDB4u;
    {
        const bool branch_taken_0x23edb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EDB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23EDB4u;
            // 0x23edb8: 0xafa2008c  sw          $v0, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23edb4) {
            ctx->pc = 0x23EDCCu;
            goto label_23edcc;
        }
    }
    ctx->pc = 0x23EDBCu;
    // 0x23edbc: 0x26260004  addiu       $a2, $s1, 0x4
    ctx->pc = 0x23edbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x23edc0: 0x27a5008c  addiu       $a1, $sp, 0x8C
    ctx->pc = 0x23edc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x23edc4: 0x27a3009c  addiu       $v1, $sp, 0x9C
    ctx->pc = 0x23edc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x23edc8: 0x27a40094  addiu       $a0, $sp, 0x94
    ctx->pc = 0x23edc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
label_23edcc:
    // 0x23edcc: 0x0  nop
    ctx->pc = 0x23edccu;
    // NOP
    // 0x23edd0: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x23edd0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23edd4: 0x2551021  addu        $v0, $s2, $s5
    ctx->pc = 0x23edd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    // 0x23edd8: 0x844a0014  lh          $t2, 0x14($v0)
    ctx->pc = 0x23edd8u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x23eddc: 0x8647000c  lh          $a3, 0xC($s2)
    ctx->pc = 0x23eddcu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x23ede0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x23ede0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23ede4: 0xc08ec6c  jal         func_23B1B0
    ctx->pc = 0x23EDE4u;
    SET_GPR_U32(ctx, 31, 0x23EDECu);
    ctx->pc = 0x23EDE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23EDE4u;
            // 0x23ede8: 0x8c690000  lw          $t1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B1B0u;
    if (runtime->hasFunction(0x23B1B0u)) {
        auto targetFn = runtime->lookupFunction(0x23B1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EDECu; }
        if (ctx->pc != 0x23EDECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuKeySelectCheck__FiPiPiiiii_0x23b1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EDECu; }
        if (ctx->pc != 0x23EDECu) { return; }
    }
    ctx->pc = 0x23EDECu;
label_23edec:
    // 0x23edec: 0x92460013  lbu         $a2, 0x13($s2)
    ctx->pc = 0x23edecu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 19)));
    // 0x23edf0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x23edf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23edf4: 0x8fa5008c  lw          $a1, 0x8C($sp)
    ctx->pc = 0x23edf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x23edf8: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x23edf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23edfc: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x23edfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x23ee00: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x23ee00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x23ee04: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x23EE04u;
    {
        const bool branch_taken_0x23ee04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x23EE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23EE04u;
            // 0x23ee08: 0xae240000  sw          $a0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ee04) {
            ctx->pc = 0x23EE1Cu;
            goto label_23ee1c;
        }
    }
    ctx->pc = 0x23EE0Cu;
    // 0x23ee0c: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x23ee0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x23ee10: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x23ee10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x23ee14: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x23EE14u;
    {
        const bool branch_taken_0x23ee14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EE18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23EE14u;
            // 0x23ee18: 0x8450001c  lh          $s0, 0x1C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ee14) {
            ctx->pc = 0x23EE34u;
            goto label_23ee34;
        }
    }
    ctx->pc = 0x23EE1Cu;
label_23ee1c:
    // 0x23ee1c: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x23ee1cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x23ee20: 0x26b50002  addiu       $s5, $s5, 0x2
    ctx->pc = 0x23ee20u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
    // 0x23ee24: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x23ee24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_23ee28:
    // 0x23ee28: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x23ee28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x23ee2c: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x23EE2Cu;
    {
        const bool branch_taken_0x23ee2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EE30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23EE2Cu;
            // 0x23ee30: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ee2c) {
            ctx->pc = 0x23ED54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23ed54;
        }
    }
    ctx->pc = 0x23EE34u;
label_23ee34:
    // 0x23ee34: 0x0  nop
    ctx->pc = 0x23ee34u;
    // NOP
    // 0x23ee38: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23ee38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ee3c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x23ee3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x23ee40: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x23ee40u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23ee44: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x23ee44u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23ee48: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x23ee48u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23ee4c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23ee4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23ee50: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23ee50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23ee54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23ee54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ee58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23ee58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ee5c: 0x3e00008  jr          $ra
    ctx->pc = 0x23EE5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23EE60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23EE5Cu;
            // 0x23ee60: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23EE64u;
}
