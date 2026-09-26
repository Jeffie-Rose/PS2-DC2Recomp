#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetKeyListIndexPtr__11CCharacter2FiPi
// Address: 0x174a40 - 0x174acc
void GetKeyListIndexPtr__11CCharacter2FiPi_0x174a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetKeyListIndexPtr__11CCharacter2FiPi_0x174a40");
#endif

    switch (ctx->pc) {
        case 0x174a4cu: goto label_174a4c;
        case 0x174a68u: goto label_174a68;
        default: break;
    }

    ctx->pc = 0x174a40u;

    // 0x174a40: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x174a40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174a44: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x174a44u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174a48: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x174a48u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174a4c:
    // 0x174a4c: 0x8b1821  addu        $v1, $a0, $t3
    ctx->pc = 0x174a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x174a50: 0x8c620510  lw          $v0, 0x510($v1)
    ctx->pc = 0x174a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1296)));
    // 0x174a54: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x174A54u;
    {
        const bool branch_taken_0x174a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x174a54) {
            ctx->pc = 0x174AACu;
            goto label_174aac;
        }
    }
    ctx->pc = 0x174A5Cu;
    // 0x174a5c: 0x8c670530  lw          $a3, 0x530($v1)
    ctx->pc = 0x174a5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1328)));
    // 0x174a60: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x174A60u;
    {
        const bool branch_taken_0x174a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174A60u;
            // 0x174a64: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174a60) {
            ctx->pc = 0x174A9Cu;
            goto label_174a9c;
        }
    }
    ctx->pc = 0x174A68u;
label_174a68:
    // 0x174a68: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x174a68u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x174a6c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x174A6Cu;
    {
        const bool branch_taken_0x174a6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x174a6c) {
            ctx->pc = 0x174AACu;
            goto label_174aac;
        }
    }
    ctx->pc = 0x174A74u;
    // 0x174a74: 0x15050006  bne         $t0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x174A74u;
    {
        const bool branch_taken_0x174a74 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 5));
        if (branch_taken_0x174a74) {
            ctx->pc = 0x174A90u;
            goto label_174a90;
        }
    }
    ctx->pc = 0x174A7Cu;
    // 0x174a7c: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x174A7Cu;
    {
        const bool branch_taken_0x174a7c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x174a7c) {
            ctx->pc = 0x174AC4u;
            goto label_174ac4;
        }
    }
    ctx->pc = 0x174A84u;
    // 0x174a84: 0xacc90000  sw          $t1, 0x0($a2)
    ctx->pc = 0x174a84u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 9));
    // 0x174a88: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x174A88u;
    {
        const bool branch_taken_0x174a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x174a88) {
            ctx->pc = 0x174AC4u;
            goto label_174ac4;
        }
    }
    ctx->pc = 0x174A90u;
label_174a90:
    // 0x174a90: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x174a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x174a94: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x174a94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x174a98: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x174a98u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_174a9c:
    // 0x174a9c: 0x0  nop
    ctx->pc = 0x174a9cu;
    // NOP
    // 0x174aa0: 0x147182a  slt         $v1, $t2, $a3
    ctx->pc = 0x174aa0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x174aa4: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x174AA4u;
    {
        const bool branch_taken_0x174aa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x174aa4) {
            ctx->pc = 0x174A68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_174a68;
        }
    }
    ctx->pc = 0x174AACu;
label_174aac:
    // 0x174aac: 0x0  nop
    ctx->pc = 0x174aacu;
    // NOP
    // 0x174ab0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x174ab0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x174ab4: 0x29220008  slti        $v0, $t1, 0x8
    ctx->pc = 0x174ab4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x174ab8: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x174AB8u;
    {
        const bool branch_taken_0x174ab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x174ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174AB8u;
            // 0x174abc: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174ab8) {
            ctx->pc = 0x174A4Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_174a4c;
        }
    }
    ctx->pc = 0x174AC0u;
    // 0x174ac0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x174ac0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174ac4:
    // 0x174ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x174AC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x174ACCu;
}
