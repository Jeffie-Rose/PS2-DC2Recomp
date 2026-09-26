#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ConvertNameRegiBaseBoardTable__Fi
// Address: 0x30d300 - 0x30d340
void ConvertNameRegiBaseBoardTable__Fi_0x30d300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ConvertNameRegiBaseBoardTable__Fi_0x30d300");
#endif

    ctx->pc = 0x30d300u;

    // 0x30d300: 0x27828618  addiu       $v0, $gp, -0x79E8
    ctx->pc = 0x30d300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936088));
    // 0x30d304: 0x8f838ad0  lw          $v1, -0x7530($gp)
    ctx->pc = 0x30d304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x30d308: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x30d308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x30d30c: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x30d30cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30d310: 0x18600009  blez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x30D310u;
    {
        const bool branch_taken_0x30d310 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x30D314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D310u;
            // 0x30d314: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d310) {
            ctx->pc = 0x30D338u;
            goto label_30d338;
        }
    }
    ctx->pc = 0x30D318u;
    // 0x30d318: 0xc7808620  lwc1        $f0, -0x79E0($gp)
    ctx->pc = 0x30d318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30d31c: 0x93838624  lbu         $v1, -0x79DC($gp)
    ctx->pc = 0x30d31cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936100)));
    // 0x30d320: 0x9d1021  addu        $v0, $a0, $sp
    ctx->pc = 0x30d320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x30d324: 0x27a40008  addiu       $a0, $sp, 0x8
    ctx->pc = 0x30d324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x30d328: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x30d328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x30d32c: 0xa0830004  sb          $v1, 0x4($a0)
    ctx->pc = 0x30d32cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x30d330: 0x80420008  lb          $v0, 0x8($v0)
    ctx->pc = 0x30d330u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x30d334: 0x0  nop
    ctx->pc = 0x30d334u;
    // NOP
label_30d338:
    // 0x30d338: 0x3e00008  jr          $ra
    ctx->pc = 0x30D338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D33Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D338u;
            // 0x30d33c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30D340u;
}
