#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgCreateSinTable__Fv
// Address: 0x130fb0 - 0x13104c
void mgCreateSinTable__Fv_0x130fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgCreateSinTable__Fv_0x130fb0");
#endif

    switch (ctx->pc) {
        case 0x130fdcu: goto label_130fdc;
        case 0x131018u: goto label_131018;
        default: break;
    }

    ctx->pc = 0x130fb0u;

    // 0x130fb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x130fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x130fb4: 0x3c024480  lui         $v0, 0x4480
    ctx->pc = 0x130fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17536 << 16));
    // 0x130fb8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x130fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x130fbc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x130fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x130fc0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x130fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x130fc4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x130fc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130fc8: 0xaf828010  sw          $v0, -0x7FF0($gp)
    ctx->pc = 0x130fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934544), GPR_U32(ctx, 2));
    // 0x130fcc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x130fccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130fd0: 0x3c024322  lui         $v0, 0x4322
    ctx->pc = 0x130fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17186 << 16));
    // 0x130fd4: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x130fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
    // 0x130fd8: 0xaf828014  sw          $v0, -0x7FEC($gp)
    ctx->pc = 0x130fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934548), GPR_U32(ctx, 2));
label_130fdc:
    // 0x130fdc: 0x44901000  mtc1        $s0, $f2
    ctx->pc = 0x130fdcu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x130fe0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x130fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x130fe4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x130fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x130fe8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x130fe8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x130fec: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x130fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x130ff0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x130ff0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x130ff4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x130ff4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x130ff8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x130ff8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x130ffc: 0xc7808010  lwc1        $f0, -0x7FF0($gp)
    ctx->pc = 0x130ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131000: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x131000u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x131004: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x131004u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x131008: 0x0  nop
    ctx->pc = 0x131008u;
    // NOP
    // 0x13100c: 0x0  nop
    ctx->pc = 0x13100cu;
    // NOP
    // 0x131010: 0xc047a42  jal         func_11E908
    ctx->pc = 0x131010u;
    SET_GPR_U32(ctx, 31, 0x131018u);
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131018u; }
        if (ctx->pc != 0x131018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131018u; }
        if (ctx->pc != 0x131018u) { return; }
    }
    ctx->pc = 0x131018u;
label_131018:
    // 0x131018: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x131018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x13101c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x13101cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x131020: 0x2463fd40  addiu       $v1, $v1, -0x2C0
    ctx->pc = 0x131020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966592));
    // 0x131024: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x131024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x131028: 0x2a030400  slti        $v1, $s0, 0x400
    ctx->pc = 0x131028u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x13102c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x13102cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x131030: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x131030u;
    {
        const bool branch_taken_0x131030 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x131034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131030u;
            // 0x131034: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x131030) {
            ctx->pc = 0x130FDCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_130fdc;
        }
    }
    ctx->pc = 0x131038u;
    // 0x131038: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x131038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13103c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13103cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131040: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x131040u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131044: 0x3e00008  jr          $ra
    ctx->pc = 0x131044u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131044u;
            // 0x131048: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13104Cu;
}
