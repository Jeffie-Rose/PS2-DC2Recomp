#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PlayMapSeSrc__6CSceneFv
// Address: 0x2a7fb0 - 0x2a8098
void PlayMapSeSrc__6CSceneFv_0x2a7fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PlayMapSeSrc__6CSceneFv_0x2a7fb0");
#endif

    switch (ctx->pc) {
        case 0x2a7fb0u: goto label_2a7fb0;
        case 0x2a7fb4u: goto label_2a7fb4;
        case 0x2a7fb8u: goto label_2a7fb8;
        case 0x2a7fbcu: goto label_2a7fbc;
        case 0x2a7fc0u: goto label_2a7fc0;
        case 0x2a7fc4u: goto label_2a7fc4;
        case 0x2a7fc8u: goto label_2a7fc8;
        case 0x2a7fccu: goto label_2a7fcc;
        case 0x2a7fd0u: goto label_2a7fd0;
        case 0x2a7fd4u: goto label_2a7fd4;
        case 0x2a7fd8u: goto label_2a7fd8;
        case 0x2a7fdcu: goto label_2a7fdc;
        case 0x2a7fe0u: goto label_2a7fe0;
        case 0x2a7fe4u: goto label_2a7fe4;
        case 0x2a7fe8u: goto label_2a7fe8;
        case 0x2a7fecu: goto label_2a7fec;
        case 0x2a7ff0u: goto label_2a7ff0;
        case 0x2a7ff4u: goto label_2a7ff4;
        case 0x2a7ff8u: goto label_2a7ff8;
        case 0x2a7ffcu: goto label_2a7ffc;
        case 0x2a8000u: goto label_2a8000;
        case 0x2a8004u: goto label_2a8004;
        case 0x2a8008u: goto label_2a8008;
        case 0x2a800cu: goto label_2a800c;
        case 0x2a8010u: goto label_2a8010;
        case 0x2a8014u: goto label_2a8014;
        case 0x2a8018u: goto label_2a8018;
        case 0x2a801cu: goto label_2a801c;
        case 0x2a8020u: goto label_2a8020;
        case 0x2a8024u: goto label_2a8024;
        case 0x2a8028u: goto label_2a8028;
        case 0x2a802cu: goto label_2a802c;
        case 0x2a8030u: goto label_2a8030;
        case 0x2a8034u: goto label_2a8034;
        case 0x2a8038u: goto label_2a8038;
        case 0x2a803cu: goto label_2a803c;
        case 0x2a8040u: goto label_2a8040;
        case 0x2a8044u: goto label_2a8044;
        case 0x2a8048u: goto label_2a8048;
        case 0x2a804cu: goto label_2a804c;
        case 0x2a8050u: goto label_2a8050;
        case 0x2a8054u: goto label_2a8054;
        case 0x2a8058u: goto label_2a8058;
        case 0x2a805cu: goto label_2a805c;
        case 0x2a8060u: goto label_2a8060;
        case 0x2a8064u: goto label_2a8064;
        case 0x2a8068u: goto label_2a8068;
        case 0x2a806cu: goto label_2a806c;
        case 0x2a8070u: goto label_2a8070;
        case 0x2a8074u: goto label_2a8074;
        case 0x2a8078u: goto label_2a8078;
        case 0x2a807cu: goto label_2a807c;
        case 0x2a8080u: goto label_2a8080;
        case 0x2a8084u: goto label_2a8084;
        case 0x2a8088u: goto label_2a8088;
        case 0x2a808cu: goto label_2a808c;
        case 0x2a8090u: goto label_2a8090;
        case 0x2a8094u: goto label_2a8094;
        default: break;
    }

    ctx->pc = 0x2a7fb0u;

label_2a7fb0:
    // 0x2a7fb0: 0x27bdfc70  addiu       $sp, $sp, -0x390
    ctx->pc = 0x2a7fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966384));
label_2a7fb4:
    // 0x2a7fb4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2a7fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2a7fb8:
    // 0x2a7fb8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2a7fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_2a7fbc:
    // 0x2a7fbc: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x2a7fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2a7fc0:
    // 0x2a7fc0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2a7fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2a7fc4:
    // 0x2a7fc4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2a7fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2a7fc8:
    // 0x2a7fc8: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2a7fc8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a7fcc:
    // 0x2a7fcc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2a7fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2a7fd0:
    // 0x2a7fd0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a7fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2a7fd4:
    // 0x2a7fd4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a7fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2a7fd8:
    // 0x2a7fd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a7fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2a7fdc:
    // 0x2a7fdc: 0xc0a1214  jal         func_284850
label_2a7fe0:
    if (ctx->pc == 0x2A7FE0u) {
        ctx->pc = 0x2A7FE0u;
            // 0x2a7fe0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x2A7FE4u;
        goto label_2a7fe4;
    }
    ctx->pc = 0x2A7FDCu;
    SET_GPR_U32(ctx, 31, 0x2A7FE4u);
    ctx->pc = 0x2A7FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7FDCu;
            // 0x2a7fe0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284850u;
    if (runtime->hasFunction(0x284850u)) {
        auto targetFn = runtime->lookupFunction(0x284850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7FE4u; }
        if (ctx->pc != 0x2A7FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveMap__6CSceneFPP4CMapi_0x284850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7FE4u; }
        if (ctx->pc != 0x2A7FE4u) { return; }
    }
    ctx->pc = 0x2A7FE4u;
label_2a7fe4:
    // 0x2a7fe4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a7fe4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a7fe8:
    // 0x2a7fe8: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x2a7fe8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_2a7fec:
    // 0x2a7fec: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
label_2a7ff0:
    if (ctx->pc == 0x2A7FF0u) {
        ctx->pc = 0x2A7FF0u;
            // 0x2a7ff0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A7FF4u;
        goto label_2a7ff4;
    }
    ctx->pc = 0x2A7FECu;
    {
        const bool branch_taken_0x2a7fec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7FECu;
            // 0x2a7ff0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7fec) {
            ctx->pc = 0x2A8070u;
            goto label_2a8070;
        }
    }
    ctx->pc = 0x2A7FF4u;
label_2a7ff4:
    // 0x2a7ff4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2a7ff4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a7ff8:
    // 0x2a7ff8: 0x2bd1821  addu        $v1, $s5, $sp
    ctx->pc = 0x2a7ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 29)));
label_2a7ffc:
    // 0x2a7ffc: 0x8c640080  lw          $a0, 0x80($v1)
    ctx->pc = 0x2a7ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
label_2a8000:
    // 0x2a8000: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
label_2a8004:
    if (ctx->pc == 0x2A8004u) {
        ctx->pc = 0x2A8008u;
        goto label_2a8008;
    }
    ctx->pc = 0x2A8000u;
    {
        const bool branch_taken_0x2a8000 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8000) {
            ctx->pc = 0x2A8060u;
            goto label_2a8060;
        }
    }
    ctx->pc = 0x2A8008u;
label_2a8008:
    // 0x2a8008: 0x8c990d00  lw          $t9, 0xD00($a0)
    ctx->pc = 0x2a8008u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3328)));
label_2a800c:
    // 0x2a800c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2a800cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2a8010:
    // 0x2a8010: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x2a8010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_2a8014:
    // 0x2a8014: 0x27a70290  addiu       $a3, $sp, 0x290
    ctx->pc = 0x2a8014u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_2a8018:
    // 0x2a8018: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x2a8018u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_2a801c:
    // 0x2a801c: 0x320f809  jalr        $t9
label_2a8020:
    if (ctx->pc == 0x2A8020u) {
        ctx->pc = 0x2A8020u;
            // 0x2a8020: 0x24080040  addiu       $t0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->pc = 0x2A8024u;
        goto label_2a8024;
    }
    ctx->pc = 0x2A801Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A8024u);
        ctx->pc = 0x2A8020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A801Cu;
            // 0x2a8020: 0x24080040  addiu       $t0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A8024u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A8024u; }
            if (ctx->pc != 0x2A8024u) { return; }
        }
        }
    }
    ctx->pc = 0x2A8024u;
label_2a8024:
    // 0x2a8024: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2a8024u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a8028:
    // 0x2a8028: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x2a8028u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_2a802c:
    // 0x2a802c: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_2a8030:
    if (ctx->pc == 0x2A8030u) {
        ctx->pc = 0x2A8030u;
            // 0x2a8030: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A8034u;
        goto label_2a8034;
    }
    ctx->pc = 0x2A802Cu;
    {
        const bool branch_taken_0x2a802c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A802Cu;
            // 0x2a8030: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a802c) {
            ctx->pc = 0x2A8060u;
            goto label_2a8060;
        }
    }
    ctx->pc = 0x2A8034u;
label_2a8034:
    // 0x2a8034: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2a8034u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8038:
    // 0x2a8038: 0x29d1021  addu        $v0, $s4, $sp
    ctx->pc = 0x2a8038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
label_2a803c:
    // 0x2a803c: 0x8c450090  lw          $a1, 0x90($v0)
    ctx->pc = 0x2a803cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
label_2a8040:
    // 0x2a8040: 0xc44c0190  lwc1        $f12, 0x190($v0)
    ctx->pc = 0x2a8040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2a8044:
    // 0x2a8044: 0xc44d0290  lwc1        $f13, 0x290($v0)
    ctx->pc = 0x2a8044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2a8048:
    // 0x2a8048: 0xc0a9d9c  jal         func_2A7670
label_2a804c:
    if (ctx->pc == 0x2A804Cu) {
        ctx->pc = 0x2A804Cu;
            // 0x2a804c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A8050u;
        goto label_2a8050;
    }
    ctx->pc = 0x2A8048u;
    SET_GPR_U32(ctx, 31, 0x2A8050u);
    ctx->pc = 0x2A804Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8048u;
            // 0x2a804c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A7670u;
    if (runtime->hasFunction(0x2A7670u)) {
        auto targetFn = runtime->lookupFunction(0x2A7670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8050u; }
        if (ctx->pc != 0x2A8050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlaySeSrc__6CSceneFiff_0x2a7670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8050u; }
        if (ctx->pc != 0x2A8050u) { return; }
    }
    ctx->pc = 0x2A8050u;
label_2a8050:
    // 0x2a8050: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2a8050u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2a8054:
    // 0x2a8054: 0x272182a  slt         $v1, $s3, $s2
    ctx->pc = 0x2a8054u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_2a8058:
    // 0x2a8058: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_2a805c:
    if (ctx->pc == 0x2A805Cu) {
        ctx->pc = 0x2A805Cu;
            // 0x2a805c: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->pc = 0x2A8060u;
        goto label_2a8060;
    }
    ctx->pc = 0x2A8058u;
    {
        const bool branch_taken_0x2a8058 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A805Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8058u;
            // 0x2a805c: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8058) {
            ctx->pc = 0x2A8038u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a8038;
        }
    }
    ctx->pc = 0x2A8060u;
label_2a8060:
    // 0x2a8060: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2a8060u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2a8064:
    // 0x2a8064: 0x230182a  slt         $v1, $s1, $s0
    ctx->pc = 0x2a8064u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_2a8068:
    // 0x2a8068: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
label_2a806c:
    if (ctx->pc == 0x2A806Cu) {
        ctx->pc = 0x2A806Cu;
            // 0x2a806c: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->pc = 0x2A8070u;
        goto label_2a8070;
    }
    ctx->pc = 0x2A8068u;
    {
        const bool branch_taken_0x2a8068 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A806Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8068u;
            // 0x2a806c: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8068) {
            ctx->pc = 0x2A7FF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a7ff8;
        }
    }
    ctx->pc = 0x2A8070u;
label_2a8070:
    // 0x2a8070: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2a8070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2a8074:
    // 0x2a8074: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2a8074u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2a8078:
    // 0x2a8078: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2a8078u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2a807c:
    // 0x2a807c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2a807cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2a8080:
    // 0x2a8080: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a8080u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2a8084:
    // 0x2a8084: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a8084u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2a8088:
    // 0x2a8088: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a8088u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a808c:
    // 0x2a808c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a808cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a8090:
    // 0x2a8090: 0x3e00008  jr          $ra
label_2a8094:
    if (ctx->pc == 0x2A8094u) {
        ctx->pc = 0x2A8094u;
            // 0x2a8094: 0x27bd0390  addiu       $sp, $sp, 0x390 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
        ctx->pc = 0x2A8098u;
        goto label_fallthrough_0x2a8090;
    }
    ctx->pc = 0x2A8090u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8090u;
            // 0x2a8094: 0x27bd0390  addiu       $sp, $sp, 0x390 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2a8090:
    ctx->pc = 0x2A8098u;
}
