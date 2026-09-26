#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StepDownLoadAnaunce__Fi
// Address: 0x1f5600 - 0x1f5a30
void StepDownLoadAnaunce__Fi_0x1f5600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StepDownLoadAnaunce__Fi_0x1f5600");
#endif

    switch (ctx->pc) {
        case 0x1f5684u: goto label_1f5684;
        case 0x1f56a8u: goto label_1f56a8;
        case 0x1f5718u: goto label_1f5718;
        case 0x1f5798u: goto label_1f5798;
        case 0x1f5858u: goto label_1f5858;
        case 0x1f58f8u: goto label_1f58f8;
        case 0x1f5904u: goto label_1f5904;
        case 0x1f592cu: goto label_1f592c;
        case 0x1f5938u: goto label_1f5938;
        case 0x1f5958u: goto label_1f5958;
        case 0x1f59e8u: goto label_1f59e8;
        default: break;
    }

    ctx->pc = 0x1f5600u;

    // 0x1f5600: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f5600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1f5604: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1f5604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1f5608: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1f5608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1f560c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1f560cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1f5610: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1f5610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1f5614: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f5614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1f5618: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1f5618u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1f561c: 0x97838fe0  lhu         $v1, -0x7020($gp)
    ctx->pc = 0x1f561cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938592)));
    // 0x1f5620: 0x97828fdc  lhu         $v0, -0x7024($gp)
    ctx->pc = 0x1f5620u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938588)));
    // 0x1f5624: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f5624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f5628: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F5628u;
    {
        const bool branch_taken_0x1f5628 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1F562Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5628u;
            // 0x1f562c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5628) {
            ctx->pc = 0x1F5638u;
            goto label_1f5638;
        }
    }
    ctx->pc = 0x1F5630u;
    // 0x1f5630: 0x100000f8  b           . + 4 + (0xF8 << 2)
    ctx->pc = 0x1F5630u;
    {
        const bool branch_taken_0x1f5630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5630u;
            // 0x1f5634: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5630) {
            ctx->pc = 0x1F5A14u;
            goto label_1f5a14;
        }
    }
    ctx->pc = 0x1F5638u;
label_1f5638:
    // 0x1f5638: 0x83828f94  lb          $v0, -0x706C($gp)
    ctx->pc = 0x1f5638u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938516)));
    // 0x1f563c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F563Cu;
    {
        const bool branch_taken_0x1f563c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F563Cu;
            // 0x1f5640: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f563c) {
            ctx->pc = 0x1F564Cu;
            goto label_1f564c;
        }
    }
    ctx->pc = 0x1F5644u;
    // 0x1f5644: 0x100000f2  b           . + 4 + (0xF2 << 2)
    ctx->pc = 0x1F5644u;
    {
        const bool branch_taken_0x1f5644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5644u;
            // 0x1f5648: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5644) {
            ctx->pc = 0x1F5A10u;
            goto label_1f5a10;
        }
    }
    ctx->pc = 0x1F564Cu;
label_1f564c:
    // 0x1f564c: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F564Cu;
    {
        const bool branch_taken_0x1f564c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f564c) {
            ctx->pc = 0x1F5658u;
            goto label_1f5658;
        }
    }
    ctx->pc = 0x1F5654u;
    // 0x1f5654: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f5654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f5658:
    // 0x1f5658: 0x83828fb0  lb          $v0, -0x7050($gp)
    ctx->pc = 0x1f5658u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938544)));
    // 0x1f565c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f565cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5660: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F5660u;
    {
        const bool branch_taken_0x1f5660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5660u;
            // 0x1f5664: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5660) {
            ctx->pc = 0x1F56A8u;
            goto label_1f56a8;
        }
    }
    ctx->pc = 0x1F5668u;
    // 0x1f5668: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1F5668u;
    {
        const bool branch_taken_0x1f5668 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5668) {
            ctx->pc = 0x1F56A8u;
            goto label_1f56a8;
        }
    }
    ctx->pc = 0x1F5670u;
    // 0x1f5670: 0x8f828f90  lw          $v0, -0x7070($gp)
    ctx->pc = 0x1f5670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938512)));
    // 0x1f5674: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F5674u;
    {
        const bool branch_taken_0x1f5674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5674u;
            // 0x1f5678: 0x24040019  addiu       $a0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5674) {
            ctx->pc = 0x1F5690u;
            goto label_1f5690;
        }
    }
    ctx->pc = 0x1F567Cu;
    // 0x1f567c: 0xc094274  jal         func_2509D0
    ctx->pc = 0x1F567Cu;
    SET_GPR_U32(ctx, 31, 0x1F5684u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5684u; }
        if (ctx->pc != 0x1F5684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5684u; }
        if (ctx->pc != 0x1F5684u) { return; }
    }
    ctx->pc = 0x1F5684u;
label_1f5684:
    // 0x1f5684: 0xa3808f94  sb          $zero, -0x706C($gp)
    ctx->pc = 0x1f5684u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938516), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5688: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x1F5688u;
    {
        const bool branch_taken_0x1f5688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F568Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5688u;
            // 0x1f568c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5688) {
            ctx->pc = 0x1F5A10u;
            goto label_1f5a10;
        }
    }
    ctx->pc = 0x1F5690u;
label_1f5690:
    // 0x1f5690: 0x8f828fbc  lw          $v0, -0x7044($gp)
    ctx->pc = 0x1f5690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938556)));
    // 0x1f5694: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f5694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5698: 0xa3838fb0  sb          $v1, -0x7050($gp)
    ctx->pc = 0x1f5698u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938544), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f569c: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x1f569cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1f56a0: 0xc094274  jal         func_2509D0
    ctx->pc = 0x1F56A0u;
    SET_GPR_U32(ctx, 31, 0x1F56A8u);
    ctx->pc = 0x1F56A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F56A0u;
            // 0x1f56a4: 0xac4017f4  sw          $zero, 0x17F4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 6132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F56A8u; }
        if (ctx->pc != 0x1F56A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F56A8u; }
        if (ctx->pc != 0x1F56A8u) { return; }
    }
    ctx->pc = 0x1F56A8u;
label_1f56a8:
    // 0x1f56a8: 0x83828fb0  lb          $v0, -0x7050($gp)
    ctx->pc = 0x1f56a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938544)));
    // 0x1f56ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f56acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f56b0: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F56B0u;
    {
        const bool branch_taken_0x1f56b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f56b0) {
            ctx->pc = 0x1F56D4u;
            goto label_1f56d4;
        }
    }
    ctx->pc = 0x1F56B8u;
    // 0x1f56b8: 0x87828fac  lh          $v0, -0x7054($gp)
    ctx->pc = 0x1f56b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938540)));
    // 0x1f56bc: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x1f56bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1f56c0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F56C0u;
    {
        const bool branch_taken_0x1f56c0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F56C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F56C0u;
            // 0x1f56c4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f56c0) {
            ctx->pc = 0x1F56D0u;
            goto label_1f56d0;
        }
    }
    ctx->pc = 0x1F56C8u;
    // 0x1f56c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F56C8u;
    {
        const bool branch_taken_0x1f56c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F56CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F56C8u;
            // 0x1f56cc: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f56c8) {
            ctx->pc = 0x1F56D4u;
            goto label_1f56d4;
        }
    }
    ctx->pc = 0x1F56D0u;
label_1f56d0:
    // 0x1f56d0: 0xa3828fb0  sb          $v0, -0x7050($gp)
    ctx->pc = 0x1f56d0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938544), (uint8_t)GPR_U32(ctx, 2));
label_1f56d4:
    // 0x1f56d4: 0x83838fb0  lb          $v1, -0x7050($gp)
    ctx->pc = 0x1f56d4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938544)));
    // 0x1f56d8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1f56d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f56dc: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F56DCu;
    {
        const bool branch_taken_0x1f56dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f56dc) {
            ctx->pc = 0x1F56E8u;
            goto label_1f56e8;
        }
    }
    ctx->pc = 0x1F56E4u;
    // 0x1f56e4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1f56e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f56e8:
    // 0x1f56e8: 0xc7808760  lwc1        $f0, -0x78A0($gp)
    ctx->pc = 0x1f56e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f56ec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f56ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f56f0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1f56f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1f56f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f56f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f56f8: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x1f56f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1f56fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f56fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f5700: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1f5700u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f5704: 0x0  nop
    ctx->pc = 0x1f5704u;
    // NOP
    // 0x1f5708: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1F5708u;
    {
        const bool branch_taken_0x1f5708 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F570Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5708u;
            // 0x1f570c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5708) {
            ctx->pc = 0x1F5714u;
            goto label_1f5714;
        }
    }
    ctx->pc = 0x1F5710u;
    // 0x1f5710: 0x46000d06  mov.s       $f20, $f1
    ctx->pc = 0x1f5710u;
    ctx->f[20] = FPU_MOV_S(ctx->f[1]);
label_1f5714:
    // 0x1f5714: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1f5714u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5718:
    // 0x1f5718: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x1f5718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x1f571c: 0x244292a0  addiu       $v0, $v0, -0x6D60
    ctx->pc = 0x1f571cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939296));
    // 0x1f5720: 0x532821  addu        $a1, $v0, $s3
    ctx->pc = 0x1f5720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f5724: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1f5724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f5728: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1F5728u;
    {
        const bool branch_taken_0x1f5728 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5728) {
            ctx->pc = 0x1F5798u;
            goto label_1f5798;
        }
    }
    ctx->pc = 0x1F5730u;
    // 0x1f5730: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F5730u;
    {
        const bool branch_taken_0x1f5730 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5730) {
            ctx->pc = 0x1F5764u;
            goto label_1f5764;
        }
    }
    ctx->pc = 0x1F5738u;
    // 0x1f5738: 0x8c830194  lw          $v1, 0x194($a0)
    ctx->pc = 0x1f5738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 404)));
    // 0x1f573c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f573cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f5740: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x1f5740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x1f5744: 0xac830194  sw          $v1, 0x194($a0)
    ctx->pc = 0x1f5744u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 404), GPR_U32(ctx, 3));
    // 0x1f5748: 0x8783817c  lh          $v1, -0x7E84($gp)
    ctx->pc = 0x1f5748u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294934908)));
    // 0x1f574c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F574Cu;
    {
        const bool branch_taken_0x1f574c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f574c) {
            ctx->pc = 0x1F5764u;
            goto label_1f5764;
        }
    }
    ctx->pc = 0x1F5754u;
    // 0x1f5754: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1f5754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f5758: 0x8c620194  lw          $v0, 0x194($v1)
    ctx->pc = 0x1f5758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 404)));
    // 0x1f575c: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1f575cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x1f5760: 0xac620194  sw          $v0, 0x194($v1)
    ctx->pc = 0x1f5760u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 404), GPR_U32(ctx, 2));
label_1f5764:
    // 0x1f5764: 0x0  nop
    ctx->pc = 0x1f5764u;
    // NOP
    // 0x1f5768: 0x83828fb8  lb          $v0, -0x7048($gp)
    ctx->pc = 0x1f5768u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938552)));
    // 0x1f576c: 0x16420007  bne         $s2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F576Cu;
    {
        const bool branch_taken_0x1f576c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f576c) {
            ctx->pc = 0x1F578Cu;
            goto label_1f578c;
        }
    }
    ctx->pc = 0x1F5774u;
    // 0x1f5774: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F5774u;
    {
        const bool branch_taken_0x1f5774 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5774) {
            ctx->pc = 0x1F578Cu;
            goto label_1f578c;
        }
    }
    ctx->pc = 0x1F577Cu;
    // 0x1f577c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f577cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f5780: 0xc44001b8  lwc1        $f0, 0x1B8($v0)
    ctx->pc = 0x1f5780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f5784: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1f5784u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x1f5788: 0xe44001b8  swc1        $f0, 0x1B8($v0)
    ctx->pc = 0x1f5788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 440), bits); }
label_1f578c:
    // 0x1f578c: 0x0  nop
    ctx->pc = 0x1f578cu;
    // NOP
    // 0x1f5790: 0xc054ee8  jal         func_153BA0
    ctx->pc = 0x1F5790u;
    SET_GPR_U32(ctx, 31, 0x1F5798u);
    ctx->pc = 0x1F5794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5790u;
            // 0x1f5794: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153BA0u;
    if (runtime->hasFunction(0x153BA0u)) {
        auto targetFn = runtime->lookupFunction(0x153BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5798u; }
        if (ctx->pc != 0x1F5798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__6ClsMesFv_0x153ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5798u; }
        if (ctx->pc != 0x1F5798u) { return; }
    }
    ctx->pc = 0x1F5798u;
label_1f5798:
    // 0x1f5798: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1f5798u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1f579c: 0x2a420008  slti        $v0, $s2, 0x8
    ctx->pc = 0x1f579cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1f57a0: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1F57A0u;
    {
        const bool branch_taken_0x1f57a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F57A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F57A0u;
            // 0x1f57a4: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f57a0) {
            ctx->pc = 0x1F5718u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f5718;
        }
    }
    ctx->pc = 0x1F57A8u;
    // 0x1f57a8: 0x83838fb0  lb          $v1, -0x7050($gp)
    ctx->pc = 0x1f57a8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938544)));
    // 0x1f57ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f57acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f57b0: 0x1462001c  bne         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1F57B0u;
    {
        const bool branch_taken_0x1f57b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f57b0) {
            ctx->pc = 0x1F5824u;
            goto label_1f5824;
        }
    }
    ctx->pc = 0x1F57B8u;
    // 0x1f57b8: 0x87828fac  lh          $v0, -0x7054($gp)
    ctx->pc = 0x1f57b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938540)));
    // 0x1f57bc: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x1f57bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1f57c0: 0x14200018  bnez        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x1F57C0u;
    {
        const bool branch_taken_0x1f57c0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f57c0) {
            ctx->pc = 0x1F5824u;
            goto label_1f5824;
        }
    }
    ctx->pc = 0x1F57C8u;
    // 0x1f57c8: 0x8782817c  lh          $v0, -0x7E84($gp)
    ctx->pc = 0x1f57c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294934908)));
    // 0x1f57cc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f57ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f57d0: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1F57D0u;
    {
        const bool branch_taken_0x1f57d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f57d0) {
            ctx->pc = 0x1F5800u;
            goto label_1f5800;
        }
    }
    ctx->pc = 0x1F57D8u;
    // 0x1f57d8: 0x87828fc0  lh          $v0, -0x7040($gp)
    ctx->pc = 0x1f57d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938560)));
    // 0x1f57dc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1f57dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1f57e0: 0xa7828fc0  sh          $v0, -0x7040($gp)
    ctx->pc = 0x1f57e0u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294938560), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f57e4: 0x87828fc0  lh          $v0, -0x7040($gp)
    ctx->pc = 0x1f57e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938560)));
    // 0x1f57e8: 0x28420030  slti        $v0, $v0, 0x30
    ctx->pc = 0x1f57e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x1f57ec: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1F57ECu;
    {
        const bool branch_taken_0x1f57ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f57ec) {
            ctx->pc = 0x1F5824u;
            goto label_1f5824;
        }
    }
    ctx->pc = 0x1F57F4u;
    // 0x1f57f4: 0xa3838fb0  sb          $v1, -0x7050($gp)
    ctx->pc = 0x1f57f4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938544), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f57f8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1F57F8u;
    {
        const bool branch_taken_0x1f57f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F57FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F57F8u;
            // 0x1f57fc: 0xa7808fc0  sh          $zero, -0x7040($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294938560), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f57f8) {
            ctx->pc = 0x1F5824u;
            goto label_1f5824;
        }
    }
    ctx->pc = 0x1F5800u;
label_1f5800:
    // 0x1f5800: 0x87828fc0  lh          $v0, -0x7040($gp)
    ctx->pc = 0x1f5800u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938560)));
    // 0x1f5804: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x1f5804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1f5808: 0xa7828fc0  sh          $v0, -0x7040($gp)
    ctx->pc = 0x1f5808u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294938560), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f580c: 0x87828fc0  lh          $v0, -0x7040($gp)
    ctx->pc = 0x1f580cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938560)));
    // 0x1f5810: 0x28420018  slti        $v0, $v0, 0x18
    ctx->pc = 0x1f5810u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x1f5814: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F5814u;
    {
        const bool branch_taken_0x1f5814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5814) {
            ctx->pc = 0x1F5824u;
            goto label_1f5824;
        }
    }
    ctx->pc = 0x1F581Cu;
    // 0x1f581c: 0xa3838fb0  sb          $v1, -0x7050($gp)
    ctx->pc = 0x1f581cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938544), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f5820: 0xa7808fc0  sh          $zero, -0x7040($gp)
    ctx->pc = 0x1f5820u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294938560), (uint16_t)GPR_U32(ctx, 0));
label_1f5824:
    // 0x1f5824: 0x83838fb0  lb          $v1, -0x7050($gp)
    ctx->pc = 0x1f5824u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938544)));
    // 0x1f5828: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f5828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f582c: 0x14620068  bne         $v1, $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x1F582Cu;
    {
        const bool branch_taken_0x1f582c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f582c) {
            ctx->pc = 0x1F59D0u;
            goto label_1f59d0;
        }
    }
    ctx->pc = 0x1F5834u;
    // 0x1f5834: 0x83838fb8  lb          $v1, -0x7048($gp)
    ctx->pc = 0x1f5834u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938552)));
    // 0x1f5838: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x1f5838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x1f583c: 0x244292a0  addiu       $v0, $v0, -0x6D60
    ctx->pc = 0x1f583cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939296));
    // 0x1f5840: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f5840u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f5844: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f5844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f5848: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f5848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f584c: 0xaf828fbc  sw          $v0, -0x7044($gp)
    ctx->pc = 0x1f584cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938556), GPR_U32(ctx, 2));
    // 0x1f5850: 0xc054f84  jal         func_153E10
    ctx->pc = 0x1F5850u;
    SET_GPR_U32(ctx, 31, 0x1F5858u);
    ctx->pc = 0x1F5854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5850u;
            // 0x1f5854: 0x8f848fbc  lw          $a0, -0x7044($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938556)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153E10u;
    if (runtime->hasFunction(0x153E10u)) {
        auto targetFn = runtime->lookupFunction(0x153E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5858u; }
        if (ctx->pc != 0x1F5858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        State__6ClsMesFv_0x153e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5858u; }
        if (ctx->pc != 0x1F5858u) { return; }
    }
    ctx->pc = 0x1F5858u;
label_1f5858:
    // 0x1f5858: 0x8f848fbc  lw          $a0, -0x7044($gp)
    ctx->pc = 0x1f5858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938556)));
    // 0x1f585c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1f585cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f5860: 0x3c023fe6  lui         $v0, 0x3FE6
    ctx->pc = 0x1f5860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16358 << 16));
    // 0x1f5864: 0x34436666  ori         $v1, $v0, 0x6666
    ctx->pc = 0x1f5864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x1f5868: 0xac8517e4  sw          $a1, 0x17E4($a0)
    ctx->pc = 0x1f5868u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6116), GPR_U32(ctx, 5));
    // 0x1f586c: 0x8f828fbc  lw          $v0, -0x7044($gp)
    ctx->pc = 0x1f586cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938556)));
    // 0x1f5870: 0xac4301bc  sw          $v1, 0x1BC($v0)
    ctx->pc = 0x1f5870u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 444), GPR_U32(ctx, 3));
    // 0x1f5874: 0x87838fa0  lh          $v1, -0x7060($gp)
    ctx->pc = 0x1f5874u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938528)));
    // 0x1f5878: 0x8f828fbc  lw          $v0, -0x7044($gp)
    ctx->pc = 0x1f5878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938556)));
    // 0x1f587c: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x1f587cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1f5880: 0xac430190  sw          $v1, 0x190($v0)
    ctx->pc = 0x1f5880u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 400), GPR_U32(ctx, 3));
    // 0x1f5884: 0x87858fac  lh          $a1, -0x7054($gp)
    ctx->pc = 0x1f5884u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938540)));
    // 0x1f5888: 0x28a10004  slti        $at, $a1, 0x4
    ctx->pc = 0x1f5888u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1f588c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F588Cu;
    {
        const bool branch_taken_0x1f588c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f588c) {
            ctx->pc = 0x1F5898u;
            goto label_1f5898;
        }
    }
    ctx->pc = 0x1F5894u;
    // 0x1f5894: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1f5894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1f5898:
    // 0x1f5898: 0x8783817c  lh          $v1, -0x7E84($gp)
    ctx->pc = 0x1f5898u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294934908)));
    // 0x1f589c: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x1f589cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f58a0: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F58A0u;
    {
        const bool branch_taken_0x1f58a0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F58A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F58A0u;
            // 0x1f58a4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f58a0) {
            ctx->pc = 0x1F58B4u;
            goto label_1f58b4;
        }
    }
    ctx->pc = 0x1F58A8u;
    // 0x1f58a8: 0x14a20002  bne         $a1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F58A8u;
    {
        const bool branch_taken_0x1f58a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F58ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F58A8u;
            // 0x1f58ac: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f58a8) {
            ctx->pc = 0x1F58B4u;
            goto label_1f58b4;
        }
    }
    ctx->pc = 0x1F58B0u;
    // 0x1f58b0: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x1f58b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1f58b4:
    // 0x1f58b4: 0x87848fa2  lh          $a0, -0x705E($gp)
    ctx->pc = 0x1f58b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938530)));
    // 0x1f58b8: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x1f58b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1f58bc: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x1f58bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1f58c0: 0x8f828fbc  lw          $v0, -0x7044($gp)
    ctx->pc = 0x1f58c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938556)));
    // 0x1f58c4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1f58c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1f58c8: 0x24840016  addiu       $a0, $a0, 0x16
    ctx->pc = 0x1f58c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22));
    // 0x1f58cc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1f58ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1f58d0: 0xac430194  sw          $v1, 0x194($v0)
    ctx->pc = 0x1f58d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 404), GPR_U32(ctx, 3));
    // 0x1f58d4: 0x8f838f90  lw          $v1, -0x7070($gp)
    ctx->pc = 0x1f58d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938512)));
    // 0x1f58d8: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x1f58d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f58dc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F58DCu;
    {
        const bool branch_taken_0x1f58dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f58dc) {
            ctx->pc = 0x1F5904u;
            goto label_1f5904;
        }
    }
    ctx->pc = 0x1F58E4u;
    // 0x1f58e4: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x1f58e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1f58e8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F58E8u;
    {
        const bool branch_taken_0x1f58e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F58ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F58E8u;
            // 0x1f58ec: 0x8f828fbc  lw          $v0, -0x7044($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938556)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f58e8) {
            ctx->pc = 0x1F58F8u;
            goto label_1f58f8;
        }
    }
    ctx->pc = 0x1F58F0u;
    // 0x1f58f0: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x1F58F0u;
    SET_GPR_U32(ctx, 31, 0x1F58F8u);
    ctx->pc = 0x1F58F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F58F0u;
            // 0x1f58f4: 0x24441801  addiu       $a0, $v0, 0x1801 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6145));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F58F8u; }
        if (ctx->pc != 0x1F58F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F58F8u; }
        if (ctx->pc != 0x1F58F8u) { return; }
    }
    ctx->pc = 0x1F58F8u;
label_1f58f8:
    // 0x1f58f8: 0x8f848fbc  lw          $a0, -0x7044($gp)
    ctx->pc = 0x1f58f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938556)));
    // 0x1f58fc: 0xc0562c8  jal         func_158B20
    ctx->pc = 0x1F58FCu;
    SET_GPR_U32(ctx, 31, 0x1F5904u);
    ctx->pc = 0x1F5900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F58FCu;
            // 0x1f5900: 0x2405067c  addiu       $a1, $zero, 0x67C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1660));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158B20u;
    if (runtime->hasFunction(0x158B20u)) {
        auto targetFn = runtime->lookupFunction(0x158B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5904u; }
        if (ctx->pc != 0x1F5904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWin__6ClsMesFi_0x158b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5904u; }
        if (ctx->pc != 0x1F5904u) { return; }
    }
    ctx->pc = 0x1F5904u;
label_1f5904:
    // 0x1f5904: 0x8f848f90  lw          $a0, -0x7070($gp)
    ctx->pc = 0x1f5904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938512)));
    // 0x1f5908: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f5908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f590c: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x1f590cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f5910: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F5910u;
    {
        const bool branch_taken_0x1f5910 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f5910) {
            ctx->pc = 0x1F5958u;
            goto label_1f5958;
        }
    }
    ctx->pc = 0x1F5918u;
    // 0x1f5918: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x1f5918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1f591c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F591Cu;
    {
        const bool branch_taken_0x1f591c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F591Cu;
            // 0x1f5920: 0x8f828fbc  lw          $v0, -0x7044($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938556)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f591c) {
            ctx->pc = 0x1F592Cu;
            goto label_1f592c;
        }
    }
    ctx->pc = 0x1F5924u;
    // 0x1f5924: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x1F5924u;
    SET_GPR_U32(ctx, 31, 0x1F592Cu);
    ctx->pc = 0x1F5928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5924u;
            // 0x1f5928: 0x24441801  addiu       $a0, $v0, 0x1801 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6145));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F592Cu; }
        if (ctx->pc != 0x1F592Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F592Cu; }
        if (ctx->pc != 0x1F592Cu) { return; }
    }
    ctx->pc = 0x1F592Cu;
label_1f592c:
    // 0x1f592c: 0x8f848fbc  lw          $a0, -0x7044($gp)
    ctx->pc = 0x1f592cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938556)));
    // 0x1f5930: 0xc0562c8  jal         func_158B20
    ctx->pc = 0x1F5930u;
    SET_GPR_U32(ctx, 31, 0x1F5938u);
    ctx->pc = 0x1F5934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5930u;
            // 0x1f5934: 0x2405067d  addiu       $a1, $zero, 0x67D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1661));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158B20u;
    if (runtime->hasFunction(0x158B20u)) {
        auto targetFn = runtime->lookupFunction(0x158B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5938u; }
        if (ctx->pc != 0x1F5938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWin__6ClsMesFi_0x158b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5938u; }
        if (ctx->pc != 0x1F5938u) { return; }
    }
    ctx->pc = 0x1F5938u;
label_1f5938:
    // 0x1f5938: 0x8f838f90  lw          $v1, -0x7070($gp)
    ctx->pc = 0x1f5938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938512)));
    // 0x1f593c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f593cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5940: 0x80630009  lb          $v1, 0x9($v1)
    ctx->pc = 0x1f5940u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 9)));
    // 0x1f5944: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F5944u;
    {
        const bool branch_taken_0x1f5944 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f5944) {
            ctx->pc = 0x1F5958u;
            goto label_1f5958;
        }
    }
    ctx->pc = 0x1F594Cu;
    // 0x1f594c: 0x8f848fbc  lw          $a0, -0x7044($gp)
    ctx->pc = 0x1f594cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938556)));
    // 0x1f5950: 0xc0562c8  jal         func_158B20
    ctx->pc = 0x1F5950u;
    SET_GPR_U32(ctx, 31, 0x1F5958u);
    ctx->pc = 0x1F5954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5950u;
            // 0x1f5954: 0x24050680  addiu       $a1, $zero, 0x680 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1664));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158B20u;
    if (runtime->hasFunction(0x158B20u)) {
        auto targetFn = runtime->lookupFunction(0x158B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5958u; }
        if (ctx->pc != 0x1F5958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWin__6ClsMesFi_0x158b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5958u; }
        if (ctx->pc != 0x1F5958u) { return; }
    }
    ctx->pc = 0x1F5958u;
label_1f5958:
    // 0x1f5958: 0x83828fb8  lb          $v0, -0x7048($gp)
    ctx->pc = 0x1f5958u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938552)));
    // 0x1f595c: 0x87838fac  lh          $v1, -0x7054($gp)
    ctx->pc = 0x1f595cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938540)));
    // 0x1f5960: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f5960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f5964: 0xa3828fb8  sb          $v0, -0x7048($gp)
    ctx->pc = 0x1f5964u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938552), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f5968: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f5968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f596c: 0x83828fb8  lb          $v0, -0x7048($gp)
    ctx->pc = 0x1f596cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938552)));
    // 0x1f5970: 0x28410006  slti        $at, $v0, 0x6
    ctx->pc = 0x1f5970u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1f5974: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F5974u;
    {
        const bool branch_taken_0x1f5974 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5974u;
            // 0x1f5978: 0xa7838fac  sh          $v1, -0x7054($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294938540), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5974) {
            ctx->pc = 0x1F5980u;
            goto label_1f5980;
        }
    }
    ctx->pc = 0x1F597Cu;
    // 0x1f597c: 0xa3808fb8  sb          $zero, -0x7048($gp)
    ctx->pc = 0x1f597cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938552), (uint8_t)GPR_U32(ctx, 0));
label_1f5980:
    // 0x1f5980: 0x8f828f90  lw          $v0, -0x7070($gp)
    ctx->pc = 0x1f5980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938512)));
    // 0x1f5984: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f5984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5988: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1f5988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1f598c: 0xaf828f90  sw          $v0, -0x7070($gp)
    ctx->pc = 0x1f598cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938512), GPR_U32(ctx, 2));
    // 0x1f5990: 0x8f828f90  lw          $v0, -0x7070($gp)
    ctx->pc = 0x1f5990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938512)));
    // 0x1f5994: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F5994u;
    {
        const bool branch_taken_0x1f5994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5994u;
            // 0x1f5998: 0xa783817c  sh          $v1, -0x7E84($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294934908), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5994) {
            ctx->pc = 0x1F59C8u;
            goto label_1f59c8;
        }
    }
    ctx->pc = 0x1F599Cu;
    // 0x1f599c: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1f599cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f59a0: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1F59A0u;
    {
        const bool branch_taken_0x1f59a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F59A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F59A0u;
            // 0x1f59a4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f59a0) {
            ctx->pc = 0x1F59CCu;
            goto label_1f59cc;
        }
    }
    ctx->pc = 0x1F59A8u;
    // 0x1f59a8: 0x8f828ad0  lw          $v0, -0x7530($gp)
    ctx->pc = 0x1f59a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x1f59ac: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F59ACu;
    {
        const bool branch_taken_0x1f59ac = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1f59ac) {
            ctx->pc = 0x1F59C8u;
            goto label_1f59c8;
        }
    }
    ctx->pc = 0x1F59B4u;
    // 0x1f59b4: 0x87828fac  lh          $v0, -0x7054($gp)
    ctx->pc = 0x1f59b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938540)));
    // 0x1f59b8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f59b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f59bc: 0xa783817c  sh          $v1, -0x7E84($gp)
    ctx->pc = 0x1f59bcu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294934908), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f59c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f59c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f59c4: 0xa7828fac  sh          $v0, -0x7054($gp)
    ctx->pc = 0x1f59c4u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294938540), (uint16_t)GPR_U32(ctx, 2));
label_1f59c8:
    // 0x1f59c8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1f59c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1f59cc:
    // 0x1f59cc: 0xa3828fb0  sb          $v0, -0x7050($gp)
    ctx->pc = 0x1f59ccu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938544), (uint8_t)GPR_U32(ctx, 2));
label_1f59d0:
    // 0x1f59d0: 0x83838fb0  lb          $v1, -0x7050($gp)
    ctx->pc = 0x1f59d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938544)));
    // 0x1f59d4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1f59d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f59d8: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1F59D8u;
    {
        const bool branch_taken_0x1f59d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F59DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F59D8u;
            // 0x1f59dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f59d8) {
            ctx->pc = 0x1F5A10u;
            goto label_1f5a10;
        }
    }
    ctx->pc = 0x1F59E0u;
    // 0x1f59e0: 0xc054f84  jal         func_153E10
    ctx->pc = 0x1F59E0u;
    SET_GPR_U32(ctx, 31, 0x1F59E8u);
    ctx->pc = 0x1F59E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F59E0u;
            // 0x1f59e4: 0x8f848fbc  lw          $a0, -0x7044($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938556)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153E10u;
    if (runtime->hasFunction(0x153E10u)) {
        auto targetFn = runtime->lookupFunction(0x153E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F59E8u; }
        if (ctx->pc != 0x1F59E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        State__6ClsMesFv_0x153e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F59E8u; }
        if (ctx->pc != 0x1F59E8u) { return; }
    }
    ctx->pc = 0x1F59E8u;
label_1f59e8:
    // 0x1f59e8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1f59e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f59ec: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F59ECu;
    {
        const bool branch_taken_0x1f59ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F59F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F59ECu;
            // 0x1f59f0: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f59ec) {
            ctx->pc = 0x1F59FCu;
            goto label_1f59fc;
        }
    }
    ctx->pc = 0x1F59F4u;
    // 0x1f59f4: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F59F4u;
    {
        const bool branch_taken_0x1f59f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f59f4) {
            ctx->pc = 0x1F5A0Cu;
            goto label_1f5a0c;
        }
    }
    ctx->pc = 0x1F59FCu;
label_1f59fc:
    // 0x1f59fc: 0x8f828fbc  lw          $v0, -0x7044($gp)
    ctx->pc = 0x1f59fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938556)));
    // 0x1f5a00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f5a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5a04: 0xa3808fb0  sb          $zero, -0x7050($gp)
    ctx->pc = 0x1f5a04u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938544), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5a08: 0xac4317f4  sw          $v1, 0x17F4($v0)
    ctx->pc = 0x1f5a08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6132), GPR_U32(ctx, 3));
label_1f5a0c:
    // 0x1f5a0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f5a0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5a10:
    // 0x1f5a10: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1f5a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1f5a14:
    // 0x1f5a14: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1f5a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f5a18: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1f5a18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f5a1c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1f5a1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f5a20: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1f5a20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f5a24: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f5a24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f5a28: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5A28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5A28u;
            // 0x1f5a2c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F5A30u;
}
