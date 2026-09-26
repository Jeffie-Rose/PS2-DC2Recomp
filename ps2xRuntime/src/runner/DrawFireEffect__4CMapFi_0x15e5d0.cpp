#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawFireEffect__4CMapFi
// Address: 0x15e5d0 - 0x15e71c
void DrawFireEffect__4CMapFi_0x15e5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawFireEffect__4CMapFi_0x15e5d0");
#endif

    switch (ctx->pc) {
        case 0x15e5d0u: goto label_15e5d0;
        case 0x15e5d4u: goto label_15e5d4;
        case 0x15e5d8u: goto label_15e5d8;
        case 0x15e5dcu: goto label_15e5dc;
        case 0x15e5e0u: goto label_15e5e0;
        case 0x15e5e4u: goto label_15e5e4;
        case 0x15e5e8u: goto label_15e5e8;
        case 0x15e5ecu: goto label_15e5ec;
        case 0x15e5f0u: goto label_15e5f0;
        case 0x15e5f4u: goto label_15e5f4;
        case 0x15e5f8u: goto label_15e5f8;
        case 0x15e5fcu: goto label_15e5fc;
        case 0x15e600u: goto label_15e600;
        case 0x15e604u: goto label_15e604;
        case 0x15e608u: goto label_15e608;
        case 0x15e60cu: goto label_15e60c;
        case 0x15e610u: goto label_15e610;
        case 0x15e614u: goto label_15e614;
        case 0x15e618u: goto label_15e618;
        case 0x15e61cu: goto label_15e61c;
        case 0x15e620u: goto label_15e620;
        case 0x15e624u: goto label_15e624;
        case 0x15e628u: goto label_15e628;
        case 0x15e62cu: goto label_15e62c;
        case 0x15e630u: goto label_15e630;
        case 0x15e634u: goto label_15e634;
        case 0x15e638u: goto label_15e638;
        case 0x15e63cu: goto label_15e63c;
        case 0x15e640u: goto label_15e640;
        case 0x15e644u: goto label_15e644;
        case 0x15e648u: goto label_15e648;
        case 0x15e64cu: goto label_15e64c;
        case 0x15e650u: goto label_15e650;
        case 0x15e654u: goto label_15e654;
        case 0x15e658u: goto label_15e658;
        case 0x15e65cu: goto label_15e65c;
        case 0x15e660u: goto label_15e660;
        case 0x15e664u: goto label_15e664;
        case 0x15e668u: goto label_15e668;
        case 0x15e66cu: goto label_15e66c;
        case 0x15e670u: goto label_15e670;
        case 0x15e674u: goto label_15e674;
        case 0x15e678u: goto label_15e678;
        case 0x15e67cu: goto label_15e67c;
        case 0x15e680u: goto label_15e680;
        case 0x15e684u: goto label_15e684;
        case 0x15e688u: goto label_15e688;
        case 0x15e68cu: goto label_15e68c;
        case 0x15e690u: goto label_15e690;
        case 0x15e694u: goto label_15e694;
        case 0x15e698u: goto label_15e698;
        case 0x15e69cu: goto label_15e69c;
        case 0x15e6a0u: goto label_15e6a0;
        case 0x15e6a4u: goto label_15e6a4;
        case 0x15e6a8u: goto label_15e6a8;
        case 0x15e6acu: goto label_15e6ac;
        case 0x15e6b0u: goto label_15e6b0;
        case 0x15e6b4u: goto label_15e6b4;
        case 0x15e6b8u: goto label_15e6b8;
        case 0x15e6bcu: goto label_15e6bc;
        case 0x15e6c0u: goto label_15e6c0;
        case 0x15e6c4u: goto label_15e6c4;
        case 0x15e6c8u: goto label_15e6c8;
        case 0x15e6ccu: goto label_15e6cc;
        case 0x15e6d0u: goto label_15e6d0;
        case 0x15e6d4u: goto label_15e6d4;
        case 0x15e6d8u: goto label_15e6d8;
        case 0x15e6dcu: goto label_15e6dc;
        case 0x15e6e0u: goto label_15e6e0;
        case 0x15e6e4u: goto label_15e6e4;
        case 0x15e6e8u: goto label_15e6e8;
        case 0x15e6ecu: goto label_15e6ec;
        case 0x15e6f0u: goto label_15e6f0;
        case 0x15e6f4u: goto label_15e6f4;
        case 0x15e6f8u: goto label_15e6f8;
        case 0x15e6fcu: goto label_15e6fc;
        case 0x15e700u: goto label_15e700;
        case 0x15e704u: goto label_15e704;
        case 0x15e708u: goto label_15e708;
        case 0x15e70cu: goto label_15e70c;
        case 0x15e710u: goto label_15e710;
        case 0x15e714u: goto label_15e714;
        case 0x15e718u: goto label_15e718;
        default: break;
    }

    ctx->pc = 0x15e5d0u;

label_15e5d0:
    // 0x15e5d0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x15e5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_15e5d4:
    // 0x15e5d4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x15e5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_15e5d8:
    // 0x15e5d8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15e5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_15e5dc:
    // 0x15e5dc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15e5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_15e5e0:
    // 0x15e5e0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x15e5e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15e5e4:
    // 0x15e5e4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15e5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_15e5e8:
    // 0x15e5e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15e5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_15e5ec:
    // 0x15e5ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15e5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15e5f0:
    // 0x15e5f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15e5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_15e5f4:
    // 0x15e5f4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x15e5f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_15e5f8:
    // 0x15e5f8: 0xafa000b8  sw          $zero, 0xB8($sp)
    ctx->pc = 0x15e5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
label_15e5fc:
    // 0x15e5fc: 0xc0575cc  jal         func_15D730
label_15e600:
    if (ctx->pc == 0x15E600u) {
        ctx->pc = 0x15E600u;
            // 0x15e600: 0x27a500b8  addiu       $a1, $sp, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
        ctx->pc = 0x15E604u;
        goto label_15e604;
    }
    ctx->pc = 0x15E5FCu;
    SET_GPR_U32(ctx, 31, 0x15E604u);
    ctx->pc = 0x15E600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E5FCu;
            // 0x15e600: 0x27a500b8  addiu       $a1, $sp, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D730u;
    if (runtime->hasFunction(0x15D730u)) {
        auto targetFn = runtime->lookupFunction(0x15D730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E604u; }
        if (ctx->pc != 0x15E604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateFuncCheck__4CMapFP15CFuncPointCheck_0x15d730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E604u; }
        if (ctx->pc != 0x15E604u) { return; }
    }
    ctx->pc = 0x15E604u;
label_15e604:
    // 0x15e604: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x15e604u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
label_15e608:
    // 0x15e608: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15e608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15e60c:
    // 0x15e60c: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x15e60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
label_15e610:
    // 0x15e610: 0xc04ba14  jal         func_12E850
label_15e614:
    if (ctx->pc == 0x15E614u) {
        ctx->pc = 0x15E614u;
            // 0x15e614: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15E618u;
        goto label_15e618;
    }
    ctx->pc = 0x15E610u;
    SET_GPR_U32(ctx, 31, 0x15E618u);
    ctx->pc = 0x15E614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E610u;
            // 0x15e614: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E618u; }
        if (ctx->pc != 0x15E618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E618u; }
        if (ctx->pc != 0x15E618u) { return; }
    }
    ctx->pc = 0x15E618u;
label_15e618:
    // 0x15e618: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x15e618u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
label_15e61c:
    // 0x15e61c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x15e61cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_15e620:
    // 0x15e620: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x15e620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
label_15e624:
    // 0x15e624: 0x24a52d00  addiu       $a1, $a1, 0x2D00
    ctx->pc = 0x15e624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11520));
label_15e628:
    // 0x15e628: 0xc04b414  jal         func_12D050
label_15e62c:
    if (ctx->pc == 0x15E62Cu) {
        ctx->pc = 0x15E62Cu;
            // 0x15e62c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15E630u;
        goto label_15e630;
    }
    ctx->pc = 0x15E628u;
    SET_GPR_U32(ctx, 31, 0x15E630u);
    ctx->pc = 0x15E62Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E628u;
            // 0x15e62c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E630u; }
        if (ctx->pc != 0x15E630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E630u; }
        if (ctx->pc != 0x15E630u) { return; }
    }
    ctx->pc = 0x15E630u;
label_15e630:
    // 0x15e630: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x15e630u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15e634:
    // 0x15e634: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x15e634u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
label_15e638:
    // 0x15e638: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x15e638u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_15e63c:
    // 0x15e63c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15e63cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15e640:
    // 0x15e640: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x15e640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
label_15e644:
    // 0x15e644: 0xc04b414  jal         func_12D050
label_15e648:
    if (ctx->pc == 0x15E648u) {
        ctx->pc = 0x15E648u;
            // 0x15e648: 0x24a52d10  addiu       $a1, $a1, 0x2D10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11536));
        ctx->pc = 0x15E64Cu;
        goto label_15e64c;
    }
    ctx->pc = 0x15E644u;
    SET_GPR_U32(ctx, 31, 0x15E64Cu);
    ctx->pc = 0x15E648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E644u;
            // 0x15e648: 0x24a52d10  addiu       $a1, $a1, 0x2D10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E64Cu; }
        if (ctx->pc != 0x15E64Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E64Cu; }
        if (ctx->pc != 0x15E64Cu) { return; }
    }
    ctx->pc = 0x15E64Cu;
label_15e64c:
    // 0x15e64c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15e64cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15e650:
    // 0x15e650: 0xc04c050  jal         func_130140
label_15e654:
    if (ctx->pc == 0x15E654u) {
        ctx->pc = 0x15E654u;
            // 0x15e654: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x15E658u;
        goto label_15e658;
    }
    ctx->pc = 0x15E650u;
    SET_GPR_U32(ctx, 31, 0x15E658u);
    ctx->pc = 0x15E654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E650u;
            // 0x15e654: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130140u;
    if (runtime->hasFunction(0x130140u)) {
        auto targetFn = runtime->lookupFunction(0x130140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E658u; }
        if (ctx->pc != 0x15E658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgUnitMatrix__FPA4_f_0x130140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E658u; }
        if (ctx->pc != 0x15E658u) { return; }
    }
    ctx->pc = 0x15E658u;
label_15e658:
    // 0x15e658: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15e658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_15e65c:
    // 0x15e65c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x15e65cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_15e660:
    // 0x15e660: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15e660u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_15e664:
    // 0x15e664: 0x26a50cb0  addiu       $a1, $s5, 0xCB0
    ctx->pc = 0x15e664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 3248));
label_15e668:
    // 0x15e668: 0x27a600b8  addiu       $a2, $sp, 0xB8
    ctx->pc = 0x15e668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_15e66c:
    // 0x15e66c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x15e66cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15e670:
    // 0x15e670: 0xc0a78f0  jal         func_29E3C0
label_15e674:
    if (ctx->pc == 0x15E674u) {
        ctx->pc = 0x15E674u;
            // 0x15e674: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15E678u;
        goto label_15e678;
    }
    ctx->pc = 0x15E670u;
    SET_GPR_U32(ctx, 31, 0x15E678u);
    ctx->pc = 0x15E674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E670u;
            // 0x15e674: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E3C0u;
    if (runtime->hasFunction(0x29E3C0u)) {
        auto targetFn = runtime->lookupFunction(0x29E3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E678u; }
        if (ctx->pc != 0x15E678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawFireEffect__FPA4_fP14CFuncPointMngrP15CFuncPointCheckfP10mgCTextureP10mgCTexture_0x29e3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E678u; }
        if (ctx->pc != 0x15E678u) { return; }
    }
    ctx->pc = 0x15E678u;
label_15e678:
    // 0x15e678: 0x8eb20364  lw          $s2, 0x364($s5)
    ctx->pc = 0x15e678u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 868)));
label_15e67c:
    // 0x15e67c: 0x1240001e  beqz        $s2, . + 4 + (0x1E << 2)
label_15e680:
    if (ctx->pc == 0x15E680u) {
        ctx->pc = 0x15E680u;
            // 0x15e680: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15E684u;
        goto label_15e684;
    }
    ctx->pc = 0x15E67Cu;
    {
        const bool branch_taken_0x15e67c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E67Cu;
            // 0x15e680: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e67c) {
            ctx->pc = 0x15E6F8u;
            goto label_15e6f8;
        }
    }
    ctx->pc = 0x15E684u;
label_15e684:
    // 0x15e684: 0x10000018  b           . + 4 + (0x18 << 2)
label_15e688:
    if (ctx->pc == 0x15E688u) {
        ctx->pc = 0x15E68Cu;
        goto label_15e68c;
    }
    ctx->pc = 0x15E684u;
    {
        const bool branch_taken_0x15e684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e684) {
            ctx->pc = 0x15E6E8u;
            goto label_15e6e8;
        }
    }
    ctx->pc = 0x15E68Cu;
label_15e68c:
    // 0x15e68c: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x15e68cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_15e690:
    // 0x15e690: 0x8e6302b0  lw          $v1, 0x2B0($s3)
    ctx->pc = 0x15e690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 688)));
label_15e694:
    // 0x15e694: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x15e694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_15e698:
    // 0x15e698: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_15e69c:
    if (ctx->pc == 0x15E69Cu) {
        ctx->pc = 0x15E6A0u;
        goto label_15e6a0;
    }
    ctx->pc = 0x15E698u;
    {
        const bool branch_taken_0x15e698 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e698) {
            ctx->pc = 0x15E6E0u;
            goto label_15e6e0;
        }
    }
    ctx->pc = 0x15E6A0u;
label_15e6a0:
    // 0x15e6a0: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x15e6a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_15e6a4:
    // 0x15e6a4: 0x8f39006c  lw          $t9, 0x6C($t9)
    ctx->pc = 0x15e6a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 108)));
label_15e6a8:
    // 0x15e6a8: 0x320f809  jalr        $t9
label_15e6ac:
    if (ctx->pc == 0x15E6ACu) {
        ctx->pc = 0x15E6ACu;
            // 0x15e6ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15E6B0u;
        goto label_15e6b0;
    }
    ctx->pc = 0x15E6A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15E6B0u);
        ctx->pc = 0x15E6ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E6A8u;
            // 0x15e6ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15E6B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15E6B0u; }
            if (ctx->pc != 0x15E6B0u) { return; }
        }
        }
    }
    ctx->pc = 0x15E6B0u;
label_15e6b0:
    // 0x15e6b0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_15e6b4:
    if (ctx->pc == 0x15E6B4u) {
        ctx->pc = 0x15E6B4u;
            // 0x15e6b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15E6B8u;
        goto label_15e6b8;
    }
    ctx->pc = 0x15E6B0u;
    {
        const bool branch_taken_0x15e6b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E6B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E6B0u;
            // 0x15e6b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e6b0) {
            ctx->pc = 0x15E6E0u;
            goto label_15e6e0;
        }
    }
    ctx->pc = 0x15E6B8u;
label_15e6b8:
    // 0x15e6b8: 0xc059cc0  jal         func_167300
label_15e6bc:
    if (ctx->pc == 0x15E6BCu) {
        ctx->pc = 0x15E6BCu;
            // 0x15e6bc: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x15E6C0u;
        goto label_15e6c0;
    }
    ctx->pc = 0x15E6B8u;
    SET_GPR_U32(ctx, 31, 0x15E6C0u);
    ctx->pc = 0x15E6BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E6B8u;
            // 0x15e6bc: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167300u;
    if (runtime->hasFunction(0x167300u)) {
        auto targetFn = runtime->lookupFunction(0x167300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E6C0u; }
        if (ctx->pc != 0x15E6C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLWMatrix__9CMapPartsFPA4_f_0x167300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E6C0u; }
        if (ctx->pc != 0x15E6C0u) { return; }
    }
    ctx->pc = 0x15E6C0u;
label_15e6c0:
    // 0x15e6c0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15e6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_15e6c4:
    // 0x15e6c4: 0x266502b0  addiu       $a1, $s3, 0x2B0
    ctx->pc = 0x15e6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 688));
label_15e6c8:
    // 0x15e6c8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15e6c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_15e6cc:
    // 0x15e6cc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x15e6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_15e6d0:
    // 0x15e6d0: 0x27a600b8  addiu       $a2, $sp, 0xB8
    ctx->pc = 0x15e6d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_15e6d4:
    // 0x15e6d4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x15e6d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15e6d8:
    // 0x15e6d8: 0xc0a78f0  jal         func_29E3C0
label_15e6dc:
    if (ctx->pc == 0x15E6DCu) {
        ctx->pc = 0x15E6DCu;
            // 0x15e6dc: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15E6E0u;
        goto label_15e6e0;
    }
    ctx->pc = 0x15E6D8u;
    SET_GPR_U32(ctx, 31, 0x15E6E0u);
    ctx->pc = 0x15E6DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E6D8u;
            // 0x15e6dc: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E3C0u;
    if (runtime->hasFunction(0x29E3C0u)) {
        auto targetFn = runtime->lookupFunction(0x29E3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E6E0u; }
        if (ctx->pc != 0x15E6E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawFireEffect__FPA4_fP14CFuncPointMngrP15CFuncPointCheckfP10mgCTextureP10mgCTexture_0x29e3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E6E0u; }
        if (ctx->pc != 0x15E6E0u) { return; }
    }
    ctx->pc = 0x15E6E0u;
label_15e6e0:
    // 0x15e6e0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x15e6e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_15e6e4:
    // 0x15e6e4: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x15e6e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_15e6e8:
    // 0x15e6e8: 0x8ea30360  lw          $v1, 0x360($s5)
    ctx->pc = 0x15e6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 864)));
label_15e6ec:
    // 0x15e6ec: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x15e6ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_15e6f0:
    // 0x15e6f0: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
label_15e6f4:
    if (ctx->pc == 0x15E6F4u) {
        ctx->pc = 0x15E6F8u;
        goto label_15e6f8;
    }
    ctx->pc = 0x15E6F0u;
    {
        const bool branch_taken_0x15e6f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e6f0) {
            ctx->pc = 0x15E68Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15e68c;
        }
    }
    ctx->pc = 0x15E6F8u;
label_15e6f8:
    // 0x15e6f8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x15e6f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_15e6fc:
    // 0x15e6fc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15e6fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_15e700:
    // 0x15e700: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15e700u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_15e704:
    // 0x15e704: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15e704u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15e708:
    // 0x15e708: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15e708u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15e70c:
    // 0x15e70c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15e70cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15e710:
    // 0x15e710: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15e710u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15e714:
    // 0x15e714: 0x3e00008  jr          $ra
label_15e718:
    if (ctx->pc == 0x15E718u) {
        ctx->pc = 0x15E718u;
            // 0x15e718: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x15E71Cu;
        goto label_fallthrough_0x15e714;
    }
    ctx->pc = 0x15E714u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E714u;
            // 0x15e718: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x15e714:
    ctx->pc = 0x15E71Cu;
}
