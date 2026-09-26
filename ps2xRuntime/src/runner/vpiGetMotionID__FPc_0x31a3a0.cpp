#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: vpiGetMotionID__FPc
// Address: 0x31a3a0 - 0x31a468
void vpiGetMotionID__FPc_0x31a3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("vpiGetMotionID__FPc_0x31a3a0");
#endif

    switch (ctx->pc) {
        case 0x31a3d8u: goto label_31a3d8;
        case 0x31a3f4u: goto label_31a3f4;
        case 0x31a410u: goto label_31a410;
        case 0x31a42cu: goto label_31a42c;
        case 0x31a448u: goto label_31a448;
        default: break;
    }

    ctx->pc = 0x31a3a0u;

    // 0x31a3a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31a3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31a3a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31a3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31a3a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31a3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31a3ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31a3acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a3b0: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31A3B0u;
    {
        const bool branch_taken_0x31a3b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A3B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31A3B0u;
            // 0x31a3b4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a3b0) {
            ctx->pc = 0x31A3C8u;
            goto label_31a3c8;
        }
    }
    ctx->pc = 0x31A3B8u;
    // 0x31a3b8: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x31a3b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31a3bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31A3BCu;
    {
        const bool branch_taken_0x31a3bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31A3C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31A3BCu;
            // 0x31a3c0: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a3bc) {
            ctx->pc = 0x31A3D0u;
            goto label_31a3d0;
        }
    }
    ctx->pc = 0x31A3C4u;
    // 0x31a3c4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x31a3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_31a3c8:
    // 0x31a3c8: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x31A3C8u;
    {
        const bool branch_taken_0x31a3c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A3CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31A3C8u;
            // 0x31a3cc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a3c8) {
            ctx->pc = 0x31A45Cu;
            goto label_31a45c;
        }
    }
    ctx->pc = 0x31A3D0u;
label_31a3d0:
    // 0x31a3d0: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x31A3D0u;
    SET_GPR_U32(ctx, 31, 0x31A3D8u);
    ctx->pc = 0x31A3D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31A3D0u;
            // 0x31a3d4: 0x24a52ac8  addiu       $a1, $a1, 0x2AC8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A3D8u; }
        if (ctx->pc != 0x31A3D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A3D8u; }
        if (ctx->pc != 0x31A3D8u) { return; }
    }
    ctx->pc = 0x31A3D8u;
label_31a3d8:
    // 0x31a3d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31A3D8u;
    {
        const bool branch_taken_0x31a3d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31A3DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31A3D8u;
            // 0x31a3dc: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a3d8) {
            ctx->pc = 0x31A3E8u;
            goto label_31a3e8;
        }
    }
    ctx->pc = 0x31A3E0u;
    // 0x31a3e0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x31A3E0u;
    {
        const bool branch_taken_0x31a3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A3E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31A3E0u;
            // 0x31a3e4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a3e0) {
            ctx->pc = 0x31A458u;
            goto label_31a458;
        }
    }
    ctx->pc = 0x31A3E8u;
label_31a3e8:
    // 0x31a3e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31a3e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a3ec: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x31A3ECu;
    SET_GPR_U32(ctx, 31, 0x31A3F4u);
    ctx->pc = 0x31A3F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31A3ECu;
            // 0x31a3f0: 0x24a52ad0  addiu       $a1, $a1, 0x2AD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A3F4u; }
        if (ctx->pc != 0x31A3F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A3F4u; }
        if (ctx->pc != 0x31A3F4u) { return; }
    }
    ctx->pc = 0x31A3F4u;
label_31a3f4:
    // 0x31a3f4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31A3F4u;
    {
        const bool branch_taken_0x31a3f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31A3F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31A3F4u;
            // 0x31a3f8: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a3f4) {
            ctx->pc = 0x31A404u;
            goto label_31a404;
        }
    }
    ctx->pc = 0x31A3FCu;
    // 0x31a3fc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x31A3FCu;
    {
        const bool branch_taken_0x31a3fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31A3FCu;
            // 0x31a400: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a3fc) {
            ctx->pc = 0x31A458u;
            goto label_31a458;
        }
    }
    ctx->pc = 0x31A404u;
label_31a404:
    // 0x31a404: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31a404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a408: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x31A408u;
    SET_GPR_U32(ctx, 31, 0x31A410u);
    ctx->pc = 0x31A40Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31A408u;
            // 0x31a40c: 0x24a52ad8  addiu       $a1, $a1, 0x2AD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10968));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A410u; }
        if (ctx->pc != 0x31A410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A410u; }
        if (ctx->pc != 0x31A410u) { return; }
    }
    ctx->pc = 0x31A410u;
label_31a410:
    // 0x31a410: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31A410u;
    {
        const bool branch_taken_0x31a410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31A414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31A410u;
            // 0x31a414: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a410) {
            ctx->pc = 0x31A420u;
            goto label_31a420;
        }
    }
    ctx->pc = 0x31A418u;
    // 0x31a418: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x31A418u;
    {
        const bool branch_taken_0x31a418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A41Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31A418u;
            // 0x31a41c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a418) {
            ctx->pc = 0x31A458u;
            goto label_31a458;
        }
    }
    ctx->pc = 0x31A420u;
label_31a420:
    // 0x31a420: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31a420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a424: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x31A424u;
    SET_GPR_U32(ctx, 31, 0x31A42Cu);
    ctx->pc = 0x31A428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31A424u;
            // 0x31a428: 0x24a52ae0  addiu       $a1, $a1, 0x2AE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A42Cu; }
        if (ctx->pc != 0x31A42Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A42Cu; }
        if (ctx->pc != 0x31A42Cu) { return; }
    }
    ctx->pc = 0x31A42Cu;
label_31a42c:
    // 0x31a42c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31A42Cu;
    {
        const bool branch_taken_0x31a42c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31A430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31A42Cu;
            // 0x31a430: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a42c) {
            ctx->pc = 0x31A43Cu;
            goto label_31a43c;
        }
    }
    ctx->pc = 0x31A434u;
    // 0x31a434: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x31A434u;
    {
        const bool branch_taken_0x31a434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31A434u;
            // 0x31a438: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a434) {
            ctx->pc = 0x31A458u;
            goto label_31a458;
        }
    }
    ctx->pc = 0x31A43Cu;
label_31a43c:
    // 0x31a43c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31a43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a440: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x31A440u;
    SET_GPR_U32(ctx, 31, 0x31A448u);
    ctx->pc = 0x31A444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31A440u;
            // 0x31a444: 0x24a52ae8  addiu       $a1, $a1, 0x2AE8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10984));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A448u; }
        if (ctx->pc != 0x31A448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A448u; }
        if (ctx->pc != 0x31A448u) { return; }
    }
    ctx->pc = 0x31A448u;
label_31a448:
    // 0x31a448: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x31a448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31a44c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x31a44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31a450: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x31a450u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3));
    // 0x31a454: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x31a454u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31a458:
    // 0x31a458: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31a458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_31a45c:
    // 0x31a45c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31a45cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31a460: 0x3e00008  jr          $ra
    ctx->pc = 0x31A460u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31A460u;
            // 0x31a464: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31A468u;
}
