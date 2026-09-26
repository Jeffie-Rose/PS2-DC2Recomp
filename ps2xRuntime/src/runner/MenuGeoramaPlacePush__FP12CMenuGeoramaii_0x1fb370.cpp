#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuGeoramaPlacePush__FP12CMenuGeoramaii
// Address: 0x1fb370 - 0x1fbbec
void MenuGeoramaPlacePush__FP12CMenuGeoramaii_0x1fb370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuGeoramaPlacePush__FP12CMenuGeoramaii_0x1fb370");
#endif

    switch (ctx->pc) {
        case 0x1fb42cu: goto label_1fb42c;
        case 0x1fb444u: goto label_1fb444;
        case 0x1fb464u: goto label_1fb464;
        case 0x1fb478u: goto label_1fb478;
        case 0x1fb4b4u: goto label_1fb4b4;
        case 0x1fb4c4u: goto label_1fb4c4;
        case 0x1fb4ccu: goto label_1fb4cc;
        case 0x1fb514u: goto label_1fb514;
        case 0x1fb52cu: goto label_1fb52c;
        case 0x1fb55cu: goto label_1fb55c;
        case 0x1fb570u: goto label_1fb570;
        case 0x1fb5c0u: goto label_1fb5c0;
        case 0x1fb5dcu: goto label_1fb5dc;
        case 0x1fb5e8u: goto label_1fb5e8;
        case 0x1fb63cu: goto label_1fb63c;
        case 0x1fb648u: goto label_1fb648;
        case 0x1fb6a4u: goto label_1fb6a4;
        case 0x1fb6b4u: goto label_1fb6b4;
        case 0x1fb6c8u: goto label_1fb6c8;
        case 0x1fb6d0u: goto label_1fb6d0;
        case 0x1fb6e0u: goto label_1fb6e0;
        case 0x1fb6e8u: goto label_1fb6e8;
        case 0x1fb6fcu: goto label_1fb6fc;
        case 0x1fb704u: goto label_1fb704;
        case 0x1fb7b8u: goto label_1fb7b8;
        case 0x1fb7c4u: goto label_1fb7c4;
        case 0x1fb820u: goto label_1fb820;
        case 0x1fb834u: goto label_1fb834;
        case 0x1fb85cu: goto label_1fb85c;
        case 0x1fb8b0u: goto label_1fb8b0;
        case 0x1fb908u: goto label_1fb908;
        case 0x1fb930u: goto label_1fb930;
        case 0x1fb94cu: goto label_1fb94c;
        case 0x1fb968u: goto label_1fb968;
        case 0x1fb990u: goto label_1fb990;
        case 0x1fb9a0u: goto label_1fb9a0;
        case 0x1fb9acu: goto label_1fb9ac;
        case 0x1fb9ccu: goto label_1fb9cc;
        case 0x1fb9dcu: goto label_1fb9dc;
        case 0x1fb9f4u: goto label_1fb9f4;
        case 0x1fba0cu: goto label_1fba0c;
        case 0x1fba14u: goto label_1fba14;
        case 0x1fba20u: goto label_1fba20;
        case 0x1fba90u: goto label_1fba90;
        case 0x1fbaa0u: goto label_1fbaa0;
        case 0x1fbac4u: goto label_1fbac4;
        case 0x1fbaccu: goto label_1fbacc;
        case 0x1fbadcu: goto label_1fbadc;
        case 0x1fbae4u: goto label_1fbae4;
        case 0x1fbaf0u: goto label_1fbaf0;
        case 0x1fbb14u: goto label_1fbb14;
        case 0x1fbb24u: goto label_1fbb24;
        case 0x1fbb58u: goto label_1fbb58;
        case 0x1fbb74u: goto label_1fbb74;
        case 0x1fbb84u: goto label_1fbb84;
        case 0x1fbb94u: goto label_1fbb94;
        case 0x1fbba8u: goto label_1fbba8;
        case 0x1fbbb8u: goto label_1fbbb8;
        default: break;
    }

    ctx->pc = 0x1fb370u;

    // 0x1fb370: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1fb370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x1fb374: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1fb374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1fb378: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1fb378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1fb37c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1fb37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1fb380: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1fb380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1fb384: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1fb384u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb388: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1fb388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1fb38c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1fb38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1fb390: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1fb390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1fb394: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1fb394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1fb398: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fb398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1fb39c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fb39cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fb3a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1fb3a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb3a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fb3a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fb3a8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1fb3a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb3ac: 0x8c33ca4c  lw          $s3, -0x35B4($at)
    ctx->pc = 0x1fb3acu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953548)));
    // 0x1fb3b0: 0x8382909c  lb          $v0, -0x6F64($gp)
    ctx->pc = 0x1fb3b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938780)));
    // 0x1fb3b4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1fb3b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1fb3b8: 0x8c34cb3c  lw          $s4, -0x34C4($at)
    ctx->pc = 0x1fb3b8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953788)));
    // 0x1fb3bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FB3BCu;
    {
        const bool branch_taken_0x1fb3bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB3C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB3BCu;
            // 0x1fb3c0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb3bc) {
            ctx->pc = 0x1FB3D0u;
            goto label_1fb3d0;
        }
    }
    ctx->pc = 0x1FB3C4u;
    // 0x1fb3c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fb3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fb3c8: 0xaf809098  sw          $zero, -0x6F68($gp)
    ctx->pc = 0x1fb3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938776), GPR_U32(ctx, 0));
    // 0x1fb3cc: 0xa382909c  sb          $v0, -0x6F64($gp)
    ctx->pc = 0x1fb3ccu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938780), (uint8_t)GPR_U32(ctx, 2));
label_1fb3d0:
    // 0x1fb3d0: 0x838290a4  lb          $v0, -0x6F5C($gp)
    ctx->pc = 0x1fb3d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938788)));
    // 0x1fb3d4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FB3D4u;
    {
        const bool branch_taken_0x1fb3d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB3D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB3D4u;
            // 0x1fb3d8: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb3d4) {
            ctx->pc = 0x1FB3E8u;
            goto label_1fb3e8;
        }
    }
    ctx->pc = 0x1FB3DCu;
    // 0x1fb3dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fb3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fb3e0: 0xa78090a0  sh          $zero, -0x6F60($gp)
    ctx->pc = 0x1fb3e0u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294938784), (uint16_t)GPR_U32(ctx, 0));
    // 0x1fb3e4: 0xa38290a4  sb          $v0, -0x6F5C($gp)
    ctx->pc = 0x1fb3e4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938788), (uint8_t)GPR_U32(ctx, 2));
label_1fb3e8:
    // 0x1fb3e8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1fb3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fb3ec: 0x3463b8f4  ori         $v1, $v1, 0xB8F4
    ctx->pc = 0x1fb3ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47348);
    // 0x1fb3f0: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1fb3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1fb3f4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1fb3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fb3f8: 0x106201d9  beq         $v1, $v0, . + 4 + (0x1D9 << 2)
    ctx->pc = 0x1FB3F8u;
    {
        const bool branch_taken_0x1fb3f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FB3FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB3F8u;
            // 0x1fb3fc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb3f8) {
            ctx->pc = 0x1FBB60u;
            goto label_1fbb60;
        }
    }
    ctx->pc = 0x1FB400u;
    // 0x1fb400: 0x10620174  beq         $v1, $v0, . + 4 + (0x174 << 2)
    ctx->pc = 0x1FB400u;
    {
        const bool branch_taken_0x1fb400 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FB404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB400u;
            // 0x1fb404: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb400) {
            ctx->pc = 0x1FB9D4u;
            goto label_1fb9d4;
        }
    }
    ctx->pc = 0x1FB408u;
    // 0x1fb408: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1fb408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fb40c: 0x106600b8  beq         $v1, $a2, . + 4 + (0xB8 << 2)
    ctx->pc = 0x1FB40Cu;
    {
        const bool branch_taken_0x1fb40c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x1FB410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB40Cu;
            // 0x1fb410: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb40c) {
            ctx->pc = 0x1FB6F0u;
            goto label_1fb6f0;
        }
    }
    ctx->pc = 0x1FB414u;
    // 0x1fb414: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FB414u;
    {
        const bool branch_taken_0x1fb414 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB414u;
            // 0x1fb418: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb414) {
            ctx->pc = 0x1FB424u;
            goto label_1fb424;
        }
    }
    ctx->pc = 0x1FB41Cu;
    // 0x1fb41c: 0x100001e7  b           . + 4 + (0x1E7 << 2)
    ctx->pc = 0x1FB41Cu;
    {
        const bool branch_taken_0x1fb41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB41Cu;
            // 0x1fb420: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb41c) {
            ctx->pc = 0x1FBBBCu;
            goto label_1fbbbc;
        }
    }
    ctx->pc = 0x1FB424u;
label_1fb424:
    // 0x1fb424: 0xc07ecc8  jal         func_1FB320
    ctx->pc = 0x1FB424u;
    SET_GPR_U32(ctx, 31, 0x1FB42Cu);
    ctx->pc = 0x1FB320u;
    if (runtime->hasFunction(0x1FB320u)) {
        auto targetFn = runtime->lookupFunction(0x1FB320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB42Cu; }
        if (ctx->pc != 0x1FB42Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        georama_menu_local_key__Fi_0x1fb320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB42Cu; }
        if (ctx->pc != 0x1FB42Cu) { return; }
    }
    ctx->pc = 0x1FB42Cu;
label_1fb42c:
    // 0x1fb42c: 0x8e550154  lw          $s5, 0x154($s2)
    ctx->pc = 0x1fb42cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 340)));
    // 0x1fb430: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1fb430u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb434: 0x8e510150  lw          $s1, 0x150($s2)
    ctx->pc = 0x1fb434u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
    // 0x1fb438: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fb438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb43c: 0xc07e754  jal         func_1F9D50
    ctx->pc = 0x1FB43Cu;
    SET_GPR_U32(ctx, 31, 0x1FB444u);
    ctx->pc = 0x1FB440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB43Cu;
            // 0x1fb440: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F9D50u;
    if (runtime->hasFunction(0x1F9D50u)) {
        auto targetFn = runtime->lookupFunction(0x1F9D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB444u; }
        if (ctx->pc != 0x1FB444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowViewModeMax__12CMenuGeoramaFi_0x1f9d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB444u; }
        if (ctx->pc != 0x1FB444u) { return; }
    }
    ctx->pc = 0x1FB444u;
label_1fb444:
    // 0x1fb444: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1fb444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb448: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1fb448u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb44c: 0x26450154  addiu       $a1, $s2, 0x154
    ctx->pc = 0x1fb44cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 340));
    // 0x1fb450: 0x26460150  addiu       $a2, $s2, 0x150
    ctx->pc = 0x1fb450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
    // 0x1fb454: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1fb454u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb458: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x1fb458u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1fb45c: 0xc08ec6c  jal         func_23B1B0
    ctx->pc = 0x1FB45Cu;
    SET_GPR_U32(ctx, 31, 0x1FB464u);
    ctx->pc = 0x1FB460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB45Cu;
            // 0x1fb460: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B1B0u;
    if (runtime->hasFunction(0x23B1B0u)) {
        auto targetFn = runtime->lookupFunction(0x23B1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB464u; }
        if (ctx->pc != 0x1FB464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuKeySelectCheck__FiPiPiiiii_0x23b1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB464u; }
        if (ctx->pc != 0x1FB464u) { return; }
    }
    ctx->pc = 0x1FB464u;
label_1fb464:
    // 0x1fb464: 0x8e450148  lw          $a1, 0x148($s2)
    ctx->pc = 0x1fb464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x1fb468: 0x8e460154  lw          $a2, 0x154($s2)
    ctx->pc = 0x1fb468u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 340)));
    // 0x1fb46c: 0x8e470150  lw          $a3, 0x150($s2)
    ctx->pc = 0x1fb46cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
    // 0x1fb470: 0xc07e72c  jal         func_1F9CB0
    ctx->pc = 0x1FB470u;
    SET_GPR_U32(ctx, 31, 0x1FB478u);
    ctx->pc = 0x1FB474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB470u;
            // 0x1fb474: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F9CB0u;
    if (runtime->hasFunction(0x1F9CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1F9CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB478u; }
        if (ctx->pc != 0x1FB478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetGeoListInfo__12CMenuGeoramaFiii_0x1f9cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB478u; }
        if (ctx->pc != 0x1FB478u) { return; }
    }
    ctx->pc = 0x1FB478u;
label_1fb478:
    // 0x1fb478: 0x8e420150  lw          $v0, 0x150($s2)
    ctx->pc = 0x1fb478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
    // 0x1fb47c: 0x12220008  beq         $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FB47Cu;
    {
        const bool branch_taken_0x1fb47c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FB480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB47Cu;
            // 0x1fb480: 0x222082a  slt         $at, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb47c) {
            ctx->pc = 0x1FB4A0u;
            goto label_1fb4a0;
        }
    }
    ctx->pc = 0x1FB484u;
    // 0x1fb484: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FB484u;
    {
        const bool branch_taken_0x1fb484 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB484u;
            // 0x1fb488: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb484) {
            ctx->pc = 0x1FB490u;
            goto label_1fb490;
        }
    }
    ctx->pc = 0x1FB48Cu;
    // 0x1fb48c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1fb48cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fb490:
    // 0x1fb490: 0x8e430148  lw          $v1, 0x148($s2)
    ctx->pc = 0x1fb490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x1fb494: 0x27829030  addiu       $v0, $gp, -0x6FD0
    ctx->pc = 0x1fb494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938672));
    // 0x1fb498: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fb498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fb49c: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x1fb49cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
label_1fb4a0:
    // 0x1fb4a0: 0x8e420154  lw          $v0, 0x154($s2)
    ctx->pc = 0x1fb4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 340)));
    // 0x1fb4a4: 0x12a2000a  beq         $s5, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1FB4A4u;
    {
        const bool branch_taken_0x1fb4a4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FB4A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB4A4u;
            // 0x1fb4a8: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb4a4) {
            ctx->pc = 0x1FB4D0u;
            goto label_1fb4d0;
        }
    }
    ctx->pc = 0x1FB4ACu;
    // 0x1fb4ac: 0xc07e564  jal         func_1F9590
    ctx->pc = 0x1FB4ACu;
    SET_GPR_U32(ctx, 31, 0x1FB4B4u);
    ctx->pc = 0x1FB4B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB4ACu;
            // 0x1fb4b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F9590u;
    if (runtime->hasFunction(0x1F9590u)) {
        auto targetFn = runtime->lookupFunction(0x1F9590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB4B4u; }
        if (ctx->pc != 0x1FB4B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowModeLoadPartsID__12CMenuGeoramaFv_0x1f9590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB4B4u; }
        if (ctx->pc != 0x1FB4B4u) { return; }
    }
    ctx->pc = 0x1FB4B4u;
label_1fb4b4:
    // 0x1fb4b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fb4b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb4b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fb4b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb4bc: 0xc07e5b0  jal         func_1F96C0
    ctx->pc = 0x1FB4BCu;
    SET_GPR_U32(ctx, 31, 0x1FB4C4u);
    ctx->pc = 0x1FB4C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB4BCu;
            // 0x1fb4c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F96C0u;
    if (runtime->hasFunction(0x1F96C0u)) {
        auto targetFn = runtime->lookupFunction(0x1F96C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB4C4u; }
        if (ctx->pc != 0x1FB4C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadGeoramaPart__12CMenuGeoramaFii_0x1f96c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB4C4u; }
        if (ctx->pc != 0x1FB4C4u) { return; }
    }
    ctx->pc = 0x1FB4C4u;
label_1fb4c4:
    // 0x1fb4c4: 0xc094274  jal         func_2509D0
    ctx->pc = 0x1FB4C4u;
    SET_GPR_U32(ctx, 31, 0x1FB4CCu);
    ctx->pc = 0x1FB4C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB4C4u;
            // 0x1fb4c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB4CCu; }
        if (ctx->pc != 0x1FB4CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB4CCu; }
        if (ctx->pc != 0x1FB4CCu) { return; }
    }
    ctx->pc = 0x1FB4CCu;
label_1fb4cc:
    // 0x1fb4cc: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1fb4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1fb4d0:
    // 0x1fb4d0: 0x1202007a  beq         $s0, $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x1FB4D0u;
    {
        const bool branch_taken_0x1fb4d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FB4D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB4D0u;
            // 0x1fb4d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb4d0) {
            ctx->pc = 0x1FB6BCu;
            goto label_1fb6bc;
        }
    }
    ctx->pc = 0x1FB4D8u;
    // 0x1fb4d8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1fb4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1fb4dc: 0x12020078  beq         $s0, $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x1FB4DCu;
    {
        const bool branch_taken_0x1fb4dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FB4E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB4DCu;
            // 0x1fb4e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb4dc) {
            ctx->pc = 0x1FB6C0u;
            goto label_1fb6c0;
        }
    }
    ctx->pc = 0x1FB4E4u;
    // 0x1fb4e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fb4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fb4e8: 0x12020070  beq         $s0, $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x1FB4E8u;
    {
        const bool branch_taken_0x1fb4e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FB4ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB4E8u;
            // 0x1fb4ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb4e8) {
            ctx->pc = 0x1FB6ACu;
            goto label_1fb6ac;
        }
    }
    ctx->pc = 0x1FB4F0u;
    // 0x1fb4f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fb4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fb4f4: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FB4F4u;
    {
        const bool branch_taken_0x1fb4f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fb4f4) {
            ctx->pc = 0x1FB504u;
            goto label_1fb504;
        }
    }
    ctx->pc = 0x1FB4FCu;
    // 0x1fb4fc: 0x100001ae  b           . + 4 + (0x1AE << 2)
    ctx->pc = 0x1FB4FCu;
    {
        const bool branch_taken_0x1fb4fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb4fc) {
            ctx->pc = 0x1FBBB8u;
            goto label_1fbbb8;
        }
    }
    ctx->pc = 0x1FB504u;
label_1fb504:
    // 0x1fb504: 0x8e450148  lw          $a1, 0x148($s2)
    ctx->pc = 0x1fb504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x1fb508: 0x8e460154  lw          $a2, 0x154($s2)
    ctx->pc = 0x1fb508u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 340)));
    // 0x1fb50c: 0xc07e580  jal         func_1F9600
    ctx->pc = 0x1FB50Cu;
    SET_GPR_U32(ctx, 31, 0x1FB514u);
    ctx->pc = 0x1FB510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB50Cu;
            // 0x1fb510: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F9600u;
    if (runtime->hasFunction(0x1F9600u)) {
        auto targetFn = runtime->lookupFunction(0x1F9600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB514u; }
        if (ctx->pc != 0x1FB514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowSelectEditPartsInfo__12CMenuGeoramaFii_0x1f9600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB514u; }
        if (ctx->pc != 0x1FB514u) { return; }
    }
    ctx->pc = 0x1FB514u;
label_1fb514:
    // 0x1fb514: 0xaf829098  sw          $v0, -0x6F68($gp)
    ctx->pc = 0x1fb514u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938776), GPR_U32(ctx, 2));
    // 0x1fb518: 0x8f829098  lw          $v0, -0x6F68($gp)
    ctx->pc = 0x1fb518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938776)));
    // 0x1fb51c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FB51Cu;
    {
        const bool branch_taken_0x1fb51c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB51Cu;
            // 0x1fb520: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb51c) {
            ctx->pc = 0x1FB534u;
            goto label_1fb534;
        }
    }
    ctx->pc = 0x1FB524u;
    // 0x1fb524: 0xc094274  jal         func_2509D0
    ctx->pc = 0x1FB524u;
    SET_GPR_U32(ctx, 31, 0x1FB52Cu);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB52Cu; }
        if (ctx->pc != 0x1FB52Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB52Cu; }
        if (ctx->pc != 0x1FB52Cu) { return; }
    }
    ctx->pc = 0x1FB52Cu;
label_1fb52c:
    // 0x1fb52c: 0x100001a2  b           . + 4 + (0x1A2 << 2)
    ctx->pc = 0x1FB52Cu;
    {
        const bool branch_taken_0x1fb52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb52c) {
            ctx->pc = 0x1FBBB8u;
            goto label_1fbbb8;
        }
    }
    ctx->pc = 0x1FB534u;
label_1fb534:
    // 0x1fb534: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1fb534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1fb538: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fb538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fb53c: 0xaf8381b4  sw          $v1, -0x7E4C($gp)
    ctx->pc = 0x1fb53cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934964), GPR_U32(ctx, 3));
    // 0x1fb540: 0xaf8281b0  sw          $v0, -0x7E50($gp)
    ctx->pc = 0x1fb540u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934960), GPR_U32(ctx, 2));
    // 0x1fb544: 0xa78290a0  sh          $v0, -0x6F60($gp)
    ctx->pc = 0x1fb544u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294938784), (uint16_t)GPR_U32(ctx, 2));
    // 0x1fb548: 0x8f8281b4  lw          $v0, -0x7E4C($gp)
    ctx->pc = 0x1fb548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934964)));
    // 0x1fb54c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1FB54Cu;
    {
        const bool branch_taken_0x1fb54c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB54Cu;
            // 0x1fb550: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb54c) {
            ctx->pc = 0x1FB5B8u;
            goto label_1fb5b8;
        }
    }
    ctx->pc = 0x1FB554u;
    // 0x1fb554: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1FB554u;
    {
        const bool branch_taken_0x1fb554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB554u;
            // 0x1fb558: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb554) {
            ctx->pc = 0x1FB5A0u;
            goto label_1fb5a0;
        }
    }
    ctx->pc = 0x1FB55Cu;
label_1fb55c:
    // 0x1fb55c: 0x8f8481b4  lw          $a0, -0x7E4C($gp)
    ctx->pc = 0x1fb55cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934964)));
    // 0x1fb560: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x1fb560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x1fb564: 0x3401bbc4  ori         $at, $zero, 0xBBC4
    ctx->pc = 0x1fb564u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48068);
    // 0x1fb568: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x1FB568u;
    SET_GPR_U32(ctx, 31, 0x1FB570u);
    ctx->pc = 0x1FB56Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB568u;
            // 0x1fb56c: 0x412821  addu        $a1, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB570u; }
        if (ctx->pc != 0x1FB570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB570u; }
        if (ctx->pc != 0x1FB570u) { return; }
    }
    ctx->pc = 0x1FB570u;
label_1fb570:
    // 0x1fb570: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FB570u;
    {
        const bool branch_taken_0x1fb570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB570u;
            // 0x1fb574: 0x1010c0  sll         $v0, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb570) {
            ctx->pc = 0x1FB598u;
            goto label_1fb598;
        }
    }
    ctx->pc = 0x1FB578u;
    // 0x1fb578: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1fb578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1fb57c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1fb57cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1fb580: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1fb580u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1fb584: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1fb584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1fb588: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1fb588u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1fb58c: 0x8422bbc0  lh          $v0, -0x4440($at)
    ctx->pc = 0x1fb58cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294949824)));
    // 0x1fb590: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1FB590u;
    {
        const bool branch_taken_0x1fb590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB590u;
            // 0x1fb594: 0xa78290a0  sh          $v0, -0x6F60($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294938784), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb590) {
            ctx->pc = 0x1FB5B8u;
            goto label_1fb5b8;
        }
    }
    ctx->pc = 0x1FB598u;
label_1fb598:
    // 0x1fb598: 0x26310038  addiu       $s1, $s1, 0x38
    ctx->pc = 0x1fb598u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x1fb59c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fb59cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1fb5a0:
    // 0x1fb5a0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1fb5a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1fb5a4: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x1fb5a4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x1fb5a8: 0x8c22bbb8  lw          $v0, -0x4448($at)
    ctx->pc = 0x1fb5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294949816)));
    // 0x1fb5ac: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1fb5acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1fb5b0: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1FB5B0u;
    {
        const bool branch_taken_0x1fb5b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb5b0) {
            ctx->pc = 0x1FB55Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1fb55c;
        }
    }
    ctx->pc = 0x1FB5B8u;
label_1fb5b8:
    // 0x1fb5b8: 0xc094274  jal         func_2509D0
    ctx->pc = 0x1FB5B8u;
    SET_GPR_U32(ctx, 31, 0x1FB5C0u);
    ctx->pc = 0x1FB5BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB5B8u;
            // 0x1fb5bc: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB5C0u; }
        if (ctx->pc != 0x1FB5C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB5C0u; }
        if (ctx->pc != 0x1FB5C0u) { return; }
    }
    ctx->pc = 0x1FB5C0u;
label_1fb5c0:
    // 0x1fb5c0: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1fb5c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1fb5c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fb5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fb5c8: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x1fb5c8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x1fb5cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1fb5ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb5d0: 0xac22b8f4  sw          $v0, -0x470C($at)
    ctx->pc = 0x1fb5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949108), GPR_U32(ctx, 2));
    // 0x1fb5d4: 0xc0874e8  jal         func_21D3A0
    ctx->pc = 0x1FB5D4u;
    SET_GPR_U32(ctx, 31, 0x1FB5DCu);
    ctx->pc = 0x1FB5D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB5D4u;
            // 0x1fb5d8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB5DCu; }
        if (ctx->pc != 0x1FB5DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB5DCu; }
        if (ctx->pc != 0x1FB5DCu) { return; }
    }
    ctx->pc = 0x1FB5DCu;
label_1fb5dc:
    // 0x1fb5dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1fb5dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb5e0: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x1FB5E0u;
    SET_GPR_U32(ctx, 31, 0x1FB5E8u);
    ctx->pc = 0x1FB5E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB5E0u;
            // 0x1fb5e4: 0x24050672  addiu       $a1, $zero, 0x672 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1650));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB5E8u; }
        if (ctx->pc != 0x1FB5E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB5E8u; }
        if (ctx->pc != 0x1FB5E8u) { return; }
    }
    ctx->pc = 0x1FB5E8u;
label_1fb5e8:
    // 0x1fb5e8: 0x8f829098  lw          $v0, -0x6F68($gp)
    ctx->pc = 0x1fb5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938776)));
    // 0x1fb5ec: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1fb5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1fb5f0: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1fb5f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1fb5f4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FB5F4u;
    {
        const bool branch_taken_0x1fb5f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB5F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB5F4u;
            // 0x1fb5f8: 0x3c028030  lui         $v0, 0x8030 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32816 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb5f4) {
            ctx->pc = 0x1FB610u;
            goto label_1fb610;
        }
    }
    ctx->pc = 0x1FB5FCu;
    // 0x1fb5fc: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1fb5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1fb600: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1fb600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1fb604: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FB604u;
    {
        const bool branch_taken_0x1fb604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB604u;
            // 0x1fb608: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb604) {
            ctx->pc = 0x1FB61Cu;
            goto label_1fb61c;
        }
    }
    ctx->pc = 0x1FB60Cu;
    // 0x1fb60c: 0x3c028030  lui         $v0, 0x8030
    ctx->pc = 0x1fb60cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32816 << 16));
label_1fb610:
    // 0x1fb610: 0x34423030  ori         $v0, $v0, 0x3030
    ctx->pc = 0x1fb610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12336);
    // 0x1fb614: 0xae621cd8  sw          $v0, 0x1CD8($s3)
    ctx->pc = 0x1fb614u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 7384), GPR_U32(ctx, 2));
    // 0x1fb618: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fb618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fb61c:
    // 0x1fb61c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1fb61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fb620: 0xa2820001  sb          $v0, 0x1($s4)
    ctx->pc = 0x1fb620u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fb624: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1fb624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb628: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fb628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fb62c: 0xae6317e4  sw          $v1, 0x17E4($s3)
    ctx->pc = 0x1fb62cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6116), GPR_U32(ctx, 3));
    // 0x1fb630: 0xae621ad4  sw          $v0, 0x1AD4($s3)
    ctx->pc = 0x1fb630u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6868), GPR_U32(ctx, 2));
    // 0x1fb634: 0xc0875b0  jal         func_21D6C0
    ctx->pc = 0x1FB634u;
    SET_GPR_U32(ctx, 31, 0x1FB63Cu);
    ctx->pc = 0x1FB638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB634u;
            // 0x1fb638: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D6C0u;
    if (runtime->hasFunction(0x21D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB63Cu; }
        if (ctx->pc != 0x1FB63Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgCursor__7CDC2MesFi_0x21d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB63Cu; }
        if (ctx->pc != 0x1FB63Cu) { return; }
    }
    ctx->pc = 0x1FB63Cu;
label_1fb63c:
    // 0x1fb63c: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x1fb63cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x1fb640: 0xc08f0b0  jal         func_23C2C0
    ctx->pc = 0x1FB640u;
    SET_GPR_U32(ctx, 31, 0x1FB648u);
    ctx->pc = 0x1FB644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB640u;
            // 0x1fb644: 0x27a500e8  addiu       $a1, $sp, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C2C0u;
    if (runtime->hasFunction(0x23C2C0u)) {
        auto targetFn = runtime->lookupFunction(0x23C2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB648u; }
        if (ctx->pc != 0x1FB648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCursorPos__12CMenuKeyFuncFPi_0x23c2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB648u; }
        if (ctx->pc != 0x1FB648u) { return; }
    }
    ctx->pc = 0x1FB648u;
label_1fb648:
    // 0x1fb648: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x1fb648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1fb64c: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x1fb64cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1fb650: 0x8fa500ec  lw          $a1, 0xEC($sp)
    ctx->pc = 0x1fb650u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x1fb654: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1fb654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1fb658: 0x24840028  addiu       $a0, $a0, 0x28
    ctx->pc = 0x1fb658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
    // 0x1fb65c: 0x24a5ffb0  addiu       $a1, $a1, -0x50
    ctx->pc = 0x1fb65cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967216));
    // 0x1fb660: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1fb660u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fb664: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1fb664u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fb668: 0x0  nop
    ctx->pc = 0x1fb668u;
    // NOP
    // 0x1fb66c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1fb66cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1fb670: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1fb670u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1fb674: 0xe681000c  swc1        $f1, 0xC($s4)
    ctx->pc = 0x1fb674u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    // 0x1fb678: 0xe6800010  swc1        $f0, 0x10($s4)
    ctx->pc = 0x1fb678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 16), bits); }
    // 0x1fb67c: 0xae6301a8  sw          $v1, 0x1A8($s3)
    ctx->pc = 0x1fb67cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 424), GPR_U32(ctx, 3));
    // 0x1fb680: 0xae6201ac  sw          $v0, 0x1AC($s3)
    ctx->pc = 0x1fb680u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 428), GPR_U32(ctx, 2));
    // 0x1fb684: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x1fb684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x1fb688: 0x8c420138  lw          $v0, 0x138($v0)
    ctx->pc = 0x1fb688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 312)));
    // 0x1fb68c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FB68Cu;
    {
        const bool branch_taken_0x1fb68c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb68c) {
            ctx->pc = 0x1FB698u;
            goto label_1fb698;
        }
    }
    ctx->pc = 0x1FB694u;
    // 0x1fb694: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x1fb694u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
label_1fb698:
    // 0x1fb698: 0x8f8581b0  lw          $a1, -0x7E50($gp)
    ctx->pc = 0x1fb698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934960)));
    // 0x1fb69c: 0xc0877b8  jal         func_21DEE0
    ctx->pc = 0x1FB69Cu;
    SET_GPR_U32(ctx, 31, 0x1FB6A4u);
    ctx->pc = 0x1FB6A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB69Cu;
            // 0x1fb6a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DEE0u;
    if (runtime->hasFunction(0x21DEE0u)) {
        auto targetFn = runtime->lookupFunction(0x21DEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB6A4u; }
        if (ctx->pc != 0x1FB6A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgVolumeNoOne__7CDC2MesFi_0x21dee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB6A4u; }
        if (ctx->pc != 0x1FB6A4u) { return; }
    }
    ctx->pc = 0x1FB6A4u;
label_1fb6a4:
    // 0x1fb6a4: 0x10000144  b           . + 4 + (0x144 << 2)
    ctx->pc = 0x1FB6A4u;
    {
        const bool branch_taken_0x1fb6a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb6a4) {
            ctx->pc = 0x1FBBB8u;
            goto label_1fbbb8;
        }
    }
    ctx->pc = 0x1FB6ACu;
label_1fb6ac:
    // 0x1fb6ac: 0xc07e738  jal         func_1F9CE0
    ctx->pc = 0x1FB6ACu;
    SET_GPR_U32(ctx, 31, 0x1FB6B4u);
    ctx->pc = 0x1FB6B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB6ACu;
            // 0x1fb6b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F9CE0u;
    if (runtime->hasFunction(0x1F9CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1F9CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB6B4u; }
        if (ctx->pc != 0x1FB6B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReturnSelectMode__12CMenuGeoramaFi_0x1f9ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB6B4u; }
        if (ctx->pc != 0x1FB6B4u) { return; }
    }
    ctx->pc = 0x1FB6B4u;
label_1fb6b4:
    // 0x1fb6b4: 0x10000140  b           . + 4 + (0x140 << 2)
    ctx->pc = 0x1FB6B4u;
    {
        const bool branch_taken_0x1fb6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb6b4) {
            ctx->pc = 0x1FBBB8u;
            goto label_1fbbb8;
        }
    }
    ctx->pc = 0x1FB6BCu;
label_1fb6bc:
    // 0x1fb6bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fb6bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fb6c0:
    // 0x1fb6c0: 0xc07e260  jal         func_1F8980
    ctx->pc = 0x1FB6C0u;
    SET_GPR_U32(ctx, 31, 0x1FB6C8u);
    ctx->pc = 0x1FB6C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB6C0u;
            // 0x1fb6c4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F8980u;
    if (runtime->hasFunction(0x1F8980u)) {
        auto targetFn = runtime->lookupFunction(0x1F8980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB6C8u; }
        if (ctx->pc != 0x1FB6C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ArrangePartsList__12CMenuGeoramaFii_0x1f8980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB6C8u; }
        if (ctx->pc != 0x1FB6C8u) { return; }
    }
    ctx->pc = 0x1FB6C8u;
label_1fb6c8:
    // 0x1fb6c8: 0xc07e564  jal         func_1F9590
    ctx->pc = 0x1FB6C8u;
    SET_GPR_U32(ctx, 31, 0x1FB6D0u);
    ctx->pc = 0x1FB6CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB6C8u;
            // 0x1fb6cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F9590u;
    if (runtime->hasFunction(0x1F9590u)) {
        auto targetFn = runtime->lookupFunction(0x1F9590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB6D0u; }
        if (ctx->pc != 0x1FB6D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowModeLoadPartsID__12CMenuGeoramaFv_0x1f9590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB6D0u; }
        if (ctx->pc != 0x1FB6D0u) { return; }
    }
    ctx->pc = 0x1FB6D0u;
label_1fb6d0:
    // 0x1fb6d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fb6d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb6d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fb6d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb6d8: 0xc07e5b0  jal         func_1F96C0
    ctx->pc = 0x1FB6D8u;
    SET_GPR_U32(ctx, 31, 0x1FB6E0u);
    ctx->pc = 0x1FB6DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB6D8u;
            // 0x1fb6dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F96C0u;
    if (runtime->hasFunction(0x1F96C0u)) {
        auto targetFn = runtime->lookupFunction(0x1F96C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB6E0u; }
        if (ctx->pc != 0x1FB6E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadGeoramaPart__12CMenuGeoramaFii_0x1f96c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB6E0u; }
        if (ctx->pc != 0x1FB6E0u) { return; }
    }
    ctx->pc = 0x1FB6E0u;
label_1fb6e0:
    // 0x1fb6e0: 0xc094274  jal         func_2509D0
    ctx->pc = 0x1FB6E0u;
    SET_GPR_U32(ctx, 31, 0x1FB6E8u);
    ctx->pc = 0x1FB6E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB6E0u;
            // 0x1fb6e4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB6E8u; }
        if (ctx->pc != 0x1FB6E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB6E8u; }
        if (ctx->pc != 0x1FB6E8u) { return; }
    }
    ctx->pc = 0x1FB6E8u;
label_1fb6e8:
    // 0x1fb6e8: 0x10000133  b           . + 4 + (0x133 << 2)
    ctx->pc = 0x1FB6E8u;
    {
        const bool branch_taken_0x1fb6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb6e8) {
            ctx->pc = 0x1FBBB8u;
            goto label_1fbbb8;
        }
    }
    ctx->pc = 0x1FB6F0u;
label_1fb6f0:
    // 0x1fb6f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fb6f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb6f4: 0xc0875b4  jal         func_21D6D0
    ctx->pc = 0x1FB6F4u;
    SET_GPR_U32(ctx, 31, 0x1FB6FCu);
    ctx->pc = 0x1FB6F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB6F4u;
            // 0x1fb6f8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D6D0u;
    if (runtime->hasFunction(0x21D6D0u)) {
        auto targetFn = runtime->lookupFunction(0x21D6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB6FCu; }
        if (ctx->pc != 0x1FB6FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddMsgCursor2__7CDC2MesFiii_0x21d6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB6FCu; }
        if (ctx->pc != 0x1FB6FCu) { return; }
    }
    ctx->pc = 0x1FB6FCu;
label_1fb6fc:
    // 0x1fb6fc: 0xc087690  jal         func_21DA40
    ctx->pc = 0x1FB6FCu;
    SET_GPR_U32(ctx, 31, 0x1FB704u);
    ctx->pc = 0x1FB700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB6FCu;
            // 0x1fb700: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DA40u;
    if (runtime->hasFunction(0x21DA40u)) {
        auto targetFn = runtime->lookupFunction(0x21DA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB704u; }
        if (ctx->pc != 0x1FB704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMsgCursor__7CDC2MesFv_0x21da40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB704u; }
        if (ctx->pc != 0x1FB704u) { return; }
    }
    ctx->pc = 0x1FB704u;
label_1fb704:
    // 0x1fb704: 0x8f839098  lw          $v1, -0x6F68($gp)
    ctx->pc = 0x1fb704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938776)));
    // 0x1fb708: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1fb708u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb70c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fb70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fb710: 0x16c20029  bne         $s6, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1FB710u;
    {
        const bool branch_taken_0x1fb710 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FB714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB710u;
            // 0x1fb714: 0x8c750004  lw          $s5, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb710) {
            ctx->pc = 0x1FB7B8u;
            goto label_1fb7b8;
        }
    }
    ctx->pc = 0x1FB718u;
    // 0x1fb718: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1fb718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1fb71c: 0x2a21024  and         $v0, $s5, $v0
    ctx->pc = 0x1fb71cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
    // 0x1fb720: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1FB720u;
    {
        const bool branch_taken_0x1fb720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb720) {
            ctx->pc = 0x1FB7B8u;
            goto label_1fb7b8;
        }
    }
    ctx->pc = 0x1FB728u;
    // 0x1fb728: 0x8f8481b0  lw          $a0, -0x7E50($gp)
    ctx->pc = 0x1fb728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934960)));
    // 0x1fb72c: 0x32220004  andi        $v0, $s1, 0x4
    ctx->pc = 0x1fb72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
    // 0x1fb730: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FB730u;
    {
        const bool branch_taken_0x1fb730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB730u;
            // 0x1fb734: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb730) {
            ctx->pc = 0x1FB73Cu;
            goto label_1fb73c;
        }
    }
    ctx->pc = 0x1FB738u;
    // 0x1fb738: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1fb738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1fb73c:
    // 0x1fb73c: 0x32220008  andi        $v0, $s1, 0x8
    ctx->pc = 0x1fb73cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8);
    // 0x1fb740: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FB740u;
    {
        const bool branch_taken_0x1fb740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB740u;
            // 0x1fb744: 0x32220010  andi        $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb740) {
            ctx->pc = 0x1FB74Cu;
            goto label_1fb74c;
        }
    }
    ctx->pc = 0x1FB748u;
    // 0x1fb748: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1fb748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1fb74c:
    // 0x1fb74c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FB74Cu;
    {
        const bool branch_taken_0x1fb74c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB74Cu;
            // 0x1fb750: 0x32220020  andi        $v0, $s1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb74c) {
            ctx->pc = 0x1FB758u;
            goto label_1fb758;
        }
    }
    ctx->pc = 0x1FB754u;
    // 0x1fb754: 0x2463fffb  addiu       $v1, $v1, -0x5
    ctx->pc = 0x1fb754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
label_1fb758:
    // 0x1fb758: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FB758u;
    {
        const bool branch_taken_0x1fb758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB75Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB758u;
            // 0x1fb75c: 0x32a20001  andi        $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb758) {
            ctx->pc = 0x1FB764u;
            goto label_1fb764;
        }
    }
    ctx->pc = 0x1FB760u;
    // 0x1fb760: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x1fb760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
label_1fb764:
    // 0x1fb764: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FB764u;
    {
        const bool branch_taken_0x1fb764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb764) {
            ctx->pc = 0x1FB770u;
            goto label_1fb770;
        }
    }
    ctx->pc = 0x1FB76Cu;
    // 0x1fb76c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1fb76cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fb770:
    // 0x1fb770: 0x8f8281b0  lw          $v0, -0x7E50($gp)
    ctx->pc = 0x1fb770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934960)));
    // 0x1fb774: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fb774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fb778: 0xaf8281b0  sw          $v0, -0x7E50($gp)
    ctx->pc = 0x1fb778u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934960), GPR_U32(ctx, 2));
    // 0x1fb77c: 0x8f8281b0  lw          $v0, -0x7E50($gp)
    ctx->pc = 0x1fb77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934960)));
    // 0x1fb780: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FB780u;
    {
        const bool branch_taken_0x1fb780 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1FB784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB780u;
            // 0x1fb784: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb780) {
            ctx->pc = 0x1FB78Cu;
            goto label_1fb78c;
        }
    }
    ctx->pc = 0x1FB788u;
    // 0x1fb788: 0xaf8281b0  sw          $v0, -0x7E50($gp)
    ctx->pc = 0x1fb788u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934960), GPR_U32(ctx, 2));
label_1fb78c:
    // 0x1fb78c: 0x878390a0  lh          $v1, -0x6F60($gp)
    ctx->pc = 0x1fb78cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938784)));
    // 0x1fb790: 0x8f8281b0  lw          $v0, -0x7E50($gp)
    ctx->pc = 0x1fb790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934960)));
    // 0x1fb794: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1fb794u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1fb798: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FB798u;
    {
        const bool branch_taken_0x1fb798 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb798) {
            ctx->pc = 0x1FB7A4u;
            goto label_1fb7a4;
        }
    }
    ctx->pc = 0x1FB7A0u;
    // 0x1fb7a0: 0xaf8381b0  sw          $v1, -0x7E50($gp)
    ctx->pc = 0x1fb7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934960), GPR_U32(ctx, 3));
label_1fb7a4:
    // 0x1fb7a4: 0x8f8281b0  lw          $v0, -0x7E50($gp)
    ctx->pc = 0x1fb7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934960)));
    // 0x1fb7a8: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FB7A8u;
    {
        const bool branch_taken_0x1fb7a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FB7ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB7A8u;
            // 0x1fb7ac: 0x2404001d  addiu       $a0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb7a8) {
            ctx->pc = 0x1FB7B8u;
            goto label_1fb7b8;
        }
    }
    ctx->pc = 0x1FB7B0u;
    // 0x1fb7b0: 0xc094274  jal         func_2509D0
    ctx->pc = 0x1FB7B0u;
    SET_GPR_U32(ctx, 31, 0x1FB7B8u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB7B8u; }
        if (ctx->pc != 0x1FB7B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB7B8u; }
        if (ctx->pc != 0x1FB7B8u) { return; }
    }
    ctx->pc = 0x1FB7B8u;
label_1fb7b8:
    // 0x1fb7b8: 0x8f8581b0  lw          $a1, -0x7E50($gp)
    ctx->pc = 0x1fb7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934960)));
    // 0x1fb7bc: 0xc0877b8  jal         func_21DEE0
    ctx->pc = 0x1FB7BCu;
    SET_GPR_U32(ctx, 31, 0x1FB7C4u);
    ctx->pc = 0x1FB7C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB7BCu;
            // 0x1fb7c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DEE0u;
    if (runtime->hasFunction(0x21DEE0u)) {
        auto targetFn = runtime->lookupFunction(0x21DEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB7C4u; }
        if (ctx->pc != 0x1FB7C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgVolumeNoOne__7CDC2MesFi_0x21dee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB7C4u; }
        if (ctx->pc != 0x1FB7C4u) { return; }
    }
    ctx->pc = 0x1FB7C4u;
label_1fb7c4:
    // 0x1fb7c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fb7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fb7c8: 0x1202007a  beq         $s0, $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x1FB7C8u;
    {
        const bool branch_taken_0x1fb7c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FB7CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB7C8u;
            // 0x1fb7cc: 0x3c010002  lui         $at, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb7c8) {
            ctx->pc = 0x1FB9B4u;
            goto label_1fb9b4;
        }
    }
    ctx->pc = 0x1FB7D0u;
    // 0x1fb7d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fb7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fb7d4: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FB7D4u;
    {
        const bool branch_taken_0x1fb7d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fb7d4) {
            ctx->pc = 0x1FB7E4u;
            goto label_1fb7e4;
        }
    }
    ctx->pc = 0x1FB7DCu;
    // 0x1fb7dc: 0x100000f6  b           . + 4 + (0xF6 << 2)
    ctx->pc = 0x1FB7DCu;
    {
        const bool branch_taken_0x1fb7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb7dc) {
            ctx->pc = 0x1FBBB8u;
            goto label_1fbbb8;
        }
    }
    ctx->pc = 0x1FB7E4u;
label_1fb7e4:
    // 0x1fb7e4: 0x16c00053  bnez        $s6, . + 4 + (0x53 << 2)
    ctx->pc = 0x1FB7E4u;
    {
        const bool branch_taken_0x1fb7e4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB7E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB7E4u;
            // 0x1fb7e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb7e4) {
            ctx->pc = 0x1FB934u;
            goto label_1fb934;
        }
    }
    ctx->pc = 0x1FB7ECu;
    // 0x1fb7ec: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1fb7ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1fb7f0: 0xa2800001  sb          $zero, 0x1($s4)
    ctx->pc = 0x1fb7f0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fb7f4: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x1fb7f4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x1fb7f8: 0x8c23b7fc  lw          $v1, -0x4804($at)
    ctx->pc = 0x1fb7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948860)));
    // 0x1fb7fc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1fb7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1fb800: 0x3401bbbc  ori         $at, $zero, 0xBBBC
    ctx->pc = 0x1fb800u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48060);
    // 0x1fb804: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1fb804u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fb808: 0x2b8c0  sll         $s7, $v0, 3
    ctx->pc = 0x1fb808u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1fb80c: 0x2f21021  addu        $v0, $s7, $s2
    ctx->pc = 0x1fb80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 18)));
    // 0x1fb810: 0x418821  addu        $s1, $v0, $at
    ctx->pc = 0x1fb810u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1fb814: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1fb814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fb818: 0xc06c2d4  jal         func_1B0B50
    ctx->pc = 0x1FB818u;
    SET_GPR_U32(ctx, 31, 0x1FB820u);
    ctx->pc = 0x1FB81Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB818u;
            // 0x1fb81c: 0x8f848ff8  lw          $a0, -0x7008($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938616)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0B50u;
    if (runtime->hasFunction(0x1B0B50u)) {
        auto targetFn = runtime->lookupFunction(0x1B0B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB820u; }
        if (ctx->pc != 0x1FB820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePartsInfoAtID__8CEditMapFi_0x1b0b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB820u; }
        if (ctx->pc != 0x1FB820u) { return; }
    }
    ctx->pc = 0x1FB820u;
label_1fb820:
    // 0x1fb820: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fb820u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb824: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FB824u;
    {
        const bool branch_taken_0x1fb824 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB824u;
            // 0x1fb828: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb824) {
            ctx->pc = 0x1FB83Cu;
            goto label_1fb83c;
        }
    }
    ctx->pc = 0x1FB82Cu;
    // 0x1fb82c: 0xc094274  jal         func_2509D0
    ctx->pc = 0x1FB82Cu;
    SET_GPR_U32(ctx, 31, 0x1FB834u);
    ctx->pc = 0x1FB830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB82Cu;
            // 0x1fb830: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB834u; }
        if (ctx->pc != 0x1FB834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB834u; }
        if (ctx->pc != 0x1FB834u) { return; }
    }
    ctx->pc = 0x1FB834u;
label_1fb834:
    // 0x1fb834: 0x100000e0  b           . + 4 + (0xE0 << 2)
    ctx->pc = 0x1FB834u;
    {
        const bool branch_taken_0x1fb834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb834) {
            ctx->pc = 0x1FBBB8u;
            goto label_1fbbb8;
        }
    }
    ctx->pc = 0x1FB83Cu;
label_1fb83c:
    // 0x1fb83c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1fb83cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1fb840: 0xac22d62c  sw          $v0, -0x29D4($at)
    ctx->pc = 0x1fb840u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956588), GPR_U32(ctx, 2));
    // 0x1fb844: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1fb844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fb848: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1fb848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1fb84c: 0xac22d630  sw          $v0, -0x29D0($at)
    ctx->pc = 0x1fb84cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956592), GPR_U32(ctx, 2));
    // 0x1fb850: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1fb850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fb854: 0xc07e24c  jal         func_1F8930
    ctx->pc = 0x1FB854u;
    SET_GPR_U32(ctx, 31, 0x1FB85Cu);
    ctx->pc = 0x1FB858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB854u;
            // 0x1fb858: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F8930u;
    if (runtime->hasFunction(0x1F8930u)) {
        auto targetFn = runtime->lookupFunction(0x1F8930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB85Cu; }
        if (ctx->pc != 0x1FB85Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowMakePartsNum__12CMenuGeoramaFi_0x1f8930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB85Cu; }
        if (ctx->pc != 0x1FB85Cu) { return; }
    }
    ctx->pc = 0x1FB85Cu;
label_1fb85c:
    // 0x1fb85c: 0x2f22021  addu        $a0, $s7, $s2
    ctx->pc = 0x1fb85cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 18)));
    // 0x1fb860: 0x3401bbc0  ori         $at, $zero, 0xBBC0
    ctx->pc = 0x1fb860u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48064);
    // 0x1fb864: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1fb864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1fb868: 0x812821  addu        $a1, $a0, $at
    ctx->pc = 0x1fb868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x1fb86c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1fb86cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fb870: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1fb870u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fb874: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x1fb874u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1fb878: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FB878u;
    {
        const bool branch_taken_0x1fb878 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb878) {
            ctx->pc = 0x1FB884u;
            goto label_1fb884;
        }
    }
    ctx->pc = 0x1FB880u;
    // 0x1fb880: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fb880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fb884:
    // 0x1fb884: 0x8f829098  lw          $v0, -0x6F68($gp)
    ctx->pc = 0x1fb884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938776)));
    // 0x1fb888: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1FB888u;
    {
        const bool branch_taken_0x1fb888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB88Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB888u;
            // 0x1fb88c: 0x8e430158  lw          $v1, 0x158($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb888) {
            ctx->pc = 0x1FB8CCu;
            goto label_1fb8cc;
        }
    }
    ctx->pc = 0x1FB890u;
    // 0x1fb890: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1fb890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1fb894: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1fb894u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1fb898: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x1FB898u;
    {
        const bool branch_taken_0x1fb898 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb898) {
            ctx->pc = 0x1FB8CCu;
            goto label_1fb8cc;
        }
    }
    ctx->pc = 0x1FB8A0u;
    // 0x1fb8a0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1fb8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1fb8a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fb8a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb8a8: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x1FB8A8u;
    SET_GPR_U32(ctx, 31, 0x1FB8B0u);
    ctx->pc = 0x1FB8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB8A8u;
            // 0x1fb8ac: 0x24a58d38  addiu       $a1, $a1, -0x72C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB8B0u; }
        if (ctx->pc != 0x1FB8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB8B0u; }
        if (ctx->pc != 0x1FB8B0u) { return; }
    }
    ctx->pc = 0x1FB8B0u;
label_1fb8b0:
    // 0x1fb8b0: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1fb8b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1fb8b4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1fb8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fb8b8: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x1fb8b8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x1fb8bc: 0xac22b8f4  sw          $v0, -0x470C($at)
    ctx->pc = 0x1fb8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949108), GPR_U32(ctx, 2));
    // 0x1fb8c0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1fb8c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1fb8c4: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x1FB8C4u;
    {
        const bool branch_taken_0x1fb8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB8C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB8C4u;
            // 0x1fb8c8: 0xac20d62c  sw          $zero, -0x29D4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294956588), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb8c4) {
            ctx->pc = 0x1FBBB8u;
            goto label_1fbbb8;
        }
    }
    ctx->pc = 0x1FB8CCu;
label_1fb8cc:
    // 0x1fb8cc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1fb8ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1fb8d0: 0xac24d634  sw          $a0, -0x29CC($at)
    ctx->pc = 0x1fb8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956596), GPR_U32(ctx, 4));
    // 0x1fb8d4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1fb8d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1fb8d8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1fb8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1fb8dc: 0x8c22d634  lw          $v0, -0x29CC($at)
    ctx->pc = 0x1fb8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956596)));
    // 0x1fb8e0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1fb8e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1fb8e4: 0xac23d638  sw          $v1, -0x29C8($at)
    ctx->pc = 0x1fb8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956600), GPR_U32(ctx, 3));
    // 0x1fb8e8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1fb8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fb8ec: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1fb8ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1fb8f0: 0x1c40000c  bgtz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FB8F0u;
    {
        const bool branch_taken_0x1fb8f0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1FB8F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB8F0u;
            // 0x1fb8f4: 0xac23d63c  sw          $v1, -0x29C4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294956604), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb8f0) {
            ctx->pc = 0x1FB924u;
            goto label_1fb924;
        }
    }
    ctx->pc = 0x1FB8F8u;
    // 0x1fb8f8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1fb8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1fb8fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fb8fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb900: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x1FB900u;
    SET_GPR_U32(ctx, 31, 0x1FB908u);
    ctx->pc = 0x1FB904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB900u;
            // 0x1fb904: 0x24a58d48  addiu       $a1, $a1, -0x72B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB908u; }
        if (ctx->pc != 0x1FB908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB908u; }
        if (ctx->pc != 0x1FB908u) { return; }
    }
    ctx->pc = 0x1FB908u;
label_1fb908:
    // 0x1fb908: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1fb908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1fb90c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1fb90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fb910: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x1fb910u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x1fb914: 0xac22b8f4  sw          $v0, -0x470C($at)
    ctx->pc = 0x1fb914u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949108), GPR_U32(ctx, 2));
    // 0x1fb918: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1fb918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1fb91c: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x1FB91Cu;
    {
        const bool branch_taken_0x1fb91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB91Cu;
            // 0x1fb920: 0xac20d62c  sw          $zero, -0x29D4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294956588), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb91c) {
            ctx->pc = 0x1FBBB8u;
            goto label_1fbbb8;
        }
    }
    ctx->pc = 0x1FB924u;
label_1fb924:
    // 0x1fb924: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x1fb924u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fb928: 0xc094274  jal         func_2509D0
    ctx->pc = 0x1FB928u;
    SET_GPR_U32(ctx, 31, 0x1FB930u);
    ctx->pc = 0x1FB92Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB928u;
            // 0x1fb92c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB930u; }
        if (ctx->pc != 0x1FB930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB930u; }
        if (ctx->pc != 0x1FB930u) { return; }
    }
    ctx->pc = 0x1FB930u;
label_1fb930:
    // 0x1fb930: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fb930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fb934:
    // 0x1fb934: 0x16c200a0  bne         $s6, $v0, . + 4 + (0xA0 << 2)
    ctx->pc = 0x1FB934u;
    {
        const bool branch_taken_0x1fb934 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FB938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB934u;
            // 0x1fb938: 0x32a20001  andi        $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb934) {
            ctx->pc = 0x1FBBB8u;
            goto label_1fbbb8;
        }
    }
    ctx->pc = 0x1FB93Cu;
    // 0x1fb93c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FB93Cu;
    {
        const bool branch_taken_0x1fb93c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB93Cu;
            // 0x1fb940: 0x3c020004  lui         $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb93c) {
            ctx->pc = 0x1FB954u;
            goto label_1fb954;
        }
    }
    ctx->pc = 0x1FB944u;
    // 0x1fb944: 0xc094274  jal         func_2509D0
    ctx->pc = 0x1FB944u;
    SET_GPR_U32(ctx, 31, 0x1FB94Cu);
    ctx->pc = 0x1FB948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB944u;
            // 0x1fb948: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB94Cu; }
        if (ctx->pc != 0x1FB94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB94Cu; }
        if (ctx->pc != 0x1FB94Cu) { return; }
    }
    ctx->pc = 0x1FB94Cu;
label_1fb94c:
    // 0x1fb94c: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x1FB94Cu;
    {
        const bool branch_taken_0x1fb94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb94c) {
            ctx->pc = 0x1FBBB8u;
            goto label_1fbbb8;
        }
    }
    ctx->pc = 0x1FB954u;
label_1fb954:
    // 0x1fb954: 0x2a21024  and         $v0, $s5, $v0
    ctx->pc = 0x1fb954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
    // 0x1fb958: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FB958u;
    {
        const bool branch_taken_0x1fb958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB95Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB958u;
            // 0x1fb95c: 0x3c010002  lui         $at, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb958) {
            ctx->pc = 0x1FB970u;
            goto label_1fb970;
        }
    }
    ctx->pc = 0x1FB960u;
    // 0x1fb960: 0xc094274  jal         func_2509D0
    ctx->pc = 0x1FB960u;
    SET_GPR_U32(ctx, 31, 0x1FB968u);
    ctx->pc = 0x1FB964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB960u;
            // 0x1fb964: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB968u; }
        if (ctx->pc != 0x1FB968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB968u; }
        if (ctx->pc != 0x1FB968u) { return; }
    }
    ctx->pc = 0x1FB968u;
label_1fb968:
    // 0x1fb968: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x1FB968u;
    {
        const bool branch_taken_0x1fb968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb968) {
            ctx->pc = 0x1FBBB8u;
            goto label_1fbbb8;
        }
    }
    ctx->pc = 0x1FB970u;
label_1fb970:
    // 0x1fb970: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1fb970u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1fb974: 0xa2800001  sb          $zero, 0x1($s4)
    ctx->pc = 0x1fb974u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fb978: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fb978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fb97c: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x1fb97cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x1fb980: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fb980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb984: 0xac22b8f4  sw          $v0, -0x470C($at)
    ctx->pc = 0x1fb984u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949108), GPR_U32(ctx, 2));
    // 0x1fb988: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x1FB988u;
    SET_GPR_U32(ctx, 31, 0x1FB990u);
    ctx->pc = 0x1FB98Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB988u;
            // 0x1fb98c: 0x24a58d58  addiu       $a1, $a1, -0x72A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937944));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB990u; }
        if (ctx->pc != 0x1FB990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB990u; }
        if (ctx->pc != 0x1FB990u) { return; }
    }
    ctx->pc = 0x1FB990u;
label_1fb990:
    // 0x1fb990: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1fb990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb994: 0x278581b4  addiu       $a1, $gp, -0x7E4C
    ctx->pc = 0x1fb994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934964));
    // 0x1fb998: 0xc087720  jal         func_21DC80
    ctx->pc = 0x1FB998u;
    SET_GPR_U32(ctx, 31, 0x1FB9A0u);
    ctx->pc = 0x1FB99Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB998u;
            // 0x1fb99c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DC80u;
    if (runtime->hasFunction(0x21DC80u)) {
        auto targetFn = runtime->lookupFunction(0x21DC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB9A0u; }
        if (ctx->pc != 0x1FB9A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemNo__7CDC2MesFPPci_0x21dc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB9A0u; }
        if (ctx->pc != 0x1FB9A0u) { return; }
    }
    ctx->pc = 0x1FB9A0u;
label_1fb9a0:
    // 0x1fb9a0: 0x8f8581b0  lw          $a1, -0x7E50($gp)
    ctx->pc = 0x1fb9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934960)));
    // 0x1fb9a4: 0xc0877b8  jal         func_21DEE0
    ctx->pc = 0x1FB9A4u;
    SET_GPR_U32(ctx, 31, 0x1FB9ACu);
    ctx->pc = 0x1FB9A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB9A4u;
            // 0x1fb9a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DEE0u;
    if (runtime->hasFunction(0x21DEE0u)) {
        auto targetFn = runtime->lookupFunction(0x21DEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB9ACu; }
        if (ctx->pc != 0x1FB9ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgVolumeNoOne__7CDC2MesFi_0x21dee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB9ACu; }
        if (ctx->pc != 0x1FB9ACu) { return; }
    }
    ctx->pc = 0x1FB9ACu;
label_1fb9ac:
    // 0x1fb9ac: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x1FB9ACu;
    {
        const bool branch_taken_0x1fb9ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb9ac) {
            ctx->pc = 0x1FBBB8u;
            goto label_1fbbb8;
        }
    }
    ctx->pc = 0x1FB9B4u;
label_1fb9b4:
    // 0x1fb9b4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1fb9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1fb9b8: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x1fb9b8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x1fb9bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fb9bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb9c0: 0x24a58d68  addiu       $a1, $a1, -0x7298
    ctx->pc = 0x1fb9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937960));
    // 0x1fb9c4: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x1FB9C4u;
    SET_GPR_U32(ctx, 31, 0x1FB9CCu);
    ctx->pc = 0x1FB9C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB9C4u;
            // 0x1fb9c8: 0xac20b8f4  sw          $zero, -0x470C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294949108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB9CCu; }
        if (ctx->pc != 0x1FB9CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB9CCu; }
        if (ctx->pc != 0x1FB9CCu) { return; }
    }
    ctx->pc = 0x1FB9CCu;
label_1fb9cc:
    // 0x1fb9cc: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x1FB9CCu;
    {
        const bool branch_taken_0x1fb9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb9cc) {
            ctx->pc = 0x1FBBB8u;
            goto label_1fbbb8;
        }
    }
    ctx->pc = 0x1FB9D4u;
label_1fb9d4:
    // 0x1fb9d4: 0xc087654  jal         func_21D950
    ctx->pc = 0x1FB9D4u;
    SET_GPR_U32(ctx, 31, 0x1FB9DCu);
    ctx->pc = 0x1FB9D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB9D4u;
            // 0x1fb9d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D950u;
    if (runtime->hasFunction(0x21D950u)) {
        auto targetFn = runtime->lookupFunction(0x21D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB9DCu; }
        if (ctx->pc != 0x1FB9DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        YesNoCursor2__7CDC2MesFi_0x21d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB9DCu; }
        if (ctx->pc != 0x1FB9DCu) { return; }
    }
    ctx->pc = 0x1FB9DCu;
label_1fb9dc:
    // 0x1fb9dc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1fb9dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb9e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fb9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fb9e4: 0x16a20054  bne         $s5, $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x1FB9E4u;
    {
        const bool branch_taken_0x1fb9e4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FB9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB9E4u;
            // 0x1fb9e8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb9e4) {
            ctx->pc = 0x1FBB38u;
            goto label_1fbb38;
        }
    }
    ctx->pc = 0x1FB9ECu;
    // 0x1fb9ec: 0xc064220  jal         func_190880
    ctx->pc = 0x1FB9ECu;
    SET_GPR_U32(ctx, 31, 0x1FB9F4u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB9F4u; }
        if (ctx->pc != 0x1FB9F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB9F4u; }
        if (ctx->pc != 0x1FB9F4u) { return; }
    }
    ctx->pc = 0x1FB9F4u;
label_1fb9f4:
    // 0x1fb9f4: 0x8f839098  lw          $v1, -0x6F68($gp)
    ctx->pc = 0x1fb9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938776)));
    // 0x1fb9f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fb9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb9fc: 0x8f8281b0  lw          $v0, -0x7E50($gp)
    ctx->pc = 0x1fb9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934960)));
    // 0x1fba00: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1fba00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fba04: 0xc0bd988  jal         func_2F6620
    ctx->pc = 0x1FBA04u;
    SET_GPR_U32(ctx, 31, 0x1FBA0Cu);
    ctx->pc = 0x1FBA08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBA04u;
            // 0x1fba08: 0x23023  negu        $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6620u;
    if (runtime->hasFunction(0x2F6620u)) {
        auto targetFn = runtime->lookupFunction(0x2F6620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBA0Cu; }
        if (ctx->pc != 0x1FBA0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddBuildPartsNum__9CSaveDataFii_0x2f6620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBA0Cu; }
        if (ctx->pc != 0x1FBA0Cu) { return; }
    }
    ctx->pc = 0x1FBA0Cu;
label_1fba0c:
    // 0x1fba0c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1fba0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fba10: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1fba10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fba14:
    // 0x1fba14: 0x8f849098  lw          $a0, -0x6F68($gp)
    ctx->pc = 0x1fba14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938776)));
    // 0x1fba18: 0xc06d5cc  jal         func_1B5730
    ctx->pc = 0x1FBA18u;
    SET_GPR_U32(ctx, 31, 0x1FBA20u);
    ctx->pc = 0x1FBA1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBA18u;
            // 0x1fba1c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5730u;
    if (runtime->hasFunction(0x1B5730u)) {
        auto targetFn = runtime->lookupFunction(0x1B5730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBA20u; }
        if (ctx->pc != 0x1FBA20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMaterial__14CEditPartsInfoFi_0x1b5730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBA20u; }
        if (ctx->pc != 0x1FBA20u) { return; }
    }
    ctx->pc = 0x1FBA20u;
label_1fba20:
    // 0x1fba20: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1FBA20u;
    {
        const bool branch_taken_0x1fba20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fba20) {
            ctx->pc = 0x1FBAA0u;
            goto label_1fbaa0;
        }
    }
    ctx->pc = 0x1FBA28u;
    // 0x1fba28: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1fba28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fba2c: 0x23d1821  addu        $v1, $s1, $sp
    ctx->pc = 0x1fba2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
    // 0x1fba30: 0x246500a0  addiu       $a1, $v1, 0xA0
    ctx->pc = 0x1fba30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x1fba34: 0x247300c0  addiu       $s3, $v1, 0xC0
    ctx->pc = 0x1fba34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x1fba38: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1fba38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x1fba3c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1fba3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1fba40: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1fba40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1fba44: 0x8cb40000  lw          $s4, 0x0($a1)
    ctx->pc = 0x1fba44u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fba48: 0x1a80000f  blez        $s4, . + 4 + (0xF << 2)
    ctx->pc = 0x1FBA48u;
    {
        const bool branch_taken_0x1fba48 = (GPR_S32(ctx, 20) <= 0);
        if (branch_taken_0x1fba48) {
            ctx->pc = 0x1FBA88u;
            goto label_1fba88;
        }
    }
    ctx->pc = 0x1FBA50u;
    // 0x1fba50: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1fba50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1fba54: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x1fba54u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1fba58: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FBA58u;
    {
        const bool branch_taken_0x1fba58 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FBA5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBA58u;
            // 0x1fba5c: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fba58) {
            ctx->pc = 0x1FBA74u;
            goto label_1fba74;
        }
    }
    ctx->pc = 0x1FBA60u;
    // 0x1fba60: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FBA60u;
    {
        const bool branch_taken_0x1fba60 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1fba60) {
            ctx->pc = 0x1FBA70u;
            goto label_1fba70;
        }
    }
    ctx->pc = 0x1FBA68u;
    // 0x1fba68: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1fba68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1fba6c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1fba6cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1fba70:
    // 0x1fba70: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1fba70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_1fba74:
    // 0x1fba74: 0x0  nop
    ctx->pc = 0x1fba74u;
    // NOP
    // 0x1fba78: 0x8f8381b0  lw          $v1, -0x7E50($gp)
    ctx->pc = 0x1fba78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934960)));
    // 0x1fba7c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1fba7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1fba80: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x1fba80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1fba84: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1fba84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_1fba88:
    // 0x1fba88: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x1FBA88u;
    SET_GPR_U32(ctx, 31, 0x1FBA90u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBA90u; }
        if (ctx->pc != 0x1FBA90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBA90u; }
        if (ctx->pc != 0x1FBA90u) { return; }
    }
    ctx->pc = 0x1FBA90u;
label_1fba90:
    // 0x1fba90: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x1fba90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1fba94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fba94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fba98: 0xc067830  jal         func_19E0C0
    ctx->pc = 0x1FBA98u;
    SET_GPR_U32(ctx, 31, 0x1FBAA0u);
    ctx->pc = 0x1FBA9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBA98u;
            // 0x1fba9c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19E0C0u;
    if (runtime->hasFunction(0x19E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x19E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBAA0u; }
        if (ctx->pc != 0x1FBAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemNotOver__16CUserDataManagerFii_0x19e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBAA0u; }
        if (ctx->pc != 0x1FBAA0u) { return; }
    }
    ctx->pc = 0x1FBAA0u;
label_1fbaa0:
    // 0x1fbaa0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fbaa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fbaa4: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x1fbaa4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1fbaa8: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x1FBAA8u;
    {
        const bool branch_taken_0x1fbaa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FBAACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBAA8u;
            // 0x1fbaac: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbaa8) {
            ctx->pc = 0x1FBA14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1fba14;
        }
    }
    ctx->pc = 0x1FBAB0u;
    // 0x1fbab0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fbab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fbab4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fbab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbab8: 0xa3829040  sb          $v0, -0x6FC0($gp)
    ctx->pc = 0x1fbab8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938688), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fbabc: 0xc07e374  jal         func_1F8DD0
    ctx->pc = 0x1FBABCu;
    SET_GPR_U32(ctx, 31, 0x1FBAC4u);
    ctx->pc = 0x1FBAC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBABCu;
            // 0x1fbac0: 0xa3829044  sb          $v0, -0x6FBC($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294938692), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F8DD0u;
    if (runtime->hasFunction(0x1F8DD0u)) {
        auto targetFn = runtime->lookupFunction(0x1F8DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBAC4u; }
        if (ctx->pc != 0x1FBAC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdateGeoramaPartsList__12CMenuGeoramaFv_0x1f8dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBAC4u; }
        if (ctx->pc != 0x1FBAC4u) { return; }
    }
    ctx->pc = 0x1FBAC4u;
label_1fbac4:
    // 0x1fbac4: 0xc07e564  jal         func_1F9590
    ctx->pc = 0x1FBAC4u;
    SET_GPR_U32(ctx, 31, 0x1FBACCu);
    ctx->pc = 0x1FBAC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBAC4u;
            // 0x1fbac8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F9590u;
    if (runtime->hasFunction(0x1F9590u)) {
        auto targetFn = runtime->lookupFunction(0x1F9590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBACCu; }
        if (ctx->pc != 0x1FBACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowModeLoadPartsID__12CMenuGeoramaFv_0x1f9590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBACCu; }
        if (ctx->pc != 0x1FBACCu) { return; }
    }
    ctx->pc = 0x1FBACCu;
label_1fbacc:
    // 0x1fbacc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fbaccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbad0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fbad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbad4: 0xc07e5b0  jal         func_1F96C0
    ctx->pc = 0x1FBAD4u;
    SET_GPR_U32(ctx, 31, 0x1FBADCu);
    ctx->pc = 0x1FBAD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBAD4u;
            // 0x1fbad8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F96C0u;
    if (runtime->hasFunction(0x1F96C0u)) {
        auto targetFn = runtime->lookupFunction(0x1F96C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBADCu; }
        if (ctx->pc != 0x1FBADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadGeoramaPart__12CMenuGeoramaFii_0x1f96c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBADCu; }
        if (ctx->pc != 0x1FBADCu) { return; }
    }
    ctx->pc = 0x1FBADCu;
label_1fbadc:
    // 0x1fbadc: 0xc094274  jal         func_2509D0
    ctx->pc = 0x1FBADCu;
    SET_GPR_U32(ctx, 31, 0x1FBAE4u);
    ctx->pc = 0x1FBAE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBADCu;
            // 0x1fbae0: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBAE4u; }
        if (ctx->pc != 0x1FBAE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBAE4u; }
        if (ctx->pc != 0x1FBAE4u) { return; }
    }
    ctx->pc = 0x1FBAE4u;
label_1fbae4:
    // 0x1fbae4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fbae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbae8: 0xc07e754  jal         func_1F9D50
    ctx->pc = 0x1FBAE8u;
    SET_GPR_U32(ctx, 31, 0x1FBAF0u);
    ctx->pc = 0x1FBAECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBAE8u;
            // 0x1fbaec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F9D50u;
    if (runtime->hasFunction(0x1F9D50u)) {
        auto targetFn = runtime->lookupFunction(0x1F9D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBAF0u; }
        if (ctx->pc != 0x1FBAF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowViewModeMax__12CMenuGeoramaFi_0x1f9d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBAF0u; }
        if (ctx->pc != 0x1FBAF0u) { return; }
    }
    ctx->pc = 0x1FBAF0u;
label_1fbaf0:
    // 0x1fbaf0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1fbaf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1fbaf4: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x1fbaf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fbaf8: 0x3421b7fc  ori         $at, $at, 0xB7FC
    ctx->pc = 0x1fbaf8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47100);
    // 0x1fbafc: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x1fbafcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1fbb00: 0x2412021  addu        $a0, $s2, $at
    ctx->pc = 0x1fbb00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x1fbb04: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1fbb04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1fbb08: 0x3421b800  ori         $at, $at, 0xB800
    ctx->pc = 0x1fbb08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47104);
    // 0x1fbb0c: 0xc07c960  jal         func_1F2580
    ctx->pc = 0x1FBB0Cu;
    SET_GPR_U32(ctx, 31, 0x1FBB14u);
    ctx->pc = 0x1FBB10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBB0Cu;
            // 0x1fbb10: 0x2412821  addu        $a1, $s2, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F2580u;
    if (runtime->hasFunction(0x1F2580u)) {
        auto targetFn = runtime->lookupFunction(0x1F2580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBB14u; }
        if (ctx->pc != 0x1FBB14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckMenuLine__FPiPiii_0x1f2580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBB14u; }
        if (ctx->pc != 0x1FBB14u) { return; }
    }
    ctx->pc = 0x1FBB14u;
label_1fbb14:
    // 0x1fbb14: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1fbb14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1fbb18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fbb18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbb1c: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x1FBB1Cu;
    SET_GPR_U32(ctx, 31, 0x1FBB24u);
    ctx->pc = 0x1FBB20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBB1Cu;
            // 0x1fbb20: 0x24a58d78  addiu       $a1, $a1, -0x7288 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBB24u; }
        if (ctx->pc != 0x1FBB24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBB24u; }
        if (ctx->pc != 0x1FBB24u) { return; }
    }
    ctx->pc = 0x1FBB24u;
label_1fbb24:
    // 0x1fbb24: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1fbb24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1fbb28: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1fbb28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fbb2c: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x1fbb2cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x1fbb30: 0xac22b8f4  sw          $v0, -0x470C($at)
    ctx->pc = 0x1fbb30u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949108), GPR_U32(ctx, 2));
    // 0x1fbb34: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fbb34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fbb38:
    // 0x1fbb38: 0x16a2001f  bne         $s5, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1FBB38u;
    {
        const bool branch_taken_0x1fbb38 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FBB3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBB38u;
            // 0x1fbb3c: 0x3c010002  lui         $at, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbb38) {
            ctx->pc = 0x1FBBB8u;
            goto label_1fbbb8;
        }
    }
    ctx->pc = 0x1FBB40u;
    // 0x1fbb40: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1fbb40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1fbb44: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x1fbb44u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x1fbb48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fbb48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbb4c: 0x24a58d68  addiu       $a1, $a1, -0x7298
    ctx->pc = 0x1fbb4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937960));
    // 0x1fbb50: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x1FBB50u;
    SET_GPR_U32(ctx, 31, 0x1FBB58u);
    ctx->pc = 0x1FBB54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBB50u;
            // 0x1fbb54: 0xac20b8f4  sw          $zero, -0x470C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294949108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBB58u; }
        if (ctx->pc != 0x1FBB58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBB58u; }
        if (ctx->pc != 0x1FBB58u) { return; }
    }
    ctx->pc = 0x1FBB58u;
label_1fbb58:
    // 0x1fbb58: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1FBB58u;
    {
        const bool branch_taken_0x1fbb58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fbb58) {
            ctx->pc = 0x1FBBB8u;
            goto label_1fbbb8;
        }
    }
    ctx->pc = 0x1FBB60u;
label_1fbb60:
    // 0x1fbb60: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1FBB60u;
    {
        const bool branch_taken_0x1fbb60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBB64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBB60u;
            // 0x1fbb64: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbb60) {
            ctx->pc = 0x1FBBB8u;
            goto label_1fbbb8;
        }
    }
    ctx->pc = 0x1FBB68u;
    // 0x1fbb68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fbb68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbb6c: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x1FBB6Cu;
    SET_GPR_U32(ctx, 31, 0x1FBB74u);
    ctx->pc = 0x1FBB70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBB6Cu;
            // 0x1fbb70: 0x24a58d88  addiu       $a1, $a1, -0x7278 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBB74u; }
        if (ctx->pc != 0x1FBB74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBB74u; }
        if (ctx->pc != 0x1FBB74u) { return; }
    }
    ctx->pc = 0x1FBB74u;
label_1fbb74:
    // 0x1fbb74: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1fbb74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1fbb78: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x1fbb78u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x1fbb7c: 0xc064220  jal         func_190880
    ctx->pc = 0x1FBB7Cu;
    SET_GPR_U32(ctx, 31, 0x1FBB84u);
    ctx->pc = 0x1FBB80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBB7Cu;
            // 0x1fbb80: 0xac20b8f4  sw          $zero, -0x470C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294949108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBB84u; }
        if (ctx->pc != 0x1FBB84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBB84u; }
        if (ctx->pc != 0x1FBB84u) { return; }
    }
    ctx->pc = 0x1FBB84u;
label_1fbb84:
    // 0x1fbb84: 0x8f839098  lw          $v1, -0x6F68($gp)
    ctx->pc = 0x1fbb84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938776)));
    // 0x1fbb88: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1fbb88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fbb8c: 0xc0bd978  jal         func_2F65E0
    ctx->pc = 0x1FBB8Cu;
    SET_GPR_U32(ctx, 31, 0x1FBB94u);
    ctx->pc = 0x1FBB90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBB8Cu;
            // 0x1fbb90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F65E0u;
    if (runtime->hasFunction(0x2F65E0u)) {
        auto targetFn = runtime->lookupFunction(0x2F65E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBB94u; }
        if (ctx->pc != 0x1FBB94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBuildPartsNum__9CSaveDataFi_0x2f65e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBB94u; }
        if (ctx->pc != 0x1FBB94u) { return; }
    }
    ctx->pc = 0x1FBB94u;
label_1fbb94:
    // 0x1fbb94: 0x1c400006  bgtz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FBB94u;
    {
        const bool branch_taken_0x1fbb94 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1FBB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBB94u;
            // 0x1fbb98: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbb94) {
            ctx->pc = 0x1FBBB0u;
            goto label_1fbbb0;
        }
    }
    ctx->pc = 0x1FBB9Cu;
    // 0x1fbb9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fbb9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbba0: 0xc07e738  jal         func_1F9CE0
    ctx->pc = 0x1FBBA0u;
    SET_GPR_U32(ctx, 31, 0x1FBBA8u);
    ctx->pc = 0x1FBBA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBBA0u;
            // 0x1fbba4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F9CE0u;
    if (runtime->hasFunction(0x1F9CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1F9CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBBA8u; }
        if (ctx->pc != 0x1FBBA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReturnSelectMode__12CMenuGeoramaFi_0x1f9ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBBA8u; }
        if (ctx->pc != 0x1FBBA8u) { return; }
    }
    ctx->pc = 0x1FBBA8u;
label_1fbba8:
    // 0x1fbba8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FBBA8u;
    {
        const bool branch_taken_0x1fbba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fbba8) {
            ctx->pc = 0x1FBBB8u;
            goto label_1fbbb8;
        }
    }
    ctx->pc = 0x1FBBB0u;
label_1fbbb0:
    // 0x1fbbb0: 0xc094274  jal         func_2509D0
    ctx->pc = 0x1FBBB0u;
    SET_GPR_U32(ctx, 31, 0x1FBBB8u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBBB8u; }
        if (ctx->pc != 0x1FBBB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBBB8u; }
        if (ctx->pc != 0x1FBBB8u) { return; }
    }
    ctx->pc = 0x1FBBB8u;
label_1fbbb8:
    // 0x1fbbb8: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x1fbbb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1fbbbc:
    // 0x1fbbbc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1fbbbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1fbbc0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1fbbc0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fbbc4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1fbbc4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fbbc8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1fbbc8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1fbbcc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1fbbccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fbbd0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1fbbd0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fbbd4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1fbbd4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fbbd8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fbbd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fbbdc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fbbdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fbbe0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fbbe0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fbbe4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBBE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBBE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBBE4u;
            // 0x1fbbe8: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FBBECu;
}
