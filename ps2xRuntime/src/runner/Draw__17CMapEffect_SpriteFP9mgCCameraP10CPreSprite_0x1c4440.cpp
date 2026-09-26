#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__17CMapEffect_SpriteFP9mgCCameraP10CPreSprite
// Address: 0x1c4440 - 0x1c4770
void Draw__17CMapEffect_SpriteFP9mgCCameraP10CPreSprite_0x1c4440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__17CMapEffect_SpriteFP9mgCCameraP10CPreSprite_0x1c4440");
#endif

    switch (ctx->pc) {
        case 0x1c4484u: goto label_1c4484;
        case 0x1c448cu: goto label_1c448c;
        case 0x1c44e4u: goto label_1c44e4;
        case 0x1c451cu: goto label_1c451c;
        case 0x1c45a8u: goto label_1c45a8;
        case 0x1c45e0u: goto label_1c45e0;
        case 0x1c4600u: goto label_1c4600;
        case 0x1c4634u: goto label_1c4634;
        case 0x1c4694u: goto label_1c4694;
        case 0x1c46a4u: goto label_1c46a4;
        case 0x1c46b0u: goto label_1c46b0;
        case 0x1c46c4u: goto label_1c46c4;
        case 0x1c46d0u: goto label_1c46d0;
        case 0x1c46e4u: goto label_1c46e4;
        case 0x1c46f0u: goto label_1c46f0;
        case 0x1c4700u: goto label_1c4700;
        case 0x1c470cu: goto label_1c470c;
        case 0x1c471cu: goto label_1c471c;
        case 0x1c4728u: goto label_1c4728;
        case 0x1c4738u: goto label_1c4738;
        case 0x1c4744u: goto label_1c4744;
        default: break;
    }

    ctx->pc = 0x1c4440u;

    // 0x1c4440: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1c4440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1c4444: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1c4444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1c4448: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1c4448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1c444c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1c444cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1c4450: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1c4450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1c4454: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1c4454u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4458: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1c4458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1c445c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1c445cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1c4460: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c4460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1c4464: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c4464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c4468: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1c4468u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c446c: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x1c446cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x1c4470: 0x186000b4  blez        $v1, . + 4 + (0xB4 << 2)
    ctx->pc = 0x1C4470u;
    {
        const bool branch_taken_0x1c4470 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1C4474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4470u;
            // 0x1c4474: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4470) {
            ctx->pc = 0x1C4744u;
            goto label_1c4744;
        }
    }
    ctx->pc = 0x1C4478u;
    // 0x1c4478: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1c4478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1c447c: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1C447Cu;
    SET_GPR_U32(ctx, 31, 0x1C4484u);
    ctx->pc = 0x1C4480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C447Cu;
            // 0x1c4480: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4484u; }
        if (ctx->pc != 0x1C4484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4484u; }
        if (ctx->pc != 0x1C4484u) { return; }
    }
    ctx->pc = 0x1C4484u;
label_1c4484:
    // 0x1c4484: 0xc047a42  jal         func_11E908
    ctx->pc = 0x1C4484u;
    SET_GPR_U32(ctx, 31, 0x1C448Cu);
    ctx->pc = 0x1C4488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4484u;
            // 0x1c4488: 0xc6ac0030  lwc1        $f12, 0x30($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C448Cu; }
        if (ctx->pc != 0x1C448Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C448Cu; }
        if (ctx->pc != 0x1C448Cu) { return; }
    }
    ctx->pc = 0x1C448Cu;
label_1c448c:
    // 0x1c448c: 0xc6a30034  lwc1        $f3, 0x34($s5)
    ctx->pc = 0x1c448cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c4490: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1c4490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1c4494: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1c4494u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c4498: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x1c4498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c449c: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x1c449cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1c44a0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1c44a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1c44a4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c44a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c44a8: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x1c44a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1c44ac: 0x8eb30044  lw          $s3, 0x44($s5)
    ctx->pc = 0x1c44acu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
    // 0x1c44b0: 0x16600020  bnez        $s3, . + 4 + (0x20 << 2)
    ctx->pc = 0x1C44B0u;
    {
        const bool branch_taken_0x1c44b0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C44B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C44B0u;
            // 0x1c44b4: 0x24120010  addiu       $s2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c44b0) {
            ctx->pc = 0x1C4534u;
            goto label_1c4534;
        }
    }
    ctx->pc = 0x1C44B8u;
    // 0x1c44b8: 0x8ea30038  lw          $v1, 0x38($s5)
    ctx->pc = 0x1c44b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
    // 0x1c44bc: 0x28610040  slti        $at, $v1, 0x40
    ctx->pc = 0x1c44bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1c44c0: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1C44C0u;
    {
        const bool branch_taken_0x1c44c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c44c0) {
            ctx->pc = 0x1C44ECu;
            goto label_1c44ec;
        }
    }
    ctx->pc = 0x1C44C8u;
    // 0x1c44c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c44c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c44cc: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x1c44ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x1c44d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c44d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c44d4: 0x0  nop
    ctx->pc = 0x1c44d4u;
    // NOP
    // 0x1c44d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c44d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c44dc: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C44DCu;
    SET_GPR_U32(ctx, 31, 0x1C44E4u);
    ctx->pc = 0x1C44E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C44DCu;
            // 0x1c44e0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C44E4u; }
        if (ctx->pc != 0x1C44E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C44E4u; }
        if (ctx->pc != 0x1C44E4u) { return; }
    }
    ctx->pc = 0x1C44E4u;
label_1c44e4:
    // 0x1c44e4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1C44E4u;
    {
        const bool branch_taken_0x1c44e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C44E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C44E4u;
            // 0x1c44e8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c44e4) {
            ctx->pc = 0x1C4520u;
            goto label_1c4520;
        }
    }
    ctx->pc = 0x1C44ECu;
label_1c44ec:
    // 0x1c44ec: 0x8ea2003c  lw          $v0, 0x3C($s5)
    ctx->pc = 0x1c44ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 60)));
    // 0x1c44f0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1c44f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c44f4: 0x28410040  slti        $at, $v0, 0x40
    ctx->pc = 0x1c44f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1c44f8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C44F8u;
    {
        const bool branch_taken_0x1c44f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c44f8) {
            ctx->pc = 0x1C4520u;
            goto label_1c4520;
        }
    }
    ctx->pc = 0x1C4500u;
    // 0x1c4500: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c4500u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c4504: 0x0  nop
    ctx->pc = 0x1c4504u;
    // NOP
    // 0x1c4508: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c4508u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c450c: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x1c450cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x1c4510: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c4510u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c4514: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C4514u;
    SET_GPR_U32(ctx, 31, 0x1C451Cu);
    ctx->pc = 0x1C4518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4514u;
            // 0x1c4518: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C451Cu; }
        if (ctx->pc != 0x1C451Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C451Cu; }
        if (ctx->pc != 0x1C451Cu) { return; }
    }
    ctx->pc = 0x1C451Cu;
label_1c451c:
    // 0x1c451c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c451cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c4520:
    // 0x1c4520: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1c4520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x1c4524: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c4524u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4528: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1c4528u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1c452c: 0x241100a1  addiu       $s1, $zero, 0xA1
    ctx->pc = 0x1c452cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x1c4530: 0x2416005e  addiu       $s6, $zero, 0x5E
    ctx->pc = 0x1c4530u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
label_1c4534:
    // 0x1c4534: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c4534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4538: 0x1662000e  bne         $s3, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1C4538u;
    {
        const bool branch_taken_0x1c4538 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C453Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4538u;
            // 0x1c453c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4538) {
            ctx->pc = 0x1C4574u;
            goto label_1c4574;
        }
    }
    ctx->pc = 0x1C4540u;
    // 0x1c4540: 0x8ea30038  lw          $v1, 0x38($s5)
    ctx->pc = 0x1c4540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
    // 0x1c4544: 0x28610014  slti        $at, $v1, 0x14
    ctx->pc = 0x1c4544u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x1c4548: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C4548u;
    {
        const bool branch_taken_0x1c4548 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C454Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4548u;
            // 0x1c454c: 0x24120080  addiu       $s2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4548) {
            ctx->pc = 0x1C455Cu;
            goto label_1c455c;
        }
    }
    ctx->pc = 0x1C4550u;
    // 0x1c4550: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1c4550u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1c4554: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c4554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c4558: 0x29040  sll         $s2, $v0, 1
    ctx->pc = 0x1c4558u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1c455c:
    // 0x1c455c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1c455cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x1c4560: 0x24100020  addiu       $s0, $zero, 0x20
    ctx->pc = 0x1c4560u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1c4564: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1c4564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1c4568: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c4568u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c456c: 0x2416001f  addiu       $s6, $zero, 0x1F
    ctx->pc = 0x1c456cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1c4570: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c4570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c4574:
    // 0x1c4574: 0x16620028  bne         $s3, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1C4574u;
    {
        const bool branch_taken_0x1c4574 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c4574) {
            ctx->pc = 0x1C4618u;
            goto label_1c4618;
        }
    }
    ctx->pc = 0x1C457Cu;
    // 0x1c457c: 0x8ea30038  lw          $v1, 0x38($s5)
    ctx->pc = 0x1c457cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
    // 0x1c4580: 0x28610040  slti        $at, $v1, 0x40
    ctx->pc = 0x1c4580u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1c4584: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1C4584u;
    {
        const bool branch_taken_0x1c4584 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4584) {
            ctx->pc = 0x1C45B0u;
            goto label_1c45b0;
        }
    }
    ctx->pc = 0x1C458Cu;
    // 0x1c458c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c458cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c4590: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x1c4590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x1c4594: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c4594u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c4598: 0x0  nop
    ctx->pc = 0x1c4598u;
    // NOP
    // 0x1c459c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c459cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c45a0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C45A0u;
    SET_GPR_U32(ctx, 31, 0x1C45A8u);
    ctx->pc = 0x1C45A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C45A0u;
            // 0x1c45a4: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C45A8u; }
        if (ctx->pc != 0x1C45A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C45A8u; }
        if (ctx->pc != 0x1C45A8u) { return; }
    }
    ctx->pc = 0x1C45A8u;
label_1c45a8:
    // 0x1c45a8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1C45A8u;
    {
        const bool branch_taken_0x1c45a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C45ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C45A8u;
            // 0x1c45ac: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c45a8) {
            ctx->pc = 0x1C45E4u;
            goto label_1c45e4;
        }
    }
    ctx->pc = 0x1C45B0u;
label_1c45b0:
    // 0x1c45b0: 0x8ea2003c  lw          $v0, 0x3C($s5)
    ctx->pc = 0x1c45b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 60)));
    // 0x1c45b4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1c45b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c45b8: 0x28410040  slti        $at, $v0, 0x40
    ctx->pc = 0x1c45b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1c45bc: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C45BCu;
    {
        const bool branch_taken_0x1c45bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c45bc) {
            ctx->pc = 0x1C45E4u;
            goto label_1c45e4;
        }
    }
    ctx->pc = 0x1C45C4u;
    // 0x1c45c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c45c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c45c8: 0x0  nop
    ctx->pc = 0x1c45c8u;
    // NOP
    // 0x1c45cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c45ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c45d0: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x1c45d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x1c45d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c45d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c45d8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C45D8u;
    SET_GPR_U32(ctx, 31, 0x1C45E0u);
    ctx->pc = 0x1C45DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C45D8u;
            // 0x1c45dc: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C45E0u; }
        if (ctx->pc != 0x1C45E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C45E0u; }
        if (ctx->pc != 0x1C45E0u) { return; }
    }
    ctx->pc = 0x1C45E0u;
label_1c45e0:
    // 0x1c45e0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c45e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c45e4:
    // 0x1c45e4: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x1c45e4u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c45e8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1c45e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1c45ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c45ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c45f0: 0x0  nop
    ctx->pc = 0x1c45f0u;
    // NOP
    // 0x1c45f4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c45f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c45f8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C45F8u;
    SET_GPR_U32(ctx, 31, 0x1C4600u);
    ctx->pc = 0x1C45FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C45F8u;
            // 0x1c45fc: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4600u; }
        if (ctx->pc != 0x1C4600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4600u; }
        if (ctx->pc != 0x1C4600u) { return; }
    }
    ctx->pc = 0x1C4600u;
label_1c4600:
    // 0x1c4600: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c4600u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4604: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c4604u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4608: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1c4608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x1c460c: 0x241100a1  addiu       $s1, $zero, 0xA1
    ctx->pc = 0x1c460cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x1c4610: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1c4610u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1c4614: 0x2416005e  addiu       $s6, $zero, 0x5E
    ctx->pc = 0x1c4614u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
label_1c4618:
    // 0x1c4618: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c4618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c461c: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1c461cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1c4620: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x1c4620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1c4624: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c4624u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4628: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1c4628u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1c462c: 0xc0516ec  jal         func_145BB0
    ctx->pc = 0x1C462Cu;
    SET_GPR_U32(ctx, 31, 0x1C4634u);
    ctx->pc = 0x1C4630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C462Cu;
            // 0x1c4630: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x145BB0u;
    if (runtime->hasFunction(0x145BB0u)) {
        auto targetFn = runtime->lookupFunction(0x145BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4634u; }
        if (ctx->pc != 0x1C4634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldPrim3DSprite__FPiPiPfffi_0x145bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4634u; }
        if (ctx->pc != 0x1C4634u) { return; }
    }
    ctx->pc = 0x1C4634u;
label_1c4634:
    // 0x1c4634: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x1C4634u;
    {
        const bool branch_taken_0x1c4634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4634) {
            ctx->pc = 0x1C4744u;
            goto label_1c4744;
        }
    }
    ctx->pc = 0x1C463Cu;
    // 0x1c463c: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1c463cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c4640: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1c4640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c4644: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x1c4644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x1c4648: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1c4648u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c464c: 0x8fac00d0  lw          $t4, 0xD0($sp)
    ctx->pc = 0x1c464cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1c4650: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c4650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4654: 0x8fab00a4  lw          $t3, 0xA4($sp)
    ctx->pc = 0x1c4654u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x1c4658: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1c4658u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c465c: 0x8faa00a8  lw          $t2, 0xA8($sp)
    ctx->pc = 0x1c465cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1c4660: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1c4660u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4664: 0x8fa900ac  lw          $t1, 0xAC($sp)
    ctx->pc = 0x1c4664u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1c4668: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x1c4668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x1c466c: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x1c466cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
    // 0x1c4670: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1c4670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1c4674: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x1c4674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x1c4678: 0xafac00b0  sw          $t4, 0xB0($sp)
    ctx->pc = 0x1c4678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 12));
    // 0x1c467c: 0xafab00b4  sw          $t3, 0xB4($sp)
    ctx->pc = 0x1c467cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 11));
    // 0x1c4680: 0xafaa00b8  sw          $t2, 0xB8($sp)
    ctx->pc = 0x1c4680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 10));
    // 0x1c4684: 0xafa900bc  sw          $t1, 0xBC($sp)
    ctx->pc = 0x1c4684u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 9));
    // 0x1c4688: 0xafa300c8  sw          $v1, 0xC8($sp)
    ctx->pc = 0x1c4688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 3));
    // 0x1c468c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1C468Cu;
    SET_GPR_U32(ctx, 31, 0x1C4694u);
    ctx->pc = 0x1C4690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C468Cu;
            // 0x1c4690: 0xafa200cc  sw          $v0, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4694u; }
        if (ctx->pc != 0x1C4694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4694u; }
        if (ctx->pc != 0x1C4694u) { return; }
    }
    ctx->pc = 0x1C4694u;
label_1c4694:
    // 0x1c4694: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c4694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4698: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c4698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c469c: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1C469Cu;
    SET_GPR_U32(ctx, 31, 0x1C46A4u);
    ctx->pc = 0x1C46A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C469Cu;
            // 0x1c46a0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C46A4u; }
        if (ctx->pc != 0x1C46A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C46A4u; }
        if (ctx->pc != 0x1C46A4u) { return; }
    }
    ctx->pc = 0x1C46A4u;
label_1c46a4:
    // 0x1c46a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c46a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c46a8: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1C46A8u;
    SET_GPR_U32(ctx, 31, 0x1C46B0u);
    ctx->pc = 0x1C46ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C46A8u;
            // 0x1c46ac: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C46B0u; }
        if (ctx->pc != 0x1C46B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C46B0u; }
        if (ctx->pc != 0x1C46B0u) { return; }
    }
    ctx->pc = 0x1C46B0u;
label_1c46b0:
    // 0x1c46b0: 0x2169821  addu        $s3, $s0, $s6
    ctx->pc = 0x1c46b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x1c46b4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c46b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c46b8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1c46b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c46bc: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1C46BCu;
    SET_GPR_U32(ctx, 31, 0x1C46C4u);
    ctx->pc = 0x1C46C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C46BCu;
            // 0x1c46c0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C46C4u; }
        if (ctx->pc != 0x1C46C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C46C4u; }
        if (ctx->pc != 0x1C46C4u) { return; }
    }
    ctx->pc = 0x1C46C4u;
label_1c46c4:
    // 0x1c46c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c46c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c46c8: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1C46C8u;
    SET_GPR_U32(ctx, 31, 0x1C46D0u);
    ctx->pc = 0x1C46CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C46C8u;
            // 0x1c46cc: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C46D0u; }
        if (ctx->pc != 0x1C46D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C46D0u; }
        if (ctx->pc != 0x1C46D0u) { return; }
    }
    ctx->pc = 0x1C46D0u;
label_1c46d0:
    // 0x1c46d0: 0x2369021  addu        $s2, $s1, $s6
    ctx->pc = 0x1c46d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x1c46d4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c46d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c46d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c46d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c46dc: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1C46DCu;
    SET_GPR_U32(ctx, 31, 0x1C46E4u);
    ctx->pc = 0x1C46E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C46DCu;
            // 0x1c46e0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C46E4u; }
        if (ctx->pc != 0x1C46E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C46E4u; }
        if (ctx->pc != 0x1C46E4u) { return; }
    }
    ctx->pc = 0x1C46E4u;
label_1c46e4:
    // 0x1c46e4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c46e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c46e8: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1C46E8u;
    SET_GPR_U32(ctx, 31, 0x1C46F0u);
    ctx->pc = 0x1C46ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C46E8u;
            // 0x1c46ec: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C46F0u; }
        if (ctx->pc != 0x1C46F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C46F0u; }
        if (ctx->pc != 0x1C46F0u) { return; }
    }
    ctx->pc = 0x1C46F0u;
label_1c46f0:
    // 0x1c46f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c46f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c46f4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c46f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c46f8: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1C46F8u;
    SET_GPR_U32(ctx, 31, 0x1C4700u);
    ctx->pc = 0x1C46FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C46F8u;
            // 0x1c46fc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4700u; }
        if (ctx->pc != 0x1C4700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4700u; }
        if (ctx->pc != 0x1C4700u) { return; }
    }
    ctx->pc = 0x1C4700u;
label_1c4700:
    // 0x1c4700: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c4700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4704: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1C4704u;
    SET_GPR_U32(ctx, 31, 0x1C470Cu);
    ctx->pc = 0x1C4708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4704u;
            // 0x1c4708: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C470Cu; }
        if (ctx->pc != 0x1C470Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C470Cu; }
        if (ctx->pc != 0x1C470Cu) { return; }
    }
    ctx->pc = 0x1C470Cu;
label_1c470c:
    // 0x1c470c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1c470cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4710: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c4710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4714: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1C4714u;
    SET_GPR_U32(ctx, 31, 0x1C471Cu);
    ctx->pc = 0x1C4718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4714u;
            // 0x1c4718: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C471Cu; }
        if (ctx->pc != 0x1C471Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C471Cu; }
        if (ctx->pc != 0x1C471Cu) { return; }
    }
    ctx->pc = 0x1C471Cu;
label_1c471c:
    // 0x1c471c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c471cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4720: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1C4720u;
    SET_GPR_U32(ctx, 31, 0x1C4728u);
    ctx->pc = 0x1C4724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4720u;
            // 0x1c4724: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4728u; }
        if (ctx->pc != 0x1C4728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4728u; }
        if (ctx->pc != 0x1C4728u) { return; }
    }
    ctx->pc = 0x1C4728u;
label_1c4728:
    // 0x1c4728: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1c4728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c472c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1c472cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4730: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1C4730u;
    SET_GPR_U32(ctx, 31, 0x1C4738u);
    ctx->pc = 0x1C4734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4730u;
            // 0x1c4734: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4738u; }
        if (ctx->pc != 0x1C4738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4738u; }
        if (ctx->pc != 0x1C4738u) { return; }
    }
    ctx->pc = 0x1C4738u;
label_1c4738:
    // 0x1c4738: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c4738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c473c: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1C473Cu;
    SET_GPR_U32(ctx, 31, 0x1C4744u);
    ctx->pc = 0x1C4740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C473Cu;
            // 0x1c4740: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4744u; }
        if (ctx->pc != 0x1C4744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4744u; }
        if (ctx->pc != 0x1C4744u) { return; }
    }
    ctx->pc = 0x1C4744u;
label_1c4744:
    // 0x1c4744: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1c4744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c4748: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1c4748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c474c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1c474cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c4750: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1c4750u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c4754: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1c4754u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c4758: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1c4758u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c475c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1c475cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c4760: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c4760u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c4764: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c4764u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4768: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4768u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C476Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4768u;
            // 0x1c476c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C4770u;
}
