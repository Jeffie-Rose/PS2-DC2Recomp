#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ConvertParts__4CMapFP9CMapParts
// Address: 0x15d510 - 0x15d54c
void ConvertParts__4CMapFP9CMapParts_0x15d510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ConvertParts__4CMapFP9CMapParts_0x15d510");
#endif

    ctx->pc = 0x15d510u;

    // 0x15d510: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x15D510u;
    {
        const bool branch_taken_0x15d510 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D510u;
            // 0x15d514: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d510) {
            ctx->pc = 0x15D544u;
            goto label_15d544;
        }
    }
    ctx->pc = 0x15D518u;
    // 0x15d518: 0x8c83032c  lw          $v1, 0x32C($a0)
    ctx->pc = 0x15d518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 812)));
    // 0x15d51c: 0x3c025397  lui         $v0, 0x5397
    ctx->pc = 0x15d51cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21399 << 16));
    // 0x15d520: 0x3442829d  ori         $v0, $v0, 0x829D
    ctx->pc = 0x15d520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33437);
    // 0x15d524: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x15d524u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x15d528: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x15d528u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x15d52c: 0x0  nop
    ctx->pc = 0x15d52cu;
    // NOP
    // 0x15d530: 0x0  nop
    ctx->pc = 0x15d530u;
    // NOP
    // 0x15d534: 0x1010  mfhi        $v0
    ctx->pc = 0x15d534u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x15d538: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x15d538u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x15d53c: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x15d53cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x15d540: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15d540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15d544:
    // 0x15d544: 0x3e00008  jr          $ra
    ctx->pc = 0x15D544u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15D54Cu;
}
