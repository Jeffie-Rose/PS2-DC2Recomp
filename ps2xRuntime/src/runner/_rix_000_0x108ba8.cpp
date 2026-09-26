#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _rix_000
// Address: 0x108ba8 - 0x108c1c
void _rix_000_0x108ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_rix_000_0x108ba8");
#endif

    switch (ctx->pc) {
        case 0x108bccu: goto label_108bcc;
        default: break;
    }

    ctx->pc = 0x108ba8u;

    // 0x108ba8: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x108ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x108bac: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x108bacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x108bb0: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x108bb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x108bb4: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x108bb4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x108bb8: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x108bb8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x108bbc: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x108bbcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x108bc0: 0xc5840  sll         $t3, $t4, 1
    ctx->pc = 0x108bc0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x108bc4: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x108bc4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x108bc8: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x108bc8u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_108bcc:
    // 0x108bcc: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x108bccu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x108bd0: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x108bd0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x108bd4: 0x78c90000  lq          $t1, 0x0($a2)
    ctx->pc = 0x108bd4u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x108bd8: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x108bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x108bdc: 0x712856e8  qfsrv       $t2, $t1, $t0
    ctx->pc = 0x108bdcu;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x108be0: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x108be0u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x108be4: 0x700a4ea8  pextub      $t1, $zero, $t2
    ctx->pc = 0x108be4u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x108be8: 0x7dc80000  sq          $t0, 0x0($t6)
    ctx->pc = 0x108be8u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 8));
    // 0x108bec: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x108becu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x108bf0: 0x7dc90010  sq          $t1, 0x10($t6)
    ctx->pc = 0x108bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 9));
    // 0x108bf4: 0x1ce0fff5  bgtz        $a3, . + 4 + (-0xB << 2)
    ctx->pc = 0x108BF4u;
    {
        const bool branch_taken_0x108bf4 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x108BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108BF4u;
            // 0x108bf8: 0x1cb7021  addu        $t6, $t6, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108bf4) {
            ctx->pc = 0x108BCCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_108bcc;
        }
    }
    ctx->pc = 0x108BFCu;
    // 0x108bfc: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x108bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x108c00: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x108c00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x108c04: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x108c04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x108c08: 0x1e75024  and         $t2, $t7, $a3
    ctx->pc = 0x108c08u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 15) & GPR_U64(ctx, 7));
    // 0x108c0c: 0x1540ffef  bnez        $t2, . + 4 + (-0x11 << 2)
    ctx->pc = 0x108C0Cu;
    {
        const bool branch_taken_0x108c0c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x108C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108C0Cu;
            // 0x108c10: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108c0c) {
            ctx->pc = 0x108BCCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_108bcc;
        }
    }
    ctx->pc = 0x108C14u;
    // 0x108c14: 0x3e00008  jr          $ra
    ctx->pc = 0x108C14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x108C1Cu;
}
