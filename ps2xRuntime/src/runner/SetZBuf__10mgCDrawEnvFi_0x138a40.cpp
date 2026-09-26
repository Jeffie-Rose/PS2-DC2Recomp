#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetZBuf__10mgCDrawEnvFi
// Address: 0x138a40 - 0x138a94
void SetZBuf__10mgCDrawEnvFi_0x138a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetZBuf__10mgCDrawEnvFi_0x138a40");
#endif

    ctx->pc = 0x138a40u;

    // 0x138a40: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x138a40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x138a44: 0x10a6000b  beq         $a1, $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x138A44u;
    {
        const bool branch_taken_0x138a44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x138A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138A44u;
            // 0x138a48: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138a44) {
            ctx->pc = 0x138A74u;
            goto label_138a74;
        }
    }
    ctx->pc = 0x138A4Cu;
    // 0x138a4c: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x138A4Cu;
    {
        const bool branch_taken_0x138a4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x138A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138A4Cu;
            // 0x138a50: 0x30c50001  andi        $a1, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x138a4c) {
            ctx->pc = 0x138A5Cu;
            goto label_138a5c;
        }
    }
    ctx->pc = 0x138A54u;
    // 0x138a54: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x138A54u;
    {
        const bool branch_taken_0x138a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138a54) {
            ctx->pc = 0x138A8Cu;
            goto label_138a8c;
        }
    }
    ctx->pc = 0x138A5Cu;
label_138a5c:
    // 0x138a5c: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x138a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x138a60: 0x90860024  lbu         $a2, 0x24($a0)
    ctx->pc = 0x138a60u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x138a64: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x138a64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x138a68: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x138a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x138a6c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x138A6Cu;
    {
        const bool branch_taken_0x138a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138A6Cu;
            // 0x138a70: 0xa0830024  sb          $v1, 0x24($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 36), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138a6c) {
            ctx->pc = 0x138A8Cu;
            goto label_138a8c;
        }
    }
    ctx->pc = 0x138A74u;
label_138a74:
    // 0x138a74: 0x90860024  lbu         $a2, 0x24($a0)
    ctx->pc = 0x138a74u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x138a78: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x138a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x138a7c: 0x30050001  andi        $a1, $zero, 0x1
    ctx->pc = 0x138a7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x138a80: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x138a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x138a84: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x138a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x138a88: 0xa0830024  sb          $v1, 0x24($a0)
    ctx->pc = 0x138a88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 36), (uint8_t)GPR_U32(ctx, 3));
label_138a8c:
    // 0x138a8c: 0x3e00008  jr          $ra
    ctx->pc = 0x138A8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x138A94u;
}
