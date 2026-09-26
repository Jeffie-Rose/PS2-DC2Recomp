#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadFontTblBin__Fv
// Address: 0x2d4340 - 0x2d43c0
void LoadFontTblBin__Fv_0x2d4340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadFontTblBin__Fv_0x2d4340");
#endif

    switch (ctx->pc) {
        case 0x2d436cu: goto label_2d436c;
        case 0x2d4380u: goto label_2d4380;
        case 0x2d4394u: goto label_2d4394;
        case 0x2d43b0u: goto label_2d43b0;
        default: break;
    }

    ctx->pc = 0x2d4340u;

    // 0x2d4340: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d4340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d4344: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d4344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d4348: 0x8f868ad0  lw          $a2, -0x7530($gp)
    ctx->pc = 0x2d4348u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x2d434c: 0x14c00009  bnez        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D434Cu;
    {
        const bool branch_taken_0x2d434c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D4350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D434Cu;
            // 0x2d4350: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d434c) {
            ctx->pc = 0x2D4374u;
            goto label_2d4374;
        }
    }
    ctx->pc = 0x2D4354u;
    // 0x2d4354: 0x3c0501f1  lui         $a1, 0x1F1
    ctx->pc = 0x2d4354u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)497 << 16));
    // 0x2d4358: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d4358u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d435c: 0x24a55880  addiu       $a1, $a1, 0x5880
    ctx->pc = 0x2d435cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22656));
    // 0x2d4360: 0x248406f0  addiu       $a0, $a0, 0x6F0
    ctx->pc = 0x2d4360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1776));
    // 0x2d4364: 0xc0524c8  jal         func_149320
    ctx->pc = 0x2D4364u;
    SET_GPR_U32(ctx, 31, 0x2D436Cu);
    ctx->pc = 0x2D4368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4364u;
            // 0x2d4368: 0x27a6003c  addiu       $a2, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149320u;
    if (runtime->hasFunction(0x149320u)) {
        auto targetFn = runtime->lookupFunction(0x149320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D436Cu; }
        if (ctx->pc != 0x2D436Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile__FPcPvPi_0x149320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D436Cu; }
        if (ctx->pc != 0x2D436Cu) { return; }
    }
    ctx->pc = 0x2D436Cu;
label_2d436c:
    // 0x2d436c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2D436Cu;
    {
        const bool branch_taken_0x2d436c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D436Cu;
            // 0x2d4370: 0x8fa2003c  lw          $v0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d436c) {
            ctx->pc = 0x2D4398u;
            goto label_2d4398;
        }
    }
    ctx->pc = 0x2D4374u;
label_2d4374:
    // 0x2d4374: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2d4374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d4378: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2D4378u;
    SET_GPR_U32(ctx, 31, 0x2D4380u);
    ctx->pc = 0x2D437Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4378u;
            // 0x2d437c: 0x24a50710  addiu       $a1, $a1, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4380u; }
        if (ctx->pc != 0x2D4380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4380u; }
        if (ctx->pc != 0x2D4380u) { return; }
    }
    ctx->pc = 0x2D4380u;
label_2d4380:
    // 0x2d4380: 0x3c0501f1  lui         $a1, 0x1F1
    ctx->pc = 0x2d4380u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)497 << 16));
    // 0x2d4384: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2d4384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d4388: 0x24a55880  addiu       $a1, $a1, 0x5880
    ctx->pc = 0x2d4388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22656));
    // 0x2d438c: 0xc0524c8  jal         func_149320
    ctx->pc = 0x2D438Cu;
    SET_GPR_U32(ctx, 31, 0x2D4394u);
    ctx->pc = 0x2D4390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D438Cu;
            // 0x2d4390: 0x27a6003c  addiu       $a2, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149320u;
    if (runtime->hasFunction(0x149320u)) {
        auto targetFn = runtime->lookupFunction(0x149320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4394u; }
        if (ctx->pc != 0x2D4394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile__FPcPvPi_0x149320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4394u; }
        if (ctx->pc != 0x2D4394u) { return; }
    }
    ctx->pc = 0x2D4394u;
label_2d4394:
    // 0x2d4394: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x2d4394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_2d4398:
    // 0x2d4398: 0x28411001  slti        $at, $v0, 0x1001
    ctx->pc = 0x2d4398u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4097) ? 1 : 0);
    // 0x2d439c: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D439Cu;
    {
        const bool branch_taken_0x2d439c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D43A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D439Cu;
            // 0x2d43a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d439c) {
            ctx->pc = 0x2D43B4u;
            goto label_2d43b4;
        }
    }
    ctx->pc = 0x2D43A4u;
    // 0x2d43a4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d43a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d43a8: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x2D43A8u;
    SET_GPR_U32(ctx, 31, 0x2D43B0u);
    ctx->pc = 0x2D43ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D43A8u;
            // 0x2d43ac: 0x24840730  addiu       $a0, $a0, 0x730 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1840));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D43B0u; }
        if (ctx->pc != 0x2D43B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D43B0u; }
        if (ctx->pc != 0x2D43B0u) { return; }
    }
    ctx->pc = 0x2D43B0u;
label_2d43b0:
    // 0x2d43b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d43b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d43b4:
    // 0x2d43b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d43b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d43b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D43B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D43BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D43B8u;
            // 0x2d43bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D43C0u;
}
