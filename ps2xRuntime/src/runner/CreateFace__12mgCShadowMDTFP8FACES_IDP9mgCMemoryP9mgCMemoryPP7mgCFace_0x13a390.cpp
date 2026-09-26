#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreateFace__12mgCShadowMDTFP8FACES_IDP9mgCMemoryP9mgCMemoryPP7mgCFace
// Address: 0x13a390 - 0x13a554
void CreateFace__12mgCShadowMDTFP8FACES_IDP9mgCMemoryP9mgCMemoryPP7mgCFace_0x13a390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreateFace__12mgCShadowMDTFP8FACES_IDP9mgCMemoryP9mgCMemoryPP7mgCFace_0x13a390");
#endif

    switch (ctx->pc) {
        case 0x13a3d4u: goto label_13a3d4;
        case 0x13a3e4u: goto label_13a3e4;
        case 0x13a464u: goto label_13a464;
        case 0x13a474u: goto label_13a474;
        case 0x13a4c8u: goto label_13a4c8;
        case 0x13a4fcu: goto label_13a4fc;
        default: break;
    }

    ctx->pc = 0x13a390u;

    // 0x13a390: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x13a390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x13a394: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x13a394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x13a398: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x13a398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x13a39c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x13a39cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x13a3a0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13a3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13a3a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13a3a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13a3a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13a3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13a3ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13a3acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13a3b0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x13a3b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a3b4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x13a3b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a3b8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x13a3b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a3bc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x13a3bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a3c0: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x13a3c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a3c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13a3c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a3c8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x13a3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x13a3cc: 0xc04e748  jal         func_139D20
    ctx->pc = 0x13A3CCu;
    SET_GPR_U32(ctx, 31, 0x13A3D4u);
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A3D4u; }
        if (ctx->pc != 0x13A3D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A3D4u; }
        if (ctx->pc != 0x13A3D4u) { return; }
    }
    ctx->pc = 0x13A3D4u;
label_13a3d4:
    // 0x13a3d4: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x13a3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x13a3d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13a3d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a3dc: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x13A3DCu;
    SET_GPR_U32(ctx, 31, 0x13A3E4u);
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A3E4u; }
        if (ctx->pc != 0x13A3E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A3E4u; }
        if (ctx->pc != 0x13A3E4u) { return; }
    }
    ctx->pc = 0x13A3E4u;
label_13a3e4:
    // 0x13a3e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13a3e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a3e8: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x13a3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x13a3ec: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x13a3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13a3f0: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x13a3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
    // 0x13a3f4: 0x34635556  ori         $v1, $v1, 0x5556
    ctx->pc = 0x13a3f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
    // 0x13a3f8: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x13a3f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x13a3fc: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x13a3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x13a400: 0x0  nop
    ctx->pc = 0x13a400u;
    // NOP
    // 0x13a404: 0x1810  mfhi        $v1
    ctx->pc = 0x13a404u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x13a408: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13a408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13a40c: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x13a40cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x13a410: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x13a410u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x13a414: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x13a414u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x13a418: 0xa4450002  sh          $a1, 0x2($v0)
    ctx->pc = 0x13a418u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x13a41c: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x13a41cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x13a420: 0x84430002  lh          $v1, 0x2($v0)
    ctx->pc = 0x13a420u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x13a424: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x13a424u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x13a428: 0xa4430006  sh          $v1, 0x6($v0)
    ctx->pc = 0x13a428u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x13a42c: 0x96830008  lhu         $v1, 0x8($s4)
    ctx->pc = 0x13a42cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x13a430: 0xa4430004  sh          $v1, 0x4($v0)
    ctx->pc = 0x13a430u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x13a434: 0x2694000c  addiu       $s4, $s4, 0xC
    ctx->pc = 0x13a434u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
    // 0x13a438: 0x84420006  lh          $v0, 0x6($v0)
    ctx->pc = 0x13a438u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x13a43c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x13a43cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13a440: 0x31103  sra         $v0, $v1, 4
    ctx->pc = 0x13a440u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
    // 0x13a444: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13A444u;
    {
        const bool branch_taken_0x13a444 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x13a444) {
            ctx->pc = 0x13A454u;
            goto label_13a454;
        }
    }
    ctx->pc = 0x13A44Cu;
    // 0x13a44c: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x13a44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x13a450: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x13a450u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_13a454:
    // 0x13a454: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x13a454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x13a458: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13a458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a45c: 0xc04e748  jal         func_139D20
    ctx->pc = 0x13A45Cu;
    SET_GPR_U32(ctx, 31, 0x13A464u);
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A464u; }
        if (ctx->pc != 0x13A464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A464u; }
        if (ctx->pc != 0x13A464u) { return; }
    }
    ctx->pc = 0x13A464u;
label_13a464:
    // 0x13a464: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x13a464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x13a468: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x13a468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a46c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x13A46Cu;
    {
        const bool branch_taken_0x13a46c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a46c) {
            ctx->pc = 0x13A498u;
            goto label_13a498;
        }
    }
    ctx->pc = 0x13A474u;
label_13a474:
    // 0x13a474: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x13a474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x13a478: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x13a478u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x13a47c: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x13a47cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x13a480: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x13a480u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x13a484: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x13a484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x13a488: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x13a488u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x13a48c: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x13a48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x13a490: 0x26940024  addiu       $s4, $s4, 0x24
    ctx->pc = 0x13a490u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 36));
    // 0x13a494: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x13a494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_13a498:
    // 0x13a498: 0x86030008  lh          $v1, 0x8($s0)
    ctx->pc = 0x13a498u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x13a49c: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x13a49cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x13a4a0: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x13A4A0u;
    {
        const bool branch_taken_0x13a4a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a4a0) {
            ctx->pc = 0x13A474u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13a474;
        }
    }
    ctx->pc = 0x13A4A8u;
    // 0x13a4a8: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x13a4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x13a4ac: 0x8ea20048  lw          $v0, 0x48($s5)
    ctx->pc = 0x13a4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 72)));
    // 0x13a4b0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x13A4B0u;
    {
        const bool branch_taken_0x13a4b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a4b0) {
            ctx->pc = 0x13A4E4u;
            goto label_13a4e4;
        }
    }
    ctx->pc = 0x13A4B8u;
    // 0x13a4b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13a4b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a4bc: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x13a4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x13a4c0: 0xc04e748  jal         func_139D20
    ctx->pc = 0x13A4C0u;
    SET_GPR_U32(ctx, 31, 0x13A4C8u);
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A4C8u; }
        if (ctx->pc != 0x13A4C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A4C8u; }
        if (ctx->pc != 0x13A4C8u) { return; }
    }
    ctx->pc = 0x13A4C8u;
label_13a4c8:
    // 0x13a4c8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x13a4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x13a4cc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x13a4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x13a4d0: 0x86030004  lh          $v1, 0x4($s0)
    ctx->pc = 0x13a4d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x13a4d4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x13a4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x13a4d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13a4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13a4dc: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x13a4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x13a4e0: 0xaea20048  sw          $v0, 0x48($s5)
    ctx->pc = 0x13a4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 72), GPR_U32(ctx, 2));
label_13a4e4:
    // 0x13a4e4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x13a4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x13a4e8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x13A4E8u;
    {
        const bool branch_taken_0x13a4e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a4e8) {
            ctx->pc = 0x13A500u;
            goto label_13a500;
        }
    }
    ctx->pc = 0x13A4F0u;
    // 0x13a4f0: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x13a4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x13a4f4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x13A4F4u;
    {
        const bool branch_taken_0x13a4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a4f4) {
            ctx->pc = 0x13A51Cu;
            goto label_13a51c;
        }
    }
    ctx->pc = 0x13A4FCu;
label_13a4fc:
    // 0x13a4fc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x13a4fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13a500:
    // 0x13a500: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x13a500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x13a504: 0x0  nop
    ctx->pc = 0x13a504u;
    // NOP
    // 0x13a508: 0x0  nop
    ctx->pc = 0x13a508u;
    // NOP
    // 0x13a50c: 0x0  nop
    ctx->pc = 0x13a50cu;
    // NOP
    // 0x13a510: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13A510u;
    {
        const bool branch_taken_0x13a510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a510) {
            ctx->pc = 0x13A4FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13a4fc;
        }
    }
    ctx->pc = 0x13A518u;
    // 0x13a518: 0xac700010  sw          $s0, 0x10($v1)
    ctx->pc = 0x13a518u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 16));
label_13a51c:
    // 0x13a51c: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x13A51Cu;
    {
        const bool branch_taken_0x13a51c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a51c) {
            ctx->pc = 0x13A528u;
            goto label_13a528;
        }
    }
    ctx->pc = 0x13A524u;
    // 0x13a524: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x13a524u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_13a528:
    // 0x13a528: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x13a528u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a52c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x13a52cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13a530: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x13a530u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13a534: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13a534u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13a538: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13a538u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13a53c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13a53cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13a540: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13a540u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13a544: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13a544u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13a548: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x13a548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x13a54c: 0x3e00008  jr          $ra
    ctx->pc = 0x13A54Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13A554u;
}
