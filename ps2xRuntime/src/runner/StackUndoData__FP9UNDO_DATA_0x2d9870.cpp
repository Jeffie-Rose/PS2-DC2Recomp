#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StackUndoData__FP9UNDO_DATA
// Address: 0x2d9870 - 0x2d98dc
void StackUndoData__FP9UNDO_DATA_0x2d9870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StackUndoData__FP9UNDO_DATA_0x2d9870");
#endif

    ctx->pc = 0x2d9870u;

    // 0x2d9870: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x2d9870u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d9874: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2d9874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x2d9878: 0x3c0501f6  lui         $a1, 0x1F6
    ctx->pc = 0x2d9878u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
    // 0x2d987c: 0x3c0301f6  lui         $v1, 0x1F6
    ctx->pc = 0x2d987cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
    // 0x2d9880: 0x24a588c0  addiu       $a1, $a1, -0x7740
    ctx->pc = 0x2d9880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936768));
    // 0x2d9884: 0x246388d0  addiu       $v1, $v1, -0x7730
    ctx->pc = 0x2d9884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936784));
    // 0x2d9888: 0xac2688b0  sw          $a2, -0x7750($at)
    ctx->pc = 0x2d9888u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294936752), GPR_U32(ctx, 6));
    // 0x2d988c: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x2d988cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d9890: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2d9890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x2d9894: 0xac2688b4  sw          $a2, -0x774C($at)
    ctx->pc = 0x2d9894u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294936756), GPR_U32(ctx, 6));
    // 0x2d9898: 0xc4830010  lwc1        $f3, 0x10($a0)
    ctx->pc = 0x2d9898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d989c: 0xc4820014  lwc1        $f2, 0x14($a0)
    ctx->pc = 0x2d989cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d98a0: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x2d98a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d98a4: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x2d98a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d98a8: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x2d98a8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2d98ac: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x2d98acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x2d98b0: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x2d98b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x2d98b4: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x2d98b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x2d98b8: 0xc4830020  lwc1        $f3, 0x20($a0)
    ctx->pc = 0x2d98b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d98bc: 0xc4820024  lwc1        $f2, 0x24($a0)
    ctx->pc = 0x2d98bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d98c0: 0xc4810028  lwc1        $f1, 0x28($a0)
    ctx->pc = 0x2d98c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d98c4: 0xc480002c  lwc1        $f0, 0x2C($a0)
    ctx->pc = 0x2d98c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d98c8: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x2d98c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2d98cc: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x2d98ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2d98d0: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x2d98d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2d98d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D98D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D98D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D98D4u;
            // 0x2d98d8: 0xe460000c  swc1        $f0, 0xC($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D98DCu;
}
