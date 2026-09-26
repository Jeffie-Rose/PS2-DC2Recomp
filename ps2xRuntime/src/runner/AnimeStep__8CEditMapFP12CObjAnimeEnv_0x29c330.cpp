#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AnimeStep__8CEditMapFP12CObjAnimeEnv
// Address: 0x29c330 - 0x29c490
void AnimeStep__8CEditMapFP12CObjAnimeEnv_0x29c330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AnimeStep__8CEditMapFP12CObjAnimeEnv_0x29c330");
#endif

    switch (ctx->pc) {
        case 0x29c35cu: goto label_29c35c;
        case 0x29c36cu: goto label_29c36c;
        case 0x29c378u: goto label_29c378;
        case 0x29c38cu: goto label_29c38c;
        case 0x29c3a4u: goto label_29c3a4;
        case 0x29c3b4u: goto label_29c3b4;
        case 0x29c40cu: goto label_29c40c;
        default: break;
    }

    ctx->pc = 0x29c330u;

    // 0x29c330: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x29c330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x29c334: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x29c334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x29c338: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x29c338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x29c33c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x29c33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x29c340: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29c340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x29c344: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29c344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29c348: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x29c348u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c34c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29c34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29c350: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x29c350u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c354: 0xc057f7c  jal         func_15FDF0
    ctx->pc = 0x29C354u;
    SET_GPR_U32(ctx, 31, 0x29C35Cu);
    ctx->pc = 0x29C358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C354u;
            // 0x29c358: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15FDF0u;
    if (runtime->hasFunction(0x15FDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15FDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C35Cu; }
        if (ctx->pc != 0x29C35Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AnimeStep__4CMapFP12CObjAnimeEnv_0x15fdf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C35Cu; }
        if (ctx->pc != 0x29C35Cu) { return; }
    }
    ctx->pc = 0x29C35Cu;
label_29c35c:
    // 0x29c35c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29c35cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c360: 0x27a50078  addiu       $a1, $sp, 0x78
    ctx->pc = 0x29c360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x29c364: 0xc0575cc  jal         func_15D730
    ctx->pc = 0x29C364u;
    SET_GPR_U32(ctx, 31, 0x29C36Cu);
    ctx->pc = 0x29C368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C364u;
            // 0x29c368: 0xafa00078  sw          $zero, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D730u;
    if (runtime->hasFunction(0x15D730u)) {
        auto targetFn = runtime->lookupFunction(0x15D730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C36Cu; }
        if (ctx->pc != 0x29C36Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateFuncCheck__4CMapFP15CFuncPointCheck_0x15d730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C36Cu; }
        if (ctx->pc != 0x29C36Cu) { return; }
    }
    ctx->pc = 0x29C36Cu;
label_29c36c:
    // 0x29c36c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x29c36cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c370: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x29C370u;
    {
        const bool branch_taken_0x29c370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C370u;
            // 0x29c374: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c370) {
            ctx->pc = 0x29C3D0u;
            goto label_29c3d0;
        }
    }
    ctx->pc = 0x29C378u;
label_29c378:
    // 0x29c378: 0x8e630d44  lw          $v1, 0xD44($s3)
    ctx->pc = 0x29c378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3396)));
    // 0x29c37c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x29c37cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x29c380: 0x8c7402f0  lw          $s4, 0x2F0($v1)
    ctx->pc = 0x29c380u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 752)));
    // 0x29c384: 0x1280000f  beqz        $s4, . + 4 + (0xF << 2)
    ctx->pc = 0x29C384u;
    {
        const bool branch_taken_0x29c384 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c384) {
            ctx->pc = 0x29C3C4u;
            goto label_29c3c4;
        }
    }
    ctx->pc = 0x29C38Cu;
label_29c38c:
    // 0x29c38c: 0x0  nop
    ctx->pc = 0x29c38cu;
    // NOP
    // 0x29c390: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x29c390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x29c394: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29C394u;
    {
        const bool branch_taken_0x29c394 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C394u;
            // 0x29c398: 0x26950010  addiu       $s5, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c394) {
            ctx->pc = 0x29C3B4u;
            goto label_29c3b4;
        }
    }
    ctx->pc = 0x29C39Cu;
    // 0x29c39c: 0xc0a71b0  jal         func_29C6C0
    ctx->pc = 0x29C39Cu;
    SET_GPR_U32(ctx, 31, 0x29C3A4u);
    ctx->pc = 0x29C3A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C39Cu;
            // 0x29c3a0: 0x27a50078  addiu       $a1, $sp, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C6C0u;
    if (runtime->hasFunction(0x29C6C0u)) {
        auto targetFn = runtime->lookupFunction(0x29C6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C3A4u; }
        if (ctx->pc != 0x29C3A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Check__10CFuncPointFP15CFuncPointCheck_0x29c6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C3A4u; }
        if (ctx->pc != 0x29C3A4u) { return; }
    }
    ctx->pc = 0x29C3A4u;
label_29c3a4:
    // 0x29c3a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29C3A4u;
    {
        const bool branch_taken_0x29c3a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C3A4u;
            // 0x29c3a8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c3a4) {
            ctx->pc = 0x29C3B4u;
            goto label_29c3b4;
        }
    }
    ctx->pc = 0x29C3ACu;
    // 0x29c3ac: 0xc0a71ec  jal         func_29C7B0
    ctx->pc = 0x29C3ACu;
    SET_GPR_U32(ctx, 31, 0x29C3B4u);
    ctx->pc = 0x29C3B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C3ACu;
            // 0x29c3b0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C7B0u;
    if (runtime->hasFunction(0x29C7B0u)) {
        auto targetFn = runtime->lookupFunction(0x29C7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C3B4u; }
        if (ctx->pc != 0x29C3B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__9CObjAnimeFP12CObjAnimeEnv_0x29c7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C3B4u; }
        if (ctx->pc != 0x29C3B4u) { return; }
    }
    ctx->pc = 0x29C3B4u;
label_29c3b4:
    // 0x29c3b4: 0x0  nop
    ctx->pc = 0x29c3b4u;
    // NOP
    // 0x29c3b8: 0x8e940000  lw          $s4, 0x0($s4)
    ctx->pc = 0x29c3b8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x29c3bc: 0x1680fff3  bnez        $s4, . + 4 + (-0xD << 2)
    ctx->pc = 0x29C3BCu;
    {
        const bool branch_taken_0x29c3bc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x29c3bc) {
            ctx->pc = 0x29C38Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29c38c;
        }
    }
    ctx->pc = 0x29C3C4u;
label_29c3c4:
    // 0x29c3c4: 0x0  nop
    ctx->pc = 0x29c3c4u;
    // NOP
    // 0x29c3c8: 0x26310330  addiu       $s1, $s1, 0x330
    ctx->pc = 0x29c3c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 816));
    // 0x29c3cc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x29c3ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_29c3d0:
    // 0x29c3d0: 0x8e630d40  lw          $v1, 0xD40($s3)
    ctx->pc = 0x29c3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3392)));
    // 0x29c3d4: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x29c3d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x29c3d8: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x29C3D8u;
    {
        const bool branch_taken_0x29c3d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29c3d8) {
            ctx->pc = 0x29C378u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29c378;
        }
    }
    ctx->pc = 0x29C3E0u;
    // 0x29c3e0: 0x8e631050  lw          $v1, 0x1050($s3)
    ctx->pc = 0x29c3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4176)));
    // 0x29c3e4: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x29C3E4u;
    {
        const bool branch_taken_0x29c3e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C3E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C3E4u;
            // 0x29c3e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c3e4) {
            ctx->pc = 0x29C46Cu;
            goto label_29c46c;
        }
    }
    ctx->pc = 0x29C3ECu;
    // 0x29c3ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29c3ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c3f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29c3f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c3f4: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x29c3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x29c3f8: 0x3c044080  lui         $a0, 0x4080
    ctx->pc = 0x29c3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16512 << 16));
    // 0x29c3fc: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x29c3fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x29c400: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29c400u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29c404: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x29c404u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x29c408: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x29c408u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_29c40c:
    // 0x29c40c: 0x2671821  addu        $v1, $s3, $a3
    ctx->pc = 0x29c40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x29c410: 0xc4621074  lwc1        $f2, 0x1074($v1)
    ctx->pc = 0x29c410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29c414: 0xc46410b4  lwc1        $f4, 0x10B4($v1)
    ctx->pc = 0x29c414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x29c418: 0x46041141  sub.s       $f5, $f2, $f4
    ctx->pc = 0x29c418u;
    ctx->f[5] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x29c41c: 0x46032883  div.s       $f2, $f5, $f3
    ctx->pc = 0x29c41cu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[5], ctx->f[3]); }
    // 0x29c420: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x29c420u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c424: 0x0  nop
    ctx->pc = 0x29c424u;
    // NOP
    // 0x29c428: 0x46022080  add.s       $f2, $f4, $f2
    ctx->pc = 0x29c428u;
    ctx->f[2] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x29c42c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x29C42Cu;
    {
        const bool branch_taken_0x29c42c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29C430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C42Cu;
            // 0x29c430: 0xe46210b4  swc1        $f2, 0x10B4($v1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4276), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c42c) {
            ctx->pc = 0x29C438u;
            goto label_29c438;
        }
    }
    ctx->pc = 0x29C434u;
    // 0x29c434: 0x46002947  neg.s       $f5, $f5
    ctx->pc = 0x29c434u;
    ctx->f[5] = FPU_NEG_S(ctx->f[5]);
label_29c438:
    // 0x29c438: 0x46002836  c.le.s      $f5, $f0
    ctx->pc = 0x29c438u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c43c: 0x0  nop
    ctx->pc = 0x29c43cu;
    // NOP
    // 0x29c440: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x29C440u;
    {
        const bool branch_taken_0x29c440 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29c440) {
            ctx->pc = 0x29C44Cu;
            goto label_29c44c;
        }
    }
    ctx->pc = 0x29C448u;
    // 0x29c448: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29c448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29c44c:
    // 0x29c44c: 0x0  nop
    ctx->pc = 0x29c44cu;
    // NOP
    // 0x29c450: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x29c450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x29c454: 0x28c30004  slti        $v1, $a2, 0x4
    ctx->pc = 0x29c454u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x29c458: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x29C458u;
    {
        const bool branch_taken_0x29c458 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29C45Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C458u;
            // 0x29c45c: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c458) {
            ctx->pc = 0x29C40Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29c40c;
        }
    }
    ctx->pc = 0x29C460u;
    // 0x29c460: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x29C460u;
    {
        const bool branch_taken_0x29c460 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C460u;
            // 0x29c464: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c460) {
            ctx->pc = 0x29C46Cu;
            goto label_29c46c;
        }
    }
    ctx->pc = 0x29C468u;
    // 0x29c468: 0xae631050  sw          $v1, 0x1050($s3)
    ctx->pc = 0x29c468u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4176), GPR_U32(ctx, 3));
label_29c46c:
    // 0x29c46c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x29c46cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29c470: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x29c470u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29c474: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x29c474u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29c478: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29c478u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29c47c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29c47cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29c480: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29c480u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29c484: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29c484u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29c488: 0x3e00008  jr          $ra
    ctx->pc = 0x29C488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C48Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C488u;
            // 0x29c48c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29C490u;
}
