#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetLine__9input_strFPciPc
// Address: 0x146290 - 0x146394
void GetLine__9input_strFPciPc_0x146290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetLine__9input_strFPciPc_0x146290");
#endif

    switch (ctx->pc) {
        case 0x1462e8u: goto label_1462e8;
        case 0x1462f4u: goto label_1462f4;
        case 0x14630cu: goto label_14630c;
        case 0x14632cu: goto label_14632c;
        default: break;
    }

    ctx->pc = 0x146290u;

    // 0x146290: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x146290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x146294: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x146294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x146298: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x146298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x14629c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x14629cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1462a0: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1462a0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1462a4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1462a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1462a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1462a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1462ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1462acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1462b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1462b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1462b4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1462b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1462b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1462b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1462bc: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x1462bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x1462c0: 0x87838024  lh          $v1, -0x7FDC($gp)
    ctx->pc = 0x1462c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294934564)));
    // 0x1462c4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1462c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1462c8: 0x93828026  lbu         $v0, -0x7FDA($gp)
    ctx->pc = 0x1462c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934566)));
    // 0x1462cc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1462ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1462d0: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x1462d0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1462d4: 0x16000002  bnez        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1462D4u;
    {
        const bool branch_taken_0x1462d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1462D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1462D4u;
            // 0x1462d8: 0xa0820002  sb          $v0, 0x2($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1462d4) {
            ctx->pc = 0x1462E0u;
            goto label_1462e0;
        }
    }
    ctx->pc = 0x1462DCu;
    // 0x1462dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1462dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1462e0:
    // 0x1462e0: 0xc04a422  jal         func_129088
    ctx->pc = 0x1462E0u;
    SET_GPR_U32(ctx, 31, 0x1462E8u);
    ctx->pc = 0x1462E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1462E0u;
            // 0x1462e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1462E8u; }
        if (ctx->pc != 0x1462E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1462E8u; }
        if (ctx->pc != 0x1462E8u) { return; }
    }
    ctx->pc = 0x1462E8u;
label_1462e8:
    // 0x1462e8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1462e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1462ec: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1462ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1462f0: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1462f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1462f4:
    // 0x1462f4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1462f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1462f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1462f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1462fc: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1462fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x146300: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x146300u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146304: 0xc049bf2  jal         func_126FC8
    ctx->pc = 0x146304u;
    SET_GPR_U32(ctx, 31, 0x14630Cu);
    ctx->pc = 0x146308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146304u;
            // 0x146308: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126FC8u;
    if (runtime->hasFunction(0x126FC8u)) {
        auto targetFn = runtime->lookupFunction(0x126FC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14630Cu; }
        if (ctx->pc != 0x14630Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x126fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14630Cu; }
        if (ctx->pc != 0x14630Cu) { return; }
    }
    ctx->pc = 0x14630Cu;
label_14630c:
    // 0x14630c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14630Cu;
    {
        const bool branch_taken_0x14630c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14630Cu;
            // 0x146310: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14630c) {
            ctx->pc = 0x146324u;
            goto label_146324;
        }
    }
    ctx->pc = 0x146314u;
    // 0x146314: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x146314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x146318: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x146318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x14631c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x14631Cu;
    {
        const bool branch_taken_0x14631c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14631Cu;
            // 0x146320: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14631c) {
            ctx->pc = 0x14635Cu;
            goto label_14635c;
        }
    }
    ctx->pc = 0x146324u;
label_146324:
    // 0x146324: 0xc0518e8  jal         func_1463A0
    ctx->pc = 0x146324u;
    SET_GPR_U32(ctx, 31, 0x14632Cu);
    ctx->pc = 0x146328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146324u;
            // 0x146328: 0x27a5008c  addiu       $a1, $sp, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463A0u;
    if (runtime->hasFunction(0x1463A0u)) {
        auto targetFn = runtime->lookupFunction(0x1463A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14632Cu; }
        if (ctx->pc != 0x14632Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        get__9input_strFPi_0x1463a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14632Cu; }
        if (ctx->pc != 0x14632Cu) { return; }
    }
    ctx->pc = 0x14632Cu;
label_14632c:
    // 0x14632c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14632Cu;
    {
        const bool branch_taken_0x14632c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14632Cu;
            // 0x146330: 0x26c2ffff  addiu       $v0, $s6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14632c) {
            ctx->pc = 0x14633Cu;
            goto label_14633c;
        }
    }
    ctx->pc = 0x146334u;
    // 0x146334: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x146334u;
    {
        const bool branch_taken_0x146334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146334u;
            // 0x146338: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146334) {
            ctx->pc = 0x14635Cu;
            goto label_14635c;
        }
    }
    ctx->pc = 0x14633Cu;
label_14633c:
    // 0x14633c: 0x282082a  slt         $at, $s4, $v0
    ctx->pc = 0x14633cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x146340: 0x1020ffec  beqz        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x146340u;
    {
        const bool branch_taken_0x146340 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x146340) {
            ctx->pc = 0x1462F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1462f4;
        }
    }
    ctx->pc = 0x146348u;
    // 0x146348: 0x83a3008c  lb          $v1, 0x8C($sp)
    ctx->pc = 0x146348u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x14634c: 0x2341021  addu        $v0, $s1, $s4
    ctx->pc = 0x14634cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x146350: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x146350u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x146354: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
    ctx->pc = 0x146354u;
    {
        const bool branch_taken_0x146354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146354u;
            // 0x146358: 0xa0430000  sb          $v1, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146354) {
            ctx->pc = 0x1462F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1462f4;
        }
    }
    ctx->pc = 0x14635Cu;
label_14635c:
    // 0x14635c: 0x0  nop
    ctx->pc = 0x14635cu;
    // NOP
    // 0x146360: 0x2341021  addu        $v0, $s1, $s4
    ctx->pc = 0x146360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x146364: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x146364u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x146368: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x146368u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14636c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x14636cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x146370: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x146370u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x146374: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x146374u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x146378: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x146378u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14637c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14637cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x146380: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x146380u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x146384: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x146384u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x146388: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x146388u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14638c: 0x3e00008  jr          $ra
    ctx->pc = 0x14638Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14638Cu;
            // 0x146390: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x146394u;
}
