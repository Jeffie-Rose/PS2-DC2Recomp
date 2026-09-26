#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ri0_000
// Address: 0x108c20 - 0x108cb4
void _ri0_000_0x108c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_ri0_000_0x108c20");
#endif

    switch (ctx->pc) {
        case 0x108c40u: goto label_108c40;
        case 0x108c48u: goto label_108c48;
        default: break;
    }

    ctx->pc = 0x108c20u;

    // 0x108c20: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x108c20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x108c24: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x108c24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x108c28: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x108c28u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x108c2c: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x108c2cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x108c30: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x108c30u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x108c34: 0xc5840  sll         $t3, $t4, 1
    ctx->pc = 0x108c34u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x108c38: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x108c38u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x108c3c: 0x2418ffff  addiu       $t8, $zero, -0x1
    ctx->pc = 0x108c3cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_108c40:
    // 0x108c40: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x108c40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x108c44: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x108c44u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_108c48:
    // 0x108c48: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x108c48u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x108c4c: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x108c4cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x108c50: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x108c50u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x108c54: 0x71084ee8  qfsrv       $t1, $t0, $t0
    ctx->pc = 0x108c54u;
    SET_GPR_VEC(ctx, 9, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x108c58: 0x70094688  pextlb      $t0, $zero, $t1
    ctx->pc = 0x108c58u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 9)));
    // 0x108c5c: 0x7dc80000  sq          $t0, 0x0($t6)
    ctx->pc = 0x108c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 8));
    // 0x108c60: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x108c60u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x108c64: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x108c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x108c68: 0x1cb7021  addu        $t6, $t6, $t3
    ctx->pc = 0x108c68u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
    // 0x108c6c: 0x1ce0fff6  bgtz        $a3, . + 4 + (-0xA << 2)
    ctx->pc = 0x108C6Cu;
    {
        const bool branch_taken_0x108c6c = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x108C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108C6Cu;
            // 0x108c70: 0xcc3021  addu        $a2, $a2, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108c6c) {
            ctx->pc = 0x108C48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_108c48;
        }
    }
    ctx->pc = 0x108C74u;
    // 0x108c74: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x108c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x108c78: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x108c78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x108c7c: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x108c7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x108c80: 0x1e75024  and         $t2, $t7, $a3
    ctx->pc = 0x108c80u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 15) & GPR_U64(ctx, 7));
    // 0x108c84: 0x1540fff0  bnez        $t2, . + 4 + (-0x10 << 2)
    ctx->pc = 0x108C84u;
    {
        const bool branch_taken_0x108c84 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x108C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108C84u;
            // 0x108c88: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108c84) {
            ctx->pc = 0x108C48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_108c48;
        }
    }
    ctx->pc = 0x108C8Cu;
    // 0x108c8c: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x108c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x108c90: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x108c90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x108c94: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x108c94u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x108c98: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x108c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x108c9c: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x108c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x108ca0: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x108ca0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x108ca4: 0x1700ffe6  bnez        $t8, . + 4 + (-0x1A << 2)
    ctx->pc = 0x108CA4u;
    {
        const bool branch_taken_0x108ca4 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 0));
        ctx->pc = 0x108CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108CA4u;
            // 0x108ca8: 0xc02d  daddu       $t8, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108ca4) {
            ctx->pc = 0x108C40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_108c40;
        }
    }
    ctx->pc = 0x108CACu;
    // 0x108cac: 0x3e00008  jr          $ra
    ctx->pc = 0x108CACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x108CB4u;
}
