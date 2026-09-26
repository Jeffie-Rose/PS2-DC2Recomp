#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CalcCursorPosition__12CMenuGeoramaFv
// Address: 0x1fa360 - 0x1fa670
void CalcCursorPosition__12CMenuGeoramaFv_0x1fa360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CalcCursorPosition__12CMenuGeoramaFv_0x1fa360");
#endif

    switch (ctx->pc) {
        case 0x1fa470u: goto label_1fa470;
        case 0x1fa484u: goto label_1fa484;
        case 0x1fa48cu: goto label_1fa48c;
        case 0x1fa498u: goto label_1fa498;
        case 0x1fa4b4u: goto label_1fa4b4;
        case 0x1fa51cu: goto label_1fa51c;
        case 0x1fa538u: goto label_1fa538;
        case 0x1fa584u: goto label_1fa584;
        case 0x1fa5a0u: goto label_1fa5a0;
        case 0x1fa5b8u: goto label_1fa5b8;
        case 0x1fa608u: goto label_1fa608;
        case 0x1fa628u: goto label_1fa628;
        case 0x1fa648u: goto label_1fa648;
        case 0x1fa65cu: goto label_1fa65c;
        default: break;
    }

    ctx->pc = 0x1fa360u;

    // 0x1fa360: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1fa360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1fa364: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1fa364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1fa368: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fa368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fa36c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fa36cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fa370: 0x8f839450  lw          $v1, -0x6BB0($gp)
    ctx->pc = 0x1fa370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x1fa374: 0x106000b9  beqz        $v1, . + 4 + (0xB9 << 2)
    ctx->pc = 0x1FA374u;
    {
        const bool branch_taken_0x1fa374 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA374u;
            // 0x1fa378: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa374) {
            ctx->pc = 0x1FA65Cu;
            goto label_1fa65c;
        }
    }
    ctx->pc = 0x1FA37Cu;
    // 0x1fa37c: 0x3c0901ed  lui         $t1, 0x1ED
    ctx->pc = 0x1fa37cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)493 << 16));
    // 0x1fa380: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1fa380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1fa384: 0x252996a0  addiu       $t1, $t1, -0x6960
    ctx->pc = 0x1fa384u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294940320));
    // 0x1fa388: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x1fa388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x1fa38c: 0x79270000  lq          $a3, 0x0($t1)
    ctx->pc = 0x1fa38cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fa390: 0xc5200020  lwc1        $f0, 0x20($t1)
    ctx->pc = 0x1fa390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fa394: 0x79230010  lq          $v1, 0x10($t1)
    ctx->pc = 0x1fa394u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x1fa398: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x1fa398u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fa39c: 0x2210821  addu        $at, $s1, $at
    ctx->pc = 0x1fa39cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
    // 0x1fa3a0: 0x244296d0  addiu       $v0, $v0, -0x6930
    ctx->pc = 0x1fa3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940368));
    // 0x1fa3a4: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x1fa3a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1fa3a8: 0x7d070000  sq          $a3, 0x0($t0)
    ctx->pc = 0x1fa3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 7));
    // 0x1fa3ac: 0x7d030010  sq          $v1, 0x10($t0)
    ctx->pc = 0x1fa3acu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 16), GPR_VEC(ctx, 3));
    // 0x1fa3b0: 0xe5000020  swc1        $f0, 0x20($t0)
    ctx->pc = 0x1fa3b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 32), bits); }
    // 0x1fa3b4: 0x8c23b834  lw          $v1, -0x47CC($at)
    ctx->pc = 0x1fa3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948916)));
    // 0x1fa3b8: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1fa3b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1fa3bc: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x1fa3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
    // 0x1fa3c0: 0x2210821  addu        $at, $s1, $at
    ctx->pc = 0x1fa3c0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
    // 0x1fa3c4: 0x8c23b8cc  lw          $v1, -0x4734($at)
    ctx->pc = 0x1fa3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294949068)));
    // 0x1fa3c8: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1fa3c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1fa3cc: 0xafa30054  sw          $v1, 0x54($sp)
    ctx->pc = 0x1fa3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
    // 0x1fa3d0: 0x2210821  addu        $at, $s1, $at
    ctx->pc = 0x1fa3d0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
    // 0x1fa3d4: 0x8c23b8d0  lw          $v1, -0x4730($at)
    ctx->pc = 0x1fa3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294949072)));
    // 0x1fa3d8: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1fa3d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1fa3dc: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x1fa3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
    // 0x1fa3e0: 0x2210821  addu        $at, $s1, $at
    ctx->pc = 0x1fa3e0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
    // 0x1fa3e4: 0x8c23b8d4  lw          $v1, -0x472C($at)
    ctx->pc = 0x1fa3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294949076)));
    // 0x1fa3e8: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1fa3e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1fa3ec: 0xafa3005c  sw          $v1, 0x5C($sp)
    ctx->pc = 0x1fa3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 3));
    // 0x1fa3f0: 0x2210821  addu        $at, $s1, $at
    ctx->pc = 0x1fa3f0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
    // 0x1fa3f4: 0x8c23b8dc  lw          $v1, -0x4724($at)
    ctx->pc = 0x1fa3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294949084)));
    // 0x1fa3f8: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1fa3f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1fa3fc: 0xafa30064  sw          $v1, 0x64($sp)
    ctx->pc = 0x1fa3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 3));
    // 0x1fa400: 0x2210821  addu        $at, $s1, $at
    ctx->pc = 0x1fa400u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
    // 0x1fa404: 0x8c23b8e4  lw          $v1, -0x471C($at)
    ctx->pc = 0x1fa404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294949092)));
    // 0x1fa408: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1fa408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1fa40c: 0xafa30068  sw          $v1, 0x68($sp)
    ctx->pc = 0x1fa40cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
    // 0x1fa410: 0xafa3006c  sw          $v1, 0x6C($sp)
    ctx->pc = 0x1fa410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 3));
    // 0x1fa414: 0x2210821  addu        $at, $s1, $at
    ctx->pc = 0x1fa414u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
    // 0x1fa418: 0x8c23b830  lw          $v1, -0x47D0($at)
    ctx->pc = 0x1fa418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948912)));
    // 0x1fa41c: 0xafa30070  sw          $v1, 0x70($sp)
    ctx->pc = 0x1fa41cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
    // 0x1fa420: 0x86230014  lh          $v1, 0x14($s1)
    ctx->pc = 0x1fa420u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1fa424: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1fa424u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fa428: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fa428u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fa42c: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1fa42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1fa430: 0x8c700050  lw          $s0, 0x50($v1)
    ctx->pc = 0x1fa430u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x1fa434: 0x12000066  beqz        $s0, . + 4 + (0x66 << 2)
    ctx->pc = 0x1FA434u;
    {
        const bool branch_taken_0x1fa434 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA434u;
            // 0x1fa438: 0x7cc20000  sq          $v0, 0x0($a2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa434) {
            ctx->pc = 0x1FA5D0u;
            goto label_1fa5d0;
        }
    }
    ctx->pc = 0x1FA43Cu;
    // 0x1fa43c: 0x86220014  lh          $v0, 0x14($s1)
    ctx->pc = 0x1fa43cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1fa440: 0x2c410009  sltiu       $at, $v0, 0x9
    ctx->pc = 0x1fa440u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x1fa444: 0x10200062  beqz        $at, . + 4 + (0x62 << 2)
    ctx->pc = 0x1FA444u;
    {
        const bool branch_taken_0x1fa444 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA444u;
            // 0x1fa448: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa444) {
            ctx->pc = 0x1FA5D0u;
            goto label_1fa5d0;
        }
    }
    ctx->pc = 0x1FA44Cu;
    // 0x1fa44c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fa44cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fa450: 0x24638c70  addiu       $v1, $v1, -0x7390
    ctx->pc = 0x1fa450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937712));
    // 0x1fa454: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fa454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fa458: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1fa458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fa45c: 0x400008  jr          $v0
    ctx->pc = 0x1FA45Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FA464u: goto label_1fa464;
            case 0x1FA4A0u: goto label_1fa4a0;
            case 0x1FA524u: goto label_1fa524;
            case 0x1FA58Cu: goto label_1fa58c;
            case 0x1FA5D0u: goto label_1fa5d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FA464u;
label_1fa464:
    // 0x1fa464: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x1fa464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x1fa468: 0xc08f02c  jal         func_23C0B0
    ctx->pc = 0x1FA468u;
    SET_GPR_U32(ctx, 31, 0x1FA470u);
    ctx->pc = 0x1FA46Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA468u;
            // 0x1fa46c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C0B0u;
    if (runtime->hasFunction(0x23C0B0u)) {
        auto targetFn = runtime->lookupFunction(0x23C0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA470u; }
        if (ctx->pc != 0x1FA470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWakuType__12CMenuKeyFuncFi_0x23c0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA470u; }
        if (ctx->pc != 0x1FA470u) { return; }
    }
    ctx->pc = 0x1FA470u;
label_1fa470:
    // 0x1fa470: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x1fa470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x1fa474: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fa474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa478: 0x24060054  addiu       $a2, $zero, 0x54
    ctx->pc = 0x1fa478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x1fa47c: 0xc08f058  jal         func_23C160
    ctx->pc = 0x1FA47Cu;
    SET_GPR_U32(ctx, 31, 0x1FA484u);
    ctx->pc = 0x1FA480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA47Cu;
            // 0x1fa480: 0x24070026  addiu       $a3, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C160u;
    if (runtime->hasFunction(0x23C160u)) {
        auto targetFn = runtime->lookupFunction(0x23C160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA484u; }
        if (ctx->pc != 0x1FA484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWakuWH__12CMenuKeyFuncFiii_0x23c160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA484u; }
        if (ctx->pc != 0x1FA484u) { return; }
    }
    ctx->pc = 0x1FA484u;
label_1fa484:
    // 0x1fa484: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1FA484u;
    SET_GPR_U32(ctx, 31, 0x1FA48Cu);
    ctx->pc = 0x1FA488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA484u;
            // 0x1fa488: 0xc78c9058  lwc1        $f12, -0x6FA8($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA48Cu; }
        if (ctx->pc != 0x1FA48Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA48Cu; }
        if (ctx->pc != 0x1FA48Cu) { return; }
    }
    ctx->pc = 0x1FA48Cu;
label_1fa48c:
    // 0x1fa48c: 0xc78c905c  lwc1        $f12, -0x6FA4($gp)
    ctx->pc = 0x1fa48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1fa490: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1FA490u;
    SET_GPR_U32(ctx, 31, 0x1FA498u);
    ctx->pc = 0x1FA494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA490u;
            // 0x1fa494: 0xafa20080  sw          $v0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA498u; }
        if (ctx->pc != 0x1FA498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA498u; }
        if (ctx->pc != 0x1FA498u) { return; }
    }
    ctx->pc = 0x1FA498u;
label_1fa498:
    // 0x1fa498: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x1FA498u;
    {
        const bool branch_taken_0x1fa498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA49Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA498u;
            // 0x1fa49c: 0xafa20084  sw          $v0, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa498) {
            ctx->pc = 0x1FA5D0u;
            goto label_1fa5d0;
        }
    }
    ctx->pc = 0x1FA4A0u;
label_1fa4a0:
    // 0x1fa4a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fa4a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa4a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fa4a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa4a8: 0x27b00084  addiu       $s0, $sp, 0x84
    ctx->pc = 0x1fa4a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x1fa4ac: 0xc08974c  jal         func_225D30
    ctx->pc = 0x1FA4ACu;
    SET_GPR_U32(ctx, 31, 0x1FA4B4u);
    ctx->pc = 0x1FA4B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA4ACu;
            // 0x1fa4b0: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA4B4u; }
        if (ctx->pc != 0x1FA4B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA4B4u; }
        if (ctx->pc != 0x1FA4B4u) { return; }
    }
    ctx->pc = 0x1FA4B4u;
label_1fa4b4:
    // 0x1fa4b4: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x1fa4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x1fa4b8: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1fa4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fa4bc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1fa4bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1fa4c0: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1fa4c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1fa4c4: 0x3c02422c  lui         $v0, 0x422C
    ctx->pc = 0x1fa4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16940 << 16));
    // 0x1fa4c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fa4c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fa4cc: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x1fa4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x1fa4d0: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x1fa4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
    // 0x1fa4d4: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x1fa4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x1fa4d8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1fa4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fa4dc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1fa4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1fa4e0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1fa4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1fa4e4: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1fa4e4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1fa4e8: 0x8c23b7f4  lw          $v1, -0x480C($at)
    ctx->pc = 0x1fa4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948852)));
    // 0x1fa4ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1fa4ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1fa4f0: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1fa4f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1fa4f4: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1fa4f4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1fa4f8: 0x8c22b7f8  lw          $v0, -0x4808($at)
    ctx->pc = 0x1fa4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948856)));
    // 0x1fa4fc: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1fa4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fa500: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1fa500u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1fa504: 0x0  nop
    ctx->pc = 0x1fa504u;
    // NOP
    // 0x1fa508: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1fa508u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1fa50c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1fa50cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1fa510: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1fa510u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1fa514: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1FA514u;
    SET_GPR_U32(ctx, 31, 0x1FA51Cu);
    ctx->pc = 0x1FA518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA514u;
            // 0x1fa518: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA51Cu; }
        if (ctx->pc != 0x1FA51Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA51Cu; }
        if (ctx->pc != 0x1FA51Cu) { return; }
    }
    ctx->pc = 0x1FA51Cu;
label_1fa51c:
    // 0x1fa51c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1FA51Cu;
    {
        const bool branch_taken_0x1fa51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA51Cu;
            // 0x1fa520: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa51c) {
            ctx->pc = 0x1FA5D0u;
            goto label_1fa5d0;
        }
    }
    ctx->pc = 0x1FA524u;
label_1fa524:
    // 0x1fa524: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fa524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa528: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fa528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa52c: 0x27b00084  addiu       $s0, $sp, 0x84
    ctx->pc = 0x1fa52cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x1fa530: 0xc08974c  jal         func_225D30
    ctx->pc = 0x1FA530u;
    SET_GPR_U32(ctx, 31, 0x1FA538u);
    ctx->pc = 0x1FA534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA530u;
            // 0x1fa534: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA538u; }
        if (ctx->pc != 0x1FA538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA538u; }
        if (ctx->pc != 0x1FA538u) { return; }
    }
    ctx->pc = 0x1FA538u;
label_1fa538:
    // 0x1fa538: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x1fa538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x1fa53c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1fa53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fa540: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1fa540u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1fa544: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1fa544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x1fa548: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fa548u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fa54c: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x1fa54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x1fa550: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x1fa550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
    // 0x1fa554: 0x8e23015c  lw          $v1, 0x15C($s1)
    ctx->pc = 0x1fa554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 348)));
    // 0x1fa558: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1fa558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fa55c: 0x8e220160  lw          $v0, 0x160($s1)
    ctx->pc = 0x1fa55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x1fa560: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1fa560u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1fa564: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1fa564u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fa568: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1fa568u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1fa56c: 0x0  nop
    ctx->pc = 0x1fa56cu;
    // NOP
    // 0x1fa570: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1fa570u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1fa574: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1fa574u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1fa578: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1fa578u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1fa57c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1FA57Cu;
    SET_GPR_U32(ctx, 31, 0x1FA584u);
    ctx->pc = 0x1FA580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA57Cu;
            // 0x1fa580: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA584u; }
        if (ctx->pc != 0x1FA584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA584u; }
        if (ctx->pc != 0x1FA584u) { return; }
    }
    ctx->pc = 0x1FA584u;
label_1fa584:
    // 0x1fa584: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1FA584u;
    {
        const bool branch_taken_0x1fa584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA584u;
            // 0x1fa588: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa584) {
            ctx->pc = 0x1FA5D0u;
            goto label_1fa5d0;
        }
    }
    ctx->pc = 0x1FA58Cu;
label_1fa58c:
    // 0x1fa58c: 0x8e260164  lw          $a2, 0x164($s1)
    ctx->pc = 0x1fa58cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 356)));
    // 0x1fa590: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1fa590u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1fa594: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1fa594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1fa598: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1FA598u;
    SET_GPR_U32(ctx, 31, 0x1FA5A0u);
    ctx->pc = 0x1FA59Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA598u;
            // 0x1fa59c: 0x24a58c68  addiu       $a1, $a1, -0x7398 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA5A0u; }
        if (ctx->pc != 0x1FA5A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA5A0u; }
        if (ctx->pc != 0x1FA5A0u) { return; }
    }
    ctx->pc = 0x1FA5A0u;
label_1fa5a0:
    // 0x1fa5a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fa5a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa5a4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1fa5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1fa5a8: 0x27b00084  addiu       $s0, $sp, 0x84
    ctx->pc = 0x1fa5a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x1fa5ac: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x1fa5acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1fa5b0: 0xc08974c  jal         func_225D30
    ctx->pc = 0x1FA5B0u;
    SET_GPR_U32(ctx, 31, 0x1FA5B8u);
    ctx->pc = 0x1FA5B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA5B0u;
            // 0x1fa5b4: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA5B8u; }
        if (ctx->pc != 0x1FA5B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA5B8u; }
        if (ctx->pc != 0x1FA5B8u) { return; }
    }
    ctx->pc = 0x1FA5B8u;
label_1fa5b8:
    // 0x1fa5b8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1fa5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fa5bc: 0x2442ffe6  addiu       $v0, $v0, -0x1A
    ctx->pc = 0x1fa5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967270));
    // 0x1fa5c0: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x1fa5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
    // 0x1fa5c4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1fa5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fa5c8: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x1fa5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
    // 0x1fa5cc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1fa5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1fa5d0:
    // 0x1fa5d0: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x1fa5d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fa5d4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1fa5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1fa5d8: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1FA5D8u;
    {
        const bool branch_taken_0x1fa5d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fa5d8) {
            ctx->pc = 0x1FA62Cu;
            goto label_1fa62c;
        }
    }
    ctx->pc = 0x1FA5E0u;
    // 0x1fa5e0: 0x82260108  lb          $a2, 0x108($s1)
    ctx->pc = 0x1fa5e0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 264)));
    // 0x1fa5e4: 0x3c02c248  lui         $v0, 0xC248
    ctx->pc = 0x1fa5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
    // 0x1fa5e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fa5e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa5ec: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x1fa5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x1fa5f0: 0x2463cdf0  addiu       $v1, $v1, -0x3210
    ctx->pc = 0x1fa5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954480));
    // 0x1fa5f4: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x1fa5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1fa5f8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1fa5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fa5fc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1fa5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fa600: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1FA600u;
    SET_GPR_U32(ctx, 31, 0x1FA608u);
    ctx->pc = 0x1FA604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA600u;
            // 0x1fa604: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA608u; }
        if (ctx->pc != 0x1FA608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA608u; }
        if (ctx->pc != 0x1FA608u) { return; }
    }
    ctx->pc = 0x1FA608u;
label_1fa608:
    // 0x1fa608: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x1fa608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
    // 0x1fa60c: 0x82230108  lb          $v1, 0x108($s1)
    ctx->pc = 0x1fa60cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 264)));
    // 0x1fa610: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x1fa610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x1fa614: 0x2442cdf4  addiu       $v0, $v0, -0x320C
    ctx->pc = 0x1fa614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954484));
    // 0x1fa618: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1fa618u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1fa61c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fa61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fa620: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1FA620u;
    SET_GPR_U32(ctx, 31, 0x1FA628u);
    ctx->pc = 0x1FA624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA620u;
            // 0x1fa624: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA628u; }
        if (ctx->pc != 0x1FA628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA628u; }
        if (ctx->pc != 0x1FA628u) { return; }
    }
    ctx->pc = 0x1FA628u;
label_1fa628:
    // 0x1fa628: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x1fa628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
label_1fa62c:
    // 0x1fa62c: 0x93828fd4  lbu         $v0, -0x702C($gp)
    ctx->pc = 0x1fa62cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938580)));
    // 0x1fa630: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FA630u;
    {
        const bool branch_taken_0x1fa630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa630) {
            ctx->pc = 0x1FA64Cu;
            goto label_1fa64c;
        }
    }
    ctx->pc = 0x1FA638u;
    // 0x1fa638: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x1fa638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fa63c: 0x8fa60084  lw          $a2, 0x84($sp)
    ctx->pc = 0x1fa63cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x1fa640: 0xc08f000  jal         func_23C000
    ctx->pc = 0x1FA640u;
    SET_GPR_U32(ctx, 31, 0x1FA648u);
    ctx->pc = 0x1FA644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA640u;
            // 0x1fa644: 0x8f8494f8  lw          $a0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C000u;
    if (runtime->hasFunction(0x23C000u)) {
        auto targetFn = runtime->lookupFunction(0x23C000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA648u; }
        if (ctx->pc != 0x1FA648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSetPos__12CMenuKeyFuncFii_0x23c000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA648u; }
        if (ctx->pc != 0x1FA648u) { return; }
    }
    ctx->pc = 0x1FA648u;
label_1fa648:
    // 0x1fa648: 0xa3808fd4  sb          $zero, -0x702C($gp)
    ctx->pc = 0x1fa648u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938580), (uint8_t)GPR_U32(ctx, 0));
label_1fa64c:
    // 0x1fa64c: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x1fa64cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x1fa650: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1fa650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1fa654: 0xc08ef88  jal         func_23BE20
    ctx->pc = 0x1FA654u;
    SET_GPR_U32(ctx, 31, 0x1FA65Cu);
    ctx->pc = 0x1FA658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA654u;
            // 0x1fa658: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23BE20u;
    if (runtime->hasFunction(0x23BE20u)) {
        auto targetFn = runtime->lookupFunction(0x23BE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA65Cu; }
        if (ctx->pc != 0x1FA65Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuPosStep__12CMenuKeyFuncFPiPi_0x23be20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA65Cu; }
        if (ctx->pc != 0x1FA65Cu) { return; }
    }
    ctx->pc = 0x1FA65Cu;
label_1fa65c:
    // 0x1fa65c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fa65cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fa660: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fa660u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fa664: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fa664u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fa668: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA668u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA66Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA668u;
            // 0x1fa66c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FA670u;
}
