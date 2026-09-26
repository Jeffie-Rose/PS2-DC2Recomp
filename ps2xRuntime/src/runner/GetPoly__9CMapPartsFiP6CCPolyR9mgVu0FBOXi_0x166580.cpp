#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetPoly__9CMapPartsFiP6CCPolyR9mgVu0FBOXi
// Address: 0x166580 - 0x1666ac
void GetPoly__9CMapPartsFiP6CCPolyR9mgVu0FBOXi_0x166580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPoly__9CMapPartsFiP6CCPolyR9mgVu0FBOXi_0x166580");
#endif

    switch (ctx->pc) {
        case 0x166580u: goto label_166580;
        case 0x166584u: goto label_166584;
        case 0x166588u: goto label_166588;
        case 0x16658cu: goto label_16658c;
        case 0x166590u: goto label_166590;
        case 0x166594u: goto label_166594;
        case 0x166598u: goto label_166598;
        case 0x16659cu: goto label_16659c;
        case 0x1665a0u: goto label_1665a0;
        case 0x1665a4u: goto label_1665a4;
        case 0x1665a8u: goto label_1665a8;
        case 0x1665acu: goto label_1665ac;
        case 0x1665b0u: goto label_1665b0;
        case 0x1665b4u: goto label_1665b4;
        case 0x1665b8u: goto label_1665b8;
        case 0x1665bcu: goto label_1665bc;
        case 0x1665c0u: goto label_1665c0;
        case 0x1665c4u: goto label_1665c4;
        case 0x1665c8u: goto label_1665c8;
        case 0x1665ccu: goto label_1665cc;
        case 0x1665d0u: goto label_1665d0;
        case 0x1665d4u: goto label_1665d4;
        case 0x1665d8u: goto label_1665d8;
        case 0x1665dcu: goto label_1665dc;
        case 0x1665e0u: goto label_1665e0;
        case 0x1665e4u: goto label_1665e4;
        case 0x1665e8u: goto label_1665e8;
        case 0x1665ecu: goto label_1665ec;
        case 0x1665f0u: goto label_1665f0;
        case 0x1665f4u: goto label_1665f4;
        case 0x1665f8u: goto label_1665f8;
        case 0x1665fcu: goto label_1665fc;
        case 0x166600u: goto label_166600;
        case 0x166604u: goto label_166604;
        case 0x166608u: goto label_166608;
        case 0x16660cu: goto label_16660c;
        case 0x166610u: goto label_166610;
        case 0x166614u: goto label_166614;
        case 0x166618u: goto label_166618;
        case 0x16661cu: goto label_16661c;
        case 0x166620u: goto label_166620;
        case 0x166624u: goto label_166624;
        case 0x166628u: goto label_166628;
        case 0x16662cu: goto label_16662c;
        case 0x166630u: goto label_166630;
        case 0x166634u: goto label_166634;
        case 0x166638u: goto label_166638;
        case 0x16663cu: goto label_16663c;
        case 0x166640u: goto label_166640;
        case 0x166644u: goto label_166644;
        case 0x166648u: goto label_166648;
        case 0x16664cu: goto label_16664c;
        case 0x166650u: goto label_166650;
        case 0x166654u: goto label_166654;
        case 0x166658u: goto label_166658;
        case 0x16665cu: goto label_16665c;
        case 0x166660u: goto label_166660;
        case 0x166664u: goto label_166664;
        case 0x166668u: goto label_166668;
        case 0x16666cu: goto label_16666c;
        case 0x166670u: goto label_166670;
        case 0x166674u: goto label_166674;
        case 0x166678u: goto label_166678;
        case 0x16667cu: goto label_16667c;
        case 0x166680u: goto label_166680;
        case 0x166684u: goto label_166684;
        case 0x166688u: goto label_166688;
        case 0x16668cu: goto label_16668c;
        case 0x166690u: goto label_166690;
        case 0x166694u: goto label_166694;
        case 0x166698u: goto label_166698;
        case 0x16669cu: goto label_16669c;
        case 0x1666a0u: goto label_1666a0;
        case 0x1666a4u: goto label_1666a4;
        case 0x1666a8u: goto label_1666a8;
        default: break;
    }

    ctx->pc = 0x166580u;

label_166580:
    // 0x166580: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x166580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_166584:
    // 0x166584: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x166584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_166588:
    // 0x166588: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x166588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_16658c:
    // 0x16658c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x16658cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_166590:
    // 0x166590: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x166590u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_166594:
    // 0x166594: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x166594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_166598:
    // 0x166598: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x166598u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16659c:
    // 0x16659c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x16659cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1665a0:
    // 0x1665a0: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1665a0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1665a4:
    // 0x1665a4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1665a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1665a8:
    // 0x1665a8: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1665a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1665ac:
    // 0x1665ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1665acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1665b0:
    // 0x1665b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1665b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1665b4:
    // 0x1665b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1665b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1665b8:
    // 0x1665b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1665b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1665bc:
    // 0x1665bc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1665bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1665c0:
    // 0x1665c0: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x1665c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_1665c4:
    // 0x1665c4: 0x320f809  jalr        $t9
label_1665c8:
    if (ctx->pc == 0x1665C8u) {
        ctx->pc = 0x1665C8u;
            // 0x1665c8: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1665CCu;
        goto label_1665cc;
    }
    ctx->pc = 0x1665C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1665CCu);
        ctx->pc = 0x1665C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1665C4u;
            // 0x1665c8: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1665CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1665CCu; }
            if (ctx->pc != 0x1665CCu) { return; }
        }
        }
    }
    ctx->pc = 0x1665CCu;
label_1665cc:
    // 0x1665cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1665d0:
    if (ctx->pc == 0x1665D0u) {
        ctx->pc = 0x1665D0u;
            // 0x1665d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1665D4u;
        goto label_1665d4;
    }
    ctx->pc = 0x1665CCu;
    {
        const bool branch_taken_0x1665cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1665D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1665CCu;
            // 0x1665d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1665cc) {
            ctx->pc = 0x1665DCu;
            goto label_1665dc;
        }
    }
    ctx->pc = 0x1665D4u;
label_1665d4:
    // 0x1665d4: 0x1000002a  b           . + 4 + (0x2A << 2)
label_1665d8:
    if (ctx->pc == 0x1665D8u) {
        ctx->pc = 0x1665D8u;
            // 0x1665d8: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x1665DCu;
        goto label_1665dc;
    }
    ctx->pc = 0x1665D4u;
    {
        const bool branch_taken_0x1665d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1665D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1665D4u;
            // 0x1665d8: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1665d4) {
            ctx->pc = 0x166680u;
            goto label_166680;
        }
    }
    ctx->pc = 0x1665DCu;
label_1665dc:
    // 0x1665dc: 0x8ed90000  lw          $t9, 0x0($s6)
    ctx->pc = 0x1665dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_1665e0:
    // 0x1665e0: 0x8ed000b0  lw          $s0, 0xB0($s6)
    ctx->pc = 0x1665e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 176)));
label_1665e4:
    // 0x1665e4: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x1665e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_1665e8:
    // 0x1665e8: 0x320f809  jalr        $t9
label_1665ec:
    if (ctx->pc == 0x1665ECu) {
        ctx->pc = 0x1665ECu;
            // 0x1665ec: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1665F0u;
        goto label_1665f0;
    }
    ctx->pc = 0x1665E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1665F0u);
        ctx->pc = 0x1665ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1665E8u;
            // 0x1665ec: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1665F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1665F0u; }
            if (ctx->pc != 0x1665F0u) { return; }
        }
        }
    }
    ctx->pc = 0x1665F0u;
label_1665f0:
    // 0x1665f0: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
label_1665f4:
    if (ctx->pc == 0x1665F4u) {
        ctx->pc = 0x1665F4u;
            // 0x1665f4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1665F8u;
        goto label_1665f8;
    }
    ctx->pc = 0x1665F0u;
    {
        const bool branch_taken_0x1665f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1665F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1665F0u;
            // 0x1665f4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1665f0) {
            ctx->pc = 0x166674u;
            goto label_166674;
        }
    }
    ctx->pc = 0x1665F8u;
label_1665f8:
    // 0x1665f8: 0x26120010  addiu       $s2, $s0, 0x10
    ctx->pc = 0x1665f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1665fc:
    // 0x1665fc: 0x12400019  beqz        $s2, . + 4 + (0x19 << 2)
label_166600:
    if (ctx->pc == 0x166600u) {
        ctx->pc = 0x166604u;
        goto label_166604;
    }
    ctx->pc = 0x1665FCu;
    {
        const bool branch_taken_0x1665fc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1665fc) {
            ctx->pc = 0x166664u;
            goto label_166664;
        }
    }
    ctx->pc = 0x166604u;
label_166604:
    // 0x166604: 0x8e530070  lw          $s3, 0x70($s2)
    ctx->pc = 0x166604u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_166608:
    // 0x166608: 0x12600016  beqz        $s3, . + 4 + (0x16 << 2)
label_16660c:
    if (ctx->pc == 0x16660Cu) {
        ctx->pc = 0x166610u;
        goto label_166610;
    }
    ctx->pc = 0x166608u;
    {
        const bool branch_taken_0x166608 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x166608) {
            ctx->pc = 0x166664u;
            goto label_166664;
        }
    }
    ctx->pc = 0x166610u;
label_166610:
    // 0x166610: 0x8e620054  lw          $v0, 0x54($s3)
    ctx->pc = 0x166610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_166614:
    // 0x166614: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_166618:
    if (ctx->pc == 0x166618u) {
        ctx->pc = 0x166618u;
            // 0x166618: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16661Cu;
        goto label_16661c;
    }
    ctx->pc = 0x166614u;
    {
        const bool branch_taken_0x166614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x166618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166614u;
            // 0x166618: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166614) {
            ctx->pc = 0x166664u;
            goto label_166664;
        }
    }
    ctx->pc = 0x16661Cu;
label_16661c:
    // 0x16661c: 0xc04db0c  jal         func_136C30
label_166620:
    if (ctx->pc == 0x166620u) {
        ctx->pc = 0x166620u;
            // 0x166620: 0x26c500c0  addiu       $a1, $s6, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 192));
        ctx->pc = 0x166624u;
        goto label_166624;
    }
    ctx->pc = 0x16661Cu;
    SET_GPR_U32(ctx, 31, 0x166624u);
    ctx->pc = 0x166620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16661Cu;
            // 0x166620: 0x26c500c0  addiu       $a1, $s6, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136C30u;
    if (runtime->hasFunction(0x136C30u)) {
        auto targetFn = runtime->lookupFunction(0x136C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166624u; }
        if (ctx->pc != 0x166624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetReference__8mgCFrameFP8mgCFrame_0x136c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166624u; }
        if (ctx->pc != 0x166624u) { return; }
    }
    ctx->pc = 0x166624u;
label_166624:
    // 0x166624: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x166624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_166628:
    // 0x166628: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x166628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_16662c:
    // 0x16662c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x16662cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_166630:
    // 0x166630: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x166630u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_166634:
    // 0x166634: 0xc05a15c  jal         func_168570
label_166638:
    if (ctx->pc == 0x166638u) {
        ctx->pc = 0x166638u;
            // 0x166638: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16663Cu;
        goto label_16663c;
    }
    ctx->pc = 0x166634u;
    SET_GPR_U32(ctx, 31, 0x16663Cu);
    ctx->pc = 0x166638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166634u;
            // 0x166638: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168570u;
    if (runtime->hasFunction(0x168570u)) {
        auto targetFn = runtime->lookupFunction(0x168570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16663Cu; }
        if (ctx->pc != 0x16663Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPoly__9CMapPieceFiP6CCPolyR9mgVu0FBOXi_0x168570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16663Cu; }
        if (ctx->pc != 0x16663Cu) { return; }
    }
    ctx->pc = 0x16663Cu;
label_16663c:
    // 0x16663c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x16663cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_166640:
    // 0x166640: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x166640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_166644:
    // 0x166644: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x166644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_166648:
    // 0x166648: 0x282a023  subu        $s4, $s4, $v0
    ctx->pc = 0x166648u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_16664c:
    // 0x16664c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x16664cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_166650:
    // 0x166650: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x166650u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_166654:
    // 0x166654: 0xc04db18  jal         func_136C60
label_166658:
    if (ctx->pc == 0x166658u) {
        ctx->pc = 0x166658u;
            // 0x166658: 0x2a3a821  addu        $s5, $s5, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
        ctx->pc = 0x16665Cu;
        goto label_16665c;
    }
    ctx->pc = 0x166654u;
    SET_GPR_U32(ctx, 31, 0x16665Cu);
    ctx->pc = 0x166658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166654u;
            // 0x166658: 0x2a3a821  addu        $s5, $s5, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136C60u;
    if (runtime->hasFunction(0x136C60u)) {
        auto targetFn = runtime->lookupFunction(0x136C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16665Cu; }
        if (ctx->pc != 0x16665Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteReference__8mgCFrameFv_0x136c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16665Cu; }
        if (ctx->pc != 0x16665Cu) { return; }
    }
    ctx->pc = 0x16665Cu;
label_16665c:
    // 0x16665c: 0x1a800005  blez        $s4, . + 4 + (0x5 << 2)
label_166660:
    if (ctx->pc == 0x166660u) {
        ctx->pc = 0x166664u;
        goto label_166664;
    }
    ctx->pc = 0x16665Cu;
    {
        const bool branch_taken_0x16665c = (GPR_S32(ctx, 20) <= 0);
        if (branch_taken_0x16665c) {
            ctx->pc = 0x166674u;
            goto label_166674;
        }
    }
    ctx->pc = 0x166664u;
label_166664:
    // 0x166664: 0x0  nop
    ctx->pc = 0x166664u;
    // NOP
label_166668:
    // 0x166668: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x166668u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16666c:
    // 0x16666c: 0x1600ffe3  bnez        $s0, . + 4 + (-0x1D << 2)
label_166670:
    if (ctx->pc == 0x166670u) {
        ctx->pc = 0x166670u;
            // 0x166670: 0x26120010  addiu       $s2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x166674u;
        goto label_166674;
    }
    ctx->pc = 0x16666Cu;
    {
        const bool branch_taken_0x16666c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x166670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16666Cu;
            // 0x166670: 0x26120010  addiu       $s2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16666c) {
            ctx->pc = 0x1665FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1665fc;
        }
    }
    ctx->pc = 0x166674u;
label_166674:
    // 0x166674: 0x0  nop
    ctx->pc = 0x166674u;
    // NOP
label_166678:
    // 0x166678: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x166678u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16667c:
    // 0x16667c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x16667cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_166680:
    // 0x166680: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x166680u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_166684:
    // 0x166684: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x166684u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_166688:
    // 0x166688: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x166688u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_16668c:
    // 0x16668c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x16668cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_166690:
    // 0x166690: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x166690u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_166694:
    // 0x166694: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x166694u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_166698:
    // 0x166698: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x166698u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16669c:
    // 0x16669c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16669cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1666a0:
    // 0x1666a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1666a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1666a4:
    // 0x1666a4: 0x3e00008  jr          $ra
label_1666a8:
    if (ctx->pc == 0x1666A8u) {
        ctx->pc = 0x1666A8u;
            // 0x1666a8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x1666ACu;
        goto label_fallthrough_0x1666a4;
    }
    ctx->pc = 0x1666A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1666A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1666A4u;
            // 0x1666a8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1666a4:
    ctx->pc = 0x1666ACu;
}
