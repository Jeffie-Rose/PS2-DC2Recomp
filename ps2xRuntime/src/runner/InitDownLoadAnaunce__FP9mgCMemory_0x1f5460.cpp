#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitDownLoadAnaunce__FP9mgCMemory
// Address: 0x1f5460 - 0x1f55e4
void InitDownLoadAnaunce__FP9mgCMemory_0x1f5460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitDownLoadAnaunce__FP9mgCMemory_0x1f5460");
#endif

    switch (ctx->pc) {
        case 0x1f5484u: goto label_1f5484;
        case 0x1f54a8u: goto label_1f54a8;
        case 0x1f54b4u: goto label_1f54b4;
        case 0x1f54dcu: goto label_1f54dc;
        case 0x1f54e8u: goto label_1f54e8;
        case 0x1f54f8u: goto label_1f54f8;
        case 0x1f550cu: goto label_1f550c;
        case 0x1f551cu: goto label_1f551c;
        case 0x1f5528u: goto label_1f5528;
        case 0x1f5574u: goto label_1f5574;
        case 0x1f5580u: goto label_1f5580;
        default: break;
    }

    ctx->pc = 0x1f5460u;

    // 0x1f5460: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f5460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1f5464: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1f5464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1f5468: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f5468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1f546c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f546cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1f5470: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1f5470u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5474: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f5474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1f5478: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f5478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f547c: 0xc08d1bc  jal         func_2346F0
    ctx->pc = 0x1F547Cu;
    SET_GPR_U32(ctx, 31, 0x1F5484u);
    ctx->pc = 0x1F5480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F547Cu;
            // 0x1f5480: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2346F0u;
    if (runtime->hasFunction(0x2346F0u)) {
        auto targetFn = runtime->lookupFunction(0x2346F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5484u; }
        if (ctx->pc != 0x1F5484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuMainMessageBuffer__Fv_0x2346f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5484u; }
        if (ctx->pc != 0x1F5484u) { return; }
    }
    ctx->pc = 0x1F5484u;
label_1f5484:
    // 0x1f5484: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f5484u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5488: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f5488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f548c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1f548cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f5490: 0xaf808fbc  sw          $zero, -0x7044($gp)
    ctx->pc = 0x1f5490u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938556), GPR_U32(ctx, 0));
    // 0x1f5494: 0xaf828fb4  sw          $v0, -0x704C($gp)
    ctx->pc = 0x1f5494u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938548), GPR_U32(ctx, 2));
    // 0x1f5498: 0xa7808fc0  sh          $zero, -0x7040($gp)
    ctx->pc = 0x1f5498u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294938560), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f549c: 0xa3808fb8  sb          $zero, -0x7048($gp)
    ctx->pc = 0x1f549cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938552), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f54a0: 0xc07d57c  jal         func_1F55F0
    ctx->pc = 0x1F54A0u;
    SET_GPR_U32(ctx, 31, 0x1F54A8u);
    ctx->pc = 0x1F54A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F54A0u;
            // 0x1f54a4: 0xa7808fac  sh          $zero, -0x7054($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294938540), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F55F0u;
    if (runtime->hasFunction(0x1F55F0u)) {
        auto targetFn = runtime->lookupFunction(0x1F55F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F54A8u; }
        if (ctx->pc != 0x1F54A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDownLoadAnaunceSwitch__Fi_0x1f55f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F54A8u; }
        if (ctx->pc != 0x1F54A8u) { return; }
    }
    ctx->pc = 0x1F54A8u;
label_1f54a8:
    // 0x1f54a8: 0xa3808f94  sb          $zero, -0x706C($gp)
    ctx->pc = 0x1f54a8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938516), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f54ac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f54acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f54b0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1f54b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f54b4:
    // 0x1f54b4: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F54B4u;
    {
        const bool branch_taken_0x1f54b4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F54B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F54B4u;
            // 0x1f54b8: 0x3c0301ed  lui         $v1, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f54b4) {
            ctx->pc = 0x1F54CCu;
            goto label_1f54cc;
        }
    }
    ctx->pc = 0x1F54BCu;
    // 0x1f54bc: 0x246392a0  addiu       $v1, $v1, -0x6D60
    ctx->pc = 0x1f54bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939296));
    // 0x1f54c0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1f54c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1f54c4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1F54C4u;
    {
        const bool branch_taken_0x1f54c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F54C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F54C4u;
            // 0x1f54c8: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f54c4) {
            ctx->pc = 0x1F554Cu;
            goto label_1f554c;
        }
    }
    ctx->pc = 0x1F54CCu;
label_1f54cc:
    // 0x1f54cc: 0x0  nop
    ctx->pc = 0x1f54ccu;
    // NOP
    // 0x1f54d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1f54d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f54d4: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1F54D4u;
    SET_GPR_U32(ctx, 31, 0x1F54DCu);
    ctx->pc = 0x1F54D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F54D4u;
            // 0x1f54d8: 0x2405022f  addiu       $a1, $zero, 0x22F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 559));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F54DCu; }
        if (ctx->pc != 0x1F54DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F54DCu; }
        if (ctx->pc != 0x1F54DCu) { return; }
    }
    ctx->pc = 0x1F54DCu;
label_1f54dc:
    // 0x1f54dc: 0x240422d0  addiu       $a0, $zero, 0x22D0
    ctx->pc = 0x1f54dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8912));
    // 0x1f54e0: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x1F54E0u;
    SET_GPR_U32(ctx, 31, 0x1F54E8u);
    ctx->pc = 0x1F54E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F54E0u;
            // 0x1f54e4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F54E8u; }
        if (ctx->pc != 0x1F54E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F54E8u; }
        if (ctx->pc != 0x1F54E8u) { return; }
    }
    ctx->pc = 0x1F54E8u;
label_1f54e8:
    // 0x1f54e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F54E8u;
    {
        const bool branch_taken_0x1f54e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F54ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F54E8u;
            // 0x1f54ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f54e8) {
            ctx->pc = 0x1F54F8u;
            goto label_1f54f8;
        }
    }
    ctx->pc = 0x1F54F0u;
    // 0x1f54f0: 0xc0874b4  jal         func_21D2D0
    ctx->pc = 0x1F54F0u;
    SET_GPR_U32(ctx, 31, 0x1F54F8u);
    ctx->pc = 0x21D2D0u;
    if (runtime->hasFunction(0x21D2D0u)) {
        auto targetFn = runtime->lookupFunction(0x21D2D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F54F8u; }
        if (ctx->pc != 0x1F54F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__7CDC2MesFv_0x21d2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F54F8u; }
        if (ctx->pc != 0x1F54F8u) { return; }
    }
    ctx->pc = 0x1F54F8u;
label_1f54f8:
    // 0x1f54f8: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x1f54f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x1f54fc: 0x246392a0  addiu       $v1, $v1, -0x6D60
    ctx->pc = 0x1f54fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939296));
    // 0x1f5500: 0x729821  addu        $s3, $v1, $s2
    ctx->pc = 0x1f5500u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1f5504: 0xc065a18  jal         func_196860
    ctx->pc = 0x1F5504u;
    SET_GPR_U32(ctx, 31, 0x1F550Cu);
    ctx->pc = 0x1F5508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5504u;
            // 0x1f5508: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196860u;
    if (runtime->hasFunction(0x196860u)) {
        auto targetFn = runtime->lookupFunction(0x196860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F550Cu; }
        if (ctx->pc != 0x1F550Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemMesBuffer__Fv_0x196860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F550Cu; }
        if (ctx->pc != 0x1F550Cu) { return; }
    }
    ctx->pc = 0x1F550Cu;
label_1f550c:
    // 0x1f550c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1f550cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1f5510: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f5510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5514: 0xc0874d8  jal         func_21D360
    ctx->pc = 0x1F5514u;
    SET_GPR_U32(ctx, 31, 0x1F551Cu);
    ctx->pc = 0x1F5518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5514u;
            // 0x1f5518: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D360u;
    if (runtime->hasFunction(0x21D360u)) {
        auto targetFn = runtime->lookupFunction(0x21D360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F551Cu; }
        if (ctx->pc != 0x1F551Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMessData__7CDC2MesFPsPs_0x21d360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F551Cu; }
        if (ctx->pc != 0x1F551Cu) { return; }
    }
    ctx->pc = 0x1F551Cu;
label_1f551c:
    // 0x1f551c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1f551cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1f5520: 0xc0874e8  jal         func_21D3A0
    ctx->pc = 0x1F5520u;
    SET_GPR_U32(ctx, 31, 0x1F5528u);
    ctx->pc = 0x1F5524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5520u;
            // 0x1f5524: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5528u; }
        if (ctx->pc != 0x1F5528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5528u; }
        if (ctx->pc != 0x1F5528u) { return; }
    }
    ctx->pc = 0x1F5528u;
label_1f5528:
    // 0x1f5528: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1f5528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1f552c: 0x3c043fd9  lui         $a0, 0x3FD9
    ctx->pc = 0x1f552cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16345 << 16));
    // 0x1f5530: 0x3485999a  ori         $a1, $a0, 0x999A
    ctx->pc = 0x1f5530u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)39322);
    // 0x1f5534: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f5534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5538: 0xac6501b8  sw          $a1, 0x1B8($v1)
    ctx->pc = 0x1f5538u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 440), GPR_U32(ctx, 5));
    // 0x1f553c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1f553cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1f5540: 0xac6501bc  sw          $a1, 0x1BC($v1)
    ctx->pc = 0x1f5540u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 444), GPR_U32(ctx, 5));
    // 0x1f5544: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1f5544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1f5548: 0xac6417f4  sw          $a0, 0x17F4($v1)
    ctx->pc = 0x1f5548u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6132), GPR_U32(ctx, 4));
label_1f554c:
    // 0x1f554c: 0x0  nop
    ctx->pc = 0x1f554cu;
    // NOP
    // 0x1f5550: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f5550u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f5554: 0x2a230006  slti        $v1, $s1, 0x6
    ctx->pc = 0x1f5554u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1f5558: 0x1460ffd6  bnez        $v1, . + 4 + (-0x2A << 2)
    ctx->pc = 0x1F5558u;
    {
        const bool branch_taken_0x1f5558 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F555Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5558u;
            // 0x1f555c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5558) {
            ctx->pc = 0x1F54B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f54b4;
        }
    }
    ctx->pc = 0x1F5560u;
    // 0x1f5560: 0x1280000b  beqz        $s4, . + 4 + (0xB << 2)
    ctx->pc = 0x1F5560u;
    {
        const bool branch_taken_0x1f5560 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5560u;
            // 0x1f5564: 0x240401e2  addiu       $a0, $zero, 0x1E2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 482));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5560) {
            ctx->pc = 0x1F5590u;
            goto label_1f5590;
        }
    }
    ctx->pc = 0x1F5568u;
    // 0x1f5568: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1f5568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f556c: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1F556Cu;
    SET_GPR_U32(ctx, 31, 0x1F5574u);
    ctx->pc = 0x1F5570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F556Cu;
            // 0x1f5570: 0x24050046  addiu       $a1, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5574u; }
        if (ctx->pc != 0x1F5574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5574u; }
        if (ctx->pc != 0x1F5574u) { return; }
    }
    ctx->pc = 0x1F5574u;
label_1f5574:
    // 0x1f5574: 0x24040440  addiu       $a0, $zero, 0x440
    ctx->pc = 0x1f5574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1088));
    // 0x1f5578: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x1F5578u;
    SET_GPR_U32(ctx, 31, 0x1F5580u);
    ctx->pc = 0x1F557Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5578u;
            // 0x1f557c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5580u; }
        if (ctx->pc != 0x1F5580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5580u; }
        if (ctx->pc != 0x1F5580u) { return; }
    }
    ctx->pc = 0x1F5580u;
label_1f5580:
    // 0x1f5580: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f5580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5584: 0xaf828ff0  sw          $v0, -0x7010($gp)
    ctx->pc = 0x1f5584u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938608), GPR_U32(ctx, 2));
    // 0x1f5588: 0xa3838f94  sb          $v1, -0x706C($gp)
    ctx->pc = 0x1f5588u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938516), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f558c: 0x240401e2  addiu       $a0, $zero, 0x1E2
    ctx->pc = 0x1f558cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 482));
label_1f5590:
    // 0x1f5590: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x1f5590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x1f5594: 0xa7848fa4  sh          $a0, -0x705C($gp)
    ctx->pc = 0x1f5594u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294938532), (uint16_t)GPR_U32(ctx, 4));
    // 0x1f5598: 0xa7838fa6  sh          $v1, -0x705A($gp)
    ctx->pc = 0x1f5598u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294938534), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f559c: 0x8f858780  lw          $a1, -0x7880($gp)
    ctx->pc = 0x1f559cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x1f55a0: 0x87838fa4  lh          $v1, -0x705C($gp)
    ctx->pc = 0x1f55a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938532)));
    // 0x1f55a4: 0x8f848784  lw          $a0, -0x787C($gp)
    ctx->pc = 0x1f55a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x1f55a8: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x1f55a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1f55ac: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x1f55acu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1f55b0: 0xa7838fa0  sh          $v1, -0x7060($gp)
    ctx->pc = 0x1f55b0u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294938528), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f55b4: 0x87838fa6  lh          $v1, -0x705A($gp)
    ctx->pc = 0x1f55b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938534)));
    // 0x1f55b8: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1f55b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1f55bc: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x1f55bcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1f55c0: 0xa7838fa2  sh          $v1, -0x705E($gp)
    ctx->pc = 0x1f55c0u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294938530), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f55c4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1f55c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f55c8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f55c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f55cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f55ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f55d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f55d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f55d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f55d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f55d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f55d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f55dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F55DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F55E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F55DCu;
            // 0x1f55e0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F55E4u;
}
