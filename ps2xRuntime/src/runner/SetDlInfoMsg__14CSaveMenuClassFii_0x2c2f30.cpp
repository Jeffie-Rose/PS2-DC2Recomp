#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetDlInfoMsg__14CSaveMenuClassFii
// Address: 0x2c2f30 - 0x2c2fc4
void SetDlInfoMsg__14CSaveMenuClassFii_0x2c2f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetDlInfoMsg__14CSaveMenuClassFii_0x2c2f30");
#endif

    switch (ctx->pc) {
        case 0x2c2f60u: goto label_2c2f60;
        case 0x2c2f6cu: goto label_2c2f6c;
        default: break;
    }

    ctx->pc = 0x2c2f30u;

    // 0x2c2f30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c2f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c2f34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c2f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c2f38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c2f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c2f3c: 0x24030c08  addiu       $v1, $zero, 0xC08
    ctx->pc = 0x2c2f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3080));
    // 0x2c2f40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c2f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c2f44: 0x14a20002  bne         $a1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C2F44u;
    {
        const bool branch_taken_0x2c2f44 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C2F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2F44u;
            // 0x2c2f48: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2f44) {
            ctx->pc = 0x2C2F50u;
            goto label_2c2f50;
        }
    }
    ctx->pc = 0x2C2F4Cu;
    // 0x2c2f4c: 0x24030c09  addiu       $v1, $zero, 0xC09
    ctx->pc = 0x2c2f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3081));
label_2c2f50:
    // 0x2c2f50: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c2f50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2c2f54: 0x8c24ca5c  lw          $a0, -0x35A4($at)
    ctx->pc = 0x2c2f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953564)));
    // 0x2c2f58: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2C2F58u;
    SET_GPR_U32(ctx, 31, 0x2C2F60u);
    ctx->pc = 0x2C2F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2F58u;
            // 0x2c2f5c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2F60u; }
        if (ctx->pc != 0x2C2F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2F60u; }
        if (ctx->pc != 0x2C2F60u) { return; }
    }
    ctx->pc = 0x2C2F60u;
label_2c2f60:
    // 0x2c2f60: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c2f60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2c2f64: 0xc087898  jal         func_21E260
    ctx->pc = 0x2C2F64u;
    SET_GPR_U32(ctx, 31, 0x2C2F6Cu);
    ctx->pc = 0x2C2F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2F64u;
            // 0x2c2f68: 0x8c24ca5c  lw          $a0, -0x35A4($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953564)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2F6Cu; }
        if (ctx->pc != 0x2C2F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2F6Cu; }
        if (ctx->pc != 0x2C2F6Cu) { return; }
    }
    ctx->pc = 0x2C2F6Cu;
label_2c2f6c:
    // 0x2c2f6c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c2f6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2c2f70: 0x8f858780  lw          $a1, -0x7880($gp)
    ctx->pc = 0x2c2f70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x2c2f74: 0x8c26ca5c  lw          $a2, -0x35A4($at)
    ctx->pc = 0x2c2f74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953564)));
    // 0x2c2f78: 0x3c034328  lui         $v1, 0x4328
    ctx->pc = 0x2c2f78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17192 << 16));
    // 0x2c2f7c: 0x10202b  sltu        $a0, $zero, $s0
    ctx->pc = 0x2c2f7cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2c2f80: 0x8cc61e14  lw          $a2, 0x1E14($a2)
    ctx->pc = 0x2c2f80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 7700)));
    // 0x2c2f84: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c2f84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2c2f88: 0x8c27cb4c  lw          $a3, -0x34B4($at)
    ctx->pc = 0x2c2f88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953804)));
    // 0x2c2f8c: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x2c2f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2c2f90: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x2c2f90u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x2c2f94: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c2f94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2c2f98: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2c2f98u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2f9c: 0x0  nop
    ctx->pc = 0x2c2f9cu;
    // NOP
    // 0x2c2fa0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c2fa0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c2fa4: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x2c2fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x2c2fa8: 0xace30010  sw          $v1, 0x10($a3)
    ctx->pc = 0x2c2fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 3));
    // 0x2c2fac: 0x8c23cb4c  lw          $v1, -0x34B4($at)
    ctx->pc = 0x2c2facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953804)));
    // 0x2c2fb0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2c2fb0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c2fb4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c2fb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c2fb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c2fb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c2fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2FBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2FBCu;
            // 0x2c2fc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C2FC4u;
}
