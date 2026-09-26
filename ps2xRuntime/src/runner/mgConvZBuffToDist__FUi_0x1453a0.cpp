#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgConvZBuffToDist__FUi
// Address: 0x1453a0 - 0x1453f4
void mgConvZBuffToDist__FUi_0x1453a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgConvZBuffToDist__FUi_0x1453a0");
#endif

    ctx->pc = 0x1453a0u;

    // 0x1453a0: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1453A0u;
    {
        const bool branch_taken_0x1453a0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1453A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1453A0u;
            // 0x1453a4: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1453a0) {
            ctx->pc = 0x1453B4u;
            goto label_1453b4;
        }
    }
    ctx->pc = 0x1453A8u;
    // 0x1453a8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1453a8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1453ac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1453ACu;
    {
        const bool branch_taken_0x1453ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1453B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1453ACu;
            // 0x1453b0: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1453ac) {
            ctx->pc = 0x1453CCu;
            goto label_1453cc;
        }
    }
    ctx->pc = 0x1453B4u;
label_1453b4:
    // 0x1453b4: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1453b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1453b8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1453b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1453bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1453bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1453c0: 0x0  nop
    ctx->pc = 0x1453c0u;
    // NOP
    // 0x1453c4: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1453c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1453c8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1453c8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1453cc:
    // 0x1453cc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1453ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1453d0: 0xc4210f38  lwc1        $f1, 0xF38($at)
    ctx->pc = 0x1453d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 3896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1453d4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1453d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1453d8: 0xc4200f48  lwc1        $f0, 0xF48($at)
    ctx->pc = 0x1453d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 3912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1453dc: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1453dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1453e0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1453e0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1453e4: 0x0  nop
    ctx->pc = 0x1453e4u;
    // NOP
    // 0x1453e8: 0x0  nop
    ctx->pc = 0x1453e8u;
    // NOP
    // 0x1453ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1453ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1453F4u;
}
