#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetFlag__12CMapFlagDataFii
// Address: 0x15c420 - 0x15c4a0
void SetFlag__12CMapFlagDataFii_0x15c420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetFlag__12CMapFlagDataFii_0x15c420");
#endif

    ctx->pc = 0x15c420u;

    // 0x15c420: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x15C420u;
    {
        const bool branch_taken_0x15c420 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x15C424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C420u;
            // 0x15c424: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c420) {
            ctx->pc = 0x15C438u;
            goto label_15c438;
        }
    }
    ctx->pc = 0x15C428u;
    // 0x15c428: 0x28a20080  slti        $v0, $a1, 0x80
    ctx->pc = 0x15c428u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x15c42c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15C42Cu;
    {
        const bool branch_taken_0x15c42c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C42Cu;
            // 0x15c430: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c42c) {
            ctx->pc = 0x15C440u;
            goto label_15c440;
        }
    }
    ctx->pc = 0x15C434u;
    // 0x15c434: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15c434u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c438:
    // 0x15c438: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x15C438u;
    {
        const bool branch_taken_0x15c438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c438) {
            ctx->pc = 0x15C498u;
            goto label_15c498;
        }
    }
    ctx->pc = 0x15C440u;
label_15c440:
    // 0x15c440: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15C440u;
    {
        const bool branch_taken_0x15c440 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x15C444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C440u;
            // 0x15c444: 0x53943  sra         $a3, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c440) {
            ctx->pc = 0x15C450u;
            goto label_15c450;
        }
    }
    ctx->pc = 0x15C448u;
    // 0x15c448: 0x24a2001f  addiu       $v0, $a1, 0x1F
    ctx->pc = 0x15c448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 31));
    // 0x15c44c: 0x23943  sra         $a3, $v0, 5
    ctx->pc = 0x15c44cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 5));
label_15c450:
    // 0x15c450: 0x4a10004  bgez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x15C450u;
    {
        const bool branch_taken_0x15c450 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x15C454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C450u;
            // 0x15c454: 0x30a2001f  andi        $v0, $a1, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c450) {
            ctx->pc = 0x15C464u;
            goto label_15c464;
        }
    }
    ctx->pc = 0x15C458u;
    // 0x15c458: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15C458u;
    {
        const bool branch_taken_0x15c458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c458) {
            ctx->pc = 0x15C464u;
            goto label_15c464;
        }
    }
    ctx->pc = 0x15C460u;
    // 0x15c460: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x15c460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
label_15c464:
    // 0x15c464: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x15c464u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x15c468: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x15c468u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x15c46c: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x15c46cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x15c470: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x15c470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15c474: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x15c474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x15c478: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x15C478u;
    {
        const bool branch_taken_0x15c478 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C47Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C478u;
            // 0x15c47c: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c478) {
            ctx->pc = 0x15C48Cu;
            goto label_15c48c;
        }
    }
    ctx->pc = 0x15C480u;
    // 0x15c480: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x15c480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x15c484: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15C484u;
    {
        const bool branch_taken_0x15c484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C484u;
            // 0x15c488: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c484) {
            ctx->pc = 0x15C498u;
            goto label_15c498;
        }
    }
    ctx->pc = 0x15C48Cu;
label_15c48c:
    // 0x15c48c: 0x601827  not         $v1, $v1
    ctx->pc = 0x15c48cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
    // 0x15c490: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x15c490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x15c494: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x15c494u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_15c498:
    // 0x15c498: 0x3e00008  jr          $ra
    ctx->pc = 0x15C498u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15C4A0u;
}
