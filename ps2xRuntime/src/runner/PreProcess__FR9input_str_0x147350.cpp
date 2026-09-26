#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PreProcess__FR9input_str
// Address: 0x147350 - 0x147450
void PreProcess__FR9input_str_0x147350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PreProcess__FR9input_str_0x147350");
#endif

    switch (ctx->pc) {
        case 0x147370u: goto label_147370;
        case 0x147390u: goto label_147390;
        case 0x1473e4u: goto label_1473e4;
        default: break;
    }

    ctx->pc = 0x147350u;

    // 0x147350: 0x8c8a0000  lw          $t2, 0x0($a0)
    ctx->pc = 0x147350u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x147354: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x147354u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147358: 0x2409002f  addiu       $t1, $zero, 0x2F
    ctx->pc = 0x147358u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x14735c: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x14735cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x147360: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x147360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x147364: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x147364u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x147368: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x147368u;
    {
        const bool branch_taken_0x147368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14736Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147368u;
            // 0x14736c: 0x2407000d  addiu       $a3, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147368) {
            ctx->pc = 0x147434u;
            goto label_147434;
        }
    }
    ctx->pc = 0x147370u;
label_147370:
    // 0x147370: 0x91830000  lbu         $v1, 0x0($t4)
    ctx->pc = 0x147370u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x147374: 0x14690012  bne         $v1, $t1, . + 4 + (0x12 << 2)
    ctx->pc = 0x147374u;
    {
        const bool branch_taken_0x147374 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        if (branch_taken_0x147374) {
            ctx->pc = 0x1473C0u;
            goto label_1473c0;
        }
    }
    ctx->pc = 0x14737Cu;
    // 0x14737c: 0x91830001  lbu         $v1, 0x1($t4)
    ctx->pc = 0x14737cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
    // 0x147380: 0x1469000f  bne         $v1, $t1, . + 4 + (0xF << 2)
    ctx->pc = 0x147380u;
    {
        const bool branch_taken_0x147380 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        if (branch_taken_0x147380) {
            ctx->pc = 0x1473C0u;
            goto label_1473c0;
        }
    }
    ctx->pc = 0x147388u;
    // 0x147388: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x147388u;
    {
        const bool branch_taken_0x147388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147388) {
            ctx->pc = 0x1473B0u;
            goto label_1473b0;
        }
    }
    ctx->pc = 0x147390u;
label_147390:
    // 0x147390: 0x14b6021  addu        $t4, $t2, $t3
    ctx->pc = 0x147390u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x147394: 0x91830000  lbu         $v1, 0x0($t4)
    ctx->pc = 0x147394u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x147398: 0x10680009  beq         $v1, $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x147398u;
    {
        const bool branch_taken_0x147398 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        if (branch_taken_0x147398) {
            ctx->pc = 0x1473C0u;
            goto label_1473c0;
        }
    }
    ctx->pc = 0x1473A0u;
    // 0x1473a0: 0x10670007  beq         $v1, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1473A0u;
    {
        const bool branch_taken_0x1473a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x1473a0) {
            ctx->pc = 0x1473C0u;
            goto label_1473c0;
        }
    }
    ctx->pc = 0x1473A8u;
    // 0x1473a8: 0xa1860000  sb          $a2, 0x0($t4)
    ctx->pc = 0x1473a8u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x1473ac: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1473acu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_1473b0:
    // 0x1473b0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1473b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1473b4: 0x163182a  slt         $v1, $t3, $v1
    ctx->pc = 0x1473b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1473b8: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1473B8u;
    {
        const bool branch_taken_0x1473b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1473b8) {
            ctx->pc = 0x147390u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_147390;
        }
    }
    ctx->pc = 0x1473C0u;
label_1473c0:
    // 0x1473c0: 0x14b6021  addu        $t4, $t2, $t3
    ctx->pc = 0x1473c0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x1473c4: 0x91830000  lbu         $v1, 0x0($t4)
    ctx->pc = 0x1473c4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1473c8: 0x14690019  bne         $v1, $t1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1473C8u;
    {
        const bool branch_taken_0x1473c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        if (branch_taken_0x1473c8) {
            ctx->pc = 0x147430u;
            goto label_147430;
        }
    }
    ctx->pc = 0x1473D0u;
    // 0x1473d0: 0x91830001  lbu         $v1, 0x1($t4)
    ctx->pc = 0x1473d0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
    // 0x1473d4: 0x14650016  bne         $v1, $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1473D4u;
    {
        const bool branch_taken_0x1473d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x1473d4) {
            ctx->pc = 0x147430u;
            goto label_147430;
        }
    }
    ctx->pc = 0x1473DCu;
    // 0x1473dc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1473DCu;
    {
        const bool branch_taken_0x1473dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1473dc) {
            ctx->pc = 0x147418u;
            goto label_147418;
        }
    }
    ctx->pc = 0x1473E4u;
label_1473e4:
    // 0x1473e4: 0x0  nop
    ctx->pc = 0x1473e4u;
    // NOP
    // 0x1473e8: 0x14b6021  addu        $t4, $t2, $t3
    ctx->pc = 0x1473e8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x1473ec: 0x91830000  lbu         $v1, 0x0($t4)
    ctx->pc = 0x1473ecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1473f0: 0x14650007  bne         $v1, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1473F0u;
    {
        const bool branch_taken_0x1473f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x1473f0) {
            ctx->pc = 0x147410u;
            goto label_147410;
        }
    }
    ctx->pc = 0x1473F8u;
    // 0x1473f8: 0x91830001  lbu         $v1, 0x1($t4)
    ctx->pc = 0x1473f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
    // 0x1473fc: 0x14690004  bne         $v1, $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1473FCu;
    {
        const bool branch_taken_0x1473fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        ctx->pc = 0x147400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1473FCu;
            // 0x147400: 0x258d0001  addiu       $t5, $t4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1473fc) {
            ctx->pc = 0x147410u;
            goto label_147410;
        }
    }
    ctx->pc = 0x147404u;
    // 0x147404: 0xa1860000  sb          $a2, 0x0($t4)
    ctx->pc = 0x147404u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x147408: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x147408u;
    {
        const bool branch_taken_0x147408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14740Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147408u;
            // 0x14740c: 0xa1a60000  sb          $a2, 0x0($t5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147408) {
            ctx->pc = 0x147434u;
            goto label_147434;
        }
    }
    ctx->pc = 0x147410u;
label_147410:
    // 0x147410: 0xa1860000  sb          $a2, 0x0($t4)
    ctx->pc = 0x147410u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x147414: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x147414u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_147418:
    // 0x147418: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x147418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14741c: 0x163182a  slt         $v1, $t3, $v1
    ctx->pc = 0x14741cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x147420: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x147420u;
    {
        const bool branch_taken_0x147420 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x147420) {
            ctx->pc = 0x1473E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1473e4;
        }
    }
    ctx->pc = 0x147428u;
    // 0x147428: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x147428u;
    {
        const bool branch_taken_0x147428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147428) {
            ctx->pc = 0x147434u;
            goto label_147434;
        }
    }
    ctx->pc = 0x147430u;
label_147430:
    // 0x147430: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x147430u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_147434:
    // 0x147434: 0x0  nop
    ctx->pc = 0x147434u;
    // NOP
    // 0x147438: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x147438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14743c: 0x163182a  slt         $v1, $t3, $v1
    ctx->pc = 0x14743cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x147440: 0x1460ffcb  bnez        $v1, . + 4 + (-0x35 << 2)
    ctx->pc = 0x147440u;
    {
        const bool branch_taken_0x147440 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x147444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147440u;
            // 0x147444: 0x14b6021  addu        $t4, $t2, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147440) {
            ctx->pc = 0x147370u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_147370;
        }
    }
    ctx->pc = 0x147448u;
    // 0x147448: 0x3e00008  jr          $ra
    ctx->pc = 0x147448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x147450u;
}
