#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_LOADBG_FILE__FP12RS_STACKDATAi
// Address: 0x264220 - 0x264378
void ps2__SET_LOADBG_FILE__FP12RS_STACKDATAi_0x264220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_LOADBG_FILE__FP12RS_STACKDATAi_0x264220");
#endif

    switch (ctx->pc) {
        case 0x26424cu: goto label_26424c;
        case 0x264258u: goto label_264258;
        case 0x264284u: goto label_264284;
        case 0x264294u: goto label_264294;
        case 0x2642a0u: goto label_2642a0;
        case 0x2642b4u: goto label_2642b4;
        case 0x2642c8u: goto label_2642c8;
        case 0x264334u: goto label_264334;
        case 0x264340u: goto label_264340;
        case 0x26434cu: goto label_26434c;
        default: break;
    }

    ctx->pc = 0x264220u;

    // 0x264220: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x264220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x264224: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x264224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x264228: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x264228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x26422c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x26422cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x264230: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x264230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x264234: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x264234u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264238: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x264238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26423c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26423cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x264240: 0x8f918ac0  lw          $s1, -0x7540($gp)
    ctx->pc = 0x264240u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937280)));
    // 0x264244: 0xc052330  jal         func_148CC0
    ctx->pc = 0x264244u;
    SET_GPR_U32(ctx, 31, 0x26424Cu);
    ctx->pc = 0x264248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264244u;
            // 0x264248: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148CC0u;
    if (runtime->hasFunction(0x148CC0u)) {
        auto targetFn = runtime->lookupFunction(0x148CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26424Cu; }
        if (ctx->pc != 0x26424Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartReadBG__Fv_0x148cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26424Cu; }
        if (ctx->pc != 0x26424Cu) { return; }
    }
    ctx->pc = 0x26424Cu;
label_26424c:
    // 0x26424c: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x26424cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x264250: 0x1020002f  beqz        $at, . + 4 + (0x2F << 2)
    ctx->pc = 0x264250u;
    {
        const bool branch_taken_0x264250 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x264254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264250u;
            // 0x264254: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264250) {
            ctx->pc = 0x264310u;
            goto label_264310;
        }
    }
    ctx->pc = 0x264258u;
label_264258:
    // 0x264258: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x264258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x26425c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26425cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x264260: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x264260u;
    {
        const bool branch_taken_0x264260 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x264260) {
            ctx->pc = 0x2642A8u;
            goto label_2642a8;
        }
    }
    ctx->pc = 0x264268u;
    // 0x264268: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x264268u;
    {
        const bool branch_taken_0x264268 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x264268) {
            ctx->pc = 0x264278u;
            goto label_264278;
        }
    }
    ctx->pc = 0x264270u;
    // 0x264270: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x264270u;
    {
        const bool branch_taken_0x264270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264270) {
            ctx->pc = 0x264300u;
            goto label_264300;
        }
    }
    ctx->pc = 0x264278u;
label_264278:
    // 0x264278: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x264278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26427c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26427Cu;
    SET_GPR_U32(ctx, 31, 0x264284u);
    ctx->pc = 0x264280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26427Cu;
            // 0x264280: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264284u; }
        if (ctx->pc != 0x264284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264284u; }
        if (ctx->pc != 0x264284u) { return; }
    }
    ctx->pc = 0x264284u;
label_264284:
    // 0x264284: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x264284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264288: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x264288u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26428c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26428Cu;
    SET_GPR_U32(ctx, 31, 0x264294u);
    ctx->pc = 0x264290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26428Cu;
            // 0x264290: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264294u; }
        if (ctx->pc != 0x264294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264294u; }
        if (ctx->pc != 0x264294u) { return; }
    }
    ctx->pc = 0x264294u;
label_264294:
    // 0x264294: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x264294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264298: 0xc065750  jal         func_195D40
    ctx->pc = 0x264298u;
    SET_GPR_U32(ctx, 31, 0x2642A0u);
    ctx->pc = 0x26429Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264298u;
            // 0x26429c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195D40u;
    if (runtime->hasFunction(0x195D40u)) {
        auto targetFn = runtime->lookupFunction(0x195D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2642A0u; }
        if (ctx->pc != 0x2642A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemFilePath__Fii_0x195d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2642A0u; }
        if (ctx->pc != 0x2642A0u) { return; }
    }
    ctx->pc = 0x2642A0u;
label_2642a0:
    // 0x2642a0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2642A0u;
    {
        const bool branch_taken_0x2642a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2642A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2642A0u;
            // 0x2642a4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2642a0) {
            ctx->pc = 0x2642B4u;
            goto label_2642b4;
        }
    }
    ctx->pc = 0x2642A8u;
label_2642a8:
    // 0x2642a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2642a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2642ac: 0xc097e48  jal         func_25F920
    ctx->pc = 0x2642ACu;
    SET_GPR_U32(ctx, 31, 0x2642B4u);
    ctx->pc = 0x2642B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2642ACu;
            // 0x2642b0: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2642B4u; }
        if (ctx->pc != 0x2642B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2642B4u; }
        if (ctx->pc != 0x2642B4u) { return; }
    }
    ctx->pc = 0x2642B4u;
label_2642b4:
    // 0x2642b4: 0x0  nop
    ctx->pc = 0x2642b4u;
    // NOP
    // 0x2642b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2642b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2642bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2642bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2642c0: 0xc05224c  jal         func_148930
    ctx->pc = 0x2642C0u;
    SET_GPR_U32(ctx, 31, 0x2642C8u);
    ctx->pc = 0x2642C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2642C0u;
            // 0x2642c4: 0x27a6006c  addiu       $a2, $sp, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148930u;
    if (runtime->hasFunction(0x148930u)) {
        auto targetFn = runtime->lookupFunction(0x148930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2642C8u; }
        if (ctx->pc != 0x2642C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileBG__FPcP1Pi_0x148930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2642C8u; }
        if (ctx->pc != 0x2642C8u) { return; }
    }
    ctx->pc = 0x2642C8u;
label_2642c8:
    // 0x2642c8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2642C8u;
    {
        const bool branch_taken_0x2642c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2642CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2642C8u;
            // 0x2642cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2642c8) {
            ctx->pc = 0x2642D8u;
            goto label_2642d8;
        }
    }
    ctx->pc = 0x2642D0u;
    // 0x2642d0: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2642D0u;
    {
        const bool branch_taken_0x2642d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2642D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2642D0u;
            // 0x2642d4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2642d0) {
            ctx->pc = 0x26435Cu;
            goto label_26435c;
        }
    }
    ctx->pc = 0x2642D8u;
label_2642d8:
    // 0x2642d8: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x2642d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x2642dc: 0x3083003f  andi        $v1, $a0, 0x3F
    ctx->pc = 0x2642dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
    // 0x2642e0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2642E0u;
    {
        const bool branch_taken_0x2642e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2642E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2642E0u;
            // 0x2642e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2642e0) {
            ctx->pc = 0x2642F0u;
            goto label_2642f0;
        }
    }
    ctx->pc = 0x2642E8u;
    // 0x2642e8: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x2642e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2642ec: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2642ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2642f0:
    // 0x2642f0: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x2642f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2642f4: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x2642f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2642f8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2642f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2642fc: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x2642fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_264300:
    // 0x264300: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x264300u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x264304: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x264304u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x264308: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x264308u;
    {
        const bool branch_taken_0x264308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x264308) {
            ctx->pc = 0x264258u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_264258;
        }
    }
    ctx->pc = 0x264310u;
label_264310:
    // 0x264310: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x264310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x264314: 0xac20e624  sw          $zero, -0x19DC($at)
    ctx->pc = 0x264314u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960676), GPR_U32(ctx, 0));
    // 0x264318: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x264318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26431c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x26431cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x264320: 0x8c23e62c  lw          $v1, -0x19D4($at)
    ctx->pc = 0x264320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294960684)));
    // 0x264324: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x264324u;
    {
        const bool branch_taken_0x264324 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x264328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264324u;
            // 0x264328: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264324) {
            ctx->pc = 0x264354u;
            goto label_264354;
        }
    }
    ctx->pc = 0x26432Cu;
    // 0x26432c: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x26432Cu;
    SET_GPR_U32(ctx, 31, 0x264334u);
    ctx->pc = 0x264330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26432Cu;
            // 0x264330: 0x2484c620  addiu       $a0, $a0, -0x39E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264334u; }
        if (ctx->pc != 0x264334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264334u; }
        if (ctx->pc != 0x264334u) { return; }
    }
    ctx->pc = 0x264334u;
label_264334:
    // 0x264334: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x264334u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x264338: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x264338u;
    SET_GPR_U32(ctx, 31, 0x264340u);
    ctx->pc = 0x26433Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264338u;
            // 0x26433c: 0x2484c670  addiu       $a0, $a0, -0x3990 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264340u; }
        if (ctx->pc != 0x264340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264340u; }
        if (ctx->pc != 0x264340u) { return; }
    }
    ctx->pc = 0x264340u;
label_264340:
    // 0x264340: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x264340u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x264344: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x264344u;
    SET_GPR_U32(ctx, 31, 0x26434Cu);
    ctx->pc = 0x264348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264344u;
            // 0x264348: 0x2484c620  addiu       $a0, $a0, -0x39E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26434Cu; }
        if (ctx->pc != 0x26434Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26434Cu; }
        if (ctx->pc != 0x26434Cu) { return; }
    }
    ctx->pc = 0x26434Cu;
label_26434c:
    // 0x26434c: 0x1000ffff  b           . + 4 + (-0x1 << 2)
    ctx->pc = 0x26434Cu;
    {
        const bool branch_taken_0x26434c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26434c) {
            ctx->pc = 0x26434Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26434c;
        }
    }
    ctx->pc = 0x264354u;
label_264354:
    // 0x264354: 0x0  nop
    ctx->pc = 0x264354u;
    // NOP
    // 0x264358: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x264358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_26435c:
    // 0x26435c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x26435cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x264360: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x264360u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x264364: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x264364u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x264368: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x264368u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26436c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26436cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x264370: 0x3e00008  jr          $ra
    ctx->pc = 0x264370u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264370u;
            // 0x264374: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x264378u;
}
