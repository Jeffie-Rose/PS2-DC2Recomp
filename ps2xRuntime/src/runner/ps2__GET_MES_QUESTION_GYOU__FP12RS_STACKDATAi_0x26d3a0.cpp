#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_MES_QUESTION_GYOU__FP12RS_STACKDATAi
// Address: 0x26d3a0 - 0x26d3ec
void ps2__GET_MES_QUESTION_GYOU__FP12RS_STACKDATAi_0x26d3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_MES_QUESTION_GYOU__FP12RS_STACKDATAi_0x26d3a0");
#endif

    switch (ctx->pc) {
        case 0x26d3b4u: goto label_26d3b4;
        case 0x26d3bcu: goto label_26d3bc;
        case 0x26d3d8u: goto label_26d3d8;
        default: break;
    }

    ctx->pc = 0x26d3a0u;

    // 0x26d3a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26d3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26d3a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26d3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26d3a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26d3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26d3ac: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26D3ACu;
    SET_GPR_U32(ctx, 31, 0x26D3B4u);
    ctx->pc = 0x26D3B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D3ACu;
            // 0x26d3b0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D3B4u; }
        if (ctx->pc != 0x26D3B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D3B4u; }
        if (ctx->pc != 0x26D3B4u) { return; }
    }
    ctx->pc = 0x26D3B4u;
label_26d3b4:
    // 0x26d3b4: 0xc09b1b4  jal         func_26C6D0
    ctx->pc = 0x26D3B4u;
    SET_GPR_U32(ctx, 31, 0x26D3BCu);
    ctx->pc = 0x26D3B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D3B4u;
            // 0x26d3b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C6D0u;
    if (runtime->hasFunction(0x26C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x26C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D3BCu; }
        if (ctx->pc != 0x26D3BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMes__Fi_0x26c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D3BCu; }
        if (ctx->pc != 0x26D3BCu) { return; }
    }
    ctx->pc = 0x26D3BCu;
label_26d3bc:
    // 0x26d3bc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26D3BCu;
    {
        const bool branch_taken_0x26d3bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26d3bc) {
            ctx->pc = 0x26D3CCu;
            goto label_26d3cc;
        }
    }
    ctx->pc = 0x26D3C4u;
    // 0x26d3c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x26D3C4u;
    {
        const bool branch_taken_0x26d3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D3C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D3C4u;
            // 0x26d3c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d3c4) {
            ctx->pc = 0x26D3DCu;
            goto label_26d3dc;
        }
    }
    ctx->pc = 0x26D3CCu;
label_26d3cc:
    // 0x26d3cc: 0x8c451b14  lw          $a1, 0x1B14($v0)
    ctx->pc = 0x26d3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6932)));
    // 0x26d3d0: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x26D3D0u;
    SET_GPR_U32(ctx, 31, 0x26D3D8u);
    ctx->pc = 0x26D3D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D3D0u;
            // 0x26d3d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D3D8u; }
        if (ctx->pc != 0x26D3D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D3D8u; }
        if (ctx->pc != 0x26D3D8u) { return; }
    }
    ctx->pc = 0x26D3D8u;
label_26d3d8:
    // 0x26d3d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26d3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26d3dc:
    // 0x26d3dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26d3dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26d3e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26d3e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26d3e4: 0x3e00008  jr          $ra
    ctx->pc = 0x26D3E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26D3E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D3E4u;
            // 0x26d3e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26D3ECu;
}
