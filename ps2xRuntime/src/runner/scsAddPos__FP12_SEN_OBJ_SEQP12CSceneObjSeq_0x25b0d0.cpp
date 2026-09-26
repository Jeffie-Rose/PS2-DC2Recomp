#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: scsAddPos__FP12_SEN_OBJ_SEQP12CSceneObjSeq
// Address: 0x25b0d0 - 0x25b12c
void scsAddPos__FP12_SEN_OBJ_SEQP12CSceneObjSeq_0x25b0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scsAddPos__FP12_SEN_OBJ_SEQP12CSceneObjSeq_0x25b0d0");
#endif

    switch (ctx->pc) {
        case 0x25b10cu: goto label_25b10c;
        default: break;
    }

    ctx->pc = 0x25b0d0u;

    // 0x25b0d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25b0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25b0d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25b0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25b0d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25b0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25b0dc: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x25b0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x25b0e0: 0x8ca30040  lw          $v1, 0x40($a1)
    ctx->pc = 0x25b0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x25b0e4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x25b0e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x25b0e8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25B0E8u;
    {
        const bool branch_taken_0x25b0e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25B0ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B0E8u;
            // 0x25b0ec: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b0e8) {
            ctx->pc = 0x25B0FCu;
            goto label_25b0fc;
        }
    }
    ctx->pc = 0x25B0F0u;
    // 0x25b0f0: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x25b0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x25b0f4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x25B0F4u;
    {
        const bool branch_taken_0x25b0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B0F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B0F4u;
            // 0x25b0f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b0f4) {
            ctx->pc = 0x25B11Cu;
            goto label_25b11c;
        }
    }
    ctx->pc = 0x25B0FCu;
label_25b0fc:
    // 0x25b0fc: 0x24860010  addiu       $a2, $a0, 0x10
    ctx->pc = 0x25b0fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x25b100: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x25b100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x25b104: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x25B104u;
    SET_GPR_U32(ctx, 31, 0x25B10Cu);
    ctx->pc = 0x25B108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25B104u;
            // 0x25b108: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B10Cu; }
        if (ctx->pc != 0x25B10Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B10Cu; }
        if (ctx->pc != 0x25B10Cu) { return; }
    }
    ctx->pc = 0x25B10Cu;
label_25b10c:
    // 0x25b10c: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x25b10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x25b110: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25b110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25b114: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x25b114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x25b118: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x25b118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
label_25b11c:
    // 0x25b11c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25b11cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25b120: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25b120u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25b124: 0x3e00008  jr          $ra
    ctx->pc = 0x25B124u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B124u;
            // 0x25b128: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25B12Cu;
}
