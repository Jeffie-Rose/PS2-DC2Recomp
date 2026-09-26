#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetPointLight__FPUiPA4_fPA4_f
// Address: 0x13e580 - 0x13e5e8
void SetPointLight__FPUiPA4_fPA4_f_0x13e580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetPointLight__FPUiPA4_fPA4_f_0x13e580");
#endif

    ctx->pc = 0x13e580u;

    // 0x13e580: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x13e580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x13e584: 0x34430008  ori         $v1, $v0, 0x8
    ctx->pc = 0x13e584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x13e588: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x13e588u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x13e58c: 0x3c026c08  lui         $v0, 0x6C08
    ctx->pc = 0x13e58cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27656 << 16));
    // 0x13e590: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x13e590u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x13e594: 0x3443002d  ori         $v1, $v0, 0x2D
    ctx->pc = 0x13e594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45);
    // 0x13e598: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x13e598u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x13e59c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x13e59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x13e5a0: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x13e5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x13e5a4: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x13e5a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13e5a8: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x13e5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x13e5ac: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x13e5acu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x13e5b0: 0x7c830020  sq          $v1, 0x20($a0)
    ctx->pc = 0x13e5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 3));
    // 0x13e5b4: 0x78a30020  lq          $v1, 0x20($a1)
    ctx->pc = 0x13e5b4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x13e5b8: 0x7c830030  sq          $v1, 0x30($a0)
    ctx->pc = 0x13e5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 3));
    // 0x13e5bc: 0x78a30030  lq          $v1, 0x30($a1)
    ctx->pc = 0x13e5bcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x13e5c0: 0x7c830040  sq          $v1, 0x40($a0)
    ctx->pc = 0x13e5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 3));
    // 0x13e5c4: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x13e5c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13e5c8: 0x7c830050  sq          $v1, 0x50($a0)
    ctx->pc = 0x13e5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 3));
    // 0x13e5cc: 0x78c30010  lq          $v1, 0x10($a2)
    ctx->pc = 0x13e5ccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x13e5d0: 0x7c830060  sq          $v1, 0x60($a0)
    ctx->pc = 0x13e5d0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), GPR_VEC(ctx, 3));
    // 0x13e5d4: 0x78c30020  lq          $v1, 0x20($a2)
    ctx->pc = 0x13e5d4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x13e5d8: 0x7c830070  sq          $v1, 0x70($a0)
    ctx->pc = 0x13e5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), GPR_VEC(ctx, 3));
    // 0x13e5dc: 0x78c30030  lq          $v1, 0x30($a2)
    ctx->pc = 0x13e5dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x13e5e0: 0x3e00008  jr          $ra
    ctx->pc = 0x13E5E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E5E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E5E0u;
            // 0x13e5e4: 0x7c830080  sq          $v1, 0x80($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 128), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13E5E8u;
}
