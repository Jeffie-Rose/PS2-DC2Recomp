#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CalcSpaceW__6ClsMesFiiPUs
// Address: 0x156320 - 0x156568
void CalcSpaceW__6ClsMesFiiPUs_0x156320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CalcSpaceW__6ClsMesFiiPUs_0x156320");
#endif

    switch (ctx->pc) {
        case 0x15635cu: goto label_15635c;
        case 0x1563e4u: goto label_1563e4;
        case 0x1564e4u: goto label_1564e4;
        case 0x1564f4u: goto label_1564f4;
        case 0x15652cu: goto label_15652c;
        default: break;
    }

    ctx->pc = 0x156320u;

    // 0x156320: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x156320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x156324: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x156324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x156328: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x156328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x15632c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15632cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x156330: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x156330u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156334: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x156334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x156338: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x156338u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15633c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15633cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x156340: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x156340u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156344: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x156344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x156348: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x156348u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15634c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15634cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x156350: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x156350u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156354: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x156354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x156358: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x156358u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_15635c:
    // 0x15635c: 0x96110000  lhu         $s1, 0x0($s0)
    ctx->pc = 0x15635cu;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x156360: 0x3402ff02  ori         $v0, $zero, 0xFF02
    ctx->pc = 0x156360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65282);
    // 0x156364: 0x12220013  beq         $s1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x156364u;
    {
        const bool branch_taken_0x156364 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x156368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156364u;
            // 0x156368: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156364) {
            ctx->pc = 0x1563B4u;
            goto label_1563b4;
        }
    }
    ctx->pc = 0x15636Cu;
    // 0x15636c: 0x3402ff01  ori         $v0, $zero, 0xFF01
    ctx->pc = 0x15636cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65281);
    // 0x156370: 0x12220007  beq         $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x156370u;
    {
        const bool branch_taken_0x156370 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x156374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156370u;
            // 0x156374: 0x3402ff03  ori         $v0, $zero, 0xFF03 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65283);
        ctx->in_delay_slot = false;
        if (branch_taken_0x156370) {
            ctx->pc = 0x156390u;
            goto label_156390;
        }
    }
    ctx->pc = 0x156378u;
    // 0x156378: 0x12220005  beq         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x156378u;
    {
        const bool branch_taken_0x156378 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x15637Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156378u;
            // 0x15637c: 0x3402ff00  ori         $v0, $zero, 0xFF00 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
        ctx->in_delay_slot = false;
        if (branch_taken_0x156378) {
            ctx->pc = 0x156390u;
            goto label_156390;
        }
    }
    ctx->pc = 0x156380u;
    // 0x156380: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x156380u;
    {
        const bool branch_taken_0x156380 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x156380) {
            ctx->pc = 0x156390u;
            goto label_156390;
        }
    }
    ctx->pc = 0x156388u;
    // 0x156388: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x156388u;
    {
        const bool branch_taken_0x156388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156388) {
            ctx->pc = 0x1563BCu;
            goto label_1563bc;
        }
    }
    ctx->pc = 0x156390u;
label_156390:
    // 0x156390: 0x1a600006  blez        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x156390u;
    {
        const bool branch_taken_0x156390 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x156394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156390u;
            // 0x156394: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156390) {
            ctx->pc = 0x1563ACu;
            goto label_1563ac;
        }
    }
    ctx->pc = 0x156398u;
    // 0x156398: 0x2b21023  subu        $v0, $s5, $s2
    ctx->pc = 0x156398u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x15639c: 0x16600002  bnez        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x15639Cu;
    {
        const bool branch_taken_0x15639c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1563A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15639Cu;
            // 0x1563a0: 0x53001a  div         $zero, $v0, $s3 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 19);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15639c) {
            ctx->pc = 0x1563A8u;
            goto label_1563a8;
        }
    }
    ctx->pc = 0x1563A4u;
    // 0x1563a4: 0x1cd  break       0, 7
    ctx->pc = 0x1563a4u;
    runtime->handleBreak(rdram, ctx);
label_1563a8:
    // 0x1563a8: 0x1012  mflo        $v0
    ctx->pc = 0x1563a8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1563ac:
    // 0x1563ac: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x1563ACu;
    {
        const bool branch_taken_0x1563ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1563ac) {
            ctx->pc = 0x156540u;
            goto label_156540;
        }
    }
    ctx->pc = 0x1563B4u;
label_1563b4:
    // 0x1563b4: 0x1000ffe9  b           . + 4 + (-0x17 << 2)
    ctx->pc = 0x1563B4u;
    {
        const bool branch_taken_0x1563b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1563B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1563B4u;
            // 0x1563b8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1563b4) {
            ctx->pc = 0x15635Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15635c;
        }
    }
    ctx->pc = 0x1563BCu;
label_1563bc:
    // 0x1563bc: 0x0  nop
    ctx->pc = 0x1563bcu;
    // NOP
    // 0x1563c0: 0x3402fd00  ori         $v0, $zero, 0xFD00
    ctx->pc = 0x1563c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64768);
    // 0x1563c4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1563c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1563c8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1563C8u;
    {
        const bool branch_taken_0x1563c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1563CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1563C8u;
            // 0x1563cc: 0x3401fd33  ori         $at, $zero, 0xFD33 (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64819);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1563c8) {
            ctx->pc = 0x1563F4u;
            goto label_1563f4;
        }
    }
    ctx->pc = 0x1563D0u;
    // 0x1563d0: 0x221082a  slt         $at, $s1, $at
    ctx->pc = 0x1563d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1563d4: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1563D4u;
    {
        const bool branch_taken_0x1563d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1563D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1563D4u;
            // 0x1563d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1563d4) {
            ctx->pc = 0x1563F4u;
            goto label_1563f4;
        }
    }
    ctx->pc = 0x1563DCu;
    // 0x1563dc: 0xc054834  jal         func_1520D0
    ctx->pc = 0x1563DCu;
    SET_GPR_U32(ctx, 31, 0x1563E4u);
    ctx->pc = 0x1563E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1563DCu;
            // 0x1563e0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1520D0u;
    if (runtime->hasFunction(0x1520D0u)) {
        auto targetFn = runtime->lookupFunction(0x1520D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1563E4u; }
        if (ctx->pc != 0x1563E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGaijiW__6ClsMesFi_0x1520d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1563E4u; }
        if (ctx->pc != 0x1563E4u) { return; }
    }
    ctx->pc = 0x1563E4u;
label_1563e4:
    // 0x1563e4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1563e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1563e8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1563e8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1563ec: 0x1000ffdb  b           . + 4 + (-0x25 << 2)
    ctx->pc = 0x1563ECu;
    {
        const bool branch_taken_0x1563ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1563F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1563ECu;
            // 0x1563f0: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1563ec) {
            ctx->pc = 0x15635Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15635c;
        }
    }
    ctx->pc = 0x1563F4u;
label_1563f4:
    // 0x1563f4: 0x0  nop
    ctx->pc = 0x1563f4u;
    // NOP
    // 0x1563f8: 0x3402f900  ori         $v0, $zero, 0xF900
    ctx->pc = 0x1563f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63744);
    // 0x1563fc: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1563fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x156400: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x156400u;
    {
        const bool branch_taken_0x156400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x156404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156400u;
            // 0x156404: 0x3401fa00  ori         $at, $zero, 0xFA00 (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64000);
        ctx->in_delay_slot = false;
        if (branch_taken_0x156400) {
            ctx->pc = 0x156420u;
            goto label_156420;
        }
    }
    ctx->pc = 0x156408u;
    // 0x156408: 0x221082a  slt         $at, $s1, $at
    ctx->pc = 0x156408u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x15640c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x15640Cu;
    {
        const bool branch_taken_0x15640c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x156410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15640Cu;
            // 0x156410: 0x26228000  addiu       $v0, $s1, -0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294934528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15640c) {
            ctx->pc = 0x156420u;
            goto label_156420;
        }
    }
    ctx->pc = 0x156414u;
    // 0x156414: 0x24428700  addiu       $v0, $v0, -0x7900
    ctx->pc = 0x156414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936320));
    // 0x156418: 0x1000ffd0  b           . + 4 + (-0x30 << 2)
    ctx->pc = 0x156418u;
    {
        const bool branch_taken_0x156418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15641Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156418u;
            // 0x15641c: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156418) {
            ctx->pc = 0x15635Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15635c;
        }
    }
    ctx->pc = 0x156420u;
label_156420:
    // 0x156420: 0x3402fc00  ori         $v0, $zero, 0xFC00
    ctx->pc = 0x156420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64512);
    // 0x156424: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x156424u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x156428: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x156428u;
    {
        const bool branch_taken_0x156428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15642Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156428u;
            // 0x15642c: 0x3401fd00  ori         $at, $zero, 0xFD00 (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x156428) {
            ctx->pc = 0x15643Cu;
            goto label_15643c;
        }
    }
    ctx->pc = 0x156430u;
    // 0x156430: 0x221082a  slt         $at, $s1, $at
    ctx->pc = 0x156430u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x156434: 0x1420ffc9  bnez        $at, . + 4 + (-0x37 << 2)
    ctx->pc = 0x156434u;
    {
        const bool branch_taken_0x156434 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x156434) {
            ctx->pc = 0x15635Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15635c;
        }
    }
    ctx->pc = 0x15643Cu;
label_15643c:
    // 0x15643c: 0x0  nop
    ctx->pc = 0x15643cu;
    // NOP
    // 0x156440: 0x3402f500  ori         $v0, $zero, 0xF500
    ctx->pc = 0x156440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62720);
    // 0x156444: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x156444u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x156448: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x156448u;
    {
        const bool branch_taken_0x156448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15644Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156448u;
            // 0x15644c: 0x3401f600  ori         $at, $zero, 0xF600 (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62976);
        ctx->in_delay_slot = false;
        if (branch_taken_0x156448) {
            ctx->pc = 0x15645Cu;
            goto label_15645c;
        }
    }
    ctx->pc = 0x156450u;
    // 0x156450: 0x221082a  slt         $at, $s1, $at
    ctx->pc = 0x156450u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x156454: 0x1420ffc1  bnez        $at, . + 4 + (-0x3F << 2)
    ctx->pc = 0x156454u;
    {
        const bool branch_taken_0x156454 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x156454) {
            ctx->pc = 0x15635Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15635c;
        }
    }
    ctx->pc = 0x15645Cu;
label_15645c:
    // 0x15645c: 0x0  nop
    ctx->pc = 0x15645cu;
    // NOP
    // 0x156460: 0x3402f400  ori         $v0, $zero, 0xF400
    ctx->pc = 0x156460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62464);
    // 0x156464: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x156464u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x156468: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x156468u;
    {
        const bool branch_taken_0x156468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15646Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156468u;
            // 0x15646c: 0x3401f500  ori         $at, $zero, 0xF500 (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62720);
        ctx->in_delay_slot = false;
        if (branch_taken_0x156468) {
            ctx->pc = 0x15647Cu;
            goto label_15647c;
        }
    }
    ctx->pc = 0x156470u;
    // 0x156470: 0x221082a  slt         $at, $s1, $at
    ctx->pc = 0x156470u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x156474: 0x1420ffb9  bnez        $at, . + 4 + (-0x47 << 2)
    ctx->pc = 0x156474u;
    {
        const bool branch_taken_0x156474 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x156474) {
            ctx->pc = 0x15635Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15635c;
        }
    }
    ctx->pc = 0x15647Cu;
label_15647c:
    // 0x15647c: 0x0  nop
    ctx->pc = 0x15647cu;
    // NOP
    // 0x156480: 0x3402f300  ori         $v0, $zero, 0xF300
    ctx->pc = 0x156480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62208);
    // 0x156484: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x156484u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x156488: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x156488u;
    {
        const bool branch_taken_0x156488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15648Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156488u;
            // 0x15648c: 0x3401f400  ori         $at, $zero, 0xF400 (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62464);
        ctx->in_delay_slot = false;
        if (branch_taken_0x156488) {
            ctx->pc = 0x15649Cu;
            goto label_15649c;
        }
    }
    ctx->pc = 0x156490u;
    // 0x156490: 0x221082a  slt         $at, $s1, $at
    ctx->pc = 0x156490u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x156494: 0x1420ffb1  bnez        $at, . + 4 + (-0x4F << 2)
    ctx->pc = 0x156494u;
    {
        const bool branch_taken_0x156494 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x156494) {
            ctx->pc = 0x15635Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15635c;
        }
    }
    ctx->pc = 0x15649Cu;
label_15649c:
    // 0x15649c: 0x0  nop
    ctx->pc = 0x15649cu;
    // NOP
    // 0x1564a0: 0x3402f200  ori         $v0, $zero, 0xF200
    ctx->pc = 0x1564a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61952);
    // 0x1564a4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1564a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1564a8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1564A8u;
    {
        const bool branch_taken_0x1564a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1564ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1564A8u;
            // 0x1564ac: 0x3401f300  ori         $at, $zero, 0xF300 (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62208);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1564a8) {
            ctx->pc = 0x1564BCu;
            goto label_1564bc;
        }
    }
    ctx->pc = 0x1564B0u;
    // 0x1564b0: 0x221082a  slt         $at, $s1, $at
    ctx->pc = 0x1564b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1564b4: 0x1420ffa9  bnez        $at, . + 4 + (-0x57 << 2)
    ctx->pc = 0x1564B4u;
    {
        const bool branch_taken_0x1564b4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1564b4) {
            ctx->pc = 0x15635Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15635c;
        }
    }
    ctx->pc = 0x1564BCu;
label_1564bc:
    // 0x1564bc: 0x0  nop
    ctx->pc = 0x1564bcu;
    // NOP
    // 0x1564c0: 0x26228000  addiu       $v0, $s1, -0x8000
    ctx->pc = 0x1564c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294934528));
    // 0x1564c4: 0x244280fc  addiu       $v0, $v0, -0x7F04
    ctx->pc = 0x1564c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934780));
    // 0x1564c8: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x1564c8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1564cc: 0x1420ffa3  bnez        $at, . + 4 + (-0x5D << 2)
    ctx->pc = 0x1564CCu;
    {
        const bool branch_taken_0x1564cc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1564D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1564CCu;
            // 0x1564d0: 0x3402ff06  ori         $v0, $zero, 0xFF06 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65286);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1564cc) {
            ctx->pc = 0x15635Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15635c;
        }
    }
    ctx->pc = 0x1564D4u;
    // 0x1564d4: 0x1222ffa1  beq         $s1, $v0, . + 4 + (-0x5F << 2)
    ctx->pc = 0x1564D4u;
    {
        const bool branch_taken_0x1564d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1564D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1564D4u;
            // 0x1564d8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1564d4) {
            ctx->pc = 0x15635Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15635c;
        }
    }
    ctx->pc = 0x1564DCu;
    // 0x1564dc: 0xc0b5110  jal         func_2D4440
    ctx->pc = 0x1564DCu;
    SET_GPR_U32(ctx, 31, 0x1564E4u);
    ctx->pc = 0x1564E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1564DCu;
            // 0x1564e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4440u;
    if (runtime->hasFunction(0x2D4440u)) {
        auto targetFn = runtime->lookupFunction(0x2D4440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1564E4u; }
        if (ctx->pc != 0x1564E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHalfFont__5CFontFi_0x2d4440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1564E4u; }
        if (ctx->pc != 0x1564E4u) { return; }
    }
    ctx->pc = 0x1564E4u;
label_1564e4:
    // 0x1564e4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1564E4u;
    {
        const bool branch_taken_0x1564e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1564E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1564E4u;
            // 0x1564e8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1564e4) {
            ctx->pc = 0x156534u;
            goto label_156534;
        }
    }
    ctx->pc = 0x1564ECu;
    // 0x1564ec: 0xc0b522c  jal         func_2D48B0
    ctx->pc = 0x1564ECu;
    SET_GPR_U32(ctx, 31, 0x1564F4u);
    ctx->pc = 0x1564F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1564ECu;
            // 0x1564f0: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D48B0u;
    if (runtime->hasFunction(0x2D48B0u)) {
        auto targetFn = runtime->lookupFunction(0x2D48B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1564F4u; }
        if (ctx->pc != 0x1564F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetHalfFontNo__5CFontFc_0x2d48b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1564F4u; }
        if (ctx->pc != 0x1564F4u) { return; }
    }
    ctx->pc = 0x1564F4u;
label_1564f4:
    // 0x1564f4: 0x16220007  bne         $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1564F4u;
    {
        const bool branch_taken_0x1564f4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1564F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1564F4u;
            // 0x1564f8: 0x141043  sra         $v0, $s4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1564f4) {
            ctx->pc = 0x156514u;
            goto label_156514;
        }
    }
    ctx->pc = 0x1564FCu;
    // 0x1564fc: 0x6810003  bgez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1564FCu;
    {
        const bool branch_taken_0x1564fc = (GPR_S32(ctx, 20) >= 0);
        if (branch_taken_0x1564fc) {
            ctx->pc = 0x15650Cu;
            goto label_15650c;
        }
    }
    ctx->pc = 0x156504u;
    // 0x156504: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x156504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x156508: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x156508u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_15650c:
    // 0x15650c: 0x1000ff93  b           . + 4 + (-0x6D << 2)
    ctx->pc = 0x15650Cu;
    {
        const bool branch_taken_0x15650c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15650Cu;
            // 0x156510: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15650c) {
            ctx->pc = 0x15635Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15635c;
        }
    }
    ctx->pc = 0x156514u;
label_156514:
    // 0x156514: 0x0  nop
    ctx->pc = 0x156514u;
    // NOP
    // 0x156518: 0x44940800  mtc1        $s4, $f1
    ctx->pc = 0x156518u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15651c: 0xc6c000c8  lwc1        $f0, 0xC8($s6)
    ctx->pc = 0x15651cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156520: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x156520u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x156524: 0xc0a248c  jal         func_289230
    ctx->pc = 0x156524u;
    SET_GPR_U32(ctx, 31, 0x15652Cu);
    ctx->pc = 0x156528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156524u;
            // 0x156528: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15652Cu; }
        if (ctx->pc != 0x15652Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15652Cu; }
        if (ctx->pc != 0x15652Cu) { return; }
    }
    ctx->pc = 0x15652Cu;
label_15652c:
    // 0x15652c: 0x1000ff8b  b           . + 4 + (-0x75 << 2)
    ctx->pc = 0x15652Cu;
    {
        const bool branch_taken_0x15652c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15652Cu;
            // 0x156530: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15652c) {
            ctx->pc = 0x15635Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15635c;
        }
    }
    ctx->pc = 0x156534u;
label_156534:
    // 0x156534: 0x0  nop
    ctx->pc = 0x156534u;
    // NOP
    // 0x156538: 0x1000ff88  b           . + 4 + (-0x78 << 2)
    ctx->pc = 0x156538u;
    {
        const bool branch_taken_0x156538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15653Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156538u;
            // 0x15653c: 0x2549021  addu        $s2, $s2, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156538) {
            ctx->pc = 0x15635Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15635c;
        }
    }
    ctx->pc = 0x156540u;
label_156540:
    // 0x156540: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x156540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x156544: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x156544u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x156548: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x156548u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15654c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15654cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x156550: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x156550u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x156554: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x156554u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x156558: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x156558u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15655c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15655cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156560: 0x3e00008  jr          $ra
    ctx->pc = 0x156560u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156560u;
            // 0x156564: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x156568u;
}
