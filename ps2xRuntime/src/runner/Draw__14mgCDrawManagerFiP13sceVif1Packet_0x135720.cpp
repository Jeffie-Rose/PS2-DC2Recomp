#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__14mgCDrawManagerFiP13sceVif1Packet
// Address: 0x135720 - 0x135918
void Draw__14mgCDrawManagerFiP13sceVif1Packet_0x135720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__14mgCDrawManagerFiP13sceVif1Packet_0x135720");
#endif

    switch (ctx->pc) {
        case 0x1357dcu: goto label_1357dc;
        case 0x135818u: goto label_135818;
        case 0x135834u: goto label_135834;
        case 0x1358e4u: goto label_1358e4;
        default: break;
    }

    ctx->pc = 0x135720u;

    // 0x135720: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x135720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x135724: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x135724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x135728: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x135728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x13572c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x13572cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x135730: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x135730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x135734: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x135734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x135738: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x135738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13573c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13573cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x135740: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x135740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x135744: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x135744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x135748: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x135748u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13574c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x13574cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135750: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x135750u;
    {
        const bool branch_taken_0x135750 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x135750) {
            ctx->pc = 0x13576Cu;
            goto label_13576c;
        }
    }
    ctx->pc = 0x135758u;
    // 0x135758: 0x8ec20058  lw          $v0, 0x58($s6)
    ctx->pc = 0x135758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 88)));
    // 0x13575c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x13575cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x135760: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x135760u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x135764: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x135764u;
    {
        const bool branch_taken_0x135764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x135764) {
            ctx->pc = 0x135778u;
            goto label_135778;
        }
    }
    ctx->pc = 0x13576Cu;
label_13576c:
    // 0x13576c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13576cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135770: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x135770u;
    {
        const bool branch_taken_0x135770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135770) {
            ctx->pc = 0x1358E8u;
            goto label_1358e8;
        }
    }
    ctx->pc = 0x135778u;
label_135778:
    // 0x135778: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x135778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x13577c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13577Cu;
    {
        const bool branch_taken_0x13577c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13577c) {
            ctx->pc = 0x135798u;
            goto label_135798;
        }
    }
    ctx->pc = 0x135784u;
    // 0x135784: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x135784u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x135788: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x135788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x13578c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13578cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x135790: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x135790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x135794: 0x0  nop
    ctx->pc = 0x135794u;
    // NOP
label_135798:
    // 0x135798: 0x4a10004  bgez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x135798u;
    {
        const bool branch_taken_0x135798 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x135798) {
            ctx->pc = 0x1357ACu;
            goto label_1357ac;
        }
    }
    ctx->pc = 0x1357A0u;
    // 0x1357a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1357a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1357a4: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x1357A4u;
    {
        const bool branch_taken_0x1357a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1357a4) {
            ctx->pc = 0x1358E8u;
            goto label_1358e8;
        }
    }
    ctx->pc = 0x1357ACu;
label_1357ac:
    // 0x1357ac: 0x5a080  sll         $s4, $a1, 2
    ctx->pc = 0x1357acu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1357b0: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x1357b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x1357b4: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1357b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1357b8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1357b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1357bc: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1357BCu;
    {
        const bool branch_taken_0x1357bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1357bc) {
            ctx->pc = 0x1357D0u;
            goto label_1357d0;
        }
    }
    ctx->pc = 0x1357C4u;
    // 0x1357c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1357c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1357c8: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x1357C8u;
    {
        const bool branch_taken_0x1357c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1357c8) {
            ctx->pc = 0x1358E8u;
            goto label_1358e8;
        }
    }
    ctx->pc = 0x1357D0u;
label_1357d0:
    // 0x1357d0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1357d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1357d4: 0xc041ace  jal         func_106B38
    ctx->pc = 0x1357D4u;
    SET_GPR_U32(ctx, 31, 0x1357DCu);
    ctx->pc = 0x106B38u;
    if (runtime->hasFunction(0x106B38u)) {
        auto targetFn = runtime->lookupFunction(0x106B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1357DCu; }
        if (ctx->pc != 0x1357DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkTerminate_0x106b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1357DCu; }
        if (ctx->pc != 0x1357DCu) { return; }
    }
    ctx->pc = 0x1357DCu;
label_1357dc:
    // 0x1357dc: 0x8eb10000  lw          $s1, 0x0($s5)
    ctx->pc = 0x1357dcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1357e0: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x1357e0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1357e4: 0x8ec20018  lw          $v0, 0x18($s6)
    ctx->pc = 0x1357e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
    // 0x1357e8: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1357e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1357ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1357ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1357f0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1357f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1357f4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1357f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1357f8: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x1357f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x1357fc: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1357fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x135800: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x135800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x135804: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x135804u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x135808: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x135808u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13580c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x13580cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135810: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x135810u;
    {
        const bool branch_taken_0x135810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135810) {
            ctx->pc = 0x1358A4u;
            goto label_1358a4;
        }
    }
    ctx->pc = 0x135818u;
label_135818:
    // 0x135818: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x135818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13581c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x13581Cu;
    {
        const bool branch_taken_0x13581c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13581c) {
            ctx->pc = 0x13589Cu;
            goto label_13589c;
        }
    }
    ctx->pc = 0x135824u;
    // 0x135824: 0x8445000e  lh          $a1, 0xE($v0)
    ctx->pc = 0x135824u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x135828: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x135828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13582c: 0xc0517a0  jal         func_145E80
    ctx->pc = 0x13582Cu;
    SET_GPR_U32(ctx, 31, 0x135834u);
    ctx->pc = 0x145E80u;
    if (runtime->hasFunction(0x145E80u)) {
        auto targetFn = runtime->lookupFunction(0x145E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135834u; }
        if (ctx->pc != 0x135834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSendVuProg__FPUii_0x145e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135834u; }
        if (ctx->pc != 0x135834u) { return; }
    }
    ctx->pc = 0x135834u;
label_135834:
    // 0x135834: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x135834u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x135838: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x135838u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x13583c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x13583cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x135840: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x135840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x135844: 0x1242000c  beq         $s2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x135844u;
    {
        const bool branch_taken_0x135844 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x135844) {
            ctx->pc = 0x135878u;
            goto label_135878;
        }
    }
    ctx->pc = 0x13584Cu;
    // 0x13584c: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x13584cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x135850: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x135850u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x135854: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x135854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x135858: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x135858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13585c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x13585cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x135860: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x135860u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x135864: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x135864u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x135868: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x135868u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x13586c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x13586cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x135870: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x135870u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x135874: 0x0  nop
    ctx->pc = 0x135874u;
    // NOP
label_135878:
    // 0x135878: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x135878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x13587c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x13587cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x135880: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x135880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x135884: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x135884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x135888: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x135888u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x13588c: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x13588cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x135890: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x135890u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x135894: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x135894u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x135898: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x135898u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
label_13589c:
    // 0x13589c: 0x0  nop
    ctx->pc = 0x13589cu;
    // NOP
    // 0x1358a0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1358a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1358a4:
    // 0x1358a4: 0x0  nop
    ctx->pc = 0x1358a4u;
    // NOP
    // 0x1358a8: 0x8ec20018  lw          $v0, 0x18($s6)
    ctx->pc = 0x1358a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
    // 0x1358ac: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1358acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1358b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1358b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1358b4: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1358b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1358b8: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1358B8u;
    {
        const bool branch_taken_0x1358b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1358b8) {
            ctx->pc = 0x135818u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_135818;
        }
    }
    ctx->pc = 0x1358C0u;
    // 0x1358c0: 0x2371023  subu        $v0, $s1, $s7
    ctx->pc = 0x1358c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x1358c4: 0x22883  sra         $a1, $v0, 2
    ctx->pc = 0x1358c4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 2));
    // 0x1358c8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1358C8u;
    {
        const bool branch_taken_0x1358c8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1358c8) {
            ctx->pc = 0x1358D8u;
            goto label_1358d8;
        }
    }
    ctx->pc = 0x1358D0u;
    // 0x1358d0: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1358d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x1358d4: 0x22883  sra         $a1, $v0, 2
    ctx->pc = 0x1358d4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 2));
label_1358d8:
    // 0x1358d8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1358d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1358dc: 0xc041b7e  jal         func_106DF8
    ctx->pc = 0x1358DCu;
    SET_GPR_U32(ctx, 31, 0x1358E4u);
    ctx->pc = 0x106DF8u;
    if (runtime->hasFunction(0x106DF8u)) {
        auto targetFn = runtime->lookupFunction(0x106DF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1358E4u; }
        if (ctx->pc != 0x1358E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkReserve_0x106df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1358E4u; }
        if (ctx->pc != 0x1358E4u) { return; }
    }
    ctx->pc = 0x1358E4u;
label_1358e4:
    // 0x1358e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1358e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1358e8:
    // 0x1358e8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1358e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1358ec: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1358ecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1358f0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1358f0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1358f4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1358f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1358f8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1358f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1358fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1358fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135900: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x135900u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135904: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x135904u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135908: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x135908u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13590c: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x13590cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x135910: 0x3e00008  jr          $ra
    ctx->pc = 0x135910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x135918u;
}
