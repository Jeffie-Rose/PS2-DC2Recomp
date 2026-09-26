#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchCommand__18CScriptInterpreterFPi
// Address: 0x147080 - 0x147278
void SearchCommand__18CScriptInterpreterFPi_0x147080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchCommand__18CScriptInterpreterFPi_0x147080");
#endif

    switch (ctx->pc) {
        case 0x1470f0u: goto label_1470f0;
        case 0x147100u: goto label_147100;
        case 0x14710cu: goto label_14710c;
        case 0x147124u: goto label_147124;
        case 0x147158u: goto label_147158;
        case 0x1471b8u: goto label_1471b8;
        case 0x1471d0u: goto label_1471d0;
        case 0x1471dcu: goto label_1471dc;
        case 0x147210u: goto label_147210;
        case 0x147224u: goto label_147224;
        default: break;
    }

    ctx->pc = 0x147080u;

    // 0x147080: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x147080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x147084: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x147084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x147088: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x147088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14708c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14708cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x147090: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x147090u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147094: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x147094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x147098: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x147098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14709c: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x14709cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1470a0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1470A0u;
    {
        const bool branch_taken_0x1470a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1470A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1470A0u;
            // 0x1470a4: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1470a0) {
            ctx->pc = 0x1470E8u;
            goto label_1470e8;
        }
    }
    ctx->pc = 0x1470A8u;
    // 0x1470a8: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x1470a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1470ac: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1470acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1470b0: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1470b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1470b4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1470B4u;
    {
        const bool branch_taken_0x1470b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1470B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1470B4u;
            // 0x1470b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1470b4) {
            ctx->pc = 0x1470C4u;
            goto label_1470c4;
        }
    }
    ctx->pc = 0x1470BCu;
    // 0x1470bc: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x1470BCu;
    {
        const bool branch_taken_0x1470bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1470C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1470BCu;
            // 0x1470c0: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1470bc) {
            ctx->pc = 0x147260u;
            goto label_147260;
        }
    }
    ctx->pc = 0x1470C4u;
label_1470c4:
    // 0x1470c4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1470c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1470c8: 0x24820002  addiu       $v0, $a0, 0x2
    ctx->pc = 0x1470c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x1470cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1470ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1470d0: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x1470d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1470d4: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x1470d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x1470d8: 0x60102a  slt         $v0, $v1, $zero
    ctx->pc = 0x1470d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x1470dc: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1470dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x1470e0: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x1470E0u;
    {
        const bool branch_taken_0x1470e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1470E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1470E0u;
            // 0x1470e4: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1470e0) {
            ctx->pc = 0x14725Cu;
            goto label_14725c;
        }
    }
    ctx->pc = 0x1470E8u;
label_1470e8:
    // 0x1470e8: 0xc051ca0  jal         func_147280
    ctx->pc = 0x1470E8u;
    SET_GPR_U32(ctx, 31, 0x1470F0u);
    ctx->pc = 0x147280u;
    if (runtime->hasFunction(0x147280u)) {
        auto targetFn = runtime->lookupFunction(0x147280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1470F0u; }
        if (ctx->pc != 0x1470F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SkipSpace__FR9input_str_0x147280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1470F0u; }
        if (ctx->pc != 0x1470F0u) { return; }
    }
    ctx->pc = 0x1470F0u;
label_1470f0:
    // 0x1470f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1470F0u;
    {
        const bool branch_taken_0x1470f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1470F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1470F0u;
            // 0x1470f4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1470f0) {
            ctx->pc = 0x147100u;
            goto label_147100;
        }
    }
    ctx->pc = 0x1470F8u;
    // 0x1470f8: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x1470F8u;
    {
        const bool branch_taken_0x1470f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1470FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1470F8u;
            // 0x1470fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1470f8) {
            ctx->pc = 0x14725Cu;
            goto label_14725c;
        }
    }
    ctx->pc = 0x147100u;
label_147100:
    // 0x147100: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x147100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147104: 0xc0518e8  jal         func_1463A0
    ctx->pc = 0x147104u;
    SET_GPR_U32(ctx, 31, 0x14710Cu);
    ctx->pc = 0x147108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x147104u;
            // 0x147108: 0x27a5015c  addiu       $a1, $sp, 0x15C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463A0u;
    if (runtime->hasFunction(0x1463A0u)) {
        auto targetFn = runtime->lookupFunction(0x1463A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14710Cu; }
        if (ctx->pc != 0x14710Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        get__9input_strFPi_0x1463a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14710Cu; }
        if (ctx->pc != 0x14710Cu) { return; }
    }
    ctx->pc = 0x14710Cu;
label_14710c:
    // 0x14710c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14710Cu;
    {
        const bool branch_taken_0x14710c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x147110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14710Cu;
            // 0x147110: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14710c) {
            ctx->pc = 0x14711Cu;
            goto label_14711c;
        }
    }
    ctx->pc = 0x147114u;
    // 0x147114: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x147114u;
    {
        const bool branch_taken_0x147114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147114) {
            ctx->pc = 0x14725Cu;
            goto label_14725c;
        }
    }
    ctx->pc = 0x14711Cu;
label_14711c:
    // 0x14711c: 0xc051cc0  jal         func_147300
    ctx->pc = 0x14711Cu;
    SET_GPR_U32(ctx, 31, 0x147124u);
    ctx->pc = 0x147120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14711Cu;
            // 0x147120: 0x83a4015c  lb          $a0, 0x15C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 348)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x147300u;
    if (runtime->hasFunction(0x147300u)) {
        auto targetFn = runtime->lookupFunction(0x147300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147124u; }
        if (ctx->pc != 0x147124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckChar__Fc_0x147300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147124u; }
        if (ctx->pc != 0x147124u) { return; }
    }
    ctx->pc = 0x147124u;
label_147124:
    // 0x147124: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x147124u;
    {
        const bool branch_taken_0x147124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x147124) {
            ctx->pc = 0x14713Cu;
            goto label_14713c;
        }
    }
    ctx->pc = 0x14712Cu;
    // 0x14712c: 0x8fa3015c  lw          $v1, 0x15C($sp)
    ctx->pc = 0x14712cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x147130: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x147130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x147134: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x147134u;
    {
        const bool branch_taken_0x147134 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x147138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147134u;
            // 0x147138: 0x21d1021  addu        $v0, $s0, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147134) {
            ctx->pc = 0x147160u;
            goto label_147160;
        }
    }
    ctx->pc = 0x14713Cu;
label_14713c:
    // 0x14713c: 0x0  nop
    ctx->pc = 0x14713cu;
    // NOP
    // 0x147140: 0x8fa3015c  lw          $v1, 0x15C($sp)
    ctx->pc = 0x147140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x147144: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x147144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x147148: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x147148u;
    {
        const bool branch_taken_0x147148 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x14714Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147148u;
            // 0x14714c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147148) {
            ctx->pc = 0x14716Cu;
            goto label_14716c;
        }
    }
    ctx->pc = 0x147150u;
    // 0x147150: 0xc051c18  jal         func_147060
    ctx->pc = 0x147150u;
    SET_GPR_U32(ctx, 31, 0x147158u);
    ctx->pc = 0x147060u;
    if (runtime->hasFunction(0x147060u)) {
        auto targetFn = runtime->lookupFunction(0x147060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147158u; }
        if (ctx->pc != 0x147158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        back__9input_strFv_0x147060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147158u; }
        if (ctx->pc != 0x147158u) { return; }
    }
    ctx->pc = 0x147158u;
label_147158:
    // 0x147158: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x147158u;
    {
        const bool branch_taken_0x147158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147158) {
            ctx->pc = 0x14716Cu;
            goto label_14716c;
        }
    }
    ctx->pc = 0x147160u;
label_147160:
    // 0x147160: 0xa0430050  sb          $v1, 0x50($v0)
    ctx->pc = 0x147160u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 80), (uint8_t)GPR_U32(ctx, 3));
    // 0x147164: 0x1000ffe6  b           . + 4 + (-0x1A << 2)
    ctx->pc = 0x147164u;
    {
        const bool branch_taken_0x147164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147164u;
            // 0x147168: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147164) {
            ctx->pc = 0x147100u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_147100;
        }
    }
    ctx->pc = 0x14716Cu;
label_14716c:
    // 0x14716c: 0x0  nop
    ctx->pc = 0x14716cu;
    // NOP
    // 0x147170: 0x21d1021  addu        $v0, $s0, $sp
    ctx->pc = 0x147170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
    // 0x147174: 0xa0400050  sb          $zero, 0x50($v0)
    ctx->pc = 0x147174u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 80), (uint8_t)GPR_U32(ctx, 0));
    // 0x147178: 0x83a30050  lb          $v1, 0x50($sp)
    ctx->pc = 0x147178u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14717c: 0x28620041  slti        $v0, $v1, 0x41
    ctx->pc = 0x14717cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)65) ? 1 : 0);
    // 0x147180: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x147180u;
    {
        const bool branch_taken_0x147180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x147184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147180u;
            // 0x147184: 0x2861005b  slti        $at, $v1, 0x5B (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)91) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x147180) {
            ctx->pc = 0x147190u;
            goto label_147190;
        }
    }
    ctx->pc = 0x147188u;
    // 0x147188: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x147188u;
    {
        const bool branch_taken_0x147188 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x147188) {
            ctx->pc = 0x1471A0u;
            goto label_1471a0;
        }
    }
    ctx->pc = 0x147190u;
label_147190:
    // 0x147190: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x147190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x147194: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x147194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x147198: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x147198u;
    {
        const bool branch_taken_0x147198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14719Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147198u;
            // 0x14719c: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147198) {
            ctx->pc = 0x14725Cu;
            goto label_14725c;
        }
    }
    ctx->pc = 0x1471A0u;
label_1471a0:
    // 0x1471a0: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x1471a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x1471a4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1471A4u;
    {
        const bool branch_taken_0x1471a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1471A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1471A4u;
            // 0x1471a8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1471a4) {
            ctx->pc = 0x147208u;
            goto label_147208;
        }
    }
    ctx->pc = 0x1471ACu;
    // 0x1471ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1471acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1471b0: 0xc0519d8  jal         func_146760
    ctx->pc = 0x1471B0u;
    SET_GPR_U32(ctx, 31, 0x1471B8u);
    ctx->pc = 0x1471B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1471B0u;
            // 0x1471b4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146760u;
    if (runtime->hasFunction(0x146760u)) {
        auto targetFn = runtime->lookupFunction(0x146760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1471B8u; }
        if (ctx->pc != 0x1471B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        hash__18CScriptInterpreterFPc_0x146760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1471B8u; }
        if (ctx->pc != 0x1471B8u) { return; }
    }
    ctx->pc = 0x1471B8u;
label_1471b8:
    // 0x1471b8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1471b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1471bc: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x1471bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x1471c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1471c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1471c4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1471c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1471c8: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1471C8u;
    {
        const bool branch_taken_0x1471c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1471c8) {
            ctx->pc = 0x147250u;
            goto label_147250;
        }
    }
    ctx->pc = 0x1471D0u;
label_1471d0:
    // 0x1471d0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1471d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1471d4: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x1471D4u;
    SET_GPR_U32(ctx, 31, 0x1471DCu);
    ctx->pc = 0x1471D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1471D4u;
            // 0x1471d8: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1471DCu; }
        if (ctx->pc != 0x1471DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1471DCu; }
        if (ctx->pc != 0x1471DCu) { return; }
    }
    ctx->pc = 0x1471DCu;
label_1471dc:
    // 0x1471dc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1471DCu;
    {
        const bool branch_taken_0x1471dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1471dc) {
            ctx->pc = 0x1471F4u;
            goto label_1471f4;
        }
    }
    ctx->pc = 0x1471E4u;
    // 0x1471e4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1471e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1471e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1471e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1471ec: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1471ECu;
    {
        const bool branch_taken_0x1471ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1471F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1471ECu;
            // 0x1471f0: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1471ec) {
            ctx->pc = 0x14725Cu;
            goto label_14725c;
        }
    }
    ctx->pc = 0x1471F4u;
label_1471f4:
    // 0x1471f4: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x1471f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1471f8: 0x1600fff5  bnez        $s0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1471F8u;
    {
        const bool branch_taken_0x1471f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1471f8) {
            ctx->pc = 0x1471D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1471d0;
        }
    }
    ctx->pc = 0x147200u;
    // 0x147200: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x147200u;
    {
        const bool branch_taken_0x147200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147200) {
            ctx->pc = 0x147250u;
            goto label_147250;
        }
    }
    ctx->pc = 0x147208u;
label_147208:
    // 0x147208: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x147208u;
    {
        const bool branch_taken_0x147208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14720Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147208u;
            // 0x14720c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147208) {
            ctx->pc = 0x147240u;
            goto label_147240;
        }
    }
    ctx->pc = 0x147210u;
label_147210:
    // 0x147210: 0x8e62002c  lw          $v0, 0x2C($s3)
    ctx->pc = 0x147210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x147214: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x147214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x147218: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x147218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14721c: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x14721Cu;
    SET_GPR_U32(ctx, 31, 0x147224u);
    ctx->pc = 0x147220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14721Cu;
            // 0x147220: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147224u; }
        if (ctx->pc != 0x147224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147224u; }
        if (ctx->pc != 0x147224u) { return; }
    }
    ctx->pc = 0x147224u;
label_147224:
    // 0x147224: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x147224u;
    {
        const bool branch_taken_0x147224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x147224) {
            ctx->pc = 0x147238u;
            goto label_147238;
        }
    }
    ctx->pc = 0x14722Cu;
    // 0x14722c: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x14722cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x147230: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x147230u;
    {
        const bool branch_taken_0x147230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147230u;
            // 0x147234: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147230) {
            ctx->pc = 0x14725Cu;
            goto label_14725c;
        }
    }
    ctx->pc = 0x147238u;
label_147238:
    // 0x147238: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x147238u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x14723c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x14723cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_147240:
    // 0x147240: 0x8e620028  lw          $v0, 0x28($s3)
    ctx->pc = 0x147240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x147244: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x147244u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x147248: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x147248u;
    {
        const bool branch_taken_0x147248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x147248) {
            ctx->pc = 0x147210u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_147210;
        }
    }
    ctx->pc = 0x147250u;
label_147250:
    // 0x147250: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x147250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x147254: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x147254u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x147258: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x147258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14725c:
    // 0x14725c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x14725cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_147260:
    // 0x147260: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x147260u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x147264: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x147264u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x147268: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x147268u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14726c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14726cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x147270: 0x3e00008  jr          $ra
    ctx->pc = 0x147270u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147270u;
            // 0x147274: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x147278u;
}
