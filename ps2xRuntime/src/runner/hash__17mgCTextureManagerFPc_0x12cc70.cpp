#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: hash__17mgCTextureManagerFPc
// Address: 0x12cc70 - 0x12ccc0
void hash__17mgCTextureManagerFPc_0x12cc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("hash__17mgCTextureManagerFPc_0x12cc70");
#endif

    switch (ctx->pc) {
        case 0x12cc7cu: goto label_12cc7c;
        default: break;
    }

    ctx->pc = 0x12cc70u;

    // 0x12cc70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12cc70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cc74: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x12CC74u;
    {
        const bool branch_taken_0x12cc74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12cc74) {
            ctx->pc = 0x12CCA4u;
            goto label_12cca4;
        }
    }
    ctx->pc = 0x12CC7Cu;
label_12cc7c:
    // 0x12cc7c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12cc7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12cc80: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x12cc80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x12cc84: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x12cc84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12cc88: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x12cc88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x12cc8c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x12cc8cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x12cc90: 0x0  nop
    ctx->pc = 0x12cc90u;
    // NOP
    // 0x12cc94: 0x0  nop
    ctx->pc = 0x12cc94u;
    // NOP
    // 0x12cc98: 0x1010  mfhi        $v0
    ctx->pc = 0x12cc98u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x12cc9c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12cc9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12cca0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x12cca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_12cca4:
    // 0x12cca4: 0x0  nop
    ctx->pc = 0x12cca4u;
    // NOP
    // 0x12cca8: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x12cca8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12ccac: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x12CCACu;
    {
        const bool branch_taken_0x12ccac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12ccac) {
            ctx->pc = 0x12CC7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12cc7c;
        }
    }
    ctx->pc = 0x12CCB4u;
    // 0x12ccb4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12ccb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12ccb8: 0x3e00008  jr          $ra
    ctx->pc = 0x12CCB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12CCC0u;
}
