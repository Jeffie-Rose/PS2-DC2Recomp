#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: search_txt__Fc
// Address: 0x31c940 - 0x31c9b8
void search_txt__Fc_0x31c940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("search_txt__Fc_0x31c940");
#endif

    switch (ctx->pc) {
        case 0x31c958u: goto label_31c958;
        default: break;
    }

    ctx->pc = 0x31c940u;

    // 0x31c940: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31c940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31c944: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31c944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31c948: 0xa3a40010  sb          $a0, 0x10($sp)
    ctx->pc = 0x31c948u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 4));
    // 0x31c94c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x31c94cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c950: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x31C950u;
    {
        const bool branch_taken_0x31c950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c950) {
            ctx->pc = 0x31C994u;
            goto label_31c994;
        }
    }
    ctx->pc = 0x31C958u;
label_31c958:
    // 0x31c958: 0x83a20010  lb          $v0, 0x10($sp)
    ctx->pc = 0x31c958u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31c95c: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x31c95cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x31c960: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x31c960u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x31c964: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x31c964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x31c968: 0x2442e8c0  addiu       $v0, $v0, -0x1740
    ctx->pc = 0x31c968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961344));
    // 0x31c96c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x31c96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x31c970: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x31c970u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31c974: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x31c974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x31c978: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x31c978u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x31c97c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31C97Cu;
    {
        const bool branch_taken_0x31c97c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x31c97c) {
            ctx->pc = 0x31C990u;
            goto label_31c990;
        }
    }
    ctx->pc = 0x31C984u;
    // 0x31c984: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x31c984u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c988: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x31C988u;
    {
        const bool branch_taken_0x31c988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c988) {
            ctx->pc = 0x31C9A8u;
            goto label_31c9a8;
        }
    }
    ctx->pc = 0x31C990u;
label_31c990:
    // 0x31c990: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x31c990u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_31c994:
    // 0x31c994: 0x0  nop
    ctx->pc = 0x31c994u;
    // NOP
    // 0x31c998: 0x2a02003a  slti        $v0, $s0, 0x3A
    ctx->pc = 0x31c998u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x31c99c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x31C99Cu;
    {
        const bool branch_taken_0x31c99c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31c99c) {
            ctx->pc = 0x31C958u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31c958;
        }
    }
    ctx->pc = 0x31C9A4u;
    // 0x31c9a4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x31c9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_31c9a8:
    // 0x31c9a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31c9a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31c9ac: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x31c9acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31c9b0: 0x3e00008  jr          $ra
    ctx->pc = 0x31C9B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31C9B8u;
}
