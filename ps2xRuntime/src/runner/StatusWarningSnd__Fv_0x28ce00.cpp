#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StatusWarningSnd__Fv
// Address: 0x28ce00 - 0x28cf00
void StatusWarningSnd__Fv_0x28ce00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StatusWarningSnd__Fv_0x28ce00");
#endif

    switch (ctx->pc) {
        case 0x28ce48u: goto label_28ce48;
        case 0x28ce54u: goto label_28ce54;
        case 0x28ce64u: goto label_28ce64;
        case 0x28cec8u: goto label_28cec8;
        default: break;
    }

    ctx->pc = 0x28ce00u;

    // 0x28ce00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28ce00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28ce04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28ce04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x28ce08: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x28ce08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x28ce0c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x28ce0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x28ce10: 0x8f838dac  lw          $v1, -0x7254($gp)
    ctx->pc = 0x28ce10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
    // 0x28ce14: 0x8c632f98  lw          $v1, 0x2F98($v1)
    ctx->pc = 0x28ce14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12184)));
    // 0x28ce18: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x28ce18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x28ce1c: 0x14600033  bnez        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x28CE1Cu;
    {
        const bool branch_taken_0x28ce1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28ce1c) {
            ctx->pc = 0x28CEECu;
            goto label_28ceec;
        }
    }
    ctx->pc = 0x28CE24u;
    // 0x28ce24: 0x8f839828  lw          $v1, -0x67D8($gp)
    ctx->pc = 0x28ce24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940712)));
    // 0x28ce28: 0x28610014  slti        $at, $v1, 0x14
    ctx->pc = 0x28ce28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x28ce2c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x28CE2Cu;
    {
        const bool branch_taken_0x28ce2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ce2c) {
            ctx->pc = 0x28CE40u;
            goto label_28ce40;
        }
    }
    ctx->pc = 0x28CE34u;
    // 0x28ce34: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x28ce34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28ce38: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x28CE38u;
    {
        const bool branch_taken_0x28ce38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CE3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CE38u;
            // 0x28ce3c: 0xaf839828  sw          $v1, -0x67D8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940712), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ce38) {
            ctx->pc = 0x28CEECu;
            goto label_28ceec;
        }
    }
    ctx->pc = 0x28CE40u;
label_28ce40:
    // 0x28ce40: 0xc0683a8  jal         func_1A0EA0
    ctx->pc = 0x28CE40u;
    SET_GPR_U32(ctx, 31, 0x28CE48u);
    ctx->pc = 0x28CE44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CE40u;
            // 0x28ce44: 0xaf809828  sw          $zero, -0x67D8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940712), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0EA0u;
    if (runtime->hasFunction(0x1A0EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CE48u; }
        if (ctx->pc != 0x28CE48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBattleCharaInfo__Fv_0x1a0ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CE48u; }
        if (ctx->pc != 0x28CE48u) { return; }
    }
    ctx->pc = 0x28CE48u;
label_28ce48:
    // 0x28ce48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28ce48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ce4c: 0xc0680f8  jal         func_1A03E0
    ctx->pc = 0x28CE4Cu;
    SET_GPR_U32(ctx, 31, 0x28CE54u);
    ctx->pc = 0x28CE50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CE4Cu;
            // 0x28ce50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A03E0u;
    if (runtime->hasFunction(0x1A03E0u)) {
        auto targetFn = runtime->lookupFunction(0x1A03E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CE54u; }
        if (ctx->pc != 0x28CE54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowHp_i__16CBattleCharaInfoFv_0x1a03e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CE54u; }
        if (ctx->pc != 0x28CE54u) { return; }
    }
    ctx->pc = 0x28CE54u;
label_28ce54:
    // 0x28ce54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28ce54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28ce58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28ce58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ce5c: 0xc0680e8  jal         func_1A03A0
    ctx->pc = 0x28CE5Cu;
    SET_GPR_U32(ctx, 31, 0x28CE64u);
    ctx->pc = 0x28CE60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CE5Cu;
            // 0x28ce60: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A03A0u;
    if (runtime->hasFunction(0x1A03A0u)) {
        auto targetFn = runtime->lookupFunction(0x1A03A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CE64u; }
        if (ctx->pc != 0x28CE64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMaxHp_i__16CBattleCharaInfoFv_0x1a03a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CE64u; }
        if (ctx->pc != 0x28CE64u) { return; }
    }
    ctx->pc = 0x28CE64u;
label_28ce64:
    // 0x28ce64: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28ce64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28ce68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28ce68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28ce6c: 0x0  nop
    ctx->pc = 0x28ce6cu;
    // NOP
    // 0x28ce70: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x28ce70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x28ce74: 0x4601a503  div.s       $f20, $f20, $f1
    ctx->pc = 0x28ce74u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[20], ctx->f[1]); }
    // 0x28ce78: 0x0  nop
    ctx->pc = 0x28ce78u;
    // NOP
    // 0x28ce7c: 0x0  nop
    ctx->pc = 0x28ce7cu;
    // NOP
    // 0x28ce80: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x28ce80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28ce84: 0x0  nop
    ctx->pc = 0x28ce84u;
    // NOP
    // 0x28ce88: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x28CE88u;
    {
        const bool branch_taken_0x28ce88 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28CE8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CE88u;
            // 0x28ce8c: 0x3c033e99  lui         $v1, 0x3E99 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ce88) {
            ctx->pc = 0x28CEECu;
            goto label_28ceec;
        }
    }
    ctx->pc = 0x28CE90u;
    // 0x28ce90: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x28ce90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x28ce94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28ce94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28ce98: 0x0  nop
    ctx->pc = 0x28ce98u;
    // NOP
    // 0x28ce9c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x28ce9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28cea0: 0x0  nop
    ctx->pc = 0x28cea0u;
    // NOP
    // 0x28cea4: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x28CEA4u;
    {
        const bool branch_taken_0x28cea4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28cea4) {
            ctx->pc = 0x28CEECu;
            goto label_28ceec;
        }
    }
    ctx->pc = 0x28CEACu;
    // 0x28ceac: 0x8f828dac  lw          $v0, -0x7254($gp)
    ctx->pc = 0x28ceacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
    // 0x28ceb0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x28ceb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x28ceb4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x28ceb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x28ceb8: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x28ceb8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x28cebc: 0x8c24c4d0  lw          $a0, -0x3B30($at)
    ctx->pc = 0x28cebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294952144)));
    // 0x28cec0: 0xc063818  jal         func_18E060
    ctx->pc = 0x28CEC0u;
    SET_GPR_U32(ctx, 31, 0x28CEC8u);
    ctx->pc = 0x28CEC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CEC0u;
            // 0x28cec4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CEC8u; }
        if (ctx->pc != 0x28CEC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CEC8u; }
        if (ctx->pc != 0x28CEC8u) { return; }
    }
    ctx->pc = 0x28CEC8u;
label_28cec8:
    // 0x28cec8: 0x3c033e19  lui         $v1, 0x3E19
    ctx->pc = 0x28cec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15897 << 16));
    // 0x28cecc: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x28ceccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x28ced0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28ced0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28ced4: 0x0  nop
    ctx->pc = 0x28ced4u;
    // NOP
    // 0x28ced8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x28ced8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28cedc: 0x0  nop
    ctx->pc = 0x28cedcu;
    // NOP
    // 0x28cee0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x28CEE0u;
    {
        const bool branch_taken_0x28cee0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28CEE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CEE0u;
            // 0x28cee4: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cee0) {
            ctx->pc = 0x28CEECu;
            goto label_28ceec;
        }
    }
    ctx->pc = 0x28CEE8u;
    // 0x28cee8: 0xaf839828  sw          $v1, -0x67D8($gp)
    ctx->pc = 0x28cee8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940712), GPR_U32(ctx, 3));
label_28ceec:
    // 0x28ceec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28ceecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28cef0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x28cef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28cef4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28cef4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28cef8: 0x3e00008  jr          $ra
    ctx->pc = 0x28CEF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28CEFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CEF8u;
            // 0x28cefc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28CF00u;
}
