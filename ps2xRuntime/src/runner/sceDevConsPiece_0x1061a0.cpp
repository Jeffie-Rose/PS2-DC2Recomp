#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sceDevConsPiece
// Address: 0x1061a0 - 0x106208
void sceDevConsPiece_0x1061a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDevConsPiece_0x1061a0");
#endif

    ctx->pc = 0x1061a0u;

    // 0x1061a0: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x1061a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1061a4: 0x4a00016  bltz        $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1061A4u;
    {
        const bool branch_taken_0x1061a4 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1061A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1061A4u;
            // 0x1061a8: 0x310800ff  andi        $t0, $t0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1061a4) {
            ctx->pc = 0x106200u;
            goto label_106200;
        }
    }
    ctx->pc = 0x1061ACu;
    // 0x1061ac: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1061acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1061b0: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x1061b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1061b4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1061B4u;
    {
        const bool branch_taken_0x1061b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1061b4) {
            ctx->pc = 0x106200u;
            goto label_106200;
        }
    }
    ctx->pc = 0x1061BCu;
    // 0x1061bc: 0x4c00010  bltz        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x1061BCu;
    {
        const bool branch_taken_0x1061bc = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x1061bc) {
            ctx->pc = 0x106200u;
            goto label_106200;
        }
    }
    ctx->pc = 0x1061C4u;
    // 0x1061c4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1061c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1061c8: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x1061c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1061cc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1061CCu;
    {
        const bool branch_taken_0x1061cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1061D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1061CCu;
            // 0x1061d0: 0xc34818  mult        $t1, $a2, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1061cc) {
            ctx->pc = 0x106200u;
            goto label_106200;
        }
    }
    ctx->pc = 0x1061D4u;
    // 0x1061d4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1061d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1061d8: 0x1251021  addu        $v0, $t1, $a1
    ctx->pc = 0x1061d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x1061dc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1061dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1061e0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1061e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1061e4: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x1061e4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1061e8: 0x2c6200f1  sltiu       $v0, $v1, 0xF1
    ctx->pc = 0x1061e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)241) ? 1 : 0);
    // 0x1061ec: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1061ECu;
    {
        const bool branch_taken_0x1061ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1061ec) {
            ctx->pc = 0x1061F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1061ECu;
            // 0x1061f0: 0x673825  or          $a3, $v1, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1061F4u;
            goto label_1061f4;
        }
    }
    ctx->pc = 0x1061F4u;
label_1061f4:
    // 0x1061f4: 0x81200  sll         $v0, $t0, 8
    ctx->pc = 0x1061f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1061f8: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x1061f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1061fc: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x1061fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_106200:
    // 0x106200: 0x3e00008  jr          $ra
    ctx->pc = 0x106200u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x106208u;
}
