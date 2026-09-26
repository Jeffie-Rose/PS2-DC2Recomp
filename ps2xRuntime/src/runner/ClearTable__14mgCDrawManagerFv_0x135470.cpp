#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ClearTable__14mgCDrawManagerFv
// Address: 0x135470 - 0x1354e8
void ClearTable__14mgCDrawManagerFv_0x135470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClearTable__14mgCDrawManagerFv_0x135470");
#endif

    switch (ctx->pc) {
        case 0x13548cu: goto label_13548c;
        case 0x1354c4u: goto label_1354c4;
        default: break;
    }

    ctx->pc = 0x135470u;

    // 0x135470: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x135470u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x135474: 0x8c860014  lw          $a2, 0x14($a0)
    ctx->pc = 0x135474u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x135478: 0x8c870018  lw          $a3, 0x18($a0)
    ctx->pc = 0x135478u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x13547c: 0x8c880050  lw          $t0, 0x50($a0)
    ctx->pc = 0x13547cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x135480: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x135480u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135484: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x135484u;
    {
        const bool branch_taken_0x135484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135484) {
            ctx->pc = 0x1354A8u;
            goto label_1354a8;
        }
    }
    ctx->pc = 0x13548Cu;
label_13548c:
    // 0x13548c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x13548cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x135490: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x135490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x135494: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x135494u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x135498: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x135498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x13549c: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x13549cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x1354a0: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x1354a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x1354a4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1354a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_1354a8:
    // 0x1354a8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1354a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1354ac: 0x123182a  slt         $v1, $t1, $v1
    ctx->pc = 0x1354acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1354b0: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1354B0u;
    {
        const bool branch_taken_0x1354b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1354b0) {
            ctx->pc = 0x13548Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13548c;
        }
    }
    ctx->pc = 0x1354B8u;
    // 0x1354b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1354b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1354bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1354BCu;
    {
        const bool branch_taken_0x1354bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1354bc) {
            ctx->pc = 0x1354D0u;
            goto label_1354d0;
        }
    }
    ctx->pc = 0x1354C4u;
label_1354c4:
    // 0x1354c4: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x1354c4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x1354c8: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x1354c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x1354cc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1354ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1354d0:
    // 0x1354d0: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x1354d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1354d4: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x1354d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1354d8: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1354D8u;
    {
        const bool branch_taken_0x1354d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1354d8) {
            ctx->pc = 0x1354C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1354c4;
        }
    }
    ctx->pc = 0x1354E0u;
    // 0x1354e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1354E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1354E8u;
}
