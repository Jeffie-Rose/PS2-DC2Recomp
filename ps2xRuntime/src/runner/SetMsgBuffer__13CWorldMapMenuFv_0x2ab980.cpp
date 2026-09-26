#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetMsgBuffer__13CWorldMapMenuFv
// Address: 0x2ab980 - 0x2aba18
void SetMsgBuffer__13CWorldMapMenuFv_0x2ab980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetMsgBuffer__13CWorldMapMenuFv_0x2ab980");
#endif

    switch (ctx->pc) {
        case 0x2ab9a4u: goto label_2ab9a4;
        case 0x2ab9b4u: goto label_2ab9b4;
        case 0x2ab9d8u: goto label_2ab9d8;
        case 0x2ab9ecu: goto label_2ab9ec;
        default: break;
    }

    ctx->pc = 0x2ab980u;

    // 0x2ab980: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ab980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ab984: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2ab984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2ab988: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ab988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ab98c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ab98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ab990: 0x8c850a7c  lw          $a1, 0xA7C($a0)
    ctx->pc = 0x2ab990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2684)));
    // 0x2ab994: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ab994u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab998: 0x8c24ca50  lw          $a0, -0x35B0($at)
    ctx->pc = 0x2ab998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953552)));
    // 0x2ab99c: 0xc0874d8  jal         func_21D360
    ctx->pc = 0x2AB99Cu;
    SET_GPR_U32(ctx, 31, 0x2AB9A4u);
    ctx->pc = 0x2AB9A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB99Cu;
            // 0x2ab9a0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D360u;
    if (runtime->hasFunction(0x21D360u)) {
        auto targetFn = runtime->lookupFunction(0x21D360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB9A4u; }
        if (ctx->pc != 0x2AB9A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMessData__7CDC2MesFPsPs_0x21d360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB9A4u; }
        if (ctx->pc != 0x2AB9A4u) { return; }
    }
    ctx->pc = 0x2AB9A4u;
label_2ab9a4:
    // 0x2ab9a4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2ab9a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2ab9a8: 0x8c24ca50  lw          $a0, -0x35B0($at)
    ctx->pc = 0x2ab9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953552)));
    // 0x2ab9ac: 0xc0874e8  jal         func_21D3A0
    ctx->pc = 0x2AB9ACu;
    SET_GPR_U32(ctx, 31, 0x2AB9B4u);
    ctx->pc = 0x2AB9B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB9ACu;
            // 0x2ab9b0: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB9B4u; }
        if (ctx->pc != 0x2AB9B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB9B4u; }
        if (ctx->pc != 0x2AB9B4u) { return; }
    }
    ctx->pc = 0x2AB9B4u;
label_2ab9b4:
    // 0x2ab9b4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2ab9b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2ab9b8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2ab9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2ab9bc: 0x8c22ca50  lw          $v0, -0x35B0($at)
    ctx->pc = 0x2ab9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953552)));
    // 0x2ab9c0: 0xac4300b0  sw          $v1, 0xB0($v0)
    ctx->pc = 0x2ab9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 3));
    // 0x2ab9c4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2ab9c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2ab9c8: 0x8e050a78  lw          $a1, 0xA78($s0)
    ctx->pc = 0x2ab9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2680)));
    // 0x2ab9cc: 0x8e060a7c  lw          $a2, 0xA7C($s0)
    ctx->pc = 0x2ab9ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2684)));
    // 0x2ab9d0: 0xc0874d8  jal         func_21D360
    ctx->pc = 0x2AB9D0u;
    SET_GPR_U32(ctx, 31, 0x2AB9D8u);
    ctx->pc = 0x2AB9D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB9D0u;
            // 0x2ab9d4: 0x8c24ca48  lw          $a0, -0x35B8($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953544)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D360u;
    if (runtime->hasFunction(0x21D360u)) {
        auto targetFn = runtime->lookupFunction(0x21D360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB9D8u; }
        if (ctx->pc != 0x2AB9D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMessData__7CDC2MesFPsPs_0x21d360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB9D8u; }
        if (ctx->pc != 0x2AB9D8u) { return; }
    }
    ctx->pc = 0x2AB9D8u;
label_2ab9d8:
    // 0x2ab9d8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2ab9d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2ab9dc: 0x8c24ca4c  lw          $a0, -0x35B4($at)
    ctx->pc = 0x2ab9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953548)));
    // 0x2ab9e0: 0x8e060a7c  lw          $a2, 0xA7C($s0)
    ctx->pc = 0x2ab9e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2684)));
    // 0x2ab9e4: 0xc0874d8  jal         func_21D360
    ctx->pc = 0x2AB9E4u;
    SET_GPR_U32(ctx, 31, 0x2AB9ECu);
    ctx->pc = 0x2AB9E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB9E4u;
            // 0x2ab9e8: 0x8e050a78  lw          $a1, 0xA78($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2680)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D360u;
    if (runtime->hasFunction(0x21D360u)) {
        auto targetFn = runtime->lookupFunction(0x21D360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB9ECu; }
        if (ctx->pc != 0x2AB9ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMessData__7CDC2MesFPsPs_0x21d360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB9ECu; }
        if (ctx->pc != 0x2AB9ECu) { return; }
    }
    ctx->pc = 0x2AB9ECu;
label_2ab9ec:
    // 0x2ab9ec: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2ab9ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2ab9f0: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x2ab9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x2ab9f4: 0x8c23ca4c  lw          $v1, -0x35B4($at)
    ctx->pc = 0x2ab9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953548)));
    // 0x2ab9f8: 0xac6017f4  sw          $zero, 0x17F4($v1)
    ctx->pc = 0x2ab9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6132), GPR_U32(ctx, 0));
    // 0x2ab9fc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2ab9fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2aba00: 0x8c23ca4c  lw          $v1, -0x35B4($at)
    ctx->pc = 0x2aba00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953548)));
    // 0x2aba04: 0xac640184  sw          $a0, 0x184($v1)
    ctx->pc = 0x2aba04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 388), GPR_U32(ctx, 4));
    // 0x2aba08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2aba08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aba0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2aba0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aba10: 0x3e00008  jr          $ra
    ctx->pc = 0x2ABA10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ABA14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABA10u;
            // 0x2aba14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2ABA18u;
}
