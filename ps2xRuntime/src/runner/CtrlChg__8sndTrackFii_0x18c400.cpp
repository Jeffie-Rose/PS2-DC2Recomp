#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CtrlChg__8sndTrackFii
// Address: 0x18c400 - 0x18c444
void CtrlChg__8sndTrackFii_0x18c400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CtrlChg__8sndTrackFii_0x18c400");
#endif

    ctx->pc = 0x18c400u;

    // 0x18c400: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x18c400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x18c404: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x18C404u;
    {
        const bool branch_taken_0x18c404 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x18C408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C404u;
            // 0x18c408: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c404) {
            ctx->pc = 0x18C438u;
            goto label_18c438;
        }
    }
    ctx->pc = 0x18C40Cu;
    // 0x18c40c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x18c40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x18c410: 0x10a30007  beq         $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x18C410u;
    {
        const bool branch_taken_0x18c410 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x18C414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C410u;
            // 0x18c414: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c410) {
            ctx->pc = 0x18C430u;
            goto label_18c430;
        }
    }
    ctx->pc = 0x18C418u;
    // 0x18c418: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18C418u;
    {
        const bool branch_taken_0x18c418 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x18c418) {
            ctx->pc = 0x18C428u;
            goto label_18c428;
        }
    }
    ctx->pc = 0x18C420u;
    // 0x18c420: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18C420u;
    {
        const bool branch_taken_0x18c420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c420) {
            ctx->pc = 0x18C43Cu;
            goto label_18c43c;
        }
    }
    ctx->pc = 0x18C428u;
label_18c428:
    // 0x18c428: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18C428u;
    {
        const bool branch_taken_0x18c428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C42Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C428u;
            // 0x18c42c: 0xa0860000  sb          $a2, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c428) {
            ctx->pc = 0x18C43Cu;
            goto label_18c43c;
        }
    }
    ctx->pc = 0x18C430u;
label_18c430:
    // 0x18c430: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18C430u;
    {
        const bool branch_taken_0x18c430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C430u;
            // 0x18c434: 0xa0860003  sb          $a2, 0x3($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c430) {
            ctx->pc = 0x18C43Cu;
            goto label_18c43c;
        }
    }
    ctx->pc = 0x18C438u;
label_18c438:
    // 0x18c438: 0xa0860001  sb          $a2, 0x1($a0)
    ctx->pc = 0x18c438u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 6));
label_18c43c:
    // 0x18c43c: 0x3e00008  jr          $ra
    ctx->pc = 0x18C43Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18C444u;
}
