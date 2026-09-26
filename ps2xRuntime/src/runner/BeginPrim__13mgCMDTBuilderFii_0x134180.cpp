#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: BeginPrim__13mgCMDTBuilderFii
// Address: 0x134180 - 0x134210
void BeginPrim__13mgCMDTBuilderFii_0x134180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BeginPrim__13mgCMDTBuilderFii_0x134180");
#endif

    ctx->pc = 0x134180u;

    // 0x134180: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x134180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x134184: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x134184u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x134188: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x134188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x13418c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x13418cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x134190: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x134190u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x134194: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x134194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x134198: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x134198u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x13419c: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x13419cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1341a0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1341a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1341a4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1341a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1341a8: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x1341a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x1341ac: 0x30a30010  andi        $v1, $a1, 0x10
    ctx->pc = 0x1341acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
    // 0x1341b0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1341B0u;
    {
        const bool branch_taken_0x1341b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1341b0) {
            ctx->pc = 0x1341C4u;
            goto label_1341c4;
        }
    }
    ctx->pc = 0x1341B8u;
    // 0x1341b8: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x1341b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1341bc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1341bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1341c0: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x1341c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
label_1341c4:
    // 0x1341c4: 0x30a30100  andi        $v1, $a1, 0x100
    ctx->pc = 0x1341c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)256);
    // 0x1341c8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1341C8u;
    {
        const bool branch_taken_0x1341c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1341c8) {
            ctx->pc = 0x1341DCu;
            goto label_1341dc;
        }
    }
    ctx->pc = 0x1341D0u;
    // 0x1341d0: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x1341d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1341d4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1341d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1341d8: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x1341d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
label_1341dc:
    // 0x1341dc: 0x30a30200  andi        $v1, $a1, 0x200
    ctx->pc = 0x1341dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)512);
    // 0x1341e0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1341E0u;
    {
        const bool branch_taken_0x1341e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1341e0) {
            ctx->pc = 0x1341F4u;
            goto label_1341f4;
        }
    }
    ctx->pc = 0x1341E8u;
    // 0x1341e8: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x1341e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1341ec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1341ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1341f0: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x1341f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
label_1341f4:
    // 0x1341f4: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x1341f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x1341f8: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x1341f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1341fc: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x1341fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x134200: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x134200u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x134204: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x134204u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x134208: 0x3e00008  jr          $ra
    ctx->pc = 0x134208u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x134210u;
}
