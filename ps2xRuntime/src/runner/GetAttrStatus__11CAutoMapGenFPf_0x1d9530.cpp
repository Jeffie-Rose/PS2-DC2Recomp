#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetAttrStatus__11CAutoMapGenFPf
// Address: 0x1d9530 - 0x1d966c
void GetAttrStatus__11CAutoMapGenFPf_0x1d9530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetAttrStatus__11CAutoMapGenFPf_0x1d9530");
#endif

    switch (ctx->pc) {
        case 0x1d9590u: goto label_1d9590;
        case 0x1d95c4u: goto label_1d95c4;
        default: break;
    }

    ctx->pc = 0x1d9530u;

    // 0x1d9530: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d9530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d9534: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1d9534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1d9538: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1d9538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1d953c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d953cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1d9540: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d9540u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9544: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d9544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d9548: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1d9548u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1d954c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1d954cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1d9550: 0x8c9001cc  lw          $s0, 0x1CC($a0)
    ctx->pc = 0x1d9550u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 460)));
    // 0x1d9554: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D9554u;
    {
        const bool branch_taken_0x1d9554 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9554u;
            // 0x1d9558: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9554) {
            ctx->pc = 0x1D9564u;
            goto label_1d9564;
        }
    }
    ctx->pc = 0x1D955Cu;
    // 0x1d955c: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1D955Cu;
    {
        const bool branch_taken_0x1d955c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D955Cu;
            // 0x1d9560: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d955c) {
            ctx->pc = 0x1D964Cu;
            goto label_1d964c;
        }
    }
    ctx->pc = 0x1D9564u;
label_1d9564:
    // 0x1d9564: 0xc65401bc  lwc1        $f20, 0x1BC($s2)
    ctx->pc = 0x1d9564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d9568: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1d9568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1d956c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d956cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d9570: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x1d9570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d9574: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1d9574u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1d9578: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d9578u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d957c: 0x46140303  div.s       $f12, $f0, $f20
    ctx->pc = 0x1d957cu;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
    // 0x1d9580: 0x0  nop
    ctx->pc = 0x1d9580u;
    // NOP
    // 0x1d9584: 0x0  nop
    ctx->pc = 0x1d9584u;
    // NOP
    // 0x1d9588: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1D9588u;
    SET_GPR_U32(ctx, 31, 0x1D9590u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9590u; }
        if (ctx->pc != 0x1D9590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9590u; }
        if (ctx->pc != 0x1D9590u) { return; }
    }
    ctx->pc = 0x1D9590u;
label_1d9590:
    // 0x1d9590: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x1d9590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d9594: 0xc65501c0  lwc1        $f21, 0x1C0($s2)
    ctx->pc = 0x1d9594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1d9598: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d9598u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d959c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1d959cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1d95a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d95a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d95a4: 0x0  nop
    ctx->pc = 0x1d95a4u;
    // NOP
    // 0x1d95a8: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1d95a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1d95ac: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d95acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d95b0: 0x46150303  div.s       $f12, $f0, $f21
    ctx->pc = 0x1d95b0u;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[21]); }
    // 0x1d95b4: 0x0  nop
    ctx->pc = 0x1d95b4u;
    // NOP
    // 0x1d95b8: 0x0  nop
    ctx->pc = 0x1d95b8u;
    // NOP
    // 0x1d95bc: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1D95BCu;
    SET_GPR_U32(ctx, 31, 0x1D95C4u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D95C4u; }
        if (ctx->pc != 0x1D95C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D95C4u; }
        if (ctx->pc != 0x1D95C4u) { return; }
    }
    ctx->pc = 0x1D95C4u;
label_1d95c4:
    // 0x1d95c4: 0x6200008  bltz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D95C4u;
    {
        const bool branch_taken_0x1d95c4 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x1d95c4) {
            ctx->pc = 0x1D95E8u;
            goto label_1d95e8;
        }
    }
    ctx->pc = 0x1D95CCu;
    // 0x1d95cc: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1d95ccu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d95d0: 0x0  nop
    ctx->pc = 0x1d95d0u;
    // NOP
    // 0x1d95d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d95d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d95d8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1d95d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d95dc: 0x0  nop
    ctx->pc = 0x1d95dcu;
    // NOP
    // 0x1d95e0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1D95E0u;
    {
        const bool branch_taken_0x1d95e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d95e0) {
            ctx->pc = 0x1D95F0u;
            goto label_1d95f0;
        }
    }
    ctx->pc = 0x1D95E8u;
label_1d95e8:
    // 0x1d95e8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1D95E8u;
    {
        const bool branch_taken_0x1d95e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D95ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D95E8u;
            // 0x1d95ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d95e8) {
            ctx->pc = 0x1D964Cu;
            goto label_1d964c;
        }
    }
    ctx->pc = 0x1D95F0u;
label_1d95f0:
    // 0x1d95f0: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D95F0u;
    {
        const bool branch_taken_0x1d95f0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1d95f0) {
            ctx->pc = 0x1D9614u;
            goto label_1d9614;
        }
    }
    ctx->pc = 0x1D95F8u;
    // 0x1d95f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d95f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d95fc: 0x0  nop
    ctx->pc = 0x1d95fcu;
    // NOP
    // 0x1d9600: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d9600u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d9604: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x1d9604u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d9608: 0x0  nop
    ctx->pc = 0x1d9608u;
    // NOP
    // 0x1d960c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1D960Cu;
    {
        const bool branch_taken_0x1d960c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d960c) {
            ctx->pc = 0x1D961Cu;
            goto label_1d961c;
        }
    }
    ctx->pc = 0x1D9614u;
label_1d9614:
    // 0x1d9614: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1D9614u;
    {
        const bool branch_taken_0x1d9614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9614u;
            // 0x1d9618: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9614) {
            ctx->pc = 0x1D964Cu;
            goto label_1d964c;
        }
    }
    ctx->pc = 0x1D961Cu;
label_1d961c:
    // 0x1d961c: 0x864401b8  lh          $a0, 0x1B8($s2)
    ctx->pc = 0x1d961cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 440)));
    // 0x1d9620: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x1d9620u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x1d9624: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x1d9624u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1d9628: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d9628u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d962c: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x1d962cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1d9630: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1d9630u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1d9634: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1d9634u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d9638: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d9638u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d963c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d963cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d9640: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1d9640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d9644: 0x84420006  lh          $v0, 0x6($v0)
    ctx->pc = 0x1d9644u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1d9648: 0x0  nop
    ctx->pc = 0x1d9648u;
    // NOP
label_1d964c:
    // 0x1d964c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1d964cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d9650: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1d9650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1d9654: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1d9654u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d9658: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1d9658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d965c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d965cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d9660: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d9660u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9664: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9664u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9664u;
            // 0x1d9668: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D966Cu;
}
