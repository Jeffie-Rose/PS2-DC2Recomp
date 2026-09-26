#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__12CDamageScoreFv
// Address: 0x1cae10 - 0x1cafb4
void Step__12CDamageScoreFv_0x1cae10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__12CDamageScoreFv_0x1cae10");
#endif

    switch (ctx->pc) {
        case 0x1caf00u: goto label_1caf00;
        default: break;
    }

    ctx->pc = 0x1cae10u;

    // 0x1cae10: 0x8c830088  lw          $v1, 0x88($a0)
    ctx->pc = 0x1cae10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x1cae14: 0x10600065  beqz        $v1, . + 4 + (0x65 << 2)
    ctx->pc = 0x1CAE14u;
    {
        const bool branch_taken_0x1cae14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cae14) {
            ctx->pc = 0x1CAFACu;
            goto label_1cafac;
        }
    }
    ctx->pc = 0x1CAE1Cu;
    // 0x1cae1c: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x1cae1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x1cae20: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x1CAE20u;
    {
        const bool branch_taken_0x1cae20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cae20) {
            ctx->pc = 0x1CAEB4u;
            goto label_1caeb4;
        }
    }
    ctx->pc = 0x1CAE28u;
    // 0x1cae28: 0x84830050  lh          $v1, 0x50($a0)
    ctx->pc = 0x1cae28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x1cae2c: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1CAE2Cu;
    {
        const bool branch_taken_0x1cae2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cae2c) {
            ctx->pc = 0x1CAE88u;
            goto label_1cae88;
        }
    }
    ctx->pc = 0x1CAE34u;
    // 0x1cae34: 0xc4810028  lwc1        $f1, 0x28($a0)
    ctx->pc = 0x1cae34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cae38: 0x3c033ec9  lui         $v1, 0x3EC9
    ctx->pc = 0x1cae38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16073 << 16));
    // 0x1cae3c: 0x34650fdb  ori         $a1, $v1, 0xFDB
    ctx->pc = 0x1cae3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1cae40: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1cae40u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cae44: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x1cae44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x1cae48: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1cae48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1cae4c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1cae4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1cae50: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1cae50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1cae54: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1cae54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cae58: 0x0  nop
    ctx->pc = 0x1cae58u;
    // NOP
    // 0x1cae5c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1CAE5Cu;
    {
        const bool branch_taken_0x1cae5c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CAE60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAE5Cu;
            // 0x1cae60: 0xe4800028  swc1        $f0, 0x28($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cae5c) {
            ctx->pc = 0x1CAE70u;
            goto label_1cae70;
        }
    }
    ctx->pc = 0x1CAE64u;
    // 0x1cae64: 0xe4820028  swc1        $f2, 0x28($a0)
    ctx->pc = 0x1cae64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x1cae68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cae68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cae6c: 0xa4830050  sh          $v1, 0x50($a0)
    ctx->pc = 0x1cae6cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 80), (uint16_t)GPR_U32(ctx, 3));
label_1cae70:
    // 0x1cae70: 0x8483004e  lh          $v1, 0x4E($a0)
    ctx->pc = 0x1cae70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 78)));
    // 0x1cae74: 0x28610080  slti        $at, $v1, 0x80
    ctx->pc = 0x1cae74u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x1cae78: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CAE78u;
    {
        const bool branch_taken_0x1cae78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cae78) {
            ctx->pc = 0x1CAE88u;
            goto label_1cae88;
        }
    }
    ctx->pc = 0x1CAE80u;
    // 0x1cae80: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x1cae80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x1cae84: 0xa483004e  sh          $v1, 0x4E($a0)
    ctx->pc = 0x1cae84u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 78), (uint16_t)GPR_U32(ctx, 3));
label_1cae88:
    // 0x1cae88: 0x84850050  lh          $a1, 0x50($a0)
    ctx->pc = 0x1cae88u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x1cae8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cae8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cae90: 0x14a30008  bne         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CAE90u;
    {
        const bool branch_taken_0x1cae90 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1cae90) {
            ctx->pc = 0x1CAEB4u;
            goto label_1caeb4;
        }
    }
    ctx->pc = 0x1CAE98u;
    // 0x1cae98: 0x8483004e  lh          $v1, 0x4E($a0)
    ctx->pc = 0x1cae98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 78)));
    // 0x1cae9c: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x1cae9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x1caea0: 0xa483004e  sh          $v1, 0x4E($a0)
    ctx->pc = 0x1caea0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 78), (uint16_t)GPR_U32(ctx, 3));
    // 0x1caea4: 0x8483004e  lh          $v1, 0x4E($a0)
    ctx->pc = 0x1caea4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 78)));
    // 0x1caea8: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CAEA8u;
    {
        const bool branch_taken_0x1caea8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1caea8) {
            ctx->pc = 0x1CAEB4u;
            goto label_1caeb4;
        }
    }
    ctx->pc = 0x1CAEB0u;
    // 0x1caeb0: 0xac800088  sw          $zero, 0x88($a0)
    ctx->pc = 0x1caeb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 0));
label_1caeb4:
    // 0x1caeb4: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x1caeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x1caeb8: 0x1460003c  bnez        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x1CAEB8u;
    {
        const bool branch_taken_0x1caeb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1caeb8) {
            ctx->pc = 0x1CAFACu;
            goto label_1cafac;
        }
    }
    ctx->pc = 0x1CAEC0u;
    // 0x1caec0: 0x84830050  lh          $v1, 0x50($a0)
    ctx->pc = 0x1caec0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x1caec4: 0x1460002e  bnez        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x1CAEC4u;
    {
        const bool branch_taken_0x1caec4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CAEC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAEC4u;
            // 0x1caec8: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caec4) {
            ctx->pc = 0x1CAF80u;
            goto label_1caf80;
        }
    }
    ctx->pc = 0x1CAECCu;
    // 0x1caecc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1caeccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caed0: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x1caed0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1caed4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1caed4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caed8: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x1caed8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x1caedc: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1caedcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1caee0: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1caee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x1caee4: 0x34660fdb  ori         $a2, $v1, 0xFDB
    ctx->pc = 0x1caee4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1caee8: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x1caee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x1caeec: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1caeecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1caef0: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x1caef0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1caef4: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x1caef4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1caef8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1CAEF8u;
    {
        const bool branch_taken_0x1caef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAEFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAEF8u;
            // 0x1caefc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caef8) {
            ctx->pc = 0x1CAF58u;
            goto label_1caf58;
        }
    }
    ctx->pc = 0x1CAF00u;
label_1caf00:
    // 0x1caf00: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x1caf00u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1caf04: 0x881821  addu        $v1, $a0, $t0
    ctx->pc = 0x1caf04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x1caf08: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x1caf08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1caf0c: 0x24660028  addiu       $a2, $v1, 0x28
    ctx->pc = 0x1caf0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x1caf10: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1caf10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1caf14: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x1caf14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1caf18: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x1caf18u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x1caf1c: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1caf1cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x1caf20: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1caf20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1caf24: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x1caf24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1caf28: 0x0  nop
    ctx->pc = 0x1caf28u;
    // NOP
    // 0x1caf2c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1CAF2Cu;
    {
        const bool branch_taken_0x1caf2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CAF30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAF2Cu;
            // 0x1caf30: 0xe4600028  swc1        $f0, 0x28($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caf2c) {
            ctx->pc = 0x1CAF4Cu;
            goto label_1caf4c;
        }
    }
    ctx->pc = 0x1CAF34u;
    // 0x1caf34: 0xe4c50000  swc1        $f5, 0x0($a2)
    ctx->pc = 0x1caf34u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x1caf38: 0x84830052  lh          $v1, 0x52($a0)
    ctx->pc = 0x1caf38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 82)));
    // 0x1caf3c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1caf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1caf40: 0x14e30002  bne         $a3, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CAF40u;
    {
        const bool branch_taken_0x1caf40 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x1caf40) {
            ctx->pc = 0x1CAF4Cu;
            goto label_1caf4c;
        }
    }
    ctx->pc = 0x1CAF48u;
    // 0x1caf48: 0xa4850050  sh          $a1, 0x50($a0)
    ctx->pc = 0x1caf48u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 80), (uint16_t)GPR_U32(ctx, 5));
label_1caf4c:
    // 0x1caf4c: 0x0  nop
    ctx->pc = 0x1caf4cu;
    // NOP
    // 0x1caf50: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x1caf50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x1caf54: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1caf54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1caf58:
    // 0x1caf58: 0x84830052  lh          $v1, 0x52($a0)
    ctx->pc = 0x1caf58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 82)));
    // 0x1caf5c: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x1caf5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1caf60: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1CAF60u;
    {
        const bool branch_taken_0x1caf60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1caf60) {
            ctx->pc = 0x1CAF00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1caf00;
        }
    }
    ctx->pc = 0x1CAF68u;
    // 0x1caf68: 0x8483004e  lh          $v1, 0x4E($a0)
    ctx->pc = 0x1caf68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 78)));
    // 0x1caf6c: 0x28610080  slti        $at, $v1, 0x80
    ctx->pc = 0x1caf6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x1caf70: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CAF70u;
    {
        const bool branch_taken_0x1caf70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1caf70) {
            ctx->pc = 0x1CAF80u;
            goto label_1caf80;
        }
    }
    ctx->pc = 0x1CAF78u;
    // 0x1caf78: 0x24630006  addiu       $v1, $v1, 0x6
    ctx->pc = 0x1caf78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x1caf7c: 0xa483004e  sh          $v1, 0x4E($a0)
    ctx->pc = 0x1caf7cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 78), (uint16_t)GPR_U32(ctx, 3));
label_1caf80:
    // 0x1caf80: 0x84850050  lh          $a1, 0x50($a0)
    ctx->pc = 0x1caf80u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x1caf84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1caf84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1caf88: 0x14a30008  bne         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CAF88u;
    {
        const bool branch_taken_0x1caf88 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1caf88) {
            ctx->pc = 0x1CAFACu;
            goto label_1cafac;
        }
    }
    ctx->pc = 0x1CAF90u;
    // 0x1caf90: 0x8483004e  lh          $v1, 0x4E($a0)
    ctx->pc = 0x1caf90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 78)));
    // 0x1caf94: 0x2463fffa  addiu       $v1, $v1, -0x6
    ctx->pc = 0x1caf94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x1caf98: 0xa483004e  sh          $v1, 0x4E($a0)
    ctx->pc = 0x1caf98u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 78), (uint16_t)GPR_U32(ctx, 3));
    // 0x1caf9c: 0x8483004e  lh          $v1, 0x4E($a0)
    ctx->pc = 0x1caf9cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 78)));
    // 0x1cafa0: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CAFA0u;
    {
        const bool branch_taken_0x1cafa0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1cafa0) {
            ctx->pc = 0x1CAFACu;
            goto label_1cafac;
        }
    }
    ctx->pc = 0x1CAFA8u;
    // 0x1cafa8: 0xac800088  sw          $zero, 0x88($a0)
    ctx->pc = 0x1cafa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 0));
label_1cafac:
    // 0x1cafac: 0x3e00008  jr          $ra
    ctx->pc = 0x1CAFACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CAFB4u;
}
