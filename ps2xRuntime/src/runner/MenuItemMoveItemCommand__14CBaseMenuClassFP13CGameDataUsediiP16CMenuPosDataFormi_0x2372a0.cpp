#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuItemMoveItemCommand__14CBaseMenuClassFP13CGameDataUsediiP16CMenuPosDataFormi
// Address: 0x2372a0 - 0x2374cc
void MenuItemMoveItemCommand__14CBaseMenuClassFP13CGameDataUsediiP16CMenuPosDataFormi_0x2372a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuItemMoveItemCommand__14CBaseMenuClassFP13CGameDataUsediiP16CMenuPosDataFormi_0x2372a0");
#endif

    switch (ctx->pc) {
        case 0x2372f0u: goto label_2372f0;
        case 0x237300u: goto label_237300;
        case 0x237360u: goto label_237360;
        case 0x237374u: goto label_237374;
        case 0x2373a4u: goto label_2373a4;
        case 0x2373c8u: goto label_2373c8;
        case 0x2373d8u: goto label_2373d8;
        case 0x2373e4u: goto label_2373e4;
        case 0x2373f0u: goto label_2373f0;
        case 0x237414u: goto label_237414;
        case 0x237490u: goto label_237490;
        case 0x2374a0u: goto label_2374a0;
        default: break;
    }

    ctx->pc = 0x2372a0u;

    // 0x2372a0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x2372a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x2372a4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2372a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2372a8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2372a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2372ac: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2372acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2372b0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2372b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2372b4: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x2372b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2372b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2372b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2372bc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2372bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2372c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2372c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2372c4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2372c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2372c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2372c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2372cc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2372ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2372d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2372d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2372d4: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x2372d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2372d8: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x2372d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x2372dc: 0x844200c2  lh          $v0, 0xC2($v0)
    ctx->pc = 0x2372dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 194)));
    // 0x2372e0: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2372E0u;
    {
        const bool branch_taken_0x2372e0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2372E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2372E0u;
            // 0x2372e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2372e0) {
            ctx->pc = 0x2372F8u;
            goto label_2372f8;
        }
    }
    ctx->pc = 0x2372E8u;
    // 0x2372e8: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2372E8u;
    SET_GPR_U32(ctx, 31, 0x2372F0u);
    ctx->pc = 0x2372ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2372E8u;
            // 0x2372ec: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2372F0u; }
        if (ctx->pc != 0x2372F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2372F0u; }
        if (ctx->pc != 0x2372F0u) { return; }
    }
    ctx->pc = 0x2372F0u;
label_2372f0:
    // 0x2372f0: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x2372F0u;
    {
        const bool branch_taken_0x2372f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2372F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2372F0u;
            // 0x2372f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2372f0) {
            ctx->pc = 0x2374A4u;
            goto label_2374a4;
        }
    }
    ctx->pc = 0x2372F8u;
label_2372f8:
    // 0x2372f8: 0xc08dc84  jal         func_237210
    ctx->pc = 0x2372F8u;
    SET_GPR_U32(ctx, 31, 0x237300u);
    ctx->pc = 0x2372FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2372F8u;
            // 0x2372fc: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x237210u;
    if (runtime->hasFunction(0x237210u)) {
        auto targetFn = runtime->lookupFunction(0x237210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237300u; }
        if (ctx->pc != 0x237300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuItemCommnadSelectPrepare__14CBaseMenuClassFP13CGameDataUsedii_0x237210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237300u; }
        if (ctx->pc != 0x237300u) { return; }
    }
    ctx->pc = 0x237300u;
label_237300:
    // 0x237300: 0x10400065  beqz        $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x237300u;
    {
        const bool branch_taken_0x237300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237300u;
            // 0x237304: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237300) {
            ctx->pc = 0x237498u;
            goto label_237498;
        }
    }
    ctx->pc = 0x237308u;
    // 0x237308: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x237308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23730c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x23730cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x237310: 0xa420d804  sh          $zero, -0x27FC($at)
    ctx->pc = 0x237310u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294957060), (uint16_t)GPR_U32(ctx, 0));
    // 0x237314: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x237314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x237318: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x237318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23731c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x23731cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x237320: 0xa423d800  sh          $v1, -0x2800($at)
    ctx->pc = 0x237320u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294957056), (uint16_t)GPR_U32(ctx, 3));
    // 0x237324: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x237324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x237328: 0xa022d802  sb          $v0, -0x27FE($at)
    ctx->pc = 0x237328u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294957058), (uint8_t)GPR_U32(ctx, 2));
    // 0x23732c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x23732cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x237330: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x237330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x237334: 0xac20d810  sw          $zero, -0x27F0($at)
    ctx->pc = 0x237334u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294957072), GPR_U32(ctx, 0));
    // 0x237338: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x237338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23733c: 0xac20d80c  sw          $zero, -0x27F4($at)
    ctx->pc = 0x23733cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294957068), GPR_U32(ctx, 0));
    // 0x237340: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x237340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x237344: 0xa420d80a  sh          $zero, -0x27F6($at)
    ctx->pc = 0x237344u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294957066), (uint16_t)GPR_U32(ctx, 0));
    // 0x237348: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x237348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23734c: 0xa420d806  sh          $zero, -0x27FA($at)
    ctx->pc = 0x23734cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294957062), (uint16_t)GPR_U32(ctx, 0));
    // 0x237350: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x237350u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x237354: 0xa6000002  sh          $zero, 0x2($s0)
    ctx->pc = 0x237354u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x237358: 0xc08e99c  jal         func_23A670
    ctx->pc = 0x237358u;
    SET_GPR_U32(ctx, 31, 0x237360u);
    ctx->pc = 0x23735Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237358u;
            // 0x23735c: 0xafa3010c  sw          $v1, 0x10C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A670u;
    if (runtime->hasFunction(0x23A670u)) {
        auto targetFn = runtime->lookupFunction(0x23A670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237360u; }
        if (ctx->pc != 0x237360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__17MENU_ASKMODE_PARAFv_0x23a670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237360u; }
        if (ctx->pc != 0x237360u) { return; }
    }
    ctx->pc = 0x237360u;
label_237360:
    // 0x237360: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x237360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237364: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x237364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x237368: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x237368u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23736c: 0xc08f268  jal         func_23C9A0
    ctx->pc = 0x23736Cu;
    SET_GPR_U32(ctx, 31, 0x237374u);
    ctx->pc = 0x237370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23736Cu;
            // 0x237370: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C9A0u;
    if (runtime->hasFunction(0x23C9A0u)) {
        auto targetFn = runtime->lookupFunction(0x23C9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237374u; }
        if (ctx->pc != 0x237374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemCommandMsg__FP13CGameDataUsedP17MENU_ASKMODE_PARAii_0x23c9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237374u; }
        if (ctx->pc != 0x237374u) { return; }
    }
    ctx->pc = 0x237374u;
label_237374:
    // 0x237374: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x237374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237378: 0x27b60082  addiu       $s6, $sp, 0x82
    ctx->pc = 0x237378u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 130));
    // 0x23737c: 0x27b00084  addiu       $s0, $sp, 0x84
    ctx->pc = 0x23737cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x237380: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x237380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x237384: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x237384u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x237388: 0xa79395ec  sh          $s3, -0x6A14($gp)
    ctx->pc = 0x237388u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294940140), (uint16_t)GPR_U32(ctx, 19));
    // 0x23738c: 0x27b300f8  addiu       $s3, $sp, 0xF8
    ctx->pc = 0x23738cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x237390: 0xa6d20000  sh          $s2, 0x0($s6)
    ctx->pc = 0x237390u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 18));
    // 0x237394: 0xae750000  sw          $s5, 0x0($s3)
    ctx->pc = 0x237394u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
    // 0x237398: 0xa7b100e8  sh          $s1, 0xE8($sp)
    ctx->pc = 0x237398u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 232), (uint16_t)GPR_U32(ctx, 17));
    // 0x23739c: 0xc08e768  jal         func_239DA0
    ctx->pc = 0x23739Cu;
    SET_GPR_U32(ctx, 31, 0x2373A4u);
    ctx->pc = 0x2373A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23739Cu;
            // 0x2373a0: 0xafb400fc  sw          $s4, 0xFC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239DA0u;
    if (runtime->hasFunction(0x239DA0u)) {
        auto targetFn = runtime->lookupFunction(0x239DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2373A4u; }
        if (ctx->pc != 0x2373A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAskParam__14CBaseMenuClassFP17MENU_ASKMODE_PARA_0x239da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2373A4u; }
        if (ctx->pc != 0x2373A4u) { return; }
    }
    ctx->pc = 0x2373A4u;
label_2373a4:
    // 0x2373a4: 0x86c30000  lh          $v1, 0x0($s6)
    ctx->pc = 0x2373a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2373a8: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x2373a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x2373ac: 0x2442ca40  addiu       $v0, $v0, -0x35C0
    ctx->pc = 0x2373acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953536));
    // 0x2373b0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2373b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2373b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2373b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2373b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2373b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2373bc: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2373bcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2373c0: 0xc0874e8  jal         func_21D3A0
    ctx->pc = 0x2373C0u;
    SET_GPR_U32(ctx, 31, 0x2373C8u);
    ctx->pc = 0x2373C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2373C0u;
            // 0x2373c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2373C8u; }
        if (ctx->pc != 0x2373C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2373C8u; }
        if (ctx->pc != 0x2373C8u) { return; }
    }
    ctx->pc = 0x2373C8u;
label_2373c8:
    // 0x2373c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2373c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2373cc: 0x27a50088  addiu       $a1, $sp, 0x88
    ctx->pc = 0x2373ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x2373d0: 0xc0876ec  jal         func_21DBB0
    ctx->pc = 0x2373D0u;
    SET_GPR_U32(ctx, 31, 0x2373D8u);
    ctx->pc = 0x2373D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2373D0u;
            // 0x2373d4: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DBB0u;
    if (runtime->hasFunction(0x21DBB0u)) {
        auto targetFn = runtime->lookupFunction(0x21DBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2373D8u; }
        if (ctx->pc != 0x2373D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemNo__7CDC2MesFPii_0x21dbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2373D8u; }
        if (ctx->pc != 0x2373D8u) { return; }
    }
    ctx->pc = 0x2373D8u;
label_2373d8:
    // 0x2373d8: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x2373d8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2373dc: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2373DCu;
    SET_GPR_U32(ctx, 31, 0x2373E4u);
    ctx->pc = 0x2373E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2373DCu;
            // 0x2373e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2373E4u; }
        if (ctx->pc != 0x2373E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2373E4u; }
        if (ctx->pc != 0x2373E4u) { return; }
    }
    ctx->pc = 0x2373E4u;
label_2373e4:
    // 0x2373e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2373e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2373e8: 0xc0875b0  jal         func_21D6C0
    ctx->pc = 0x2373E8u;
    SET_GPR_U32(ctx, 31, 0x2373F0u);
    ctx->pc = 0x2373ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2373E8u;
            // 0x2373ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D6C0u;
    if (runtime->hasFunction(0x21D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2373F0u; }
        if (ctx->pc != 0x2373F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgCursor__7CDC2MesFi_0x21d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2373F0u; }
        if (ctx->pc != 0x2373F0u) { return; }
    }
    ctx->pc = 0x2373F0u;
label_2373f0:
    // 0x2373f0: 0x86060000  lh          $a2, 0x0($s0)
    ctx->pc = 0x2373f0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2373f4: 0x3c028020  lui         $v0, 0x8020
    ctx->pc = 0x2373f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32800 << 16));
    // 0x2373f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2373f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2373fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2373fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237400: 0x34452020  ori         $a1, $v0, 0x2020
    ctx->pc = 0x237400u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x237404: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x237404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x237408: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x237408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23740c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x23740Cu;
    {
        const bool branch_taken_0x23740c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23740Cu;
            // 0x237410: 0xae2600d0  sw          $a2, 0xD0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23740c) {
            ctx->pc = 0x237458u;
            goto label_237458;
        }
    }
    ctx->pc = 0x237414u;
label_237414:
    // 0x237414: 0x8c4200a8  lw          $v0, 0xA8($v0)
    ctx->pc = 0x237414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x237418: 0x14450007  bne         $v0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x237418u;
    {
        const bool branch_taken_0x237418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x237418) {
            ctx->pc = 0x237438u;
            goto label_237438;
        }
    }
    ctx->pc = 0x237420u;
    // 0x237420: 0x4e0000a  bltz        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x237420u;
    {
        const bool branch_taken_0x237420 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x237424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237420u;
            // 0x237424: 0x28e10014  slti        $at, $a3, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x237420) {
            ctx->pc = 0x23744Cu;
            goto label_23744c;
        }
    }
    ctx->pc = 0x237428u;
    // 0x237428: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x237428u;
    {
        const bool branch_taken_0x237428 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x23742Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237428u;
            // 0x23742c: 0x2281021  addu        $v0, $s1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237428) {
            ctx->pc = 0x23744Cu;
            goto label_23744c;
        }
    }
    ctx->pc = 0x237430u;
    // 0x237430: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x237430u;
    {
        const bool branch_taken_0x237430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237430u;
            // 0x237434: 0xac441c84  sw          $a0, 0x1C84($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 7300), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237430) {
            ctx->pc = 0x23744Cu;
            goto label_23744c;
        }
    }
    ctx->pc = 0x237438u;
label_237438:
    // 0x237438: 0x4e00004  bltz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x237438u;
    {
        const bool branch_taken_0x237438 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x23743Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237438u;
            // 0x23743c: 0x28e10014  slti        $at, $a3, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x237438) {
            ctx->pc = 0x23744Cu;
            goto label_23744c;
        }
    }
    ctx->pc = 0x237440u;
    // 0x237440: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x237440u;
    {
        const bool branch_taken_0x237440 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x237444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237440u;
            // 0x237444: 0x2281021  addu        $v0, $s1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237440) {
            ctx->pc = 0x23744Cu;
            goto label_23744c;
        }
    }
    ctx->pc = 0x237448u;
    // 0x237448: 0xac431c84  sw          $v1, 0x1C84($v0)
    ctx->pc = 0x237448u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7300), GPR_U32(ctx, 3));
label_23744c:
    // 0x23744c: 0x0  nop
    ctx->pc = 0x23744cu;
    // NOP
    // 0x237450: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x237450u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x237454: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x237454u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_237458:
    // 0x237458: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x237458u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23745c: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x23745cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x237460: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x237460u;
    {
        const bool branch_taken_0x237460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x237464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237460u;
            // 0x237464: 0x11d1021  addu        $v0, $t0, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237460) {
            ctx->pc = 0x237414u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_237414;
        }
    }
    ctx->pc = 0x237468u;
    // 0x237468: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x237468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x23746c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23746cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x237470: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x237470u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x237474: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x237474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x237478: 0x8c420138  lw          $v0, 0x138($v0)
    ctx->pc = 0x237478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 312)));
    // 0x23747c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23747Cu;
    {
        const bool branch_taken_0x23747c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23747Cu;
            // 0x237480: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23747c) {
            ctx->pc = 0x237488u;
            goto label_237488;
        }
    }
    ctx->pc = 0x237484u;
    // 0x237484: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x237484u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
label_237488:
    // 0x237488: 0xc094274  jal         func_2509D0
    ctx->pc = 0x237488u;
    SET_GPR_U32(ctx, 31, 0x237490u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237490u; }
        if (ctx->pc != 0x237490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237490u; }
        if (ctx->pc != 0x237490u) { return; }
    }
    ctx->pc = 0x237490u;
label_237490:
    // 0x237490: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x237490u;
    {
        const bool branch_taken_0x237490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237490u;
            // 0x237494: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237490) {
            ctx->pc = 0x2374A4u;
            goto label_2374a4;
        }
    }
    ctx->pc = 0x237498u;
label_237498:
    // 0x237498: 0xc094274  jal         func_2509D0
    ctx->pc = 0x237498u;
    SET_GPR_U32(ctx, 31, 0x2374A0u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2374A0u; }
        if (ctx->pc != 0x2374A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2374A0u; }
        if (ctx->pc != 0x2374A0u) { return; }
    }
    ctx->pc = 0x2374A0u;
label_2374a0:
    // 0x2374a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2374a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2374a4:
    // 0x2374a4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2374a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2374a8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2374a8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2374ac: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2374acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2374b0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2374b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2374b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2374b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2374b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2374b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2374bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2374bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2374c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2374c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2374c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2374C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2374C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2374C4u;
            // 0x2374c8: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2374CCu;
}
