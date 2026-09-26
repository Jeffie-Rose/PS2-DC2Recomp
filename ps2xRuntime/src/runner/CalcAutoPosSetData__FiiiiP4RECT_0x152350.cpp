#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CalcAutoPosSetData__FiiiiP4RECT
// Address: 0x152350 - 0x152448
void CalcAutoPosSetData__FiiiiP4RECT_0x152350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CalcAutoPosSetData__FiiiiP4RECT_0x152350");
#endif

    switch (ctx->pc) {
        case 0x15236cu: goto label_15236c;
        default: break;
    }

    ctx->pc = 0x152350u;

    // 0x152350: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x152350u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152354: 0x866023  subu        $t4, $a0, $a2
    ctx->pc = 0x152354u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x152358: 0xa75823  subu        $t3, $a1, $a3
    ctx->pc = 0x152358u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x15235c: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x15235cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x152360: 0x24c50010  addiu       $a1, $a2, 0x10
    ctx->pc = 0x152360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x152364: 0x24e40010  addiu       $a0, $a3, 0x10
    ctx->pc = 0x152364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x152368: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x152368u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15236c:
    // 0x15236c: 0x0  nop
    ctx->pc = 0x15236cu;
    // NOP
    // 0x152370: 0x15c00003  bnez        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x152370u;
    {
        const bool branch_taken_0x152370 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        if (branch_taken_0x152370) {
            ctx->pc = 0x152380u;
            goto label_152380;
        }
    }
    ctx->pc = 0x152378u;
    // 0x152378: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x152378u;
    {
        const bool branch_taken_0x152378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15237Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152378u;
            // 0x15237c: 0xad000000  sw          $zero, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152378) {
            ctx->pc = 0x1523A4u;
            goto label_1523a4;
        }
    }
    ctx->pc = 0x152380u;
label_152380:
    // 0x152380: 0x1cc5018  mult        $t2, $t6, $t4
    ctx->pc = 0x152380u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x152384: 0x5410003  bgez        $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x152384u;
    {
        const bool branch_taken_0x152384 = (GPR_S32(ctx, 10) >= 0);
        ctx->pc = 0x152388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152384u;
            // 0x152388: 0xa1843  sra         $v1, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152384) {
            ctx->pc = 0x152394u;
            goto label_152394;
        }
    }
    ctx->pc = 0x15238Cu;
    // 0x15238c: 0x25430001  addiu       $v1, $t2, 0x1
    ctx->pc = 0x15238cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x152390: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x152390u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_152394:
    // 0x152394: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x152394u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x152398: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x152398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x15239c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x15239cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1523a0: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x1523a0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
label_1523a4:
    // 0x1523a4: 0x0  nop
    ctx->pc = 0x1523a4u;
    // NOP
    // 0x1523a8: 0x15a00003  bnez        $t5, . + 4 + (0x3 << 2)
    ctx->pc = 0x1523A8u;
    {
        const bool branch_taken_0x1523a8 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        if (branch_taken_0x1523a8) {
            ctx->pc = 0x1523B8u;
            goto label_1523b8;
        }
    }
    ctx->pc = 0x1523B0u;
    // 0x1523b0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1523B0u;
    {
        const bool branch_taken_0x1523b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1523B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1523B0u;
            // 0x1523b4: 0xad000004  sw          $zero, 0x4($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1523b0) {
            ctx->pc = 0x1523DCu;
            goto label_1523dc;
        }
    }
    ctx->pc = 0x1523B8u;
label_1523b8:
    // 0x1523b8: 0x1ab5018  mult        $t2, $t5, $t3
    ctx->pc = 0x1523b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x1523bc: 0x5410003  bgez        $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1523BCu;
    {
        const bool branch_taken_0x1523bc = (GPR_S32(ctx, 10) >= 0);
        ctx->pc = 0x1523C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1523BCu;
            // 0x1523c0: 0xa1843  sra         $v1, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1523bc) {
            ctx->pc = 0x1523CCu;
            goto label_1523cc;
        }
    }
    ctx->pc = 0x1523C4u;
    // 0x1523c4: 0x25430001  addiu       $v1, $t2, 0x1
    ctx->pc = 0x1523c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1523c8: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x1523c8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_1523cc:
    // 0x1523cc: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x1523ccu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
    // 0x1523d0: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x1523d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1523d4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1523d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1523d8: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x1523d8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
label_1523dc:
    // 0x1523dc: 0x0  nop
    ctx->pc = 0x1523dcu;
    // NOP
    // 0x1523e0: 0x11c00003  beqz        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x1523E0u;
    {
        const bool branch_taken_0x1523e0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x1523e0) {
            ctx->pc = 0x1523F0u;
            goto label_1523f0;
        }
    }
    ctx->pc = 0x1523E8u;
    // 0x1523e8: 0x15c90003  bne         $t6, $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1523E8u;
    {
        const bool branch_taken_0x1523e8 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 9));
        if (branch_taken_0x1523e8) {
            ctx->pc = 0x1523F8u;
            goto label_1523f8;
        }
    }
    ctx->pc = 0x1523F0u;
label_1523f0:
    // 0x1523f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1523F0u;
    {
        const bool branch_taken_0x1523f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1523F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1523F0u;
            // 0x1523f4: 0xad050008  sw          $a1, 0x8($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1523f0) {
            ctx->pc = 0x1523FCu;
            goto label_1523fc;
        }
    }
    ctx->pc = 0x1523F8u;
label_1523f8:
    // 0x1523f8: 0xad060008  sw          $a2, 0x8($t0)
    ctx->pc = 0x1523f8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 6));
label_1523fc:
    // 0x1523fc: 0x0  nop
    ctx->pc = 0x1523fcu;
    // NOP
    // 0x152400: 0x11a00003  beqz        $t5, . + 4 + (0x3 << 2)
    ctx->pc = 0x152400u;
    {
        const bool branch_taken_0x152400 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x152400) {
            ctx->pc = 0x152410u;
            goto label_152410;
        }
    }
    ctx->pc = 0x152408u;
    // 0x152408: 0x15a90003  bne         $t5, $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x152408u;
    {
        const bool branch_taken_0x152408 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 9));
        if (branch_taken_0x152408) {
            ctx->pc = 0x152418u;
            goto label_152418;
        }
    }
    ctx->pc = 0x152410u;
label_152410:
    // 0x152410: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x152410u;
    {
        const bool branch_taken_0x152410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152410u;
            // 0x152414: 0xad04000c  sw          $a0, 0xC($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152410) {
            ctx->pc = 0x15241Cu;
            goto label_15241c;
        }
    }
    ctx->pc = 0x152418u;
label_152418:
    // 0x152418: 0xad07000c  sw          $a3, 0xC($t0)
    ctx->pc = 0x152418u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 7));
label_15241c:
    // 0x15241c: 0x0  nop
    ctx->pc = 0x15241cu;
    // NOP
    // 0x152420: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x152420u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x152424: 0x29c30003  slti        $v1, $t6, 0x3
    ctx->pc = 0x152424u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x152428: 0x1460ffd0  bnez        $v1, . + 4 + (-0x30 << 2)
    ctx->pc = 0x152428u;
    {
        const bool branch_taken_0x152428 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15242Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152428u;
            // 0x15242c: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152428) {
            ctx->pc = 0x15236Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15236c;
        }
    }
    ctx->pc = 0x152430u;
    // 0x152430: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x152430u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x152434: 0x29a30003  slti        $v1, $t5, 0x3
    ctx->pc = 0x152434u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x152438: 0x1460ffcc  bnez        $v1, . + 4 + (-0x34 << 2)
    ctx->pc = 0x152438u;
    {
        const bool branch_taken_0x152438 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15243Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152438u;
            // 0x15243c: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152438) {
            ctx->pc = 0x15236Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15236c;
        }
    }
    ctx->pc = 0x152440u;
    // 0x152440: 0x3e00008  jr          $ra
    ctx->pc = 0x152440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x152448u;
}
