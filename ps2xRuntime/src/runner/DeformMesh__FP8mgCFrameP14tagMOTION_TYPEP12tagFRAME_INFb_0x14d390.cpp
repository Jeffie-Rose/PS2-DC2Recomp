#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DeformMesh__FP8mgCFrameP14tagMOTION_TYPEP12tagFRAME_INFb
// Address: 0x14d390 - 0x14d42c
void DeformMesh__FP8mgCFrameP14tagMOTION_TYPEP12tagFRAME_INFb_0x14d390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DeformMesh__FP8mgCFrameP14tagMOTION_TYPEP12tagFRAME_INFb_0x14d390");
#endif

    switch (ctx->pc) {
        case 0x14d3c0u: goto label_14d3c0;
        case 0x14d3d4u: goto label_14d3d4;
        case 0x14d3f0u: goto label_14d3f0;
        case 0x14d404u: goto label_14d404;
        default: break;
    }

    ctx->pc = 0x14d390u;

    // 0x14d390: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14d390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14d394: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x14d394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x14d398: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14d398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14d39c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14d39cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14d3a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14d3a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d3a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14d3a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14d3a8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x14d3a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d3ac: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x14d3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x14d3b0: 0x10e0000d  beqz        $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x14D3B0u;
    {
        const bool branch_taken_0x14d3b0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D3B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D3B0u;
            // 0x14d3b4: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d3b0) {
            ctx->pc = 0x14D3E8u;
            goto label_14d3e8;
        }
    }
    ctx->pc = 0x14D3B8u;
    // 0x14d3b8: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x14D3B8u;
    {
        const bool branch_taken_0x14d3b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d3b8) {
            ctx->pc = 0x14D410u;
            goto label_14d410;
        }
    }
    ctx->pc = 0x14D3C0u;
label_14d3c0:
    // 0x14d3c0: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x14d3c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d3c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14d3c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d3c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14d3c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d3cc: 0xc0533b8  jal         func_14CEE0
    ctx->pc = 0x14D3CCu;
    SET_GPR_U32(ctx, 31, 0x14D3D4u);
    ctx->pc = 0x14D3D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D3CCu;
            // 0x14d3d0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14CEE0u;
    if (runtime->hasFunction(0x14CEE0u)) {
        auto targetFn = runtime->lookupFunction(0x14CEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D3D4u; }
        if (ctx->pc != 0x14D3D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MotionProc3__FP8mgCFrameP14tagMOTION_TYPEP12tagFRAME_INFP8Mot_List_0x14cee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D3D4u; }
        if (ctx->pc != 0x14D3D4u) { return; }
    }
    ctx->pc = 0x14D3D4u;
label_14d3d4:
    // 0x14d3d4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x14d3d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d3d8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x14D3D8u;
    {
        const bool branch_taken_0x14d3d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d3d8) {
            ctx->pc = 0x14D3C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14d3c0;
        }
    }
    ctx->pc = 0x14D3E0u;
    // 0x14d3e0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x14D3E0u;
    {
        const bool branch_taken_0x14d3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d3e0) {
            ctx->pc = 0x14D410u;
            goto label_14d410;
        }
    }
    ctx->pc = 0x14D3E8u;
label_14d3e8:
    // 0x14d3e8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x14D3E8u;
    {
        const bool branch_taken_0x14d3e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d3e8) {
            ctx->pc = 0x14D410u;
            goto label_14d410;
        }
    }
    ctx->pc = 0x14D3F0u;
label_14d3f0:
    // 0x14d3f0: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x14d3f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d3f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14d3f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d3f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14d3f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d3fc: 0xc0532d8  jal         func_14CB60
    ctx->pc = 0x14D3FCu;
    SET_GPR_U32(ctx, 31, 0x14D404u);
    ctx->pc = 0x14D400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D3FCu;
            // 0x14d400: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14CB60u;
    if (runtime->hasFunction(0x14CB60u)) {
        auto targetFn = runtime->lookupFunction(0x14CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D404u; }
        if (ctx->pc != 0x14D404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MotionProc2__FP8mgCFrameP14tagMOTION_TYPEP12tagFRAME_INFP8Mot_List_0x14cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D404u; }
        if (ctx->pc != 0x14D404u) { return; }
    }
    ctx->pc = 0x14D404u;
label_14d404:
    // 0x14d404: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x14d404u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d408: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x14D408u;
    {
        const bool branch_taken_0x14d408 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d408) {
            ctx->pc = 0x14D3F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14d3f0;
        }
    }
    ctx->pc = 0x14D410u;
label_14d410:
    // 0x14d410: 0xaf8088dc  sw          $zero, -0x7724($gp)
    ctx->pc = 0x14d410u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936796), GPR_U32(ctx, 0));
    // 0x14d414: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x14d414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14d418: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14d418u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14d41c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14d41cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14d420: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14d420u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d424: 0x3e00008  jr          $ra
    ctx->pc = 0x14D424u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D424u;
            // 0x14d428: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14D42Cu;
}
