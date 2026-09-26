#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Clear__12CSceneCmrSeqFv
// Address: 0x259230 - 0x2593b8
void Clear__12CSceneCmrSeqFv_0x259230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Clear__12CSceneCmrSeqFv_0x259230");
#endif

    switch (ctx->pc) {
        case 0x25926cu: goto label_25926c;
        case 0x259274u: goto label_259274;
        case 0x259298u: goto label_259298;
        case 0x2592a8u: goto label_2592a8;
        case 0x2592bcu: goto label_2592bc;
        case 0x2592c4u: goto label_2592c4;
        case 0x2592d8u: goto label_2592d8;
        case 0x2592e0u: goto label_2592e0;
        case 0x2592e8u: goto label_2592e8;
        case 0x2592f0u: goto label_2592f0;
        case 0x2592fcu: goto label_2592fc;
        case 0x259304u: goto label_259304;
        case 0x25930cu: goto label_25930c;
        case 0x259318u: goto label_259318;
        case 0x259320u: goto label_259320;
        case 0x259328u: goto label_259328;
        case 0x259330u: goto label_259330;
        case 0x259378u: goto label_259378;
        case 0x259384u: goto label_259384;
        default: break;
    }

    ctx->pc = 0x259230u;

    // 0x259230: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x259230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x259234: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x259234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x259238: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x259238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25923c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25923cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x259240: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x259240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x259244: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x259244u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x259248: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x259248u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25924c: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x25924cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x259250: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x259250u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x259254: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x259254u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x259258: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x259258u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x25925c: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x25925cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x259260: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x259260u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x259264: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x259264u;
    SET_GPR_U32(ctx, 31, 0x25926Cu);
    ctx->pc = 0x259268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259264u;
            // 0x259268: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25926Cu; }
        if (ctx->pc != 0x25926Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25926Cu; }
        if (ctx->pc != 0x25926Cu) { return; }
    }
    ctx->pc = 0x25926Cu;
label_25926c:
    // 0x25926c: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x25926Cu;
    SET_GPR_U32(ctx, 31, 0x259274u);
    ctx->pc = 0x259270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25926Cu;
            // 0x259270: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259274u; }
        if (ctx->pc != 0x259274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259274u; }
        if (ctx->pc != 0x259274u) { return; }
    }
    ctx->pc = 0x259274u;
label_259274:
    // 0x259274: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x259274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
    // 0x259278: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x259278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25927c: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x25927cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    // 0x259280: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x259280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x259284: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x259284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x259288: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x259288u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    // 0x25928c: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x25928cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    // 0x259290: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x259290u;
    SET_GPR_U32(ctx, 31, 0x259298u);
    ctx->pc = 0x259294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259290u;
            // 0x259294: 0xae000084  sw          $zero, 0x84($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259298u; }
        if (ctx->pc != 0x259298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259298u; }
        if (ctx->pc != 0x259298u) { return; }
    }
    ctx->pc = 0x259298u;
label_259298:
    // 0x259298: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x259298u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x25929c: 0x260400ac  addiu       $a0, $s0, 0xAC
    ctx->pc = 0x25929cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 172));
    // 0x2592a0: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2592A0u;
    SET_GPR_U32(ctx, 31, 0x2592A8u);
    ctx->pc = 0x2592A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2592A0u;
            // 0x2592a4: 0x24a5c428  addiu       $a1, $a1, -0x3BD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2592A8u; }
        if (ctx->pc != 0x2592A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2592A8u; }
        if (ctx->pc != 0x2592A8u) { return; }
    }
    ctx->pc = 0x2592A8u;
label_2592a8:
    // 0x2592a8: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x2592a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x2592ac: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x2592acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x2592b0: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x2592b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x2592b4: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x2592B4u;
    SET_GPR_U32(ctx, 31, 0x2592BCu);
    ctx->pc = 0x2592B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2592B4u;
            // 0x2592b8: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2592BCu; }
        if (ctx->pc != 0x2592BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2592BCu; }
        if (ctx->pc != 0x2592BCu) { return; }
    }
    ctx->pc = 0x2592BCu;
label_2592bc:
    // 0x2592bc: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x2592BCu;
    SET_GPR_U32(ctx, 31, 0x2592C4u);
    ctx->pc = 0x2592C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2592BCu;
            // 0x2592c0: 0x260400e0  addiu       $a0, $s0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2592C4u; }
        if (ctx->pc != 0x2592C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2592C4u; }
        if (ctx->pc != 0x2592C4u) { return; }
    }
    ctx->pc = 0x2592C4u;
label_2592c4:
    // 0x2592c4: 0xae0000fc  sw          $zero, 0xFC($s0)
    ctx->pc = 0x2592c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 0));
    // 0x2592c8: 0x26040100  addiu       $a0, $s0, 0x100
    ctx->pc = 0x2592c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x2592cc: 0xae0000f8  sw          $zero, 0xF8($s0)
    ctx->pc = 0x2592ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 0));
    // 0x2592d0: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x2592D0u;
    SET_GPR_U32(ctx, 31, 0x2592D8u);
    ctx->pc = 0x2592D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2592D0u;
            // 0x2592d4: 0xae0000f0  sw          $zero, 0xF0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2592D8u; }
        if (ctx->pc != 0x2592D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2592D8u; }
        if (ctx->pc != 0x2592D8u) { return; }
    }
    ctx->pc = 0x2592D8u;
label_2592d8:
    // 0x2592d8: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x2592D8u;
    SET_GPR_U32(ctx, 31, 0x2592E0u);
    ctx->pc = 0x2592DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2592D8u;
            // 0x2592dc: 0x26040110  addiu       $a0, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2592E0u; }
        if (ctx->pc != 0x2592E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2592E0u; }
        if (ctx->pc != 0x2592E0u) { return; }
    }
    ctx->pc = 0x2592E0u;
label_2592e0:
    // 0x2592e0: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x2592E0u;
    SET_GPR_U32(ctx, 31, 0x2592E8u);
    ctx->pc = 0x2592E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2592E0u;
            // 0x2592e4: 0x26040120  addiu       $a0, $s0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2592E8u; }
        if (ctx->pc != 0x2592E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2592E8u; }
        if (ctx->pc != 0x2592E8u) { return; }
    }
    ctx->pc = 0x2592E8u;
label_2592e8:
    // 0x2592e8: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x2592E8u;
    SET_GPR_U32(ctx, 31, 0x2592F0u);
    ctx->pc = 0x2592ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2592E8u;
            // 0x2592ec: 0x26040130  addiu       $a0, $s0, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2592F0u; }
        if (ctx->pc != 0x2592F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2592F0u; }
        if (ctx->pc != 0x2592F0u) { return; }
    }
    ctx->pc = 0x2592F0u;
label_2592f0:
    // 0x2592f0: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x2592f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2592f4: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x2592F4u;
    SET_GPR_U32(ctx, 31, 0x2592FCu);
    ctx->pc = 0x2592F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2592F4u;
            // 0x2592f8: 0xae000140  sw          $zero, 0x140($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2592FCu; }
        if (ctx->pc != 0x2592FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2592FCu; }
        if (ctx->pc != 0x2592FCu) { return; }
    }
    ctx->pc = 0x2592FCu;
label_2592fc:
    // 0x2592fc: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x2592FCu;
    SET_GPR_U32(ctx, 31, 0x259304u);
    ctx->pc = 0x259300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2592FCu;
            // 0x259300: 0x26040160  addiu       $a0, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259304u; }
        if (ctx->pc != 0x259304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259304u; }
        if (ctx->pc != 0x259304u) { return; }
    }
    ctx->pc = 0x259304u;
label_259304:
    // 0x259304: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x259304u;
    SET_GPR_U32(ctx, 31, 0x25930Cu);
    ctx->pc = 0x259308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259304u;
            // 0x259308: 0x26040170  addiu       $a0, $s0, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25930Cu; }
        if (ctx->pc != 0x25930Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25930Cu; }
        if (ctx->pc != 0x25930Cu) { return; }
    }
    ctx->pc = 0x25930Cu;
label_25930c:
    // 0x25930c: 0x260401c0  addiu       $a0, $s0, 0x1C0
    ctx->pc = 0x25930cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    // 0x259310: 0xc0959c4  jal         func_256710
    ctx->pc = 0x259310u;
    SET_GPR_U32(ctx, 31, 0x259318u);
    ctx->pc = 0x259314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259310u;
            // 0x259314: 0xae000180  sw          $zero, 0x180($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x256710u;
    if (runtime->hasFunction(0x256710u)) {
        auto targetFn = runtime->lookupFunction(0x256710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259318u; }
        if (ctx->pc != 0x259318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__10CCameraPasFv_0x256710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259318u; }
        if (ctx->pc != 0x259318u) { return; }
    }
    ctx->pc = 0x259318u;
label_259318:
    // 0x259318: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x259318u;
    SET_GPR_U32(ctx, 31, 0x259320u);
    ctx->pc = 0x25931Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259318u;
            // 0x25931c: 0x26040190  addiu       $a0, $s0, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259320u; }
        if (ctx->pc != 0x259320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259320u; }
        if (ctx->pc != 0x259320u) { return; }
    }
    ctx->pc = 0x259320u;
label_259320:
    // 0x259320: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x259320u;
    SET_GPR_U32(ctx, 31, 0x259328u);
    ctx->pc = 0x259324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259320u;
            // 0x259324: 0x260401a0  addiu       $a0, $s0, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259328u; }
        if (ctx->pc != 0x259328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259328u; }
        if (ctx->pc != 0x259328u) { return; }
    }
    ctx->pc = 0x259328u;
label_259328:
    // 0x259328: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x259328u;
    SET_GPR_U32(ctx, 31, 0x259330u);
    ctx->pc = 0x25932Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259328u;
            // 0x25932c: 0x260401b0  addiu       $a0, $s0, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259330u; }
        if (ctx->pc != 0x259330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259330u; }
        if (ctx->pc != 0x259330u) { return; }
    }
    ctx->pc = 0x259330u;
label_259330:
    // 0x259330: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x259330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x259334: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x259334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x259338: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x259338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x25933c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x25933cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x259340: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x259340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x259344: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x259344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x259348: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x259348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x25934c: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x25934cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x259350: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x259350u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x259354: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x259354u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x259358: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x259358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25935c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x25935Cu;
    {
        const bool branch_taken_0x25935c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25935c) {
            ctx->pc = 0x2593A0u;
            goto label_2593a0;
        }
    }
    ctx->pc = 0x259364u;
    // 0x259364: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x259364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x259368: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x259368u;
    {
        const bool branch_taken_0x259368 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x25936Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259368u;
            // 0x25936c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259368) {
            ctx->pc = 0x2593A0u;
            goto label_2593a0;
        }
    }
    ctx->pc = 0x259370u;
    // 0x259370: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x259370u;
    {
        const bool branch_taken_0x259370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259370u;
            // 0x259374: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259370) {
            ctx->pc = 0x25938Cu;
            goto label_25938c;
        }
    }
    ctx->pc = 0x259378u;
label_259378:
    // 0x259378: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x259378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25937c: 0xc096440  jal         func_259100
    ctx->pc = 0x25937Cu;
    SET_GPR_U32(ctx, 31, 0x259384u);
    ctx->pc = 0x259380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25937Cu;
            // 0x259380: 0x522021  addu        $a0, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259100u;
    if (runtime->hasFunction(0x259100u)) {
        auto targetFn = runtime->lookupFunction(0x259100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259384u; }
        if (ctx->pc != 0x259384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitSceneCmrSeq__FP12_SEN_CMR_SEQ_0x259100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259384u; }
        if (ctx->pc != 0x259384u) { return; }
    }
    ctx->pc = 0x259384u;
label_259384:
    // 0x259384: 0x26520060  addiu       $s2, $s2, 0x60
    ctx->pc = 0x259384u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x259388: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x259388u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_25938c:
    // 0x25938c: 0x0  nop
    ctx->pc = 0x25938cu;
    // NOP
    // 0x259390: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x259390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x259394: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x259394u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x259398: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x259398u;
    {
        const bool branch_taken_0x259398 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x259398) {
            ctx->pc = 0x259378u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_259378;
        }
    }
    ctx->pc = 0x2593A0u;
label_2593a0:
    // 0x2593a0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2593a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2593a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2593a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2593a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2593a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2593ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2593acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2593b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2593B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2593B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2593B0u;
            // 0x2593b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2593B8u;
}
