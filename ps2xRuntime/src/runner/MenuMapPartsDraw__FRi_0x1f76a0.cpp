#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuMapPartsDraw__FRi
// Address: 0x1f76a0 - 0x1f781c
void MenuMapPartsDraw__FRi_0x1f76a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuMapPartsDraw__FRi_0x1f76a0");
#endif

    switch (ctx->pc) {
        case 0x1f76a0u: goto label_1f76a0;
        case 0x1f76a4u: goto label_1f76a4;
        case 0x1f76a8u: goto label_1f76a8;
        case 0x1f76acu: goto label_1f76ac;
        case 0x1f76b0u: goto label_1f76b0;
        case 0x1f76b4u: goto label_1f76b4;
        case 0x1f76b8u: goto label_1f76b8;
        case 0x1f76bcu: goto label_1f76bc;
        case 0x1f76c0u: goto label_1f76c0;
        case 0x1f76c4u: goto label_1f76c4;
        case 0x1f76c8u: goto label_1f76c8;
        case 0x1f76ccu: goto label_1f76cc;
        case 0x1f76d0u: goto label_1f76d0;
        case 0x1f76d4u: goto label_1f76d4;
        case 0x1f76d8u: goto label_1f76d8;
        case 0x1f76dcu: goto label_1f76dc;
        case 0x1f76e0u: goto label_1f76e0;
        case 0x1f76e4u: goto label_1f76e4;
        case 0x1f76e8u: goto label_1f76e8;
        case 0x1f76ecu: goto label_1f76ec;
        case 0x1f76f0u: goto label_1f76f0;
        case 0x1f76f4u: goto label_1f76f4;
        case 0x1f76f8u: goto label_1f76f8;
        case 0x1f76fcu: goto label_1f76fc;
        case 0x1f7700u: goto label_1f7700;
        case 0x1f7704u: goto label_1f7704;
        case 0x1f7708u: goto label_1f7708;
        case 0x1f770cu: goto label_1f770c;
        case 0x1f7710u: goto label_1f7710;
        case 0x1f7714u: goto label_1f7714;
        case 0x1f7718u: goto label_1f7718;
        case 0x1f771cu: goto label_1f771c;
        case 0x1f7720u: goto label_1f7720;
        case 0x1f7724u: goto label_1f7724;
        case 0x1f7728u: goto label_1f7728;
        case 0x1f772cu: goto label_1f772c;
        case 0x1f7730u: goto label_1f7730;
        case 0x1f7734u: goto label_1f7734;
        case 0x1f7738u: goto label_1f7738;
        case 0x1f773cu: goto label_1f773c;
        case 0x1f7740u: goto label_1f7740;
        case 0x1f7744u: goto label_1f7744;
        case 0x1f7748u: goto label_1f7748;
        case 0x1f774cu: goto label_1f774c;
        case 0x1f7750u: goto label_1f7750;
        case 0x1f7754u: goto label_1f7754;
        case 0x1f7758u: goto label_1f7758;
        case 0x1f775cu: goto label_1f775c;
        case 0x1f7760u: goto label_1f7760;
        case 0x1f7764u: goto label_1f7764;
        case 0x1f7768u: goto label_1f7768;
        case 0x1f776cu: goto label_1f776c;
        case 0x1f7770u: goto label_1f7770;
        case 0x1f7774u: goto label_1f7774;
        case 0x1f7778u: goto label_1f7778;
        case 0x1f777cu: goto label_1f777c;
        case 0x1f7780u: goto label_1f7780;
        case 0x1f7784u: goto label_1f7784;
        case 0x1f7788u: goto label_1f7788;
        case 0x1f778cu: goto label_1f778c;
        case 0x1f7790u: goto label_1f7790;
        case 0x1f7794u: goto label_1f7794;
        case 0x1f7798u: goto label_1f7798;
        case 0x1f779cu: goto label_1f779c;
        case 0x1f77a0u: goto label_1f77a0;
        case 0x1f77a4u: goto label_1f77a4;
        case 0x1f77a8u: goto label_1f77a8;
        case 0x1f77acu: goto label_1f77ac;
        case 0x1f77b0u: goto label_1f77b0;
        case 0x1f77b4u: goto label_1f77b4;
        case 0x1f77b8u: goto label_1f77b8;
        case 0x1f77bcu: goto label_1f77bc;
        case 0x1f77c0u: goto label_1f77c0;
        case 0x1f77c4u: goto label_1f77c4;
        case 0x1f77c8u: goto label_1f77c8;
        case 0x1f77ccu: goto label_1f77cc;
        case 0x1f77d0u: goto label_1f77d0;
        case 0x1f77d4u: goto label_1f77d4;
        case 0x1f77d8u: goto label_1f77d8;
        case 0x1f77dcu: goto label_1f77dc;
        case 0x1f77e0u: goto label_1f77e0;
        case 0x1f77e4u: goto label_1f77e4;
        case 0x1f77e8u: goto label_1f77e8;
        case 0x1f77ecu: goto label_1f77ec;
        case 0x1f77f0u: goto label_1f77f0;
        case 0x1f77f4u: goto label_1f77f4;
        case 0x1f77f8u: goto label_1f77f8;
        case 0x1f77fcu: goto label_1f77fc;
        case 0x1f7800u: goto label_1f7800;
        case 0x1f7804u: goto label_1f7804;
        case 0x1f7808u: goto label_1f7808;
        case 0x1f780cu: goto label_1f780c;
        case 0x1f7810u: goto label_1f7810;
        case 0x1f7814u: goto label_1f7814;
        case 0x1f7818u: goto label_1f7818;
        default: break;
    }

    ctx->pc = 0x1f76a0u;

label_1f76a0:
    // 0x1f76a0: 0x27bdfc90  addiu       $sp, $sp, -0x370
    ctx->pc = 0x1f76a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966416));
label_1f76a4:
    // 0x1f76a4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1f76a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1f76a8:
    // 0x1f76a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f76a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1f76ac:
    // 0x1f76ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f76acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1f76b0:
    // 0x1f76b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f76b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f76b4:
    // 0x1f76b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f76b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f76b8:
    // 0x1f76b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f76b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f76bc:
    // 0x1f76bc: 0x8f838fcc  lw          $v1, -0x7034($gp)
    ctx->pc = 0x1f76bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938572)));
label_1f76c0:
    // 0x1f76c0: 0x1060004e  beqz        $v1, . + 4 + (0x4E << 2)
label_1f76c4:
    if (ctx->pc == 0x1F76C4u) {
        ctx->pc = 0x1F76C4u;
            // 0x1f76c4: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F76C8u;
        goto label_1f76c8;
    }
    ctx->pc = 0x1F76C0u;
    {
        const bool branch_taken_0x1f76c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F76C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F76C0u;
            // 0x1f76c4: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f76c0) {
            ctx->pc = 0x1F77FCu;
            goto label_1f77fc;
        }
    }
    ctx->pc = 0x1F76C8u;
label_1f76c8:
    // 0x1f76c8: 0x87839024  lh          $v1, -0x6FDC($gp)
    ctx->pc = 0x1f76c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938660)));
label_1f76cc:
    // 0x1f76cc: 0x460004b  bltz        $v1, . + 4 + (0x4B << 2)
label_1f76d0:
    if (ctx->pc == 0x1F76D0u) {
        ctx->pc = 0x1F76D4u;
        goto label_1f76d4;
    }
    ctx->pc = 0x1F76CCu;
    {
        const bool branch_taken_0x1f76cc = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1f76cc) {
            ctx->pc = 0x1F77FCu;
            goto label_1f77fc;
        }
    }
    ctx->pc = 0x1F76D4u;
label_1f76d4:
    // 0x1f76d4: 0x8f838ff4  lw          $v1, -0x700C($gp)
    ctx->pc = 0x1f76d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938612)));
label_1f76d8:
    // 0x1f76d8: 0x10600048  beqz        $v1, . + 4 + (0x48 << 2)
label_1f76dc:
    if (ctx->pc == 0x1F76DCu) {
        ctx->pc = 0x1F76E0u;
        goto label_1f76e0;
    }
    ctx->pc = 0x1F76D8u;
    {
        const bool branch_taken_0x1f76d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f76d8) {
            ctx->pc = 0x1F77FCu;
            goto label_1f77fc;
        }
    }
    ctx->pc = 0x1F76E0u;
label_1f76e0:
    // 0x1f76e0: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x1f76e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
label_1f76e4:
    // 0x1f76e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f76e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f76e8:
    // 0x1f76e8: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x1f76e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
label_1f76ec:
    // 0x1f76ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f76ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f76f0:
    // 0x1f76f0: 0xdd1821  addu        $v1, $a2, $sp
    ctx->pc = 0x1f76f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
label_1f76f4:
    // 0x1f76f4: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x1f76f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1f76f8:
    // 0x1f76f8: 0x24670060  addiu       $a3, $v1, 0x60
    ctx->pc = 0x1f76f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_1f76fc:
    // 0x1f76fc: 0x24a40002  addiu       $a0, $a1, 0x2
    ctx->pc = 0x1f76fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_1f7700:
    // 0x1f7700: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x1f7700u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
label_1f7704:
    // 0x1f7704: 0x24a30003  addiu       $v1, $a1, 0x3
    ctx->pc = 0x1f7704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
label_1f7708:
    // 0x1f7708: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x1f7708u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
label_1f770c:
    // 0x1f770c: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x1f770cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
label_1f7710:
    // 0x1f7710: 0x24a20004  addiu       $v0, $a1, 0x4
    ctx->pc = 0x1f7710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_1f7714:
    // 0x1f7714: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x1f7714u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
label_1f7718:
    // 0x1f7718: 0x24a40005  addiu       $a0, $a1, 0x5
    ctx->pc = 0x1f7718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 5));
label_1f771c:
    // 0x1f771c: 0xace20010  sw          $v0, 0x10($a3)
    ctx->pc = 0x1f771cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 2));
label_1f7720:
    // 0x1f7720: 0x24a30006  addiu       $v1, $a1, 0x6
    ctx->pc = 0x1f7720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
label_1f7724:
    // 0x1f7724: 0xace40014  sw          $a0, 0x14($a3)
    ctx->pc = 0x1f7724u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 4));
label_1f7728:
    // 0x1f7728: 0x24a20007  addiu       $v0, $a1, 0x7
    ctx->pc = 0x1f7728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
label_1f772c:
    // 0x1f772c: 0xace30018  sw          $v1, 0x18($a3)
    ctx->pc = 0x1f772cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
label_1f7730:
    // 0x1f7730: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1f7730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_1f7734:
    // 0x1f7734: 0xace2001c  sw          $v0, 0x1C($a3)
    ctx->pc = 0x1f7734u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 2));
label_1f7738:
    // 0x1f7738: 0x28a20040  slti        $v0, $a1, 0x40
    ctx->pc = 0x1f7738u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)64) ? 1 : 0);
label_1f773c:
    // 0x1f773c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_1f7740:
    if (ctx->pc == 0x1F7740u) {
        ctx->pc = 0x1F7740u;
            // 0x1f7740: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->pc = 0x1F7744u;
        goto label_1f7744;
    }
    ctx->pc = 0x1F773Cu;
    {
        const bool branch_taken_0x1f773c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F773Cu;
            // 0x1f7740: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f773c) {
            ctx->pc = 0x1F76F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f76f0;
        }
    }
    ctx->pc = 0x1F7744u;
label_1f7744:
    // 0x1f7744: 0x8f848ff4  lw          $a0, -0x700C($gp)
    ctx->pc = 0x1f7744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938612)));
label_1f7748:
    // 0x1f7748: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f7748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f774c:
    // 0x1f774c: 0xafa20160  sw          $v0, 0x160($sp)
    ctx->pc = 0x1f774cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
label_1f7750:
    // 0x1f7750: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1f7750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1f7754:
    // 0x1f7754: 0xc050940  jal         func_142500
label_1f7758:
    if (ctx->pc == 0x1F7758u) {
        ctx->pc = 0x1F7758u;
            // 0x1f7758: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F775Cu;
        goto label_1f775c;
    }
    ctx->pc = 0x1F7754u;
    SET_GPR_U32(ctx, 31, 0x1F775Cu);
    ctx->pc = 0x1F7758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7754u;
            // 0x1f7758: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142500u;
    if (runtime->hasFunction(0x142500u)) {
        auto targetFn = runtime->lookupFunction(0x142500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F775Cu; }
        if (ctx->pc != 0x1F775Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgBeginDraw__FP9mgCMemoryPiP14mgCDrawManager_0x142500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F775Cu; }
        if (ctx->pc != 0x1F775Cu) { return; }
    }
    ctx->pc = 0x1F775Cu;
label_1f775c:
    // 0x1f775c: 0x8f848fcc  lw          $a0, -0x7034($gp)
    ctx->pc = 0x1f775cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938572)));
label_1f7760:
    // 0x1f7760: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1f7760u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f7764:
    // 0x1f7764: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x1f7764u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_1f7768:
    // 0x1f7768: 0x320f809  jalr        $t9
label_1f776c:
    if (ctx->pc == 0x1F776Cu) {
        ctx->pc = 0x1F7770u;
        goto label_1f7770;
    }
    ctx->pc = 0x1F7768u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F7770u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F7770u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F7770u; }
            if (ctx->pc != 0x1F7770u) { return; }
        }
        }
    }
    ctx->pc = 0x1F7770u;
label_1f7770:
    // 0x1f7770: 0xc050950  jal         func_142540
label_1f7774:
    if (ctx->pc == 0x1F7774u) {
        ctx->pc = 0x1F7774u;
            // 0x1f7774: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F7778u;
        goto label_1f7778;
    }
    ctx->pc = 0x1F7770u;
    SET_GPR_U32(ctx, 31, 0x1F7778u);
    ctx->pc = 0x1F7774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7770u;
            // 0x1f7774: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142540u;
    if (runtime->hasFunction(0x142540u)) {
        auto targetFn = runtime->lookupFunction(0x142540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7778u; }
        if (ctx->pc != 0x1F7778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgPreEndDraw__FP14mgCDrawManager_0x142540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7778u; }
        if (ctx->pc != 0x1F7778u) { return; }
    }
    ctx->pc = 0x1F7778u;
label_1f7778:
    // 0x1f7778: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f7778u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f777c:
    // 0x1f777c: 0x8f8294a4  lw          $v0, -0x6B5C($gp)
    ctx->pc = 0x1f777cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
label_1f7780:
    // 0x1f7780: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f7780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f7784:
    // 0x1f7784: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x1f7784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_1f7788:
    // 0x1f7788: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x1f7788u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1f778c:
    // 0x1f778c: 0xc05a3f4  jal         func_168FD0
label_1f7790:
    if (ctx->pc == 0x1F7790u) {
        ctx->pc = 0x1F7790u;
            // 0x1f7790: 0x244423d0  addiu       $a0, $v0, 0x23D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 9168));
        ctx->pc = 0x1F7794u;
        goto label_1f7794;
    }
    ctx->pc = 0x1F778Cu;
    SET_GPR_U32(ctx, 31, 0x1F7794u);
    ctx->pc = 0x1F7790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F778Cu;
            // 0x1f7790: 0x244423d0  addiu       $a0, $v0, 0x23D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 9168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168FD0u;
    if (runtime->hasFunction(0x168FD0u)) {
        auto targetFn = runtime->lookupFunction(0x168FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7794u; }
        if (ctx->pc != 0x1F7794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTextureBlockNo__11CMdsListSetFiPii_0x168fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7794u; }
        if (ctx->pc != 0x1F7794u) { return; }
    }
    ctx->pc = 0x1F7794u;
label_1f7794:
    // 0x1f7794: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f7794u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f7798:
    // 0x1f7798: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x1f7798u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_1f779c:
    // 0x1f779c: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
label_1f77a0:
    if (ctx->pc == 0x1F77A0u) {
        ctx->pc = 0x1F77A0u;
            // 0x1f77a0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F77A4u;
        goto label_1f77a4;
    }
    ctx->pc = 0x1F779Cu;
    {
        const bool branch_taken_0x1f779c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F77A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F779Cu;
            // 0x1f77a0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f779c) {
            ctx->pc = 0x1F77E4u;
            goto label_1f77e4;
        }
    }
    ctx->pc = 0x1F77A4u;
label_1f77a4:
    // 0x1f77a4: 0x0  nop
    ctx->pc = 0x1f77a4u;
    // NOP
label_1f77a8:
    // 0x1f77a8: 0x2511023  subu        $v0, $s2, $s1
    ctx->pc = 0x1f77a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_1f77ac:
    // 0x1f77ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f77acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1f77b0:
    // 0x1f77b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f77b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f77b4:
    // 0x1f77b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f77b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f77b8:
    // 0x1f77b8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1f77b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_1f77bc:
    // 0x1f77bc: 0x8c540170  lw          $s4, 0x170($v0)
    ctx->pc = 0x1f77bcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 368)));
label_1f77c0:
    // 0x1f77c0: 0xc050958  jal         func_142560
label_1f77c4:
    if (ctx->pc == 0x1F77C4u) {
        ctx->pc = 0x1F77C4u;
            // 0x1f77c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F77C8u;
        goto label_1f77c8;
    }
    ctx->pc = 0x1F77C0u;
    SET_GPR_U32(ctx, 31, 0x1F77C8u);
    ctx->pc = 0x1F77C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F77C0u;
            // 0x1f77c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142560u;
    if (runtime->hasFunction(0x142560u)) {
        auto targetFn = runtime->lookupFunction(0x142560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F77C8u; }
        if (ctx->pc != 0x1F77C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgEndDrawReloadTexture__FiP14mgCDrawManager_0x142560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F77C8u; }
        if (ctx->pc != 0x1F77C8u) { return; }
    }
    ctx->pc = 0x1F77C8u;
label_1f77c8:
    // 0x1f77c8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1f77c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f77cc:
    // 0x1f77cc: 0xc050960  jal         func_142580
label_1f77d0:
    if (ctx->pc == 0x1F77D0u) {
        ctx->pc = 0x1F77D0u;
            // 0x1f77d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F77D4u;
        goto label_1f77d4;
    }
    ctx->pc = 0x1F77CCu;
    SET_GPR_U32(ctx, 31, 0x1F77D4u);
    ctx->pc = 0x1F77D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F77CCu;
            // 0x1f77d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142580u;
    if (runtime->hasFunction(0x142580u)) {
        auto targetFn = runtime->lookupFunction(0x142580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F77D4u; }
        if (ctx->pc != 0x1F77D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgEndDraw__FiP14mgCDrawManager_0x142580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F77D4u; }
        if (ctx->pc != 0x1F77D4u) { return; }
    }
    ctx->pc = 0x1F77D4u;
label_1f77d4:
    // 0x1f77d4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f77d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1f77d8:
    // 0x1f77d8: 0x232182a  slt         $v1, $s1, $s2
    ctx->pc = 0x1f77d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_1f77dc:
    // 0x1f77dc: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_1f77e0:
    if (ctx->pc == 0x1F77E0u) {
        ctx->pc = 0x1F77E4u;
        goto label_1f77e4;
    }
    ctx->pc = 0x1F77DCu;
    {
        const bool branch_taken_0x1f77dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f77dc) {
            ctx->pc = 0x1F77A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f77a4;
        }
    }
    ctx->pc = 0x1F77E4u;
label_1f77e4:
    // 0x1f77e4: 0x0  nop
    ctx->pc = 0x1f77e4u;
    // NOP
label_1f77e8:
    // 0x1f77e8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f77e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1f77ec:
    // 0x1f77ec: 0x2a030010  slti        $v1, $s0, 0x10
    ctx->pc = 0x1f77ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
label_1f77f0:
    // 0x1f77f0: 0x1460ffe2  bnez        $v1, . + 4 + (-0x1E << 2)
label_1f77f4:
    if (ctx->pc == 0x1F77F4u) {
        ctx->pc = 0x1F77F4u;
            // 0x1f77f4: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1F77F8u;
        goto label_1f77f8;
    }
    ctx->pc = 0x1F77F0u;
    {
        const bool branch_taken_0x1f77f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F77F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F77F0u;
            // 0x1f77f4: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f77f0) {
            ctx->pc = 0x1F777Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f777c;
        }
    }
    ctx->pc = 0x1F77F8u;
label_1f77f8:
    // 0x1f77f8: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1f77f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_1f77fc:
    // 0x1f77fc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1f77fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1f7800:
    // 0x1f7800: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f7800u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f7804:
    // 0x1f7804: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f7804u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f7808:
    // 0x1f7808: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f7808u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f780c:
    // 0x1f780c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f780cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f7810:
    // 0x1f7810: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f7810u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f7814:
    // 0x1f7814: 0x3e00008  jr          $ra
label_1f7818:
    if (ctx->pc == 0x1F7818u) {
        ctx->pc = 0x1F7818u;
            // 0x1f7818: 0x27bd0370  addiu       $sp, $sp, 0x370 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
        ctx->pc = 0x1F781Cu;
        goto label_fallthrough_0x1f7814;
    }
    ctx->pc = 0x1F7814u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7814u;
            // 0x1f7818: 0x27bd0370  addiu       $sp, $sp, 0x370 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1f7814:
    ctx->pc = 0x1F781Cu;
}
