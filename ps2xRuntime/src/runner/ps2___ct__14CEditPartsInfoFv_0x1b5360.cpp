#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__14CEditPartsInfoFv
// Address: 0x1b5360 - 0x1b554c
void ps2___ct__14CEditPartsInfoFv_0x1b5360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__14CEditPartsInfoFv_0x1b5360");
#endif

    switch (ctx->pc) {
        case 0x1b5398u: goto label_1b5398;
        case 0x1b53b8u: goto label_1b53b8;
        case 0x1b53f0u: goto label_1b53f0;
        case 0x1b5410u: goto label_1b5410;
        case 0x1b5448u: goto label_1b5448;
        case 0x1b5468u: goto label_1b5468;
        case 0x1b54a0u: goto label_1b54a0;
        case 0x1b54c0u: goto label_1b54c0;
        case 0x1b54f8u: goto label_1b54f8;
        case 0x1b5518u: goto label_1b5518;
        case 0x1b5534u: goto label_1b5534;
        default: break;
    }

    ctx->pc = 0x1b5360u;

    // 0x1b5360: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b5360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b5364: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b5364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b5368: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b5368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b536c: 0x24425270  addiu       $v0, $v0, 0x5270
    ctx->pc = 0x1b536cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21104));
    // 0x1b5370: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b5370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b5374: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b5374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5378: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b5378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b537c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1b537cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1b5380: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b5380u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5384: 0xac8200f0  sw          $v0, 0xF0($a0)
    ctx->pc = 0x1b5384u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 2));
    // 0x1b5388: 0x261100d0  addiu       $s1, $s0, 0xD0
    ctx->pc = 0x1b5388u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x1b538c: 0xac8000c0  sw          $zero, 0xC0($a0)
    ctx->pc = 0x1b538cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 0));
    // 0x1b5390: 0xc049c86  jal         func_127218
    ctx->pc = 0x1B5390u;
    SET_GPR_U32(ctx, 31, 0x1B5398u);
    ctx->pc = 0x1B5394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5390u;
            // 0x1b5394: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5398u; }
        if (ctx->pc != 0x1B5398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5398u; }
        if (ctx->pc != 0x1B5398u) { return; }
    }
    ctx->pc = 0x1B5398u;
label_1b5398:
    // 0x1b5398: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b5398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b539c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b539cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b53a0: 0x24425240  addiu       $v0, $v0, 0x5240
    ctx->pc = 0x1b53a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21056));
    // 0x1b53a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b53a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b53a8: 0xae0200f0  sw          $v0, 0xF0($s0)
    ctx->pc = 0x1b53a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
    // 0x1b53ac: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1b53acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1b53b0: 0xc049c86  jal         func_127218
    ctx->pc = 0x1B53B0u;
    SET_GPR_U32(ctx, 31, 0x1B53B8u);
    ctx->pc = 0x1B53B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B53B0u;
            // 0x1b53b4: 0xae0000c0  sw          $zero, 0xC0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B53B8u; }
        if (ctx->pc != 0x1B53B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B53B8u; }
        if (ctx->pc != 0x1B53B8u) { return; }
    }
    ctx->pc = 0x1B53B8u;
label_1b53b8:
    // 0x1b53b8: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x1b53b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
    // 0x1b53bc: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1b53bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1b53c0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b53c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b53c4: 0x246359e0  addiu       $v1, $v1, 0x59E0
    ctx->pc = 0x1b53c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23008));
    // 0x1b53c8: 0xae000104  sw          $zero, 0x104($s0)
    ctx->pc = 0x1b53c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 0));
    // 0x1b53cc: 0x26110120  addiu       $s1, $s0, 0x120
    ctx->pc = 0x1b53ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x1b53d0: 0x24425270  addiu       $v0, $v0, 0x5270
    ctx->pc = 0x1b53d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21104));
    // 0x1b53d4: 0xae0300f0  sw          $v1, 0xF0($s0)
    ctx->pc = 0x1b53d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 3));
    // 0x1b53d8: 0xae020140  sw          $v0, 0x140($s0)
    ctx->pc = 0x1b53d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 2));
    // 0x1b53dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b53dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b53e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b53e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b53e4: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1b53e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1b53e8: 0xc049c86  jal         func_127218
    ctx->pc = 0x1B53E8u;
    SET_GPR_U32(ctx, 31, 0x1B53F0u);
    ctx->pc = 0x1B53ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B53E8u;
            // 0x1b53ec: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B53F0u; }
        if (ctx->pc != 0x1B53F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B53F0u; }
        if (ctx->pc != 0x1B53F0u) { return; }
    }
    ctx->pc = 0x1B53F0u;
label_1b53f0:
    // 0x1b53f0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b53f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b53f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b53f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b53f8: 0x24425240  addiu       $v0, $v0, 0x5240
    ctx->pc = 0x1b53f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21056));
    // 0x1b53fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b53fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5400: 0xae020140  sw          $v0, 0x140($s0)
    ctx->pc = 0x1b5400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 2));
    // 0x1b5404: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1b5404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1b5408: 0xc049c86  jal         func_127218
    ctx->pc = 0x1B5408u;
    SET_GPR_U32(ctx, 31, 0x1B5410u);
    ctx->pc = 0x1B540Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5408u;
            // 0x1b540c: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5410u; }
        if (ctx->pc != 0x1B5410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5410u; }
        if (ctx->pc != 0x1B5410u) { return; }
    }
    ctx->pc = 0x1B5410u;
label_1b5410:
    // 0x1b5410: 0xae000150  sw          $zero, 0x150($s0)
    ctx->pc = 0x1b5410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 0));
    // 0x1b5414: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1b5414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1b5418: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b5418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b541c: 0x246359e0  addiu       $v1, $v1, 0x59E0
    ctx->pc = 0x1b541cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23008));
    // 0x1b5420: 0xae000154  sw          $zero, 0x154($s0)
    ctx->pc = 0x1b5420u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 0));
    // 0x1b5424: 0x26110170  addiu       $s1, $s0, 0x170
    ctx->pc = 0x1b5424u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 368));
    // 0x1b5428: 0x24425270  addiu       $v0, $v0, 0x5270
    ctx->pc = 0x1b5428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21104));
    // 0x1b542c: 0xae030140  sw          $v1, 0x140($s0)
    ctx->pc = 0x1b542cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 3));
    // 0x1b5430: 0xae020190  sw          $v0, 0x190($s0)
    ctx->pc = 0x1b5430u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 2));
    // 0x1b5434: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5438: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b5438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b543c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1b543cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1b5440: 0xc049c86  jal         func_127218
    ctx->pc = 0x1B5440u;
    SET_GPR_U32(ctx, 31, 0x1B5448u);
    ctx->pc = 0x1B5444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5440u;
            // 0x1b5444: 0xae000160  sw          $zero, 0x160($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5448u; }
        if (ctx->pc != 0x1B5448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5448u; }
        if (ctx->pc != 0x1B5448u) { return; }
    }
    ctx->pc = 0x1B5448u;
label_1b5448:
    // 0x1b5448: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b5448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b544c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b544cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5450: 0x24425240  addiu       $v0, $v0, 0x5240
    ctx->pc = 0x1b5450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21056));
    // 0x1b5454: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b5454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5458: 0xae020190  sw          $v0, 0x190($s0)
    ctx->pc = 0x1b5458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 2));
    // 0x1b545c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1b545cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1b5460: 0xc049c86  jal         func_127218
    ctx->pc = 0x1B5460u;
    SET_GPR_U32(ctx, 31, 0x1B5468u);
    ctx->pc = 0x1B5464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5460u;
            // 0x1b5464: 0xae000160  sw          $zero, 0x160($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5468u; }
        if (ctx->pc != 0x1B5468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5468u; }
        if (ctx->pc != 0x1B5468u) { return; }
    }
    ctx->pc = 0x1B5468u;
label_1b5468:
    // 0x1b5468: 0xae0001a0  sw          $zero, 0x1A0($s0)
    ctx->pc = 0x1b5468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 416), GPR_U32(ctx, 0));
    // 0x1b546c: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1b546cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1b5470: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b5470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b5474: 0x246359e0  addiu       $v1, $v1, 0x59E0
    ctx->pc = 0x1b5474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23008));
    // 0x1b5478: 0xae0001a4  sw          $zero, 0x1A4($s0)
    ctx->pc = 0x1b5478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 420), GPR_U32(ctx, 0));
    // 0x1b547c: 0x261101c0  addiu       $s1, $s0, 0x1C0
    ctx->pc = 0x1b547cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    // 0x1b5480: 0x24425270  addiu       $v0, $v0, 0x5270
    ctx->pc = 0x1b5480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21104));
    // 0x1b5484: 0xae030190  sw          $v1, 0x190($s0)
    ctx->pc = 0x1b5484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 3));
    // 0x1b5488: 0xae0201e0  sw          $v0, 0x1E0($s0)
    ctx->pc = 0x1b5488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 2));
    // 0x1b548c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b548cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5490: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b5490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5494: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1b5494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1b5498: 0xc049c86  jal         func_127218
    ctx->pc = 0x1B5498u;
    SET_GPR_U32(ctx, 31, 0x1B54A0u);
    ctx->pc = 0x1B549Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5498u;
            // 0x1b549c: 0xae0001b0  sw          $zero, 0x1B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B54A0u; }
        if (ctx->pc != 0x1B54A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B54A0u; }
        if (ctx->pc != 0x1B54A0u) { return; }
    }
    ctx->pc = 0x1B54A0u;
label_1b54a0:
    // 0x1b54a0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b54a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b54a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b54a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b54a8: 0x24425240  addiu       $v0, $v0, 0x5240
    ctx->pc = 0x1b54a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21056));
    // 0x1b54ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b54acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b54b0: 0xae0201e0  sw          $v0, 0x1E0($s0)
    ctx->pc = 0x1b54b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 2));
    // 0x1b54b4: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1b54b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1b54b8: 0xc049c86  jal         func_127218
    ctx->pc = 0x1B54B8u;
    SET_GPR_U32(ctx, 31, 0x1B54C0u);
    ctx->pc = 0x1B54BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B54B8u;
            // 0x1b54bc: 0xae0001b0  sw          $zero, 0x1B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B54C0u; }
        if (ctx->pc != 0x1B54C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B54C0u; }
        if (ctx->pc != 0x1B54C0u) { return; }
    }
    ctx->pc = 0x1B54C0u;
label_1b54c0:
    // 0x1b54c0: 0xae0001f0  sw          $zero, 0x1F0($s0)
    ctx->pc = 0x1b54c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 496), GPR_U32(ctx, 0));
    // 0x1b54c4: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1b54c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1b54c8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b54c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b54cc: 0x246359e0  addiu       $v1, $v1, 0x59E0
    ctx->pc = 0x1b54ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23008));
    // 0x1b54d0: 0xae0001f4  sw          $zero, 0x1F4($s0)
    ctx->pc = 0x1b54d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 500), GPR_U32(ctx, 0));
    // 0x1b54d4: 0x26110210  addiu       $s1, $s0, 0x210
    ctx->pc = 0x1b54d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
    // 0x1b54d8: 0x24425270  addiu       $v0, $v0, 0x5270
    ctx->pc = 0x1b54d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21104));
    // 0x1b54dc: 0xae0301e0  sw          $v1, 0x1E0($s0)
    ctx->pc = 0x1b54dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 3));
    // 0x1b54e0: 0xae020230  sw          $v0, 0x230($s0)
    ctx->pc = 0x1b54e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 2));
    // 0x1b54e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b54e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b54e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b54e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b54ec: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1b54ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1b54f0: 0xc049c86  jal         func_127218
    ctx->pc = 0x1B54F0u;
    SET_GPR_U32(ctx, 31, 0x1B54F8u);
    ctx->pc = 0x1B54F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B54F0u;
            // 0x1b54f4: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B54F8u; }
        if (ctx->pc != 0x1B54F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B54F8u; }
        if (ctx->pc != 0x1B54F8u) { return; }
    }
    ctx->pc = 0x1B54F8u;
label_1b54f8:
    // 0x1b54f8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b54f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b54fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b54fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5500: 0x24425240  addiu       $v0, $v0, 0x5240
    ctx->pc = 0x1b5500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21056));
    // 0x1b5504: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b5504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5508: 0xae020230  sw          $v0, 0x230($s0)
    ctx->pc = 0x1b5508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 2));
    // 0x1b550c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1b550cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1b5510: 0xc049c86  jal         func_127218
    ctx->pc = 0x1B5510u;
    SET_GPR_U32(ctx, 31, 0x1B5518u);
    ctx->pc = 0x1B5514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5510u;
            // 0x1b5514: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5518u; }
        if (ctx->pc != 0x1B5518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5518u; }
        if (ctx->pc != 0x1B5518u) { return; }
    }
    ctx->pc = 0x1B5518u;
label_1b5518:
    // 0x1b5518: 0xae000240  sw          $zero, 0x240($s0)
    ctx->pc = 0x1b5518u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 0));
    // 0x1b551c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b551cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b5520: 0x244259e0  addiu       $v0, $v0, 0x59E0
    ctx->pc = 0x1b5520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23008));
    // 0x1b5524: 0xae000244  sw          $zero, 0x244($s0)
    ctx->pc = 0x1b5524u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 580), GPR_U32(ctx, 0));
    // 0x1b5528: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b5528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b552c: 0xc06d554  jal         func_1B5550
    ctx->pc = 0x1B552Cu;
    SET_GPR_U32(ctx, 31, 0x1B5534u);
    ctx->pc = 0x1B5530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B552Cu;
            // 0x1b5530: 0xae020230  sw          $v0, 0x230($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5550u;
    if (runtime->hasFunction(0x1B5550u)) {
        auto targetFn = runtime->lookupFunction(0x1B5550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5534u; }
        if (ctx->pc != 0x1B5534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__14CEditPartsInfoFv_0x1b5550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5534u; }
        if (ctx->pc != 0x1B5534u) { return; }
    }
    ctx->pc = 0x1B5534u;
label_1b5534:
    // 0x1b5534: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b5534u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5538: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b5538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b553c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b553cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b5540: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b5540u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5544: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5544u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5544u;
            // 0x1b5548: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B554Cu;
}
