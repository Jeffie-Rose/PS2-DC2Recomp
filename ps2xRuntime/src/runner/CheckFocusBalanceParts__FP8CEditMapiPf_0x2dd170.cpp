#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckFocusBalanceParts__FP8CEditMapiPf
// Address: 0x2dd170 - 0x2dd238
void CheckFocusBalanceParts__FP8CEditMapiPf_0x2dd170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckFocusBalanceParts__FP8CEditMapiPf_0x2dd170");
#endif

    switch (ctx->pc) {
        case 0x2dd1a0u: goto label_2dd1a0;
        default: break;
    }

    ctx->pc = 0x2dd170u;

    // 0x2dd170: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2dd170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2dd174: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2dd174u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2dd178: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2dd178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2dd17c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2dd17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2dd180: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dd180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2dd184: 0x8c441054  lw          $a0, 0x1054($v0)
    ctx->pc = 0x2dd184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4180)));
    // 0x2dd188: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DD188u;
    {
        const bool branch_taken_0x2dd188 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DD18Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD188u;
            // 0x2dd18c: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd188) {
            ctx->pc = 0x2DD198u;
            goto label_2dd198;
        }
    }
    ctx->pc = 0x2DD190u;
    // 0x2dd190: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2DD190u;
    {
        const bool branch_taken_0x2dd190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD190u;
            // 0x2dd194: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd190) {
            ctx->pc = 0x2DD228u;
            goto label_2dd228;
        }
    }
    ctx->pc = 0x2DD198u;
label_2dd198:
    // 0x2dd198: 0xc059c88  jal         func_167220
    ctx->pc = 0x2DD198u;
    SET_GPR_U32(ctx, 31, 0x2DD1A0u);
    ctx->pc = 0x2DD19Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD198u;
            // 0x2dd19c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167220u;
    if (runtime->hasFunction(0x167220u)) {
        auto targetFn = runtime->lookupFunction(0x167220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD1A0u; }
        if (ctx->pc != 0x2DD1A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBoundBox__9CMapPartsFP9mgVu0FBOX_0x167220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD1A0u; }
        if (ctx->pc != 0x2DD1A0u) { return; }
    }
    ctx->pc = 0x2DD1A0u;
label_2dd1a0:
    // 0x2dd1a0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DD1A0u;
    {
        const bool branch_taken_0x2dd1a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DD1A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD1A0u;
            // 0x2dd1a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd1a0) {
            ctx->pc = 0x2DD1B0u;
            goto label_2dd1b0;
        }
    }
    ctx->pc = 0x2DD1A8u;
    // 0x2dd1a8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2DD1A8u;
    {
        const bool branch_taken_0x2dd1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD1ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD1A8u;
            // 0x2dd1ac: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd1a8) {
            ctx->pc = 0x2DD22Cu;
            goto label_2dd22c;
        }
    }
    ctx->pc = 0x2DD1B0u;
label_2dd1b0:
    // 0x2dd1b0: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2dd1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dd1b4: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2dd1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dd1b8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2dd1b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dd1bc: 0x0  nop
    ctx->pc = 0x2dd1bcu;
    // NOP
    // 0x2dd1c0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2DD1C0u;
    {
        const bool branch_taken_0x2dd1c0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DD1C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD1C0u;
            // 0x2dd1c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd1c0) {
            ctx->pc = 0x2DD1D0u;
            goto label_2dd1d0;
        }
    }
    ctx->pc = 0x2DD1C8u;
    // 0x2dd1c8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2DD1C8u;
    {
        const bool branch_taken_0x2dd1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd1c8) {
            ctx->pc = 0x2DD228u;
            goto label_2dd228;
        }
    }
    ctx->pc = 0x2DD1D0u;
label_2dd1d0:
    // 0x2dd1d0: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2dd1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dd1d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2dd1d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dd1d8: 0x0  nop
    ctx->pc = 0x2dd1d8u;
    // NOP
    // 0x2dd1dc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2DD1DCu;
    {
        const bool branch_taken_0x2dd1dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DD1E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD1DCu;
            // 0x2dd1e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd1dc) {
            ctx->pc = 0x2DD1ECu;
            goto label_2dd1ec;
        }
    }
    ctx->pc = 0x2DD1E4u;
    // 0x2dd1e4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2DD1E4u;
    {
        const bool branch_taken_0x2dd1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd1e4) {
            ctx->pc = 0x2DD228u;
            goto label_2dd228;
        }
    }
    ctx->pc = 0x2DD1ECu;
label_2dd1ec:
    // 0x2dd1ec: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x2dd1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dd1f0: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2dd1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dd1f4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2dd1f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dd1f8: 0x0  nop
    ctx->pc = 0x2dd1f8u;
    // NOP
    // 0x2dd1fc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2DD1FCu;
    {
        const bool branch_taken_0x2dd1fc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DD200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD1FCu;
            // 0x2dd200: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd1fc) {
            ctx->pc = 0x2DD20Cu;
            goto label_2dd20c;
        }
    }
    ctx->pc = 0x2DD204u;
    // 0x2dd204: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2DD204u;
    {
        const bool branch_taken_0x2dd204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd204) {
            ctx->pc = 0x2DD228u;
            goto label_2dd228;
        }
    }
    ctx->pc = 0x2DD20Cu;
label_2dd20c:
    // 0x2dd20c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2dd20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dd210: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2dd210u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dd214: 0x0  nop
    ctx->pc = 0x2dd214u;
    // NOP
    // 0x2dd218: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2DD218u;
    {
        const bool branch_taken_0x2dd218 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DD21Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD218u;
            // 0x2dd21c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd218) {
            ctx->pc = 0x2DD224u;
            goto label_2dd224;
        }
    }
    ctx->pc = 0x2DD220u;
    // 0x2dd220: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2dd220u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dd224:
    // 0x2dd224: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2dd224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2dd228:
    // 0x2dd228: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2dd228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2dd22c:
    // 0x2dd22c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dd22cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dd230: 0x3e00008  jr          $ra
    ctx->pc = 0x2DD230u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD230u;
            // 0x2dd234: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DD238u;
}
