#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__12COutLineDrawFff
// Address: 0x17c2d0 - 0x17c8ec
void Draw__12COutLineDrawFff_0x17c2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__12COutLineDrawFff_0x17c2d0");
#endif

    switch (ctx->pc) {
        case 0x17c390u: goto label_17c390;
        case 0x17c398u: goto label_17c398;
        case 0x17c3acu: goto label_17c3ac;
        case 0x17c3ecu: goto label_17c3ec;
        case 0x17c3fcu: goto label_17c3fc;
        case 0x17c45cu: goto label_17c45c;
        case 0x17c4e0u: goto label_17c4e0;
        case 0x17c4ecu: goto label_17c4ec;
        case 0x17c584u: goto label_17c584;
        case 0x17c58cu: goto label_17c58c;
        case 0x17c59cu: goto label_17c59c;
        case 0x17c5a8u: goto label_17c5a8;
        case 0x17c5b4u: goto label_17c5b4;
        case 0x17c5c0u: goto label_17c5c0;
        case 0x17c5ccu: goto label_17c5cc;
        case 0x17c5e4u: goto label_17c5e4;
        case 0x17c5f8u: goto label_17c5f8;
        case 0x17c60cu: goto label_17c60c;
        case 0x17c614u: goto label_17c614;
        case 0x17c61cu: goto label_17c61c;
        case 0x17c67cu: goto label_17c67c;
        case 0x17c684u: goto label_17c684;
        case 0x17c698u: goto label_17c698;
        case 0x17c6b4u: goto label_17c6b4;
        case 0x17c6c0u: goto label_17c6c0;
        case 0x17c6ccu: goto label_17c6cc;
        case 0x17c6e8u: goto label_17c6e8;
        case 0x17c6f4u: goto label_17c6f4;
        case 0x17c704u: goto label_17c704;
        case 0x17c710u: goto label_17c710;
        case 0x17c71cu: goto label_17c71c;
        case 0x17c728u: goto label_17c728;
        case 0x17c734u: goto label_17c734;
        case 0x17c740u: goto label_17c740;
        case 0x17c74cu: goto label_17c74c;
        case 0x17c754u: goto label_17c754;
        case 0x17c7b4u: goto label_17c7b4;
        case 0x17c7d0u: goto label_17c7d0;
        case 0x17c7f0u: goto label_17c7f0;
        case 0x17c804u: goto label_17c804;
        case 0x17c830u: goto label_17c830;
        case 0x17c840u: goto label_17c840;
        case 0x17c84cu: goto label_17c84c;
        case 0x17c864u: goto label_17c864;
        case 0x17c888u: goto label_17c888;
        case 0x17c894u: goto label_17c894;
        case 0x17c8a4u: goto label_17c8a4;
        case 0x17c8acu: goto label_17c8ac;
        default: break;
    }

    ctx->pc = 0x17c2d0u;

    // 0x17c2d0: 0x27bdfc10  addiu       $sp, $sp, -0x3F0
    ctx->pc = 0x17c2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966288));
    // 0x17c2d4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x17c2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x17c2d8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x17c2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x17c2dc: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x17c2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x17c2e0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x17c2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x17c2e4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x17c2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x17c2e8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x17c2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x17c2ec: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x17c2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x17c2f0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x17c2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x17c2f4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x17c2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x17c2f8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17c2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17c2fc: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x17c2fcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x17c300: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17c300u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c304: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x17c304u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x17c308: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x17c308u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x17c30c: 0x8c910034  lw          $s1, 0x34($a0)
    ctx->pc = 0x17c30cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x17c310: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17C310u;
    {
        const bool branch_taken_0x17c310 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x17C314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C310u;
            // 0x17c314: 0x46006d46  mov.s       $f21, $f13 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c310) {
            ctx->pc = 0x17C320u;
            goto label_17c320;
        }
    }
    ctx->pc = 0x17C318u;
    // 0x17c318: 0x10000165  b           . + 4 + (0x165 << 2)
    ctx->pc = 0x17C318u;
    {
        const bool branch_taken_0x17c318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C31Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C318u;
            // 0x17c31c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c318) {
            ctx->pc = 0x17C8B0u;
            goto label_17c8b0;
        }
    }
    ctx->pc = 0x17C320u;
label_17c320:
    // 0x17c320: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x17c320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x17c324: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17C324u;
    {
        const bool branch_taken_0x17c324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17C328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C324u;
            // 0x17c328: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c324) {
            ctx->pc = 0x17C334u;
            goto label_17c334;
        }
    }
    ctx->pc = 0x17C32Cu;
    // 0x17c32c: 0x10000161  b           . + 4 + (0x161 << 2)
    ctx->pc = 0x17C32Cu;
    {
        const bool branch_taken_0x17c32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C32Cu;
            // 0x17c330: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c32c) {
            ctx->pc = 0x17C8B4u;
            goto label_17c8b4;
        }
    }
    ctx->pc = 0x17C334u;
label_17c334:
    // 0x17c334: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x17c334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x17c338: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17C338u;
    {
        const bool branch_taken_0x17c338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17C33Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C338u;
            // 0x17c33c: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c338) {
            ctx->pc = 0x17C348u;
            goto label_17c348;
        }
    }
    ctx->pc = 0x17C340u;
    // 0x17c340: 0x1000015b  b           . + 4 + (0x15B << 2)
    ctx->pc = 0x17C340u;
    {
        const bool branch_taken_0x17c340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C340u;
            // 0x17c344: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c340) {
            ctx->pc = 0x17C8B0u;
            goto label_17c8b0;
        }
    }
    ctx->pc = 0x17C348u;
label_17c348:
    // 0x17c348: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c348u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c34c: 0x0  nop
    ctx->pc = 0x17c34cu;
    // NOP
    // 0x17c350: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x17c350u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17c354: 0x0  nop
    ctx->pc = 0x17c354u;
    // NOP
    // 0x17c358: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x17C358u;
    {
        const bool branch_taken_0x17c358 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17C35Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C358u;
            // 0x17c35c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c358) {
            ctx->pc = 0x17C364u;
            goto label_17c364;
        }
    }
    ctx->pc = 0x17C360u;
    // 0x17c360: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x17c360u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_17c364:
    // 0x17c364: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x17c364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c368: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x17c368u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17c36c: 0x0  nop
    ctx->pc = 0x17c36cu;
    // NOP
    // 0x17c370: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x17c370u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17c374: 0x0  nop
    ctx->pc = 0x17c374u;
    // NOP
    // 0x17c378: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x17C378u;
    {
        const bool branch_taken_0x17c378 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17C37Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C378u;
            // 0x17c37c: 0x460c6302  mul.s       $f12, $f12, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c378) {
            ctx->pc = 0x17C3A0u;
            goto label_17c3a0;
        }
    }
    ctx->pc = 0x17C380u;
    // 0x17c380: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17c380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c384: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17c384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17c388: 0xc04df4c  jal         func_137D30
    ctx->pc = 0x17C388u;
    SET_GPR_U32(ctx, 31, 0x17C390u);
    ctx->pc = 0x17C38Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C388u;
            // 0x17c38c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x137D30u;
    if (runtime->hasFunction(0x137D30u)) {
        auto targetFn = runtime->lookupFunction(0x137D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C390u; }
        if (ctx->pc != 0x17C390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttrParamObjAlpha__8mgCFrameFfi_0x137d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C390u; }
        if (ctx->pc != 0x17C390u) { return; }
    }
    ctx->pc = 0x17C390u;
label_17c390:
    // 0x17c390: 0xc050bf4  jal         func_142FD0
    ctx->pc = 0x17C390u;
    SET_GPR_U32(ctx, 31, 0x17C398u);
    ctx->pc = 0x17C394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C390u;
            // 0x17c394: 0x8e040034  lw          $a0, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142FD0u;
    if (runtime->hasFunction(0x142FD0u)) {
        auto targetFn = runtime->lookupFunction(0x142FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C398u; }
        if (ctx->pc != 0x17C398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDrawDirect__FP8mgCFrame_0x142fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C398u; }
        if (ctx->pc != 0x17C398u) { return; }
    }
    ctx->pc = 0x17C398u;
label_17c398:
    // 0x17c398: 0x10000145  b           . + 4 + (0x145 << 2)
    ctx->pc = 0x17C398u;
    {
        const bool branch_taken_0x17c398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c398) {
            ctx->pc = 0x17C8B0u;
            goto label_17c8b0;
        }
    }
    ctx->pc = 0x17C3A0u;
label_17c3a0:
    // 0x17c3a0: 0x460c0582  mul.s       $f22, $f0, $f12
    ctx->pc = 0x17c3a0u;
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x17c3a4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x17C3A4u;
    SET_GPR_U32(ctx, 31, 0x17C3ACu);
    ctx->pc = 0x17C3A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C3A4u;
            // 0x17c3a8: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C3ACu; }
        if (ctx->pc != 0x17C3ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C3ACu; }
        if (ctx->pc != 0x17C3ACu) { return; }
    }
    ctx->pc = 0x17C3ACu;
label_17c3ac:
    // 0x17c3ac: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x17c3acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x17c3b0: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x17c3b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x17c3b4: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17C3B4u;
    {
        const bool branch_taken_0x17c3b4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x17C3B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C3B4u;
            // 0x17c3b8: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c3b4) {
            ctx->pc = 0x17C3C0u;
            goto label_17c3c0;
        }
    }
    ctx->pc = 0x17C3BCu;
    // 0x17c3bc: 0x4600b506  mov.s       $f20, $f22
    ctx->pc = 0x17c3bcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[22]);
label_17c3c0:
    // 0x17c3c0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x17c3c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x17c3c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c3c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c3c8: 0x0  nop
    ctx->pc = 0x17c3c8u;
    // NOP
    // 0x17c3cc: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x17c3ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17c3d0: 0x0  nop
    ctx->pc = 0x17c3d0u;
    // NOP
    // 0x17c3d4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x17C3D4u;
    {
        const bool branch_taken_0x17c3d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17C3D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C3D4u;
            // 0x17c3d8: 0x3c024180  lui         $v0, 0x4180 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c3d4) {
            ctx->pc = 0x17C3E0u;
            goto label_17c3e0;
        }
    }
    ctx->pc = 0x17C3DCu;
    // 0x17c3dc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x17c3dcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_17c3e0:
    // 0x17c3e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c3e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c3e4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x17C3E4u;
    SET_GPR_U32(ctx, 31, 0x17C3ECu);
    ctx->pc = 0x17C3E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C3E4u;
            // 0x17c3e8: 0x46160302  mul.s       $f12, $f0, $f22 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C3ECu; }
        if (ctx->pc != 0x17C3ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C3ECu; }
        if (ctx->pc != 0x17C3ECu) { return; }
    }
    ctx->pc = 0x17C3ECu;
label_17c3ec:
    // 0x17c3ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17c3ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c3f0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x17c3f0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c3f4: 0xc050c58  jal         func_143160
    ctx->pc = 0x17C3F4u;
    SET_GPR_U32(ctx, 31, 0x17C3FCu);
    ctx->pc = 0x17C3F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C3F4u;
            // 0x17c3f8: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143160u;
    if (runtime->hasFunction(0x143160u)) {
        auto targetFn = runtime->lookupFunction(0x143160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C3FCu; }
        if (ctx->pc != 0x17C3FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetDrawRect__FP8mgCFrameP9mgVu0FBOX_0x143160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C3FCu; }
        if (ctx->pc != 0x17C3FCu) { return; }
    }
    ctx->pc = 0x17C3FCu;
label_17c3fc:
    // 0x17c3fc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17C3FCu;
    {
        const bool branch_taken_0x17c3fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17C400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C3FCu;
            // 0x17c400: 0x3c02003d  lui         $v0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c3fc) {
            ctx->pc = 0x17C40Cu;
            goto label_17c40c;
        }
    }
    ctx->pc = 0x17C404u;
    // 0x17c404: 0x1000012a  b           . + 4 + (0x12A << 2)
    ctx->pc = 0x17C404u;
    {
        const bool branch_taken_0x17c404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C404u;
            // 0x17c408: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c404) {
            ctx->pc = 0x17C8B0u;
            goto label_17c8b0;
        }
    }
    ctx->pc = 0x17C40Cu;
label_17c40c:
    // 0x17c40c: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x17c40cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x17c410: 0x244206d0  addiu       $v0, $v0, 0x6D0
    ctx->pc = 0x17c410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1744));
    // 0x17c414: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x17c414u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x17c418: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x17c418u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17c41c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x17c41cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x17c420: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x17c420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17c424: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x17c424u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c428: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x17c428u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c42c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x17c42cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x17c430: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x17c430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x17c434: 0xc7818780  lwc1        $f1, -0x7880($gp)
    ctx->pc = 0x17c434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c438: 0x244206e0  addiu       $v0, $v0, 0x6E0
    ctx->pc = 0x17c438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1760));
    // 0x17c43c: 0xc7808784  lwc1        $f0, -0x787C($gp)
    ctx->pc = 0x17c43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c440: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x17c440u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17c444: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17c444u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17c448: 0xe7a100d0  swc1        $f1, 0xD0($sp)
    ctx->pc = 0x17c448u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x17c44c: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x17c44cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x17c450: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x17c450u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17c454: 0xc04bd40  jal         func_12F500
    ctx->pc = 0x17C454u;
    SET_GPR_U32(ctx, 31, 0x17C45Cu);
    ctx->pc = 0x17C458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C454u;
            // 0x17c458: 0x7ca20000  sq          $v0, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F500u;
    if (runtime->hasFunction(0x12F500u)) {
        auto targetFn = runtime->lookupFunction(0x12F500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C45Cu; }
        if (ctx->pc != 0x17C45Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgVectorMaxMin__FPfPfPfPfPfPf_0x12f500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C45Cu; }
        if (ctx->pc != 0x17C45Cu) { return; }
    }
    ctx->pc = 0x17C45Cu;
label_17c45c:
    // 0x17c45c: 0xc7838780  lwc1        $f3, -0x7880($gp)
    ctx->pc = 0x17c45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x17c460: 0xc7828784  lwc1        $f2, -0x787C($gp)
    ctx->pc = 0x17c460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17c464: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x17c464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c468: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17c468u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c46c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x17c46cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x17c470: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17c470u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17c474: 0x0  nop
    ctx->pc = 0x17c474u;
    // NOP
    // 0x17c478: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x17C478u;
    {
        const bool branch_taken_0x17c478 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17C47Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C478u;
            // 0x17c47c: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c478) {
            ctx->pc = 0x17C484u;
            goto label_17c484;
        }
    }
    ctx->pc = 0x17C480u;
    // 0x17c480: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x17c480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_17c484:
    // 0x17c484: 0x27a200e4  addiu       $v0, $sp, 0xE4
    ctx->pc = 0x17c484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x17c488: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x17c488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c48c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17c48cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c490: 0x0  nop
    ctx->pc = 0x17c490u;
    // NOP
    // 0x17c494: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17c494u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17c498: 0x0  nop
    ctx->pc = 0x17c498u;
    // NOP
    // 0x17c49c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x17C49Cu;
    {
        const bool branch_taken_0x17c49c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17c49c) {
            ctx->pc = 0x17C4A8u;
            goto label_17c4a8;
        }
    }
    ctx->pc = 0x17C4A4u;
    // 0x17c4a4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x17c4a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_17c4a8:
    // 0x17c4a8: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x17c4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c4ac: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x17c4acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17c4b0: 0x0  nop
    ctx->pc = 0x17c4b0u;
    // NOP
    // 0x17c4b4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x17C4B4u;
    {
        const bool branch_taken_0x17c4b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17C4B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C4B4u;
            // 0x17c4b8: 0x27a200d4  addiu       $v0, $sp, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c4b4) {
            ctx->pc = 0x17C4C0u;
            goto label_17c4c0;
        }
    }
    ctx->pc = 0x17C4BCu;
    // 0x17c4bc: 0xe7a300d0  swc1        $f3, 0xD0($sp)
    ctx->pc = 0x17c4bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_17c4c0:
    // 0x17c4c0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x17c4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c4c4: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x17c4c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17c4c8: 0x0  nop
    ctx->pc = 0x17c4c8u;
    // NOP
    // 0x17c4cc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x17C4CCu;
    {
        const bool branch_taken_0x17c4cc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17C4D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C4CCu;
            // 0x17c4d0: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c4cc) {
            ctx->pc = 0x17C4D8u;
            goto label_17c4d8;
        }
    }
    ctx->pc = 0x17C4D4u;
    // 0x17c4d4: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x17c4d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_17c4d8:
    // 0x17c4d8: 0xc04bc70  jal         func_12F1C0
    ctx->pc = 0x17C4D8u;
    SET_GPR_U32(ctx, 31, 0x17C4E0u);
    ctx->pc = 0x17C4DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C4D8u;
            // 0x17c4dc: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F1C0u;
    if (runtime->hasFunction(0x12F1C0u)) {
        auto targetFn = runtime->lookupFunction(0x12F1C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C4E0u; }
        if (ctx->pc != 0x17C4E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgFotI4__FPiPf_0x12f1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C4E0u; }
        if (ctx->pc != 0x17C4E0u) { return; }
    }
    ctx->pc = 0x17C4E0u;
label_17c4e0:
    // 0x17c4e0: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x17c4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x17c4e4: 0xc04bc70  jal         func_12F1C0
    ctx->pc = 0x17C4E4u;
    SET_GPR_U32(ctx, 31, 0x17C4ECu);
    ctx->pc = 0x17C4E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C4E4u;
            // 0x17c4e8: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F1C0u;
    if (runtime->hasFunction(0x12F1C0u)) {
        auto targetFn = runtime->lookupFunction(0x12F1C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C4ECu; }
        if (ctx->pc != 0x17C4ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgFotI4__FPiPf_0x12f1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C4ECu; }
        if (ctx->pc != 0x17C4ECu) { return; }
    }
    ctx->pc = 0x17C4ECu;
label_17c4ec:
    // 0x17c4ec: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x17c4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x17c4f0: 0x27b70104  addiu       $s7, $sp, 0x104
    ctx->pc = 0x17c4f0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x17c4f4: 0x27be00f4  addiu       $fp, $sp, 0xF4
    ctx->pc = 0x17c4f4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x17c4f8: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x17c4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x17c4fc: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x17c4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x17c500: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x17c500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x17c504: 0x24b1ff80  addiu       $s1, $a1, -0x80
    ctx->pc = 0x17c504u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967168));
    // 0x17c508: 0x24920080  addiu       $s2, $a0, 0x80
    ctx->pc = 0x17c508u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x17c50c: 0x2473ff80  addiu       $s3, $v1, -0x80
    ctx->pc = 0x17c50cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967168));
    // 0x17c510: 0x6210002  bgez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x17C510u;
    {
        const bool branch_taken_0x17c510 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x17C514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C510u;
            // 0x17c514: 0x24540080  addiu       $s4, $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c510) {
            ctx->pc = 0x17C51Cu;
            goto label_17c51c;
        }
    }
    ctx->pc = 0x17C518u;
    // 0x17c518: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x17c518u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17c51c:
    // 0x17c51c: 0x6610002  bgez        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x17C51Cu;
    {
        const bool branch_taken_0x17c51c = (GPR_S32(ctx, 19) >= 0);
        if (branch_taken_0x17c51c) {
            ctx->pc = 0x17C528u;
            goto label_17c528;
        }
    }
    ctx->pc = 0x17C524u;
    // 0x17c524: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x17c524u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17c528:
    // 0x17c528: 0x8f828780  lw          $v0, -0x7880($gp)
    ctx->pc = 0x17c528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x17c52c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17c52cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17c530: 0x52082a  slt         $at, $v0, $s2
    ctx->pc = 0x17c530u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x17c534: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x17C534u;
    {
        const bool branch_taken_0x17c534 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c534) {
            ctx->pc = 0x17C540u;
            goto label_17c540;
        }
    }
    ctx->pc = 0x17C53Cu;
    // 0x17c53c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x17c53cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17c540:
    // 0x17c540: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x17c540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x17c544: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17c544u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17c548: 0x54082a  slt         $at, $v0, $s4
    ctx->pc = 0x17c548u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x17c54c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x17C54Cu;
    {
        const bool branch_taken_0x17c54c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c54c) {
            ctx->pc = 0x17C558u;
            goto label_17c558;
        }
    }
    ctx->pc = 0x17C554u;
    // 0x17c554: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x17c554u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17c558:
    // 0x17c558: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x17c558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x17c55c: 0x94420038  lhu         $v0, 0x38($v0)
    ctx->pc = 0x17c55cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x17c560: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x17c560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x17c564: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17C564u;
    {
        const bool branch_taken_0x17c564 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x17C568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C564u;
            // 0x17c568: 0x22143  sra         $a0, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c564) {
            ctx->pc = 0x17C574u;
            goto label_17c574;
        }
    }
    ctx->pc = 0x17C56Cu;
    // 0x17c56c: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x17c56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x17c570: 0x22143  sra         $a0, $v0, 5
    ctx->pc = 0x17c570u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 5));
label_17c574:
    // 0x17c574: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x17c574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17c578: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x17c578u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c57c: 0xc050f18  jal         func_143C60
    ctx->pc = 0x17C57Cu;
    SET_GPR_U32(ctx, 31, 0x17C584u);
    ctx->pc = 0x17C580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C57Cu;
            // 0x17c580: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143C60u;
    if (runtime->hasFunction(0x143C60u)) {
        auto targetFn = runtime->lookupFunction(0x143C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C584u; }
        if (ctx->pc != 0x17C584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPkFrameBuffer__Fiiii_0x143c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C584u; }
        if (ctx->pc != 0x17C584u) { return; }
    }
    ctx->pc = 0x17C584u;
label_17c584:
    // 0x17c584: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x17C584u;
    SET_GPR_U32(ctx, 31, 0x17C58Cu);
    ctx->pc = 0x17C588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C584u;
            // 0x17c588: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C58Cu; }
        if (ctx->pc != 0x17C58Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C58Cu; }
        if (ctx->pc != 0x17C58Cu) { return; }
    }
    ctx->pc = 0x17C58Cu;
label_17c58c:
    // 0x17c58c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x17c58cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x17c590: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17c590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c594: 0xc04d104  jal         func_134410
    ctx->pc = 0x17C594u;
    SET_GPR_U32(ctx, 31, 0x17C59Cu);
    ctx->pc = 0x17C598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C594u;
            // 0x17c598: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C59Cu; }
        if (ctx->pc != 0x17C59Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C59Cu; }
        if (ctx->pc != 0x17C59Cu) { return; }
    }
    ctx->pc = 0x17C59Cu;
label_17c59c:
    // 0x17c59c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x17c59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x17c5a0: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x17C5A0u;
    SET_GPR_U32(ctx, 31, 0x17C5A8u);
    ctx->pc = 0x17C5A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C5A0u;
            // 0x17c5a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C5A8u; }
        if (ctx->pc != 0x17C5A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C5A8u; }
        if (ctx->pc != 0x17C5A8u) { return; }
    }
    ctx->pc = 0x17C5A8u;
label_17c5a8:
    // 0x17c5a8: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x17c5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x17c5ac: 0xc04d424  jal         func_135090
    ctx->pc = 0x17C5ACu;
    SET_GPR_U32(ctx, 31, 0x17C5B4u);
    ctx->pc = 0x17C5B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C5ACu;
            // 0x17c5b0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135090u;
    if (runtime->hasFunction(0x135090u)) {
        auto targetFn = runtime->lookupFunction(0x135090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C5B4u; }
        if (ctx->pc != 0x17C5B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZMask__11mgCDrawPrimFi_0x135090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C5B4u; }
        if (ctx->pc != 0x17C5B4u) { return; }
    }
    ctx->pc = 0x17C5B4u;
label_17c5b4:
    // 0x17c5b4: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x17c5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x17c5b8: 0xc04d3bc  jal         func_134EF0
    ctx->pc = 0x17C5B8u;
    SET_GPR_U32(ctx, 31, 0x17C5C0u);
    ctx->pc = 0x17C5BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C5B8u;
            // 0x17c5bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EF0u;
    if (runtime->hasFunction(0x134EF0u)) {
        auto targetFn = runtime->lookupFunction(0x134EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C5C0u; }
        if (ctx->pc != 0x17C5C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTestEnable__11mgCDrawPrimFi_0x134ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C5C0u; }
        if (ctx->pc != 0x17C5C0u) { return; }
    }
    ctx->pc = 0x17C5C0u;
label_17c5c0:
    // 0x17c5c0: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x17c5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x17c5c4: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x17C5C4u;
    SET_GPR_U32(ctx, 31, 0x17C5CCu);
    ctx->pc = 0x17C5C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C5C4u;
            // 0x17c5c8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C5CCu; }
        if (ctx->pc != 0x17C5CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C5CCu; }
        if (ctx->pc != 0x17C5CCu) { return; }
    }
    ctx->pc = 0x17C5CCu;
label_17c5cc:
    // 0x17c5cc: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x17c5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x17c5d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17c5d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c5d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17c5d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c5d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17c5d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c5dc: 0xc04d320  jal         func_134C80
    ctx->pc = 0x17C5DCu;
    SET_GPR_U32(ctx, 31, 0x17C5E4u);
    ctx->pc = 0x17C5E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C5DCu;
            // 0x17c5e0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C5E4u; }
        if (ctx->pc != 0x17C5E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C5E4u; }
        if (ctx->pc != 0x17C5E4u) { return; }
    }
    ctx->pc = 0x17C5E4u;
label_17c5e4:
    // 0x17c5e4: 0x2625fff0  addiu       $a1, $s1, -0x10
    ctx->pc = 0x17c5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
    // 0x17c5e8: 0x2666fff0  addiu       $a2, $s3, -0x10
    ctx->pc = 0x17c5e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967280));
    // 0x17c5ec: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x17c5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x17c5f0: 0xc04d2ec  jal         func_134BB0
    ctx->pc = 0x17C5F0u;
    SET_GPR_U32(ctx, 31, 0x17C5F8u);
    ctx->pc = 0x17C5F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C5F0u;
            // 0x17c5f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134BB0u;
    if (runtime->hasFunction(0x134BB0u)) {
        auto targetFn = runtime->lookupFunction(0x134BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C5F8u; }
        if (ctx->pc != 0x17C5F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFiii_0x134bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C5F8u; }
        if (ctx->pc != 0x17C5F8u) { return; }
    }
    ctx->pc = 0x17C5F8u;
label_17c5f8:
    // 0x17c5f8: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x17c5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x17c5fc: 0x26860010  addiu       $a2, $s4, 0x10
    ctx->pc = 0x17c5fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x17c600: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x17c600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x17c604: 0xc04d2ec  jal         func_134BB0
    ctx->pc = 0x17C604u;
    SET_GPR_U32(ctx, 31, 0x17C60Cu);
    ctx->pc = 0x17C608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C604u;
            // 0x17c608: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134BB0u;
    if (runtime->hasFunction(0x134BB0u)) {
        auto targetFn = runtime->lookupFunction(0x134BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C60Cu; }
        if (ctx->pc != 0x17C60Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFiii_0x134bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C60Cu; }
        if (ctx->pc != 0x17C60Cu) { return; }
    }
    ctx->pc = 0x17C60Cu;
label_17c60c:
    // 0x17c60c: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x17C60Cu;
    SET_GPR_U32(ctx, 31, 0x17C614u);
    ctx->pc = 0x17C610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C60Cu;
            // 0x17c610: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C614u; }
        if (ctx->pc != 0x17C614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C614u; }
        if (ctx->pc != 0x17C614u) { return; }
    }
    ctx->pc = 0x17C614u;
label_17c614:
    // 0x17c614: 0xc050bf4  jal         func_142FD0
    ctx->pc = 0x17C614u;
    SET_GPR_U32(ctx, 31, 0x17C61Cu);
    ctx->pc = 0x17C618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C614u;
            // 0x17c618: 0x8e040034  lw          $a0, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142FD0u;
    if (runtime->hasFunction(0x142FD0u)) {
        auto targetFn = runtime->lookupFunction(0x142FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C61Cu; }
        if (ctx->pc != 0x17C61Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDrawDirect__FP8mgCFrame_0x142fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C61Cu; }
        if (ctx->pc != 0x17C61Cu) { return; }
    }
    ctx->pc = 0x17C61Cu;
label_17c61c:
    // 0x17c61c: 0x8fb10100  lw          $s1, 0x100($sp)
    ctx->pc = 0x17c61cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x17c620: 0x8ef30000  lw          $s3, 0x0($s7)
    ctx->pc = 0x17c620u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x17c624: 0x8fd40000  lw          $s4, 0x0($fp)
    ctx->pc = 0x17c624u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x17c628: 0x8fb200f0  lw          $s2, 0xF0($sp)
    ctx->pc = 0x17c628u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x17c62c: 0x6210002  bgez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x17C62Cu;
    {
        const bool branch_taken_0x17c62c = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x17C630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C62Cu;
            // 0x17c630: 0x2a2a821  addu        $s5, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c62c) {
            ctx->pc = 0x17C638u;
            goto label_17c638;
        }
    }
    ctx->pc = 0x17C634u;
    // 0x17c634: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x17c634u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17c638:
    // 0x17c638: 0x6610002  bgez        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x17C638u;
    {
        const bool branch_taken_0x17c638 = (GPR_S32(ctx, 19) >= 0);
        if (branch_taken_0x17c638) {
            ctx->pc = 0x17C644u;
            goto label_17c644;
        }
    }
    ctx->pc = 0x17C640u;
    // 0x17c640: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x17c640u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17c644:
    // 0x17c644: 0x8f828780  lw          $v0, -0x7880($gp)
    ctx->pc = 0x17c644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x17c648: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17c648u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17c64c: 0x52082a  slt         $at, $v0, $s2
    ctx->pc = 0x17c64cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x17c650: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x17C650u;
    {
        const bool branch_taken_0x17c650 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c650) {
            ctx->pc = 0x17C65Cu;
            goto label_17c65c;
        }
    }
    ctx->pc = 0x17C658u;
    // 0x17c658: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x17c658u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17c65c:
    // 0x17c65c: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x17c65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x17c660: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17c660u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17c664: 0x54082a  slt         $at, $v0, $s4
    ctx->pc = 0x17c664u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x17c668: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x17C668u;
    {
        const bool branch_taken_0x17c668 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C66Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C668u;
            // 0x17c66c: 0x27a40220  addiu       $a0, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c668) {
            ctx->pc = 0x17C674u;
            goto label_17c674;
        }
    }
    ctx->pc = 0x17C670u;
    // 0x17c670: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x17c670u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17c674:
    // 0x17c674: 0xc04b120  jal         func_12C480
    ctx->pc = 0x17C674u;
    SET_GPR_U32(ctx, 31, 0x17C67Cu);
    ctx->pc = 0x12C480u;
    if (runtime->hasFunction(0x12C480u)) {
        auto targetFn = runtime->lookupFunction(0x12C480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C67Cu; }
        if (ctx->pc != 0x17C67Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__10mgCTextureFv_0x12c480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C67Cu; }
        if (ctx->pc != 0x17C67Cu) { return; }
    }
    ctx->pc = 0x17C67Cu;
label_17c67c:
    // 0x17c67c: 0xc0510c0  jal         func_144300
    ctx->pc = 0x17C67Cu;
    SET_GPR_U32(ctx, 31, 0x17C684u);
    ctx->pc = 0x17C680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C67Cu;
            // 0x17c680: 0x27a40220  addiu       $a0, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144300u;
    if (runtime->hasFunction(0x144300u)) {
        auto targetFn = runtime->lookupFunction(0x144300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C684u; }
        if (ctx->pc != 0x17C684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetFrameBuffer__FP10mgCTexture_0x144300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C684u; }
        if (ctx->pc != 0x17C684u) { return; }
    }
    ctx->pc = 0x17C684u;
label_17c684:
    // 0x17c684: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x17c684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17c688: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x17c688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c68c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x17c68cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c690: 0xc050f18  jal         func_143C60
    ctx->pc = 0x17C690u;
    SET_GPR_U32(ctx, 31, 0x17C698u);
    ctx->pc = 0x17C694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C690u;
            // 0x17c694: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143C60u;
    if (runtime->hasFunction(0x143C60u)) {
        auto targetFn = runtime->lookupFunction(0x143C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C698u; }
        if (ctx->pc != 0x17C698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPkFrameBuffer__Fiiii_0x143c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C698u; }
        if (ctx->pc != 0x17C698u) { return; }
    }
    ctx->pc = 0x17C698u;
label_17c698:
    // 0x17c698: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x17c698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x17c69c: 0x27a30290  addiu       $v1, $sp, 0x290
    ctx->pc = 0x17c69cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x17c6a0: 0x244206f0  addiu       $v0, $v0, 0x6F0
    ctx->pc = 0x17c6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1776));
    // 0x17c6a4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x17c6a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17c6a8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x17c6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x17c6ac: 0xc0a248c  jal         func_289230
    ctx->pc = 0x17C6ACu;
    SET_GPR_U32(ctx, 31, 0x17C6B4u);
    ctx->pc = 0x17C6B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C6ACu;
            // 0x17c6b0: 0xc60c0050  lwc1        $f12, 0x50($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C6B4u; }
        if (ctx->pc != 0x17C6B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C6B4u; }
        if (ctx->pc != 0x17C6B4u) { return; }
    }
    ctx->pc = 0x17C6B4u;
label_17c6b4:
    // 0x17c6b4: 0xafa20290  sw          $v0, 0x290($sp)
    ctx->pc = 0x17c6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 2));
    // 0x17c6b8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x17C6B8u;
    SET_GPR_U32(ctx, 31, 0x17C6C0u);
    ctx->pc = 0x17C6BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C6B8u;
            // 0x17c6bc: 0xc60c0054  lwc1        $f12, 0x54($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C6C0u; }
        if (ctx->pc != 0x17C6C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C6C0u; }
        if (ctx->pc != 0x17C6C0u) { return; }
    }
    ctx->pc = 0x17C6C0u;
label_17c6c0:
    // 0x17c6c0: 0xafa20294  sw          $v0, 0x294($sp)
    ctx->pc = 0x17c6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 660), GPR_U32(ctx, 2));
    // 0x17c6c4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x17C6C4u;
    SET_GPR_U32(ctx, 31, 0x17C6CCu);
    ctx->pc = 0x17C6C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C6C4u;
            // 0x17c6c8: 0xc60c0058  lwc1        $f12, 0x58($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C6CCu; }
        if (ctx->pc != 0x17C6CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C6CCu; }
        if (ctx->pc != 0x17C6CCu) { return; }
    }
    ctx->pc = 0x17C6CCu;
label_17c6cc:
    // 0x17c6cc: 0xafa20298  sw          $v0, 0x298($sp)
    ctx->pc = 0x17c6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 664), GPR_U32(ctx, 2));
    // 0x17c6d0: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x17c6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x17c6d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c6d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c6d8: 0x0  nop
    ctx->pc = 0x17c6d8u;
    // NOP
    // 0x17c6dc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x17c6dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x17c6e0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x17C6E0u;
    SET_GPR_U32(ctx, 31, 0x17C6E8u);
    ctx->pc = 0x17C6E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C6E0u;
            // 0x17c6e4: 0x46150302  mul.s       $f12, $f0, $f21 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C6E8u; }
        if (ctx->pc != 0x17C6E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C6E8u; }
        if (ctx->pc != 0x17C6E8u) { return; }
    }
    ctx->pc = 0x17C6E8u;
label_17c6e8:
    // 0x17c6e8: 0xafa2029c  sw          $v0, 0x29C($sp)
    ctx->pc = 0x17c6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 668), GPR_U32(ctx, 2));
    // 0x17c6ec: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x17C6ECu;
    SET_GPR_U32(ctx, 31, 0x17C6F4u);
    ctx->pc = 0x17C6F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C6ECu;
            // 0x17c6f0: 0x27a402a0  addiu       $a0, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C6F4u; }
        if (ctx->pc != 0x17C6F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C6F4u; }
        if (ctx->pc != 0x17C6F4u) { return; }
    }
    ctx->pc = 0x17C6F4u;
label_17c6f4:
    // 0x17c6f4: 0x27a402a0  addiu       $a0, $sp, 0x2A0
    ctx->pc = 0x17c6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x17c6f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17c6f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c6fc: 0xc04d104  jal         func_134410
    ctx->pc = 0x17C6FCu;
    SET_GPR_U32(ctx, 31, 0x17C704u);
    ctx->pc = 0x17C700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C6FCu;
            // 0x17c700: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C704u; }
        if (ctx->pc != 0x17C704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C704u; }
        if (ctx->pc != 0x17C704u) { return; }
    }
    ctx->pc = 0x17C704u;
label_17c704:
    // 0x17c704: 0x27a402a0  addiu       $a0, $sp, 0x2A0
    ctx->pc = 0x17c704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x17c708: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x17C708u;
    SET_GPR_U32(ctx, 31, 0x17C710u);
    ctx->pc = 0x17C70Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C708u;
            // 0x17c70c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C710u; }
        if (ctx->pc != 0x17C710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C710u; }
        if (ctx->pc != 0x17C710u) { return; }
    }
    ctx->pc = 0x17C710u;
label_17c710:
    // 0x17c710: 0x27a402a0  addiu       $a0, $sp, 0x2A0
    ctx->pc = 0x17c710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x17c714: 0xc04d424  jal         func_135090
    ctx->pc = 0x17C714u;
    SET_GPR_U32(ctx, 31, 0x17C71Cu);
    ctx->pc = 0x17C718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C714u;
            // 0x17c718: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135090u;
    if (runtime->hasFunction(0x135090u)) {
        auto targetFn = runtime->lookupFunction(0x135090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C71Cu; }
        if (ctx->pc != 0x17C71Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZMask__11mgCDrawPrimFi_0x135090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C71Cu; }
        if (ctx->pc != 0x17C71Cu) { return; }
    }
    ctx->pc = 0x17C71Cu;
label_17c71c:
    // 0x17c71c: 0x27a402a0  addiu       $a0, $sp, 0x2A0
    ctx->pc = 0x17c71cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x17c720: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x17C720u;
    SET_GPR_U32(ctx, 31, 0x17C728u);
    ctx->pc = 0x17C724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C720u;
            // 0x17c724: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C728u; }
        if (ctx->pc != 0x17C728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C728u; }
        if (ctx->pc != 0x17C728u) { return; }
    }
    ctx->pc = 0x17C728u;
label_17c728:
    // 0x17c728: 0x27a402a0  addiu       $a0, $sp, 0x2A0
    ctx->pc = 0x17c728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x17c72c: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x17C72Cu;
    SET_GPR_U32(ctx, 31, 0x17C734u);
    ctx->pc = 0x17C730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C72Cu;
            // 0x17c730: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C734u; }
        if (ctx->pc != 0x17C734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C734u; }
        if (ctx->pc != 0x17C734u) { return; }
    }
    ctx->pc = 0x17C734u;
label_17c734:
    // 0x17c734: 0x27a402a0  addiu       $a0, $sp, 0x2A0
    ctx->pc = 0x17c734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x17c738: 0xc04d3b0  jal         func_134EC0
    ctx->pc = 0x17C738u;
    SET_GPR_U32(ctx, 31, 0x17C740u);
    ctx->pc = 0x17C73Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C738u;
            // 0x17c73c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C740u; }
        if (ctx->pc != 0x17C740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C740u; }
        if (ctx->pc != 0x17C740u) { return; }
    }
    ctx->pc = 0x17C740u;
label_17c740:
    // 0x17c740: 0x27a402a0  addiu       $a0, $sp, 0x2A0
    ctx->pc = 0x17c740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x17c744: 0xc04d3b8  jal         func_134EE0
    ctx->pc = 0x17C744u;
    SET_GPR_U32(ctx, 31, 0x17C74Cu);
    ctx->pc = 0x17C748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C744u;
            // 0x17c748: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EE0u;
    if (runtime->hasFunction(0x134EE0u)) {
        auto targetFn = runtime->lookupFunction(0x134EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C74Cu; }
        if (ctx->pc != 0x17C74Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlend__11mgCDrawPrimFi_0x134ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C74Cu; }
        if (ctx->pc != 0x17C74Cu) { return; }
    }
    ctx->pc = 0x17C74Cu;
label_17c74c:
    // 0x17c74c: 0xc050ebc  jal         func_143AF0
    ctx->pc = 0x17C74Cu;
    SET_GPR_U32(ctx, 31, 0x17C754u);
    ctx->pc = 0x17C750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C74Cu;
            // 0x17c750: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143AF0u;
    if (runtime->hasFunction(0x143AF0u)) {
        auto targetFn = runtime->lookupFunction(0x143AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C754u; }
        if (ctx->pc != 0x17C754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPkTextureRepeat__Fi_0x143af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C754u; }
        if (ctx->pc != 0x17C754u) { return; }
    }
    ctx->pc = 0x17C754u;
label_17c754:
    // 0x17c754: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x17c754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x17c758: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x17C758u;
    {
        const bool branch_taken_0x17c758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17C75Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C758u;
            // 0x17c75c: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c758) {
            ctx->pc = 0x17C7D0u;
            goto label_17c7d0;
        }
    }
    ctx->pc = 0x17C760u;
    // 0x17c760: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c760u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c764: 0x0  nop
    ctx->pc = 0x17c764u;
    // NOP
    // 0x17c768: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x17c768u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17c76c: 0x0  nop
    ctx->pc = 0x17c76cu;
    // NOP
    // 0x17c770: 0x45010017  bc1t        . + 4 + (0x17 << 2)
    ctx->pc = 0x17C770u;
    {
        const bool branch_taken_0x17c770 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17c770) {
            ctx->pc = 0x17C7D0u;
            goto label_17c7d0;
        }
    }
    ctx->pc = 0x17C778u;
    // 0x17c778: 0x1ac00015  blez        $s6, . + 4 + (0x15 << 2)
    ctx->pc = 0x17C778u;
    {
        const bool branch_taken_0x17c778 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x17C77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C778u;
            // 0x17c77c: 0x3c023dcc  lui         $v0, 0x3DCC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c778) {
            ctx->pc = 0x17C7D0u;
            goto label_17c7d0;
        }
    }
    ctx->pc = 0x17C780u;
    // 0x17c780: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x17c780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x17c784: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c784u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c788: 0x0  nop
    ctx->pc = 0x17c788u;
    // NOP
    // 0x17c78c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x17c78cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17c790: 0x0  nop
    ctx->pc = 0x17c790u;
    // NOP
    // 0x17c794: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x17C794u;
    {
        const bool branch_taken_0x17c794 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17c794) {
            ctx->pc = 0x17C7D0u;
            goto label_17c7d0;
        }
    }
    ctx->pc = 0x17C79Cu;
    // 0x17c79c: 0x27a403d0  addiu       $a0, $sp, 0x3D0
    ctx->pc = 0x17c79cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
    // 0x17c7a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17c7a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c7a4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x17c7a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c7a8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x17c7a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c7ac: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x17C7ACu;
    SET_GPR_U32(ctx, 31, 0x17C7B4u);
    ctx->pc = 0x17C7B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C7ACu;
            // 0x17c7b0: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C7B4u; }
        if (ctx->pc != 0x17C7B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C7B4u; }
        if (ctx->pc != 0x17C7B4u) { return; }
    }
    ctx->pc = 0x17C7B4u;
label_17c7b4:
    // 0x17c7b4: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x17c7b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c7b8: 0x27a402a0  addiu       $a0, $sp, 0x2A0
    ctx->pc = 0x17c7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x17c7bc: 0x27a503d0  addiu       $a1, $sp, 0x3D0
    ctx->pc = 0x17c7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
    // 0x17c7c0: 0x27a60220  addiu       $a2, $sp, 0x220
    ctx->pc = 0x17c7c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x17c7c4: 0x27a70290  addiu       $a3, $sp, 0x290
    ctx->pc = 0x17c7c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x17c7c8: 0xc05f2c8  jal         func_17CB20
    ctx->pc = 0x17C7C8u;
    SET_GPR_U32(ctx, 31, 0x17C7D0u);
    ctx->pc = 0x17C7CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C7C8u;
            // 0x17c7cc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17CB20u;
    if (runtime->hasFunction(0x17CB20u)) {
        auto targetFn = runtime->lookupFunction(0x17CB20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C7D0u; }
        if (ctx->pc != 0x17C7D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDivSprite4__FP11mgCDrawPrim9mgRect_i_P10mgCTexturePiii_0x17cb20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C7D0u; }
        if (ctx->pc != 0x17C7D0u) { return; }
    }
    ctx->pc = 0x17C7D0u;
label_17c7d0:
    // 0x17c7d0: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x17c7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x17c7d4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x17C7D4u;
    {
        const bool branch_taken_0x17c7d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C7D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C7D4u;
            // 0x17c7d8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c7d4) {
            ctx->pc = 0x17C80Cu;
            goto label_17c80c;
        }
    }
    ctx->pc = 0x17C7DCu;
    // 0x17c7dc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17c7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17c7e0: 0x27a403b0  addiu       $a0, $sp, 0x3B0
    ctx->pc = 0x17c7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
    // 0x17c7e4: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x17c7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    // 0x17c7e8: 0xc051638  jal         func_1458E0
    ctx->pc = 0x17C7E8u;
    SET_GPR_U32(ctx, 31, 0x17C7F0u);
    ctx->pc = 0x17C7ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C7E8u;
            // 0x17c7ec: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1458E0u;
    if (runtime->hasFunction(0x1458E0u)) {
        auto targetFn = runtime->lookupFunction(0x1458E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C7F0u; }
        if (ctx->pc != 0x17C7F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldPrim__FPiPf_0x1458e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C7F0u; }
        if (ctx->pc != 0x17C7F0u) { return; }
    }
    ctx->pc = 0x17C7F0u;
label_17c7f0:
    // 0x17c7f0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17C7F0u;
    {
        const bool branch_taken_0x17c7f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c7f0) {
            ctx->pc = 0x17C80Cu;
            goto label_17c80c;
        }
    }
    ctx->pc = 0x17C7F8u;
    // 0x17c7f8: 0x27a402a0  addiu       $a0, $sp, 0x2A0
    ctx->pc = 0x17c7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x17c7fc: 0xc04d424  jal         func_135090
    ctx->pc = 0x17C7FCu;
    SET_GPR_U32(ctx, 31, 0x17C804u);
    ctx->pc = 0x17C800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C7FCu;
            // 0x17c800: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135090u;
    if (runtime->hasFunction(0x135090u)) {
        auto targetFn = runtime->lookupFunction(0x135090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C804u; }
        if (ctx->pc != 0x17C804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZMask__11mgCDrawPrimFi_0x135090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C804u; }
        if (ctx->pc != 0x17C804u) { return; }
    }
    ctx->pc = 0x17C804u;
label_17c804:
    // 0x17c804: 0x8fb603b8  lw          $s6, 0x3B8($sp)
    ctx->pc = 0x17c804u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 952)));
    // 0x17c808: 0x0  nop
    ctx->pc = 0x17c808u;
    // NOP
label_17c80c:
    // 0x17c80c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x17c80cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x17c810: 0x27a603c0  addiu       $a2, $sp, 0x3C0
    ctx->pc = 0x17c810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
    // 0x17c814: 0x24424ed0  addiu       $v0, $v0, 0x4ED0
    ctx->pc = 0x17c814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20176));
    // 0x17c818: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x17c818u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17c81c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x17c81cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x17c820: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x17c820u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x17c824: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c828: 0xc0a248c  jal         func_289230
    ctx->pc = 0x17C828u;
    SET_GPR_U32(ctx, 31, 0x17C830u);
    ctx->pc = 0x17C82Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C828u;
            // 0x17c82c: 0x46150302  mul.s       $f12, $f0, $f21 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C830u; }
        if (ctx->pc != 0x17C830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C830u; }
        if (ctx->pc != 0x17C830u) { return; }
    }
    ctx->pc = 0x17C830u;
label_17c830:
    // 0x17c830: 0xafa203cc  sw          $v0, 0x3CC($sp)
    ctx->pc = 0x17c830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 972), GPR_U32(ctx, 2));
    // 0x17c834: 0x27a402a0  addiu       $a0, $sp, 0x2A0
    ctx->pc = 0x17c834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x17c838: 0xc04d3b0  jal         func_134EC0
    ctx->pc = 0x17C838u;
    SET_GPR_U32(ctx, 31, 0x17C840u);
    ctx->pc = 0x17C83Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C838u;
            // 0x17c83c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C840u; }
        if (ctx->pc != 0x17C840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C840u; }
        if (ctx->pc != 0x17C840u) { return; }
    }
    ctx->pc = 0x17C840u;
label_17c840:
    // 0x17c840: 0x27a402a0  addiu       $a0, $sp, 0x2A0
    ctx->pc = 0x17c840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x17c844: 0xc04d3b8  jal         func_134EE0
    ctx->pc = 0x17C844u;
    SET_GPR_U32(ctx, 31, 0x17C84Cu);
    ctx->pc = 0x17C848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C844u;
            // 0x17c848: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EE0u;
    if (runtime->hasFunction(0x134EE0u)) {
        auto targetFn = runtime->lookupFunction(0x134EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C84Cu; }
        if (ctx->pc != 0x17C84Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlend__11mgCDrawPrimFi_0x134ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C84Cu; }
        if (ctx->pc != 0x17C84Cu) { return; }
    }
    ctx->pc = 0x17C84Cu;
label_17c84c:
    // 0x17c84c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17c84cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c850: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x17c850u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c854: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x17c854u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c858: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x17c858u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c85c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x17C85Cu;
    SET_GPR_U32(ctx, 31, 0x17C864u);
    ctx->pc = 0x17C860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C85Cu;
            // 0x17c860: 0x27a403e0  addiu       $a0, $sp, 0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C864u; }
        if (ctx->pc != 0x17C864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C864u; }
        if (ctx->pc != 0x17C864u) { return; }
    }
    ctx->pc = 0x17C864u;
label_17c864:
    // 0x17c864: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x17c864u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c868: 0x27a402a0  addiu       $a0, $sp, 0x2A0
    ctx->pc = 0x17c868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x17c86c: 0x27a503e0  addiu       $a1, $sp, 0x3E0
    ctx->pc = 0x17c86cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
    // 0x17c870: 0x27a60220  addiu       $a2, $sp, 0x220
    ctx->pc = 0x17c870u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x17c874: 0x27a703c0  addiu       $a3, $sp, 0x3C0
    ctx->pc = 0x17c874u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
    // 0x17c878: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17c878u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c87c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17c87cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c880: 0xc05f23c  jal         func_17C8F0
    ctx->pc = 0x17C880u;
    SET_GPR_U32(ctx, 31, 0x17C888u);
    ctx->pc = 0x17C884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C880u;
            // 0x17c884: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C8F0u;
    if (runtime->hasFunction(0x17C8F0u)) {
        auto targetFn = runtime->lookupFunction(0x17C8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C888u; }
        if (ctx->pc != 0x17C888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDivSprite__FP11mgCDrawPrim9mgRect_i_P10mgCTexturePiiiii_0x17c8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C888u; }
        if (ctx->pc != 0x17C888u) { return; }
    }
    ctx->pc = 0x17C888u;
label_17c888:
    // 0x17c888: 0x27a402a0  addiu       $a0, $sp, 0x2A0
    ctx->pc = 0x17c888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x17c88c: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x17C88Cu;
    SET_GPR_U32(ctx, 31, 0x17C894u);
    ctx->pc = 0x17C890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C88Cu;
            // 0x17c890: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C894u; }
        if (ctx->pc != 0x17C894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C894u; }
        if (ctx->pc != 0x17C894u) { return; }
    }
    ctx->pc = 0x17C894u;
label_17c894:
    // 0x17c894: 0x27a402a0  addiu       $a0, $sp, 0x2A0
    ctx->pc = 0x17c894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x17c898: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x17c898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x17c89c: 0xc04d360  jal         func_134D80
    ctx->pc = 0x17C89Cu;
    SET_GPR_U32(ctx, 31, 0x17C8A4u);
    ctx->pc = 0x17C8A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C89Cu;
            // 0x17c8a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D80u;
    if (runtime->hasFunction(0x134D80u)) {
        auto targetFn = runtime->lookupFunction(0x134D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C8A4u; }
        if (ctx->pc != 0x17C8A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Direct__11mgCDrawPrimFUlUl_0x134d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C8A4u; }
        if (ctx->pc != 0x17C8A4u) { return; }
    }
    ctx->pc = 0x17C8A4u;
label_17c8a4:
    // 0x17c8a4: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x17C8A4u;
    SET_GPR_U32(ctx, 31, 0x17C8ACu);
    ctx->pc = 0x17C8A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C8A4u;
            // 0x17c8a8: 0x27a402a0  addiu       $a0, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C8ACu; }
        if (ctx->pc != 0x17C8ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C8ACu; }
        if (ctx->pc != 0x17C8ACu) { return; }
    }
    ctx->pc = 0x17C8ACu;
label_17c8ac:
    // 0x17c8ac: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x17c8acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_17c8b0:
    // 0x17c8b0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x17c8b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_17c8b4:
    // 0x17c8b4: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x17c8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x17c8b8: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x17c8b8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17c8bc: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x17c8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x17c8c0: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x17c8c0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17c8c4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x17c8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17c8c8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x17c8c8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17c8cc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x17c8ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17c8d0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x17c8d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17c8d4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x17c8d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17c8d8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x17c8d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17c8dc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17c8dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17c8e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17c8e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c8e4: 0x3e00008  jr          $ra
    ctx->pc = 0x17C8E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C8E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C8E4u;
            // 0x17c8e8: 0x27bd03f0  addiu       $sp, $sp, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1008));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17C8ECu;
}
