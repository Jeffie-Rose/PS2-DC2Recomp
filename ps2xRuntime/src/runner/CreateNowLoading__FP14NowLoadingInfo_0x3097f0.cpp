#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreateNowLoading__FP14NowLoadingInfo
// Address: 0x3097f0 - 0x3099e0
void CreateNowLoading__FP14NowLoadingInfo_0x3097f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreateNowLoading__FP14NowLoadingInfo_0x3097f0");
#endif

    switch (ctx->pc) {
        case 0x3098ccu: goto label_3098cc;
        case 0x3098d8u: goto label_3098d8;
        case 0x3098e8u: goto label_3098e8;
        case 0x3098fcu: goto label_3098fc;
        case 0x309924u: goto label_309924;
        case 0x309944u: goto label_309944;
        case 0x3099bcu: goto label_3099bc;
        case 0x3099ccu: goto label_3099cc;
        default: break;
    }

    ctx->pc = 0x3097f0u;

    // 0x3097f0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x3097f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x3097f4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3097f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3097f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3097f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3097fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3097fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x309800: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x309800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x309804: 0xaf8385f4  sw          $v1, -0x7A0C($gp)
    ctx->pc = 0x309804u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936052), GPR_U32(ctx, 3));
    // 0x309808: 0x8f83a1a0  lw          $v1, -0x5E60($gp)
    ctx->pc = 0x309808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943136)));
    // 0x30980c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30980Cu;
    {
        const bool branch_taken_0x30980c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30980c) {
            ctx->pc = 0x30981Cu;
            goto label_30981c;
        }
    }
    ctx->pc = 0x309814u;
    // 0x309814: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x309814u;
    {
        const bool branch_taken_0x309814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309814u;
            // 0x309818: 0xaf80a1a0  sw          $zero, -0x5E60($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309814) {
            ctx->pc = 0x3099CCu;
            goto label_3099cc;
        }
    }
    ctx->pc = 0x30981Cu;
label_30981c:
    // 0x30981c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x30981cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x309820: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x309820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x309824: 0x3c1001f6  lui         $s0, 0x1F6
    ctx->pc = 0x309824u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)502 << 16));
    // 0x309828: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x309828u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x30982c: 0x2610b488  addiu       $s0, $s0, -0x4B78
    ctx->pc = 0x30982cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294947976));
    // 0x309830: 0x24a52460  addiu       $a1, $a1, 0x2460
    ctx->pc = 0x309830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9312));
    // 0x309834: 0xac22b480  sw          $v0, -0x4B80($at)
    ctx->pc = 0x309834u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294947968), GPR_U32(ctx, 2));
    // 0x309838: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x309838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x30983c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30983cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x309840: 0xac22b484  sw          $v0, -0x4B7C($at)
    ctx->pc = 0x309840u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294947972), GPR_U32(ctx, 2));
    // 0x309844: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x309844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x309848: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x309848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x30984c: 0xc482000c  lwc1        $f2, 0xC($a0)
    ctx->pc = 0x30984cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x309850: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x309850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x309854: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x309854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309858: 0xe6030000  swc1        $f3, 0x0($s0)
    ctx->pc = 0x309858u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x30985c: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x30985cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x309860: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x309860u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x309864: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x309864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x309868: 0xc4830018  lwc1        $f3, 0x18($a0)
    ctx->pc = 0x309868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30986c: 0xc482001c  lwc1        $f2, 0x1C($a0)
    ctx->pc = 0x30986cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x309870: 0xc4810020  lwc1        $f1, 0x20($a0)
    ctx->pc = 0x309870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x309874: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x309874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309878: 0xe6030010  swc1        $f3, 0x10($s0)
    ctx->pc = 0x309878u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x30987c: 0xe6020014  swc1        $f2, 0x14($s0)
    ctx->pc = 0x30987cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x309880: 0xe6010018  swc1        $f1, 0x18($s0)
    ctx->pc = 0x309880u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x309884: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x309884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x309888: 0xc4830028  lwc1        $f3, 0x28($a0)
    ctx->pc = 0x309888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30988c: 0xc482002c  lwc1        $f2, 0x2C($a0)
    ctx->pc = 0x30988cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x309890: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x309890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x309894: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x309894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309898: 0xe6030020  swc1        $f3, 0x20($s0)
    ctx->pc = 0x309898u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x30989c: 0xe6020024  swc1        $f2, 0x24($s0)
    ctx->pc = 0x30989cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x3098a0: 0xe6010028  swc1        $f1, 0x28($s0)
    ctx->pc = 0x3098a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x3098a4: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x3098a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x3098a8: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x3098a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x3098ac: 0x8f868ad0  lw          $a2, -0x7530($gp)
    ctx->pc = 0x3098acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x3098b0: 0xac22b4b8  sw          $v0, -0x4B48($at)
    ctx->pc = 0x3098b0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948024), GPR_U32(ctx, 2));
    // 0x3098b4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3098b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3098b8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x3098b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3098bc: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x3098bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3098c0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3098c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3098c4: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x3098C4u;
    SET_GPR_U32(ctx, 31, 0x3098CCu);
    ctx->pc = 0x3098C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3098C4u;
            // 0x3098c8: 0x438821  addu        $s1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3098CCu; }
        if (ctx->pc != 0x3098CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3098CCu; }
        if (ctx->pc != 0x3098CCu) { return; }
    }
    ctx->pc = 0x3098CCu;
label_3098cc:
    // 0x3098cc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3098ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3098d0: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x3098D0u;
    SET_GPR_U32(ctx, 31, 0x3098D8u);
    ctx->pc = 0x3098D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3098D0u;
            // 0x3098d4: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3098D8u; }
        if (ctx->pc != 0x3098D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3098D8u; }
        if (ctx->pc != 0x3098D8u) { return; }
    }
    ctx->pc = 0x3098D8u;
label_3098d8:
    // 0x3098d8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x3098d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x3098dc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3098dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3098e0: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x3098E0u;
    SET_GPR_U32(ctx, 31, 0x3098E8u);
    ctx->pc = 0x3098E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3098E0u;
            // 0x3098e4: 0x24a52468  addiu       $a1, $a1, 0x2468 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3098E8u; }
        if (ctx->pc != 0x3098E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3098E8u; }
        if (ctx->pc != 0x3098E8u) { return; }
    }
    ctx->pc = 0x3098E8u;
label_3098e8:
    // 0x3098e8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3098e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3098ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3098ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3098f0: 0x27a600ec  addiu       $a2, $sp, 0xEC
    ctx->pc = 0x3098f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x3098f4: 0xc0524dc  jal         func_149370
    ctx->pc = 0x3098F4u;
    SET_GPR_U32(ctx, 31, 0x3098FCu);
    ctx->pc = 0x3098F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3098F4u;
            // 0x3098f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3098FCu; }
        if (ctx->pc != 0x3098FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3098FCu; }
        if (ctx->pc != 0x3098FCu) { return; }
    }
    ctx->pc = 0x3098FCu;
label_3098fc:
    // 0x3098fc: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x3098FCu;
    {
        const bool branch_taken_0x3098fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3098fc) {
            ctx->pc = 0x3099CCu;
            goto label_3099cc;
        }
    }
    ctx->pc = 0x309904u;
    // 0x309904: 0x8fa300ec  lw          $v1, 0xEC($sp)
    ctx->pc = 0x309904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x309908: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x309908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x30990c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30990Cu;
    {
        const bool branch_taken_0x30990c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x309910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30990Cu;
            // 0x309910: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30990c) {
            ctx->pc = 0x30991Cu;
            goto label_30991c;
        }
    }
    ctx->pc = 0x309914u;
    // 0x309914: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x309914u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x309918: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x309918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_30991c:
    // 0x30991c: 0xc04e748  jal         func_139D20
    ctx->pc = 0x30991Cu;
    SET_GPR_U32(ctx, 31, 0x309924u);
    ctx->pc = 0x309920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30991Cu;
            // 0x309920: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309924u; }
        if (ctx->pc != 0x309924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309924u; }
        if (ctx->pc != 0x309924u) { return; }
    }
    ctx->pc = 0x309924u;
label_309924:
    // 0x309924: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x309924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x309928: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x309928u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x30992c: 0x8c26b480  lw          $a2, -0x4B80($at)
    ctx->pc = 0x30992cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294947968)));
    // 0x309930: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x309930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309934: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x309934u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309938: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x309938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x30993c: 0xc04b6a4  jal         func_12DA90
    ctx->pc = 0x30993Cu;
    SET_GPR_U32(ctx, 31, 0x309944u);
    ctx->pc = 0x309940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30993Cu;
            // 0x309940: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309944u; }
        if (ctx->pc != 0x309944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309944u; }
        if (ctx->pc != 0x309944u) { return; }
    }
    ctx->pc = 0x309944u;
label_309944:
    // 0x309944: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x309944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x309948: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x309948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x30994c: 0xc420b4b8  lwc1        $f0, -0x4B48($at)
    ctx->pc = 0x30994cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294948024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309950: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x309950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x309954: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x309954u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x309958: 0xaf80a18c  sw          $zero, -0x5E74($gp)
    ctx->pc = 0x309958u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943116), GPR_U32(ctx, 0));
    // 0x30995c: 0xaf80a198  sw          $zero, -0x5E68($gp)
    ctx->pc = 0x30995cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943128), GPR_U32(ctx, 0));
    // 0x309960: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x309960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x309964: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x309964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x309968: 0xaf80a194  sw          $zero, -0x5E6C($gp)
    ctx->pc = 0x309968u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943124), GPR_U32(ctx, 0));
    // 0x30996c: 0x24429480  addiu       $v0, $v0, -0x6B80
    ctx->pc = 0x30996cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939776));
    // 0x309970: 0xaf8085f4  sw          $zero, -0x7A0C($gp)
    ctx->pc = 0x309970u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936052), GPR_U32(ctx, 0));
    // 0x309974: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x309974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    // 0x309978: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x309978u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x30997c: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x30997cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x309980: 0x2442a480  addiu       $v0, $v0, -0x5B80
    ctx->pc = 0x309980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943872));
    // 0x309984: 0xaf80a19c  sw          $zero, -0x5E64($gp)
    ctx->pc = 0x309984u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943132), GPR_U32(ctx, 0));
    // 0x309988: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x309988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x30998c: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x30998cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x309990: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x309990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x309994: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x309994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x309998: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x309998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x30999c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x30999cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3099a0: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x3099a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
    // 0x3099a4: 0x27820000  addiu       $v0, $gp, 0x0
    ctx->pc = 0x3099a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 0));
    // 0x3099a8: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x3099a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x3099ac: 0x0  nop
    ctx->pc = 0x3099acu;
    // NOP
    // 0x3099b0: 0x0  nop
    ctx->pc = 0x3099b0u;
    // NOP
    // 0x3099b4: 0xc043fb8  jal         func_10FEE0
    ctx->pc = 0x3099B4u;
    SET_GPR_U32(ctx, 31, 0x3099BCu);
    ctx->pc = 0x3099B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3099B4u;
            // 0x3099b8: 0xe780a190  swc1        $f0, -0x5E70($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294943120), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FEE0u;
    if (runtime->hasFunction(0x10FEE0u)) {
        auto targetFn = runtime->lookupFunction(0x10FEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3099BCu; }
        if (ctx->pc != 0x3099BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateThread_0x10fee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3099BCu; }
        if (ctx->pc != 0x3099BCu) { return; }
    }
    ctx->pc = 0x3099BCu;
label_3099bc:
    // 0x3099bc: 0xaf82a188  sw          $v0, -0x5E78($gp)
    ctx->pc = 0x3099bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943112), GPR_U32(ctx, 2));
    // 0x3099c0: 0x8f84a188  lw          $a0, -0x5E78($gp)
    ctx->pc = 0x3099c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943112)));
    // 0x3099c4: 0xc043fc0  jal         func_10FF00
    ctx->pc = 0x3099C4u;
    SET_GPR_U32(ctx, 31, 0x3099CCu);
    ctx->pc = 0x3099C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3099C4u;
            // 0x3099c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FF00u;
    if (runtime->hasFunction(0x10FF00u)) {
        auto targetFn = runtime->lookupFunction(0x10FF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3099CCu; }
        if (ctx->pc != 0x3099CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartThread_0x10ff00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3099CCu; }
        if (ctx->pc != 0x3099CCu) { return; }
    }
    ctx->pc = 0x3099CCu;
label_3099cc:
    // 0x3099cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3099ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3099d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3099d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3099d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3099d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3099d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3099D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3099DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3099D8u;
            // 0x3099dc: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3099E0u;
}
