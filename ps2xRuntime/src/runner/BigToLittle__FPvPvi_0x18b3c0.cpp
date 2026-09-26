#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: BigToLittle__FPvPvi
// Address: 0x18b3c0 - 0x18b470
void BigToLittle__FPvPvi_0x18b3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BigToLittle__FPvPvi_0x18b3c0");
#endif

    switch (ctx->pc) {
        case 0x18b3e0u: goto label_18b3e0;
        case 0x18b444u: goto label_18b444;
        default: break;
    }

    ctx->pc = 0x18b3c0u;

    // 0x18b3c0: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x18b3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x18b3c4: 0x6082a  slt         $at, $zero, $a2
    ctx->pc = 0x18b3c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x18b3c8: 0x833821  addu        $a3, $a0, $v1
    ctx->pc = 0x18b3c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x18b3cc: 0x10200025  beqz        $at, . + 4 + (0x25 << 2)
    ctx->pc = 0x18B3CCu;
    {
        const bool branch_taken_0x18b3cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B3D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B3CCu;
            // 0x18b3d0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b3cc) {
            ctx->pc = 0x18B464u;
            goto label_18b464;
        }
    }
    ctx->pc = 0x18B3D4u;
    // 0x18b3d4: 0x28c10009  slti        $at, $a2, 0x9
    ctx->pc = 0x18b3d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x18b3d8: 0x14200016  bnez        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x18B3D8u;
    {
        const bool branch_taken_0x18b3d8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B3DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B3D8u;
            // 0x18b3dc: 0x24c9fff8  addiu       $t1, $a2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b3d8) {
            ctx->pc = 0x18B434u;
            goto label_18b434;
        }
    }
    ctx->pc = 0x18B3E0u;
label_18b3e0:
    // 0x18b3e0: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x18b3e0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18b3e4: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x18b3e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x18b3e8: 0x109182a  slt         $v1, $t0, $t1
    ctx->pc = 0x18b3e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x18b3ec: 0xa0e40000  sb          $a0, 0x0($a3)
    ctx->pc = 0x18b3ecu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x18b3f0: 0x90a40001  lbu         $a0, 0x1($a1)
    ctx->pc = 0x18b3f0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x18b3f4: 0xa0e4ffff  sb          $a0, -0x1($a3)
    ctx->pc = 0x18b3f4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4294967295), (uint8_t)GPR_U32(ctx, 4));
    // 0x18b3f8: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x18b3f8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x18b3fc: 0xa0e4fffe  sb          $a0, -0x2($a3)
    ctx->pc = 0x18b3fcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4294967294), (uint8_t)GPR_U32(ctx, 4));
    // 0x18b400: 0x90a40003  lbu         $a0, 0x3($a1)
    ctx->pc = 0x18b400u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x18b404: 0xa0e4fffd  sb          $a0, -0x3($a3)
    ctx->pc = 0x18b404u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4294967293), (uint8_t)GPR_U32(ctx, 4));
    // 0x18b408: 0x90a40004  lbu         $a0, 0x4($a1)
    ctx->pc = 0x18b408u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x18b40c: 0xa0e4fffc  sb          $a0, -0x4($a3)
    ctx->pc = 0x18b40cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4294967292), (uint8_t)GPR_U32(ctx, 4));
    // 0x18b410: 0x90a40005  lbu         $a0, 0x5($a1)
    ctx->pc = 0x18b410u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x18b414: 0xa0e4fffb  sb          $a0, -0x5($a3)
    ctx->pc = 0x18b414u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4294967291), (uint8_t)GPR_U32(ctx, 4));
    // 0x18b418: 0x90a40006  lbu         $a0, 0x6($a1)
    ctx->pc = 0x18b418u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x18b41c: 0xa0e4fffa  sb          $a0, -0x6($a3)
    ctx->pc = 0x18b41cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4294967290), (uint8_t)GPR_U32(ctx, 4));
    // 0x18b420: 0x90a40007  lbu         $a0, 0x7($a1)
    ctx->pc = 0x18b420u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
    // 0x18b424: 0xa0e4fff9  sb          $a0, -0x7($a3)
    ctx->pc = 0x18b424u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4294967289), (uint8_t)GPR_U32(ctx, 4));
    // 0x18b428: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x18b428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x18b42c: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x18B42Cu;
    {
        const bool branch_taken_0x18b42c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B42Cu;
            // 0x18b430: 0x24e7fff8  addiu       $a3, $a3, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b42c) {
            ctx->pc = 0x18B3E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18b3e0;
        }
    }
    ctx->pc = 0x18B434u;
label_18b434:
    // 0x18b434: 0x0  nop
    ctx->pc = 0x18b434u;
    // NOP
    // 0x18b438: 0x106082a  slt         $at, $t0, $a2
    ctx->pc = 0x18b438u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x18b43c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x18B43Cu;
    {
        const bool branch_taken_0x18b43c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b43c) {
            ctx->pc = 0x18B464u;
            goto label_18b464;
        }
    }
    ctx->pc = 0x18B444u;
label_18b444:
    // 0x18b444: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x18b444u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18b448: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18b448u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18b44c: 0x106182a  slt         $v1, $t0, $a2
    ctx->pc = 0x18b44cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x18b450: 0xa0e40000  sb          $a0, 0x0($a3)
    ctx->pc = 0x18b450u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x18b454: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x18b454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x18b458: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x18b458u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x18b45c: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x18B45Cu;
    {
        const bool branch_taken_0x18b45c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18b45c) {
            ctx->pc = 0x18B444u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18b444;
        }
    }
    ctx->pc = 0x18B464u;
label_18b464:
    // 0x18b464: 0x0  nop
    ctx->pc = 0x18b464u;
    // NOP
    // 0x18b468: 0x3e00008  jr          $ra
    ctx->pc = 0x18B468u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18B470u;
}
