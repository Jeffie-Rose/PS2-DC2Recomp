#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__17CSWordAfterEffectFv
// Address: 0x2f5df0 - 0x2f5ea0
void Step__17CSWordAfterEffectFv_0x2f5df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__17CSWordAfterEffectFv_0x2f5df0");
#endif

    switch (ctx->pc) {
        case 0x2f5e34u: goto label_2f5e34;
        case 0x2f5e40u: goto label_2f5e40;
        case 0x2f5e50u: goto label_2f5e50;
        default: break;
    }

    ctx->pc = 0x2f5df0u;

    // 0x2f5df0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f5df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f5df4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f5df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f5df8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f5df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f5dfc: 0x8c830088  lw          $v1, 0x88($a0)
    ctx->pc = 0x2f5dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x2f5e00: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2F5E00u;
    {
        const bool branch_taken_0x2f5e00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5E00u;
            // 0x2f5e04: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5e00) {
            ctx->pc = 0x2F5E90u;
            goto label_2f5e90;
        }
    }
    ctx->pc = 0x2F5E08u;
    // 0x2f5e08: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2f5e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f5e0c: 0x10800020  beqz        $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2F5E0Cu;
    {
        const bool branch_taken_0x2f5e0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5e0c) {
            ctx->pc = 0x2F5E90u;
            goto label_2f5e90;
        }
    }
    ctx->pc = 0x2F5E14u;
    // 0x2f5e14: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2f5e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2f5e18: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F5E18u;
    {
        const bool branch_taken_0x2f5e18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5E18u;
            // 0x2f5e1c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5e18) {
            ctx->pc = 0x2F5E2Cu;
            goto label_2f5e2c;
        }
    }
    ctx->pc = 0x2F5E20u;
    // 0x2f5e20: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2F5E20u;
    {
        const bool branch_taken_0x2f5e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5E20u;
            // 0x2f5e24: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5e20) {
            ctx->pc = 0x2F5E94u;
            goto label_2f5e94;
        }
    }
    ctx->pc = 0x2F5E28u;
    // 0x2f5e28: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2f5e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2f5e2c:
    // 0x2f5e2c: 0xc04de0c  jal         func_137830
    ctx->pc = 0x2F5E2Cu;
    SET_GPR_U32(ctx, 31, 0x2F5E34u);
    ctx->pc = 0x137830u;
    if (runtime->hasFunction(0x137830u)) {
        auto targetFn = runtime->lookupFunction(0x137830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5E34u; }
        if (ctx->pc != 0x2F5E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWorldPosition0__8mgCFrameFPf_0x137830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5E34u; }
        if (ctx->pc != 0x2F5E34u) { return; }
    }
    ctx->pc = 0x2F5E34u;
label_2f5e34:
    // 0x2f5e34: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2f5e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2f5e38: 0xc04de0c  jal         func_137830
    ctx->pc = 0x2F5E38u;
    SET_GPR_U32(ctx, 31, 0x2F5E40u);
    ctx->pc = 0x2F5E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5E38u;
            // 0x2f5e3c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137830u;
    if (runtime->hasFunction(0x137830u)) {
        auto targetFn = runtime->lookupFunction(0x137830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5E40u; }
        if (ctx->pc != 0x2F5E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWorldPosition0__8mgCFrameFPf_0x137830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5E40u; }
        if (ctx->pc != 0x2F5E40u) { return; }
    }
    ctx->pc = 0x2F5E40u;
label_2f5e40:
    // 0x2f5e40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f5e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5e44: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2f5e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f5e48: 0xc0bd754  jal         func_2F5D50
    ctx->pc = 0x2F5E48u;
    SET_GPR_U32(ctx, 31, 0x2F5E50u);
    ctx->pc = 0x2F5E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5E48u;
            // 0x2f5e4c: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5D50u;
    if (runtime->hasFunction(0x2F5D50u)) {
        auto targetFn = runtime->lookupFunction(0x2F5D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5E50u; }
        if (ctx->pc != 0x2F5E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddPoint__17CSWordAfterEffectFPfPf_0x2f5d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5E50u; }
        if (ctx->pc != 0x2F5E50u) { return; }
    }
    ctx->pc = 0x2F5E50u;
label_2f5e50:
    // 0x2f5e50: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x2f5e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x2f5e54: 0x18600004  blez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F5E54u;
    {
        const bool branch_taken_0x2f5e54 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x2f5e54) {
            ctx->pc = 0x2F5E68u;
            goto label_2f5e68;
        }
    }
    ctx->pc = 0x2F5E5Cu;
    // 0x2f5e5c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2f5e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2f5e60: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2F5E60u;
    {
        const bool branch_taken_0x2f5e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5E60u;
            // 0x2f5e64: 0xae030090  sw          $v1, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5e60) {
            ctx->pc = 0x2F5E90u;
            goto label_2f5e90;
        }
    }
    ctx->pc = 0x2F5E68u;
label_2f5e68:
    // 0x2f5e68: 0xc6020098  lwc1        $f2, 0x98($s0)
    ctx->pc = 0x2f5e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f5e6c: 0xc6010094  lwc1        $f1, 0x94($s0)
    ctx->pc = 0x2f5e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f5e70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f5e70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5e74: 0x0  nop
    ctx->pc = 0x2f5e74u;
    // NOP
    // 0x2f5e78: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2f5e78u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2f5e7c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2f5e7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f5e80: 0x0  nop
    ctx->pc = 0x2f5e80u;
    // NOP
    // 0x2f5e84: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2F5E84u;
    {
        const bool branch_taken_0x2f5e84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F5E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5E84u;
            // 0x2f5e88: 0xe6010094  swc1        $f1, 0x94($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5e84) {
            ctx->pc = 0x2F5E90u;
            goto label_2f5e90;
        }
    }
    ctx->pc = 0x2F5E8Cu;
    // 0x2f5e8c: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x2f5e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
label_2f5e90:
    // 0x2f5e90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f5e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2f5e94:
    // 0x2f5e94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f5e94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f5e98: 0x3e00008  jr          $ra
    ctx->pc = 0x2F5E98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F5E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5E98u;
            // 0x2f5e9c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F5EA0u;
}
