#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadChrFile__11CCharacter2FPUiPcP9mgCMemoryP9mgCMemoryP9mgCMemoryiP11CCharacter2i
// Address: 0x175230 - 0x175340
void LoadChrFile__11CCharacter2FPUiPcP9mgCMemoryP9mgCMemoryP9mgCMemoryiP11CCharacter2i_0x175230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadChrFile__11CCharacter2FPUiPcP9mgCMemoryP9mgCMemoryP9mgCMemoryiP11CCharacter2i_0x175230");
#endif

    switch (ctx->pc) {
        case 0x175230u: goto label_175230;
        case 0x175234u: goto label_175234;
        case 0x175238u: goto label_175238;
        case 0x17523cu: goto label_17523c;
        case 0x175240u: goto label_175240;
        case 0x175244u: goto label_175244;
        case 0x175248u: goto label_175248;
        case 0x17524cu: goto label_17524c;
        case 0x175250u: goto label_175250;
        case 0x175254u: goto label_175254;
        case 0x175258u: goto label_175258;
        case 0x17525cu: goto label_17525c;
        case 0x175260u: goto label_175260;
        case 0x175264u: goto label_175264;
        case 0x175268u: goto label_175268;
        case 0x17526cu: goto label_17526c;
        case 0x175270u: goto label_175270;
        case 0x175274u: goto label_175274;
        case 0x175278u: goto label_175278;
        case 0x17527cu: goto label_17527c;
        case 0x175280u: goto label_175280;
        case 0x175284u: goto label_175284;
        case 0x175288u: goto label_175288;
        case 0x17528cu: goto label_17528c;
        case 0x175290u: goto label_175290;
        case 0x175294u: goto label_175294;
        case 0x175298u: goto label_175298;
        case 0x17529cu: goto label_17529c;
        case 0x1752a0u: goto label_1752a0;
        case 0x1752a4u: goto label_1752a4;
        case 0x1752a8u: goto label_1752a8;
        case 0x1752acu: goto label_1752ac;
        case 0x1752b0u: goto label_1752b0;
        case 0x1752b4u: goto label_1752b4;
        case 0x1752b8u: goto label_1752b8;
        case 0x1752bcu: goto label_1752bc;
        case 0x1752c0u: goto label_1752c0;
        case 0x1752c4u: goto label_1752c4;
        case 0x1752c8u: goto label_1752c8;
        case 0x1752ccu: goto label_1752cc;
        case 0x1752d0u: goto label_1752d0;
        case 0x1752d4u: goto label_1752d4;
        case 0x1752d8u: goto label_1752d8;
        case 0x1752dcu: goto label_1752dc;
        case 0x1752e0u: goto label_1752e0;
        case 0x1752e4u: goto label_1752e4;
        case 0x1752e8u: goto label_1752e8;
        case 0x1752ecu: goto label_1752ec;
        case 0x1752f0u: goto label_1752f0;
        case 0x1752f4u: goto label_1752f4;
        case 0x1752f8u: goto label_1752f8;
        case 0x1752fcu: goto label_1752fc;
        case 0x175300u: goto label_175300;
        case 0x175304u: goto label_175304;
        case 0x175308u: goto label_175308;
        case 0x17530cu: goto label_17530c;
        case 0x175310u: goto label_175310;
        case 0x175314u: goto label_175314;
        case 0x175318u: goto label_175318;
        case 0x17531cu: goto label_17531c;
        case 0x175320u: goto label_175320;
        case 0x175324u: goto label_175324;
        case 0x175328u: goto label_175328;
        case 0x17532cu: goto label_17532c;
        case 0x175330u: goto label_175330;
        case 0x175334u: goto label_175334;
        case 0x175338u: goto label_175338;
        case 0x17533cu: goto label_17533c;
        default: break;
    }

    ctx->pc = 0x175230u;

label_175230:
    // 0x175230: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x175230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_175234:
    // 0x175234: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x175234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_175238:
    // 0x175238: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x175238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_17523c:
    // 0x17523c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x17523cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_175240:
    // 0x175240: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x175240u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_175244:
    // 0x175244: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x175244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_175248:
    // 0x175248: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x175248u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_17524c:
    // 0x17524c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x17524cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_175250:
    // 0x175250: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x175250u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_175254:
    // 0x175254: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x175254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_175258:
    // 0x175258: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x175258u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17525c:
    // 0x17525c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x17525cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_175260:
    // 0x175260: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x175260u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_175264:
    // 0x175264: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x175264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_175268:
    // 0x175268: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x175268u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_17526c:
    // 0x17526c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17526cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_175270:
    // 0x175270: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x175270u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_175274:
    // 0x175274: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x175274u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_175278:
    // 0x175278: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x175278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17527c:
    // 0x17527c: 0xc05d290  jal         func_174A40
label_175280:
    if (ctx->pc == 0x175280u) {
        ctx->pc = 0x175280u;
            // 0x175280: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x175284u;
        goto label_175284;
    }
    ctx->pc = 0x17527Cu;
    SET_GPR_U32(ctx, 31, 0x175284u);
    ctx->pc = 0x175280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17527Cu;
            // 0x175280: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174A40u;
    if (runtime->hasFunction(0x174A40u)) {
        auto targetFn = runtime->lookupFunction(0x174A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175284u; }
        if (ctx->pc != 0x175284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetKeyListIndexPtr__11CCharacter2FiPi_0x174a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175284u; }
        if (ctx->pc != 0x175284u) { return; }
    }
    ctx->pc = 0x175284u;
label_175284:
    // 0x175284: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x175284u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_175288:
    // 0x175288: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x175288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_17528c:
    // 0x17528c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17528cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_175290:
    // 0x175290: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x175290u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_175294:
    // 0x175294: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x175294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_175298:
    // 0x175298: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x175298u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_17529c:
    // 0x17529c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x17529cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1752a0:
    // 0x1752a0: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x1752a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1752a4:
    // 0x1752a4: 0x2e0582d  daddu       $t3, $s7, $zero
    ctx->pc = 0x1752a4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1752a8:
    // 0x1752a8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1752a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1752ac:
    // 0x1752ac: 0xc05d588  jal         func_175620
label_1752b0:
    if (ctx->pc == 0x1752B0u) {
        ctx->pc = 0x1752B0u;
            // 0x1752b0: 0xffa20000  sd          $v0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
        ctx->pc = 0x1752B4u;
        goto label_1752b4;
    }
    ctx->pc = 0x1752ACu;
    SET_GPR_U32(ctx, 31, 0x1752B4u);
    ctx->pc = 0x1752B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1752ACu;
            // 0x1752b0: 0xffa20000  sd          $v0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175620u;
    if (runtime->hasFunction(0x175620u)) {
        auto targetFn = runtime->lookupFunction(0x175620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1752B4u; }
        if (ctx->pc != 0x1752B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ScanInfoFile__FP11CCharacter2PUiPcP9mgCMemoryP9mgCMemoryP9mgCMemoryiP11CCharacter2i_0x175620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1752B4u; }
        if (ctx->pc != 0x1752B4u) { return; }
    }
    ctx->pc = 0x1752B4u;
label_1752b4:
    // 0x1752b4: 0x16000017  bnez        $s0, . + 4 + (0x17 << 2)
label_1752b8:
    if (ctx->pc == 0x1752B8u) {
        ctx->pc = 0x1752B8u;
            // 0x1752b8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1752BCu;
        goto label_1752bc;
    }
    ctx->pc = 0x1752B4u;
    {
        const bool branch_taken_0x1752b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1752B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1752B4u;
            // 0x1752b8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1752b4) {
            ctx->pc = 0x175314u;
            goto label_175314;
        }
    }
    ctx->pc = 0x1752BCu;
label_1752bc:
    // 0x1752bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1752bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1752c0:
    // 0x1752c0: 0xc05d290  jal         func_174A40
label_1752c4:
    if (ctx->pc == 0x1752C4u) {
        ctx->pc = 0x1752C4u;
            // 0x1752c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1752C8u;
        goto label_1752c8;
    }
    ctx->pc = 0x1752C0u;
    SET_GPR_U32(ctx, 31, 0x1752C8u);
    ctx->pc = 0x1752C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1752C0u;
            // 0x1752c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174A40u;
    if (runtime->hasFunction(0x174A40u)) {
        auto targetFn = runtime->lookupFunction(0x174A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1752C8u; }
        if (ctx->pc != 0x1752C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetKeyListIndexPtr__11CCharacter2FiPi_0x174a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1752C8u; }
        if (ctx->pc != 0x1752C8u) { return; }
    }
    ctx->pc = 0x1752C8u;
label_1752c8:
    // 0x1752c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1752c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1752cc:
    // 0x1752cc: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_1752d0:
    if (ctx->pc == 0x1752D0u) {
        ctx->pc = 0x1752D4u;
        goto label_1752d4;
    }
    ctx->pc = 0x1752CCu;
    {
        const bool branch_taken_0x1752cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1752cc) {
            ctx->pc = 0x1752E8u;
            goto label_1752e8;
        }
    }
    ctx->pc = 0x1752D4u;
label_1752d4:
    // 0x1752d4: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x1752d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1752d8:
    // 0x1752d8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1752d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1752dc:
    // 0x1752dc: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x1752dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_1752e0:
    // 0x1752e0: 0x320f809  jalr        $t9
label_1752e4:
    if (ctx->pc == 0x1752E4u) {
        ctx->pc = 0x1752E4u;
            // 0x1752e4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1752E8u;
        goto label_1752e8;
    }
    ctx->pc = 0x1752E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1752E8u);
        ctx->pc = 0x1752E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1752E0u;
            // 0x1752e4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1752E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1752E8u; }
            if (ctx->pc != 0x1752E8u) { return; }
        }
        }
    }
    ctx->pc = 0x1752E8u;
label_1752e8:
    // 0x1752e8: 0x8ea30368  lw          $v1, 0x368($s5)
    ctx->pc = 0x1752e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 872)));
label_1752ec:
    // 0x1752ec: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_1752f0:
    if (ctx->pc == 0x1752F0u) {
        ctx->pc = 0x1752F4u;
        goto label_1752f4;
    }
    ctx->pc = 0x1752ECu;
    {
        const bool branch_taken_0x1752ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1752ec) {
            ctx->pc = 0x175314u;
            goto label_175314;
        }
    }
    ctx->pc = 0x1752F4u;
label_1752f4:
    // 0x1752f4: 0xaea30394  sw          $v1, 0x394($s5)
    ctx->pc = 0x1752f4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 916), GPR_U32(ctx, 3));
label_1752f8:
    // 0x1752f8: 0x8ea30368  lw          $v1, 0x368($s5)
    ctx->pc = 0x1752f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 872)));
label_1752fc:
    // 0x1752fc: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x1752fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_175300:
    // 0x175300: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x175300u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_175304:
    // 0x175304: 0xe6a00388  swc1        $f0, 0x388($s5)
    ctx->pc = 0x175304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 904), bits); }
label_175308:
    // 0x175308: 0x8ea30368  lw          $v1, 0x368($s5)
    ctx->pc = 0x175308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 872)));
label_17530c:
    // 0x17530c: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x17530cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_175310:
    // 0x175310: 0xe6a00390  swc1        $f0, 0x390($s5)
    ctx->pc = 0x175310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 912), bits); }
label_175314:
    // 0x175314: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x175314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_175318:
    // 0x175318: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x175318u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_17531c:
    // 0x17531c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x17531cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_175320:
    // 0x175320: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x175320u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_175324:
    // 0x175324: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x175324u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_175328:
    // 0x175328: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x175328u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_17532c:
    // 0x17532c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x17532cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_175330:
    // 0x175330: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x175330u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_175334:
    // 0x175334: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x175334u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_175338:
    // 0x175338: 0x3e00008  jr          $ra
label_17533c:
    if (ctx->pc == 0x17533Cu) {
        ctx->pc = 0x17533Cu;
            // 0x17533c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x175340u;
        goto label_fallthrough_0x175338;
    }
    ctx->pc = 0x175338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17533Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175338u;
            // 0x17533c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x175338:
    ctx->pc = 0x175340u;
}
