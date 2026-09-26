#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__9CGiftMarkFv
// Address: 0x1c9ea0 - 0x1c9f0c
void Step__9CGiftMarkFv_0x1c9ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__9CGiftMarkFv_0x1c9ea0");
#endif

    ctx->pc = 0x1c9ea0u;

    // 0x1c9ea0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1c9ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c9ea4: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C9EA4u;
    {
        const bool branch_taken_0x1c9ea4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9ea4) {
            ctx->pc = 0x1C9F04u;
            goto label_1c9f04;
        }
    }
    ctx->pc = 0x1C9EACu;
    // 0x1c9eac: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x1c9eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c9eb0: 0x3c033e06  lui         $v1, 0x3E06
    ctx->pc = 0x1c9eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15878 << 16));
    // 0x1c9eb4: 0x34650a92  ori         $a1, $v1, 0xA92
    ctx->pc = 0x1c9eb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
    // 0x1c9eb8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1c9eb8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9ebc: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1c9ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x1c9ec0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1c9ec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1c9ec4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1c9ec4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c9ec8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c9ec8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c9ecc: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1c9eccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c9ed0: 0x0  nop
    ctx->pc = 0x1c9ed0u;
    // NOP
    // 0x1c9ed4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1C9ED4u;
    {
        const bool branch_taken_0x1c9ed4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C9ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9ED4u;
            // 0x1c9ed8: 0xe4800008  swc1        $f0, 0x8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9ed4) {
            ctx->pc = 0x1C9EE4u;
            goto label_1c9ee4;
        }
    }
    ctx->pc = 0x1C9EDCu;
    // 0x1c9edc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1c9edcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1c9ee0: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1c9ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_1c9ee4:
    // 0x1c9ee4: 0x84830010  lh          $v1, 0x10($a0)
    ctx->pc = 0x1c9ee4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c9ee8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c9ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c9eec: 0xa4830010  sh          $v1, 0x10($a0)
    ctx->pc = 0x1c9eecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c9ef0: 0x84830010  lh          $v1, 0x10($a0)
    ctx->pc = 0x1c9ef0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c9ef4: 0x286100f1  slti        $at, $v1, 0xF1
    ctx->pc = 0x1c9ef4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)241) ? 1 : 0);
    // 0x1c9ef8: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C9EF8u;
    {
        const bool branch_taken_0x1c9ef8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9ef8) {
            ctx->pc = 0x1C9F04u;
            goto label_1c9f04;
        }
    }
    ctx->pc = 0x1C9F00u;
    // 0x1c9f00: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1c9f00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_1c9f04:
    // 0x1c9f04: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9F04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C9F0Cu;
}
