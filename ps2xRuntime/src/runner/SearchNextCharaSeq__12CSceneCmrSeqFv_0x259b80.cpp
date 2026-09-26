#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchNextCharaSeq__12CSceneCmrSeqFv
// Address: 0x259b80 - 0x259bdc
void SearchNextCharaSeq__12CSceneCmrSeqFv_0x259b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchNextCharaSeq__12CSceneCmrSeqFv_0x259b80");
#endif

    switch (ctx->pc) {
        case 0x259b94u: goto label_259b94;
        default: break;
    }

    ctx->pc = 0x259b80u;

    // 0x259b80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x259b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x259b84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x259b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x259b88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x259b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x259b8c: 0xc09666c  jal         func_2599B0
    ctx->pc = 0x259B8Cu;
    SET_GPR_U32(ctx, 31, 0x259B94u);
    ctx->pc = 0x259B90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259B8Cu;
            // 0x259b90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2599B0u;
    if (runtime->hasFunction(0x2599B0u)) {
        auto targetFn = runtime->lookupFunction(0x2599B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259B94u; }
        if (ctx->pc != 0x259B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchSeq__12CSceneCmrSeqFv_0x2599b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259B94u; }
        if (ctx->pc != 0x259B94u) { return; }
    }
    ctx->pc = 0x259B94u;
label_259b94:
    // 0x259b94: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x259B94u;
    {
        const bool branch_taken_0x259b94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x259b94) {
            ctx->pc = 0x259BA4u;
            goto label_259ba4;
        }
    }
    ctx->pc = 0x259B9Cu;
    // 0x259b9c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x259B9Cu;
    {
        const bool branch_taken_0x259b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259B9Cu;
            // 0x259ba0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259b9c) {
            ctx->pc = 0x259BCCu;
            goto label_259bcc;
        }
    }
    ctx->pc = 0x259BA4u;
label_259ba4:
    // 0x259ba4: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x259ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x259ba8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x259BA8u;
    {
        const bool branch_taken_0x259ba8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x259ba8) {
            ctx->pc = 0x259BB4u;
            goto label_259bb4;
        }
    }
    ctx->pc = 0x259BB0u;
    // 0x259bb0: 0xac62005c  sw          $v0, 0x5C($v1)
    ctx->pc = 0x259bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 2));
label_259bb4:
    // 0x259bb4: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x259bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x259bb8: 0xac40005c  sw          $zero, 0x5C($v0)
    ctx->pc = 0x259bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 0));
    // 0x259bbc: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x259bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x259bc0: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x259BC0u;
    {
        const bool branch_taken_0x259bc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x259bc0) {
            ctx->pc = 0x259BCCu;
            goto label_259bcc;
        }
    }
    ctx->pc = 0x259BC8u;
    // 0x259bc8: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x259bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
label_259bcc:
    // 0x259bcc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x259bccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259bd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x259bd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259bd4: 0x3e00008  jr          $ra
    ctx->pc = 0x259BD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259BD4u;
            // 0x259bd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x259BDCu;
}
