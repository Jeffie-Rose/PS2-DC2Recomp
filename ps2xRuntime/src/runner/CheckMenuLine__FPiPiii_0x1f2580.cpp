#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckMenuLine__FPiPiii
// Address: 0x1f2580 - 0x1f2640
void CheckMenuLine__FPiPiii_0x1f2580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckMenuLine__FPiPiii_0x1f2580");
#endif

    switch (ctx->pc) {
        case 0x1f2588u: goto label_1f2588;
        case 0x1f25c0u: goto label_1f25c0;
        case 0x1f25ecu: goto label_1f25ec;
        case 0x1f2618u: goto label_1f2618;
        default: break;
    }

    ctx->pc = 0x1f2580u;

    // 0x1f2580: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F2580u;
    {
        const bool branch_taken_0x1f2580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2580) {
            ctx->pc = 0x1F2594u;
            goto label_1f2594;
        }
    }
    ctx->pc = 0x1F2588u;
label_1f2588:
    // 0x1f2588: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1f2588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f258c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1f258cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1f2590: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1f2590u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_1f2594:
    // 0x1f2594: 0x0  nop
    ctx->pc = 0x1f2594u;
    // NOP
    // 0x1f2598: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1f2598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f259c: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x1f259cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1f25a0: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1F25A0u;
    {
        const bool branch_taken_0x1f25a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f25a0) {
            ctx->pc = 0x1F25CCu;
            goto label_1f25cc;
        }
    }
    ctx->pc = 0x1F25A8u;
    // 0x1f25a8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1f25a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1f25ac: 0x66082a  slt         $at, $v1, $a2
    ctx->pc = 0x1f25acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1f25b0: 0x1020fff5  beqz        $at, . + 4 + (-0xB << 2)
    ctx->pc = 0x1F25B0u;
    {
        const bool branch_taken_0x1f25b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f25b0) {
            ctx->pc = 0x1F2588u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f2588;
        }
    }
    ctx->pc = 0x1F25B8u;
    // 0x1f25b8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F25B8u;
    {
        const bool branch_taken_0x1f25b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f25b8) {
            ctx->pc = 0x1F25CCu;
            goto label_1f25cc;
        }
    }
    ctx->pc = 0x1F25C0u;
label_1f25c0:
    // 0x1f25c0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1f25c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f25c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f25c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f25c8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1f25c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1f25cc:
    // 0x1f25cc: 0x0  nop
    ctx->pc = 0x1f25ccu;
    // NOP
    // 0x1f25d0: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x1f25d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f25d4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1f25d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f25d8: 0x103182a  slt         $v1, $t0, $v1
    ctx->pc = 0x1f25d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1f25dc: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F25DCu;
    {
        const bool branch_taken_0x1f25dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f25dc) {
            ctx->pc = 0x1F25C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f25c0;
        }
    }
    ctx->pc = 0x1F25E4u;
    // 0x1f25e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F25E4u;
    {
        const bool branch_taken_0x1f25e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f25e4) {
            ctx->pc = 0x1F25F8u;
            goto label_1f25f8;
        }
    }
    ctx->pc = 0x1F25ECu;
label_1f25ec:
    // 0x1f25ec: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1f25ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f25f0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1f25f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1f25f4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1f25f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1f25f8:
    // 0x1f25f8: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x1f25f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f25fc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1f25fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f2600: 0x1074021  addu        $t0, $t0, $a3
    ctx->pc = 0x1f2600u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1f2604: 0x68082a  slt         $at, $v1, $t0
    ctx->pc = 0x1f2604u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1f2608: 0x1020fff8  beqz        $at, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F2608u;
    {
        const bool branch_taken_0x1f2608 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2608) {
            ctx->pc = 0x1F25ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f25ec;
        }
    }
    ctx->pc = 0x1F2610u;
    // 0x1f2610: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F2610u;
    {
        const bool branch_taken_0x1f2610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2610) {
            ctx->pc = 0x1F2624u;
            goto label_1f2624;
        }
    }
    ctx->pc = 0x1F2618u;
label_1f2618:
    // 0x1f2618: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1f2618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f261c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1f261cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1f2620: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1f2620u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1f2624:
    // 0x1f2624: 0x0  nop
    ctx->pc = 0x1f2624u;
    // NOP
    // 0x1f2628: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1f2628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f262c: 0x66082a  slt         $at, $v1, $a2
    ctx->pc = 0x1f262cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1f2630: 0x1020fff9  beqz        $at, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1F2630u;
    {
        const bool branch_taken_0x1f2630 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2630) {
            ctx->pc = 0x1F2618u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f2618;
        }
    }
    ctx->pc = 0x1F2638u;
    // 0x1f2638: 0x3e00008  jr          $ra
    ctx->pc = 0x1F2638u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F2640u;
}
