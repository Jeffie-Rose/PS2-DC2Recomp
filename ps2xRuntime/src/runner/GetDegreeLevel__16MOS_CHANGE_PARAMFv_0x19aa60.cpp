#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetDegreeLevel__16MOS_CHANGE_PARAMFv
// Address: 0x19aa60 - 0x19aa9c
void GetDegreeLevel__16MOS_CHANGE_PARAMFv_0x19aa60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetDegreeLevel__16MOS_CHANGE_PARAMFv_0x19aa60");
#endif

    ctx->pc = 0x19aa60u;

    // 0x19aa60: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x19aa60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x19aa64: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x19aa64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
    // 0x19aa68: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x19aa68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x19aa6c: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x19aa6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x19aa70: 0x0  nop
    ctx->pc = 0x19aa70u;
    // NOP
    // 0x19aa74: 0x0  nop
    ctx->pc = 0x19aa74u;
    // NOP
    // 0x19aa78: 0x1010  mfhi        $v0
    ctx->pc = 0x19aa78u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x19aa7c: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x19aa7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x19aa80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19aa80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19aa84: 0x28410010  slti        $at, $v0, 0x10
    ctx->pc = 0x19aa84u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x19aa88: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x19AA88u;
    {
        const bool branch_taken_0x19aa88 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x19aa88) {
            ctx->pc = 0x19AA94u;
            goto label_19aa94;
        }
    }
    ctx->pc = 0x19AA90u;
    // 0x19aa90: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x19aa90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_19aa94:
    // 0x19aa94: 0x3e00008  jr          $ra
    ctx->pc = 0x19AA94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19AA9Cu;
}
