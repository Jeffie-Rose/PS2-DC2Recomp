#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuSetPos__12CMenuKeyFuncFii
// Address: 0x23c000 - 0x23c030
void MenuSetPos__12CMenuKeyFuncFii_0x23c000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuSetPos__12CMenuKeyFuncFii_0x23c000");
#endif

    ctx->pc = 0x23c000u;

    // 0x23c000: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x23c000u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23c004: 0x8c830138  lw          $v1, 0x138($a0)
    ctx->pc = 0x23c004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 312)));
    // 0x23c008: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x23c008u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c00c: 0x0  nop
    ctx->pc = 0x23c00cu;
    // NOP
    // 0x23c010: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x23c010u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x23c014: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23c014u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x23c018: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x23c018u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x23c01c: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x23c01cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x23c020: 0x8c83013c  lw          $v1, 0x13C($a0)
    ctx->pc = 0x23c020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 316)));
    // 0x23c024: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x23c024u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x23c028: 0x3e00008  jr          $ra
    ctx->pc = 0x23C028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C02Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C028u;
            // 0x23c02c: 0xe4600010  swc1        $f0, 0x10($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23C030u;
}
