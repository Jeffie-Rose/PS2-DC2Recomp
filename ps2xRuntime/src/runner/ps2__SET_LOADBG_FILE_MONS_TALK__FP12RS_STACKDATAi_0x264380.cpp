#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_LOADBG_FILE_MONS_TALK__FP12RS_STACKDATAi
// Address: 0x264380 - 0x2643e8
void ps2__SET_LOADBG_FILE_MONS_TALK__FP12RS_STACKDATAi_0x264380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_LOADBG_FILE_MONS_TALK__FP12RS_STACKDATAi_0x264380");
#endif

    switch (ctx->pc) {
        case 0x264394u: goto label_264394;
        case 0x2643b0u: goto label_2643b0;
        case 0x2643c0u: goto label_2643c0;
        default: break;
    }

    ctx->pc = 0x264380u;

    // 0x264380: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x264380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x264384: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x264384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x264388: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x264388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26438c: 0xc052330  jal         func_148CC0
    ctx->pc = 0x26438Cu;
    SET_GPR_U32(ctx, 31, 0x264394u);
    ctx->pc = 0x264390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26438Cu;
            // 0x264390: 0x8f908ac0  lw          $s0, -0x7540($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937280)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148CC0u;
    if (runtime->hasFunction(0x148CC0u)) {
        auto targetFn = runtime->lookupFunction(0x148CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264394u; }
        if (ctx->pc != 0x264394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartReadBG__Fv_0x148cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264394u; }
        if (ctx->pc != 0x264394u) { return; }
    }
    ctx->pc = 0x264394u;
label_264394:
    // 0x264394: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x264394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x264398: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x264398u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x26439c: 0x8c26f6e4  lw          $a2, -0x91C($at)
    ctx->pc = 0x26439cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964964)));
    // 0x2643a0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2643a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2643a4: 0x8f878ad0  lw          $a3, -0x7530($gp)
    ctx->pc = 0x2643a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x2643a8: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2643A8u;
    SET_GPR_U32(ctx, 31, 0x2643B0u);
    ctx->pc = 0x2643ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2643A8u;
            // 0x2643ac: 0x24a5c710  addiu       $a1, $a1, -0x38F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2643B0u; }
        if (ctx->pc != 0x2643B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2643B0u; }
        if (ctx->pc != 0x2643B0u) { return; }
    }
    ctx->pc = 0x2643B0u;
label_2643b0:
    // 0x2643b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2643b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2643b4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2643b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2643b8: 0xc05224c  jal         func_148930
    ctx->pc = 0x2643B8u;
    SET_GPR_U32(ctx, 31, 0x2643C0u);
    ctx->pc = 0x2643BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2643B8u;
            // 0x2643bc: 0x27a600ac  addiu       $a2, $sp, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148930u;
    if (runtime->hasFunction(0x148930u)) {
        auto targetFn = runtime->lookupFunction(0x148930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2643C0u; }
        if (ctx->pc != 0x2643C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileBG__FPcP1Pi_0x148930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2643C0u; }
        if (ctx->pc != 0x2643C0u) { return; }
    }
    ctx->pc = 0x2643C0u;
label_2643c0:
    // 0x2643c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2643C0u;
    {
        const bool branch_taken_0x2643c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2643C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2643C0u;
            // 0x2643c4: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2643c0) {
            ctx->pc = 0x2643D0u;
            goto label_2643d0;
        }
    }
    ctx->pc = 0x2643C8u;
    // 0x2643c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2643C8u;
    {
        const bool branch_taken_0x2643c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2643CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2643C8u;
            // 0x2643cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2643c8) {
            ctx->pc = 0x2643D8u;
            goto label_2643d8;
        }
    }
    ctx->pc = 0x2643D0u;
label_2643d0:
    // 0x2643d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2643d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2643d4: 0xac20e624  sw          $zero, -0x19DC($at)
    ctx->pc = 0x2643d4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960676), GPR_U32(ctx, 0));
label_2643d8:
    // 0x2643d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2643d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2643dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2643dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2643e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2643E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2643E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2643E0u;
            // 0x2643e4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2643E8u;
}
