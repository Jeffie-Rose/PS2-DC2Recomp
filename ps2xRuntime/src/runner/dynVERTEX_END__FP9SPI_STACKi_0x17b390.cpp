#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: dynVERTEX_END__FP9SPI_STACKi
// Address: 0x17b390 - 0x17b410
void dynVERTEX_END__FP9SPI_STACKi_0x17b390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dynVERTEX_END__FP9SPI_STACKi_0x17b390");
#endif

    switch (ctx->pc) {
        case 0x17b3b4u: goto label_17b3b4;
        case 0x17b3c4u: goto label_17b3c4;
        case 0x17b3d4u: goto label_17b3d4;
        case 0x17b3e4u: goto label_17b3e4;
        default: break;
    }

    ctx->pc = 0x17b390u;

    // 0x17b390: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17b390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17b394: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17b394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17b398: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17b398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17b39c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17b39cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17b3a0: 0x8f828a10  lw          $v0, -0x75F0($gp)
    ctx->pc = 0x17b3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937104)));
    // 0x17b3a4: 0x8c510010  lw          $s1, 0x10($v0)
    ctx->pc = 0x17b3a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x17b3a8: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x17b3a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x17b3ac: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x17B3ACu;
    {
        const bool branch_taken_0x17b3ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B3B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B3ACu;
            // 0x17b3b0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b3ac) {
            ctx->pc = 0x17B3F4u;
            goto label_17b3f4;
        }
    }
    ctx->pc = 0x17B3B4u;
label_17b3b4:
    // 0x17b3b4: 0x8f848a10  lw          $a0, -0x75F0($gp)
    ctx->pc = 0x17b3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937104)));
    // 0x17b3b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17b3b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b3bc: 0xc05ea80  jal         func_17AA00
    ctx->pc = 0x17B3BCu;
    SET_GPR_U32(ctx, 31, 0x17B3C4u);
    ctx->pc = 0x17B3C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B3BCu;
            // 0x17b3c0: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17AA00u;
    if (runtime->hasFunction(0x17AA00u)) {
        auto targetFn = runtime->lookupFunction(0x17AA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B3C4u; }
        if (ctx->pc != 0x17B3C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetInitVertex__13CDynamicAnimeFiPf_0x17aa00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B3C4u; }
        if (ctx->pc != 0x17B3C4u) { return; }
    }
    ctx->pc = 0x17B3C4u;
label_17b3c4:
    // 0x17b3c4: 0x8f848a10  lw          $a0, -0x75F0($gp)
    ctx->pc = 0x17b3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937104)));
    // 0x17b3c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17b3c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b3cc: 0xc05eab0  jal         func_17AAC0
    ctx->pc = 0x17B3CCu;
    SET_GPR_U32(ctx, 31, 0x17B3D4u);
    ctx->pc = 0x17B3D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B3CCu;
            // 0x17b3d0: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17AAC0u;
    if (runtime->hasFunction(0x17AAC0u)) {
        auto targetFn = runtime->lookupFunction(0x17AAC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B3D4u; }
        if (ctx->pc != 0x17B3D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetOldVertex__13CDynamicAnimeFiPf_0x17aac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B3D4u; }
        if (ctx->pc != 0x17B3D4u) { return; }
    }
    ctx->pc = 0x17B3D4u;
label_17b3d4:
    // 0x17b3d4: 0x8f848a10  lw          $a0, -0x75F0($gp)
    ctx->pc = 0x17b3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937104)));
    // 0x17b3d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17b3d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b3dc: 0xc05ea98  jal         func_17AA60
    ctx->pc = 0x17B3DCu;
    SET_GPR_U32(ctx, 31, 0x17B3E4u);
    ctx->pc = 0x17B3E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B3DCu;
            // 0x17b3e0: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17AA60u;
    if (runtime->hasFunction(0x17AA60u)) {
        auto targetFn = runtime->lookupFunction(0x17AA60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B3E4u; }
        if (ctx->pc != 0x17B3E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNowVertex__13CDynamicAnimeFiPf_0x17aa60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B3E4u; }
        if (ctx->pc != 0x17B3E4u) { return; }
    }
    ctx->pc = 0x17B3E4u;
label_17b3e4:
    // 0x17b3e4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17b3e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17b3e8: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x17b3e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x17b3ec: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x17B3ECu;
    {
        const bool branch_taken_0x17b3ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b3ec) {
            ctx->pc = 0x17B3B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17b3b4;
        }
    }
    ctx->pc = 0x17B3F4u;
label_17b3f4:
    // 0x17b3f4: 0x0  nop
    ctx->pc = 0x17b3f4u;
    // NOP
    // 0x17b3f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17b3f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17b3fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17b3fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b400: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17b400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b404: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17b404u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b408: 0x3e00008  jr          $ra
    ctx->pc = 0x17B408u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B40Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B408u;
            // 0x17b40c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17B410u;
}
