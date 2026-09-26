#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuItemChrLoadEndCheck__FP17MENU_BGREAD_INFO2P12CActionCharaP9mgCMemoryi
// Address: 0x2ba200 - 0x2ba2f8
void MenuItemChrLoadEndCheck__FP17MENU_BGREAD_INFO2P12CActionCharaP9mgCMemoryi_0x2ba200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuItemChrLoadEndCheck__FP17MENU_BGREAD_INFO2P12CActionCharaP9mgCMemoryi_0x2ba200");
#endif

    switch (ctx->pc) {
        case 0x2ba200u: goto label_2ba200;
        case 0x2ba204u: goto label_2ba204;
        case 0x2ba208u: goto label_2ba208;
        case 0x2ba20cu: goto label_2ba20c;
        case 0x2ba210u: goto label_2ba210;
        case 0x2ba214u: goto label_2ba214;
        case 0x2ba218u: goto label_2ba218;
        case 0x2ba21cu: goto label_2ba21c;
        case 0x2ba220u: goto label_2ba220;
        case 0x2ba224u: goto label_2ba224;
        case 0x2ba228u: goto label_2ba228;
        case 0x2ba22cu: goto label_2ba22c;
        case 0x2ba230u: goto label_2ba230;
        case 0x2ba234u: goto label_2ba234;
        case 0x2ba238u: goto label_2ba238;
        case 0x2ba23cu: goto label_2ba23c;
        case 0x2ba240u: goto label_2ba240;
        case 0x2ba244u: goto label_2ba244;
        case 0x2ba248u: goto label_2ba248;
        case 0x2ba24cu: goto label_2ba24c;
        case 0x2ba250u: goto label_2ba250;
        case 0x2ba254u: goto label_2ba254;
        case 0x2ba258u: goto label_2ba258;
        case 0x2ba25cu: goto label_2ba25c;
        case 0x2ba260u: goto label_2ba260;
        case 0x2ba264u: goto label_2ba264;
        case 0x2ba268u: goto label_2ba268;
        case 0x2ba26cu: goto label_2ba26c;
        case 0x2ba270u: goto label_2ba270;
        case 0x2ba274u: goto label_2ba274;
        case 0x2ba278u: goto label_2ba278;
        case 0x2ba27cu: goto label_2ba27c;
        case 0x2ba280u: goto label_2ba280;
        case 0x2ba284u: goto label_2ba284;
        case 0x2ba288u: goto label_2ba288;
        case 0x2ba28cu: goto label_2ba28c;
        case 0x2ba290u: goto label_2ba290;
        case 0x2ba294u: goto label_2ba294;
        case 0x2ba298u: goto label_2ba298;
        case 0x2ba29cu: goto label_2ba29c;
        case 0x2ba2a0u: goto label_2ba2a0;
        case 0x2ba2a4u: goto label_2ba2a4;
        case 0x2ba2a8u: goto label_2ba2a8;
        case 0x2ba2acu: goto label_2ba2ac;
        case 0x2ba2b0u: goto label_2ba2b0;
        case 0x2ba2b4u: goto label_2ba2b4;
        case 0x2ba2b8u: goto label_2ba2b8;
        case 0x2ba2bcu: goto label_2ba2bc;
        case 0x2ba2c0u: goto label_2ba2c0;
        case 0x2ba2c4u: goto label_2ba2c4;
        case 0x2ba2c8u: goto label_2ba2c8;
        case 0x2ba2ccu: goto label_2ba2cc;
        case 0x2ba2d0u: goto label_2ba2d0;
        case 0x2ba2d4u: goto label_2ba2d4;
        case 0x2ba2d8u: goto label_2ba2d8;
        case 0x2ba2dcu: goto label_2ba2dc;
        case 0x2ba2e0u: goto label_2ba2e0;
        case 0x2ba2e4u: goto label_2ba2e4;
        case 0x2ba2e8u: goto label_2ba2e8;
        case 0x2ba2ecu: goto label_2ba2ec;
        case 0x2ba2f0u: goto label_2ba2f0;
        case 0x2ba2f4u: goto label_2ba2f4;
        default: break;
    }

    ctx->pc = 0x2ba200u;

label_2ba200:
    // 0x2ba200: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2ba200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2ba204:
    // 0x2ba204: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2ba204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2ba208:
    // 0x2ba208: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2ba208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2ba20c:
    // 0x2ba20c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2ba20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2ba210:
    // 0x2ba210: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ba210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2ba214:
    // 0x2ba214: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ba214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2ba218:
    // 0x2ba218: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2ba218u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ba21c:
    // 0x2ba21c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ba21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2ba220:
    // 0x2ba220: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2ba220u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ba224:
    // 0x2ba224: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ba224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2ba228:
    // 0x2ba228: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2ba228u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2ba22c:
    // 0x2ba22c: 0x80820070  lb          $v0, 0x70($a0)
    ctx->pc = 0x2ba22cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 112)));
label_2ba230:
    // 0x2ba230: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_2ba234:
    if (ctx->pc == 0x2BA234u) {
        ctx->pc = 0x2BA234u;
            // 0x2ba234: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA238u;
        goto label_2ba238;
    }
    ctx->pc = 0x2BA230u;
    {
        const bool branch_taken_0x2ba230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA230u;
            // 0x2ba234: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba230) {
            ctx->pc = 0x2BA2D0u;
            goto label_2ba2d0;
        }
    }
    ctx->pc = 0x2BA238u;
label_2ba238:
    // 0x2ba238: 0xc094504  jal         func_251410
label_2ba23c:
    if (ctx->pc == 0x2BA23Cu) {
        ctx->pc = 0x2BA23Cu;
            // 0x2ba23c: 0x26640020  addiu       $a0, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->pc = 0x2BA240u;
        goto label_2ba240;
    }
    ctx->pc = 0x2BA238u;
    SET_GPR_U32(ctx, 31, 0x2BA240u);
    ctx->pc = 0x2BA23Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA238u;
            // 0x2ba23c: 0x26640020  addiu       $a0, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251410u;
    if (runtime->hasFunction(0x251410u)) {
        auto targetFn = runtime->lookupFunction(0x251410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA240u; }
        if (ctx->pc != 0x2BA240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetReadBGInfo__FPc_0x251410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA240u; }
        if (ctx->pc != 0x2BA240u) { return; }
    }
    ctx->pc = 0x2BA240u;
label_2ba240:
    // 0x2ba240: 0x3c150038  lui         $s5, 0x38
    ctx->pc = 0x2ba240u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)56 << 16));
label_2ba244:
    // 0x2ba244: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2ba244u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba248:
    // 0x2ba248: 0x26b51ef0  addiu       $s5, $s5, 0x1EF0
    ctx->pc = 0x2ba248u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 7920));
label_2ba24c:
    // 0x2ba24c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ba24cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ba250:
    // 0x2ba250: 0xc04b950  jal         func_12E540
label_2ba254:
    if (ctx->pc == 0x2BA254u) {
        ctx->pc = 0x2BA254u;
            // 0x2ba254: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA258u;
        goto label_2ba258;
    }
    ctx->pc = 0x2BA250u;
    SET_GPR_U32(ctx, 31, 0x2BA258u);
    ctx->pc = 0x2BA254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA250u;
            // 0x2ba254: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA258u; }
        if (ctx->pc != 0x2BA258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA258u; }
        if (ctx->pc != 0x2BA258u) { return; }
    }
    ctx->pc = 0x2BA258u;
label_2ba258:
    // 0x2ba258: 0x8e940110  lw          $s4, 0x110($s4)
    ctx->pc = 0x2ba258u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 272)));
label_2ba25c:
    // 0x2ba25c: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x2ba25cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
label_2ba260:
    // 0x2ba260: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x2ba260u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
label_2ba264:
    // 0x2ba264: 0x12400017  beqz        $s2, . + 4 + (0x17 << 2)
label_2ba268:
    if (ctx->pc == 0x2BA268u) {
        ctx->pc = 0x2BA268u;
            // 0x2ba268: 0xae720074  sw          $s2, 0x74($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 18));
        ctx->pc = 0x2BA26Cu;
        goto label_2ba26c;
    }
    ctx->pc = 0x2BA264u;
    {
        const bool branch_taken_0x2ba264 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA264u;
            // 0x2ba268: 0xae720074  sw          $s2, 0x74($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba264) {
            ctx->pc = 0x2BA2C4u;
            goto label_2ba2c4;
        }
    }
    ctx->pc = 0x2BA26Cu;
label_2ba26c:
    // 0x2ba26c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2ba26cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2ba270:
    // 0x2ba270: 0x26a401d8  addiu       $a0, $s5, 0x1D8
    ctx->pc = 0x2ba270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 472));
label_2ba274:
    // 0x2ba274: 0xc04a3dc  jal         func_128F70
label_2ba278:
    if (ctx->pc == 0x2BA278u) {
        ctx->pc = 0x2BA278u;
            // 0x2ba278: 0x24a5f488  addiu       $a1, $a1, -0xB78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964360));
        ctx->pc = 0x2BA27Cu;
        goto label_2ba27c;
    }
    ctx->pc = 0x2BA274u;
    SET_GPR_U32(ctx, 31, 0x2BA27Cu);
    ctx->pc = 0x2BA278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA274u;
            // 0x2ba278: 0x24a5f488  addiu       $a1, $a1, -0xB78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA27Cu; }
        if (ctx->pc != 0x2BA27Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA27Cu; }
        if (ctx->pc != 0x2BA27Cu) { return; }
    }
    ctx->pc = 0x2BA27Cu;
label_2ba27c:
    // 0x2ba27c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2ba27cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2ba280:
    // 0x2ba280: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ba280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ba284:
    // 0x2ba284: 0x8f390118  lw          $t9, 0x118($t9)
    ctx->pc = 0x2ba284u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 280)));
label_2ba288:
    // 0x2ba288: 0x320f809  jalr        $t9
label_2ba28c:
    if (ctx->pc == 0x2BA28Cu) {
        ctx->pc = 0x2BA28Cu;
            // 0x2ba28c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA290u;
        goto label_2ba290;
    }
    ctx->pc = 0x2BA288u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BA290u);
        ctx->pc = 0x2BA28Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA288u;
            // 0x2ba28c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BA290u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BA290u; }
            if (ctx->pc != 0x2BA290u) { return; }
        }
        }
    }
    ctx->pc = 0x2BA290u;
label_2ba290:
    // 0x2ba290: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2ba290u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2ba294:
    // 0x2ba294: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x2ba294u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
label_2ba298:
    // 0x2ba298: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2ba298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ba29c:
    // 0x2ba29c: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x2ba29cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ba2a0:
    // 0x2ba2a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ba2a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ba2a4:
    // 0x2ba2a4: 0x24c64c28  addiu       $a2, $a2, 0x4C28
    ctx->pc = 0x2ba2a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19496));
label_2ba2a8:
    // 0x2ba2a8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2ba2a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ba2ac:
    // 0x2ba2ac: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2ba2acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ba2b0:
    // 0x2ba2b0: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2ba2b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ba2b4:
    // 0x2ba2b4: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x2ba2b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_2ba2b8:
    // 0x2ba2b8: 0x320f809  jalr        $t9
label_2ba2bc:
    if (ctx->pc == 0x2BA2BCu) {
        ctx->pc = 0x2BA2BCu;
            // 0x2ba2bc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA2C0u;
        goto label_2ba2c0;
    }
    ctx->pc = 0x2BA2B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BA2C0u);
        ctx->pc = 0x2BA2BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA2B8u;
            // 0x2ba2bc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BA2C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BA2C0u; }
            if (ctx->pc != 0x2BA2C0u) { return; }
        }
        }
    }
    ctx->pc = 0x2BA2C0u;
label_2ba2c0:
    // 0x2ba2c0: 0xa2a001d8  sb          $zero, 0x1D8($s5)
    ctx->pc = 0x2ba2c0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 472), (uint8_t)GPR_U32(ctx, 0));
label_2ba2c4:
    // 0x2ba2c4: 0xa2600070  sb          $zero, 0x70($s3)
    ctx->pc = 0x2ba2c4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 112), (uint8_t)GPR_U32(ctx, 0));
label_2ba2c8:
    // 0x2ba2c8: 0x10000002  b           . + 4 + (0x2 << 2)
label_2ba2cc:
    if (ctx->pc == 0x2BA2CCu) {
        ctx->pc = 0x2BA2CCu;
            // 0x2ba2cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BA2D0u;
        goto label_2ba2d0;
    }
    ctx->pc = 0x2BA2C8u;
    {
        const bool branch_taken_0x2ba2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA2CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA2C8u;
            // 0x2ba2cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba2c8) {
            ctx->pc = 0x2BA2D4u;
            goto label_2ba2d4;
        }
    }
    ctx->pc = 0x2BA2D0u;
label_2ba2d0:
    // 0x2ba2d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ba2d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ba2d4:
    // 0x2ba2d4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2ba2d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2ba2d8:
    // 0x2ba2d8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2ba2d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2ba2dc:
    // 0x2ba2dc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2ba2dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2ba2e0:
    // 0x2ba2e0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ba2e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2ba2e4:
    // 0x2ba2e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ba2e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ba2e8:
    // 0x2ba2e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ba2e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ba2ec:
    // 0x2ba2ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ba2ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2ba2f0:
    // 0x2ba2f0: 0x3e00008  jr          $ra
label_2ba2f4:
    if (ctx->pc == 0x2BA2F4u) {
        ctx->pc = 0x2BA2F4u;
            // 0x2ba2f4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2BA2F8u;
        goto label_fallthrough_0x2ba2f0;
    }
    ctx->pc = 0x2BA2F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA2F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA2F0u;
            // 0x2ba2f4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2ba2f0:
    ctx->pc = 0x2BA2F8u;
}
