#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchNextPrSeq__12CSceneCmrSeqFv
// Address: 0x259a00 - 0x259a5c
void SearchNextPrSeq__12CSceneCmrSeqFv_0x259a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchNextPrSeq__12CSceneCmrSeqFv_0x259a00");
#endif

    switch (ctx->pc) {
        case 0x259a14u: goto label_259a14;
        default: break;
    }

    ctx->pc = 0x259a00u;

    // 0x259a00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x259a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x259a04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x259a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x259a08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x259a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x259a0c: 0xc09666c  jal         func_2599B0
    ctx->pc = 0x259A0Cu;
    SET_GPR_U32(ctx, 31, 0x259A14u);
    ctx->pc = 0x259A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259A0Cu;
            // 0x259a10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2599B0u;
    if (runtime->hasFunction(0x2599B0u)) {
        auto targetFn = runtime->lookupFunction(0x2599B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259A14u; }
        if (ctx->pc != 0x259A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchSeq__12CSceneCmrSeqFv_0x2599b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259A14u; }
        if (ctx->pc != 0x259A14u) { return; }
    }
    ctx->pc = 0x259A14u;
label_259a14:
    // 0x259a14: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x259A14u;
    {
        const bool branch_taken_0x259a14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x259a14) {
            ctx->pc = 0x259A24u;
            goto label_259a24;
        }
    }
    ctx->pc = 0x259A1Cu;
    // 0x259a1c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x259A1Cu;
    {
        const bool branch_taken_0x259a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259A1Cu;
            // 0x259a20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259a1c) {
            ctx->pc = 0x259A4Cu;
            goto label_259a4c;
        }
    }
    ctx->pc = 0x259A24u;
label_259a24:
    // 0x259a24: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x259a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x259a28: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x259A28u;
    {
        const bool branch_taken_0x259a28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x259a28) {
            ctx->pc = 0x259A34u;
            goto label_259a34;
        }
    }
    ctx->pc = 0x259A30u;
    // 0x259a30: 0xac62005c  sw          $v0, 0x5C($v1)
    ctx->pc = 0x259a30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 2));
label_259a34:
    // 0x259a34: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x259a34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x259a38: 0xac40005c  sw          $zero, 0x5C($v0)
    ctx->pc = 0x259a38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 0));
    // 0x259a3c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x259a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x259a40: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x259A40u;
    {
        const bool branch_taken_0x259a40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x259a40) {
            ctx->pc = 0x259A4Cu;
            goto label_259a4c;
        }
    }
    ctx->pc = 0x259A48u;
    // 0x259a48: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x259a48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_259a4c:
    // 0x259a4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x259a4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259a50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x259a50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259a54: 0x3e00008  jr          $ra
    ctx->pc = 0x259A54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259A54u;
            // 0x259a58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x259A5Cu;
}
