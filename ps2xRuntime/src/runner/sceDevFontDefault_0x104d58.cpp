#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sceDevFontDefault
// Address: 0x104d58 - 0x104de0
void sceDevFontDefault_0x104d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDevFontDefault_0x104d58");
#endif

    ctx->pc = 0x104d58u;

    // 0x104d58: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x104d58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x104d5c: 0x3c0780ff  lui         $a3, 0x80FF
    ctx->pc = 0x104d5cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)33023 << 16));
    // 0x104d60: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x104d60u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x104d64: 0x3c0980ff  lui         $t1, 0x80FF
    ctx->pc = 0x104d64u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)33023 << 16));
    // 0x104d68: 0x3c0a8000  lui         $t2, 0x8000
    ctx->pc = 0x104d68u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32768 << 16));
    // 0x104d6c: 0x3c0280ff  lui         $v0, 0x80FF
    ctx->pc = 0x104d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33023 << 16));
    // 0x104d70: 0x240f0080  addiu       $t7, $zero, 0x80
    ctx->pc = 0x104d70u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x104d74: 0x240b0010  addiu       $t3, $zero, 0x10
    ctx->pc = 0x104d74u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x104d78: 0x240c003c  addiu       $t4, $zero, 0x3C
    ctx->pc = 0x104d78u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x104d7c: 0x3c0d8000  lui         $t5, 0x8000
    ctx->pc = 0x104d7cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)32768 << 16));
    // 0x104d80: 0x3c0e80ff  lui         $t6, 0x80FF
    ctx->pc = 0x104d80u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)33023 << 16));
    // 0x104d84: 0x346300ff  ori         $v1, $v1, 0xFF
    ctx->pc = 0x104d84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)255);
    // 0x104d88: 0x34e700ff  ori         $a3, $a3, 0xFF
    ctx->pc = 0x104d88u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)255);
    // 0x104d8c: 0x3508ff00  ori         $t0, $t0, 0xFF00
    ctx->pc = 0x104d8cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65280);
    // 0x104d90: 0x3529ff00  ori         $t1, $t1, 0xFF00
    ctx->pc = 0x104d90u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65280);
    // 0x104d94: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x104d94u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x104d98: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x104d98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x104d9c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x104d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x104da0: 0xac82003c  sw          $v0, 0x3C($a0)
    ctx->pc = 0x104da0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 2));
    // 0x104da4: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x104da4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x104da8: 0xac8b0010  sw          $t3, 0x10($a0)
    ctx->pc = 0x104da8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 11));
    // 0x104dac: 0xac8f000c  sw          $t7, 0xC($a0)
    ctx->pc = 0x104dacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 15));
    // 0x104db0: 0xac8c001c  sw          $t4, 0x1C($a0)
    ctx->pc = 0x104db0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 12));
    // 0x104db4: 0xac8d0020  sw          $t5, 0x20($a0)
    ctx->pc = 0x104db4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 13));
    // 0x104db8: 0xac8e0024  sw          $t6, 0x24($a0)
    ctx->pc = 0x104db8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 14));
    // 0x104dbc: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x104dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
    // 0x104dc0: 0xac87002c  sw          $a3, 0x2C($a0)
    ctx->pc = 0x104dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 7));
    // 0x104dc4: 0xac880030  sw          $t0, 0x30($a0)
    ctx->pc = 0x104dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 8));
    // 0x104dc8: 0xac890034  sw          $t1, 0x34($a0)
    ctx->pc = 0x104dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 9));
    // 0x104dcc: 0xac8a0038  sw          $t2, 0x38($a0)
    ctx->pc = 0x104dccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 10));
    // 0x104dd0: 0xac8f0008  sw          $t7, 0x8($a0)
    ctx->pc = 0x104dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 15));
    // 0x104dd4: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x104dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x104dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x104DD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104DD8u;
            // 0x104ddc: 0xac800018  sw          $zero, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x104DE0u;
}
