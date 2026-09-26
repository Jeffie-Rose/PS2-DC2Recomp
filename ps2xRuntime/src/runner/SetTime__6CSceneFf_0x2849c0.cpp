#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetTime__6CSceneFf
// Address: 0x2849c0 - 0x284a58
void SetTime__6CSceneFf_0x2849c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetTime__6CSceneFf_0x2849c0");
#endif

    switch (ctx->pc) {
        case 0x2849f4u: goto label_2849f4;
        default: break;
    }

    ctx->pc = 0x2849c0u;

    // 0x2849c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2849c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2849c4: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x2849c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x2849c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2849c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2849cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2849ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2849d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2849d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2849d4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2849d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2849d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2849d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2849dc: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2849dcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2849e0: 0x4600a303  div.s       $f12, $f20, $f0
    ctx->pc = 0x2849e0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x2849e4: 0x0  nop
    ctx->pc = 0x2849e4u;
    // NOP
    // 0x2849e8: 0x0  nop
    ctx->pc = 0x2849e8u;
    // NOP
    // 0x2849ec: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2849ECu;
    SET_GPR_U32(ctx, 31, 0x2849F4u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2849F4u; }
        if (ctx->pc != 0x2849F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2849F4u; }
        if (ctx->pc != 0x2849F4u) { return; }
    }
    ctx->pc = 0x2849F4u;
label_2849f4:
    // 0x2849f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2849f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2849f8: 0x3c0341c0  lui         $v1, 0x41C0
    ctx->pc = 0x2849f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16832 << 16));
    // 0x2849fc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2849fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x284a00: 0x0  nop
    ctx->pc = 0x284a00u;
    // NOP
    // 0x284a04: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x284a04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x284a08: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x284a08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x284a0c: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x284a0cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x284a10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x284a10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284a14: 0x0  nop
    ctx->pc = 0x284a14u;
    // NOP
    // 0x284a18: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x284a18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x284a1c: 0x0  nop
    ctx->pc = 0x284a1cu;
    // NOP
    // 0x284a20: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x284A20u;
    {
        const bool branch_taken_0x284a20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x284a20) {
            ctx->pc = 0x284A2Cu;
            goto label_284a2c;
        }
    }
    ctx->pc = 0x284A28u;
    // 0x284a28: 0x4601a500  add.s       $f20, $f20, $f1
    ctx->pc = 0x284a28u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
label_284a2c:
    // 0x284a2c: 0xe6142f6c  swc1        $f20, 0x2F6C($s0)
    ctx->pc = 0x284a2cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12140), bits); }
    // 0x284a30: 0x8e033040  lw          $v1, 0x3040($s0)
    ctx->pc = 0x284a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12352)));
    // 0x284a34: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x284A34u;
    {
        const bool branch_taken_0x284a34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x284a34) {
            ctx->pc = 0x284A44u;
            goto label_284a44;
        }
    }
    ctx->pc = 0x284A3Cu;
    // 0x284a3c: 0xc6002f6c  lwc1        $f0, 0x2F6C($s0)
    ctx->pc = 0x284a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x284a40: 0xe4601a10  swc1        $f0, 0x1A10($v1)
    ctx->pc = 0x284a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6672), bits); }
label_284a44:
    // 0x284a44: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x284a44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x284a48: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x284a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x284a4c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x284a4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284a50: 0x3e00008  jr          $ra
    ctx->pc = 0x284A50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284A50u;
            // 0x284a54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x284A58u;
}
