#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StepBuildUpInfoEffect__Fv
// Address: 0x22f450 - 0x22f50c
void StepBuildUpInfoEffect__Fv_0x22f450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StepBuildUpInfoEffect__Fv_0x22f450");
#endif

    switch (ctx->pc) {
        case 0x22f474u: goto label_22f474;
        case 0x22f480u: goto label_22f480;
        case 0x22f4e0u: goto label_22f4e0;
        default: break;
    }

    ctx->pc = 0x22f450u;

    // 0x22f450: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22f450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22f454: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22f454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22f458: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22f458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22f45c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22f45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22f460: 0x8f839480  lw          $v1, -0x6B80($gp)
    ctx->pc = 0x22f460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939776)));
    // 0x22f464: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x22F464u;
    {
        const bool branch_taken_0x22f464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F464u;
            // 0x22f468: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f464) {
            ctx->pc = 0x22F4F8u;
            goto label_22f4f8;
        }
    }
    ctx->pc = 0x22F46Cu;
    // 0x22f46c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x22F46Cu;
    {
        const bool branch_taken_0x22f46c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F46Cu;
            // 0x22f470: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f46c) {
            ctx->pc = 0x22F4E8u;
            goto label_22f4e8;
        }
    }
    ctx->pc = 0x22F474u;
label_22f474:
    // 0x22f474: 0x8f829480  lw          $v0, -0x6B80($gp)
    ctx->pc = 0x22f474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939776)));
    // 0x22f478: 0xc08bbe8  jal         func_22EFA0
    ctx->pc = 0x22F478u;
    SET_GPR_U32(ctx, 31, 0x22F480u);
    ctx->pc = 0x22F47Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F478u;
            // 0x22f47c: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22EFA0u;
    if (runtime->hasFunction(0x22EFA0u)) {
        auto targetFn = runtime->lookupFunction(0x22EFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F480u; }
        if (ctx->pc != 0x22F480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__16CEffVerticalLineFv_0x22efa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F480u; }
        if (ctx->pc != 0x22F480u) { return; }
    }
    ctx->pc = 0x22F480u;
label_22f480:
    // 0x22f480: 0x8f849480  lw          $a0, -0x6B80($gp)
    ctx->pc = 0x22f480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939776)));
    // 0x22f484: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x22f484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x22f488: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x22f488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x22f48c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22f48cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f490: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x22f490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x22f494: 0xc481002c  lwc1        $f1, 0x2C($a0)
    ctx->pc = 0x22f494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22f498: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x22f498u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22f49c: 0x0  nop
    ctx->pc = 0x22f49cu;
    // NOP
    // 0x22f4a0: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x22F4A0u;
    {
        const bool branch_taken_0x22f4a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22f4a0) {
            ctx->pc = 0x22F4C8u;
            goto label_22f4c8;
        }
    }
    ctx->pc = 0x22F4A8u;
    // 0x22f4a8: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x22f4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22f4ac: 0x3c034198  lui         $v1, 0x4198
    ctx->pc = 0x22f4acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16792 << 16));
    // 0x22f4b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22f4b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f4b4: 0x0  nop
    ctx->pc = 0x22f4b4u;
    // NOP
    // 0x22f4b8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x22f4b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22f4bc: 0x0  nop
    ctx->pc = 0x22f4bcu;
    // NOP
    // 0x22f4c0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x22F4C0u;
    {
        const bool branch_taken_0x22f4c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22f4c0) {
            ctx->pc = 0x22F4E0u;
            goto label_22f4e0;
        }
    }
    ctx->pc = 0x22F4C8u;
label_22f4c8:
    // 0x22f4c8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x22f4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x22f4cc: 0xc78c9490  lwc1        $f12, -0x6B70($gp)
    ctx->pc = 0x22f4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22f4d0: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x22f4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
    // 0x22f4d4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x22f4d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x22f4d8: 0xc08bb78  jal         func_22EDE0
    ctx->pc = 0x22F4D8u;
    SET_GPR_U32(ctx, 31, 0x22F4E0u);
    ctx->pc = 0x22F4DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F4D8u;
            // 0x22f4dc: 0x24a5d430  addiu       $a1, $a1, -0x2BD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22EDE0u;
    if (runtime->hasFunction(0x22EDE0u)) {
        auto targetFn = runtime->lookupFunction(0x22EDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F4E0u; }
        if (ctx->pc != 0x22F4E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Generate__16CEffVerticalLineFPfff_0x22ede0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F4E0u; }
        if (ctx->pc != 0x22F4E0u) { return; }
    }
    ctx->pc = 0x22F4E0u;
label_22f4e0:
    // 0x22f4e0: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x22f4e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x22f4e4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x22f4e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_22f4e8:
    // 0x22f4e8: 0x8f839484  lw          $v1, -0x6B7C($gp)
    ctx->pc = 0x22f4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939780)));
    // 0x22f4ec: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x22f4ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x22f4f0: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x22F4F0u;
    {
        const bool branch_taken_0x22f4f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f4f0) {
            ctx->pc = 0x22F474u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22f474;
        }
    }
    ctx->pc = 0x22F4F8u;
label_22f4f8:
    // 0x22f4f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22f4f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22f4fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22f4fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22f500: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22f500u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22f504: 0x3e00008  jr          $ra
    ctx->pc = 0x22F504u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22F508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F504u;
            // 0x22f508: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22F50Cu;
}
