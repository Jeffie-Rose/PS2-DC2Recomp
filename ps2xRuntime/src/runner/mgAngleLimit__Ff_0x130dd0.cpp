#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgAngleLimit__Ff
// Address: 0x130dd0 - 0x130ed4
void mgAngleLimit__Ff_0x130dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgAngleLimit__Ff_0x130dd0");
#endif

    switch (ctx->pc) {
        case 0x130e48u: goto label_130e48;
        default: break;
    }

    ctx->pc = 0x130dd0u;

    // 0x130dd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x130dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x130dd4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x130dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x130dd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x130dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x130ddc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x130ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x130de0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x130de0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x130de4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x130de4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x130de8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x130de8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x130dec: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x130decu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x130df0: 0x0  nop
    ctx->pc = 0x130df0u;
    // NOP
    // 0x130df4: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x130DF4u;
    {
        const bool branch_taken_0x130df4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x130DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130DF4u;
            // 0x130df8: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130df4) {
            ctx->pc = 0x130E28u;
            goto label_130e28;
        }
    }
    ctx->pc = 0x130DFCu;
    // 0x130dfc: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x130dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x130e00: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x130e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x130e04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x130e04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x130e08: 0x0  nop
    ctx->pc = 0x130e08u;
    // NOP
    // 0x130e0c: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x130e0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x130e10: 0x0  nop
    ctx->pc = 0x130e10u;
    // NOP
    // 0x130e14: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x130E14u;
    {
        const bool branch_taken_0x130e14 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x130E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130E14u;
            // 0x130e18: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x130e14) {
            ctx->pc = 0x130E24u;
            goto label_130e24;
        }
    }
    ctx->pc = 0x130E1Cu;
    // 0x130e1c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x130E1Cu;
    {
        const bool branch_taken_0x130e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130E1Cu;
            // 0x130e20: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130e1c) {
            ctx->pc = 0x130EC8u;
            goto label_130ec8;
        }
    }
    ctx->pc = 0x130E24u;
label_130e24:
    // 0x130e24: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x130e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_130e28:
    // 0x130e28: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x130e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x130e2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x130e2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x130e30: 0x0  nop
    ctx->pc = 0x130e30u;
    // NOP
    // 0x130e34: 0x4600a303  div.s       $f12, $f20, $f0
    ctx->pc = 0x130e34u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x130e38: 0x0  nop
    ctx->pc = 0x130e38u;
    // NOP
    // 0x130e3c: 0x0  nop
    ctx->pc = 0x130e3cu;
    // NOP
    // 0x130e40: 0xc0a248c  jal         func_289230
    ctx->pc = 0x130E40u;
    SET_GPR_U32(ctx, 31, 0x130E48u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130E48u; }
        if (ctx->pc != 0x130E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130E48u; }
        if (ctx->pc != 0x130E48u) { return; }
    }
    ctx->pc = 0x130E48u;
label_130e48:
    // 0x130e48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x130e48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x130e4c: 0x0  nop
    ctx->pc = 0x130e4cu;
    // NOP
    // 0x130e50: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x130e50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x130e54: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x130e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x130e58: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x130e58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x130e5c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x130e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x130e60: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x130e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x130e64: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x130e64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x130e68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x130e68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x130e6c: 0x0  nop
    ctx->pc = 0x130e6cu;
    // NOP
    // 0x130e70: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x130e70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x130e74: 0x4601a501  sub.s       $f20, $f20, $f1
    ctx->pc = 0x130e74u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x130e78: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x130e78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x130e7c: 0x0  nop
    ctx->pc = 0x130e7cu;
    // NOP
    // 0x130e80: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x130E80u;
    {
        const bool branch_taken_0x130e80 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x130E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130E80u;
            // 0x130e84: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130e80) {
            ctx->pc = 0x130E90u;
            goto label_130e90;
        }
    }
    ctx->pc = 0x130E88u;
    // 0x130e88: 0x4602a501  sub.s       $f20, $f20, $f2
    ctx->pc = 0x130e88u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
    // 0x130e8c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x130e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_130e90:
    // 0x130e90: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x130e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x130e94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x130e94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x130e98: 0x0  nop
    ctx->pc = 0x130e98u;
    // NOP
    // 0x130e9c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x130e9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x130ea0: 0x0  nop
    ctx->pc = 0x130ea0u;
    // NOP
    // 0x130ea4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x130EA4u;
    {
        const bool branch_taken_0x130ea4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x130EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130EA4u;
            // 0x130ea8: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x130ea4) {
            ctx->pc = 0x130EC4u;
            goto label_130ec4;
        }
    }
    ctx->pc = 0x130EACu;
    // 0x130eac: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x130eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x130eb0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x130eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x130eb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x130eb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x130eb8: 0x0  nop
    ctx->pc = 0x130eb8u;
    // NOP
    // 0x130ebc: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x130ebcu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x130ec0: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x130ec0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_130ec4:
    // 0x130ec4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x130ec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_130ec8:
    // 0x130ec8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x130ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x130ecc: 0x3e00008  jr          $ra
    ctx->pc = 0x130ECCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130ECCu;
            // 0x130ed0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x130ED4u;
}
