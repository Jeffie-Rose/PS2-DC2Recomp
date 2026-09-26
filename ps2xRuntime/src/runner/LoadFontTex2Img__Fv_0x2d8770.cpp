#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadFontTex2Img__Fv
// Address: 0x2d8770 - 0x2d87e0
void LoadFontTex2Img__Fv_0x2d8770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadFontTex2Img__Fv_0x2d8770");
#endif

    switch (ctx->pc) {
        case 0x2d87a0u: goto label_2d87a0;
        case 0x2d87b4u: goto label_2d87b4;
        case 0x2d87c8u: goto label_2d87c8;
        default: break;
    }

    ctx->pc = 0x2d8770u;

    // 0x2d8770: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d8770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d8774: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d8774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d8778: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d8778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d877c: 0x8f868ad0  lw          $a2, -0x7530($gp)
    ctx->pc = 0x2d877cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x2d8780: 0x14c00009  bnez        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D8780u;
    {
        const bool branch_taken_0x2d8780 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8780u;
            // 0x2d8784: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8780) {
            ctx->pc = 0x2D87A8u;
            goto label_2d87a8;
        }
    }
    ctx->pc = 0x2D8788u;
    // 0x2d8788: 0x3c0501f3  lui         $a1, 0x1F3
    ctx->pc = 0x2d8788u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)499 << 16));
    // 0x2d878c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d878cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d8790: 0x24a580b0  addiu       $a1, $a1, -0x7F50
    ctx->pc = 0x2d8790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934704));
    // 0x2d8794: 0x24840a20  addiu       $a0, $a0, 0xA20
    ctx->pc = 0x2d8794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2592));
    // 0x2d8798: 0xc0524c8  jal         func_149320
    ctx->pc = 0x2D8798u;
    SET_GPR_U32(ctx, 31, 0x2D87A0u);
    ctx->pc = 0x2D879Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8798u;
            // 0x2d879c: 0x27a6004c  addiu       $a2, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149320u;
    if (runtime->hasFunction(0x149320u)) {
        auto targetFn = runtime->lookupFunction(0x149320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D87A0u; }
        if (ctx->pc != 0x2D87A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile__FPcPvPi_0x149320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D87A0u; }
        if (ctx->pc != 0x2D87A0u) { return; }
    }
    ctx->pc = 0x2D87A0u;
label_2d87a0:
    // 0x2d87a0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2D87A0u;
    {
        const bool branch_taken_0x2d87a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D87A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D87A0u;
            // 0x2d87a4: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d87a0) {
            ctx->pc = 0x2D87CCu;
            goto label_2d87cc;
        }
    }
    ctx->pc = 0x2D87A8u;
label_2d87a8:
    // 0x2d87a8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2d87a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d87ac: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2D87ACu;
    SET_GPR_U32(ctx, 31, 0x2D87B4u);
    ctx->pc = 0x2D87B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D87ACu;
            // 0x2d87b0: 0x24a50a40  addiu       $a1, $a1, 0xA40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D87B4u; }
        if (ctx->pc != 0x2D87B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D87B4u; }
        if (ctx->pc != 0x2D87B4u) { return; }
    }
    ctx->pc = 0x2D87B4u;
label_2d87b4:
    // 0x2d87b4: 0x3c0501f3  lui         $a1, 0x1F3
    ctx->pc = 0x2d87b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)499 << 16));
    // 0x2d87b8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2d87b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d87bc: 0x24a580b0  addiu       $a1, $a1, -0x7F50
    ctx->pc = 0x2d87bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934704));
    // 0x2d87c0: 0xc0524c8  jal         func_149320
    ctx->pc = 0x2D87C0u;
    SET_GPR_U32(ctx, 31, 0x2D87C8u);
    ctx->pc = 0x2D87C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D87C0u;
            // 0x2d87c4: 0x27a6004c  addiu       $a2, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149320u;
    if (runtime->hasFunction(0x149320u)) {
        auto targetFn = runtime->lookupFunction(0x149320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D87C8u; }
        if (ctx->pc != 0x2D87C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile__FPcPvPi_0x149320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D87C8u; }
        if (ctx->pc != 0x2D87C8u) { return; }
    }
    ctx->pc = 0x2D87C8u;
label_2d87c8:
    // 0x2d87c8: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x2d87c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_2d87cc:
    // 0x2d87cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d87ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d87d0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2d87d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2d87d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d87d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d87d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D87D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D87DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D87D8u;
            // 0x2d87dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D87E0u;
}
