#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _motionVector
// Address: 0x10a9e0 - 0x10ab2c
void _motionVector_0x10a9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_motionVector_0x10a9e0");
#endif

    switch (ctx->pc) {
        case 0x10aa34u: goto label_10aa34;
        case 0x10aa4cu: goto label_10aa4c;
        case 0x10aa6cu: goto label_10aa6c;
        case 0x10aa7cu: goto label_10aa7c;
        case 0x10aa8cu: goto label_10aa8c;
        case 0x10aaa4u: goto label_10aaa4;
        case 0x10aad4u: goto label_10aad4;
        case 0x10aaf8u: goto label_10aaf8;
        default: break;
    }

    ctx->pc = 0x10a9e0u;

    // 0x10a9e0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x10a9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x10a9e4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x10a9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x10a9e8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10a9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10a9ec: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x10a9ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a9f0: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x10a9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x10a9f4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x10a9f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a9f8: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x10a9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x10a9fc: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x10a9fcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aa00: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x10aa00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x10aa04: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x10aa04u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aa08: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x10aa08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x10aa0c: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x10aa0cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aa10: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x10aa10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x10aa14: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x10aa14u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aa18: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10aa18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10aa1c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x10aa1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aa20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10aa20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10aa24: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x10aa24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aa28: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x10aa28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x10aa2c: 0xc042b2e  jal         func_10ACB8
    ctx->pc = 0x10AA2Cu;
    SET_GPR_U32(ctx, 31, 0x10AA34u);
    ctx->pc = 0x10AA30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10AA2Cu;
            // 0x10aa30: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10ACB8u;
    if (runtime->hasFunction(0x10ACB8u)) {
        auto targetFn = runtime->lookupFunction(0x10ACB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AA34u; }
        if (ctx->pc != 0x10AA34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _ipuVdec_0x10acb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AA34u; }
        if (ctx->pc != 0x10AA34u) { return; }
    }
    ctx->pc = 0x10AA34u;
label_10aa34:
    // 0x10aa34: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x10AA34u;
    {
        const bool branch_taken_0x10aa34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AA38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AA34u;
            // 0x10aa38: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aa34) {
            ctx->pc = 0x10AA54u;
            goto label_10aa54;
        }
    }
    ctx->pc = 0x10AA3Cu;
    // 0x10aa3c: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10AA3Cu;
    {
        const bool branch_taken_0x10aa3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AA40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AA3Cu;
            // 0x10aa40: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aa3c) {
            ctx->pc = 0x10AA54u;
            goto label_10aa54;
        }
    }
    ctx->pc = 0x10AA44u;
    // 0x10aa44: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10AA44u;
    SET_GPR_U32(ctx, 31, 0x10AA4Cu);
    ctx->pc = 0x10AA48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10AA44u;
            // 0x10aa48: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AA4Cu; }
        if (ctx->pc != 0x10AA4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AA4Cu; }
        if (ctx->pc != 0x10AA4Cu) { return; }
    }
    ctx->pc = 0x10AA4Cu;
label_10aa4c:
    // 0x10aa4c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10AA4Cu;
    {
        const bool branch_taken_0x10aa4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AA50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AA4Cu;
            // 0x10aa50: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aa4c) {
            ctx->pc = 0x10AA58u;
            goto label_10aa58;
        }
    }
    ctx->pc = 0x10AA54u;
label_10aa54:
    // 0x10aa54: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10aa54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10aa58:
    // 0x10aa58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10aa58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aa5c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x10aa5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aa60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10aa60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aa64: 0xc0429ee  jal         func_10A7B8
    ctx->pc = 0x10AA64u;
    SET_GPR_U32(ctx, 31, 0x10AA6Cu);
    ctx->pc = 0x10AA68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10AA64u;
            // 0x10aa68: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A7B8u;
    if (runtime->hasFunction(0x10A7B8u)) {
        auto targetFn = runtime->lookupFunction(0x10A7B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AA6Cu; }
        if (ctx->pc != 0x10AA6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _decode_motion_vector_0x10a7b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AA6Cu; }
        if (ctx->pc != 0x10AA6Cu) { return; }
    }
    ctx->pc = 0x10AA6Cu;
label_10aa6c:
    // 0x10aa6c: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x10AA6Cu;
    {
        const bool branch_taken_0x10aa6c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AA70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AA6Cu;
            // 0x10aa70: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aa6c) {
            ctx->pc = 0x10AA84u;
            goto label_10aa84;
        }
    }
    ctx->pc = 0x10AA74u;
    // 0x10aa74: 0xc0426dc  jal         func_109B70
    ctx->pc = 0x10AA74u;
    SET_GPR_U32(ctx, 31, 0x10AA7Cu);
    ctx->pc = 0x10AA78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10AA74u;
            // 0x10aa78: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109B70u;
    if (runtime->hasFunction(0x109B70u)) {
        auto targetFn = runtime->lookupFunction(0x109B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AA7Cu; }
        if (ctx->pc != 0x10AA7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dmVector_0x109b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AA7Cu; }
        if (ctx->pc != 0x10AA7Cu) { return; }
    }
    ctx->pc = 0x10AA7Cu;
label_10aa7c:
    // 0x10aa7c: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x10aa7cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x10aa80: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10aa80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10aa84:
    // 0x10aa84: 0xc042b2e  jal         func_10ACB8
    ctx->pc = 0x10AA84u;
    SET_GPR_U32(ctx, 31, 0x10AA8Cu);
    ctx->pc = 0x10AA88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10AA84u;
            // 0x10aa88: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10ACB8u;
    if (runtime->hasFunction(0x10ACB8u)) {
        auto targetFn = runtime->lookupFunction(0x10ACB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AA8Cu; }
        if (ctx->pc != 0x10AA8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _ipuVdec_0x10acb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AA8Cu; }
        if (ctx->pc != 0x10AA8Cu) { return; }
    }
    ctx->pc = 0x10AA8Cu;
label_10aa8c:
    // 0x10aa8c: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x10AA8Cu;
    {
        const bool branch_taken_0x10aa8c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AA90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AA8Cu;
            // 0x10aa90: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aa8c) {
            ctx->pc = 0x10AAACu;
            goto label_10aaac;
        }
    }
    ctx->pc = 0x10AA94u;
    // 0x10aa94: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10AA94u;
    {
        const bool branch_taken_0x10aa94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AA98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AA94u;
            // 0x10aa98: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aa94) {
            ctx->pc = 0x10AAACu;
            goto label_10aaac;
        }
    }
    ctx->pc = 0x10AA9Cu;
    // 0x10aa9c: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10AA9Cu;
    SET_GPR_U32(ctx, 31, 0x10AAA4u);
    ctx->pc = 0x10AAA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10AA9Cu;
            // 0x10aaa0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AAA4u; }
        if (ctx->pc != 0x10AAA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AAA4u; }
        if (ctx->pc != 0x10AAA4u) { return; }
    }
    ctx->pc = 0x10AAA4u;
label_10aaa4:
    // 0x10aaa4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10AAA4u;
    {
        const bool branch_taken_0x10aaa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AAA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AAA4u;
            // 0x10aaa8: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aaa4) {
            ctx->pc = 0x10AAB0u;
            goto label_10aab0;
        }
    }
    ctx->pc = 0x10AAACu;
label_10aaac:
    // 0x10aaac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10aaacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10aab0:
    // 0x10aab0: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x10AAB0u;
    {
        const bool branch_taken_0x10aab0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AAB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AAB0u;
            // 0x10aab4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aab0) {
            ctx->pc = 0x10AAC4u;
            goto label_10aac4;
        }
    }
    ctx->pc = 0x10AAB8u;
    // 0x10aab8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x10aab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x10aabc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x10aabcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x10aac0: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x10aac0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_10aac4:
    // 0x10aac4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x10aac4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aac8: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x10aac8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aacc: 0xc0429ee  jal         func_10A7B8
    ctx->pc = 0x10AACCu;
    SET_GPR_U32(ctx, 31, 0x10AAD4u);
    ctx->pc = 0x10AAD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10AACCu;
            // 0x10aad0: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A7B8u;
    if (runtime->hasFunction(0x10A7B8u)) {
        auto targetFn = runtime->lookupFunction(0x10A7B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AAD4u; }
        if (ctx->pc != 0x10AAD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _decode_motion_vector_0x10a7b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AAD4u; }
        if (ctx->pc != 0x10AAD4u) { return; }
    }
    ctx->pc = 0x10AAD4u;
label_10aad4:
    // 0x10aad4: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x10AAD4u;
    {
        const bool branch_taken_0x10aad4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x10aad4) {
            ctx->pc = 0x10AAE8u;
            goto label_10aae8;
        }
    }
    ctx->pc = 0x10AADCu;
    // 0x10aadc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x10aadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x10aae0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x10aae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x10aae4: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x10aae4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_10aae8:
    // 0x10aae8: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x10AAE8u;
    {
        const bool branch_taken_0x10aae8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AAECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AAE8u;
            // 0x10aaec: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aae8) {
            ctx->pc = 0x10AB00u;
            goto label_10ab00;
        }
    }
    ctx->pc = 0x10AAF0u;
    // 0x10aaf0: 0xc0426dc  jal         func_109B70
    ctx->pc = 0x10AAF0u;
    SET_GPR_U32(ctx, 31, 0x10AAF8u);
    ctx->pc = 0x10AAF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10AAF0u;
            // 0x10aaf4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109B70u;
    if (runtime->hasFunction(0x109B70u)) {
        auto targetFn = runtime->lookupFunction(0x109B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AAF8u; }
        if (ctx->pc != 0x10AAF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dmVector_0x109b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AAF8u; }
        if (ctx->pc != 0x10AAF8u) { return; }
    }
    ctx->pc = 0x10AAF8u;
label_10aaf8:
    // 0x10aaf8: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x10aaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x10aafc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x10aafcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_10ab00:
    // 0x10ab00: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x10ab00u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10ab04: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x10ab04u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10ab08: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x10ab08u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10ab0c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x10ab0cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10ab10: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x10ab10u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10ab14: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x10ab14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10ab18: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10ab18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10ab1c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10ab1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ab20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10ab20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ab24: 0x3e00008  jr          $ra
    ctx->pc = 0x10AB24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AB28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AB24u;
            // 0x10ab28: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10AB2Cu;
}
