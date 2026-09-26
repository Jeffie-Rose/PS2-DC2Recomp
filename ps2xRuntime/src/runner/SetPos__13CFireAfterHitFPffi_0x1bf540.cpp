#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetPos__13CFireAfterHitFPffi
// Address: 0x1bf540 - 0x1bf790
void SetPos__13CFireAfterHitFPffi_0x1bf540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetPos__13CFireAfterHitFPffi_0x1bf540");
#endif

    switch (ctx->pc) {
        case 0x1bf584u: goto label_1bf584;
        case 0x1bf58cu: goto label_1bf58c;
        case 0x1bf5d0u: goto label_1bf5d0;
        case 0x1bf620u: goto label_1bf620;
        case 0x1bf630u: goto label_1bf630;
        case 0x1bf64cu: goto label_1bf64c;
        case 0x1bf66cu: goto label_1bf66c;
        case 0x1bf698u: goto label_1bf698;
        case 0x1bf6a8u: goto label_1bf6a8;
        case 0x1bf6b0u: goto label_1bf6b0;
        case 0x1bf6dcu: goto label_1bf6dc;
        case 0x1bf6f0u: goto label_1bf6f0;
        case 0x1bf710u: goto label_1bf710;
        case 0x1bf724u: goto label_1bf724;
        case 0x1bf738u: goto label_1bf738;
        case 0x1bf748u: goto label_1bf748;
        default: break;
    }

    ctx->pc = 0x1bf540u;

    // 0x1bf540: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1bf540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1bf544: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1bf544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1bf548: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1bf548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1bf54c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1bf54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1bf550: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1bf550u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf554: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1bf554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1bf558: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1bf558u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf55c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1bf55cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1bf560: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1bf560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1bf564: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1bf564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1bf568: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1bf568u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf56c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1bf56cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1bf570: 0x2a030020  slti        $v1, $s0, 0x20
    ctx->pc = 0x1bf570u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1bf574: 0x1460007c  bnez        $v1, . + 4 + (0x7C << 2)
    ctx->pc = 0x1BF574u;
    {
        const bool branch_taken_0x1bf574 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF574u;
            // 0x1bf578: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf574) {
            ctx->pc = 0x1BF768u;
            goto label_1bf768;
        }
    }
    ctx->pc = 0x1BF57Cu;
    // 0x1bf57c: 0xc06fd3c  jal         func_1BF4F0
    ctx->pc = 0x1BF57Cu;
    SET_GPR_U32(ctx, 31, 0x1BF584u);
    ctx->pc = 0x1BF4F0u;
    if (runtime->hasFunction(0x1BF4F0u)) {
        auto targetFn = runtime->lookupFunction(0x1BF4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF584u; }
        if (ctx->pc != 0x1BF584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__13CFireAfterHitFv_0x1bf4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF584u; }
        if (ctx->pc != 0x1BF584u) { return; }
    }
    ctx->pc = 0x1BF584u;
label_1bf584:
    // 0x1bf584: 0xc06f998  jal         func_1BE660
    ctx->pc = 0x1BF584u;
    SET_GPR_U32(ctx, 31, 0x1BF58Cu);
    ctx->pc = 0x1BF588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF584u;
            // 0x1bf588: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE660u;
    if (runtime->hasFunction(0x1BE660u)) {
        auto targetFn = runtime->lookupFunction(0x1BE660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF58Cu; }
        if (ctx->pc != 0x1BF58Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        trans_effect_rate__Fi_0x1be660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF58Cu; }
        if (ctx->pc != 0x1BF58Cu) { return; }
    }
    ctx->pc = 0x1BF58Cu;
label_1bf58c:
    // 0x1bf58c: 0xe6a0000c  swc1        $f0, 0xC($s5)
    ctx->pc = 0x1bf58cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
    // 0x1bf590: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x1bf590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
    // 0x1bf594: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bf594u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bf598: 0x0  nop
    ctx->pc = 0x1bf598u;
    // NOP
    // 0x1bf59c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1bf59cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bf5a0: 0x0  nop
    ctx->pc = 0x1bf5a0u;
    // NOP
    // 0x1bf5a4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1BF5A4u;
    {
        const bool branch_taken_0x1bf5a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bf5a4) {
            ctx->pc = 0x1BF5B0u;
            goto label_1bf5b0;
        }
    }
    ctx->pc = 0x1BF5ACu;
    // 0x1bf5ac: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1bf5acu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1bf5b0:
    // 0x1bf5b0: 0xc6a0000c  lwc1        $f0, 0xC($s5)
    ctx->pc = 0x1bf5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bf5b4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1bf5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1bf5b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bf5b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bf5bc: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1bf5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1bf5c0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1bf5c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bf5c4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1bf5c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1bf5c8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1BF5C8u;
    SET_GPR_U32(ctx, 31, 0x1BF5D0u);
    ctx->pc = 0x1BF5CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF5C8u;
            // 0x1bf5cc: 0x46001300  add.s       $f12, $f2, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF5D0u; }
        if (ctx->pc != 0x1BF5D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF5D0u; }
        if (ctx->pc != 0x1BF5D0u) { return; }
    }
    ctx->pc = 0x1BF5D0u;
label_1bf5d0:
    // 0x1bf5d0: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x1bf5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
    // 0x1bf5d4: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x1bf5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1bf5d8: 0x2861000f  slti        $at, $v1, 0xF
    ctx->pc = 0x1bf5d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x1bf5dc: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BF5DCu;
    {
        const bool branch_taken_0x1bf5dc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF5E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF5DCu;
            // 0x1bf5e0: 0x3c034160  lui         $v1, 0x4160 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16736 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf5dc) {
            ctx->pc = 0x1BF5F0u;
            goto label_1bf5f0;
        }
    }
    ctx->pc = 0x1BF5E4u;
    // 0x1bf5e4: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1bf5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1bf5e8: 0xaea30004  sw          $v1, 0x4($s5)
    ctx->pc = 0x1bf5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
    // 0x1bf5ec: 0x3c034160  lui         $v1, 0x4160
    ctx->pc = 0x1bf5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16736 << 16));
label_1bf5f0:
    // 0x1bf5f0: 0x3c044100  lui         $a0, 0x4100
    ctx->pc = 0x1bf5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16640 << 16));
    // 0x1bf5f4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1bf5f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bf5f8: 0x26b00010  addiu       $s0, $s5, 0x10
    ctx->pc = 0x1bf5f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x1bf5fc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1bf5fcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bf600: 0x26b102b0  addiu       $s1, $s5, 0x2B0
    ctx->pc = 0x1bf600u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 688));
    // 0x1bf604: 0x4601a043  div.s       $f1, $f20, $f1
    ctx->pc = 0x1bf604u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[20], ctx->f[1]); }
    // 0x1bf608: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bf608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf60c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x1bf60cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x1bf610: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1bf610u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf614: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1bf614u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf618: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x1BF618u;
    {
        const bool branch_taken_0x1bf618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF61Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF618u;
            // 0x1bf61c: 0x46010500  add.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf618) {
            ctx->pc = 0x1BF758u;
            goto label_1bf758;
        }
    }
    ctx->pc = 0x1BF620u;
label_1bf620:
    // 0x1bf620: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1bf620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1bf624: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bf624u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bf628: 0xc0724bc  jal         func_1C92F0
    ctx->pc = 0x1BF628u;
    SET_GPR_U32(ctx, 31, 0x1BF630u);
    ctx->pc = 0x1C92F0u;
    if (runtime->hasFunction(0x1C92F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C92F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF630u; }
        if (ctx->pc != 0x1BF630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fRand__Ff_0x1c92f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF630u; }
        if (ctx->pc != 0x1BF630u) { return; }
    }
    ctx->pc = 0x1BF630u;
label_1bf630:
    // 0x1bf630: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1bf630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1bf634: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1bf634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1bf638: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1bf638u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bf63c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bf63cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bf640: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1bf640u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1bf644: 0xc0724bc  jal         func_1C92F0
    ctx->pc = 0x1BF644u;
    SET_GPR_U32(ctx, 31, 0x1BF64Cu);
    ctx->pc = 0x1BF648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF644u;
            // 0x1bf648: 0xe6000010  swc1        $f0, 0x10($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C92F0u;
    if (runtime->hasFunction(0x1C92F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C92F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF64Cu; }
        if (ctx->pc != 0x1BF64Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fRand__Ff_0x1c92f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF64Cu; }
        if (ctx->pc != 0x1BF64Cu) { return; }
    }
    ctx->pc = 0x1BF64Cu;
label_1bf64c:
    // 0x1bf64c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1bf64cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1bf650: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x1bf650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x1bf654: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1bf654u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bf658: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1bf658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x1bf65c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bf65cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bf660: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1bf660u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1bf664: 0xc0724bc  jal         func_1C92F0
    ctx->pc = 0x1BF664u;
    SET_GPR_U32(ctx, 31, 0x1BF66Cu);
    ctx->pc = 0x1BF668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF664u;
            // 0x1bf668: 0xe6000018  swc1        $f0, 0x18($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C92F0u;
    if (runtime->hasFunction(0x1C92F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C92F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF66Cu; }
        if (ctx->pc != 0x1BF66Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fRand__Ff_0x1c92f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF66Cu; }
        if (ctx->pc != 0x1BF66Cu) { return; }
    }
    ctx->pc = 0x1BF66Cu;
label_1bf66c:
    // 0x1bf66c: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x1bf66cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
    // 0x1bf670: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1bf670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1bf674: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1bf674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x1bf678: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1bf678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1bf67c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1bf67cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bf680: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1bf680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf684: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1bf684u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1bf688: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1bf688u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1bf68c: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x1bf68cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x1bf690: 0xc041c4a  jal         func_107128
    ctx->pc = 0x1BF690u;
    SET_GPR_U32(ctx, 31, 0x1BF698u);
    ctx->pc = 0x1BF694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF690u;
            // 0x1bf694: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF698u; }
        if (ctx->pc != 0x1BF698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF698u; }
        if (ctx->pc != 0x1BF698u) { return; }
    }
    ctx->pc = 0x1BF698u;
label_1bf698:
    // 0x1bf698: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf69c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1bf69cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf6a0: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x1BF6A0u;
    SET_GPR_U32(ctx, 31, 0x1BF6A8u);
    ctx->pc = 0x1BF6A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF6A0u;
            // 0x1bf6a4: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF6A8u; }
        if (ctx->pc != 0x1BF6A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF6A8u; }
        if (ctx->pc != 0x1BF6A8u) { return; }
    }
    ctx->pc = 0x1BF6A8u;
label_1bf6a8:
    // 0x1bf6a8: 0xc0724bc  jal         func_1C92F0
    ctx->pc = 0x1BF6A8u;
    SET_GPR_U32(ctx, 31, 0x1BF6B0u);
    ctx->pc = 0x1BF6ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF6A8u;
            // 0x1bf6ac: 0xc6ac000c  lwc1        $f12, 0xC($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C92F0u;
    if (runtime->hasFunction(0x1C92F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C92F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF6B0u; }
        if (ctx->pc != 0x1BF6B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fRand__Ff_0x1c92f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF6B0u; }
        if (ctx->pc != 0x1BF6B0u) { return; }
    }
    ctx->pc = 0x1BF6B0u;
label_1bf6b0:
    // 0x1bf6b0: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x1bf6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x1bf6b4: 0x3c0240f0  lui         $v0, 0x40F0
    ctx->pc = 0x1bf6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16624 << 16));
    // 0x1bf6b8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1bf6b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1bf6bc: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1bf6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1bf6c0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1bf6c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bf6c4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bf6c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bf6c8: 0x0  nop
    ctx->pc = 0x1bf6c8u;
    // NOP
    // 0x1bf6cc: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1bf6ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1bf6d0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1bf6d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1bf6d4: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x1BF6D4u;
    SET_GPR_U32(ctx, 31, 0x1BF6DCu);
    ctx->pc = 0x1BF6D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF6D4u;
            // 0x1bf6d8: 0xe600001c  swc1        $f0, 0x1C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF6DCu; }
        if (ctx->pc != 0x1BF6DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF6DCu; }
        if (ctx->pc != 0x1BF6DCu) { return; }
    }
    ctx->pc = 0x1BF6DCu;
label_1bf6dc:
    // 0x1bf6dc: 0x24430061  addiu       $v1, $v0, 0x61
    ctx->pc = 0x1bf6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 97));
    // 0x1bf6e0: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1bf6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1bf6e4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bf6e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bf6e8: 0xc0724bc  jal         func_1C92F0
    ctx->pc = 0x1BF6E8u;
    SET_GPR_U32(ctx, 31, 0x1BF6F0u);
    ctx->pc = 0x1BF6ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF6E8u;
            // 0x1bf6ec: 0xa6030020  sh          $v1, 0x20($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C92F0u;
    if (runtime->hasFunction(0x1C92F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C92F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF6F0u; }
        if (ctx->pc != 0x1BF6F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fRand__Ff_0x1c92f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF6F0u; }
        if (ctx->pc != 0x1BF6F0u) { return; }
    }
    ctx->pc = 0x1BF6F0u;
label_1bf6f0:
    // 0x1bf6f0: 0xc6a2000c  lwc1        $f2, 0xC($s5)
    ctx->pc = 0x1bf6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bf6f4: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x1bf6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x1bf6f8: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1bf6f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x1bf6fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bf6fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bf700: 0x0  nop
    ctx->pc = 0x1bf700u;
    // NOP
    // 0x1bf704: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1bf704u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1bf708: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1BF708u;
    SET_GPR_U32(ctx, 31, 0x1BF710u);
    ctx->pc = 0x1BF70Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF708u;
            // 0x1bf70c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF710u; }
        if (ctx->pc != 0x1BF710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF710u; }
        if (ctx->pc != 0x1BF710u) { return; }
    }
    ctx->pc = 0x1BF710u;
label_1bf710:
    // 0x1bf710: 0x2332821  addu        $a1, $s1, $s3
    ctx->pc = 0x1bf710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x1bf714: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf718: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1bf718u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf71c: 0xc06f9a8  jal         func_1BE6A0
    ctx->pc = 0x1BF71Cu;
    SET_GPR_U32(ctx, 31, 0x1BF724u);
    ctx->pc = 0x1BF720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF71Cu;
            // 0x1bf720: 0xa6020022  sh          $v0, 0x22($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 34), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE6A0u;
    if (runtime->hasFunction(0x1BE6A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF724u; }
        if (ctx->pc != 0x1BF724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        trans_float_to_sceVector__FPfPfi_0x1be6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF724u; }
        if (ctx->pc != 0x1BF724u) { return; }
    }
    ctx->pc = 0x1BF724u;
label_1bf724:
    // 0x1bf724: 0x82020026  lb          $v0, 0x26($s0)
    ctx->pc = 0x1bf724u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x1bf728: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1bf728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1bf72c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bf72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bf730: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x1BF730u;
    SET_GPR_U32(ctx, 31, 0x1BF738u);
    ctx->pc = 0x1BF734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF730u;
            // 0x1bf734: 0xa2020026  sb          $v0, 0x26($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 38), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF738u; }
        if (ctx->pc != 0x1BF738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF738u; }
        if (ctx->pc != 0x1BF738u) { return; }
    }
    ctx->pc = 0x1BF738u;
label_1bf738:
    // 0x1bf738: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1bf738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1bf73c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1bf73cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bf740: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x1BF740u;
    SET_GPR_U32(ctx, 31, 0x1BF748u);
    ctx->pc = 0x1BF744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF740u;
            // 0x1bf744: 0xa6020024  sh          $v0, 0x24($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF748u; }
        if (ctx->pc != 0x1BF748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF748u; }
        if (ctx->pc != 0x1BF748u) { return; }
    }
    ctx->pc = 0x1BF748u;
label_1bf748:
    // 0x1bf748: 0xa2020027  sb          $v0, 0x27($s0)
    ctx->pc = 0x1bf748u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 39), (uint8_t)GPR_U32(ctx, 2));
    // 0x1bf74c: 0x26730078  addiu       $s3, $s3, 0x78
    ctx->pc = 0x1bf74cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x1bf750: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1bf750u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1bf754: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x1bf754u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_1bf758:
    // 0x1bf758: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x1bf758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1bf75c: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x1bf75cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1bf760: 0x1460ffaf  bnez        $v1, . + 4 + (-0x51 << 2)
    ctx->pc = 0x1BF760u;
    {
        const bool branch_taken_0x1bf760 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bf760) {
            ctx->pc = 0x1BF620u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1bf620;
        }
    }
    ctx->pc = 0x1BF768u;
label_1bf768:
    // 0x1bf768: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1bf768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1bf76c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1bf76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1bf770: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1bf770u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bf774: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1bf774u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bf778: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1bf778u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bf77c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1bf77cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bf780: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1bf780u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bf784: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1bf784u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bf788: 0x3e00008  jr          $ra
    ctx->pc = 0x1BF788u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF788u;
            // 0x1bf78c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BF790u;
}
