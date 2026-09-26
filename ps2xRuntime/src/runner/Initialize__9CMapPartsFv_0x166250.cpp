#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__9CMapPartsFv
// Address: 0x166250 - 0x166358
void Initialize__9CMapPartsFv_0x166250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__9CMapPartsFv_0x166250");
#endif

    switch (ctx->pc) {
        case 0x166250u: goto label_166250;
        case 0x166254u: goto label_166254;
        case 0x166258u: goto label_166258;
        case 0x16625cu: goto label_16625c;
        case 0x166260u: goto label_166260;
        case 0x166264u: goto label_166264;
        case 0x166268u: goto label_166268;
        case 0x16626cu: goto label_16626c;
        case 0x166270u: goto label_166270;
        case 0x166274u: goto label_166274;
        case 0x166278u: goto label_166278;
        case 0x16627cu: goto label_16627c;
        case 0x166280u: goto label_166280;
        case 0x166284u: goto label_166284;
        case 0x166288u: goto label_166288;
        case 0x16628cu: goto label_16628c;
        case 0x166290u: goto label_166290;
        case 0x166294u: goto label_166294;
        case 0x166298u: goto label_166298;
        case 0x16629cu: goto label_16629c;
        case 0x1662a0u: goto label_1662a0;
        case 0x1662a4u: goto label_1662a4;
        case 0x1662a8u: goto label_1662a8;
        case 0x1662acu: goto label_1662ac;
        case 0x1662b0u: goto label_1662b0;
        case 0x1662b4u: goto label_1662b4;
        case 0x1662b8u: goto label_1662b8;
        case 0x1662bcu: goto label_1662bc;
        case 0x1662c0u: goto label_1662c0;
        case 0x1662c4u: goto label_1662c4;
        case 0x1662c8u: goto label_1662c8;
        case 0x1662ccu: goto label_1662cc;
        case 0x1662d0u: goto label_1662d0;
        case 0x1662d4u: goto label_1662d4;
        case 0x1662d8u: goto label_1662d8;
        case 0x1662dcu: goto label_1662dc;
        case 0x1662e0u: goto label_1662e0;
        case 0x1662e4u: goto label_1662e4;
        case 0x1662e8u: goto label_1662e8;
        case 0x1662ecu: goto label_1662ec;
        case 0x1662f0u: goto label_1662f0;
        case 0x1662f4u: goto label_1662f4;
        case 0x1662f8u: goto label_1662f8;
        case 0x1662fcu: goto label_1662fc;
        case 0x166300u: goto label_166300;
        case 0x166304u: goto label_166304;
        case 0x166308u: goto label_166308;
        case 0x16630cu: goto label_16630c;
        case 0x166310u: goto label_166310;
        case 0x166314u: goto label_166314;
        case 0x166318u: goto label_166318;
        case 0x16631cu: goto label_16631c;
        case 0x166320u: goto label_166320;
        case 0x166324u: goto label_166324;
        case 0x166328u: goto label_166328;
        case 0x16632cu: goto label_16632c;
        case 0x166330u: goto label_166330;
        case 0x166334u: goto label_166334;
        case 0x166338u: goto label_166338;
        case 0x16633cu: goto label_16633c;
        case 0x166340u: goto label_166340;
        case 0x166344u: goto label_166344;
        case 0x166348u: goto label_166348;
        case 0x16634cu: goto label_16634c;
        case 0x166350u: goto label_166350;
        case 0x166354u: goto label_166354;
        default: break;
    }

    ctx->pc = 0x166250u;

label_166250:
    // 0x166250: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x166250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_166254:
    // 0x166254: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x166254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_166258:
    // 0x166258: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x166258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_16625c:
    // 0x16625c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16625cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_166260:
    // 0x166260: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x166260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_166264:
    // 0x166264: 0xac8000b0  sw          $zero, 0xB0($a0)
    ctx->pc = 0x166264u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 0));
label_166268:
    // 0x166268: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x166268u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16626c:
    // 0x16626c: 0xa0800070  sb          $zero, 0x70($a0)
    ctx->pc = 0x16626cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 112), (uint8_t)GPR_U32(ctx, 0));
label_166270:
    // 0x166270: 0xa0800090  sb          $zero, 0x90($a0)
    ctx->pc = 0x166270u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 144), (uint8_t)GPR_U32(ctx, 0));
label_166274:
    // 0x166274: 0x8e1900c0  lw          $t9, 0xC0($s0)
    ctx->pc = 0x166274u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_166278:
    // 0x166278: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x166278u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_16627c:
    // 0x16627c: 0x320f809  jalr        $t9
label_166280:
    if (ctx->pc == 0x166280u) {
        ctx->pc = 0x166280u;
            // 0x166280: 0x260400c0  addiu       $a0, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->pc = 0x166284u;
        goto label_166284;
    }
    ctx->pc = 0x16627Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x166284u);
        ctx->pc = 0x166280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16627Cu;
            // 0x166280: 0x260400c0  addiu       $a0, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x166284u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x166284u; }
            if (ctx->pc != 0x166284u) { return; }
        }
        }
    }
    ctx->pc = 0x166284u;
label_166284:
    // 0x166284: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x166284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_166288:
    // 0x166288: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x166288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_16628c:
    // 0x16628c: 0xae0302f8  sw          $v1, 0x2F8($s0)
    ctx->pc = 0x16628cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 760), GPR_U32(ctx, 3));
label_166290:
    // 0x166290: 0x260402b0  addiu       $a0, $s0, 0x2B0
    ctx->pc = 0x166290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 688));
label_166294:
    // 0x166294: 0xae0001d0  sw          $zero, 0x1D0($s0)
    ctx->pc = 0x166294u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 464), GPR_U32(ctx, 0));
label_166298:
    // 0x166298: 0xae0001dc  sw          $zero, 0x1DC($s0)
    ctx->pc = 0x166298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 476), GPR_U32(ctx, 0));
label_16629c:
    // 0x16629c: 0xae0001d8  sw          $zero, 0x1D8($s0)
    ctx->pc = 0x16629cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 472), GPR_U32(ctx, 0));
label_1662a0:
    // 0x1662a0: 0xae0001d4  sw          $zero, 0x1D4($s0)
    ctx->pc = 0x1662a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 0));
label_1662a4:
    // 0x1662a4: 0xc0a78d4  jal         func_29E350
label_1662a8:
    if (ctx->pc == 0x1662A8u) {
        ctx->pc = 0x1662A8u;
            // 0x1662a8: 0xae0201e8  sw          $v0, 0x1E8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 488), GPR_U32(ctx, 2));
        ctx->pc = 0x1662ACu;
        goto label_1662ac;
    }
    ctx->pc = 0x1662A4u;
    SET_GPR_U32(ctx, 31, 0x1662ACu);
    ctx->pc = 0x1662A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1662A4u;
            // 0x1662a8: 0xae0201e8  sw          $v0, 0x1E8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 488), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E350u;
    if (runtime->hasFunction(0x29E350u)) {
        auto targetFn = runtime->lookupFunction(0x29E350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1662ACu; }
        if (ctx->pc != 0x1662ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__14CFuncPointMngrFv_0x29e350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1662ACu; }
        if (ctx->pc != 0x1662ACu) { return; }
    }
    ctx->pc = 0x1662ACu;
label_1662ac:
    // 0x1662ac: 0xae0002fc  sw          $zero, 0x2FC($s0)
    ctx->pc = 0x1662acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 764), GPR_U32(ctx, 0));
label_1662b0:
    // 0x1662b0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1662b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1662b4:
    // 0x1662b4: 0xae0002e8  sw          $zero, 0x2E8($s0)
    ctx->pc = 0x1662b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 744), GPR_U32(ctx, 0));
label_1662b8:
    // 0x1662b8: 0x26040240  addiu       $a0, $s0, 0x240
    ctx->pc = 0x1662b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
label_1662bc:
    // 0x1662bc: 0xae0002e4  sw          $zero, 0x2E4($s0)
    ctx->pc = 0x1662bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 740), GPR_U32(ctx, 0));
label_1662c0:
    // 0x1662c0: 0xae0202f4  sw          $v0, 0x2F4($s0)
    ctx->pc = 0x1662c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 756), GPR_U32(ctx, 2));
label_1662c4:
    // 0x1662c4: 0xae0002ec  sw          $zero, 0x2EC($s0)
    ctx->pc = 0x1662c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 748), GPR_U32(ctx, 0));
label_1662c8:
    // 0x1662c8: 0xae0002f0  sw          $zero, 0x2F0($s0)
    ctx->pc = 0x1662c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 752), GPR_U32(ctx, 0));
label_1662cc:
    // 0x1662cc: 0xc04bc90  jal         func_12F240
label_1662d0:
    if (ctx->pc == 0x1662D0u) {
        ctx->pc = 0x1662D0u;
            // 0x1662d0: 0xae000230  sw          $zero, 0x230($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 0));
        ctx->pc = 0x1662D4u;
        goto label_1662d4;
    }
    ctx->pc = 0x1662CCu;
    SET_GPR_U32(ctx, 31, 0x1662D4u);
    ctx->pc = 0x1662D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1662CCu;
            // 0x1662d0: 0xae000230  sw          $zero, 0x230($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F240u;
    if (runtime->hasFunction(0x12F240u)) {
        auto targetFn = runtime->lookupFunction(0x12F240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1662D4u; }
        if (ctx->pc != 0x1662D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVectorW__FPf_0x12f240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1662D4u; }
        if (ctx->pc != 0x1662D4u) { return; }
    }
    ctx->pc = 0x1662D4u;
label_1662d4:
    // 0x1662d4: 0xc04bc90  jal         func_12F240
label_1662d8:
    if (ctx->pc == 0x1662D8u) {
        ctx->pc = 0x1662D8u;
            // 0x1662d8: 0x26040250  addiu       $a0, $s0, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
        ctx->pc = 0x1662DCu;
        goto label_1662dc;
    }
    ctx->pc = 0x1662D4u;
    SET_GPR_U32(ctx, 31, 0x1662DCu);
    ctx->pc = 0x1662D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1662D4u;
            // 0x1662d8: 0x26040250  addiu       $a0, $s0, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F240u;
    if (runtime->hasFunction(0x12F240u)) {
        auto targetFn = runtime->lookupFunction(0x12F240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1662DCu; }
        if (ctx->pc != 0x1662DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVectorW__FPf_0x12f240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1662DCu; }
        if (ctx->pc != 0x1662DCu) { return; }
    }
    ctx->pc = 0x1662DCu;
label_1662dc:
    // 0x1662dc: 0xc04bc8c  jal         func_12F230
label_1662e0:
    if (ctx->pc == 0x1662E0u) {
        ctx->pc = 0x1662E0u;
            // 0x1662e0: 0x26040260  addiu       $a0, $s0, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 608));
        ctx->pc = 0x1662E4u;
        goto label_1662e4;
    }
    ctx->pc = 0x1662DCu;
    SET_GPR_U32(ctx, 31, 0x1662E4u);
    ctx->pc = 0x1662E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1662DCu;
            // 0x1662e0: 0x26040260  addiu       $a0, $s0, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1662E4u; }
        if (ctx->pc != 0x1662E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1662E4u; }
        if (ctx->pc != 0x1662E4u) { return; }
    }
    ctx->pc = 0x1662E4u;
label_1662e4:
    // 0x1662e4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1662e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1662e8:
    // 0x1662e8: 0x10000005  b           . + 4 + (0x5 << 2)
label_1662ec:
    if (ctx->pc == 0x1662ECu) {
        ctx->pc = 0x1662ECu;
            // 0x1662ec: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1662F0u;
        goto label_1662f0;
    }
    ctx->pc = 0x1662E8u;
    {
        const bool branch_taken_0x1662e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1662ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1662E8u;
            // 0x1662ec: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1662e8) {
            ctx->pc = 0x166300u;
            goto label_166300;
        }
    }
    ctx->pc = 0x1662F0u;
label_1662f0:
    // 0x1662f0: 0xc04bc8c  jal         func_12F230
label_1662f4:
    if (ctx->pc == 0x1662F4u) {
        ctx->pc = 0x1662F4u;
            // 0x1662f4: 0x244401f0  addiu       $a0, $v0, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 496));
        ctx->pc = 0x1662F8u;
        goto label_1662f8;
    }
    ctx->pc = 0x1662F0u;
    SET_GPR_U32(ctx, 31, 0x1662F8u);
    ctx->pc = 0x1662F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1662F0u;
            // 0x1662f4: 0x244401f0  addiu       $a0, $v0, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1662F8u; }
        if (ctx->pc != 0x1662F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1662F8u; }
        if (ctx->pc != 0x1662F8u) { return; }
    }
    ctx->pc = 0x1662F8u;
label_1662f8:
    // 0x1662f8: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x1662f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1662fc:
    // 0x1662fc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1662fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_166300:
    // 0x166300: 0x8e0201e8  lw          $v0, 0x1E8($s0)
    ctx->pc = 0x166300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 488)));
label_166304:
    // 0x166304: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x166304u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_166308:
    // 0x166308: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_16630c:
    if (ctx->pc == 0x16630Cu) {
        ctx->pc = 0x16630Cu;
            // 0x16630c: 0x2121021  addu        $v0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->pc = 0x166310u;
        goto label_166310;
    }
    ctx->pc = 0x166308u;
    {
        const bool branch_taken_0x166308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16630Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166308u;
            // 0x16630c: 0x2121021  addu        $v0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166308) {
            ctx->pc = 0x1662F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1662f0;
        }
    }
    ctx->pc = 0x166310u;
label_166310:
    // 0x166310: 0x26040280  addiu       $a0, $s0, 0x280
    ctx->pc = 0x166310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 640));
label_166314:
    // 0x166314: 0xc04bc90  jal         func_12F240
label_166318:
    if (ctx->pc == 0x166318u) {
        ctx->pc = 0x166318u;
            // 0x166318: 0xae000270  sw          $zero, 0x270($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 0));
        ctx->pc = 0x16631Cu;
        goto label_16631c;
    }
    ctx->pc = 0x166314u;
    SET_GPR_U32(ctx, 31, 0x16631Cu);
    ctx->pc = 0x166318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166314u;
            // 0x166318: 0xae000270  sw          $zero, 0x270($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F240u;
    if (runtime->hasFunction(0x12F240u)) {
        auto targetFn = runtime->lookupFunction(0x12F240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16631Cu; }
        if (ctx->pc != 0x16631Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVectorW__FPf_0x12f240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16631Cu; }
        if (ctx->pc != 0x16631Cu) { return; }
    }
    ctx->pc = 0x16631Cu;
label_16631c:
    // 0x16631c: 0xc04bc90  jal         func_12F240
label_166320:
    if (ctx->pc == 0x166320u) {
        ctx->pc = 0x166320u;
            // 0x166320: 0x26040290  addiu       $a0, $s0, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
        ctx->pc = 0x166324u;
        goto label_166324;
    }
    ctx->pc = 0x16631Cu;
    SET_GPR_U32(ctx, 31, 0x166324u);
    ctx->pc = 0x166320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16631Cu;
            // 0x166320: 0x26040290  addiu       $a0, $s0, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F240u;
    if (runtime->hasFunction(0x12F240u)) {
        auto targetFn = runtime->lookupFunction(0x12F240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166324u; }
        if (ctx->pc != 0x166324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVectorW__FPf_0x12f240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166324u; }
        if (ctx->pc != 0x166324u) { return; }
    }
    ctx->pc = 0x166324u;
label_166324:
    // 0x166324: 0xc04bc8c  jal         func_12F230
label_166328:
    if (ctx->pc == 0x166328u) {
        ctx->pc = 0x166328u;
            // 0x166328: 0x260402a0  addiu       $a0, $s0, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 672));
        ctx->pc = 0x16632Cu;
        goto label_16632c;
    }
    ctx->pc = 0x166324u;
    SET_GPR_U32(ctx, 31, 0x16632Cu);
    ctx->pc = 0x166328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166324u;
            // 0x166328: 0x260402a0  addiu       $a0, $s0, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16632Cu; }
        if (ctx->pc != 0x16632Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16632Cu; }
        if (ctx->pc != 0x16632Cu) { return; }
    }
    ctx->pc = 0x16632Cu;
label_16632c:
    // 0x16632c: 0xae0001e4  sw          $zero, 0x1E4($s0)
    ctx->pc = 0x16632cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 484), GPR_U32(ctx, 0));
label_166330:
    // 0x166330: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x166330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_166334:
    // 0x166334: 0xae0201e0  sw          $v0, 0x1E0($s0)
    ctx->pc = 0x166334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 2));
label_166338:
    // 0x166338: 0xc05a778  jal         func_169DE0
label_16633c:
    if (ctx->pc == 0x16633Cu) {
        ctx->pc = 0x16633Cu;
            // 0x16633c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x166340u;
        goto label_166340;
    }
    ctx->pc = 0x166338u;
    SET_GPR_U32(ctx, 31, 0x166340u);
    ctx->pc = 0x16633Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166338u;
            // 0x16633c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x169DE0u;
    if (runtime->hasFunction(0x169DE0u)) {
        auto targetFn = runtime->lookupFunction(0x169DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166340u; }
        if (ctx->pc != 0x166340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__7CObjectFv_0x169de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166340u; }
        if (ctx->pc != 0x166340u) { return; }
    }
    ctx->pc = 0x166340u;
label_166340:
    // 0x166340: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x166340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_166344:
    // 0x166344: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x166344u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_166348:
    // 0x166348: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x166348u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16634c:
    // 0x16634c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16634cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_166350:
    // 0x166350: 0x3e00008  jr          $ra
label_166354:
    if (ctx->pc == 0x166354u) {
        ctx->pc = 0x166354u;
            // 0x166354: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x166358u;
        goto label_fallthrough_0x166350;
    }
    ctx->pc = 0x166350u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166350u;
            // 0x166354: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x166350:
    ctx->pc = 0x166358u;
}
