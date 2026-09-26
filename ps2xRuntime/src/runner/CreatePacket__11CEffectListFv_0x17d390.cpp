#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreatePacket__11CEffectListFv
// Address: 0x17d390 - 0x17d40c
void CreatePacket__11CEffectListFv_0x17d390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreatePacket__11CEffectListFv_0x17d390");
#endif

    switch (ctx->pc) {
        case 0x17d3bcu: goto label_17d3bc;
        case 0x17d3d0u: goto label_17d3d0;
        default: break;
    }

    ctx->pc = 0x17d390u;

    // 0x17d390: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17d390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17d394: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x17d394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x17d398: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17d398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17d39c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17d39cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17d3a0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x17d3a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d3a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17d3a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17d3a8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x17d3a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d3ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17d3acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17d3b0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x17d3b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d3b4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x17D3B4u;
    {
        const bool branch_taken_0x17d3b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D3B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D3B4u;
            // 0x17d3b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d3b4) {
            ctx->pc = 0x17D3DCu;
            goto label_17d3dc;
        }
    }
    ctx->pc = 0x17D3BCu;
label_17d3bc:
    // 0x17d3bc: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x17d3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x17d3c0: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x17d3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x17d3c4: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x17d3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x17d3c8: 0xc05f504  jal         func_17D410
    ctx->pc = 0x17D3C8u;
    SET_GPR_U32(ctx, 31, 0x17D3D0u);
    ctx->pc = 0x17D3CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D3C8u;
            // 0x17d3cc: 0x522821  addu        $a1, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D410u;
    if (runtime->hasFunction(0x17D410u)) {
        auto targetFn = runtime->lookupFunction(0x17D410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D3D0u; }
        if (ctx->pc != 0x17D3D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePacket__14CEffectManagerFP11mgC3DSprite_0x17d410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D3D0u; }
        if (ctx->pc != 0x17D3D0u) { return; }
    }
    ctx->pc = 0x17D3D0u;
label_17d3d0:
    // 0x17d3d0: 0x26520050  addiu       $s2, $s2, 0x50
    ctx->pc = 0x17d3d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x17d3d4: 0x26730184  addiu       $s3, $s3, 0x184
    ctx->pc = 0x17d3d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 388));
    // 0x17d3d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x17d3d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_17d3dc:
    // 0x17d3dc: 0x0  nop
    ctx->pc = 0x17d3dcu;
    // NOP
    // 0x17d3e0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x17d3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x17d3e4: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x17d3e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x17d3e8: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x17D3E8u;
    {
        const bool branch_taken_0x17d3e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17d3e8) {
            ctx->pc = 0x17D3BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17d3bc;
        }
    }
    ctx->pc = 0x17D3F0u;
    // 0x17d3f0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x17d3f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17d3f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17d3f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17d3f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17d3f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17d3fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17d3fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d400: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17d400u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d404: 0x3e00008  jr          $ra
    ctx->pc = 0x17D404u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D404u;
            // 0x17d408: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17D40Cu;
}
