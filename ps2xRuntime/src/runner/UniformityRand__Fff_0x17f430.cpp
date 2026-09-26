#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: UniformityRand__Fff
// Address: 0x17f430 - 0x17f494
void UniformityRand__Fff_0x17f430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UniformityRand__Fff_0x17f430");
#endif

    switch (ctx->pc) {
        case 0x17f44cu: goto label_17f44c;
        default: break;
    }

    ctx->pc = 0x17f430u;

    // 0x17f430: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17f430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17f434: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17f434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17f438: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x17f438u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x17f43c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x17f43cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x17f440: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x17f440u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x17f444: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x17F444u;
    SET_GPR_U32(ctx, 31, 0x17F44Cu);
    ctx->pc = 0x17F448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F444u;
            // 0x17f448: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F44Cu; }
        if (ctx->pc != 0x17F44Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F44Cu; }
        if (ctx->pc != 0x17F44Cu) { return; }
    }
    ctx->pc = 0x17F44Cu;
label_17f44c:
    // 0x17f44c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17f44cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17f450: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17f450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f454: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x17f454u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17f458: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x17f458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x17f45c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17f45cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17f460: 0x0  nop
    ctx->pc = 0x17f460u;
    // NOP
    // 0x17f464: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x17f464u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x17f468: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x17f468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x17f46c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17f46cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17f470: 0x0  nop
    ctx->pc = 0x17f470u;
    // NOP
    // 0x17f474: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x17f474u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x17f478: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x17f478u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x17f47c: 0x4601a840  add.s       $f1, $f21, $f1
    ctx->pc = 0x17f47cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
    // 0x17f480: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x17f480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x17f484: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x17f484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17f488: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x17f488u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x17f48c: 0x3e00008  jr          $ra
    ctx->pc = 0x17F48Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F48Cu;
            // 0x17f490: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17F494u;
}
