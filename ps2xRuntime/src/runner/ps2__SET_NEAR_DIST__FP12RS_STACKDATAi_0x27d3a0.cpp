#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_NEAR_DIST__FP12RS_STACKDATAi
// Address: 0x27d3a0 - 0x27d420
void ps2__SET_NEAR_DIST__FP12RS_STACKDATAi_0x27d3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_NEAR_DIST__FP12RS_STACKDATAi_0x27d3a0");
#endif

    switch (ctx->pc) {
        case 0x27d3a0u: goto label_27d3a0;
        case 0x27d3a4u: goto label_27d3a4;
        case 0x27d3a8u: goto label_27d3a8;
        case 0x27d3acu: goto label_27d3ac;
        case 0x27d3b0u: goto label_27d3b0;
        case 0x27d3b4u: goto label_27d3b4;
        case 0x27d3b8u: goto label_27d3b8;
        case 0x27d3bcu: goto label_27d3bc;
        case 0x27d3c0u: goto label_27d3c0;
        case 0x27d3c4u: goto label_27d3c4;
        case 0x27d3c8u: goto label_27d3c8;
        case 0x27d3ccu: goto label_27d3cc;
        case 0x27d3d0u: goto label_27d3d0;
        case 0x27d3d4u: goto label_27d3d4;
        case 0x27d3d8u: goto label_27d3d8;
        case 0x27d3dcu: goto label_27d3dc;
        case 0x27d3e0u: goto label_27d3e0;
        case 0x27d3e4u: goto label_27d3e4;
        case 0x27d3e8u: goto label_27d3e8;
        case 0x27d3ecu: goto label_27d3ec;
        case 0x27d3f0u: goto label_27d3f0;
        case 0x27d3f4u: goto label_27d3f4;
        case 0x27d3f8u: goto label_27d3f8;
        case 0x27d3fcu: goto label_27d3fc;
        case 0x27d400u: goto label_27d400;
        case 0x27d404u: goto label_27d404;
        case 0x27d408u: goto label_27d408;
        case 0x27d40cu: goto label_27d40c;
        case 0x27d410u: goto label_27d410;
        case 0x27d414u: goto label_27d414;
        case 0x27d418u: goto label_27d418;
        case 0x27d41cu: goto label_27d41c;
        default: break;
    }

    ctx->pc = 0x27d3a0u;

label_27d3a0:
    // 0x27d3a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27d3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_27d3a4:
    // 0x27d3a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x27d3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_27d3a8:
    // 0x27d3a8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27d3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_27d3ac:
    // 0x27d3ac: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x27d3acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_27d3b0:
    // 0x27d3b0: 0xc097e18  jal         func_25F860
label_27d3b4:
    if (ctx->pc == 0x27D3B4u) {
        ctx->pc = 0x27D3B4u;
            // 0x27d3b4: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x27D3B8u;
        goto label_27d3b8;
    }
    ctx->pc = 0x27D3B0u;
    SET_GPR_U32(ctx, 31, 0x27D3B8u);
    ctx->pc = 0x27D3B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D3B0u;
            // 0x27d3b4: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D3B8u; }
        if (ctx->pc != 0x27D3B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D3B8u; }
        if (ctx->pc != 0x27D3B8u) { return; }
    }
    ctx->pc = 0x27D3B8u;
label_27d3b8:
    // 0x27d3b8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x27d3b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27d3bc:
    // 0x27d3bc: 0xc097e28  jal         func_25F8A0
label_27d3c0:
    if (ctx->pc == 0x27D3C0u) {
        ctx->pc = 0x27D3C0u;
            // 0x27d3c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27D3C4u;
        goto label_27d3c4;
    }
    ctx->pc = 0x27D3BCu;
    SET_GPR_U32(ctx, 31, 0x27D3C4u);
    ctx->pc = 0x27D3C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D3BCu;
            // 0x27d3c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D3C4u; }
        if (ctx->pc != 0x27D3C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D3C4u; }
        if (ctx->pc != 0x27D3C4u) { return; }
    }
    ctx->pc = 0x27D3C4u;
label_27d3c4:
    // 0x27d3c4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x27d3c4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_27d3c8:
    // 0x27d3c8: 0xc0956d4  jal         func_255B50
label_27d3cc:
    if (ctx->pc == 0x27D3CCu) {
        ctx->pc = 0x27D3CCu;
            // 0x27d3cc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27D3D0u;
        goto label_27d3d0;
    }
    ctx->pc = 0x27D3C8u;
    SET_GPR_U32(ctx, 31, 0x27D3D0u);
    ctx->pc = 0x27D3CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D3C8u;
            // 0x27d3cc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x255B50u;
    if (runtime->hasFunction(0x255B50u)) {
        auto targetFn = runtime->lookupFunction(0x255B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D3D0u; }
        if (ctx->pc != 0x27D3D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__Fi_0x255b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D3D0u; }
        if (ctx->pc != 0x27D3D0u) { return; }
    }
    ctx->pc = 0x27D3D0u;
label_27d3d0:
    // 0x27d3d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_27d3d4:
    if (ctx->pc == 0x27D3D4u) {
        ctx->pc = 0x27D3D4u;
            // 0x27d3d4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27D3D8u;
        goto label_27d3d8;
    }
    ctx->pc = 0x27D3D0u;
    {
        const bool branch_taken_0x27d3d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D3D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D3D0u;
            // 0x27d3d4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d3d0) {
            ctx->pc = 0x27D3E0u;
            goto label_27d3e0;
        }
    }
    ctx->pc = 0x27D3D8u;
label_27d3d8:
    // 0x27d3d8: 0x1000000c  b           . + 4 + (0xC << 2)
label_27d3dc:
    if (ctx->pc == 0x27D3DCu) {
        ctx->pc = 0x27D3DCu;
            // 0x27d3dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27D3E0u;
        goto label_27d3e0;
    }
    ctx->pc = 0x27D3D8u;
    {
        const bool branch_taken_0x27d3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D3DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D3D8u;
            // 0x27d3dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d3d8) {
            ctx->pc = 0x27D40Cu;
            goto label_27d40c;
        }
    }
    ctx->pc = 0x27D3E0u;
label_27d3e0:
    // 0x27d3e0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x27d3e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_27d3e4:
    // 0x27d3e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27d3e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27d3e8:
    // 0x27d3e8: 0x8f3900c4  lw          $t9, 0xC4($t9)
    ctx->pc = 0x27d3e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 196)));
label_27d3ec:
    // 0x27d3ec: 0x320f809  jalr        $t9
label_27d3f0:
    if (ctx->pc == 0x27D3F0u) {
        ctx->pc = 0x27D3F0u;
            // 0x27d3f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x27D3F4u;
        goto label_27d3f4;
    }
    ctx->pc = 0x27D3ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27D3F4u);
        ctx->pc = 0x27D3F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D3ECu;
            // 0x27d3f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x27D3F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x27D3F4u; }
            if (ctx->pc != 0x27D3F4u) { return; }
        }
        }
    }
    ctx->pc = 0x27D3F4u;
label_27d3f4:
    // 0x27d3f4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x27d3f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_27d3f8:
    // 0x27d3f8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x27d3f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_27d3fc:
    // 0x27d3fc: 0x8f390064  lw          $t9, 0x64($t9)
    ctx->pc = 0x27d3fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 100)));
label_27d400:
    // 0x27d400: 0x320f809  jalr        $t9
label_27d404:
    if (ctx->pc == 0x27D404u) {
        ctx->pc = 0x27D404u;
            // 0x27d404: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27D408u;
        goto label_27d408;
    }
    ctx->pc = 0x27D400u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27D408u);
        ctx->pc = 0x27D404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D400u;
            // 0x27d404: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x27D408u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x27D408u; }
            if (ctx->pc != 0x27D408u) { return; }
        }
        }
    }
    ctx->pc = 0x27D408u;
label_27d408:
    // 0x27d408: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27d408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27d40c:
    // 0x27d40c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x27d40cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_27d410:
    // 0x27d410: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x27d410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_27d414:
    // 0x27d414: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27d414u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27d418:
    // 0x27d418: 0x3e00008  jr          $ra
label_27d41c:
    if (ctx->pc == 0x27D41Cu) {
        ctx->pc = 0x27D41Cu;
            // 0x27d41c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x27D420u;
        goto label_fallthrough_0x27d418;
    }
    ctx->pc = 0x27D418u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D41Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D418u;
            // 0x27d41c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x27d418:
    ctx->pc = 0x27D420u;
}
