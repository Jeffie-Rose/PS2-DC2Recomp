#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __swsetup
// Address: 0x12c368 - 0x12c474
void ps2___swsetup_0x12c368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___swsetup_0x12c368");
#endif

    switch (ctx->pc) {
        case 0x12c3a8u: goto label_12c3a8;
        case 0x12c3f0u: goto label_12c3f0;
        case 0x12c42cu: goto label_12c42c;
        default: break;
    }

    ctx->pc = 0x12c368u;

    // 0x12c368: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12c368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12c36c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12c36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12c370: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12c370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12c374: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12c374u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c378: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x12c378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x12c37c: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x12C37Cu;
    {
        const bool branch_taken_0x12c37c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12c37c) {
            ctx->pc = 0x12C380u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12C37Cu;
            // 0x12c380: 0x8c620038  lw          $v0, 0x38($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12C398u;
            goto label_12c398;
        }
    }
    ctx->pc = 0x12C384u;
    // 0x12c384: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x12c384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x12c388: 0x8c433b84  lw          $v1, 0x3B84($v0)
    ctx->pc = 0x12c388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15236)));
    // 0x12c38c: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x12c38cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x12c390: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x12c390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x12c394: 0x0  nop
    ctx->pc = 0x12c394u;
    // NOP
label_12c398:
    // 0x12c398: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x12C398u;
    {
        const bool branch_taken_0x12c398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12c398) {
            ctx->pc = 0x12C39Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12C398u;
            // 0x12c39c: 0x9603000c  lhu         $v1, 0xC($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12C3ACu;
            goto label_12c3ac;
        }
    }
    ctx->pc = 0x12C3A0u;
    // 0x12c3a0: 0xc0495ee  jal         func_1257B8
    ctx->pc = 0x12C3A0u;
    SET_GPR_U32(ctx, 31, 0x12C3A8u);
    ctx->pc = 0x12C3A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C3A0u;
            // 0x12c3a4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1257B8u;
    if (runtime->hasFunction(0x1257B8u)) {
        auto targetFn = runtime->lookupFunction(0x1257B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C3A8u; }
        if (ctx->pc != 0x12C3A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sinit_0x1257b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C3A8u; }
        if (ctx->pc != 0x12C3A8u) { return; }
    }
    ctx->pc = 0x12C3A8u;
label_12c3a8:
    // 0x12c3a8: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x12c3a8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_12c3ac:
    // 0x12c3ac: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x12c3acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x12c3b0: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x12C3B0u;
    {
        const bool branch_taken_0x12c3b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12c3b0) {
            ctx->pc = 0x12C3B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12C3B0u;
            // 0x12c3b4: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12C41Cu;
            goto label_12c41c;
        }
    }
    ctx->pc = 0x12C3B8u;
    // 0x12c3b8: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x12c3b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x12c3bc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12C3BCu;
    {
        const bool branch_taken_0x12c3bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C3C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C3BCu;
            // 0x12c3c0: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c3bc) {
            ctx->pc = 0x12C3CCu;
            goto label_12c3cc;
        }
    }
    ctx->pc = 0x12C3C4u;
    // 0x12c3c4: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x12C3C4u;
    {
        const bool branch_taken_0x12c3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C3C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C3C4u;
            // 0x12c3c8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c3c4) {
            ctx->pc = 0x12C464u;
            goto label_12c464;
        }
    }
    ctx->pc = 0x12C3CCu;
label_12c3cc:
    // 0x12c3cc: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x12C3CCu;
    {
        const bool branch_taken_0x12c3cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c3cc) {
            ctx->pc = 0x12C3D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12C3CCu;
            // 0x12c3d0: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12C414u;
            goto label_12c414;
        }
    }
    ctx->pc = 0x12C3D4u;
    // 0x12c3d4: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x12c3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x12c3d8: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x12C3D8u;
    {
        const bool branch_taken_0x12c3d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C3DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C3D8u;
            // 0x12c3dc: 0x26020040  addiu       $v0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c3d8) {
            ctx->pc = 0x12C3F8u;
            goto label_12c3f8;
        }
    }
    ctx->pc = 0x12C3E0u;
    // 0x12c3e0: 0x50a20005  beql        $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12C3E0u;
    {
        const bool branch_taken_0x12c3e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x12c3e0) {
            ctx->pc = 0x12C3E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12C3E0u;
            // 0x12c3e4: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12C3F8u;
            goto label_12c3f8;
        }
    }
    ctx->pc = 0x12C3E8u;
    // 0x12c3e8: 0xc049620  jal         func_125880
    ctx->pc = 0x12C3E8u;
    SET_GPR_U32(ctx, 31, 0x12C3F0u);
    ctx->pc = 0x12C3ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C3E8u;
            // 0x12c3ec: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125880u;
    if (runtime->hasFunction(0x125880u)) {
        auto targetFn = runtime->lookupFunction(0x125880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C3F0u; }
        if (ctx->pc != 0x12C3F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _free_r_0x125880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C3F0u; }
        if (ctx->pc != 0x12C3F0u) { return; }
    }
    ctx->pc = 0x12C3F0u;
label_12c3f0:
    // 0x12c3f0: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x12c3f0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x12c3f4: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x12c3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_12c3f8:
    // 0x12c3f8: 0x2402ffdb  addiu       $v0, $zero, -0x25
    ctx->pc = 0x12c3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967259));
    // 0x12c3fc: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x12c3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x12c400: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x12c400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x12c404: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x12c404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x12c408: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12c408u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c40c: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x12c40cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x12c410: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x12c410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_12c414:
    // 0x12c414: 0x34620008  ori         $v0, $v1, 0x8
    ctx->pc = 0x12c414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x12c418: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x12c418u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_12c41c:
    // 0x12c41c: 0x54800004  bnel        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x12C41Cu;
    {
        const bool branch_taken_0x12c41c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x12c41c) {
            ctx->pc = 0x12C420u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12C41Cu;
            // 0x12c420: 0x9603000c  lhu         $v1, 0xC($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12C430u;
            goto label_12c430;
        }
    }
    ctx->pc = 0x12C424u;
    // 0x12c424: 0xc0498d4  jal         func_126350
    ctx->pc = 0x12C424u;
    SET_GPR_U32(ctx, 31, 0x12C42Cu);
    ctx->pc = 0x12C428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C424u;
            // 0x12c428: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126350u;
    if (runtime->hasFunction(0x126350u)) {
        auto targetFn = runtime->lookupFunction(0x126350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C42Cu; }
        if (ctx->pc != 0x12C42Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___smakebuf_0x126350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C42Cu; }
        if (ctx->pc != 0x12C42Cu) { return; }
    }
    ctx->pc = 0x12C42Cu;
label_12c42c:
    // 0x12c42c: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x12c42cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_12c430:
    // 0x12c430: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x12c430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x12c434: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12C434u;
    {
        const bool branch_taken_0x12c434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C434u;
            // 0x12c438: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c434) {
            ctx->pc = 0x12C450u;
            goto label_12c450;
        }
    }
    ctx->pc = 0x12C43Cu;
    // 0x12c43c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x12c43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x12c440: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x12c440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x12c444: 0x21023  negu        $v0, $v0
    ctx->pc = 0x12c444u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x12c448: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x12C448u;
    {
        const bool branch_taken_0x12c448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C44Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C448u;
            // 0x12c44c: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c448) {
            ctx->pc = 0x12C460u;
            goto label_12c460;
        }
    }
    ctx->pc = 0x12C450u;
label_12c450:
    // 0x12c450: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x12C450u;
    {
        const bool branch_taken_0x12c450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C450u;
            // 0x12c454: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c450) {
            ctx->pc = 0x12C45Cu;
            goto label_12c45c;
        }
    }
    ctx->pc = 0x12C458u;
    // 0x12c458: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x12c458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_12c45c:
    // 0x12c45c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x12c45cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_12c460:
    // 0x12c460: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12c460u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12c464:
    // 0x12c464: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12c464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12c468: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12c468u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c46c: 0x3e00008  jr          $ra
    ctx->pc = 0x12C46Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C46Cu;
            // 0x12c470: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12C474u;
}
