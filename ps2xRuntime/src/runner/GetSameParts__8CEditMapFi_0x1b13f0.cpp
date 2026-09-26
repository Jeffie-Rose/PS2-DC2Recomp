#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetSameParts__8CEditMapFi
// Address: 0x1b13f0 - 0x1b14a0
void GetSameParts__8CEditMapFi_0x1b13f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSameParts__8CEditMapFi_0x1b13f0");
#endif

    switch (ctx->pc) {
        case 0x1b1404u: goto label_1b1404;
        case 0x1b1438u: goto label_1b1438;
        default: break;
    }

    ctx->pc = 0x1b13f0u;

    // 0x1b13f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b13f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b13f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b13f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b13f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b13f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b13fc: 0xc06c310  jal         func_1B0C40
    ctx->pc = 0x1B13FCu;
    SET_GPR_U32(ctx, 31, 0x1B1404u);
    ctx->pc = 0x1B1400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B13FCu;
            // 0x1b1400: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C40u;
    if (runtime->hasFunction(0x1B0C40u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1404u; }
        if (ctx->pc != 0x1B1404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlaceParts__8CEditMapFi_0x1b0c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1404u; }
        if (ctx->pc != 0x1B1404u) { return; }
    }
    ctx->pc = 0x1B1404u;
label_1b1404:
    // 0x1b1404: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1404u;
    {
        const bool branch_taken_0x1b1404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1404) {
            ctx->pc = 0x1B1414u;
            goto label_1b1414;
        }
    }
    ctx->pc = 0x1B140Cu;
    // 0x1b140c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1B140Cu;
    {
        const bool branch_taken_0x1b140c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B140Cu;
            // 0x1b1410: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b140c) {
            ctx->pc = 0x1B1490u;
            goto label_1b1490;
        }
    }
    ctx->pc = 0x1B1414u;
label_1b1414:
    // 0x1b1414: 0x8c450324  lw          $a1, 0x324($v0)
    ctx->pc = 0x1b1414u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 804)));
    // 0x1b1418: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1418u;
    {
        const bool branch_taken_0x1b1418 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B141Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1418u;
            // 0x1b141c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1418) {
            ctx->pc = 0x1B1428u;
            goto label_1b1428;
        }
    }
    ctx->pc = 0x1B1420u;
    // 0x1b1420: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1B1420u;
    {
        const bool branch_taken_0x1b1420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1420u;
            // 0x1b1424: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1420) {
            ctx->pc = 0x1B1494u;
            goto label_1b1494;
        }
    }
    ctx->pc = 0x1B1428u;
label_1b1428:
    // 0x1b1428: 0x8e040d40  lw          $a0, 0xD40($s0)
    ctx->pc = 0x1b1428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3392)));
    // 0x1b142c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b142cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1430: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1B1430u;
    {
        const bool branch_taken_0x1b1430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1430u;
            // 0x1b1434: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1430) {
            ctx->pc = 0x1B147Cu;
            goto label_1b147c;
        }
    }
    ctx->pc = 0x1B1438u;
label_1b1438:
    // 0x1b1438: 0x8e030d44  lw          $v1, 0xD44($s0)
    ctx->pc = 0x1b1438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3396)));
    // 0x1b143c: 0x663821  addu        $a3, $v1, $a2
    ctx->pc = 0x1b143cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1b1440: 0x80e30070  lb          $v1, 0x70($a3)
    ctx->pc = 0x1b1440u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 112)));
    // 0x1b1444: 0x601826  xor         $v1, $v1, $zero
    ctx->pc = 0x1b1444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
    // 0x1b1448: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x1b1448u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1b144c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B144Cu;
    {
        const bool branch_taken_0x1b144c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b144c) {
            ctx->pc = 0x1B1474u;
            goto label_1b1474;
        }
    }
    ctx->pc = 0x1B1454u;
    // 0x1b1454: 0x8ce30310  lw          $v1, 0x310($a3)
    ctx->pc = 0x1b1454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 784)));
    // 0x1b1458: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B1458u;
    {
        const bool branch_taken_0x1b1458 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1458) {
            ctx->pc = 0x1B1474u;
            goto label_1b1474;
        }
    }
    ctx->pc = 0x1B1460u;
    // 0x1b1460: 0x8ce30324  lw          $v1, 0x324($a3)
    ctx->pc = 0x1b1460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 804)));
    // 0x1b1464: 0x14650003  bne         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1464u;
    {
        const bool branch_taken_0x1b1464 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x1b1464) {
            ctx->pc = 0x1B1474u;
            goto label_1b1474;
        }
    }
    ctx->pc = 0x1B146Cu;
    // 0x1b146c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B146Cu;
    {
        const bool branch_taken_0x1b146c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b146c) {
            ctx->pc = 0x1B1490u;
            goto label_1b1490;
        }
    }
    ctx->pc = 0x1B1474u;
label_1b1474:
    // 0x1b1474: 0x24c60330  addiu       $a2, $a2, 0x330
    ctx->pc = 0x1b1474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 816));
    // 0x1b1478: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b1478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1b147c:
    // 0x1b147c: 0x0  nop
    ctx->pc = 0x1b147cu;
    // NOP
    // 0x1b1480: 0x44182a  slt         $v1, $v0, $a0
    ctx->pc = 0x1b1480u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1b1484: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1B1484u;
    {
        const bool branch_taken_0x1b1484 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1484) {
            ctx->pc = 0x1B1438u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b1438;
        }
    }
    ctx->pc = 0x1B148Cu;
    // 0x1b148c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b148cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b1490:
    // 0x1b1490: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b1490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b1494:
    // 0x1b1494: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b1494u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1498: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1498u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B149Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1498u;
            // 0x1b149c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B14A0u;
}
