#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ConvEditAngle__8CEditMapFf
// Address: 0x1b0f50 - 0x1b0ff0
void ConvEditAngle__8CEditMapFf_0x1b0f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ConvEditAngle__8CEditMapFf_0x1b0f50");
#endif

    switch (ctx->pc) {
        case 0x1b0fa8u: goto label_1b0fa8;
        case 0x1b0fdcu: goto label_1b0fdc;
        default: break;
    }

    ctx->pc = 0x1b0f50u;

    // 0x1b0f50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b0f50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0f54: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b0f54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b0f58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b0f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b0f5c: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1b0f5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b0f60: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b0f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b0f64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b0f64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0f68: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1B0F68u;
    {
        const bool branch_taken_0x1b0f68 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B0F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0F68u;
            // 0x1b0f6c: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0f68) {
            ctx->pc = 0x1B0F84u;
            goto label_1b0f84;
        }
    }
    ctx->pc = 0x1B0F70u;
    // 0x1b0f70: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1b0f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1b0f74: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b0f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1b0f78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b0f78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0f7c: 0x0  nop
    ctx->pc = 0x1b0f7cu;
    // NOP
    // 0x1b0f80: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x1b0f80u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_1b0f84:
    // 0x1b0f84: 0x3c023e86  lui         $v0, 0x3E86
    ctx->pc = 0x1b0f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16006 << 16));
    // 0x1b0f88: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x1b0f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x1b0f8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b0f8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0f90: 0x0  nop
    ctx->pc = 0x1b0f90u;
    // NOP
    // 0x1b0f94: 0x46006503  div.s       $f20, $f12, $f0
    ctx->pc = 0x1b0f94u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[12], ctx->f[0]); }
    // 0x1b0f98: 0x0  nop
    ctx->pc = 0x1b0f98u;
    // NOP
    // 0x1b0f9c: 0x0  nop
    ctx->pc = 0x1b0f9cu;
    // NOP
    // 0x1b0fa0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1B0FA0u;
    SET_GPR_U32(ctx, 31, 0x1B0FA8u);
    ctx->pc = 0x1B0FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0FA0u;
            // 0x1b0fa4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0FA8u; }
        if (ctx->pc != 0x1B0FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0FA8u; }
        if (ctx->pc != 0x1B0FA8u) { return; }
    }
    ctx->pc = 0x1B0FA8u;
label_1b0fa8:
    // 0x1b0fa8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b0fa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b0fac: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1b0facu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1b0fb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b0fb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0fb4: 0x0  nop
    ctx->pc = 0x1b0fb4u;
    // NOP
    // 0x1b0fb8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b0fb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b0fbc: 0x4601a041  sub.s       $f1, $f20, $f1
    ctx->pc = 0x1b0fbcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x1b0fc0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b0fc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b0fc4: 0x0  nop
    ctx->pc = 0x1b0fc4u;
    // NOP
    // 0x1b0fc8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1B0FC8u;
    {
        const bool branch_taken_0x1b0fc8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B0FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0FC8u;
            // 0x1b0fcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0fc8) {
            ctx->pc = 0x1B0FD4u;
            goto label_1b0fd4;
        }
    }
    ctx->pc = 0x1B0FD0u;
    // 0x1b0fd0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1b0fd4:
    // 0x1b0fd4: 0xc06c3fc  jal         func_1B0FF0
    ctx->pc = 0x1B0FD4u;
    SET_GPR_U32(ctx, 31, 0x1B0FDCu);
    ctx->pc = 0x1B0FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0FD4u;
            // 0x1b0fd8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FF0u;
    if (runtime->hasFunction(0x1B0FF0u)) {
        auto targetFn = runtime->lookupFunction(0x1B0FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0FDCu; }
        if (ctx->pc != 0x1B0FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AngleLimit__8CEditMapFi_0x1b0ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0FDCu; }
        if (ctx->pc != 0x1B0FDCu) { return; }
    }
    ctx->pc = 0x1B0FDCu;
label_1b0fdc:
    // 0x1b0fdc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b0fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b0fe0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1b0fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b0fe4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b0fe4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b0fe8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0FE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0FE8u;
            // 0x1b0fec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B0FF0u;
}
