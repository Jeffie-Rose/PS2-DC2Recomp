#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__14CEnemyLifeGageFv
// Address: 0x1ca7c0 - 0x1ca90c
void Step__14CEnemyLifeGageFv_0x1ca7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__14CEnemyLifeGageFv_0x1ca7c0");
#endif

    switch (ctx->pc) {
        case 0x1ca8d4u: goto label_1ca8d4;
        case 0x1ca8e0u: goto label_1ca8e0;
        default: break;
    }

    ctx->pc = 0x1ca7c0u;

    // 0x1ca7c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ca7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ca7c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ca7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1ca7c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ca7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ca7cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ca7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ca7d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ca7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ca7d4: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x1ca7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1ca7d8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CA7D8u;
    {
        const bool branch_taken_0x1ca7d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA7DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA7D8u;
            // 0x1ca7dc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca7d8) {
            ctx->pc = 0x1CA7ECu;
            goto label_1ca7ec;
        }
    }
    ctx->pc = 0x1CA7E0u;
    // 0x1ca7e0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1ca7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1ca7e4: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1CA7E4u;
    {
        const bool branch_taken_0x1ca7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA7E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA7E4u;
            // 0x1ca7e8: 0xae030020  sw          $v1, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca7e4) {
            ctx->pc = 0x1CA8F4u;
            goto label_1ca8f4;
        }
    }
    ctx->pc = 0x1CA7ECu;
label_1ca7ec:
    // 0x1ca7ec: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1ca7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1ca7f0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1CA7F0u;
    {
        const bool branch_taken_0x1ca7f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca7f0) {
            ctx->pc = 0x1CA864u;
            goto label_1ca864;
        }
    }
    ctx->pc = 0x1CA7F8u;
    // 0x1ca7f8: 0xc6020020  lwc1        $f2, 0x20($s0)
    ctx->pc = 0x1ca7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ca7fc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ca7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ca800: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ca800u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ca804: 0x0  nop
    ctx->pc = 0x1ca804u;
    // NOP
    // 0x1ca808: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1ca808u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ca80c: 0x0  nop
    ctx->pc = 0x1ca80cu;
    // NOP
    // 0x1ca810: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1CA810u;
    {
        const bool branch_taken_0x1ca810 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CA814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA810u;
            // 0x1ca814: 0x3c034040  lui         $v1, 0x4040 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca810) {
            ctx->pc = 0x1CA83Cu;
            goto label_1ca83c;
        }
    }
    ctx->pc = 0x1CA818u;
    // 0x1ca818: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x1ca818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
    // 0x1ca81c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ca81cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ca820: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1ca820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x1ca824: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ca824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ca828: 0x0  nop
    ctx->pc = 0x1ca828u;
    // NOP
    // 0x1ca82c: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1ca82cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x1ca830: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ca830u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ca834: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1ca834u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1ca838: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1ca838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_1ca83c:
    // 0x1ca83c: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x1ca83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca840: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ca840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ca844: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ca844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ca848: 0x0  nop
    ctx->pc = 0x1ca848u;
    // NOP
    // 0x1ca84c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ca84cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ca850: 0x0  nop
    ctx->pc = 0x1ca850u;
    // NOP
    // 0x1ca854: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x1CA854u;
    {
        const bool branch_taken_0x1ca854 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CA858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA854u;
            // 0x1ca858: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca854) {
            ctx->pc = 0x1CA8D0u;
            goto label_1ca8d0;
        }
    }
    ctx->pc = 0x1CA85Cu;
    // 0x1ca85c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1CA85Cu;
    {
        const bool branch_taken_0x1ca85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA85Cu;
            // 0x1ca860: 0xe6000020  swc1        $f0, 0x20($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca85c) {
            ctx->pc = 0x1CA8CCu;
            goto label_1ca8cc;
        }
    }
    ctx->pc = 0x1CA864u;
label_1ca864:
    // 0x1ca864: 0xc6020020  lwc1        $f2, 0x20($s0)
    ctx->pc = 0x1ca864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ca868: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ca868u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ca86c: 0x0  nop
    ctx->pc = 0x1ca86cu;
    // NOP
    // 0x1ca870: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1ca870u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ca874: 0x0  nop
    ctx->pc = 0x1ca874u;
    // NOP
    // 0x1ca878: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x1CA878u;
    {
        const bool branch_taken_0x1ca878 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CA87Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA878u;
            // 0x1ca87c: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca878) {
            ctx->pc = 0x1CA8A4u;
            goto label_1ca8a4;
        }
    }
    ctx->pc = 0x1CA880u;
    // 0x1ca880: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1ca880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x1ca884: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ca884u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ca888: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1ca888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x1ca88c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ca88cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ca890: 0x0  nop
    ctx->pc = 0x1ca890u;
    // NOP
    // 0x1ca894: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1ca894u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x1ca898: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ca898u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ca89c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1ca89cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1ca8a0: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1ca8a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_1ca8a4:
    // 0x1ca8a4: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x1ca8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca8a8: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1ca8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1ca8ac: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1ca8acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1ca8b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ca8b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ca8b4: 0x0  nop
    ctx->pc = 0x1ca8b4u;
    // NOP
    // 0x1ca8b8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ca8b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ca8bc: 0x0  nop
    ctx->pc = 0x1ca8bcu;
    // NOP
    // 0x1ca8c0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1CA8C0u;
    {
        const bool branch_taken_0x1ca8c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ca8c0) {
            ctx->pc = 0x1CA8CCu;
            goto label_1ca8cc;
        }
    }
    ctx->pc = 0x1CA8C8u;
    // 0x1ca8c8: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1ca8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_1ca8cc:
    // 0x1ca8cc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ca8ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca8d0:
    // 0x1ca8d0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ca8d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca8d4:
    // 0x1ca8d4: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x1ca8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1ca8d8: 0xc072818  jal         func_1CA060
    ctx->pc = 0x1CA8D8u;
    SET_GPR_U32(ctx, 31, 0x1CA8E0u);
    ctx->pc = 0x1CA8DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA8D8u;
            // 0x1ca8dc: 0x24440024  addiu       $a0, $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA060u;
    if (runtime->hasFunction(0x1CA060u)) {
        auto targetFn = runtime->lookupFunction(0x1CA060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA8E0u; }
        if (ctx->pc != 0x1CA8E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__13CEnemyGekirinFv_0x1ca060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA8E0u; }
        if (ctx->pc != 0x1CA8E0u) { return; }
    }
    ctx->pc = 0x1CA8E0u;
label_1ca8e0:
    // 0x1ca8e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ca8e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1ca8e4: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x1ca8e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x1ca8e8: 0x2a230010  slti        $v1, $s1, 0x10
    ctx->pc = 0x1ca8e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1ca8ec: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1CA8ECu;
    {
        const bool branch_taken_0x1ca8ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ca8ec) {
            ctx->pc = 0x1CA8D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ca8d4;
        }
    }
    ctx->pc = 0x1CA8F4u;
label_1ca8f4:
    // 0x1ca8f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ca8f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ca8f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ca8f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ca8fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ca8fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ca900: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ca900u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca904: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA904u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA904u;
            // 0x1ca908: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CA90Cu;
}
