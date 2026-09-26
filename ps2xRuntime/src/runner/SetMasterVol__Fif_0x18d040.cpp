#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetMasterVol__Fif
// Address: 0x18d040 - 0x18d0f4
void SetMasterVol__Fif_0x18d040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetMasterVol__Fif_0x18d040");
#endif

    switch (ctx->pc) {
        case 0x18d0b4u: goto label_18d0b4;
        case 0x18d0c8u: goto label_18d0c8;
        case 0x18d0d8u: goto label_18d0d8;
        case 0x18d0e0u: goto label_18d0e0;
        default: break;
    }

    ctx->pc = 0x18d040u;

    // 0x18d040: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18d040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18d044: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18d044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18d048: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18d048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18d04c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x18d04cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x18d050: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18d050u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d054: 0x6000022  bltz        $s0, . + 4 + (0x22 << 2)
    ctx->pc = 0x18D054u;
    {
        const bool branch_taken_0x18d054 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x18D058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D054u;
            // 0x18d058: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d054) {
            ctx->pc = 0x18D0E0u;
            goto label_18d0e0;
        }
    }
    ctx->pc = 0x18D05Cu;
    // 0x18d05c: 0x2a010002  slti        $at, $s0, 0x2
    ctx->pc = 0x18d05cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x18d060: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x18D060u;
    {
        const bool branch_taken_0x18d060 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x18d060) {
            ctx->pc = 0x18D070u;
            goto label_18d070;
        }
    }
    ctx->pc = 0x18D068u;
    // 0x18d068: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x18D068u;
    {
        const bool branch_taken_0x18d068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D06Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D068u;
            // 0x18d06c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d068) {
            ctx->pc = 0x18D0E4u;
            goto label_18d0e4;
        }
    }
    ctx->pc = 0x18D070u;
label_18d070:
    // 0x18d070: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18d070u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18d074: 0x0  nop
    ctx->pc = 0x18d074u;
    // NOP
    // 0x18d078: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x18d078u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18d07c: 0x0  nop
    ctx->pc = 0x18d07cu;
    // NOP
    // 0x18d080: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x18D080u;
    {
        const bool branch_taken_0x18d080 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18D084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D080u;
            // 0x18d084: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d080) {
            ctx->pc = 0x18D090u;
            goto label_18d090;
        }
    }
    ctx->pc = 0x18D088u;
    // 0x18d088: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x18d088u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x18d08c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18d08cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_18d090:
    // 0x18d090: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18d090u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18d094: 0x0  nop
    ctx->pc = 0x18d094u;
    // NOP
    // 0x18d098: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x18d098u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18d09c: 0x0  nop
    ctx->pc = 0x18d09cu;
    // NOP
    // 0x18d0a0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x18D0A0u;
    {
        const bool branch_taken_0x18d0a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18d0a0) {
            ctx->pc = 0x18D0ACu;
            goto label_18d0ac;
        }
    }
    ctx->pc = 0x18D0A8u;
    // 0x18d0a8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x18d0a8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_18d0ac:
    // 0x18d0ac: 0xc063334  jal         func_18CCD0
    ctx->pc = 0x18D0ACu;
    SET_GPR_U32(ctx, 31, 0x18D0B4u);
    ctx->pc = 0x18CCD0u;
    if (runtime->hasFunction(0x18CCD0u)) {
        auto targetFn = runtime->lookupFunction(0x18CCD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D0B4u; }
        if (ctx->pc != 0x18D0B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndWaitSema__Fv_0x18ccd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D0B4u; }
        if (ctx->pc != 0x18D0B4u) { return; }
    }
    ctx->pc = 0x18D0B4u;
label_18d0b4:
    // 0x18d0b4: 0x3c02467f  lui         $v0, 0x467F
    ctx->pc = 0x18d0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18047 << 16));
    // 0x18d0b8: 0x3442fc00  ori         $v0, $v0, 0xFC00
    ctx->pc = 0x18d0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64512);
    // 0x18d0bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18d0bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18d0c0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x18D0C0u;
    SET_GPR_U32(ctx, 31, 0x18D0C8u);
    ctx->pc = 0x18D0C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D0C0u;
            // 0x18d0c4: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D0C8u; }
        if (ctx->pc != 0x18D0C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D0C8u; }
        if (ctx->pc != 0x18D0C8u) { return; }
    }
    ctx->pc = 0x18D0C8u;
label_18d0c8:
    // 0x18d0c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18d0c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d0cc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x18d0ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d0d0: 0xc0628cc  jal         func_18A330
    ctx->pc = 0x18D0D0u;
    SET_GPR_U32(ctx, 31, 0x18D0D8u);
    ctx->pc = 0x18D0D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D0D0u;
            // 0x18d0d4: 0x27848af0  addiu       $a0, $gp, -0x7510 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A330u;
    if (runtime->hasFunction(0x18A330u)) {
        auto targetFn = runtime->lookupFunction(0x18A330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D0D8u; }
        if (ctx->pc != 0x18D0D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMasterVol__6CSoundFii_0x18a330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D0D8u; }
        if (ctx->pc != 0x18D0D8u) { return; }
    }
    ctx->pc = 0x18D0D8u;
label_18d0d8:
    // 0x18d0d8: 0xc063340  jal         func_18CD00
    ctx->pc = 0x18D0D8u;
    SET_GPR_U32(ctx, 31, 0x18D0E0u);
    ctx->pc = 0x18CD00u;
    if (runtime->hasFunction(0x18CD00u)) {
        auto targetFn = runtime->lookupFunction(0x18CD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D0E0u; }
        if (ctx->pc != 0x18D0E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSignalSema__Fv_0x18cd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D0E0u; }
        if (ctx->pc != 0x18D0E0u) { return; }
    }
    ctx->pc = 0x18D0E0u;
label_18d0e0:
    // 0x18d0e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18d0e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_18d0e4:
    // 0x18d0e4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x18d0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18d0e8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18d0e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18d0ec: 0x3e00008  jr          $ra
    ctx->pc = 0x18D0ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D0F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D0ECu;
            // 0x18d0f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18D0F4u;
}
