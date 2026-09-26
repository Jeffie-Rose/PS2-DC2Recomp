#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetNextSeq__12CSceneObjSeqFP12_SEN_OBJ_SEQ
// Address: 0x25c3c0 - 0x25c3f8
void GetNextSeq__12CSceneObjSeqFP12_SEN_OBJ_SEQ_0x25c3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetNextSeq__12CSceneObjSeqFP12_SEN_OBJ_SEQ_0x25c3c0");
#endif

    switch (ctx->pc) {
        case 0x25c3e4u: goto label_25c3e4;
        default: break;
    }

    ctx->pc = 0x25c3c0u;

    // 0x25c3c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25c3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25c3c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25c3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25c3c8: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25C3C8u;
    {
        const bool branch_taken_0x25c3c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x25C3CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C3C8u;
            // 0x25c3cc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c3c8) {
            ctx->pc = 0x25C3D8u;
            goto label_25c3d8;
        }
    }
    ctx->pc = 0x25C3D0u;
    // 0x25c3d0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x25C3D0u;
    {
        const bool branch_taken_0x25c3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C3D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C3D0u;
            // 0x25c3d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c3d0) {
            ctx->pc = 0x25C3E8u;
            goto label_25c3e8;
        }
    }
    ctx->pc = 0x25C3D8u;
label_25c3d8:
    // 0x25c3d8: 0x8cb0004c  lw          $s0, 0x4C($a1)
    ctx->pc = 0x25c3d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x25c3dc: 0xc09705c  jal         func_25C170
    ctx->pc = 0x25C3DCu;
    SET_GPR_U32(ctx, 31, 0x25C3E4u);
    ctx->pc = 0x25C3E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C3DCu;
            // 0x25c3e0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25C170u;
    if (runtime->hasFunction(0x25C170u)) {
        auto targetFn = runtime->lookupFunction(0x25C170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C3E4u; }
        if (ctx->pc != 0x25C3E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitSceneObjSeq__FP12_SEN_OBJ_SEQ_0x25c170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C3E4u; }
        if (ctx->pc != 0x25C3E4u) { return; }
    }
    ctx->pc = 0x25C3E4u;
label_25c3e4:
    // 0x25c3e4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25c3e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25c3e8:
    // 0x25c3e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25c3e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25c3ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25c3ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25c3f0: 0x3e00008  jr          $ra
    ctx->pc = 0x25C3F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C3F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C3F0u;
            // 0x25c3f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25C3F8u;
}
