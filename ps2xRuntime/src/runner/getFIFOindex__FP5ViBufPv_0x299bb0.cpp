#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: getFIFOindex__FP5ViBufPv
// Address: 0x299bb0 - 0x299bf0
void getFIFOindex__FP5ViBufPv_0x299bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getFIFOindex__FP5ViBufPv_0x299bb0");
#endif

    ctx->pc = 0x299bb0u;

    // 0x299bb0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x299bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x299bb4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x299bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x299bb8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x299bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x299bbc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x299bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x299bc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x299bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x299bc4: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x299bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x299bc8: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x299bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x299bcc: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x299BCCu;
    {
        const bool branch_taken_0x299bcc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x299BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299BCCu;
            // 0x299bd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299bcc) {
            ctx->pc = 0x299BDCu;
            goto label_299bdc;
        }
    }
    ctx->pc = 0x299BD4u;
    // 0x299bd4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x299BD4u;
    {
        const bool branch_taken_0x299bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x299bd4) {
            ctx->pc = 0x299BE8u;
            goto label_299be8;
        }
    }
    ctx->pc = 0x299BDCu;
label_299bdc:
    // 0x299bdc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x299bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x299be0: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x299be0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x299be4: 0x212c2  srl         $v0, $v0, 11
    ctx->pc = 0x299be4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
label_299be8:
    // 0x299be8: 0x3e00008  jr          $ra
    ctx->pc = 0x299BE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x299BF0u;
}
