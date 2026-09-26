#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetRandamNumber__Ffff
// Address: 0x302a10 - 0x302a8c
void GetRandamNumber__Ffff_0x302a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetRandamNumber__Ffff_0x302a10");
#endif

    switch (ctx->pc) {
        case 0x302a34u: goto label_302a34;
        case 0x302a68u: goto label_302a68;
        default: break;
    }

    ctx->pc = 0x302a10u;

    // 0x302a10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x302a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x302a14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x302a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x302a18: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x302a18u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x302a1c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x302a1cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x302a20: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x302a20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x302a24: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x302a24u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x302a28: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x302a28u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x302a2c: 0xc04c3c8  jal         func_130F20
    ctx->pc = 0x302A2Cu;
    SET_GPR_U32(ctx, 31, 0x302A34u);
    ctx->pc = 0x302A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302A2Cu;
            // 0x302a30: 0x46007506  mov.s       $f20, $f14 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130F20u;
    if (runtime->hasFunction(0x130F20u)) {
        auto targetFn = runtime->lookupFunction(0x130F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302A34u; }
        if (ctx->pc != 0x302A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgNRnd__Fv_0x130f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302A34u; }
        if (ctx->pc != 0x302A34u) { return; }
    }
    ctx->pc = 0x302A34u;
label_302a34:
    // 0x302a34: 0x4616a881  sub.s       $f2, $f21, $f22
    ctx->pc = 0x302a34u;
    ctx->f[2] = FPU_SUB_S(ctx->f[21], ctx->f[22]);
    // 0x302a38: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x302a38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x302a3c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x302a3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x302a40: 0x0  nop
    ctx->pc = 0x302a40u;
    // NOP
    // 0x302a44: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x302a44u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x302a48: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x302a48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x302a4c: 0x4600b000  add.s       $f0, $f22, $f0
    ctx->pc = 0x302a4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
    // 0x302a50: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x302a50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x302a54: 0x0  nop
    ctx->pc = 0x302a54u;
    // NOP
    // 0x302a58: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x302A58u;
    {
        const bool branch_taken_0x302a58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x302a58) {
            ctx->pc = 0x302A74u;
            goto label_302a74;
        }
    }
    ctx->pc = 0x302A60u;
    // 0x302a60: 0xc04c3b8  jal         func_130EE0
    ctx->pc = 0x302A60u;
    SET_GPR_U32(ctx, 31, 0x302A68u);
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302A68u; }
        if (ctx->pc != 0x302A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302A68u; }
        if (ctx->pc != 0x302A68u) { return; }
    }
    ctx->pc = 0x302A68u;
label_302a68:
    // 0x302a68: 0x4614b041  sub.s       $f1, $f22, $f20
    ctx->pc = 0x302a68u;
    ctx->f[1] = FPU_SUB_S(ctx->f[22], ctx->f[20]);
    // 0x302a6c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x302a6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x302a70: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x302a70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_302a74:
    // 0x302a74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x302a74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x302a78: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x302a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x302a7c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x302a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x302a80: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x302a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x302a84: 0x3e00008  jr          $ra
    ctx->pc = 0x302A84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302A84u;
            // 0x302a88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x302A8Cu;
}
