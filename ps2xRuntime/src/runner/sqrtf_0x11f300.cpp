#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sqrtf
// Address: 0x11f300 - 0x11f414
void sqrtf_0x11f300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sqrtf_0x11f300");
#endif

    switch (ctx->pc) {
        case 0x11f324u: goto label_11f324;
        case 0x11f33cu: goto label_11f33c;
        case 0x11f374u: goto label_11f374;
        case 0x11f3b0u: goto label_11f3b0;
        case 0x11f3c0u: goto label_11f3c0;
        case 0x11f3dcu: goto label_11f3dc;
        case 0x11f3ecu: goto label_11f3ec;
        default: break;
    }

    ctx->pc = 0x11f300u;

    // 0x11f300: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x11f300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x11f304: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x11f304u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x11f308: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x11f308u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x11f30c: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x11f30cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x11f310: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x11f310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x11f314: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x11f314u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x11f318: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x11f318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x11f31c: 0xc046db0  jal         func_11B6C0
    ctx->pc = 0x11F31Cu;
    SET_GPR_U32(ctx, 31, 0x11F324u);
    ctx->pc = 0x11F320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F31Cu;
            // 0x11f320: 0x3c110036  lui         $s1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B6C0u;
    if (runtime->hasFunction(0x11B6C0u)) {
        auto targetFn = runtime->lookupFunction(0x11B6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F324u; }
        if (ctx->pc != 0x11F324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ieee754_sqrtf_0x11b6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F324u; }
        if (ctx->pc != 0x11F324u) { return; }
    }
    ctx->pc = 0x11F324u;
label_11f324:
    // 0x11f324: 0x8e301930  lw          $s0, 0x1930($s1)
    ctx->pc = 0x11f324u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6448)));
    // 0x11f328: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11f328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11f32c: 0x12020031  beq         $s0, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x11F32Cu;
    {
        const bool branch_taken_0x11f32c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x11F330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F32Cu;
            // 0x11f330: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f32c) {
            ctx->pc = 0x11F3F4u;
            goto label_11f3f4;
        }
    }
    ctx->pc = 0x11F334u;
    // 0x11f334: 0xc0479e0  jal         func_11E780
    ctx->pc = 0x11F334u;
    SET_GPR_U32(ctx, 31, 0x11F33Cu);
    ctx->pc = 0x11F338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F334u;
            // 0x11f338: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E780u;
    if (runtime->hasFunction(0x11E780u)) {
        auto targetFn = runtime->lookupFunction(0x11E780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F33Cu; }
        if (ctx->pc != 0x11F33Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        isnanf_0x11e780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F33Cu; }
        if (ctx->pc != 0x11F33Cu) { return; }
    }
    ctx->pc = 0x11F33Cu;
label_11f33c:
    // 0x11f33c: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x11F33Cu;
    {
        const bool branch_taken_0x11f33c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F33Cu;
            // 0x11f340: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f33c) {
            ctx->pc = 0x11F3F8u;
            goto label_11f3f8;
        }
    }
    ctx->pc = 0x11F344u;
    // 0x11f344: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11f344u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11f348: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x11f348u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11f34c: 0x0  nop
    ctx->pc = 0x11f34cu;
    // NOP
    // 0x11f350: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x11F350u;
    {
        const bool branch_taken_0x11f350 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11F354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F350u;
            // 0x11f354: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f350) {
            ctx->pc = 0x11F3F4u;
            goto label_11f3f4;
        }
    }
    ctx->pc = 0x11F358u;
    // 0x11f358: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11f358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11f35c: 0x24421a18  addiu       $v0, $v0, 0x1A18
    ctx->pc = 0x11f35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6680));
    // 0x11f360: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x11f360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x11f364: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x11f364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x11f368: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11f368u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11f36c: 0xc0a24f0  jal         func_2893C0
    ctx->pc = 0x11F36Cu;
    SET_GPR_U32(ctx, 31, 0x11F374u);
    ctx->pc = 0x11F370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F36Cu;
            // 0x11f370: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F374u; }
        if (ctx->pc != 0x11F374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F374u; }
        if (ctx->pc != 0x11F374u) { return; }
    }
    ctx->pc = 0x11F374u;
label_11f374:
    // 0x11f374: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x11f374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x11f378: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11F378u;
    {
        const bool branch_taken_0x11f378 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F37Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F378u;
            // 0x11f37c: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f378) {
            ctx->pc = 0x11F38Cu;
            goto label_11f38c;
        }
    }
    ctx->pc = 0x11F380u;
    // 0x11f380: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11f380u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f384: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11F384u;
    {
        const bool branch_taken_0x11f384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F384u;
            // 0x11f388: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f384) {
            ctx->pc = 0x11F398u;
            goto label_11f398;
        }
    }
    ctx->pc = 0x11F38Cu;
label_11f38c:
    // 0x11f38c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x11f38cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x11f390: 0xdc431a20  ld          $v1, 0x1A20($v0)
    ctx->pc = 0x11f390u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 6688)));
    // 0x11f394: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x11f394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_11f398:
    // 0x11f398: 0x8e231930  lw          $v1, 0x1930($s1)
    ctx->pc = 0x11f398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6448)));
    // 0x11f39c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x11f39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11f3a0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11F3A0u;
    {
        const bool branch_taken_0x11f3a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x11f3a0) {
            ctx->pc = 0x11F3B8u;
            goto label_11f3b8;
        }
    }
    ctx->pc = 0x11F3A8u;
    // 0x11f3a8: 0xc047778  jal         func_11DDE0
    ctx->pc = 0x11F3A8u;
    SET_GPR_U32(ctx, 31, 0x11F3B0u);
    ctx->pc = 0x11F3ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F3A8u;
            // 0x11f3ac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DDE0u;
    if (runtime->hasFunction(0x11DDE0u)) {
        auto targetFn = runtime->lookupFunction(0x11DDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F3B0u; }
        if (ctx->pc != 0x11F3B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        matherr_0x11dde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F3B0u; }
        if (ctx->pc != 0x11F3B0u) { return; }
    }
    ctx->pc = 0x11F3B0u;
label_11f3b0:
    // 0x11f3b0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11F3B0u;
    {
        const bool branch_taken_0x11f3b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F3B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F3B0u;
            // 0x11f3b4: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f3b0) {
            ctx->pc = 0x11F3CCu;
            goto label_11f3cc;
        }
    }
    ctx->pc = 0x11F3B8u;
label_11f3b8:
    // 0x11f3b8: 0xc04950a  jal         func_125428
    ctx->pc = 0x11F3B8u;
    SET_GPR_U32(ctx, 31, 0x11F3C0u);
    ctx->pc = 0x125428u;
    if (runtime->hasFunction(0x125428u)) {
        auto targetFn = runtime->lookupFunction(0x125428u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F3C0u; }
        if (ctx->pc != 0x11F3C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___errno_0x125428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F3C0u; }
        if (ctx->pc != 0x11F3C0u) { return; }
    }
    ctx->pc = 0x11F3C0u;
label_11f3c0:
    // 0x11f3c0: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x11f3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x11f3c4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x11f3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x11f3c8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x11f3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_11f3cc:
    // 0x11f3cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11F3CCu;
    {
        const bool branch_taken_0x11f3cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f3cc) {
            ctx->pc = 0x11F3E4u;
            goto label_11f3e4;
        }
    }
    ctx->pc = 0x11F3D4u;
    // 0x11f3d4: 0xc04950a  jal         func_125428
    ctx->pc = 0x11F3D4u;
    SET_GPR_U32(ctx, 31, 0x11F3DCu);
    ctx->pc = 0x125428u;
    if (runtime->hasFunction(0x125428u)) {
        auto targetFn = runtime->lookupFunction(0x125428u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F3DCu; }
        if (ctx->pc != 0x11F3DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___errno_0x125428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F3DCu; }
        if (ctx->pc != 0x11F3DCu) { return; }
    }
    ctx->pc = 0x11F3DCu;
label_11f3dc:
    // 0x11f3dc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x11f3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11f3e0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x11f3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_11f3e4:
    // 0x11f3e4: 0xc0a21f2  jal         func_2887C8
    ctx->pc = 0x11F3E4u;
    SET_GPR_U32(ctx, 31, 0x11F3ECu);
    ctx->pc = 0x11F3E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F3E4u;
            // 0x11f3e8: 0xdfa40018  ld          $a0, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2887C8u;
    if (runtime->hasFunction(0x2887C8u)) {
        auto targetFn = runtime->lookupFunction(0x2887C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F3ECu; }
        if (ctx->pc != 0x11F3ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2887c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F3ECu; }
        if (ctx->pc != 0x11F3ECu) { return; }
    }
    ctx->pc = 0x11F3ECu;
label_11f3ec:
    // 0x11f3ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11F3ECu;
    {
        const bool branch_taken_0x11f3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F3F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F3ECu;
            // 0x11f3f0: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f3ec) {
            ctx->pc = 0x11F3FCu;
            goto label_11f3fc;
        }
    }
    ctx->pc = 0x11F3F4u;
label_11f3f4:
    // 0x11f3f4: 0x4600a806  mov.s       $f0, $f21
    ctx->pc = 0x11f3f4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[21]);
label_11f3f8:
    // 0x11f3f8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x11f3f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_11f3fc:
    // 0x11f3fc: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x11f3fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11f400: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x11f400u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11f404: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x11f404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x11f408: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x11f408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11f40c: 0x3e00008  jr          $ra
    ctx->pc = 0x11F40Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F40Cu;
            // 0x11f410: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11F414u;
}
