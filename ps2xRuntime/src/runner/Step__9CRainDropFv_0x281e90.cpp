#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__9CRainDropFv
// Address: 0x281e90 - 0x281f5c
void Step__9CRainDropFv_0x281e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__9CRainDropFv_0x281e90");
#endif

    switch (ctx->pc) {
        case 0x281ec0u: goto label_281ec0;
        case 0x281edcu: goto label_281edc;
        case 0x281ef8u: goto label_281ef8;
        default: break;
    }

    ctx->pc = 0x281e90u;

    // 0x281e90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x281e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x281e94: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x281e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x281e98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x281e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x281e9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x281e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x281ea0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x281ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x281ea4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x281ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x281ea8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x281EA8u;
    {
        const bool branch_taken_0x281ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x281EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281EA8u;
            // 0x281eac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281ea8) {
            ctx->pc = 0x281EB8u;
            goto label_281eb8;
        }
    }
    ctx->pc = 0x281EB0u;
    // 0x281eb0: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x281EB0u;
    {
        const bool branch_taken_0x281eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281EB0u;
            // 0x281eb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281eb0) {
            ctx->pc = 0x281F44u;
            goto label_281f44;
        }
    }
    ctx->pc = 0x281EB8u;
label_281eb8:
    // 0x281eb8: 0x24110007  addiu       $s1, $zero, 0x7
    ctx->pc = 0x281eb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x281ebc: 0x24120070  addiu       $s2, $zero, 0x70
    ctx->pc = 0x281ebcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_281ec0:
    // 0x281ec0: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x281ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x281ec4: 0x2121821  addu        $v1, $s0, $s2
    ctx->pc = 0x281ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x281ec8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x281ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x281ecc: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x281eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x281ed0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x281ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x281ed4: 0xc041c5c  jal         func_107170
    ctx->pc = 0x281ED4u;
    SET_GPR_U32(ctx, 31, 0x281EDCu);
    ctx->pc = 0x281ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281ED4u;
            // 0x281ed8: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281EDCu; }
        if (ctx->pc != 0x281EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281EDCu; }
        if (ctx->pc != 0x281EDCu) { return; }
    }
    ctx->pc = 0x281EDCu;
label_281edc:
    // 0x281edc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x281edcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x281ee0: 0x1e20fff7  bgtz        $s1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x281EE0u;
    {
        const bool branch_taken_0x281ee0 = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x281EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281EE0u;
            // 0x281ee4: 0x2652fff0  addiu       $s2, $s2, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281ee0) {
            ctx->pc = 0x281EC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_281ec0;
        }
    }
    ctx->pc = 0x281EE8u;
    // 0x281ee8: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x281ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x281eec: 0x26060090  addiu       $a2, $s0, 0x90
    ctx->pc = 0x281eecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x281ef0: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x281EF0u;
    SET_GPR_U32(ctx, 31, 0x281EF8u);
    ctx->pc = 0x281EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281EF0u;
            // 0x281ef4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281EF8u; }
        if (ctx->pc != 0x281EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281EF8u; }
        if (ctx->pc != 0x281EF8u) { return; }
    }
    ctx->pc = 0x281EF8u;
label_281ef8:
    // 0x281ef8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x281ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x281efc: 0x3c02c2c8  lui         $v0, 0xC2C8
    ctx->pc = 0x281efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49864 << 16));
    // 0x281f00: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x281f00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x281f04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x281f04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281f08: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x281f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x281f0c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x281f0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x281f10: 0x0  nop
    ctx->pc = 0x281f10u;
    // NOP
    // 0x281f14: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x281F14u;
    {
        const bool branch_taken_0x281f14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x281F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281F14u;
            // 0x281f18: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281f14) {
            ctx->pc = 0x281F24u;
            goto label_281f24;
        }
    }
    ctx->pc = 0x281F1Cu;
    // 0x281f1c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x281F1Cu;
    {
        const bool branch_taken_0x281f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281F1Cu;
            // 0x281f20: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281f1c) {
            ctx->pc = 0x281F48u;
            goto label_281f48;
        }
    }
    ctx->pc = 0x281F24u;
label_281f24:
    // 0x281f24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x281f24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281f28: 0x0  nop
    ctx->pc = 0x281f28u;
    // NOP
    // 0x281f2c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x281f2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x281f30: 0x0  nop
    ctx->pc = 0x281f30u;
    // NOP
    // 0x281f34: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x281F34u;
    {
        const bool branch_taken_0x281f34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x281F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281F34u;
            // 0x281f38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281f34) {
            ctx->pc = 0x281F44u;
            goto label_281f44;
        }
    }
    ctx->pc = 0x281F3Cu;
    // 0x281f3c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x281F3Cu;
    {
        const bool branch_taken_0x281f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281F3Cu;
            // 0x281f40: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281f3c) {
            ctx->pc = 0x281F44u;
            goto label_281f44;
        }
    }
    ctx->pc = 0x281F44u;
label_281f44:
    // 0x281f44: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x281f44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_281f48:
    // 0x281f48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x281f48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x281f4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x281f4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x281f50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x281f50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281f54: 0x3e00008  jr          $ra
    ctx->pc = 0x281F54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281F54u;
            // 0x281f58: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x281F5Cu;
}
