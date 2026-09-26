#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetShadowData__FPUiPA4_f
// Address: 0x139f10 - 0x139fbc
void SetShadowData__FPUiPA4_f_0x139f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetShadowData__FPUiPA4_f_0x139f10");
#endif

    ctx->pc = 0x139f10u;

    // 0x139f10: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x139f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x139f14: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x139f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x139f18: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x139f18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x139f1c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x139f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x139f20: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x139f20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x139f24: 0x3c026c08  lui         $v0, 0x6C08
    ctx->pc = 0x139f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27656 << 16));
    // 0x139f28: 0x34420028  ori         $v0, $v0, 0x28
    ctx->pc = 0x139f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40);
    // 0x139f2c: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x139f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x139f30: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x139f30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x139f34: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x139f34u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x139f38: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x139f38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x139f3c: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x139f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x139f40: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x139f40u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x139f44: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x139f44u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x139f48: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x139f48u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x139f4c: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x139f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
    // 0x139f50: 0x34078001  ori         $a3, $zero, 0x8001
    ctx->pc = 0x139f50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x139f54: 0xac870050  sw          $a3, 0x50($a0)
    ctx->pc = 0x139f54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 7));
    // 0x139f58: 0x3c02102e  lui         $v0, 0x102E
    ctx->pc = 0x139f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4142 << 16));
    // 0x139f5c: 0x34488000  ori         $t0, $v0, 0x8000
    ctx->pc = 0x139f5cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x139f60: 0xac880054  sw          $t0, 0x54($a0)
    ctx->pc = 0x139f60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 8));
    // 0x139f64: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x139f64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x139f68: 0xac860058  sw          $a2, 0x58($a0)
    ctx->pc = 0x139f68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 6));
    // 0x139f6c: 0xac80005c  sw          $zero, 0x5C($a0)
    ctx->pc = 0x139f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 0));
    // 0x139f70: 0x24020068  addiu       $v0, $zero, 0x68
    ctx->pc = 0x139f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x139f74: 0xac820060  sw          $v0, 0x60($a0)
    ctx->pc = 0x139f74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 2));
    // 0x139f78: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x139f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x139f7c: 0xac850064  sw          $a1, 0x64($a0)
    ctx->pc = 0x139f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 5));
    // 0x139f80: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x139f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x139f84: 0xac830068  sw          $v1, 0x68($a0)
    ctx->pc = 0x139f84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 3));
    // 0x139f88: 0xac80006c  sw          $zero, 0x6C($a0)
    ctx->pc = 0x139f88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 0));
    // 0x139f8c: 0xac870070  sw          $a3, 0x70($a0)
    ctx->pc = 0x139f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 7));
    // 0x139f90: 0xac880074  sw          $t0, 0x74($a0)
    ctx->pc = 0x139f90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 8));
    // 0x139f94: 0xac860078  sw          $a2, 0x78($a0)
    ctx->pc = 0x139f94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 6));
    // 0x139f98: 0xac80007c  sw          $zero, 0x7C($a0)
    ctx->pc = 0x139f98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 0));
    // 0x139f9c: 0x24020062  addiu       $v0, $zero, 0x62
    ctx->pc = 0x139f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x139fa0: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x139fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x139fa4: 0xac850084  sw          $a1, 0x84($a0)
    ctx->pc = 0x139fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 5));
    // 0x139fa8: 0xac830088  sw          $v1, 0x88($a0)
    ctx->pc = 0x139fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 3));
    // 0x139fac: 0xac80008c  sw          $zero, 0x8C($a0)
    ctx->pc = 0x139facu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 0));
    // 0x139fb0: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x139fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x139fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x139FB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x139FBCu;
}
