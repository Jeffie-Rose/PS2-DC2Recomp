#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: f_rand__Fff
// Address: 0x281300 - 0x281350
void f_rand__Fff_0x281300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("f_rand__Fff_0x281300");
#endif

    switch (ctx->pc) {
        case 0x28131cu: goto label_28131c;
        default: break;
    }

    ctx->pc = 0x281300u;

    // 0x281300: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x281300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x281304: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x281304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x281308: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x281308u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x28130c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x28130cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x281310: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x281310u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x281314: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x281314u;
    SET_GPR_U32(ctx, 31, 0x28131Cu);
    ctx->pc = 0x281318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281314u;
            // 0x281318: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28131Cu; }
        if (ctx->pc != 0x28131Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28131Cu; }
        if (ctx->pc != 0x28131Cu) { return; }
    }
    ctx->pc = 0x28131Cu;
label_28131c:
    // 0x28131c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28131cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x281320: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x281320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x281324: 0x4615a001  sub.s       $f0, $f20, $f21
    ctx->pc = 0x281324u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
    // 0x281328: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x281328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x28132c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x28132cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x281330: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x281330u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x281334: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x281334u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281338: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x281338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28133c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x28133cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x281340: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x281340u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x281344: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x281344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x281348: 0x3e00008  jr          $ra
    ctx->pc = 0x281348u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28134Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281348u;
            // 0x28134c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x281350u;
}
