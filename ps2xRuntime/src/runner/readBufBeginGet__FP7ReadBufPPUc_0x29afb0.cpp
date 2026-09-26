#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: readBufBeginGet__FP7ReadBufPPUc
// Address: 0x29afb0 - 0x29b010
void readBufBeginGet__FP7ReadBufPPUc_0x29afb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("readBufBeginGet__FP7ReadBufPPUc_0x29afb0");
#endif

    ctx->pc = 0x29afb0u;

    // 0x29afb0: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x29afb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x29afb4: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x29afb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x29afb8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x29afb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x29afbc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x29afbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29afc0: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x29AFC0u;
    {
        const bool branch_taken_0x29afc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AFC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AFC0u;
            // 0x29afc4: 0x3c010005  lui         $at, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29afc0) {
            ctx->pc = 0x29B004u;
            goto label_29b004;
        }
    }
    ctx->pc = 0x29AFC8u;
    // 0x29afc8: 0x3c010005  lui         $at, 0x5
    ctx->pc = 0x29afc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5 << 16));
    // 0x29afcc: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x29afccu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x29afd0: 0x8c260008  lw          $a2, 0x8($at)
    ctx->pc = 0x29afd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8)));
    // 0x29afd4: 0x3c010005  lui         $at, 0x5
    ctx->pc = 0x29afd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5 << 16));
    // 0x29afd8: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x29afd8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x29afdc: 0x8c220000  lw          $v0, 0x0($at)
    ctx->pc = 0x29afdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 0)));
    // 0x29afe0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x29afe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29afe4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x29afe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x29afe8: 0x14c00002  bnez        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x29AFE8u;
    {
        const bool branch_taken_0x29afe8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x29AFECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AFE8u;
            // 0x29afec: 0x46001a  div         $zero, $v0, $a2 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29afe8) {
            ctx->pc = 0x29AFF4u;
            goto label_29aff4;
        }
    }
    ctx->pc = 0x29AFF0u;
    // 0x29aff0: 0x1cd  break       0, 7
    ctx->pc = 0x29aff0u;
    runtime->handleBreak(rdram, ctx);
label_29aff4:
    // 0x29aff4: 0x1010  mfhi        $v0
    ctx->pc = 0x29aff4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x29aff8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x29aff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x29affc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x29affcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x29b000: 0x3c010005  lui         $at, 0x5
    ctx->pc = 0x29b000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5 << 16));
label_29b004:
    // 0x29b004: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x29b004u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x29b008: 0x3e00008  jr          $ra
    ctx->pc = 0x29B008u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B00Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B008u;
            // 0x29b00c: 0x8c220004  lw          $v0, 0x4($at) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29B010u;
}
