#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: trans_float_to_sceVector__FPfPfi
// Address: 0x1be6a0 - 0x1be6ec
void trans_float_to_sceVector__FPfPfi_0x1be6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("trans_float_to_sceVector__FPfPfi_0x1be6a0");
#endif

    ctx->pc = 0x1be6a0u;

    // 0x1be6a0: 0x14c0000a  bnez        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x1BE6A0u;
    {
        const bool branch_taken_0x1be6a0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1be6a0) {
            ctx->pc = 0x1BE6CCu;
            goto label_1be6cc;
        }
    }
    ctx->pc = 0x1BE6A8u;
    // 0x1be6a8: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1be6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1be6ac: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1be6acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1be6b0: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1be6b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1be6b4: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1be6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1be6b8: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1be6b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1be6bc: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1be6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1be6c0: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1be6c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1be6c4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BE6C4u;
    {
        const bool branch_taken_0x1be6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE6C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE6C4u;
            // 0x1be6c8: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be6c4) {
            ctx->pc = 0x1BE6E4u;
            goto label_1be6e4;
        }
    }
    ctx->pc = 0x1BE6CCu;
label_1be6cc:
    // 0x1be6cc: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1be6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1be6d0: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1be6d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1be6d4: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x1be6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1be6d8: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x1be6d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x1be6dc: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1be6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1be6e0: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x1be6e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_1be6e4:
    // 0x1be6e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE6E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BE6ECu;
}
