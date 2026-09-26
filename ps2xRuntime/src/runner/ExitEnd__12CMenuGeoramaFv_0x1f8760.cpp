#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ExitEnd__12CMenuGeoramaFv
// Address: 0x1f8760 - 0x1f88a4
void ExitEnd__12CMenuGeoramaFv_0x1f8760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ExitEnd__12CMenuGeoramaFv_0x1f8760");
#endif

    switch (ctx->pc) {
        case 0x1f888cu: goto label_1f888c;
        case 0x1f8894u: goto label_1f8894;
        default: break;
    }

    ctx->pc = 0x1f8760u;

    // 0x1f8760: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f8760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f8764: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f8764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f8768: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f8768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f876c: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x1f876cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x1f8770: 0x8423b7f4  lh          $v1, -0x480C($at)
    ctx->pc = 0x1f8770u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294948852)));
    // 0x1f8774: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f8774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8778: 0x8f828fd0  lw          $v0, -0x7030($gp)
    ctx->pc = 0x1f8778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938576)));
    // 0x1f877c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f877cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f8780: 0xa4430050  sh          $v1, 0x50($v0)
    ctx->pc = 0x1f8780u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 80), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f8784: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x1f8784u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x1f8788: 0x8423b7f8  lh          $v1, -0x4808($at)
    ctx->pc = 0x1f8788u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294948856)));
    // 0x1f878c: 0x8f828fd0  lw          $v0, -0x7030($gp)
    ctx->pc = 0x1f878cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938576)));
    // 0x1f8790: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f8790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f8794: 0xa4430052  sh          $v1, 0x52($v0)
    ctx->pc = 0x1f8794u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 82), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f8798: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x1f8798u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x1f879c: 0x8423b7fc  lh          $v1, -0x4804($at)
    ctx->pc = 0x1f879cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294948860)));
    // 0x1f87a0: 0x8f828fd0  lw          $v0, -0x7030($gp)
    ctx->pc = 0x1f87a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938576)));
    // 0x1f87a4: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f87a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f87a8: 0xa4430054  sh          $v1, 0x54($v0)
    ctx->pc = 0x1f87a8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 84), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f87ac: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x1f87acu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x1f87b0: 0x8423b800  lh          $v1, -0x4800($at)
    ctx->pc = 0x1f87b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294948864)));
    // 0x1f87b4: 0x8f828fd0  lw          $v0, -0x7030($gp)
    ctx->pc = 0x1f87b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938576)));
    // 0x1f87b8: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f87b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f87bc: 0xa4430056  sh          $v1, 0x56($v0)
    ctx->pc = 0x1f87bcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 86), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f87c0: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x1f87c0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x1f87c4: 0x8423b804  lh          $v1, -0x47FC($at)
    ctx->pc = 0x1f87c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294948868)));
    // 0x1f87c8: 0x8f828fd0  lw          $v0, -0x7030($gp)
    ctx->pc = 0x1f87c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938576)));
    // 0x1f87cc: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f87ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f87d0: 0xa4430058  sh          $v1, 0x58($v0)
    ctx->pc = 0x1f87d0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 88), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f87d4: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x1f87d4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x1f87d8: 0x8423b808  lh          $v1, -0x47F8($at)
    ctx->pc = 0x1f87d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294948872)));
    // 0x1f87dc: 0x8f828fd0  lw          $v0, -0x7030($gp)
    ctx->pc = 0x1f87dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938576)));
    // 0x1f87e0: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f87e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f87e4: 0xa443005a  sh          $v1, 0x5A($v0)
    ctx->pc = 0x1f87e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 90), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f87e8: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x1f87e8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x1f87ec: 0x8423b80c  lh          $v1, -0x47F4($at)
    ctx->pc = 0x1f87ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294948876)));
    // 0x1f87f0: 0x8f828fd0  lw          $v0, -0x7030($gp)
    ctx->pc = 0x1f87f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938576)));
    // 0x1f87f4: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f87f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f87f8: 0xa443005c  sh          $v1, 0x5C($v0)
    ctx->pc = 0x1f87f8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 92), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f87fc: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x1f87fcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x1f8800: 0x8423b810  lh          $v1, -0x47F0($at)
    ctx->pc = 0x1f8800u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294948880)));
    // 0x1f8804: 0x8f828fd0  lw          $v0, -0x7030($gp)
    ctx->pc = 0x1f8804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938576)));
    // 0x1f8808: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f8808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f880c: 0xa443005e  sh          $v1, 0x5E($v0)
    ctx->pc = 0x1f880cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 94), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f8810: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x1f8810u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x1f8814: 0x8423b814  lh          $v1, -0x47EC($at)
    ctx->pc = 0x1f8814u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294948884)));
    // 0x1f8818: 0x8f828fd0  lw          $v0, -0x7030($gp)
    ctx->pc = 0x1f8818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938576)));
    // 0x1f881c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f881cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f8820: 0xa4430060  sh          $v1, 0x60($v0)
    ctx->pc = 0x1f8820u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 96), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f8824: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x1f8824u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x1f8828: 0x8423b818  lh          $v1, -0x47E8($at)
    ctx->pc = 0x1f8828u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294948888)));
    // 0x1f882c: 0x8f828fd0  lw          $v0, -0x7030($gp)
    ctx->pc = 0x1f882cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938576)));
    // 0x1f8830: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f8830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f8834: 0xa4430062  sh          $v1, 0x62($v0)
    ctx->pc = 0x1f8834u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 98), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f8838: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x1f8838u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x1f883c: 0x8423b81c  lh          $v1, -0x47E4($at)
    ctx->pc = 0x1f883cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294948892)));
    // 0x1f8840: 0x8f828fd0  lw          $v0, -0x7030($gp)
    ctx->pc = 0x1f8840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938576)));
    // 0x1f8844: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f8844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f8848: 0xa4430064  sh          $v1, 0x64($v0)
    ctx->pc = 0x1f8848u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 100), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f884c: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x1f884cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x1f8850: 0x8423b820  lh          $v1, -0x47E0($at)
    ctx->pc = 0x1f8850u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294948896)));
    // 0x1f8854: 0x8f828fd0  lw          $v0, -0x7030($gp)
    ctx->pc = 0x1f8854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938576)));
    // 0x1f8858: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f8858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f885c: 0xa4430066  sh          $v1, 0x66($v0)
    ctx->pc = 0x1f885cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 102), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f8860: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x1f8860u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x1f8864: 0x8423b824  lh          $v1, -0x47DC($at)
    ctx->pc = 0x1f8864u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294948900)));
    // 0x1f8868: 0x8f828fd0  lw          $v0, -0x7030($gp)
    ctx->pc = 0x1f8868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938576)));
    // 0x1f886c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f886cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f8870: 0xa4430068  sh          $v1, 0x68($v0)
    ctx->pc = 0x1f8870u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 104), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f8874: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x1f8874u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x1f8878: 0x8423b828  lh          $v1, -0x47D8($at)
    ctx->pc = 0x1f8878u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294948904)));
    // 0x1f887c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f887cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8880: 0x8f828fd0  lw          $v0, -0x7030($gp)
    ctx->pc = 0x1f8880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938576)));
    // 0x1f8884: 0xc08891c  jal         func_222470
    ctx->pc = 0x1F8884u;
    SET_GPR_U32(ctx, 31, 0x1F888Cu);
    ctx->pc = 0x1F8888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8884u;
            // 0x1f8888: 0xa443006a  sh          $v1, 0x6A($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 106), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222470u;
    if (runtime->hasFunction(0x222470u)) {
        auto targetFn = runtime->lookupFunction(0x222470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F888Cu; }
        if (ctx->pc != 0x1F888Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMenuDl__FP10mgCTexturei_0x222470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F888Cu; }
        if (ctx->pc != 0x1F888Cu) { return; }
    }
    ctx->pc = 0x1F888Cu;
label_1f888c:
    // 0x1f888c: 0xc07d518  jal         func_1F5460
    ctx->pc = 0x1F888Cu;
    SET_GPR_U32(ctx, 31, 0x1F8894u);
    ctx->pc = 0x1F8890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F888Cu;
            // 0x1f8890: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F5460u;
    if (runtime->hasFunction(0x1F5460u)) {
        auto targetFn = runtime->lookupFunction(0x1F5460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8894u; }
        if (ctx->pc != 0x1F8894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitDownLoadAnaunce__FP9mgCMemory_0x1f5460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8894u; }
        if (ctx->pc != 0x1F8894u) { return; }
    }
    ctx->pc = 0x1F8894u;
label_1f8894:
    // 0x1f8894: 0xaf808ff0  sw          $zero, -0x7010($gp)
    ctx->pc = 0x1f8894u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938608), GPR_U32(ctx, 0));
    // 0x1f8898: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f8898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f889c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F889Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F88A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F889Cu;
            // 0x1f88a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F88A4u;
}
