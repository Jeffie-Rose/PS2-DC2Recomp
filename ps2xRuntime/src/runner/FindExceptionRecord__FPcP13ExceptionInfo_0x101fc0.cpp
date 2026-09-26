#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FindExceptionRecord__FPcP13ExceptionInfo
// Address: 0x101fc0 - 0x10217c
void FindExceptionRecord__FPcP13ExceptionInfo_0x101fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FindExceptionRecord__FPcP13ExceptionInfo_0x101fc0");
#endif

    switch (ctx->pc) {
        case 0x101ff0u: goto label_101ff0;
        case 0x102050u: goto label_102050;
        case 0x1020fcu: goto label_1020fc;
        case 0x102104u: goto label_102104;
        case 0x10210cu: goto label_10210c;
        case 0x102120u: goto label_102120;
        case 0x10212cu: goto label_10212c;
        default: break;
    }

    ctx->pc = 0x101fc0u;

    // 0x101fc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x101fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x101fc4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x101fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x101fc8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x101fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x101fcc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x101fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x101fd0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x101fd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101fd4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x101fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x101fd8: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x101fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x101fdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x101fdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101fe0: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x101fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x101fe4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x101fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101fe8: 0xc0408b4  jal         func_1022D0
    ctx->pc = 0x101FE8u;
    SET_GPR_U32(ctx, 31, 0x101FF0u);
    ctx->pc = 0x101FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101FE8u;
            // 0x101fec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1022D0u;
    if (runtime->hasFunction(0x1022D0u)) {
        auto targetFn = runtime->lookupFunction(0x1022D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101FF0u; }
        if (ctx->pc != 0x101FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___FindExceptionTable__FP13ExceptionInfoPc_0x1022d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101FF0u; }
        if (ctx->pc != 0x101FF0u) { return; }
    }
    ctx->pc = 0x101FF0u;
label_101ff0:
    // 0x101ff0: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x101FF0u;
    {
        const bool branch_taken_0x101ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x101FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101FF0u;
            // 0x101ff4: 0x10183c  dsll32      $v1, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101ff0) {
            ctx->pc = 0x102164u;
            goto label_102164;
        }
    }
    ctx->pc = 0x101FF8u;
    // 0x101ff8: 0x2406fffe  addiu       $a2, $zero, -0x2
    ctx->pc = 0x101ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x101ffc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x101ffcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x102000: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x102000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x102004: 0x662024  and         $a0, $v1, $a2
    ctx->pc = 0x102004u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x102008: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x102008u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10200c: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x10200cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x102010: 0x4803c  dsll32      $s0, $a0, 0
    ctx->pc = 0x102010u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) << (32 + 0));
    // 0x102014: 0x3c042aaa  lui         $a0, 0x2AAA
    ctx->pc = 0x102014u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)10922 << 16));
    // 0x102018: 0x3484aaab  ori         $a0, $a0, 0xAAAB
    ctx->pc = 0x102018u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)43691);
    // 0x10201c: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x10201cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x102020: 0x850018  mult        $zero, $a0, $a1
    ctx->pc = 0x102020u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x102024: 0x0  nop
    ctx->pc = 0x102024u;
    // NOP
    // 0x102028: 0x0  nop
    ctx->pc = 0x102028u;
    // NOP
    // 0x10202c: 0x2010  mfhi        $a0
    ctx->pc = 0x10202cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x102030: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x102030u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x102034: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x102034u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x102038: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x102038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x10203c: 0x2487ffff  addiu       $a3, $a0, -0x1
    ctx->pc = 0x10203cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x102040: 0xe0082a  slt         $at, $a3, $zero
    ctx->pc = 0x102040u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x102044: 0x1420001b  bnez        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x102044u;
    {
        const bool branch_taken_0x102044 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x102048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102044u;
            // 0x102048: 0x10803f  dsra32      $s0, $s0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102044) {
            ctx->pc = 0x1020B4u;
            goto label_1020b4;
        }
    }
    ctx->pc = 0x10204Cu;
    // 0x10204c: 0x1272021  addu        $a0, $t1, $a3
    ctx->pc = 0x10204cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
label_102050:
    // 0x102050: 0x44043  sra         $t0, $a0, 1
    ctx->pc = 0x102050u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 4), 1));
    // 0x102054: 0x82040  sll         $a0, $t0, 1
    ctx->pc = 0x102054u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x102058: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x102058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x10205c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x10205cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x102060: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x102060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x102064: 0x8caa0000  lw          $t2, 0x0($a1)
    ctx->pc = 0x102064u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x102068: 0x20a082b  sltu        $at, $s0, $t2
    ctx->pc = 0x102068u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x10206c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x10206Cu;
    {
        const bool branch_taken_0x10206c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x10206c) {
            ctx->pc = 0x10207Cu;
            goto label_10207c;
        }
    }
    ctx->pc = 0x102074u;
    // 0x102074: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x102074u;
    {
        const bool branch_taken_0x102074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102074u;
            // 0x102078: 0x2507ffff  addiu       $a3, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102074) {
            ctx->pc = 0x1020A8u;
            goto label_1020a8;
        }
    }
    ctx->pc = 0x10207Cu;
label_10207c:
    // 0x10207c: 0x0  nop
    ctx->pc = 0x10207cu;
    // NOP
    // 0x102080: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x102080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x102084: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x102084u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x102088: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x102088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x10208c: 0x90082b  sltu        $at, $a0, $s0
    ctx->pc = 0x10208cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x102090: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x102090u;
    {
        const bool branch_taken_0x102090 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x102094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102090u;
            // 0x102094: 0x25090001  addiu       $t1, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102090) {
            ctx->pc = 0x1020A0u;
            goto label_1020a0;
        }
    }
    ctx->pc = 0x102098u;
    // 0x102098: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x102098u;
    {
        const bool branch_taken_0x102098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10209Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102098u;
            // 0x10209c: 0xe9082a  slt         $at, $a3, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x102098) {
            ctx->pc = 0x1020ACu;
            goto label_1020ac;
        }
    }
    ctx->pc = 0x1020A0u;
label_1020a0:
    // 0x1020a0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1020A0u;
    {
        const bool branch_taken_0x1020a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1020a0) {
            ctx->pc = 0x1020BCu;
            goto label_1020bc;
        }
    }
    ctx->pc = 0x1020A8u;
label_1020a8:
    // 0x1020a8: 0xe9082a  slt         $at, $a3, $t1
    ctx->pc = 0x1020a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_1020ac:
    // 0x1020ac: 0x1020ffe8  beqz        $at, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1020ACu;
    {
        const bool branch_taken_0x1020ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1020B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1020ACu;
            // 0x1020b0: 0x1272021  addu        $a0, $t1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1020ac) {
            ctx->pc = 0x102050u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_102050;
        }
    }
    ctx->pc = 0x1020B4u;
label_1020b4:
    // 0x1020b4: 0x0  nop
    ctx->pc = 0x1020b4u;
    // NOP
    // 0x1020b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1020b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1020bc:
    // 0x1020bc: 0x10a00029  beqz        $a1, . + 4 + (0x29 << 2)
    ctx->pc = 0x1020BCu;
    {
        const bool branch_taken_0x1020bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1020bc) {
            ctx->pc = 0x102164u;
            goto label_102164;
        }
    }
    ctx->pc = 0x1020C4u;
    // 0x1020c4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1020c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1020c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1020c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1020cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1020CCu;
    {
        const bool branch_taken_0x1020cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1020D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1020CCu;
            // 0x1020d0: 0x24a20008  addiu       $v0, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1020cc) {
            ctx->pc = 0x1020DCu;
            goto label_1020dc;
        }
    }
    ctx->pc = 0x1020D4u;
    // 0x1020d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1020D4u;
    {
        const bool branch_taken_0x1020d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1020D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1020D4u;
            // 0x1020d8: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1020d4) {
            ctx->pc = 0x1020E4u;
            goto label_1020e4;
        }
    }
    ctx->pc = 0x1020DCu;
label_1020dc:
    // 0x1020dc: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1020dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1020e0: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x1020e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_1020e4:
    // 0x1020e4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1020e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1020e8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1020e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1020ec: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1020ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1020f0: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1020f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1020f4: 0xc0408a0  jal         func_102280
    ctx->pc = 0x1020F4u;
    SET_GPR_U32(ctx, 31, 0x1020FCu);
    ctx->pc = 0x1020F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1020F4u;
            // 0x1020f8: 0x2028023  subu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102280u;
    if (runtime->hasFunction(0x102280u)) {
        auto targetFn = runtime->lookupFunction(0x102280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1020FCu; }
        if (ctx->pc != 0x1020FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___SkipUnwindInfo__FPc_0x102280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1020FCu; }
        if (ctx->pc != 0x1020FCu) { return; }
    }
    ctx->pc = 0x1020FCu;
label_1020fc:
    // 0x1020fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1020fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102100: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x102100u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_102104:
    // 0x102104: 0xc04028c  jal         func_100A30
    ctx->pc = 0x102104u;
    SET_GPR_U32(ctx, 31, 0x10210Cu);
    ctx->pc = 0x102108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102104u;
            // 0x102108: 0x27a50044  addiu       $a1, $sp, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100A30u;
    if (runtime->hasFunction(0x100A30u)) {
        auto targetFn = runtime->lookupFunction(0x100A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10210Cu; }
        if (ctx->pc != 0x10210Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeUnsignedNumber__FPcPUi_0x100a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10210Cu; }
        if (ctx->pc != 0x10210Cu) { return; }
    }
    ctx->pc = 0x10210Cu;
label_10210c:
    // 0x10210c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x10210cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x102110: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x102110u;
    {
        const bool branch_taken_0x102110 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x102114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102110u;
            // 0x102114: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102110) {
            ctx->pc = 0x102164u;
            goto label_102164;
        }
    }
    ctx->pc = 0x102118u;
    // 0x102118: 0xc04028c  jal         func_100A30
    ctx->pc = 0x102118u;
    SET_GPR_U32(ctx, 31, 0x102120u);
    ctx->pc = 0x10211Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102118u;
            // 0x10211c: 0x27a50048  addiu       $a1, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100A30u;
    if (runtime->hasFunction(0x100A30u)) {
        auto targetFn = runtime->lookupFunction(0x100A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102120u; }
        if (ctx->pc != 0x102120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeUnsignedNumber__FPcPUi_0x100a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102120u; }
        if (ctx->pc != 0x102120u) { return; }
    }
    ctx->pc = 0x102120u;
label_102120:
    // 0x102120: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x102120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102124: 0xc04028c  jal         func_100A30
    ctx->pc = 0x102124u;
    SET_GPR_U32(ctx, 31, 0x10212Cu);
    ctx->pc = 0x102128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102124u;
            // 0x102128: 0x27a5004c  addiu       $a1, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100A30u;
    if (runtime->hasFunction(0x100A30u)) {
        auto targetFn = runtime->lookupFunction(0x100A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10212Cu; }
        if (ctx->pc != 0x10212Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeUnsignedNumber__FPcPUi_0x100a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10212Cu; }
        if (ctx->pc != 0x10212Cu) { return; }
    }
    ctx->pc = 0x10212Cu;
label_10212c:
    // 0x10212c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x10212cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x102130: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x102130u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x102134: 0x211182b  sltu        $v1, $s0, $s1
    ctx->pc = 0x102134u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x102138: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x102138u;
    {
        const bool branch_taken_0x102138 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10213Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102138u;
            // 0x10213c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102138) {
            ctx->pc = 0x102164u;
            goto label_102164;
        }
    }
    ctx->pc = 0x102140u;
    // 0x102140: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x102140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x102144: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x102144u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x102148: 0x230082b  sltu        $at, $s1, $s0
    ctx->pc = 0x102148u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x10214c: 0x1420ffed  bnez        $at, . + 4 + (-0x13 << 2)
    ctx->pc = 0x10214Cu;
    {
        const bool branch_taken_0x10214c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x10214c) {
            ctx->pc = 0x102104u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_102104;
        }
    }
    ctx->pc = 0x102154u;
    // 0x102154: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x102154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x102158: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x102158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x10215c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x10215cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x102160: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x102160u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_102164:
    // 0x102164: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x102164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x102168: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x102168u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10216c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10216cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102170: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x102170u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102174: 0x3e00008  jr          $ra
    ctx->pc = 0x102174u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102174u;
            // 0x102178: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10217Cu;
}
