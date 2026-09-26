#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InsideScreen__9CMapPartsFP10COcclusioni
// Address: 0x1673a0 - 0x1674a4
void InsideScreen__9CMapPartsFP10COcclusioni_0x1673a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InsideScreen__9CMapPartsFP10COcclusioni_0x1673a0");
#endif

    switch (ctx->pc) {
        case 0x1673e0u: goto label_1673e0;
        case 0x1673ecu: goto label_1673ec;
        case 0x16741cu: goto label_16741c;
        case 0x167444u: goto label_167444;
        case 0x167454u: goto label_167454;
        case 0x167460u: goto label_167460;
        default: break;
    }

    ctx->pc = 0x1673a0u;

    // 0x1673a0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1673a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1673a4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1673a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1673a8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1673a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1673ac: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1673acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1673b0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1673b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1673b4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1673b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1673b8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1673b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1673bc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1673bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1673c0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1673c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1673c4: 0x8c820230  lw          $v0, 0x230($a0)
    ctx->pc = 0x1673c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 560)));
    // 0x1673c8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1673C8u;
    {
        const bool branch_taken_0x1673c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1673CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1673C8u;
            // 0x1673cc: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1673c8) {
            ctx->pc = 0x1673D8u;
            goto label_1673d8;
        }
    }
    ctx->pc = 0x1673D0u;
    // 0x1673d0: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1673D0u;
    {
        const bool branch_taken_0x1673d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1673D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1673D0u;
            // 0x1673d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1673d0) {
            ctx->pc = 0x167484u;
            goto label_167484;
        }
    }
    ctx->pc = 0x1673D8u;
label_1673d8:
    // 0x1673d8: 0xc059cc0  jal         func_167300
    ctx->pc = 0x1673D8u;
    SET_GPR_U32(ctx, 31, 0x1673E0u);
    ctx->pc = 0x1673DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1673D8u;
            // 0x1673dc: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167300u;
    if (runtime->hasFunction(0x167300u)) {
        auto targetFn = runtime->lookupFunction(0x167300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1673E0u; }
        if (ctx->pc != 0x1673E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLWMatrix__9CMapPartsFPA4_f_0x167300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1673E0u; }
        if (ctx->pc != 0x1673E0u) { return; }
    }
    ctx->pc = 0x1673E0u;
label_1673e0:
    // 0x1673e0: 0x26440240  addiu       $a0, $s2, 0x240
    ctx->pc = 0x1673e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 576));
    // 0x1673e4: 0xc04d7b8  jal         func_135EE0
    ctx->pc = 0x1673E4u;
    SET_GPR_U32(ctx, 31, 0x1673ECu);
    ctx->pc = 0x1673E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1673E4u;
            // 0x1673e8: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135EE0u;
    if (runtime->hasFunction(0x135EE0u)) {
        auto targetFn = runtime->lookupFunction(0x135EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1673ECu; }
        if (ctx->pc != 0x1673ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgInsideScreen__FP9mgVu0FBOXPA4_f_0x135ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1673ECu; }
        if (ctx->pc != 0x1673ECu) { return; }
    }
    ctx->pc = 0x1673ECu;
label_1673ec:
    // 0x1673ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1673ECu;
    {
        const bool branch_taken_0x1673ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1673F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1673ECu;
            // 0x1673f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1673ec) {
            ctx->pc = 0x1673FCu;
            goto label_1673fc;
        }
    }
    ctx->pc = 0x1673F4u;
    // 0x1673f4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1673F4u;
    {
        const bool branch_taken_0x1673f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1673F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1673F4u;
            // 0x1673f8: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1673f4) {
            ctx->pc = 0x167488u;
            goto label_167488;
        }
    }
    ctx->pc = 0x1673FCu;
label_1673fc:
    // 0x1673fc: 0x1e000003  bgtz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1673FCu;
    {
        const bool branch_taken_0x1673fc = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x167400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1673FCu;
            // 0x167400: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1673fc) {
            ctx->pc = 0x16740Cu;
            goto label_16740c;
        }
    }
    ctx->pc = 0x167404u;
    // 0x167404: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x167404u;
    {
        const bool branch_taken_0x167404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167404u;
            // 0x167408: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167404) {
            ctx->pc = 0x167484u;
            goto label_167484;
        }
    }
    ctx->pc = 0x16740Cu;
label_16740c:
    // 0x16740c: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x16740cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x167410: 0x24a51060  addiu       $a1, $a1, 0x1060
    ctx->pc = 0x167410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4192));
    // 0x167414: 0xc04c094  jal         func_130250
    ctx->pc = 0x167414u;
    SET_GPR_U32(ctx, 31, 0x16741Cu);
    ctx->pc = 0x167418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167414u;
            // 0x167418: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130250u;
    if (runtime->hasFunction(0x130250u)) {
        auto targetFn = runtime->lookupFunction(0x130250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16741Cu; }
        if (ctx->pc != 0x16741Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgMulMatrix__FPA4_fPA4_fPA4_f_0x130250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16741Cu; }
        if (ctx->pc != 0x16741Cu) { return; }
    }
    ctx->pc = 0x16741Cu;
label_16741c:
    // 0x16741c: 0x7a430260  lq          $v1, 0x260($s2)
    ctx->pc = 0x16741cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 608)));
    // 0x167420: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x167420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x167424: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x167424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x167428: 0x27b300ac  addiu       $s3, $sp, 0xAC
    ctx->pc = 0x167428u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x16742c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x16742cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x167430: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x167430u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167434: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x167434u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x167438: 0xc654026c  lwc1        $f20, 0x26C($s2)
    ctx->pc = 0x167438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16743c: 0xc041bb0  jal         func_106EC0
    ctx->pc = 0x16743Cu;
    SET_GPR_U32(ctx, 31, 0x167444u);
    ctx->pc = 0x167440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16743Cu;
            // 0x167440: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167444u; }
        if (ctx->pc != 0x167444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167444u; }
        if (ctx->pc != 0x167444u) { return; }
    }
    ctx->pc = 0x167444u;
label_167444:
    // 0x167444: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x167444u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x167448: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x167448u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16744c: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x16744Cu;
    {
        const bool branch_taken_0x16744c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x167450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16744Cu;
            // 0x167450: 0xe6740000  swc1        $f20, 0x0($s3) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16744c) {
            ctx->pc = 0x167480u;
            goto label_167480;
        }
    }
    ctx->pc = 0x167454u;
label_167454:
    // 0x167454: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x167454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167458: 0xc0b57ec  jal         func_2D5FB0
    ctx->pc = 0x167458u;
    SET_GPR_U32(ctx, 31, 0x167460u);
    ctx->pc = 0x16745Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167458u;
            // 0x16745c: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5FB0u;
    if (runtime->hasFunction(0x2D5FB0u)) {
        auto targetFn = runtime->lookupFunction(0x2D5FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167460u; }
        if (ctx->pc != 0x167460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckSphere__10COcclusionFPf_0x2d5fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167460u; }
        if (ctx->pc != 0x167460u) { return; }
    }
    ctx->pc = 0x167460u;
label_167460:
    // 0x167460: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x167460u;
    {
        const bool branch_taken_0x167460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167460u;
            // 0x167464: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167460) {
            ctx->pc = 0x167470u;
            goto label_167470;
        }
    }
    ctx->pc = 0x167468u;
    // 0x167468: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x167468u;
    {
        const bool branch_taken_0x167468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167468) {
            ctx->pc = 0x167484u;
            goto label_167484;
        }
    }
    ctx->pc = 0x167470u;
label_167470:
    // 0x167470: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x167470u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x167474: 0x250102a  slt         $v0, $s2, $s0
    ctx->pc = 0x167474u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x167478: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x167478u;
    {
        const bool branch_taken_0x167478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16747Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167478u;
            // 0x16747c: 0x263100c0  addiu       $s1, $s1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167478) {
            ctx->pc = 0x167454u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_167454;
        }
    }
    ctx->pc = 0x167480u;
label_167480:
    // 0x167480: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x167480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_167484:
    // 0x167484: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x167484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_167488:
    // 0x167488: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x167488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16748c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x16748cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x167490: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x167490u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x167494: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x167494u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x167498: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x167498u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16749c: 0x3e00008  jr          $ra
    ctx->pc = 0x16749Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1674A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16749Cu;
            // 0x1674a0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1674A4u;
}
