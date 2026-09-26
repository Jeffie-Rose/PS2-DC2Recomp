#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __kernel_rem_pio2
// Address: 0x11ba48 - 0x11c5b0
void ps2___kernel_rem_pio2_0x11ba48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___kernel_rem_pio2_0x11ba48");
#endif

    switch (ctx->pc) {
        case 0x11bb18u: goto label_11bb18;
        case 0x11bb38u: goto label_11bb38;
        case 0x11bb98u: goto label_11bb98;
        case 0x11bbb0u: goto label_11bbb0;
        case 0x11bbd8u: goto label_11bbd8;
        case 0x11bbe4u: goto label_11bbe4;
        case 0x11bc28u: goto label_11bc28;
        case 0x11bc50u: goto label_11bc50;
        case 0x11bc64u: goto label_11bc64;
        case 0x11bc70u: goto label_11bc70;
        case 0x11bc78u: goto label_11bc78;
        case 0x11bc8cu: goto label_11bc8c;
        case 0x11bc98u: goto label_11bc98;
        case 0x11bca0u: goto label_11bca0;
        case 0x11bcb4u: goto label_11bcb4;
        case 0x11bcccu: goto label_11bccc;
        case 0x11bce0u: goto label_11bce0;
        case 0x11bce8u: goto label_11bce8;
        case 0x11bcf8u: goto label_11bcf8;
        case 0x11bd04u: goto label_11bd04;
        case 0x11bd10u: goto label_11bd10;
        case 0x11bd1cu: goto label_11bd1c;
        case 0x11bd28u: goto label_11bd28;
        case 0x11bdb4u: goto label_11bdb4;
        case 0x11bdf0u: goto label_11bdf0;
        case 0x11be90u: goto label_11be90;
        case 0x11bea4u: goto label_11bea4;
        case 0x11beb0u: goto label_11beb0;
        case 0x11bec0u: goto label_11bec0;
        case 0x11bee8u: goto label_11bee8;
        case 0x11bf38u: goto label_11bf38;
        case 0x11bf80u: goto label_11bf80;
        case 0x11bfacu: goto label_11bfac;
        case 0x11bfc0u: goto label_11bfc0;
        case 0x11bfe8u: goto label_11bfe8;
        case 0x11bff4u: goto label_11bff4;
        case 0x11c044u: goto label_11c044;
        case 0x11c078u: goto label_11c078;
        case 0x11c0b4u: goto label_11c0b4;
        case 0x11c0c4u: goto label_11c0c4;
        case 0x11c0ecu: goto label_11c0ec;
        case 0x11c0f4u: goto label_11c0f4;
        case 0x11c0fcu: goto label_11c0fc;
        case 0x11c118u: goto label_11c118;
        case 0x11c124u: goto label_11c124;
        case 0x11c12cu: goto label_11c12c;
        case 0x11c15cu: goto label_11c15c;
        case 0x11c17cu: goto label_11c17c;
        case 0x11c198u: goto label_11c198;
        case 0x11c1a8u: goto label_11c1a8;
        case 0x11c1b4u: goto label_11c1b4;
        case 0x11c1c8u: goto label_11c1c8;
        case 0x11c1e8u: goto label_11c1e8;
        case 0x11c210u: goto label_11c210;
        case 0x11c23cu: goto label_11c23c;
        case 0x11c248u: goto label_11c248;
        case 0x11c2d0u: goto label_11c2d0;
        case 0x11c2e8u: goto label_11c2e8;
        case 0x11c310u: goto label_11c310;
        case 0x11c330u: goto label_11c330;
        case 0x11c348u: goto label_11c348;
        case 0x11c37cu: goto label_11c37c;
        case 0x11c390u: goto label_11c390;
        case 0x11c3a8u: goto label_11c3a8;
        case 0x11c3bcu: goto label_11c3bc;
        case 0x11c3ecu: goto label_11c3ec;
        case 0x11c408u: goto label_11c408;
        case 0x11c434u: goto label_11c434;
        case 0x11c444u: goto label_11c444;
        case 0x11c450u: goto label_11c450;
        case 0x11c470u: goto label_11c470;
        case 0x11c49cu: goto label_11c49c;
        case 0x11c4acu: goto label_11c4ac;
        case 0x11c4b8u: goto label_11c4b8;
        case 0x11c4e8u: goto label_11c4e8;
        case 0x11c500u: goto label_11c500;
        case 0x11c54cu: goto label_11c54c;
        case 0x11c560u: goto label_11c560;
        case 0x11c574u: goto label_11c574;
        default: break;
    }

    ctx->pc = 0x11ba48u;

    // 0x11ba48: 0x240a0018  addiu       $t2, $zero, 0x18
    ctx->pc = 0x11ba48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x11ba4c: 0x24cbfffd  addiu       $t3, $a2, -0x3
    ctx->pc = 0x11ba4cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967293));
    // 0x11ba50: 0x16a001a  div         $zero, $t3, $t2
    ctx->pc = 0x11ba50u;
    { int32_t divisor = GPR_S32(ctx, 10);    int32_t dividend = GPR_S32(ctx, 11);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x11ba54: 0x27bdfcf0  addiu       $sp, $sp, -0x310
    ctx->pc = 0x11ba54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966512));
    // 0x11ba58: 0xafa80238  sw          $t0, 0x238($sp)
    ctx->pc = 0x11ba58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 8));
    // 0x11ba5c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x11ba5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x11ba60: 0xffbe02f0  sd          $fp, 0x2F0($sp)
    ctx->pc = 0x11ba60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 752), GPR_U64(ctx, 30));
    // 0x11ba64: 0x244216f0  addiu       $v0, $v0, 0x16F0
    ctx->pc = 0x11ba64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5872));
    // 0x11ba68: 0xffb402b0  sd          $s4, 0x2B0($sp)
    ctx->pc = 0x11ba68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 688), GPR_U64(ctx, 20));
    // 0x11ba6c: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x11ba6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x11ba70: 0xffb20290  sd          $s2, 0x290($sp)
    ctx->pc = 0x11ba70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 656), GPR_U64(ctx, 18));
    // 0x11ba74: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11ba74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11ba78: 0xffb10280  sd          $s1, 0x280($sp)
    ctx->pc = 0x11ba78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 17));
    // 0x11ba7c: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x11ba7cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11ba80: 0xffbf0300  sd          $ra, 0x300($sp)
    ctx->pc = 0x11ba80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 768), GPR_U64(ctx, 31));
    // 0x11ba84: 0x24feffff  addiu       $fp, $a3, -0x1
    ctx->pc = 0x11ba84u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x11ba88: 0xffb702e0  sd          $s7, 0x2E0($sp)
    ctx->pc = 0x11ba88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 736), GPR_U64(ctx, 23));
    // 0x11ba8c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x11ba8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ba90: 0xffb602d0  sd          $s6, 0x2D0($sp)
    ctx->pc = 0x11ba90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 720), GPR_U64(ctx, 22));
    // 0x11ba94: 0xffb502c0  sd          $s5, 0x2C0($sp)
    ctx->pc = 0x11ba94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 704), GPR_U64(ctx, 21));
    // 0x11ba98: 0xffb302a0  sd          $s3, 0x2A0($sp)
    ctx->pc = 0x11ba98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 672), GPR_U64(ctx, 19));
    // 0x11ba9c: 0xffb00270  sd          $s0, 0x270($sp)
    ctx->pc = 0x11ba9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 16));
    // 0x11baa0: 0xafa40230  sw          $a0, 0x230($sp)
    ctx->pc = 0x11baa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 4));
    // 0x11baa4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x11baa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11baa8: 0xafa50234  sw          $a1, 0x234($sp)
    ctx->pc = 0x11baa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 5));
    // 0x11baac: 0xafa30244  sw          $v1, 0x244($sp)
    ctx->pc = 0x11baacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 3));
    // 0x11bab0: 0x3c39021  addu        $s2, $fp, $v1
    ctx->pc = 0x11bab0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x11bab4: 0xafa9023c  sw          $t1, 0x23C($sp)
    ctx->pc = 0x11bab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 572), GPR_U32(ctx, 9));
    // 0x11bab8: 0x51400001  beql        $t2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11BAB8u;
    {
        const bool branch_taken_0x11bab8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x11bab8) {
            ctx->pc = 0x11BABCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11BAB8u;
            // 0x11babc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x11BAC0u;
            goto label_11bac0;
        }
    }
    ctx->pc = 0x11BAC0u;
label_11bac0:
    // 0x11bac0: 0x5812  mflo        $t3
    ctx->pc = 0x11bac0u;
    SET_GPR_U64(ctx, 11, ctx->lo);
    // 0x11bac4: 0xafab0240  sw          $t3, 0x240($sp)
    ctx->pc = 0x11bac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 11));
    // 0x11bac8: 0x160102d  daddu       $v0, $t3, $zero
    ctx->pc = 0x11bac8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bacc: 0x18b602a  slt         $t4, $t4, $t3
    ctx->pc = 0x11baccu;
    SET_GPR_U64(ctx, 12, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x11bad0: 0xc100a  movz        $v0, $zero, $t4
    ctx->pc = 0x11bad0u;
    if (GPR_U64(ctx, 12) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0));
    // 0x11bad4: 0xafa20240  sw          $v0, 0x240($sp)
    ctx->pc = 0x11bad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 2));
    // 0x11bad8: 0x4a1018  mult        $v0, $v0, $t2
    ctx->pc = 0x11bad8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x11badc: 0x8fa30240  lw          $v1, 0x240($sp)
    ctx->pc = 0x11badcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x11bae0: 0x7e8823  subu        $s1, $v1, $fp
    ctx->pc = 0x11bae0u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x11bae4: 0x4a5021  addu        $t2, $v0, $t2
    ctx->pc = 0x11bae4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x11bae8: 0xca3023  subu        $a2, $a2, $t2
    ctx->pc = 0x11bae8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x11baec: 0x640001c  bltz        $s2, . + 4 + (0x1C << 2)
    ctx->pc = 0x11BAECu;
    {
        const bool branch_taken_0x11baec = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x11BAF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BAECu;
            // 0x11baf0: 0xafa60248  sw          $a2, 0x248($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11baec) {
            ctx->pc = 0x11BB60u;
            goto label_11bb60;
        }
    }
    ctx->pc = 0x11BAF4u;
    // 0x11baf4: 0x8fa40244  lw          $a0, 0x244($sp)
    ctx->pc = 0x11baf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x11baf8: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x11baf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x11bafc: 0x29060003  slti        $a2, $t0, 0x3
    ctx->pc = 0x11bafcu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x11bb00: 0xafa50254  sw          $a1, 0x254($sp)
    ctx->pc = 0x11bb00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 5));
    // 0x11bb04: 0x28840000  slti        $a0, $a0, 0x0
    ctx->pc = 0x11bb04u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x11bb08: 0xafa6025c  sw          $a2, 0x25C($sp)
    ctx->pc = 0x11bb08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 604), GPR_U32(ctx, 6));
    // 0x11bb0c: 0xafa40260  sw          $a0, 0x260($sp)
    ctx->pc = 0x11bb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 4));
    // 0x11bb10: 0x27b30050  addiu       $s3, $sp, 0x50
    ctx->pc = 0x11bb10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x11bb14: 0x0  nop
    ctx->pc = 0x11bb14u;
    // NOP
label_11bb18:
    // 0x11bb18: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x11bb18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x11bb1c: 0x6200008  bltz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x11BB1Cu;
    {
        const bool branch_taken_0x11bb1c = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x11BB20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BB1Cu;
            // 0x11bb20: 0x2628021  addu        $s0, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bb1c) {
            ctx->pc = 0x11BB40u;
            goto label_11bb40;
        }
    }
    ctx->pc = 0x11BB24u;
    // 0x11bb24: 0x8fa8023c  lw          $t0, 0x23C($sp)
    ctx->pc = 0x11bb24u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
    // 0x11bb28: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x11bb28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x11bb2c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x11bb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x11bb30: 0xc0a215c  jal         func_288570
    ctx->pc = 0x11BB30u;
    SET_GPR_U32(ctx, 31, 0x11BB38u);
    ctx->pc = 0x11BB34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BB30u;
            // 0x11bb34: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288570u;
    if (runtime->hasFunction(0x288570u)) {
        auto targetFn = runtime->lookupFunction(0x288570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BB38u; }
        if (ctx->pc != 0x11BB38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x288570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BB38u; }
        if (ctx->pc != 0x11BB38u) { return; }
    }
    ctx->pc = 0x11BB38u;
label_11bb38:
    // 0x11bb38: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11BB38u;
    {
        const bool branch_taken_0x11bb38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BB3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BB38u;
            // 0x11bb3c: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bb38) {
            ctx->pc = 0x11BB48u;
            goto label_11bb48;
        }
    }
    ctx->pc = 0x11BB40u;
label_11bb40:
    // 0x11bb40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11bb40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bb44: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x11bb44u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
label_11bb48:
    // 0x11bb48: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x11bb48u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x11bb4c: 0x254102a  slt         $v0, $s2, $s4
    ctx->pc = 0x11bb4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x11bb50: 0x1040fff1  beqz        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x11BB50u;
    {
        const bool branch_taken_0x11bb50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BB54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BB50u;
            // 0x11bb54: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bb50) {
            ctx->pc = 0x11BB18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11bb18;
        }
    }
    ctx->pc = 0x11BB58u;
    // 0x11bb58: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x11BB58u;
    {
        const bool branch_taken_0x11bb58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BB5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BB58u;
            // 0x11bb5c: 0x8fa60260  lw          $a2, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bb58) {
            ctx->pc = 0x11BB84u;
            goto label_11bb84;
        }
    }
    ctx->pc = 0x11BB60u;
label_11bb60:
    // 0x11bb60: 0x8fa30244  lw          $v1, 0x244($sp)
    ctx->pc = 0x11bb60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x11bb64: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x11bb64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x11bb68: 0x8fa50238  lw          $a1, 0x238($sp)
    ctx->pc = 0x11bb68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x11bb6c: 0x28630000  slti        $v1, $v1, 0x0
    ctx->pc = 0x11bb6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x11bb70: 0xafa40254  sw          $a0, 0x254($sp)
    ctx->pc = 0x11bb70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 4));
    // 0x11bb74: 0x28a50003  slti        $a1, $a1, 0x3
    ctx->pc = 0x11bb74u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x11bb78: 0xafa30260  sw          $v1, 0x260($sp)
    ctx->pc = 0x11bb78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 3));
    // 0x11bb7c: 0xafa5025c  sw          $a1, 0x25C($sp)
    ctx->pc = 0x11bb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 604), GPR_U32(ctx, 5));
    // 0x11bb80: 0x8fa60260  lw          $a2, 0x260($sp)
    ctx->pc = 0x11bb80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_11bb84:
    // 0x11bb84: 0x14c00027  bnez        $a2, . + 4 + (0x27 << 2)
    ctx->pc = 0x11BB84u;
    {
        const bool branch_taken_0x11bb84 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BB88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BB84u;
            // 0x11bb88: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bb84) {
            ctx->pc = 0x11BC24u;
            goto label_11bc24;
        }
    }
    ctx->pc = 0x11BB8Cu;
    // 0x11bb8c: 0x2bd70000  slti        $s7, $fp, 0x0
    ctx->pc = 0x11bb8cu;
    SET_GPR_U64(ctx, 23, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x11bb90: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x11bb90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bb94: 0x0  nop
    ctx->pc = 0x11bb94u;
    // NOP
label_11bb98:
    // 0x11bb98: 0x16e00018  bnez        $s7, . + 4 + (0x18 << 2)
    ctx->pc = 0x11BB98u;
    {
        const bool branch_taken_0x11bb98 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BB9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BB98u;
            // 0x11bb9c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bb98) {
            ctx->pc = 0x11BBFCu;
            goto label_11bbfc;
        }
    }
    ctx->pc = 0x11BBA0u;
    // 0x11bba0: 0x3d4a821  addu        $s5, $fp, $s4
    ctx->pc = 0x11bba0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 20)));
    // 0x11bba4: 0x1480c0  sll         $s0, $s4, 3
    ctx->pc = 0x11bba4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x11bba8: 0x27b30050  addiu       $s3, $sp, 0x50
    ctx->pc = 0x11bba8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x11bbac: 0x26920001  addiu       $s2, $s4, 0x1
    ctx->pc = 0x11bbacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_11bbb0:
    // 0x11bbb0: 0x2b11023  subu        $v0, $s5, $s1
    ctx->pc = 0x11bbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x11bbb4: 0x8fa80230  lw          $t0, 0x230($sp)
    ctx->pc = 0x11bbb4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x11bbb8: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x11bbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x11bbbc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x11bbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x11bbc0: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x11bbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x11bbc4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x11bbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x11bbc8: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x11bbc8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11bbcc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x11bbccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x11bbd0: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x11BBD0u;
    SET_GPR_U32(ctx, 31, 0x11BBD8u);
    ctx->pc = 0x11BBD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BBD0u;
            // 0x11bbd4: 0xdc450000  ld          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BBD8u; }
        if (ctx->pc != 0x11BBD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BBD8u; }
        if (ctx->pc != 0x11BBD8u) { return; }
    }
    ctx->pc = 0x11BBD8u;
label_11bbd8:
    // 0x11bbd8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x11bbd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bbdc: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x11BBDCu;
    SET_GPR_U32(ctx, 31, 0x11BBE4u);
    ctx->pc = 0x11BBE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BBDCu;
            // 0x11bbe0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BBE4u; }
        if (ctx->pc != 0x11BBE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BBE4u; }
        if (ctx->pc != 0x11BBE4u) { return; }
    }
    ctx->pc = 0x11BBE4u;
label_11bbe4:
    // 0x11bbe4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x11bbe4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bbe8: 0x3d1102a  slt         $v0, $fp, $s1
    ctx->pc = 0x11bbe8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x11bbec: 0x1040fff0  beqz        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x11BBECu;
    {
        const bool branch_taken_0x11bbec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BBF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BBECu;
            // 0x11bbf0: 0x8fa20254  lw          $v0, 0x254($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bbec) {
            ctx->pc = 0x11BBB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11bbb0;
        }
    }
    ctx->pc = 0x11BBF4u;
    // 0x11bbf4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11BBF4u;
    {
        const bool branch_taken_0x11bbf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BBF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BBF4u;
            // 0x11bbf8: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bbf4) {
            ctx->pc = 0x11BC0Cu;
            goto label_11bc0c;
        }
    }
    ctx->pc = 0x11BBFCu;
label_11bbfc:
    // 0x11bbfc: 0x26920001  addiu       $s2, $s4, 0x1
    ctx->pc = 0x11bbfcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x11bc00: 0x1480c0  sll         $s0, $s4, 3
    ctx->pc = 0x11bc00u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x11bc04: 0x8fa20254  lw          $v0, 0x254($sp)
    ctx->pc = 0x11bc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
    // 0x11bc08: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x11bc08u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11bc0c:
    // 0x11bc0c: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x11bc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x11bc10: 0xfc760000  sd          $s6, 0x0($v1)
    ctx->pc = 0x11bc10u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 22));
    // 0x11bc14: 0x8fa30244  lw          $v1, 0x244($sp)
    ctx->pc = 0x11bc14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x11bc18: 0x74102a  slt         $v0, $v1, $s4
    ctx->pc = 0x11bc18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x11bc1c: 0x1040ffde  beqz        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x11BC1Cu;
    {
        const bool branch_taken_0x11bc1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BC20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BC1Cu;
            // 0x11bc20: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bc1c) {
            ctx->pc = 0x11BB98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11bb98;
        }
    }
    ctx->pc = 0x11BC24u;
label_11bc24:
    // 0x11bc24: 0x8fb70244  lw          $s7, 0x244($sp)
    ctx->pc = 0x11bc24u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
label_11bc28:
    // 0x11bc28: 0x8fa40254  lw          $a0, 0x254($sp)
    ctx->pc = 0x11bc28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
    // 0x11bc2c: 0x1718c0  sll         $v1, $s7, 3
    ctx->pc = 0x11bc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 3));
    // 0x11bc30: 0x2e0882d  daddu       $s1, $s7, $zero
    ctx->pc = 0x11bc30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bc34: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x11bc34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11bc38: 0x1ae00021  blez        $s7, . + 4 + (0x21 << 2)
    ctx->pc = 0x11BC38u;
    {
        const bool branch_taken_0x11bc38 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x11BC3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BC38u;
            // 0x11bc3c: 0xdc520000  ld          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bc38) {
            ctx->pc = 0x11BCC0u;
            goto label_11bcc0;
        }
    }
    ctx->pc = 0x11BC40u;
    // 0x11bc40: 0x2462fff8  addiu       $v0, $v1, -0x8
    ctx->pc = 0x11bc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x11bc44: 0x3a0a02d  daddu       $s4, $sp, $zero
    ctx->pc = 0x11bc44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bc48: 0x449821  addu        $s3, $v0, $a0
    ctx->pc = 0x11bc48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x11bc4c: 0x0  nop
    ctx->pc = 0x11bc4cu;
    // NOP
label_11bc50:
    // 0x11bc50: 0x3405f9c0  ori         $a1, $zero, 0xF9C0
    ctx->pc = 0x11bc50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63936);
    // 0x11bc54: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x11bc54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x11bc58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11bc58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bc5c: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x11BC5Cu;
    SET_GPR_U32(ctx, 31, 0x11BC64u);
    ctx->pc = 0x11BC60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BC5Cu;
            // 0x11bc60: 0x2630ffff  addiu       $s0, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BC64u; }
        if (ctx->pc != 0x11BC64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BC64u; }
        if (ctx->pc != 0x11BC64u) { return; }
    }
    ctx->pc = 0x11BC64u;
label_11bc64:
    // 0x11bc64: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x11bc64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bc68: 0xc0a218a  jal         func_288628
    ctx->pc = 0x11BC68u;
    SET_GPR_U32(ctx, 31, 0x11BC70u);
    ctx->pc = 0x11BC6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BC68u;
            // 0x11bc6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288628u;
    if (runtime->hasFunction(0x288628u)) {
        auto targetFn = runtime->lookupFunction(0x288628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BC70u; }
        if (ctx->pc != 0x11BC70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptoli_0x288628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BC70u; }
        if (ctx->pc != 0x11BC70u) { return; }
    }
    ctx->pc = 0x11BC70u;
label_11bc70:
    // 0x11bc70: 0xc0a215c  jal         func_288570
    ctx->pc = 0x11BC70u;
    SET_GPR_U32(ctx, 31, 0x11BC78u);
    ctx->pc = 0x11BC74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BC70u;
            // 0x11bc74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288570u;
    if (runtime->hasFunction(0x288570u)) {
        auto targetFn = runtime->lookupFunction(0x288570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BC78u; }
        if (ctx->pc != 0x11BC78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x288570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BC78u; }
        if (ctx->pc != 0x11BC78u) { return; }
    }
    ctx->pc = 0x11BC78u;
label_11bc78:
    // 0x11bc78: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x11bc78u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bc7c: 0x340582e0  ori         $a1, $zero, 0x82E0
    ctx->pc = 0x11bc7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33504);
    // 0x11bc80: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x11bc80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x11bc84: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x11BC84u;
    SET_GPR_U32(ctx, 31, 0x11BC8Cu);
    ctx->pc = 0x11BC88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BC84u;
            // 0x11bc88: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BC8Cu; }
        if (ctx->pc != 0x11BC8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BC8Cu; }
        if (ctx->pc != 0x11BC8Cu) { return; }
    }
    ctx->pc = 0x11BC8Cu;
label_11bc8c:
    // 0x11bc8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11bc8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bc90: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x11BC90u;
    SET_GPR_U32(ctx, 31, 0x11BC98u);
    ctx->pc = 0x11BC94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BC90u;
            // 0x11bc94: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BC98u; }
        if (ctx->pc != 0x11BC98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BC98u; }
        if (ctx->pc != 0x11BC98u) { return; }
    }
    ctx->pc = 0x11BC98u;
label_11bc98:
    // 0x11bc98: 0xc0a218a  jal         func_288628
    ctx->pc = 0x11BC98u;
    SET_GPR_U32(ctx, 31, 0x11BCA0u);
    ctx->pc = 0x11BC9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BC98u;
            // 0x11bc9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288628u;
    if (runtime->hasFunction(0x288628u)) {
        auto targetFn = runtime->lookupFunction(0x288628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BCA0u; }
        if (ctx->pc != 0x11BCA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptoli_0x288628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BCA0u; }
        if (ctx->pc != 0x11BCA0u) { return; }
    }
    ctx->pc = 0x11BCA0u;
label_11bca0:
    // 0x11bca0: 0xde640000  ld          $a0, 0x0($s3)
    ctx->pc = 0x11bca0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x11bca4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x11bca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bca8: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x11bca8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x11bcac: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x11BCACu;
    SET_GPR_U32(ctx, 31, 0x11BCB4u);
    ctx->pc = 0x11BCB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BCACu;
            // 0x11bcb0: 0x2673fff8  addiu       $s3, $s3, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BCB4u; }
        if (ctx->pc != 0x11BCB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BCB4u; }
        if (ctx->pc != 0x11BCB4u) { return; }
    }
    ctx->pc = 0x11BCB4u;
label_11bcb4:
    // 0x11bcb4: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x11bcb4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x11bcb8: 0x1e20ffe5  bgtz        $s1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x11BCB8u;
    {
        const bool branch_taken_0x11bcb8 = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x11BCBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BCB8u;
            // 0x11bcbc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bcb8) {
            ctx->pc = 0x11BC50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11bc50;
        }
    }
    ctx->pc = 0x11BCC0u;
label_11bcc0:
    // 0x11bcc0: 0x8fa50248  lw          $a1, 0x248($sp)
    ctx->pc = 0x11bcc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x11bcc4: 0xc047802  jal         func_11E008
    ctx->pc = 0x11BCC4u;
    SET_GPR_U32(ctx, 31, 0x11BCCCu);
    ctx->pc = 0x11BCC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BCC4u;
            // 0x11bcc8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E008u;
    if (runtime->hasFunction(0x11E008u)) {
        auto targetFn = runtime->lookupFunction(0x11E008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BCCCu; }
        if (ctx->pc != 0x11BCCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scalbn_0x11e008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BCCCu; }
        if (ctx->pc != 0x11BCCCu) { return; }
    }
    ctx->pc = 0x11BCCCu;
label_11bccc:
    // 0x11bccc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11bcccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bcd0: 0x3405ff00  ori         $a1, $zero, 0xFF00
    ctx->pc = 0x11bcd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x11bcd4: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x11bcd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x11bcd8: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x11BCD8u;
    SET_GPR_U32(ctx, 31, 0x11BCE0u);
    ctx->pc = 0x11BCDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BCD8u;
            // 0x11bcdc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BCE0u; }
        if (ctx->pc != 0x11BCE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BCE0u; }
        if (ctx->pc != 0x11BCE0u) { return; }
    }
    ctx->pc = 0x11BCE0u;
label_11bce0:
    // 0x11bce0: 0xc0476e2  jal         func_11DB88
    ctx->pc = 0x11BCE0u;
    SET_GPR_U32(ctx, 31, 0x11BCE8u);
    ctx->pc = 0x11BCE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BCE0u;
            // 0x11bce4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DB88u;
    if (runtime->hasFunction(0x11DB88u)) {
        auto targetFn = runtime->lookupFunction(0x11DB88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BCE8u; }
        if (ctx->pc != 0x11BCE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        floor_0x11db88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BCE8u; }
        if (ctx->pc != 0x11BCE8u) { return; }
    }
    ctx->pc = 0x11BCE8u;
label_11bce8:
    // 0x11bce8: 0x34058040  ori         $a1, $zero, 0x8040
    ctx->pc = 0x11bce8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32832);
    // 0x11bcec: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x11bcecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x11bcf0: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x11BCF0u;
    SET_GPR_U32(ctx, 31, 0x11BCF8u);
    ctx->pc = 0x11BCF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BCF0u;
            // 0x11bcf4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BCF8u; }
        if (ctx->pc != 0x11BCF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BCF8u; }
        if (ctx->pc != 0x11BCF8u) { return; }
    }
    ctx->pc = 0x11BCF8u;
label_11bcf8:
    // 0x11bcf8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11bcf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bcfc: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x11BCFCu;
    SET_GPR_U32(ctx, 31, 0x11BD04u);
    ctx->pc = 0x11BD00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BCFCu;
            // 0x11bd00: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BD04u; }
        if (ctx->pc != 0x11BD04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BD04u; }
        if (ctx->pc != 0x11BD04u) { return; }
    }
    ctx->pc = 0x11BD04u;
label_11bd04:
    // 0x11bd04: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11bd04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bd08: 0xc0a218a  jal         func_288628
    ctx->pc = 0x11BD08u;
    SET_GPR_U32(ctx, 31, 0x11BD10u);
    ctx->pc = 0x11BD0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BD08u;
            // 0x11bd0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288628u;
    if (runtime->hasFunction(0x288628u)) {
        auto targetFn = runtime->lookupFunction(0x288628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BD10u; }
        if (ctx->pc != 0x11BD10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptoli_0x288628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BD10u; }
        if (ctx->pc != 0x11BD10u) { return; }
    }
    ctx->pc = 0x11BD10u;
label_11bd10:
    // 0x11bd10: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x11bd10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bd14: 0xc0a215c  jal         func_288570
    ctx->pc = 0x11BD14u;
    SET_GPR_U32(ctx, 31, 0x11BD1Cu);
    ctx->pc = 0x11BD18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BD14u;
            // 0x11bd18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288570u;
    if (runtime->hasFunction(0x288570u)) {
        auto targetFn = runtime->lookupFunction(0x288570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BD1Cu; }
        if (ctx->pc != 0x11BD1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x288570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BD1Cu; }
        if (ctx->pc != 0x11BD1Cu) { return; }
    }
    ctx->pc = 0x11BD1Cu;
label_11bd1c:
    // 0x11bd1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11bd1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bd20: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x11BD20u;
    SET_GPR_U32(ctx, 31, 0x11BD28u);
    ctx->pc = 0x11BD24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BD20u;
            // 0x11bd24: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BD28u; }
        if (ctx->pc != 0x11BD28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BD28u; }
        if (ctx->pc != 0x11BD28u) { return; }
    }
    ctx->pc = 0x11BD28u;
label_11bd28:
    // 0x11bd28: 0x8fa50248  lw          $a1, 0x248($sp)
    ctx->pc = 0x11bd28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x11bd2c: 0x18a00012  blez        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x11BD2Cu;
    {
        const bool branch_taken_0x11bd2c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x11BD30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BD2Cu;
            // 0x11bd30: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bd2c) {
            ctx->pc = 0x11BD78u;
            goto label_11bd78;
        }
    }
    ctx->pc = 0x11BD34u;
    // 0x11bd34: 0x26e2ffff  addiu       $v0, $s7, -0x1
    ctx->pc = 0x11bd34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x11bd38: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x11bd38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x11bd3c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x11bd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x11bd40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11bd40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11bd44: 0x3a22821  addu        $a1, $sp, $v0
    ctx->pc = 0x11bd44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x11bd48: 0x8fa60248  lw          $a2, 0x248($sp)
    ctx->pc = 0x11bd48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x11bd4c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x11bd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11bd50: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x11bd50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x11bd54: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x11bd54u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x11bd58: 0x62a007  srav        $s4, $v0, $v1
    ctx->pc = 0x11bd58u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x11bd5c: 0x741804  sllv        $v1, $s4, $v1
    ctx->pc = 0x11bd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), GPR_U32(ctx, 3) & 0x1F));
    // 0x11bd60: 0x2749821  addu        $s3, $s3, $s4
    ctx->pc = 0x11bd60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x11bd64: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x11bd64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11bd68: 0x822007  srav        $a0, $v0, $a0
    ctx->pc = 0x11bd68u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x11bd6c: 0xafa4024c  sw          $a0, 0x24C($sp)
    ctx->pc = 0x11bd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 4));
    // 0x11bd70: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x11BD70u;
    {
        const bool branch_taken_0x11bd70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BD74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BD70u;
            // 0x11bd74: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bd70) {
            ctx->pc = 0x11BDC4u;
            goto label_11bdc4;
        }
    }
    ctx->pc = 0x11BD78u;
label_11bd78:
    // 0x11bd78: 0x8fa80248  lw          $t0, 0x248($sp)
    ctx->pc = 0x11bd78u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x11bd7c: 0x15000008  bnez        $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11BD7Cu;
    {
        const bool branch_taken_0x11bd7c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BD80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BD7Cu;
            // 0x11bd80: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bd7c) {
            ctx->pc = 0x11BDA0u;
            goto label_11bda0;
        }
    }
    ctx->pc = 0x11BD84u;
    // 0x11bd84: 0x26e2ffff  addiu       $v0, $s7, -0x1
    ctx->pc = 0x11bd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x11bd88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11bd88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11bd8c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x11bd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x11bd90: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x11bd90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11bd94: 0x425c3  sra         $a0, $a0, 23
    ctx->pc = 0x11bd94u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 23));
    // 0x11bd98: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x11BD98u;
    {
        const bool branch_taken_0x11bd98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BD9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BD98u;
            // 0x11bd9c: 0xafa4024c  sw          $a0, 0x24C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bd98) {
            ctx->pc = 0x11BDC4u;
            goto label_11bdc4;
        }
    }
    ctx->pc = 0x11BDA0u;
label_11bda0:
    // 0x11bda0: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x11bda0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x11bda4: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x11bda4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x11bda8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11bda8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bdac: 0xc0a2148  jal         func_288520
    ctx->pc = 0x11BDACu;
    SET_GPR_U32(ctx, 31, 0x11BDB4u);
    ctx->pc = 0x11BDB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BDACu;
            // 0x11bdb0: 0xafa2024c  sw          $v0, 0x24C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288520u;
    if (runtime->hasFunction(0x288520u)) {
        auto targetFn = runtime->lookupFunction(0x288520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BDB4u; }
        if (ctx->pc != 0x11BDB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x288520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BDB4u; }
        if (ctx->pc != 0x11BDB4u) { return; }
    }
    ctx->pc = 0x11BDB4u;
label_11bdb4:
    // 0x11bdb4: 0x8fa3024c  lw          $v1, 0x24C($sp)
    ctx->pc = 0x11bdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
    // 0x11bdb8: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x11bdb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x11bdbc: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x11bdbcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x11bdc0: 0xafa3024c  sw          $v1, 0x24C($sp)
    ctx->pc = 0x11bdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 3));
label_11bdc4:
    // 0x11bdc4: 0x8fa4024c  lw          $a0, 0x24C($sp)
    ctx->pc = 0x11bdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
    // 0x11bdc8: 0x1880003b  blez        $a0, . + 4 + (0x3B << 2)
    ctx->pc = 0x11BDC8u;
    {
        const bool branch_taken_0x11bdc8 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x11BDCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BDC8u;
            // 0x11bdcc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bdc8) {
            ctx->pc = 0x11BEB8u;
            goto label_11beb8;
        }
    }
    ctx->pc = 0x11BDD0u;
    // 0x11bdd0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x11bdd0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x11bdd4: 0x1ae00011  blez        $s7, . + 4 + (0x11 << 2)
    ctx->pc = 0x11BDD4u;
    {
        const bool branch_taken_0x11bdd4 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x11BDD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BDD4u;
            // 0x11bdd8: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bdd4) {
            ctx->pc = 0x11BE1Cu;
            goto label_11be1c;
        }
    }
    ctx->pc = 0x11BDDCu;
    // 0x11bddc: 0x3c0400ff  lui         $a0, 0xFF
    ctx->pc = 0x11bddcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)255 << 16));
    // 0x11bde0: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x11bde0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x11bde4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x11bde4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x11bde8: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x11bde8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bdec: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x11bdecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_11bdf0:
    // 0x11bdf0: 0x16a00005  bnez        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x11BDF0u;
    {
        const bool branch_taken_0x11bdf0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BDF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BDF0u;
            // 0x11bdf4: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bdf0) {
            ctx->pc = 0x11BE08u;
            goto label_11be08;
        }
    }
    ctx->pc = 0x11BDF8u;
    // 0x11bdf8: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11BDF8u;
    {
        const bool branch_taken_0x11bdf8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BDFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BDF8u;
            // 0x11bdfc: 0xb11023  subu        $v0, $a1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bdf8) {
            ctx->pc = 0x11BE10u;
            goto label_11be10;
        }
    }
    ctx->pc = 0x11BE00u;
    // 0x11be00: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11BE00u;
    {
        const bool branch_taken_0x11be00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BE04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BE00u;
            // 0x11be04: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11be00) {
            ctx->pc = 0x11BE0Cu;
            goto label_11be0c;
        }
    }
    ctx->pc = 0x11BE08u;
label_11be08:
    // 0x11be08: 0x911023  subu        $v0, $a0, $s1
    ctx->pc = 0x11be08u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_11be0c:
    // 0x11be0c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x11be0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_11be10:
    // 0x11be10: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x11be10u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x11be14: 0x1680fff6  bnez        $s4, . + 4 + (-0xA << 2)
    ctx->pc = 0x11BE14u;
    {
        const bool branch_taken_0x11be14 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BE18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BE14u;
            // 0x11be18: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11be14) {
            ctx->pc = 0x11BDF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11bdf0;
        }
    }
    ctx->pc = 0x11BE1Cu;
label_11be1c:
    // 0x11be1c: 0x8fa50248  lw          $a1, 0x248($sp)
    ctx->pc = 0x11be1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x11be20: 0x18a00012  blez        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x11BE20u;
    {
        const bool branch_taken_0x11be20 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x11BE24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BE20u;
            // 0x11be24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11be20) {
            ctx->pc = 0x11BE6Cu;
            goto label_11be6c;
        }
    }
    ctx->pc = 0x11BE28u;
    // 0x11be28: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11BE28u;
    {
        const bool branch_taken_0x11be28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x11BE2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BE28u;
            // 0x11be2c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11be28) {
            ctx->pc = 0x11BE40u;
            goto label_11be40;
        }
    }
    ctx->pc = 0x11BE30u;
    // 0x11be30: 0x10a20006  beq         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11BE30u;
    {
        const bool branch_taken_0x11be30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x11BE34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BE30u;
            // 0x11be34: 0x8fa6024c  lw          $a2, 0x24C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11be30) {
            ctx->pc = 0x11BE4Cu;
            goto label_11be4c;
        }
    }
    ctx->pc = 0x11BE38u;
    // 0x11be38: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x11BE38u;
    {
        const bool branch_taken_0x11be38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11be38) {
            ctx->pc = 0x11BE74u;
            goto label_11be74;
        }
    }
    ctx->pc = 0x11BE40u;
label_11be40:
    // 0x11be40: 0x26e3ffff  addiu       $v1, $s7, -0x1
    ctx->pc = 0x11be40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x11be44: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11BE44u;
    {
        const bool branch_taken_0x11be44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BE48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BE44u;
            // 0x11be48: 0x3c04007f  lui         $a0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11be44) {
            ctx->pc = 0x11BE54u;
            goto label_11be54;
        }
    }
    ctx->pc = 0x11BE4Cu;
label_11be4c:
    // 0x11be4c: 0x26e3ffff  addiu       $v1, $s7, -0x1
    ctx->pc = 0x11be4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x11be50: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x11be50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_11be54:
    // 0x11be54: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x11be54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11be58: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x11be58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x11be5c: 0x3a32821  addu        $a1, $sp, $v1
    ctx->pc = 0x11be5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x11be60: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x11be60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11be64: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x11be64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x11be68: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x11be68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_11be6c:
    // 0x11be6c: 0x8fa6024c  lw          $a2, 0x24C($sp)
    ctx->pc = 0x11be6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
    // 0x11be70: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x11be70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_11be74:
    // 0x11be74: 0x14c20010  bne         $a2, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x11BE74u;
    {
        const bool branch_taken_0x11be74 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x11BE78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BE74u;
            // 0x11be78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11be74) {
            ctx->pc = 0x11BEB8u;
            goto label_11beb8;
        }
    }
    ctx->pc = 0x11BE7Cu;
    // 0x11be7c: 0x3410ffc0  ori         $s0, $zero, 0xFFC0
    ctx->pc = 0x11be7cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x11be80: 0x1083bc  dsll32      $s0, $s0, 14
    ctx->pc = 0x11be80u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
    // 0x11be84: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11be84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11be88: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x11BE88u;
    SET_GPR_U32(ctx, 31, 0x11BE90u);
    ctx->pc = 0x11BE8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BE88u;
            // 0x11be8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BE90u; }
        if (ctx->pc != 0x11BE90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BE90u; }
        if (ctx->pc != 0x11BE90u) { return; }
    }
    ctx->pc = 0x11BE90u;
label_11be90:
    // 0x11be90: 0x12a00008  beqz        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x11BE90u;
    {
        const bool branch_taken_0x11be90 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BE94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BE90u;
            // 0x11be94: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11be90) {
            ctx->pc = 0x11BEB4u;
            goto label_11beb4;
        }
    }
    ctx->pc = 0x11BE98u;
    // 0x11be98: 0x8fa50248  lw          $a1, 0x248($sp)
    ctx->pc = 0x11be98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x11be9c: 0xc047802  jal         func_11E008
    ctx->pc = 0x11BE9Cu;
    SET_GPR_U32(ctx, 31, 0x11BEA4u);
    ctx->pc = 0x11BEA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BE9Cu;
            // 0x11bea0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E008u;
    if (runtime->hasFunction(0x11E008u)) {
        auto targetFn = runtime->lookupFunction(0x11E008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BEA4u; }
        if (ctx->pc != 0x11BEA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scalbn_0x11e008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BEA4u; }
        if (ctx->pc != 0x11BEA4u) { return; }
    }
    ctx->pc = 0x11BEA4u;
label_11bea4:
    // 0x11bea4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11bea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bea8: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x11BEA8u;
    SET_GPR_U32(ctx, 31, 0x11BEB0u);
    ctx->pc = 0x11BEACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BEA8u;
            // 0x11beac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BEB0u; }
        if (ctx->pc != 0x11BEB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BEB0u; }
        if (ctx->pc != 0x11BEB0u) { return; }
    }
    ctx->pc = 0x11BEB0u;
label_11beb0:
    // 0x11beb0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11beb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11beb4:
    // 0x11beb4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11beb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11beb8:
    // 0x11beb8: 0xc0a2148  jal         func_288520
    ctx->pc = 0x11BEB8u;
    SET_GPR_U32(ctx, 31, 0x11BEC0u);
    ctx->pc = 0x11BEBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BEB8u;
            // 0x11bebc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288520u;
    if (runtime->hasFunction(0x288520u)) {
        auto targetFn = runtime->lookupFunction(0x288520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BEC0u; }
        if (ctx->pc != 0x11BEC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x288520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BEC0u; }
        if (ctx->pc != 0x11BEC0u) { return; }
    }
    ctx->pc = 0x11BEC0u;
label_11bec0:
    // 0x11bec0: 0x1440005e  bnez        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x11BEC0u;
    {
        const bool branch_taken_0x11bec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BEC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BEC0u;
            // 0x11bec4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bec0) {
            ctx->pc = 0x11C03Cu;
            goto label_11c03c;
        }
    }
    ctx->pc = 0x11BEC8u;
    // 0x11bec8: 0x8fa80244  lw          $t0, 0x244($sp)
    ctx->pc = 0x11bec8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x11becc: 0x26f4ffff  addiu       $s4, $s7, -0x1
    ctx->pc = 0x11beccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x11bed0: 0x288102a  slt         $v0, $s4, $t0
    ctx->pc = 0x11bed0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x11bed4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x11BED4u;
    {
        const bool branch_taken_0x11bed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BED4u;
            // 0x11bed8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bed4) {
            ctx->pc = 0x11BF08u;
            goto label_11bf08;
        }
    }
    ctx->pc = 0x11BEDCu;
    // 0x11bedc: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x11bedcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x11bee0: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x11bee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x11bee4: 0x0  nop
    ctx->pc = 0x11bee4u;
    // NOP
label_11bee8:
    // 0x11bee8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x11bee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11beec: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x11beecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x11bef0: 0x8fa50244  lw          $a1, 0x244($sp)
    ctx->pc = 0x11bef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x11bef4: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x11bef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x11bef8: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x11bef8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x11befc: 0x285102a  slt         $v0, $s4, $a1
    ctx->pc = 0x11befcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x11bf00: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x11BF00u;
    {
        const bool branch_taken_0x11bf00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11bf00) {
            ctx->pc = 0x11BEE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11bee8;
        }
    }
    ctx->pc = 0x11BF08u;
label_11bf08:
    // 0x11bf08: 0x1620004c  bnez        $s1, . + 4 + (0x4C << 2)
    ctx->pc = 0x11BF08u;
    {
        const bool branch_taken_0x11bf08 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BF0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BF08u;
            // 0x11bf0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bf08) {
            ctx->pc = 0x11C03Cu;
            goto label_11c03c;
        }
    }
    ctx->pc = 0x11BF10u;
    // 0x11bf10: 0x8fa60244  lw          $a2, 0x244($sp)
    ctx->pc = 0x11bf10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x11bf14: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x11bf14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x11bf18: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11bf18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11bf1c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x11bf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x11bf20: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x11bf20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11bf24: 0x1480000d  bnez        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x11BF24u;
    {
        const bool branch_taken_0x11bf24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BF28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BF24u;
            // 0x11bf28: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bf24) {
            ctx->pc = 0x11BF5Cu;
            goto label_11bf5c;
        }
    }
    ctx->pc = 0x11BF2Cu;
    // 0x11bf2c: 0x26f10001  addiu       $s1, $s7, 0x1
    ctx->pc = 0x11bf2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x11bf30: 0x8fa80244  lw          $t0, 0x244($sp)
    ctx->pc = 0x11bf30u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x11bf34: 0x0  nop
    ctx->pc = 0x11bf34u;
    // NOP
label_11bf38:
    // 0x11bf38: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x11bf38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x11bf3c: 0x1101023  subu        $v0, $t0, $s0
    ctx->pc = 0x11bf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
    // 0x11bf40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11bf40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11bf44: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x11bf44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x11bf48: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x11bf48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11bf4c: 0x1080fffa  beqz        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11BF4Cu;
    {
        const bool branch_taken_0x11bf4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11bf4c) {
            ctx->pc = 0x11BF38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11bf38;
        }
    }
    ctx->pc = 0x11BF54u;
    // 0x11bf54: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11BF54u;
    {
        const bool branch_taken_0x11bf54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BF58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BF54u;
            // 0x11bf58: 0x2f0b821  addu        $s7, $s7, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bf54) {
            ctx->pc = 0x11BF64u;
            goto label_11bf64;
        }
    }
    ctx->pc = 0x11BF5Cu;
label_11bf5c:
    // 0x11bf5c: 0x26f10001  addiu       $s1, $s7, 0x1
    ctx->pc = 0x11bf5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x11bf60: 0x2f0b821  addu        $s7, $s7, $s0
    ctx->pc = 0x11bf60u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
label_11bf64:
    // 0x11bf64: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x11bf64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bf68: 0x2f4102a  slt         $v0, $s7, $s4
    ctx->pc = 0x11bf68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x11bf6c: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x11BF6Cu;
    {
        const bool branch_taken_0x11bf6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BF70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BF6Cu;
            // 0x11bf70: 0xafb70250  sw          $s7, 0x250($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bf6c) {
            ctx->pc = 0x11C034u;
            goto label_11c034;
        }
    }
    ctx->pc = 0x11BF74u;
    // 0x11bf74: 0x27b30050  addiu       $s3, $sp, 0x50
    ctx->pc = 0x11bf74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x11bf78: 0x2bd70000  slti        $s7, $fp, 0x0
    ctx->pc = 0x11bf78u;
    SET_GPR_U64(ctx, 23, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x11bf7c: 0x8fa30240  lw          $v1, 0x240($sp)
    ctx->pc = 0x11bf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
label_11bf80:
    // 0x11bf80: 0x3d4a821  addu        $s5, $fp, $s4
    ctx->pc = 0x11bf80u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 20)));
    // 0x11bf84: 0x8fa4023c  lw          $a0, 0x23C($sp)
    ctx->pc = 0x11bf84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
    // 0x11bf88: 0x1580c0  sll         $s0, $s5, 3
    ctx->pc = 0x11bf88u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x11bf8c: 0x741021  addu        $v0, $v1, $s4
    ctx->pc = 0x11bf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x11bf90: 0x2708021  addu        $s0, $s3, $s0
    ctx->pc = 0x11bf90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x11bf94: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11bf94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11bf98: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x11bf98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bf9c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x11bf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x11bfa0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x11bfa0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bfa4: 0xc0a215c  jal         func_288570
    ctx->pc = 0x11BFA4u;
    SET_GPR_U32(ctx, 31, 0x11BFACu);
    ctx->pc = 0x11BFA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BFA4u;
            // 0x11bfa8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288570u;
    if (runtime->hasFunction(0x288570u)) {
        auto targetFn = runtime->lookupFunction(0x288570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BFACu; }
        if (ctx->pc != 0x11BFACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x288570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BFACu; }
        if (ctx->pc != 0x11BFACu) { return; }
    }
    ctx->pc = 0x11BFACu;
label_11bfac:
    // 0x11bfac: 0x16e00017  bnez        $s7, . + 4 + (0x17 << 2)
    ctx->pc = 0x11BFACu;
    {
        const bool branch_taken_0x11bfac = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BFB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BFACu;
            // 0x11bfb0: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bfac) {
            ctx->pc = 0x11C00Cu;
            goto label_11c00c;
        }
    }
    ctx->pc = 0x11BFB4u;
    // 0x11bfb4: 0x26920001  addiu       $s2, $s4, 0x1
    ctx->pc = 0x11bfb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x11bfb8: 0x1480c0  sll         $s0, $s4, 3
    ctx->pc = 0x11bfb8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x11bfbc: 0x0  nop
    ctx->pc = 0x11bfbcu;
    // NOP
label_11bfc0:
    // 0x11bfc0: 0x8fa50230  lw          $a1, 0x230($sp)
    ctx->pc = 0x11bfc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x11bfc4: 0x2b11023  subu        $v0, $s5, $s1
    ctx->pc = 0x11bfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x11bfc8: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x11bfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x11bfcc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x11bfccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x11bfd0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x11bfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x11bfd4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x11bfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x11bfd8: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x11bfd8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11bfdc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x11bfdcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x11bfe0: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x11BFE0u;
    SET_GPR_U32(ctx, 31, 0x11BFE8u);
    ctx->pc = 0x11BFE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BFE0u;
            // 0x11bfe4: 0xdc450000  ld          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BFE8u; }
        if (ctx->pc != 0x11BFE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BFE8u; }
        if (ctx->pc != 0x11BFE8u) { return; }
    }
    ctx->pc = 0x11BFE8u;
label_11bfe8:
    // 0x11bfe8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x11bfe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bfec: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x11BFECu;
    SET_GPR_U32(ctx, 31, 0x11BFF4u);
    ctx->pc = 0x11BFF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BFECu;
            // 0x11bff0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BFF4u; }
        if (ctx->pc != 0x11BFF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BFF4u; }
        if (ctx->pc != 0x11BFF4u) { return; }
    }
    ctx->pc = 0x11BFF4u;
label_11bff4:
    // 0x11bff4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x11bff4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bff8: 0x3d1102a  slt         $v0, $fp, $s1
    ctx->pc = 0x11bff8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x11bffc: 0x1040fff0  beqz        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x11BFFCu;
    {
        const bool branch_taken_0x11bffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BFFCu;
            // 0x11c000: 0x8fa60254  lw          $a2, 0x254($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bffc) {
            ctx->pc = 0x11BFC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11bfc0;
        }
    }
    ctx->pc = 0x11C004u;
    // 0x11c004: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11C004u;
    {
        const bool branch_taken_0x11c004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C004u;
            // 0x11c008: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c004) {
            ctx->pc = 0x11C01Cu;
            goto label_11c01c;
        }
    }
    ctx->pc = 0x11C00Cu;
label_11c00c:
    // 0x11c00c: 0x26920001  addiu       $s2, $s4, 0x1
    ctx->pc = 0x11c00cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x11c010: 0x1480c0  sll         $s0, $s4, 3
    ctx->pc = 0x11c010u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x11c014: 0x8fa60254  lw          $a2, 0x254($sp)
    ctx->pc = 0x11c014u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
    // 0x11c018: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x11c018u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11c01c:
    // 0x11c01c: 0xd01821  addu        $v1, $a2, $s0
    ctx->pc = 0x11c01cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x11c020: 0xfc760000  sd          $s6, 0x0($v1)
    ctx->pc = 0x11c020u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 22));
    // 0x11c024: 0x8fa80250  lw          $t0, 0x250($sp)
    ctx->pc = 0x11c024u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x11c028: 0x114102a  slt         $v0, $t0, $s4
    ctx->pc = 0x11c028u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x11c02c: 0x1040ffd4  beqz        $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x11C02Cu;
    {
        const bool branch_taken_0x11c02c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C02Cu;
            // 0x11c030: 0x8fa30240  lw          $v1, 0x240($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c02c) {
            ctx->pc = 0x11BF80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11bf80;
        }
    }
    ctx->pc = 0x11C034u;
label_11c034:
    // 0x11c034: 0x1000fefc  b           . + 4 + (-0x104 << 2)
    ctx->pc = 0x11C034u;
    {
        const bool branch_taken_0x11c034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C034u;
            // 0x11c038: 0x8fb70250  lw          $s7, 0x250($sp) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c034) {
            ctx->pc = 0x11BC28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11bc28;
        }
    }
    ctx->pc = 0x11C03Cu;
label_11c03c:
    // 0x11c03c: 0xc0a2148  jal         func_288520
    ctx->pc = 0x11C03Cu;
    SET_GPR_U32(ctx, 31, 0x11C044u);
    ctx->pc = 0x11C040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C03Cu;
            // 0x11c040: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288520u;
    if (runtime->hasFunction(0x288520u)) {
        auto targetFn = runtime->lookupFunction(0x288520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C044u; }
        if (ctx->pc != 0x11C044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x288520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C044u; }
        if (ctx->pc != 0x11C044u) { return; }
    }
    ctx->pc = 0x11C044u;
label_11c044:
    // 0x11c044: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x11C044u;
    {
        const bool branch_taken_0x11c044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C044u;
            // 0x11c048: 0x8fa60248  lw          $a2, 0x248($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c044) {
            ctx->pc = 0x11C0A0u;
            goto label_11c0a0;
        }
    }
    ctx->pc = 0x11C04Cu;
    // 0x11c04c: 0x8fa20248  lw          $v0, 0x248($sp)
    ctx->pc = 0x11c04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x11c050: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x11c050u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x11c054: 0x2442ffe8  addiu       $v0, $v0, -0x18
    ctx->pc = 0x11c054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
    // 0x11c058: 0xafa20248  sw          $v0, 0x248($sp)
    ctx->pc = 0x11c058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 2));
    // 0x11c05c: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x11c05cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x11c060: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x11c060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x11c064: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x11c064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11c068: 0x1480003e  bnez        $a0, . + 4 + (0x3E << 2)
    ctx->pc = 0x11C068u;
    {
        const bool branch_taken_0x11c068 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C06Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C068u;
            // 0x11c06c: 0x32730007  andi        $s3, $s3, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c068) {
            ctx->pc = 0x11C164u;
            goto label_11c164;
        }
    }
    ctx->pc = 0x11C070u;
    // 0x11c070: 0xafb30258  sw          $s3, 0x258($sp)
    ctx->pc = 0x11c070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 19));
    // 0x11c074: 0x8fa30248  lw          $v1, 0x248($sp)
    ctx->pc = 0x11c074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
label_11c078:
    // 0x11c078: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x11c078u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x11c07c: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x11c07cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x11c080: 0x2463ffe8  addiu       $v1, $v1, -0x18
    ctx->pc = 0x11c080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967272));
    // 0x11c084: 0xafa30248  sw          $v1, 0x248($sp)
    ctx->pc = 0x11c084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 3));
    // 0x11c088: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x11c088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x11c08c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x11c08cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11c090: 0x1080fff9  beqz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x11C090u;
    {
        const bool branch_taken_0x11c090 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C090u;
            // 0x11c094: 0x8fa30248  lw          $v1, 0x248($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c090) {
            ctx->pc = 0x11C078u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11c078;
        }
    }
    ctx->pc = 0x11C098u;
    // 0x11c098: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x11C098u;
    {
        const bool branch_taken_0x11c098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c098) {
            ctx->pc = 0x11C168u;
            goto label_11c168;
        }
    }
    ctx->pc = 0x11C0A0u;
label_11c0a0:
    // 0x11c0a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11c0a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c0a4: 0x341082e0  ori         $s0, $zero, 0x82E0
    ctx->pc = 0x11c0a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33504);
    // 0x11c0a8: 0x1083fc  dsll32      $s0, $s0, 15
    ctx->pc = 0x11c0a8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 15));
    // 0x11c0ac: 0xc047802  jal         func_11E008
    ctx->pc = 0x11C0ACu;
    SET_GPR_U32(ctx, 31, 0x11C0B4u);
    ctx->pc = 0x11C0B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C0ACu;
            // 0x11c0b0: 0x62823  negu        $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E008u;
    if (runtime->hasFunction(0x11E008u)) {
        auto targetFn = runtime->lookupFunction(0x11E008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C0B4u; }
        if (ctx->pc != 0x11C0B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scalbn_0x11e008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C0B4u; }
        if (ctx->pc != 0x11C0B4u) { return; }
    }
    ctx->pc = 0x11C0B4u;
label_11c0b4:
    // 0x11c0b4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11c0b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c0b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11c0b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c0bc: 0xc0a2148  jal         func_288520
    ctx->pc = 0x11C0BCu;
    SET_GPR_U32(ctx, 31, 0x11C0C4u);
    ctx->pc = 0x11C0C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C0BCu;
            // 0x11c0c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288520u;
    if (runtime->hasFunction(0x288520u)) {
        auto targetFn = runtime->lookupFunction(0x288520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C0C4u; }
        if (ctx->pc != 0x11C0C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x288520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C0C4u; }
        if (ctx->pc != 0x11C0C4u) { return; }
    }
    ctx->pc = 0x11C0C4u;
label_11c0c4:
    // 0x11c0c4: 0x440001e  bltz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x11C0C4u;
    {
        const bool branch_taken_0x11c0c4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x11C0C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C0C4u;
            // 0x11c0c8: 0x8fa80248  lw          $t0, 0x248($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c0c4) {
            ctx->pc = 0x11C140u;
            goto label_11c140;
        }
    }
    ctx->pc = 0x11C0CCu;
    // 0x11c0cc: 0x32730007  andi        $s3, $s3, 0x7
    ctx->pc = 0x11c0ccu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
    // 0x11c0d0: 0x3405f9c0  ori         $a1, $zero, 0xF9C0
    ctx->pc = 0x11c0d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63936);
    // 0x11c0d4: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x11c0d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x11c0d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11c0d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c0dc: 0x25080018  addiu       $t0, $t0, 0x18
    ctx->pc = 0x11c0dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 24));
    // 0x11c0e0: 0xafb30258  sw          $s3, 0x258($sp)
    ctx->pc = 0x11c0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 19));
    // 0x11c0e4: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x11C0E4u;
    SET_GPR_U32(ctx, 31, 0x11C0ECu);
    ctx->pc = 0x11C0E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C0E4u;
            // 0x11c0e8: 0xafa80248  sw          $t0, 0x248($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C0ECu; }
        if (ctx->pc != 0x11C0ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C0ECu; }
        if (ctx->pc != 0x11C0ECu) { return; }
    }
    ctx->pc = 0x11C0ECu;
label_11c0ec:
    // 0x11c0ec: 0xc0a218a  jal         func_288628
    ctx->pc = 0x11C0ECu;
    SET_GPR_U32(ctx, 31, 0x11C0F4u);
    ctx->pc = 0x11C0F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C0ECu;
            // 0x11c0f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288628u;
    if (runtime->hasFunction(0x288628u)) {
        auto targetFn = runtime->lookupFunction(0x288628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C0F4u; }
        if (ctx->pc != 0x11C0F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptoli_0x288628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C0F4u; }
        if (ctx->pc != 0x11C0F4u) { return; }
    }
    ctx->pc = 0x11C0F4u;
label_11c0f4:
    // 0x11c0f4: 0xc0a215c  jal         func_288570
    ctx->pc = 0x11C0F4u;
    SET_GPR_U32(ctx, 31, 0x11C0FCu);
    ctx->pc = 0x11C0F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C0F4u;
            // 0x11c0f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288570u;
    if (runtime->hasFunction(0x288570u)) {
        auto targetFn = runtime->lookupFunction(0x288570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C0FCu; }
        if (ctx->pc != 0x11C0FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x288570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C0FCu; }
        if (ctx->pc != 0x11C0FCu) { return; }
    }
    ctx->pc = 0x11C0FCu;
label_11c0fc:
    // 0x11c0fc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x11c0fcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c100: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11c100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c104: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x11c104u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x11c108: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x11c108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c10c: 0x3a28821  addu        $s1, $sp, $v0
    ctx->pc = 0x11c10cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x11c110: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x11C110u;
    SET_GPR_U32(ctx, 31, 0x11C118u);
    ctx->pc = 0x11C114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C110u;
            // 0x11c114: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C118u; }
        if (ctx->pc != 0x11C118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C118u; }
        if (ctx->pc != 0x11C118u) { return; }
    }
    ctx->pc = 0x11C118u;
label_11c118:
    // 0x11c118: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11c118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c11c: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x11C11Cu;
    SET_GPR_U32(ctx, 31, 0x11C124u);
    ctx->pc = 0x11C120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C11Cu;
            // 0x11c120: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C124u; }
        if (ctx->pc != 0x11C124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C124u; }
        if (ctx->pc != 0x11C124u) { return; }
    }
    ctx->pc = 0x11C124u;
label_11c124:
    // 0x11c124: 0xc0a218a  jal         func_288628
    ctx->pc = 0x11C124u;
    SET_GPR_U32(ctx, 31, 0x11C12Cu);
    ctx->pc = 0x11C128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C124u;
            // 0x11c128: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288628u;
    if (runtime->hasFunction(0x288628u)) {
        auto targetFn = runtime->lookupFunction(0x288628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C12Cu; }
        if (ctx->pc != 0x11C12Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptoli_0x288628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C12Cu; }
        if (ctx->pc != 0x11C12Cu) { return; }
    }
    ctx->pc = 0x11C12Cu;
label_11c12c:
    // 0x11c12c: 0x171880  sll         $v1, $s7, 2
    ctx->pc = 0x11c12cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x11c130: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x11c130u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x11c134: 0x3a38021  addu        $s0, $sp, $v1
    ctx->pc = 0x11c134u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x11c138: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x11C138u;
    {
        const bool branch_taken_0x11c138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C13Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C138u;
            // 0x11c13c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c138) {
            ctx->pc = 0x11C154u;
            goto label_11c154;
        }
    }
    ctx->pc = 0x11C140u;
label_11c140:
    // 0x11c140: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x11c140u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x11c144: 0x32730007  andi        $s3, $s3, 0x7
    ctx->pc = 0x11c144u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
    // 0x11c148: 0x3a28021  addu        $s0, $sp, $v0
    ctx->pc = 0x11c148u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x11c14c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11c14cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c150: 0xafb30258  sw          $s3, 0x258($sp)
    ctx->pc = 0x11c150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 19));
label_11c154:
    // 0x11c154: 0xc0a218a  jal         func_288628
    ctx->pc = 0x11C154u;
    SET_GPR_U32(ctx, 31, 0x11C15Cu);
    ctx->pc = 0x288628u;
    if (runtime->hasFunction(0x288628u)) {
        auto targetFn = runtime->lookupFunction(0x288628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C15Cu; }
        if (ctx->pc != 0x11C15Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptoli_0x288628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C15Cu; }
        if (ctx->pc != 0x11C15Cu) { return; }
    }
    ctx->pc = 0x11C15Cu;
label_11c15c:
    // 0x11c15c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11C15Cu;
    {
        const bool branch_taken_0x11c15c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C15Cu;
            // 0x11c160: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c15c) {
            ctx->pc = 0x11C168u;
            goto label_11c168;
        }
    }
    ctx->pc = 0x11C164u;
label_11c164:
    // 0x11c164: 0xafb30258  sw          $s3, 0x258($sp)
    ctx->pc = 0x11c164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 19));
label_11c168:
    // 0x11c168: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x11c168u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x11c16c: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x11c16cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x11c170: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x11c170u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c174: 0xc047802  jal         func_11E008
    ctx->pc = 0x11C174u;
    SET_GPR_U32(ctx, 31, 0x11C17Cu);
    ctx->pc = 0x11C178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C174u;
            // 0x11c178: 0x8fa50248  lw          $a1, 0x248($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E008u;
    if (runtime->hasFunction(0x11E008u)) {
        auto targetFn = runtime->lookupFunction(0x11E008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C17Cu; }
        if (ctx->pc != 0x11C17Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scalbn_0x11e008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C17Cu; }
        if (ctx->pc != 0x11C17Cu) { return; }
    }
    ctx->pc = 0x11C17Cu;
label_11c17c:
    // 0x11c17c: 0x6800015  bltz        $s4, . + 4 + (0x15 << 2)
    ctx->pc = 0x11C17Cu;
    {
        const bool branch_taken_0x11c17c = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x11C180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C17Cu;
            // 0x11c180: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c17c) {
            ctx->pc = 0x11C1D4u;
            goto label_11c1d4;
        }
    }
    ctx->pc = 0x11C184u;
    // 0x11c184: 0x8fa40254  lw          $a0, 0x254($sp)
    ctx->pc = 0x11c184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
    // 0x11c188: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x11c188u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x11c18c: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x11c18cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x11c190: 0x448821  addu        $s1, $v0, $a0
    ctx->pc = 0x11c190u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x11c194: 0x7d8021  addu        $s0, $v1, $sp
    ctx->pc = 0x11c194u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_11c198:
    // 0x11c198: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x11c198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11c19c: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x11c19cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x11c1a0: 0xc0a215c  jal         func_288570
    ctx->pc = 0x11C1A0u;
    SET_GPR_U32(ctx, 31, 0x11C1A8u);
    ctx->pc = 0x11C1A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C1A0u;
            // 0x11c1a4: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288570u;
    if (runtime->hasFunction(0x288570u)) {
        auto targetFn = runtime->lookupFunction(0x288570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C1A8u; }
        if (ctx->pc != 0x11C1A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x288570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C1A8u; }
        if (ctx->pc != 0x11C1A8u) { return; }
    }
    ctx->pc = 0x11C1A8u;
label_11c1a8:
    // 0x11c1a8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x11c1a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c1ac: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x11C1ACu;
    SET_GPR_U32(ctx, 31, 0x11C1B4u);
    ctx->pc = 0x11C1B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C1ACu;
            // 0x11c1b0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C1B4u; }
        if (ctx->pc != 0x11C1B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C1B4u; }
        if (ctx->pc != 0x11C1B4u) { return; }
    }
    ctx->pc = 0x11C1B4u;
label_11c1b4:
    // 0x11c1b4: 0x3405f9c0  ori         $a1, $zero, 0xF9C0
    ctx->pc = 0x11c1b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63936);
    // 0x11c1b8: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x11c1b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x11c1bc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x11c1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c1c0: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x11C1C0u;
    SET_GPR_U32(ctx, 31, 0x11C1C8u);
    ctx->pc = 0x11C1C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C1C0u;
            // 0x11c1c4: 0xfe220000  sd          $v0, 0x0($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C1C8u; }
        if (ctx->pc != 0x11C1C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C1C8u; }
        if (ctx->pc != 0x11C1C8u) { return; }
    }
    ctx->pc = 0x11C1C8u;
label_11c1c8:
    // 0x11c1c8: 0x2631fff8  addiu       $s1, $s1, -0x8
    ctx->pc = 0x11c1c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
    // 0x11c1cc: 0x681fff2  bgez        $s4, . + 4 + (-0xE << 2)
    ctx->pc = 0x11C1CCu;
    {
        const bool branch_taken_0x11c1cc = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x11C1D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C1CCu;
            // 0x11c1d0: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c1cc) {
            ctx->pc = 0x11C198u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11c198;
        }
    }
    ctx->pc = 0x11C1D4u;
label_11c1d4:
    // 0x11c1d4: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x11c1d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c1d8: 0x682002c  bltzl       $s4, . + 4 + (0x2C << 2)
    ctx->pc = 0x11C1D8u;
    {
        const bool branch_taken_0x11c1d8 = (GPR_S32(ctx, 20) < 0);
        if (branch_taken_0x11c1d8) {
            ctx->pc = 0x11C1DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11C1D8u;
            // 0x11c1dc: 0x8fa2025c  lw          $v0, 0x25C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11C28Cu;
            goto label_11c28c;
        }
    }
    ctx->pc = 0x11C1E0u;
    // 0x11c1e0: 0x27b500f0  addiu       $s5, $sp, 0xF0
    ctx->pc = 0x11c1e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x11c1e4: 0x0  nop
    ctx->pc = 0x11c1e4u;
    // NOP
label_11c1e8:
    // 0x11c1e8: 0x8fa50260  lw          $a1, 0x260($sp)
    ctx->pc = 0x11c1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x11c1ec: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x11c1ecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c1f0: 0x14a0001e  bnez        $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x11C1F0u;
    {
        const bool branch_taken_0x11c1f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C1F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C1F0u;
            // 0x11c1f4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c1f0) {
            ctx->pc = 0x11C26Cu;
            goto label_11c26c;
        }
    }
    ctx->pc = 0x11C1F8u;
    // 0x11c1f8: 0x2f49023  subu        $s2, $s7, $s4
    ctx->pc = 0x11c1f8u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
    // 0x11c1fc: 0x640001c  bltz        $s2, . + 4 + (0x1C << 2)
    ctx->pc = 0x11C1FCu;
    {
        const bool branch_taken_0x11c1fc = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x11C200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C1FCu;
            // 0x11c200: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c1fc) {
            ctx->pc = 0x11C270u;
            goto label_11c270;
        }
    }
    ctx->pc = 0x11C204u;
    // 0x11c204: 0x2691ffff  addiu       $s1, $s4, -0x1
    ctx->pc = 0x11c204u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x11c208: 0x3c1e0036  lui         $fp, 0x36
    ctx->pc = 0x11c208u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)54 << 16));
    // 0x11c20c: 0x0  nop
    ctx->pc = 0x11c20cu;
    // NOP
label_11c210:
    // 0x11c210: 0x2901821  addu        $v1, $s4, $s0
    ctx->pc = 0x11c210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x11c214: 0x1028c0  sll         $a1, $s0, 3
    ctx->pc = 0x11c214u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x11c218: 0x27c21700  addiu       $v0, $fp, 0x1700
    ctx->pc = 0x11c218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 5888));
    // 0x11c21c: 0x8fa60254  lw          $a2, 0x254($sp)
    ctx->pc = 0x11c21cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
    // 0x11c220: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x11c220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x11c224: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x11c224u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x11c228: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x11c228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x11c22c: 0xdca40000  ld          $a0, 0x0($a1)
    ctx->pc = 0x11c22cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11c230: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x11c230u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11c234: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x11C234u;
    SET_GPR_U32(ctx, 31, 0x11C23Cu);
    ctx->pc = 0x11C238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C234u;
            // 0x11c238: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C23Cu; }
        if (ctx->pc != 0x11C23Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C23Cu; }
        if (ctx->pc != 0x11C23Cu) { return; }
    }
    ctx->pc = 0x11C23Cu;
label_11c23c:
    // 0x11c23c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x11c23cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c240: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x11C240u;
    SET_GPR_U32(ctx, 31, 0x11C248u);
    ctx->pc = 0x11C244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C240u;
            // 0x11c244: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C248u; }
        if (ctx->pc != 0x11C248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C248u; }
        if (ctx->pc != 0x11C248u) { return; }
    }
    ctx->pc = 0x11C248u;
label_11c248:
    // 0x11c248: 0x8fa80244  lw          $t0, 0x244($sp)
    ctx->pc = 0x11c248u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x11c24c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x11c24cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c250: 0x110102a  slt         $v0, $t0, $s0
    ctx->pc = 0x11c250u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11c254: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11C254u;
    {
        const bool branch_taken_0x11c254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C254u;
            // 0x11c258: 0x270102a  slt         $v0, $s3, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c254) {
            ctx->pc = 0x11C274u;
            goto label_11c274;
        }
    }
    ctx->pc = 0x11C25Cu;
    // 0x11c25c: 0x1040ffec  beqz        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x11C25Cu;
    {
        const bool branch_taken_0x11c25c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C25Cu;
            // 0x11c260: 0x1210c0  sll         $v0, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c25c) {
            ctx->pc = 0x11C210u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11c210;
        }
    }
    ctx->pc = 0x11C264u;
    // 0x11c264: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11C264u;
    {
        const bool branch_taken_0x11c264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C264u;
            // 0x11c268: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c264) {
            ctx->pc = 0x11C27Cu;
            goto label_11c27c;
        }
    }
    ctx->pc = 0x11C26Cu;
label_11c26c:
    // 0x11c26c: 0x2f49023  subu        $s2, $s7, $s4
    ctx->pc = 0x11c26cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
label_11c270:
    // 0x11c270: 0x2691ffff  addiu       $s1, $s4, -0x1
    ctx->pc = 0x11c270u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_11c274:
    // 0x11c274: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x11c274u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x11c278: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x11c278u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11c27c:
    // 0x11c27c: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x11c27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x11c280: 0x681ffd9  bgez        $s4, . + 4 + (-0x27 << 2)
    ctx->pc = 0x11C280u;
    {
        const bool branch_taken_0x11c280 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x11C284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C280u;
            // 0x11c284: 0xfc560000  sd          $s6, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c280) {
            ctx->pc = 0x11C1E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11c1e8;
        }
    }
    ctx->pc = 0x11C288u;
    // 0x11c288: 0x8fa2025c  lw          $v0, 0x25C($sp)
    ctx->pc = 0x11c288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
label_11c28c:
    // 0x11c28c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11C28Cu;
    {
        const bool branch_taken_0x11c28c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C28Cu;
            // 0x11c290: 0x8fa30238  lw          $v1, 0x238($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c28c) {
            ctx->pc = 0x11C2ACu;
            goto label_11c2ac;
        }
    }
    ctx->pc = 0x11C294u;
    // 0x11c294: 0x1c600021  bgtz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x11C294u;
    {
        const bool branch_taken_0x11c294 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x11C298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C294u;
            // 0x11c298: 0x2e0a02d  daddu       $s4, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c294) {
            ctx->pc = 0x11C31Cu;
            goto label_11c31c;
        }
    }
    ctx->pc = 0x11C29Cu;
    // 0x11c29c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x11C29Cu;
    {
        const bool branch_taken_0x11c29c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C2A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C29Cu;
            // 0x11c2a0: 0x8fa20258  lw          $v0, 0x258($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c29c) {
            ctx->pc = 0x11C2C4u;
            goto label_11c2c4;
        }
    }
    ctx->pc = 0x11C2A4u;
    // 0x11c2a4: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x11C2A4u;
    {
        const bool branch_taken_0x11c2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C2A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C2A4u;
            // 0x11c2a8: 0xdfbf0300  ld          $ra, 0x300($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 768)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c2a4) {
            ctx->pc = 0x11C584u;
            goto label_11c584;
        }
    }
    ctx->pc = 0x11C2ACu;
label_11c2ac:
    // 0x11c2ac: 0x8fa40238  lw          $a0, 0x238($sp)
    ctx->pc = 0x11c2acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x11c2b0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x11c2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11c2b4: 0x10820050  beq         $a0, $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x11C2B4u;
    {
        const bool branch_taken_0x11c2b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x11C2B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C2B4u;
            // 0x11c2b8: 0x8fa20258  lw          $v0, 0x258($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c2b4) {
            ctx->pc = 0x11C3F8u;
            goto label_11c3f8;
        }
    }
    ctx->pc = 0x11C2BCu;
    // 0x11c2bc: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x11C2BCu;
    {
        const bool branch_taken_0x11c2bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C2C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C2BCu;
            // 0x11c2c0: 0xdfbf0300  ld          $ra, 0x300($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 768)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c2bc) {
            ctx->pc = 0x11C584u;
            goto label_11c584;
        }
    }
    ctx->pc = 0x11C2C4u;
label_11c2c4:
    // 0x11c2c4: 0x680000a  bltz        $s4, . + 4 + (0xA << 2)
    ctx->pc = 0x11C2C4u;
    {
        const bool branch_taken_0x11c2c4 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x11C2C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C2C4u;
            // 0x11c2c8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c2c4) {
            ctx->pc = 0x11C2F0u;
            goto label_11c2f0;
        }
    }
    ctx->pc = 0x11C2CCu;
    // 0x11c2cc: 0x27b500f0  addiu       $s5, $sp, 0xF0
    ctx->pc = 0x11c2ccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_11c2d0:
    // 0x11c2d0: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x11c2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x11c2d4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x11c2d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c2d8: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x11c2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x11c2dc: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x11c2dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x11c2e0: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x11C2E0u;
    SET_GPR_U32(ctx, 31, 0x11C2E8u);
    ctx->pc = 0x11C2E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C2E0u;
            // 0x11c2e4: 0xdc450000  ld          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C2E8u; }
        if (ctx->pc != 0x11C2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C2E8u; }
        if (ctx->pc != 0x11C2E8u) { return; }
    }
    ctx->pc = 0x11C2E8u;
label_11c2e8:
    // 0x11c2e8: 0x681fff9  bgez        $s4, . + 4 + (-0x7 << 2)
    ctx->pc = 0x11C2E8u;
    {
        const bool branch_taken_0x11c2e8 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x11C2ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C2E8u;
            // 0x11c2ec: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c2e8) {
            ctx->pc = 0x11C2D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11c2d0;
        }
    }
    ctx->pc = 0x11C2F0u;
label_11c2f0:
    // 0x11c2f0: 0x8fa50234  lw          $a1, 0x234($sp)
    ctx->pc = 0x11c2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x11c2f4: 0xfcb60000  sd          $s6, 0x0($a1)
    ctx->pc = 0x11c2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 22));
    // 0x11c2f8: 0x8fa6024c  lw          $a2, 0x24C($sp)
    ctx->pc = 0x11c2f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
    // 0x11c2fc: 0x10c000a0  beqz        $a2, . + 4 + (0xA0 << 2)
    ctx->pc = 0x11C2FCu;
    {
        const bool branch_taken_0x11c2fc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C2FCu;
            // 0x11c300: 0x8fa20258  lw          $v0, 0x258($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c2fc) {
            ctx->pc = 0x11C580u;
            goto label_11c580;
        }
    }
    ctx->pc = 0x11C304u;
    // 0x11c304: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x11c304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c308: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x11C308u;
    SET_GPR_U32(ctx, 31, 0x11C310u);
    ctx->pc = 0x11C30Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C308u;
            // 0x11c30c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C310u; }
        if (ctx->pc != 0x11C310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C310u; }
        if (ctx->pc != 0x11C310u) { return; }
    }
    ctx->pc = 0x11C310u;
label_11c310:
    // 0x11c310: 0x8fa80234  lw          $t0, 0x234($sp)
    ctx->pc = 0x11c310u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x11c314: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x11C314u;
    {
        const bool branch_taken_0x11c314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C314u;
            // 0x11c318: 0xfd020000  sd          $v0, 0x0($t0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c314) {
            ctx->pc = 0x11C57Cu;
            goto label_11c57c;
        }
    }
    ctx->pc = 0x11C31Cu;
label_11c31c:
    // 0x11c31c: 0x680000e  bltz        $s4, . + 4 + (0xE << 2)
    ctx->pc = 0x11C31Cu;
    {
        const bool branch_taken_0x11c31c = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x11C320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C31Cu;
            // 0x11c320: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c31c) {
            ctx->pc = 0x11C358u;
            goto label_11c358;
        }
    }
    ctx->pc = 0x11C324u;
    // 0x11c324: 0xdfb100f0  ld          $s1, 0xF0($sp)
    ctx->pc = 0x11c324u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x11c328: 0x27b500f0  addiu       $s5, $sp, 0xF0
    ctx->pc = 0x11c328u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x11c32c: 0x2a900001  slti        $s0, $s4, 0x1
    ctx->pc = 0x11c32cu;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)1) ? 1 : 0);
label_11c330:
    // 0x11c330: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x11c330u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x11c334: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x11c334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c338: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x11c338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x11c33c: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x11c33cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x11c340: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x11C340u;
    SET_GPR_U32(ctx, 31, 0x11C348u);
    ctx->pc = 0x11C344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C340u;
            // 0x11c344: 0xdc450000  ld          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C348u; }
        if (ctx->pc != 0x11C348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C348u; }
        if (ctx->pc != 0x11C348u) { return; }
    }
    ctx->pc = 0x11C348u;
label_11c348:
    // 0x11c348: 0x681fff9  bgez        $s4, . + 4 + (-0x7 << 2)
    ctx->pc = 0x11C348u;
    {
        const bool branch_taken_0x11c348 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x11C34Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C348u;
            // 0x11c34c: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c348) {
            ctx->pc = 0x11C330u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11c330;
        }
    }
    ctx->pc = 0x11C350u;
    // 0x11c350: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11C350u;
    {
        const bool branch_taken_0x11c350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C350u;
            // 0x11c354: 0x8fa20234  lw          $v0, 0x234($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c350) {
            ctx->pc = 0x11C364u;
            goto label_11c364;
        }
    }
    ctx->pc = 0x11C358u;
label_11c358:
    // 0x11c358: 0xdfb100f0  ld          $s1, 0xF0($sp)
    ctx->pc = 0x11c358u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x11c35c: 0x2a900001  slti        $s0, $s4, 0x1
    ctx->pc = 0x11c35cu;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)1) ? 1 : 0);
    // 0x11c360: 0x8fa20234  lw          $v0, 0x234($sp)
    ctx->pc = 0x11c360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
label_11c364:
    // 0x11c364: 0xfc560000  sd          $s6, 0x0($v0)
    ctx->pc = 0x11c364u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 22));
    // 0x11c368: 0x8fa3024c  lw          $v1, 0x24C($sp)
    ctx->pc = 0x11c368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
    // 0x11c36c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11C36Cu;
    {
        const bool branch_taken_0x11c36c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C36Cu;
            // 0x11c370: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c36c) {
            ctx->pc = 0x11C384u;
            goto label_11c384;
        }
    }
    ctx->pc = 0x11C374u;
    // 0x11c374: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x11C374u;
    SET_GPR_U32(ctx, 31, 0x11C37Cu);
    ctx->pc = 0x11C378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C374u;
            // 0x11c378: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C37Cu; }
        if (ctx->pc != 0x11C37Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C37Cu; }
        if (ctx->pc != 0x11C37Cu) { return; }
    }
    ctx->pc = 0x11C37Cu;
label_11c37c:
    // 0x11c37c: 0x8fa40234  lw          $a0, 0x234($sp)
    ctx->pc = 0x11c37cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x11c380: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x11c380u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
label_11c384:
    // 0x11c384: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x11c384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c388: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x11C388u;
    SET_GPR_U32(ctx, 31, 0x11C390u);
    ctx->pc = 0x11C38Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C388u;
            // 0x11c38c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C390u; }
        if (ctx->pc != 0x11C390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C390u; }
        if (ctx->pc != 0x11C390u) { return; }
    }
    ctx->pc = 0x11C390u;
label_11c390:
    // 0x11c390: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x11c390u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c394: 0x1600000d  bnez        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x11C394u;
    {
        const bool branch_taken_0x11c394 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C394u;
            // 0x11c398: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c394) {
            ctx->pc = 0x11C3CCu;
            goto label_11c3cc;
        }
    }
    ctx->pc = 0x11C39Cu;
    // 0x11c39c: 0x27b500f0  addiu       $s5, $sp, 0xF0
    ctx->pc = 0x11c39cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x11c3a0: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x11c3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x11c3a4: 0x0  nop
    ctx->pc = 0x11c3a4u;
    // NOP
label_11c3a8:
    // 0x11c3a8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x11c3a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c3ac: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x11c3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x11c3b0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x11c3b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x11c3b4: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x11C3B4u;
    SET_GPR_U32(ctx, 31, 0x11C3BCu);
    ctx->pc = 0x11C3B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C3B4u;
            // 0x11c3b8: 0xdc450000  ld          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C3BCu; }
        if (ctx->pc != 0x11C3BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C3BCu; }
        if (ctx->pc != 0x11C3BCu) { return; }
    }
    ctx->pc = 0x11C3BCu;
label_11c3bc:
    // 0x11c3bc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x11c3bcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c3c0: 0x2f4102a  slt         $v0, $s7, $s4
    ctx->pc = 0x11c3c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x11c3c4: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x11C3C4u;
    {
        const bool branch_taken_0x11c3c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C3C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C3C4u;
            // 0x11c3c8: 0x1410c0  sll         $v0, $s4, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c3c4) {
            ctx->pc = 0x11C3A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11c3a8;
        }
    }
    ctx->pc = 0x11C3CCu;
label_11c3cc:
    // 0x11c3cc: 0x8fa50234  lw          $a1, 0x234($sp)
    ctx->pc = 0x11c3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x11c3d0: 0xfcb60008  sd          $s6, 0x8($a1)
    ctx->pc = 0x11c3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 22));
    // 0x11c3d4: 0x8fa6024c  lw          $a2, 0x24C($sp)
    ctx->pc = 0x11c3d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
    // 0x11c3d8: 0x10c00069  beqz        $a2, . + 4 + (0x69 << 2)
    ctx->pc = 0x11C3D8u;
    {
        const bool branch_taken_0x11c3d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C3DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C3D8u;
            // 0x11c3dc: 0x8fa20258  lw          $v0, 0x258($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c3d8) {
            ctx->pc = 0x11C580u;
            goto label_11c580;
        }
    }
    ctx->pc = 0x11C3E0u;
    // 0x11c3e0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x11c3e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c3e4: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x11C3E4u;
    SET_GPR_U32(ctx, 31, 0x11C3ECu);
    ctx->pc = 0x11C3E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C3E4u;
            // 0x11c3e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C3ECu; }
        if (ctx->pc != 0x11C3ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C3ECu; }
        if (ctx->pc != 0x11C3ECu) { return; }
    }
    ctx->pc = 0x11C3ECu;
label_11c3ec:
    // 0x11c3ec: 0x8fa80234  lw          $t0, 0x234($sp)
    ctx->pc = 0x11c3ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x11c3f0: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x11C3F0u;
    {
        const bool branch_taken_0x11c3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C3F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C3F0u;
            // 0x11c3f4: 0xfd020008  sd          $v0, 0x8($t0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c3f0) {
            ctx->pc = 0x11C57Cu;
            goto label_11c57c;
        }
    }
    ctx->pc = 0x11C3F8u;
label_11c3f8:
    // 0x11c3f8: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x11c3f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c3fc: 0x1a800019  blez        $s4, . + 4 + (0x19 << 2)
    ctx->pc = 0x11C3FCu;
    {
        const bool branch_taken_0x11c3fc = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x11C400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C3FCu;
            // 0x11c400: 0x2a820002  slti        $v0, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c3fc) {
            ctx->pc = 0x11C464u;
            goto label_11c464;
        }
    }
    ctx->pc = 0x11C404u;
    // 0x11c404: 0x27b500f0  addiu       $s5, $sp, 0xF0
    ctx->pc = 0x11c404u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_11c408:
    // 0x11c408: 0x2682ffff  addiu       $v0, $s4, -0x1
    ctx->pc = 0x11c408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x11c40c: 0x1488c0  sll         $s1, $s4, 3
    ctx->pc = 0x11c40cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x11c410: 0x290c0  sll         $s2, $v0, 3
    ctx->pc = 0x11c410u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x11c414: 0x2b18821  addu        $s1, $s5, $s1
    ctx->pc = 0x11c414u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x11c418: 0x2b29021  addu        $s2, $s5, $s2
    ctx->pc = 0x11c418u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x11c41c: 0xde330000  ld          $s3, 0x0($s1)
    ctx->pc = 0x11c41cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11c420: 0xde500000  ld          $s0, 0x0($s2)
    ctx->pc = 0x11c420u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11c424: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x11c424u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c428: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x11c428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c42c: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x11C42Cu;
    SET_GPR_U32(ctx, 31, 0x11C434u);
    ctx->pc = 0x11C430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C42Cu;
            // 0x11c430: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C434u; }
        if (ctx->pc != 0x11C434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C434u; }
        if (ctx->pc != 0x11C434u) { return; }
    }
    ctx->pc = 0x11C434u;
label_11c434:
    // 0x11c434: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x11c434u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c438: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c43c: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x11C43Cu;
    SET_GPR_U32(ctx, 31, 0x11C444u);
    ctx->pc = 0x11C440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C43Cu;
            // 0x11c440: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C444u; }
        if (ctx->pc != 0x11C444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C444u; }
        if (ctx->pc != 0x11C444u) { return; }
    }
    ctx->pc = 0x11C444u;
label_11c444:
    // 0x11c444: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11c444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c448: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x11C448u;
    SET_GPR_U32(ctx, 31, 0x11C450u);
    ctx->pc = 0x11C44Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C448u;
            // 0x11c44c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C450u; }
        if (ctx->pc != 0x11C450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C450u; }
        if (ctx->pc != 0x11C450u) { return; }
    }
    ctx->pc = 0x11C450u;
label_11c450:
    // 0x11c450: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x11c450u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x11c454: 0x1e80ffec  bgtz        $s4, . + 4 + (-0x14 << 2)
    ctx->pc = 0x11C454u;
    {
        const bool branch_taken_0x11c454 = (GPR_S32(ctx, 20) > 0);
        ctx->pc = 0x11C458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C454u;
            // 0x11c458: 0xfe560000  sd          $s6, 0x0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c454) {
            ctx->pc = 0x11C408u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11c408;
        }
    }
    ctx->pc = 0x11C45Cu;
    // 0x11c45c: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x11c45cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c460: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x11c460u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
label_11c464:
    // 0x11c464: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x11C464u;
    {
        const bool branch_taken_0x11c464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11c464) {
            ctx->pc = 0x11C468u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11C464u;
            // 0x11c468: 0x2e0a02d  daddu       $s4, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11C4CCu;
            goto label_11c4cc;
        }
    }
    ctx->pc = 0x11C46Cu;
    // 0x11c46c: 0x27b500f0  addiu       $s5, $sp, 0xF0
    ctx->pc = 0x11c46cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_11c470:
    // 0x11c470: 0x2682ffff  addiu       $v0, $s4, -0x1
    ctx->pc = 0x11c470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x11c474: 0x1488c0  sll         $s1, $s4, 3
    ctx->pc = 0x11c474u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x11c478: 0x290c0  sll         $s2, $v0, 3
    ctx->pc = 0x11c478u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x11c47c: 0x2b18821  addu        $s1, $s5, $s1
    ctx->pc = 0x11c47cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x11c480: 0x2b29021  addu        $s2, $s5, $s2
    ctx->pc = 0x11c480u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x11c484: 0xde330000  ld          $s3, 0x0($s1)
    ctx->pc = 0x11c484u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11c488: 0xde500000  ld          $s0, 0x0($s2)
    ctx->pc = 0x11c488u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11c48c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x11c48cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c490: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x11c490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c494: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x11C494u;
    SET_GPR_U32(ctx, 31, 0x11C49Cu);
    ctx->pc = 0x11C498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C494u;
            // 0x11c498: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C49Cu; }
        if (ctx->pc != 0x11C49Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C49Cu; }
        if (ctx->pc != 0x11C49Cu) { return; }
    }
    ctx->pc = 0x11C49Cu;
label_11c49c:
    // 0x11c49c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x11c49cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c4a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c4a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c4a4: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x11C4A4u;
    SET_GPR_U32(ctx, 31, 0x11C4ACu);
    ctx->pc = 0x11C4A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C4A4u;
            // 0x11c4a8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C4ACu; }
        if (ctx->pc != 0x11C4ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C4ACu; }
        if (ctx->pc != 0x11C4ACu) { return; }
    }
    ctx->pc = 0x11C4ACu;
label_11c4ac:
    // 0x11c4ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11c4acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c4b0: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x11C4B0u;
    SET_GPR_U32(ctx, 31, 0x11C4B8u);
    ctx->pc = 0x11C4B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C4B0u;
            // 0x11c4b4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C4B8u; }
        if (ctx->pc != 0x11C4B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C4B8u; }
        if (ctx->pc != 0x11C4B8u) { return; }
    }
    ctx->pc = 0x11C4B8u;
label_11c4b8:
    // 0x11c4b8: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x11c4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x11c4bc: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x11c4bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x11c4c0: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x11C4C0u;
    {
        const bool branch_taken_0x11c4c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C4C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C4C0u;
            // 0x11c4c4: 0xfe560000  sd          $s6, 0x0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c4c0) {
            ctx->pc = 0x11C470u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11c470;
        }
    }
    ctx->pc = 0x11C4C8u;
    // 0x11c4c8: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x11c4c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_11c4cc:
    // 0x11c4cc: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x11c4ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x11c4d0: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x11C4D0u;
    {
        const bool branch_taken_0x11c4d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C4D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C4D0u;
            // 0x11c4d4: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c4d0) {
            ctx->pc = 0x11C518u;
            goto label_11c518;
        }
    }
    ctx->pc = 0x11C4D8u;
    // 0x11c4d8: 0xdfb100f0  ld          $s1, 0xF0($sp)
    ctx->pc = 0x11c4d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x11c4dc: 0x27b500f0  addiu       $s5, $sp, 0xF0
    ctx->pc = 0x11c4dcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x11c4e0: 0xdfb200f8  ld          $s2, 0xF8($sp)
    ctx->pc = 0x11c4e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x11c4e4: 0x0  nop
    ctx->pc = 0x11c4e4u;
    // NOP
label_11c4e8:
    // 0x11c4e8: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x11c4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x11c4ec: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x11c4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c4f0: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x11c4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x11c4f4: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x11c4f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x11c4f8: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x11C4F8u;
    SET_GPR_U32(ctx, 31, 0x11C500u);
    ctx->pc = 0x11C4FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C4F8u;
            // 0x11c4fc: 0xdc450000  ld          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C500u; }
        if (ctx->pc != 0x11C500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C500u; }
        if (ctx->pc != 0x11C500u) { return; }
    }
    ctx->pc = 0x11C500u;
label_11c500:
    // 0x11c500: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x11c500u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c504: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x11c504u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x11c508: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x11C508u;
    {
        const bool branch_taken_0x11c508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C508u;
            // 0x11c50c: 0x8fa2024c  lw          $v0, 0x24C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c508) {
            ctx->pc = 0x11C4E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11c4e8;
        }
    }
    ctx->pc = 0x11C510u;
    // 0x11c510: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11C510u;
    {
        const bool branch_taken_0x11c510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c510) {
            ctx->pc = 0x11C524u;
            goto label_11c524;
        }
    }
    ctx->pc = 0x11C518u;
label_11c518:
    // 0x11c518: 0xdfb100f0  ld          $s1, 0xF0($sp)
    ctx->pc = 0x11c518u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x11c51c: 0xdfb200f8  ld          $s2, 0xF8($sp)
    ctx->pc = 0x11c51cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x11c520: 0x8fa2024c  lw          $v0, 0x24C($sp)
    ctx->pc = 0x11c520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
label_11c524:
    // 0x11c524: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11C524u;
    {
        const bool branch_taken_0x11c524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C524u;
            // 0x11c528: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c524) {
            ctx->pc = 0x11C540u;
            goto label_11c540;
        }
    }
    ctx->pc = 0x11C52Cu;
    // 0x11c52c: 0x8fa30234  lw          $v1, 0x234($sp)
    ctx->pc = 0x11c52cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x11c530: 0xfc760010  sd          $s6, 0x10($v1)
    ctx->pc = 0x11c530u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 22));
    // 0x11c534: 0xfc710000  sd          $s1, 0x0($v1)
    ctx->pc = 0x11c534u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 17));
    // 0x11c538: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x11C538u;
    {
        const bool branch_taken_0x11c538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C53Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C538u;
            // 0x11c53c: 0xfc720008  sd          $s2, 0x8($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c538) {
            ctx->pc = 0x11C57Cu;
            goto label_11c57c;
        }
    }
    ctx->pc = 0x11C540u;
label_11c540:
    // 0x11c540: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11c540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c544: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x11C544u;
    SET_GPR_U32(ctx, 31, 0x11C54Cu);
    ctx->pc = 0x11C548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C544u;
            // 0x11c548: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C54Cu; }
        if (ctx->pc != 0x11C54Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C54Cu; }
        if (ctx->pc != 0x11C54Cu) { return; }
    }
    ctx->pc = 0x11C54Cu;
label_11c54c:
    // 0x11c54c: 0x8fa40234  lw          $a0, 0x234($sp)
    ctx->pc = 0x11c54cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x11c550: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11c550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c554: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x11c554u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x11c558: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x11C558u;
    SET_GPR_U32(ctx, 31, 0x11C560u);
    ctx->pc = 0x11C55Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C558u;
            // 0x11c55c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C560u; }
        if (ctx->pc != 0x11C560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C560u; }
        if (ctx->pc != 0x11C560u) { return; }
    }
    ctx->pc = 0x11C560u;
label_11c560:
    // 0x11c560: 0x8fa50234  lw          $a1, 0x234($sp)
    ctx->pc = 0x11c560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x11c564: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c568: 0xfca20008  sd          $v0, 0x8($a1)
    ctx->pc = 0x11c568u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
    // 0x11c56c: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x11C56Cu;
    SET_GPR_U32(ctx, 31, 0x11C574u);
    ctx->pc = 0x11C570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C56Cu;
            // 0x11c570: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C574u; }
        if (ctx->pc != 0x11C574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C574u; }
        if (ctx->pc != 0x11C574u) { return; }
    }
    ctx->pc = 0x11C574u;
label_11c574:
    // 0x11c574: 0x8fa60234  lw          $a2, 0x234($sp)
    ctx->pc = 0x11c574u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x11c578: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x11c578u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
label_11c57c:
    // 0x11c57c: 0x8fa20258  lw          $v0, 0x258($sp)
    ctx->pc = 0x11c57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
label_11c580:
    // 0x11c580: 0xdfbf0300  ld          $ra, 0x300($sp)
    ctx->pc = 0x11c580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 768)));
label_11c584:
    // 0x11c584: 0xdfbe02f0  ld          $fp, 0x2F0($sp)
    ctx->pc = 0x11c584u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x11c588: 0xdfb702e0  ld          $s7, 0x2E0($sp)
    ctx->pc = 0x11c588u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x11c58c: 0xdfb602d0  ld          $s6, 0x2D0($sp)
    ctx->pc = 0x11c58cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x11c590: 0xdfb502c0  ld          $s5, 0x2C0($sp)
    ctx->pc = 0x11c590u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x11c594: 0xdfb402b0  ld          $s4, 0x2B0($sp)
    ctx->pc = 0x11c594u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x11c598: 0xdfb302a0  ld          $s3, 0x2A0($sp)
    ctx->pc = 0x11c598u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x11c59c: 0xdfb20290  ld          $s2, 0x290($sp)
    ctx->pc = 0x11c59cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x11c5a0: 0xdfb10280  ld          $s1, 0x280($sp)
    ctx->pc = 0x11c5a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x11c5a4: 0xdfb00270  ld          $s0, 0x270($sp)
    ctx->pc = 0x11c5a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x11c5a8: 0x3e00008  jr          $ra
    ctx->pc = 0x11C5A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C5ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C5A8u;
            // 0x11c5ac: 0x27bd0310  addiu       $sp, $sp, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11C5B0u;
}
