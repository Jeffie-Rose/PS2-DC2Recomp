#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetSeSrcVolPan__4CMapFPiPfPfi
// Address: 0x15ff60 - 0x1600c4
void GetSeSrcVolPan__4CMapFPiPfPfi_0x15ff60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSeSrcVolPan__4CMapFPiPfPfi_0x15ff60");
#endif

    switch (ctx->pc) {
        case 0x15ff60u: goto label_15ff60;
        case 0x15ff64u: goto label_15ff64;
        case 0x15ff68u: goto label_15ff68;
        case 0x15ff6cu: goto label_15ff6c;
        case 0x15ff70u: goto label_15ff70;
        case 0x15ff74u: goto label_15ff74;
        case 0x15ff78u: goto label_15ff78;
        case 0x15ff7cu: goto label_15ff7c;
        case 0x15ff80u: goto label_15ff80;
        case 0x15ff84u: goto label_15ff84;
        case 0x15ff88u: goto label_15ff88;
        case 0x15ff8cu: goto label_15ff8c;
        case 0x15ff90u: goto label_15ff90;
        case 0x15ff94u: goto label_15ff94;
        case 0x15ff98u: goto label_15ff98;
        case 0x15ff9cu: goto label_15ff9c;
        case 0x15ffa0u: goto label_15ffa0;
        case 0x15ffa4u: goto label_15ffa4;
        case 0x15ffa8u: goto label_15ffa8;
        case 0x15ffacu: goto label_15ffac;
        case 0x15ffb0u: goto label_15ffb0;
        case 0x15ffb4u: goto label_15ffb4;
        case 0x15ffb8u: goto label_15ffb8;
        case 0x15ffbcu: goto label_15ffbc;
        case 0x15ffc0u: goto label_15ffc0;
        case 0x15ffc4u: goto label_15ffc4;
        case 0x15ffc8u: goto label_15ffc8;
        case 0x15ffccu: goto label_15ffcc;
        case 0x15ffd0u: goto label_15ffd0;
        case 0x15ffd4u: goto label_15ffd4;
        case 0x15ffd8u: goto label_15ffd8;
        case 0x15ffdcu: goto label_15ffdc;
        case 0x15ffe0u: goto label_15ffe0;
        case 0x15ffe4u: goto label_15ffe4;
        case 0x15ffe8u: goto label_15ffe8;
        case 0x15ffecu: goto label_15ffec;
        case 0x15fff0u: goto label_15fff0;
        case 0x15fff4u: goto label_15fff4;
        case 0x15fff8u: goto label_15fff8;
        case 0x15fffcu: goto label_15fffc;
        case 0x160000u: goto label_160000;
        case 0x160004u: goto label_160004;
        case 0x160008u: goto label_160008;
        case 0x16000cu: goto label_16000c;
        case 0x160010u: goto label_160010;
        case 0x160014u: goto label_160014;
        case 0x160018u: goto label_160018;
        case 0x16001cu: goto label_16001c;
        case 0x160020u: goto label_160020;
        case 0x160024u: goto label_160024;
        case 0x160028u: goto label_160028;
        case 0x16002cu: goto label_16002c;
        case 0x160030u: goto label_160030;
        case 0x160034u: goto label_160034;
        case 0x160038u: goto label_160038;
        case 0x16003cu: goto label_16003c;
        case 0x160040u: goto label_160040;
        case 0x160044u: goto label_160044;
        case 0x160048u: goto label_160048;
        case 0x16004cu: goto label_16004c;
        case 0x160050u: goto label_160050;
        case 0x160054u: goto label_160054;
        case 0x160058u: goto label_160058;
        case 0x16005cu: goto label_16005c;
        case 0x160060u: goto label_160060;
        case 0x160064u: goto label_160064;
        case 0x160068u: goto label_160068;
        case 0x16006cu: goto label_16006c;
        case 0x160070u: goto label_160070;
        case 0x160074u: goto label_160074;
        case 0x160078u: goto label_160078;
        case 0x16007cu: goto label_16007c;
        case 0x160080u: goto label_160080;
        case 0x160084u: goto label_160084;
        case 0x160088u: goto label_160088;
        case 0x16008cu: goto label_16008c;
        case 0x160090u: goto label_160090;
        case 0x160094u: goto label_160094;
        case 0x160098u: goto label_160098;
        case 0x16009cu: goto label_16009c;
        case 0x1600a0u: goto label_1600a0;
        case 0x1600a4u: goto label_1600a4;
        case 0x1600a8u: goto label_1600a8;
        case 0x1600acu: goto label_1600ac;
        case 0x1600b0u: goto label_1600b0;
        case 0x1600b4u: goto label_1600b4;
        case 0x1600b8u: goto label_1600b8;
        case 0x1600bcu: goto label_1600bc;
        case 0x1600c0u: goto label_1600c0;
        default: break;
    }

    ctx->pc = 0x15ff60u;

label_15ff60:
    // 0x15ff60: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x15ff60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_15ff64:
    // 0x15ff64: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x15ff64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_15ff68:
    // 0x15ff68: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x15ff68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_15ff6c:
    // 0x15ff6c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x15ff6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_15ff70:
    // 0x15ff70: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x15ff70u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15ff74:
    // 0x15ff74: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15ff74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_15ff78:
    // 0x15ff78: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15ff78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_15ff7c:
    // 0x15ff7c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x15ff7cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_15ff80:
    // 0x15ff80: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15ff80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_15ff84:
    // 0x15ff84: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x15ff84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_15ff88:
    // 0x15ff88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15ff88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_15ff8c:
    // 0x15ff8c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x15ff8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_15ff90:
    // 0x15ff90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15ff90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15ff94:
    // 0x15ff94: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x15ff94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_15ff98:
    // 0x15ff98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15ff98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_15ff9c:
    // 0x15ff9c: 0x27a500d8  addiu       $a1, $sp, 0xD8
    ctx->pc = 0x15ff9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_15ffa0:
    // 0x15ffa0: 0xc0575cc  jal         func_15D730
label_15ffa4:
    if (ctx->pc == 0x15FFA4u) {
        ctx->pc = 0x15FFA4u;
            // 0x15ffa4: 0xafa000d8  sw          $zero, 0xD8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
        ctx->pc = 0x15FFA8u;
        goto label_15ffa8;
    }
    ctx->pc = 0x15FFA0u;
    SET_GPR_U32(ctx, 31, 0x15FFA8u);
    ctx->pc = 0x15FFA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FFA0u;
            // 0x15ffa4: 0xafa000d8  sw          $zero, 0xD8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D730u;
    if (runtime->hasFunction(0x15D730u)) {
        auto targetFn = runtime->lookupFunction(0x15D730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FFA8u; }
        if (ctx->pc != 0x15FFA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateFuncCheck__4CMapFP15CFuncPointCheck_0x15d730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FFA8u; }
        if (ctx->pc != 0x15FFA8u) { return; }
    }
    ctx->pc = 0x15FFA8u;
label_15ffa8:
    // 0x15ffa8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x15ffa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_15ffac:
    // 0x15ffac: 0xc04c050  jal         func_130140
label_15ffb0:
    if (ctx->pc == 0x15FFB0u) {
        ctx->pc = 0x15FFB0u;
            // 0x15ffb0: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15FFB4u;
        goto label_15ffb4;
    }
    ctx->pc = 0x15FFACu;
    SET_GPR_U32(ctx, 31, 0x15FFB4u);
    ctx->pc = 0x15FFB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FFACu;
            // 0x15ffb0: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130140u;
    if (runtime->hasFunction(0x130140u)) {
        auto targetFn = runtime->lookupFunction(0x130140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FFB4u; }
        if (ctx->pc != 0x15FFB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgUnitMatrix__FPA4_f_0x130140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FFB4u; }
        if (ctx->pc != 0x15FFB4u) { return; }
    }
    ctx->pc = 0x15FFB4u;
label_15ffb4:
    // 0x15ffb4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x15ffb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_15ffb8:
    // 0x15ffb8: 0x26e50cb0  addiu       $a1, $s7, 0xCB0
    ctx->pc = 0x15ffb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 3248));
label_15ffbc:
    // 0x15ffbc: 0x27a600d8  addiu       $a2, $sp, 0xD8
    ctx->pc = 0x15ffbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_15ffc0:
    // 0x15ffc0: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x15ffc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_15ffc4:
    // 0x15ffc4: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x15ffc4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_15ffc8:
    // 0x15ffc8: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x15ffc8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15ffcc:
    // 0x15ffcc: 0xc0a7ae4  jal         func_29EB90
label_15ffd0:
    if (ctx->pc == 0x15FFD0u) {
        ctx->pc = 0x15FFD0u;
            // 0x15ffd0: 0x240502d  daddu       $t2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15FFD4u;
        goto label_15ffd4;
    }
    ctx->pc = 0x15FFCCu;
    SET_GPR_U32(ctx, 31, 0x15FFD4u);
    ctx->pc = 0x15FFD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FFCCu;
            // 0x15ffd0: 0x240502d  daddu       $t2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EB90u;
    if (runtime->hasFunction(0x29EB90u)) {
        auto targetFn = runtime->lookupFunction(0x29EB90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FFD4u; }
        if (ctx->pc != 0x15FFD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSeSrcVolPan__FPA4_fP14CFuncPointMngrP15CFuncPointCheckPiPfPfi_0x29eb90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FFD4u; }
        if (ctx->pc != 0x15FFD4u) { return; }
    }
    ctx->pc = 0x15FFD4u;
label_15ffd4:
    // 0x15ffd4: 0x8ef0032c  lw          $s0, 0x32C($s7)
    ctx->pc = 0x15ffd4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 812)));
label_15ffd8:
    // 0x15ffd8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x15ffd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_15ffdc:
    // 0x15ffdc: 0x2c2b021  addu        $s6, $s6, $v0
    ctx->pc = 0x15ffdcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_15ffe0:
    // 0x15ffe0: 0x2429023  subu        $s2, $s2, $v0
    ctx->pc = 0x15ffe0u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_15ffe4:
    // 0x15ffe4: 0x2a3a821  addu        $s5, $s5, $v1
    ctx->pc = 0x15ffe4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_15ffe8:
    // 0x15ffe8: 0x283a021  addu        $s4, $s4, $v1
    ctx->pc = 0x15ffe8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_15ffec:
    // 0x15ffec: 0x2639821  addu        $s3, $s3, $v1
    ctx->pc = 0x15ffecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_15fff0:
    // 0x15fff0: 0x10000025  b           . + 4 + (0x25 << 2)
label_15fff4:
    if (ctx->pc == 0x15FFF4u) {
        ctx->pc = 0x15FFF4u;
            // 0x15fff4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15FFF8u;
        goto label_15fff8;
    }
    ctx->pc = 0x15FFF0u;
    {
        const bool branch_taken_0x15fff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FFF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15FFF0u;
            // 0x15fff4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fff0) {
            ctx->pc = 0x160088u;
            goto label_160088;
        }
    }
    ctx->pc = 0x15FFF8u;
label_15fff8:
    // 0x15fff8: 0x82020070  lb          $v0, 0x70($s0)
    ctx->pc = 0x15fff8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 112)));
label_15fffc:
    // 0x15fffc: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x15fffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_160000:
    // 0x160000: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x160000u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_160004:
    // 0x160004: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_160008:
    if (ctx->pc == 0x160008u) {
        ctx->pc = 0x16000Cu;
        goto label_16000c;
    }
    ctx->pc = 0x160004u;
    {
        const bool branch_taken_0x160004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x160004) {
            ctx->pc = 0x160080u;
            goto label_160080;
        }
    }
    ctx->pc = 0x16000Cu;
label_16000c:
    // 0x16000c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x16000cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_160010:
    // 0x160010: 0x8f39006c  lw          $t9, 0x6C($t9)
    ctx->pc = 0x160010u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 108)));
label_160014:
    // 0x160014: 0x320f809  jalr        $t9
label_160018:
    if (ctx->pc == 0x160018u) {
        ctx->pc = 0x160018u;
            // 0x160018: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16001Cu;
        goto label_16001c;
    }
    ctx->pc = 0x160014u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16001Cu);
        ctx->pc = 0x160018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160014u;
            // 0x160018: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16001Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16001Cu; }
            if (ctx->pc != 0x16001Cu) { return; }
        }
        }
    }
    ctx->pc = 0x16001Cu;
label_16001c:
    // 0x16001c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_160020:
    if (ctx->pc == 0x160020u) {
        ctx->pc = 0x160024u;
        goto label_160024;
    }
    ctx->pc = 0x16001Cu;
    {
        const bool branch_taken_0x16001c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16001c) {
            ctx->pc = 0x160080u;
            goto label_160080;
        }
    }
    ctx->pc = 0x160024u;
label_160024:
    // 0x160024: 0x8e0202b0  lw          $v0, 0x2B0($s0)
    ctx->pc = 0x160024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 688)));
label_160028:
    // 0x160028: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x160028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_16002c:
    // 0x16002c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_160030:
    if (ctx->pc == 0x160030u) {
        ctx->pc = 0x160030u;
            // 0x160030: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x160034u;
        goto label_160034;
    }
    ctx->pc = 0x16002Cu;
    {
        const bool branch_taken_0x16002c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16002Cu;
            // 0x160030: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16002c) {
            ctx->pc = 0x160080u;
            goto label_160080;
        }
    }
    ctx->pc = 0x160034u;
label_160034:
    // 0x160034: 0xc059cc0  jal         func_167300
label_160038:
    if (ctx->pc == 0x160038u) {
        ctx->pc = 0x160038u;
            // 0x160038: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x16003Cu;
        goto label_16003c;
    }
    ctx->pc = 0x160034u;
    SET_GPR_U32(ctx, 31, 0x16003Cu);
    ctx->pc = 0x160038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160034u;
            // 0x160038: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167300u;
    if (runtime->hasFunction(0x167300u)) {
        auto targetFn = runtime->lookupFunction(0x167300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16003Cu; }
        if (ctx->pc != 0x16003Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLWMatrix__9CMapPartsFPA4_f_0x167300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16003Cu; }
        if (ctx->pc != 0x16003Cu) { return; }
    }
    ctx->pc = 0x16003Cu;
label_16003c:
    // 0x16003c: 0x1e400003  bgtz        $s2, . + 4 + (0x3 << 2)
label_160040:
    if (ctx->pc == 0x160040u) {
        ctx->pc = 0x160040u;
            // 0x160040: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x160044u;
        goto label_160044;
    }
    ctx->pc = 0x16003Cu;
    {
        const bool branch_taken_0x16003c = (GPR_S32(ctx, 18) > 0);
        ctx->pc = 0x160040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16003Cu;
            // 0x160040: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16003c) {
            ctx->pc = 0x16004Cu;
            goto label_16004c;
        }
    }
    ctx->pc = 0x160044u;
label_160044:
    // 0x160044: 0x10000014  b           . + 4 + (0x14 << 2)
label_160048:
    if (ctx->pc == 0x160048u) {
        ctx->pc = 0x160048u;
            // 0x160048: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16004Cu;
        goto label_16004c;
    }
    ctx->pc = 0x160044u;
    {
        const bool branch_taken_0x160044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160044u;
            // 0x160048: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160044) {
            ctx->pc = 0x160098u;
            goto label_160098;
        }
    }
    ctx->pc = 0x16004Cu;
label_16004c:
    // 0x16004c: 0x260502b0  addiu       $a1, $s0, 0x2B0
    ctx->pc = 0x16004cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 688));
label_160050:
    // 0x160050: 0x27a600d8  addiu       $a2, $sp, 0xD8
    ctx->pc = 0x160050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_160054:
    // 0x160054: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x160054u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_160058:
    // 0x160058: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x160058u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16005c:
    // 0x16005c: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x16005cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_160060:
    // 0x160060: 0xc0a7ae4  jal         func_29EB90
label_160064:
    if (ctx->pc == 0x160064u) {
        ctx->pc = 0x160064u;
            // 0x160064: 0x240502d  daddu       $t2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x160068u;
        goto label_160068;
    }
    ctx->pc = 0x160060u;
    SET_GPR_U32(ctx, 31, 0x160068u);
    ctx->pc = 0x160064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160060u;
            // 0x160064: 0x240502d  daddu       $t2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EB90u;
    if (runtime->hasFunction(0x29EB90u)) {
        auto targetFn = runtime->lookupFunction(0x29EB90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160068u; }
        if (ctx->pc != 0x160068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSeSrcVolPan__FPA4_fP14CFuncPointMngrP15CFuncPointCheckPiPfPfi_0x29eb90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160068u; }
        if (ctx->pc != 0x160068u) { return; }
    }
    ctx->pc = 0x160068u;
label_160068:
    // 0x160068: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x160068u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_16006c:
    // 0x16006c: 0x2c2b021  addu        $s6, $s6, $v0
    ctx->pc = 0x16006cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_160070:
    // 0x160070: 0x2429023  subu        $s2, $s2, $v0
    ctx->pc = 0x160070u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_160074:
    // 0x160074: 0x2a3a821  addu        $s5, $s5, $v1
    ctx->pc = 0x160074u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_160078:
    // 0x160078: 0x283a021  addu        $s4, $s4, $v1
    ctx->pc = 0x160078u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_16007c:
    // 0x16007c: 0x2639821  addu        $s3, $s3, $v1
    ctx->pc = 0x16007cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_160080:
    // 0x160080: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x160080u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_160084:
    // 0x160084: 0x26100310  addiu       $s0, $s0, 0x310
    ctx->pc = 0x160084u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
label_160088:
    // 0x160088: 0x8ee20328  lw          $v0, 0x328($s7)
    ctx->pc = 0x160088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 808)));
label_16008c:
    // 0x16008c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x16008cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_160090:
    // 0x160090: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
label_160094:
    if (ctx->pc == 0x160094u) {
        ctx->pc = 0x160094u;
            // 0x160094: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x160098u;
        goto label_160098;
    }
    ctx->pc = 0x160090u;
    {
        const bool branch_taken_0x160090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x160094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160090u;
            // 0x160094: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160090) {
            ctx->pc = 0x15FFF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15fff8;
        }
    }
    ctx->pc = 0x160098u;
label_160098:
    // 0x160098: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x160098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_16009c:
    // 0x16009c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x16009cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1600a0:
    // 0x1600a0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1600a0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1600a4:
    // 0x1600a4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1600a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1600a8:
    // 0x1600a8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1600a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1600ac:
    // 0x1600ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1600acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1600b0:
    // 0x1600b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1600b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1600b4:
    // 0x1600b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1600b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1600b8:
    // 0x1600b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1600b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1600bc:
    // 0x1600bc: 0x3e00008  jr          $ra
label_1600c0:
    if (ctx->pc == 0x1600C0u) {
        ctx->pc = 0x1600C0u;
            // 0x1600c0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x1600C4u;
        goto label_fallthrough_0x1600bc;
    }
    ctx->pc = 0x1600BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1600C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1600BCu;
            // 0x1600c0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1600bc:
    ctx->pc = 0x1600C4u;
}
