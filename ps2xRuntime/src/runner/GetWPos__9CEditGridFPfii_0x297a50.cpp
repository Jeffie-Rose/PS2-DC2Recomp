#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetWPos__9CEditGridFPfii
// Address: 0x297a50 - 0x297a9c
void GetWPos__9CEditGridFPfii_0x297a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetWPos__9CEditGridFPfii_0x297a50");
#endif

    ctx->pc = 0x297a50u;

    // 0x297a50: 0x44861800  mtc1        $a2, $f3
    ctx->pc = 0x297a50u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x297a54: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x297a54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x297a58: 0xc482000c  lwc1        $f2, 0xC($a0)
    ctx->pc = 0x297a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x297a5c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x297a5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x297a60: 0xc4810020  lwc1        $f1, 0x20($a0)
    ctx->pc = 0x297a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297a64: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x297a64u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x297a68: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x297a68u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x297a6c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x297a6cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x297a70: 0x0  nop
    ctx->pc = 0x297a70u;
    // NOP
    // 0x297a74: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x297a74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x297a78: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x297a78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x297a7c: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x297a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297a80: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x297a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297a84: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x297a84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x297a88: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x297a88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x297a8c: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x297a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x297a90: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x297a90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x297a94: 0x3e00008  jr          $ra
    ctx->pc = 0x297A94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297A94u;
            // 0x297a98: 0xaca3000c  sw          $v1, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x297A9Cu;
}
