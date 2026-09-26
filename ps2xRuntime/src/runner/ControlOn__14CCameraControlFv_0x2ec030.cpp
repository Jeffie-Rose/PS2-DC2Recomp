#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ControlOn__14CCameraControlFv
// Address: 0x2ec030 - 0x2ec0b8
void ControlOn__14CCameraControlFv_0x2ec030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ControlOn__14CCameraControlFv_0x2ec030");
#endif

    switch (ctx->pc) {
        case 0x2ec05cu: goto label_2ec05c;
        default: break;
    }

    ctx->pc = 0x2ec030u;

    // 0x2ec030: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ec030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ec034: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ec034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ec038: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ec038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ec03c: 0x8c8300c0  lw          $v1, 0xC0($a0)
    ctx->pc = 0x2ec03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x2ec040: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2EC040u;
    {
        const bool branch_taken_0x2ec040 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC040u;
            // 0x2ec044: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec040) {
            ctx->pc = 0x2EC0A0u;
            goto label_2ec0a0;
        }
    }
    ctx->pc = 0x2EC048u;
    // 0x2ec048: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x2ec048u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2ec04c: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x2ec04cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
    // 0x2ec050: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x2ec050u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ec054: 0xc0bafe8  jal         func_2EBFA0
    ctx->pc = 0x2EC054u;
    SET_GPR_U32(ctx, 31, 0x2EC05Cu);
    ctx->pc = 0x2EC058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC054u;
            // 0x2ec058: 0x7e020020  sq          $v0, 0x20($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBFA0u;
    if (runtime->hasFunction(0x2EBFA0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC05Cu; }
        if (ctx->pc != 0x2EC05Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveParam__14CCameraControlFv_0x2ebfa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC05Cu; }
        if (ctx->pc != 0x2EC05Cu) { return; }
    }
    ctx->pc = 0x2EC05Cu;
label_2ec05c:
    // 0x2ec05c: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x2ec05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ec060: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x2ec060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec064: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2ec064u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2ec068: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2ec068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2ec06c: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x2ec06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ec070: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2ec070u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ec074: 0x0  nop
    ctx->pc = 0x2ec074u;
    // NOP
    // 0x2ec078: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2EC078u;
    {
        const bool branch_taken_0x2ec078 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ec078) {
            ctx->pc = 0x2EC084u;
            goto label_2ec084;
        }
    }
    ctx->pc = 0x2EC080u;
    // 0x2ec080: 0xe4410010  swc1        $f1, 0x10($v0)
    ctx->pc = 0x2ec080u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_2ec084:
    // 0x2ec084: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x2ec084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec088: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x2ec088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ec08c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2ec08cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ec090: 0x0  nop
    ctx->pc = 0x2ec090u;
    // NOP
    // 0x2ec094: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC094u;
    {
        const bool branch_taken_0x2ec094 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EC098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC094u;
            // 0x2ec098: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec094) {
            ctx->pc = 0x2EC0A4u;
            goto label_2ec0a4;
        }
    }
    ctx->pc = 0x2EC09Cu;
    // 0x2ec09c: 0xe4410010  swc1        $f1, 0x10($v0)
    ctx->pc = 0x2ec09cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_2ec0a0:
    // 0x2ec0a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ec0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ec0a4:
    // 0x2ec0a4: 0xae0300c0  sw          $v1, 0xC0($s0)
    ctx->pc = 0x2ec0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
    // 0x2ec0a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ec0a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ec0ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ec0acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ec0b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2EC0B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EC0B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC0B0u;
            // 0x2ec0b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EC0B8u;
}
