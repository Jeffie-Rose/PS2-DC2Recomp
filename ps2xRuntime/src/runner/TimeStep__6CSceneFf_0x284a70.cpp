#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: TimeStep__6CSceneFf
// Address: 0x284a70 - 0x284b2c
void TimeStep__6CSceneFf_0x284a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TimeStep__6CSceneFf_0x284a70");
#endif

    switch (ctx->pc) {
        case 0x284aa4u: goto label_284aa4;
        case 0x284b14u: goto label_284b14;
        default: break;
    }

    ctx->pc = 0x284a70u;

    // 0x284a70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x284a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x284a74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x284a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x284a78: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x284a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x284a7c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x284a7cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x284a80: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x284a80u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x284a84: 0x8c832f74  lw          $v1, 0x2F74($a0)
    ctx->pc = 0x284a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12148)));
    // 0x284a88: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x284A88u;
    {
        const bool branch_taken_0x284a88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x284A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284A88u;
            // 0x284a8c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284a88) {
            ctx->pc = 0x284B14u;
            goto label_284b14;
        }
    }
    ctx->pc = 0x284A90u;
    // 0x284a90: 0xc6002f70  lwc1        $f0, 0x2F70($s0)
    ctx->pc = 0x284a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x284a94: 0xc6142f6c  lwc1        $f20, 0x2F6C($s0)
    ctx->pc = 0x284a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x284a98: 0x460c0542  mul.s       $f21, $f0, $f12
    ctx->pc = 0x284a98u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x284a9c: 0xc0a1298  jal         func_284A60
    ctx->pc = 0x284A9Cu;
    SET_GPR_U32(ctx, 31, 0x284AA4u);
    ctx->pc = 0x284AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284A9Cu;
            // 0x284aa0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x284A60u;
    if (runtime->hasFunction(0x284A60u)) {
        auto targetFn = runtime->lookupFunction(0x284A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284AA4u; }
        if (ctx->pc != 0x284AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddTime__6CSceneFf_0x284a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284AA4u; }
        if (ctx->pc != 0x284AA4u) { return; }
    }
    ctx->pc = 0x284AA4u;
label_284aa4:
    // 0x284aa4: 0x3c0441c0  lui         $a0, 0x41C0
    ctx->pc = 0x284aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16832 << 16));
    // 0x284aa8: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x284aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x284aac: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x284aacu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284ab0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x284ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x284ab4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x284ab4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x284ab8: 0x0  nop
    ctx->pc = 0x284ab8u;
    // NOP
    // 0x284abc: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x284abcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x284ac0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x284ac0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x284ac4: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x284ac4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x284ac8: 0x0  nop
    ctx->pc = 0x284ac8u;
    // NOP
    // 0x284acc: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x284ACCu;
    {
        const bool branch_taken_0x284acc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x284AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284ACCu;
            // 0x284ad0: 0x46150800  add.s       $f0, $f1, $f21 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x284acc) {
            ctx->pc = 0x284AF4u;
            goto label_284af4;
        }
    }
    ctx->pc = 0x284AD4u;
    // 0x284ad4: 0xc6012f6c  lwc1        $f1, 0x2F6C($s0)
    ctx->pc = 0x284ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x284ad8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x284ad8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x284adc: 0x0  nop
    ctx->pc = 0x284adcu;
    // NOP
    // 0x284ae0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x284AE0u;
    {
        const bool branch_taken_0x284ae0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x284ae0) {
            ctx->pc = 0x284AF4u;
            goto label_284af4;
        }
    }
    ctx->pc = 0x284AE8u;
    // 0x284ae8: 0x8e032f68  lw          $v1, 0x2F68($s0)
    ctx->pc = 0x284ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12136)));
    // 0x284aec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x284aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x284af0: 0xae032f68  sw          $v1, 0x2F68($s0)
    ctx->pc = 0x284af0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12136), GPR_U32(ctx, 3));
label_284af4:
    // 0x284af4: 0x8e033040  lw          $v1, 0x3040($s0)
    ctx->pc = 0x284af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12352)));
    // 0x284af8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x284AF8u;
    {
        const bool branch_taken_0x284af8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x284af8) {
            ctx->pc = 0x284B14u;
            goto label_284b14;
        }
    }
    ctx->pc = 0x284B00u;
    // 0x284b00: 0x8e022f68  lw          $v0, 0x2F68($s0)
    ctx->pc = 0x284b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12136)));
    // 0x284b04: 0xac621a14  sw          $v0, 0x1A14($v1)
    ctx->pc = 0x284b04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6676), GPR_U32(ctx, 2));
    // 0x284b08: 0x8e052f68  lw          $a1, 0x2F68($s0)
    ctx->pc = 0x284b08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12136)));
    // 0x284b0c: 0xc0bda2c  jal         func_2F68B0
    ctx->pc = 0x284B0Cu;
    SET_GPR_U32(ctx, 31, 0x284B14u);
    ctx->pc = 0x284B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284B0Cu;
            // 0x284b10: 0x8e043040  lw          $a0, 0x3040($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12352)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F68B0u;
    if (runtime->hasFunction(0x2F68B0u)) {
        auto targetFn = runtime->lookupFunction(0x2F68B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284B14u; }
        if (ctx->pc != 0x284B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckTourBoot__9CSaveDataFi_0x2f68b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284B14u; }
        if (ctx->pc != 0x284B14u) { return; }
    }
    ctx->pc = 0x284B14u;
label_284b14:
    // 0x284b14: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x284b14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x284b18: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x284b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x284b1c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x284b1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284b20: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x284b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x284b24: 0x3e00008  jr          $ra
    ctx->pc = 0x284B24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284B24u;
            // 0x284b28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x284B2Cu;
}
