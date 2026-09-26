#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Move__12CSceneObjSeqFPfii
// Address: 0x25c990 - 0x25c9fc
void Move__12CSceneObjSeqFPfii_0x25c990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Move__12CSceneObjSeqFPfii_0x25c990");
#endif

    switch (ctx->pc) {
        case 0x25c9b8u: goto label_25c9b8;
        case 0x25c9d8u: goto label_25c9d8;
        default: break;
    }

    ctx->pc = 0x25c990u;

    // 0x25c990: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x25c990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x25c994: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x25c994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x25c998: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x25c998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x25c99c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25c99cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25c9a0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x25c9a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c9a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25c9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25c9a8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x25c9a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c9ac: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x25c9acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c9b0: 0xc097100  jal         func_25C400
    ctx->pc = 0x25C9B0u;
    SET_GPR_U32(ctx, 31, 0x25C9B8u);
    ctx->pc = 0x25C9B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C9B0u;
            // 0x25c9b4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25C400u;
    if (runtime->hasFunction(0x25C400u)) {
        auto targetFn = runtime->lookupFunction(0x25C400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C9B8u; }
        if (ctx->pc != 0x25C9B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNextPosSeq__12CSceneObjSeqFv_0x25c400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C9B8u; }
        if (ctx->pc != 0x25C9B8u) { return; }
    }
    ctx->pc = 0x25C9B8u;
label_25c9b8:
    // 0x25c9b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25c9b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c9bc: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x25C9BCu;
    {
        const bool branch_taken_0x25c9bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c9bc) {
            ctx->pc = 0x25C9E0u;
            goto label_25c9e0;
        }
    }
    ctx->pc = 0x25C9C4u;
    // 0x25c9c4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x25c9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25c9c8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x25c9c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c9cc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x25c9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x25c9d0: 0xc041c5c  jal         func_107170
    ctx->pc = 0x25C9D0u;
    SET_GPR_U32(ctx, 31, 0x25C9D8u);
    ctx->pc = 0x25C9D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C9D0u;
            // 0x25c9d4: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C9D8u; }
        if (ctx->pc != 0x25C9D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C9D8u; }
        if (ctx->pc != 0x25C9D8u) { return; }
    }
    ctx->pc = 0x25C9D8u;
label_25c9d8:
    // 0x25c9d8: 0xae120020  sw          $s2, 0x20($s0)
    ctx->pc = 0x25c9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 18));
    // 0x25c9dc: 0xae110024  sw          $s1, 0x24($s0)
    ctx->pc = 0x25c9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 17));
label_25c9e0:
    // 0x25c9e0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x25c9e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25c9e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25c9e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25c9e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25c9e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25c9ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25c9ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25c9f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25c9f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25c9f4: 0x3e00008  jr          $ra
    ctx->pc = 0x25C9F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C9F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C9F4u;
            // 0x25c9f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25C9FCu;
}
