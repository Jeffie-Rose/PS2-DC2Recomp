#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Func_MenuItemIconSetEffectOne__FP18MENUFORMPARTS_TYPE
// Address: 0x22c400 - 0x22c554
void Func_MenuItemIconSetEffectOne__FP18MENUFORMPARTS_TYPE_0x22c400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Func_MenuItemIconSetEffectOne__FP18MENUFORMPARTS_TYPE_0x22c400");
#endif

    switch (ctx->pc) {
        case 0x22c448u: goto label_22c448;
        case 0x22c45cu: goto label_22c45c;
        case 0x22c4a0u: goto label_22c4a0;
        case 0x22c4b8u: goto label_22c4b8;
        case 0x22c4fcu: goto label_22c4fc;
        case 0x22c510u: goto label_22c510;
        default: break;
    }

    ctx->pc = 0x22c400u;

    // 0x22c400: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x22c400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x22c404: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x22c404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x22c408: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22c408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22c40c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22c40cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22c410: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x22c410u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c414: 0x12400049  beqz        $s2, . + 4 + (0x49 << 2)
    ctx->pc = 0x22C414u;
    {
        const bool branch_taken_0x22c414 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C414u;
            // 0x22c418: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c414) {
            ctx->pc = 0x22C53Cu;
            goto label_22c53c;
        }
    }
    ctx->pc = 0x22C41Cu;
    // 0x22c41c: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x22c41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x22c420: 0x10600046  beqz        $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x22C420u;
    {
        const bool branch_taken_0x22c420 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C420u;
            // 0x22c424: 0x3c050035  lui         $a1, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c420) {
            ctx->pc = 0x22C53Cu;
            goto label_22c53c;
        }
    }
    ctx->pc = 0x22C428u;
    // 0x22c428: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x22c428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x22c42c: 0x24a507b0  addiu       $a1, $a1, 0x7B0
    ctx->pc = 0x22c42cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1968));
    // 0x22c430: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x22c430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x22c434: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x22c434u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x22c438: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x22c438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22c43c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x22c43cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x22c440: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x22C440u;
    SET_GPR_U32(ctx, 31, 0x22C448u);
    ctx->pc = 0x22C444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C440u;
            // 0x22c444: 0xe4600010  swc1        $f0, 0x10($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C448u; }
        if (ctx->pc != 0x22C448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C448u; }
        if (ctx->pc != 0x22C448u) { return; }
    }
    ctx->pc = 0x22C448u;
label_22c448:
    // 0x22c448: 0xa7a20040  sh          $v0, 0x40($sp)
    ctx->pc = 0x22c448u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 64), (uint16_t)GPR_U32(ctx, 2));
    // 0x22c44c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x22c44cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x22c450: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x22c450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x22c454: 0xc087e78  jal         func_21F9E0
    ctx->pc = 0x22C454u;
    SET_GPR_U32(ctx, 31, 0x22C45Cu);
    ctx->pc = 0x22C458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C454u;
            // 0x22c458: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21F9E0u;
    if (runtime->hasFunction(0x21F9E0u)) {
        auto targetFn = runtime->lookupFunction(0x21F9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C45Cu; }
        if (ctx->pc != 0x22C45Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPartEffectInfoRandFunc__FP25MENU_PARTS_EFFECT_STRUCT1Psi_0x21f9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C45Cu; }
        if (ctx->pc != 0x22C45Cu) { return; }
    }
    ctx->pc = 0x22C45Cu;
label_22c45c:
    // 0x22c45c: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x22c45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x22c460: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x22c460u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x22c464: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x22c464u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x22c468: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x22c468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22c46c: 0x24a507d0  addiu       $a1, $a1, 0x7D0
    ctx->pc = 0x22c46cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2000));
    // 0x22c470: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x22c470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x22c474: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x22c474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x22c478: 0xa4470002  sh          $a3, 0x2($v0)
    ctx->pc = 0x22c478u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 7));
    // 0x22c47c: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x22c47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x22c480: 0xa0460000  sb          $a2, 0x0($v0)
    ctx->pc = 0x22c480u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x22c484: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x22c484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x22c488: 0xa0460001  sb          $a2, 0x1($v0)
    ctx->pc = 0x22c488u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x22c48c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x22c48cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x22c490: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x22c490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22c494: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x22c494u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x22c498: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x22C498u;
    SET_GPR_U32(ctx, 31, 0x22C4A0u);
    ctx->pc = 0x22C49Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C498u;
            // 0x22c49c: 0xe4600010  swc1        $f0, 0x10($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C4A0u; }
        if (ctx->pc != 0x22C4A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C4A0u; }
        if (ctx->pc != 0x22C4A0u) { return; }
    }
    ctx->pc = 0x22C4A0u;
label_22c4a0:
    // 0x22c4a0: 0xa7a20060  sh          $v0, 0x60($sp)
    ctx->pc = 0x22c4a0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 96), (uint16_t)GPR_U32(ctx, 2));
    // 0x22c4a4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x22c4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x22c4a8: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x22c4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x22c4ac: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x22c4acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x22c4b0: 0xc087e78  jal         func_21F9E0
    ctx->pc = 0x22C4B0u;
    SET_GPR_U32(ctx, 31, 0x22C4B8u);
    ctx->pc = 0x22C4B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C4B0u;
            // 0x22c4b4: 0x24440024  addiu       $a0, $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21F9E0u;
    if (runtime->hasFunction(0x21F9E0u)) {
        auto targetFn = runtime->lookupFunction(0x21F9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C4B8u; }
        if (ctx->pc != 0x22C4B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPartEffectInfoRandFunc__FP25MENU_PARTS_EFFECT_STRUCT1Psi_0x21f9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C4B8u; }
        if (ctx->pc != 0x22C4B8u) { return; }
    }
    ctx->pc = 0x22C4B8u;
label_22c4b8:
    // 0x22c4b8: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x22c4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x22c4bc: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x22c4bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x22c4c0: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x22c4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x22c4c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22c4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22c4c8: 0x2484cfd0  addiu       $a0, $a0, -0x3030
    ctx->pc = 0x22c4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954960));
    // 0x22c4cc: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x22c4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x22c4d0: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x22c4d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22c4d4: 0x24110048  addiu       $s1, $zero, 0x48
    ctx->pc = 0x22c4d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x22c4d8: 0xa4460026  sh          $a2, 0x26($v0)
    ctx->pc = 0x22c4d8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 38), (uint16_t)GPR_U32(ctx, 6));
    // 0x22c4dc: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x22c4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x22c4e0: 0xa0450024  sb          $a1, 0x24($v0)
    ctx->pc = 0x22c4e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 36), (uint8_t)GPR_U32(ctx, 5));
    // 0x22c4e4: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x22c4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x22c4e8: 0xa0450025  sb          $a1, 0x25($v0)
    ctx->pc = 0x22c4e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 37), (uint8_t)GPR_U32(ctx, 5));
    // 0x22c4ec: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x22c4ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22c4f0: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x22c4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22c4f4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x22c4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x22c4f8: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x22c4f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_22c4fc:
    // 0x22c4fc: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x22c4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x22c500: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x22c500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x22c504: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x22c504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x22c508: 0xc0896b0  jal         func_225AC0
    ctx->pc = 0x22C508u;
    SET_GPR_U32(ctx, 31, 0x22C510u);
    ctx->pc = 0x22C50Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C508u;
            // 0x22c50c: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225AC0u;
    if (runtime->hasFunction(0x225AC0u)) {
        auto targetFn = runtime->lookupFunction(0x225AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C510u; }
        if (ctx->pc != 0x22C510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Func_SetPartEffectInfo__FP25MENU_PARTS_EFFECT_STRUCT1UiPs_0x225ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C510u; }
        if (ctx->pc != 0x22C510u) { return; }
    }
    ctx->pc = 0x22C510u;
label_22c510:
    // 0x22c510: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x22c510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x22c514: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x22c514u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x22c518: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22c518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22c51c: 0x2a030008  slti        $v1, $s0, 0x8
    ctx->pc = 0x22c51cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x22c520: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x22c520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x22c524: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x22c524u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x22c528: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x22c528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x22c52c: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x22c52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x22c530: 0xa0850001  sb          $a1, 0x1($a0)
    ctx->pc = 0x22c530u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x22c534: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x22C534u;
    {
        const bool branch_taken_0x22c534 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C534u;
            // 0x22c538: 0x26310024  addiu       $s1, $s1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c534) {
            ctx->pc = 0x22C4FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22c4fc;
        }
    }
    ctx->pc = 0x22C53Cu;
label_22c53c:
    // 0x22c53c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22c53cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22c540: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22c540u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22c544: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22c544u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c548: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22c548u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c54c: 0x3e00008  jr          $ra
    ctx->pc = 0x22C54Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C54Cu;
            // 0x22c550: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22C554u;
}
