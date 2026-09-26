#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StepMainMenuIconMove__18CMenuPosDataManageFPiii
// Address: 0x22b590 - 0x22b864
void StepMainMenuIconMove__18CMenuPosDataManageFPiii_0x22b590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StepMainMenuIconMove__18CMenuPosDataManageFPiii_0x22b590");
#endif

    switch (ctx->pc) {
        case 0x22b60cu: goto label_22b60c;
        case 0x22b614u: goto label_22b614;
        case 0x22b620u: goto label_22b620;
        case 0x22b66cu: goto label_22b66c;
        case 0x22b6b0u: goto label_22b6b0;
        case 0x22b774u: goto label_22b774;
        case 0x22b78cu: goto label_22b78c;
        case 0x22b7c8u: goto label_22b7c8;
        case 0x22b7e4u: goto label_22b7e4;
        default: break;
    }

    ctx->pc = 0x22b590u;

    // 0x22b590: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x22b590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x22b594: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x22b594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x22b598: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x22b598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x22b59c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x22b59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x22b5a0: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x22b5a0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b5a4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x22b5a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x22b5a8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x22b5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x22b5ac: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x22b5acu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b5b0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x22b5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x22b5b4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x22b5b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b5b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22b5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x22b5bc: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x22b5bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b5c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22b5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22b5c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22b5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22b5c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22b5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22b5cc: 0x8f828ad0  lw          $v0, -0x7530($gp)
    ctx->pc = 0x22b5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x22b5d0: 0xafa400c4  sw          $a0, 0xC4($sp)
    ctx->pc = 0x22b5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 4));
    // 0x22b5d4: 0xafa500c0  sw          $a1, 0xC0($sp)
    ctx->pc = 0x22b5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
    // 0x22b5d8: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22B5D8u;
    {
        const bool branch_taken_0x22b5d8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x22B5DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B5D8u;
            // 0x22b5dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b5d8) {
            ctx->pc = 0x22B5E4u;
            goto label_22b5e4;
        }
    }
    ctx->pc = 0x22B5E0u;
    // 0x22b5e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x22b5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22b5e4:
    // 0x22b5e4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x22b5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x22b5e8: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x22b5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x22b5ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x22b5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x22b5f0: 0x24420710  addiu       $v0, $v0, 0x710
    ctx->pc = 0x22b5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1808));
    // 0x22b5f4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x22b5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x22b5f8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22b5f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b5fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22b5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22b600: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x22b600u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b604: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x22B604u;
    {
        const bool branch_taken_0x22b604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B604u;
            // 0x22b608: 0xafa200a0  sw          $v0, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b604) {
            ctx->pc = 0x22B800u;
            goto label_22b800;
        }
    }
    ctx->pc = 0x22B60Cu;
label_22b60c:
    // 0x22b60c: 0xc08ab80  jal         func_22AE00
    ctx->pc = 0x22B60Cu;
    SET_GPR_U32(ctx, 31, 0x22B614u);
    ctx->pc = 0x22B610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B60Cu;
            // 0x22b610: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE00u;
    if (runtime->hasFunction(0x22AE00u)) {
        auto targetFn = runtime->lookupFunction(0x22AE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B614u; }
        if (ctx->pc != 0x22B614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuMainIconChar__Fi_0x22ae00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B614u; }
        if (ctx->pc != 0x22B614u) { return; }
    }
    ctx->pc = 0x22B614u;
label_22b614:
    // 0x22b614: 0x8fa400c4  lw          $a0, 0xC4($sp)
    ctx->pc = 0x22b614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x22b618: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x22B618u;
    SET_GPR_U32(ctx, 31, 0x22B620u);
    ctx->pc = 0x22B61Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B618u;
            // 0x22b61c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B620u; }
        if (ctx->pc != 0x22B620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B620u; }
        if (ctx->pc != 0x22B620u) { return; }
    }
    ctx->pc = 0x22B620u;
label_22b620:
    // 0x22b620: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22b620u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b624: 0x12200073  beqz        $s1, . + 4 + (0x73 << 2)
    ctx->pc = 0x22B624u;
    {
        const bool branch_taken_0x22b624 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b624) {
            ctx->pc = 0x22B7F4u;
            goto label_22b7f4;
        }
    }
    ctx->pc = 0x22B62Cu;
    // 0x22b62c: 0xdf829458  ld          $v0, -0x6BA8($gp)
    ctx->pc = 0x22b62cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294939736)));
    // 0x22b630: 0x27a300c8  addiu       $v1, $sp, 0xC8
    ctx->pc = 0x22b630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x22b634: 0x16800020  bnez        $s4, . + 4 + (0x20 << 2)
    ctx->pc = 0x22B634u;
    {
        const bool branch_taken_0x22b634 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x22B638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B634u;
            // 0x22b638: 0xfc620000  sd          $v0, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b634) {
            ctx->pc = 0x22B6B8u;
            goto label_22b6b8;
        }
    }
    ctx->pc = 0x22B63Cu;
    // 0x22b63c: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x22b63cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22b640: 0x3c033eb4  lui         $v1, 0x3EB4
    ctx->pc = 0x22b640u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16052 << 16));
    // 0x22b644: 0x3463bad7  ori         $v1, $v1, 0xBAD7
    ctx->pc = 0x22b644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47831);
    // 0x22b648: 0x3c023ee5  lui         $v0, 0x3EE5
    ctx->pc = 0x22b648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16101 << 16));
    // 0x22b64c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x22b64cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x22b650: 0x3442c8fa  ori         $v0, $v0, 0xC8FA
    ctx->pc = 0x22b650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51450);
    // 0x22b654: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x22b654u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x22b658: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22b658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b65c: 0x0  nop
    ctx->pc = 0x22b65cu;
    // NOP
    // 0x22b660: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x22b660u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x22b664: 0xc047a42  jal         func_11E908
    ctx->pc = 0x22B664u;
    SET_GPR_U32(ctx, 31, 0x22B66Cu);
    ctx->pc = 0x22B668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B664u;
            // 0x22b668: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B66Cu; }
        if (ctx->pc != 0x22B66Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B66Cu; }
        if (ctx->pc != 0x22B66Cu) { return; }
    }
    ctx->pc = 0x22B66Cu;
label_22b66c:
    // 0x22b66c: 0x3c0342dc  lui         $v1, 0x42DC
    ctx->pc = 0x22b66cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17116 << 16));
    // 0x22b670: 0x3c02432a  lui         $v0, 0x432A
    ctx->pc = 0x22b670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17194 << 16));
    // 0x22b674: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x22b674u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x22b678: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22b678u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22b67c: 0x0  nop
    ctx->pc = 0x22b67cu;
    // NOP
    // 0x22b680: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x22b680u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x22b684: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x22b684u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x22b688: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x22b688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x22b68c: 0x244206b0  addiu       $v0, $v0, 0x6B0
    ctx->pc = 0x22b68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1712));
    // 0x22b690: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22b690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22b694: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x22b694u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22b698: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x22b698u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22b69c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22b69cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b6a0: 0x0  nop
    ctx->pc = 0x22b6a0u;
    // NOP
    // 0x22b6a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22b6a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x22b6a8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x22B6A8u;
    SET_GPR_U32(ctx, 31, 0x22B6B0u);
    ctx->pc = 0x22B6ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B6A8u;
            // 0x22b6ac: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B6B0u; }
        if (ctx->pc != 0x22B6B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B6B0u; }
        if (ctx->pc != 0x22B6B0u) { return; }
    }
    ctx->pc = 0x22B6B0u;
label_22b6b0:
    // 0x22b6b0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x22B6B0u;
    {
        const bool branch_taken_0x22b6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B6B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B6B0u;
            // 0x22b6b4: 0xafa200c8  sw          $v0, 0xC8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b6b0) {
            ctx->pc = 0x22B6E0u;
            goto label_22b6e0;
        }
    }
    ctx->pc = 0x22B6B8u;
label_22b6b8:
    // 0x22b6b8: 0x2682ffff  addiu       $v0, $s4, -0x1
    ctx->pc = 0x22b6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x22b6bc: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x22b6bcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x22b6c0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x22B6C0u;
    {
        const bool branch_taken_0x22b6c0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x22B6C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B6C0u;
            // 0x22b6c4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b6c0) {
            ctx->pc = 0x22B6D0u;
            goto label_22b6d0;
        }
    }
    ctx->pc = 0x22B6C8u;
    // 0x22b6c8: 0x16820005  bne         $s4, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22B6C8u;
    {
        const bool branch_taken_0x22b6c8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x22b6c8) {
            ctx->pc = 0x22B6E0u;
            goto label_22b6e0;
        }
    }
    ctx->pc = 0x22B6D0u;
label_22b6d0:
    // 0x22b6d0: 0x878382e4  lh          $v1, -0x7D1C($gp)
    ctx->pc = 0x22b6d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935268)));
    // 0x22b6d4: 0x878282e8  lh          $v0, -0x7D18($gp)
    ctx->pc = 0x22b6d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935272)));
    // 0x22b6d8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x22b6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22b6dc: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x22b6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
label_22b6e0:
    // 0x22b6e0: 0x878382ee  lh          $v1, -0x7D12($gp)
    ctx->pc = 0x22b6e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935278)));
    // 0x22b6e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22b6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22b6e8: 0x878482e6  lh          $a0, -0x7D1A($gp)
    ctx->pc = 0x22b6e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935270)));
    // 0x22b6ec: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x22b6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x22b6f0: 0x701018  mult        $v0, $v1, $s0
    ctx->pc = 0x22b6f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22b6f4: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x22b6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x22b6f8: 0x27a200cc  addiu       $v0, $sp, 0xCC
    ctx->pc = 0x22b6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x22b6fc: 0x6c00015  bltz        $s6, . + 4 + (0x15 << 2)
    ctx->pc = 0x22B6FCu;
    {
        const bool branch_taken_0x22b6fc = (GPR_S32(ctx, 22) < 0);
        ctx->pc = 0x22B700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B6FCu;
            // 0x22b700: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b6fc) {
            ctx->pc = 0x22B754u;
            goto label_22b754;
        }
    }
    ctx->pc = 0x22B704u;
    // 0x22b704: 0x16d30013  bne         $s6, $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x22B704u;
    {
        const bool branch_taken_0x22b704 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 19));
        ctx->pc = 0x22B708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B704u;
            // 0x22b708: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b704) {
            ctx->pc = 0x22B754u;
            goto label_22b754;
        }
    }
    ctx->pc = 0x22B70Cu;
    // 0x22b70c: 0x12820003  beq         $s4, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22B70Cu;
    {
        const bool branch_taken_0x22b70c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x22B710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B70Cu;
            // 0x22b710: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b70c) {
            ctx->pc = 0x22B71Cu;
            goto label_22b71c;
        }
    }
    ctx->pc = 0x22B714u;
    // 0x22b714: 0x1682000f  bne         $s4, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x22B714u;
    {
        const bool branch_taken_0x22b714 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x22b714) {
            ctx->pc = 0x22B754u;
            goto label_22b754;
        }
    }
    ctx->pc = 0x22B71Cu;
label_22b71c:
    // 0x22b71c: 0x0  nop
    ctx->pc = 0x22b71cu;
    // NOP
    // 0x22b720: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x22b720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x22b724: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x22b724u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x22b728: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x22b728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22b72c: 0x84a40000  lh          $a0, 0x0($a1)
    ctx->pc = 0x22b72cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x22b730: 0x878382f0  lh          $v1, -0x7D10($gp)
    ctx->pc = 0x22b730u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935280)));
    // 0x22b734: 0x878282f2  lh          $v0, -0x7D0E($gp)
    ctx->pc = 0x22b734u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935282)));
    // 0x22b738: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x22b738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x22b73c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x22b73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x22b740: 0xafa300c8  sw          $v1, 0xC8($sp)
    ctx->pc = 0x22b740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 3));
    // 0x22b744: 0x84a30002  lh          $v1, 0x2($a1)
    ctx->pc = 0x22b744u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x22b748: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x22b748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22b74c: 0x27a200cc  addiu       $v0, $sp, 0xCC
    ctx->pc = 0x22b74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x22b750: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x22b750u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_22b754:
    // 0x22b754: 0x0  nop
    ctx->pc = 0x22b754u;
    // NOP
    // 0x22b758: 0x240300a0  addiu       $v1, $zero, 0xA0
    ctx->pc = 0x22b758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x22b75c: 0xa2230055  sb          $v1, 0x55($s1)
    ctx->pc = 0x22b75cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 85), (uint8_t)GPR_U32(ctx, 3));
    // 0x22b760: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x22b760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x22b764: 0xa2230056  sb          $v1, 0x56($s1)
    ctx->pc = 0x22b764u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 86), (uint8_t)GPR_U32(ctx, 3));
    // 0x22b768: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x22b768u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b76c: 0xa2230057  sb          $v1, 0x57($s1)
    ctx->pc = 0x22b76cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 87), (uint8_t)GPR_U32(ctx, 3));
    // 0x22b770: 0xa2220058  sb          $v0, 0x58($s1)
    ctx->pc = 0x22b770u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 88), (uint8_t)GPR_U32(ctx, 2));
label_22b774:
    // 0x22b774: 0x0  nop
    ctx->pc = 0x22b774u;
    // NOP
    // 0x22b778: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22b778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b77c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22b77cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b780: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22b780u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b784: 0xc0896cc  jal         func_225B30
    ctx->pc = 0x22B784u;
    SET_GPR_U32(ctx, 31, 0x22B78Cu);
    ctx->pc = 0x22B788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B784u;
            // 0x22b788: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225B30u;
    if (runtime->hasFunction(0x225B30u)) {
        auto targetFn = runtime->lookupFunction(0x225B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B78Cu; }
        if (ctx->pc != 0x22B78Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRGBACalcParam__16CMenuPosDataFormFiii_0x225b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B78Cu; }
        if (ctx->pc != 0x22B78Cu) { return; }
    }
    ctx->pc = 0x22B78Cu;
label_22b78c:
    // 0x22b78c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x22b78cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x22b790: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x22b790u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x22b794: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x22B794u;
    {
        const bool branch_taken_0x22b794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b794) {
            ctx->pc = 0x22B774u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22b774;
        }
    }
    ctx->pc = 0x22B79Cu;
    // 0x22b79c: 0x16d30005  bne         $s6, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x22B79Cu;
    {
        const bool branch_taken_0x22b79c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 19));
        ctx->pc = 0x22B7A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B79Cu;
            // 0x22b7a0: 0xa2200050  sb          $zero, 0x50($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 80), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b79c) {
            ctx->pc = 0x22B7B4u;
            goto label_22b7b4;
        }
    }
    ctx->pc = 0x22B7A4u;
    // 0x22b7a4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x22b7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x22b7a8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22B7A8u;
    {
        const bool branch_taken_0x22b7a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B7ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B7A8u;
            // 0x22b7ac: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b7a8) {
            ctx->pc = 0x22B7B4u;
            goto label_22b7b4;
        }
    }
    ctx->pc = 0x22B7B0u;
    // 0x22b7b0: 0xa2220050  sb          $v0, 0x50($s1)
    ctx->pc = 0x22b7b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 80), (uint8_t)GPR_U32(ctx, 2));
label_22b7b4:
    // 0x22b7b4: 0x0  nop
    ctx->pc = 0x22b7b4u;
    // NOP
    // 0x22b7b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22b7b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b7bc: 0x27a500c8  addiu       $a1, $sp, 0xC8
    ctx->pc = 0x22b7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x22b7c0: 0xc08a264  jal         func_228990
    ctx->pc = 0x22B7C0u;
    SET_GPR_U32(ctx, 31, 0x22B7C8u);
    ctx->pc = 0x22B7C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B7C0u;
            // 0x22b7c4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228990u;
    if (runtime->hasFunction(0x228990u)) {
        auto targetFn = runtime->lookupFunction(0x228990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B7C8u; }
        if (ctx->pc != 0x22B7C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNextMovePos__16CMenuPosDataFormFPii_0x228990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B7C8u; }
        if (ctx->pc != 0x22B7C8u) { return; }
    }
    ctx->pc = 0x22B7C8u;
label_22b7c8:
    // 0x22b7c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22b7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22b7cc: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x22b7ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x22b7d0: 0x27a200cc  addiu       $v0, $sp, 0xCC
    ctx->pc = 0x22b7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x22b7d4: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x22b7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x22b7d8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x22b7d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22b7dc: 0xc08a210  jal         func_228840
    ctx->pc = 0x22B7DCu;
    SET_GPR_U32(ctx, 31, 0x22B7E4u);
    ctx->pc = 0x22B7E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B7DCu;
            // 0x22b7e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228840u;
    if (runtime->hasFunction(0x228840u)) {
        auto targetFn = runtime->lookupFunction(0x228840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B7E4u; }
        if (ctx->pc != 0x22B7E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckMoveEnd__16CMenuPosDataFormFii_0x228840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B7E4u; }
        if (ctx->pc != 0x22B7E4u) { return; }
    }
    ctx->pc = 0x22B7E4u;
label_22b7e4:
    // 0x22b7e4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22B7E4u;
    {
        const bool branch_taken_0x22b7e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b7e4) {
            ctx->pc = 0x22B7F0u;
            goto label_22b7f0;
        }
    }
    ctx->pc = 0x22B7ECu;
    // 0x22b7ec: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x22b7ecu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_22b7f0:
    // 0x22b7f0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x22b7f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_22b7f4:
    // 0x22b7f4: 0x0  nop
    ctx->pc = 0x22b7f4u;
    // NOP
    // 0x22b7f8: 0x26f70004  addiu       $s7, $s7, 0x4
    ctx->pc = 0x22b7f8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
    // 0x22b7fc: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x22b7fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_22b800:
    // 0x22b800: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x22b800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x22b804: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x22b804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x22b808: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x22b808u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22b80c: 0x6600003  bltz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x22B80Cu;
    {
        const bool branch_taken_0x22b80c = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x22B810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B80Cu;
            // 0x22b810: 0x2aa20013  slti        $v0, $s5, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)19) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b80c) {
            ctx->pc = 0x22B81Cu;
            goto label_22b81c;
        }
    }
    ctx->pc = 0x22B814u;
    // 0x22b814: 0x1440ff7d  bnez        $v0, . + 4 + (-0x83 << 2)
    ctx->pc = 0x22B814u;
    {
        const bool branch_taken_0x22b814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b814) {
            ctx->pc = 0x22B60Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22b60c;
        }
    }
    ctx->pc = 0x22B81Cu;
label_22b81c:
    // 0x22b81c: 0x0  nop
    ctx->pc = 0x22b81cu;
    // NOP
    // 0x22b820: 0x26a2ffff  addiu       $v0, $s5, -0x1
    ctx->pc = 0x22b820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x22b824: 0x3c2102a  slt         $v0, $fp, $v0
    ctx->pc = 0x22b824u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x22b828: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22B828u;
    {
        const bool branch_taken_0x22b828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22B82Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B828u;
            // 0x22b82c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b828) {
            ctx->pc = 0x22B834u;
            goto label_22b834;
        }
    }
    ctx->pc = 0x22B830u;
    // 0x22b830: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22b830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22b834:
    // 0x22b834: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x22b834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x22b838: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x22b838u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22b83c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x22b83cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22b840: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x22b840u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22b844: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x22b844u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22b848: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x22b848u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22b84c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22b84cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22b850: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22b850u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22b854: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22b854u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22b858: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22b858u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22b85c: 0x3e00008  jr          $ra
    ctx->pc = 0x22B85Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B85Cu;
            // 0x22b860: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22B864u;
}
