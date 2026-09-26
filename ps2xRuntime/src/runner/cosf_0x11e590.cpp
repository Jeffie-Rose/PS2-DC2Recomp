#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: cosf
// Address: 0x11e590 - 0x11e678
void cosf_0x11e590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cosf_0x11e590");
#endif

    switch (ctx->pc) {
        case 0x11e5c8u: goto label_11e5c8;
        case 0x11e5f4u: goto label_11e5f4;
        case 0x11e634u: goto label_11e634;
        case 0x11e64cu: goto label_11e64c;
        case 0x11e65cu: goto label_11e65c;
        case 0x11e66cu: goto label_11e66c;
        default: break;
    }

    ctx->pc = 0x11e590u;

    // 0x11e590: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x11e590u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x11e594: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11e594u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11e598: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11e598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e59c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x11e59cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x11e5a0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x11e5a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x11e5a4: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x11e5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x11e5a8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x11e5a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x11e5ac: 0x34420fd8  ori         $v0, $v0, 0xFD8
    ctx->pc = 0x11e5acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4056);
    // 0x11e5b0: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x11e5b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x11e5b4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11E5B4u;
    {
        const bool branch_taken_0x11e5b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E5B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E5B4u;
            // 0x11e5b8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e5b4) {
            ctx->pc = 0x11E5D0u;
            goto label_11e5d0;
        }
    }
    ctx->pc = 0x11E5BCu;
    // 0x11e5bc: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x11e5bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x11e5c0: 0xc0471e2  jal         func_11C788
    ctx->pc = 0x11E5C0u;
    SET_GPR_U32(ctx, 31, 0x11E5C8u);
    ctx->pc = 0x11C788u;
    if (runtime->hasFunction(0x11C788u)) {
        auto targetFn = runtime->lookupFunction(0x11C788u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E5C8u; }
        if (ctx->pc != 0x11E5C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___kernel_cosf_0x11c788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E5C8u; }
        if (ctx->pc != 0x11E5C8u) { return; }
    }
    ctx->pc = 0x11E5C8u;
label_11e5c8:
    // 0x11e5c8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x11E5C8u;
    {
        const bool branch_taken_0x11e5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E5CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E5C8u;
            // 0x11e5cc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e5c8) {
            ctx->pc = 0x11E670u;
            goto label_11e670;
        }
    }
    ctx->pc = 0x11E5D0u;
label_11e5d0:
    // 0x11e5d0: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x11e5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x11e5d4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11e5d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11e5d8: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x11e5d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x11e5dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E5DCu;
    {
        const bool branch_taken_0x11e5dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e5dc) {
            ctx->pc = 0x11E5ECu;
            goto label_11e5ec;
        }
    }
    ctx->pc = 0x11E5E4u;
    // 0x11e5e4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x11E5E4u;
    {
        const bool branch_taken_0x11e5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E5E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E5E4u;
            // 0x11e5e8: 0x460c6001  sub.s       $f0, $f12, $f12 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e5e4) {
            ctx->pc = 0x11E66Cu;
            goto label_11e66c;
        }
    }
    ctx->pc = 0x11E5ECu;
label_11e5ec:
    // 0x11e5ec: 0xc046cb8  jal         func_11B2E0
    ctx->pc = 0x11E5ECu;
    SET_GPR_U32(ctx, 31, 0x11E5F4u);
    ctx->pc = 0x11E5F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E5ECu;
            // 0x11e5f0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B2E0u;
    if (runtime->hasFunction(0x11B2E0u)) {
        auto targetFn = runtime->lookupFunction(0x11B2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E5F4u; }
        if (ctx->pc != 0x11E5F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ieee754_rem_pio2f_0x11b2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E5F4u; }
        if (ctx->pc != 0x11E5F4u) { return; }
    }
    ctx->pc = 0x11E5F4u;
label_11e5f4:
    // 0x11e5f4: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x11e5f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x11e5f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11e5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e5fc: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x11E5FCu;
    {
        const bool branch_taken_0x11e5fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11E600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E5FCu;
            // 0x11e600: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e5fc) {
            ctx->pc = 0x11E63Cu;
            goto label_11e63c;
        }
    }
    ctx->pc = 0x11E604u;
    // 0x11e604: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11E604u;
    {
        const bool branch_taken_0x11e604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E604u;
            // 0x11e608: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e604) {
            ctx->pc = 0x11E61Cu;
            goto label_11e61c;
        }
    }
    ctx->pc = 0x11E60Cu;
    // 0x11e60c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x11E60Cu;
    {
        const bool branch_taken_0x11e60c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E60Cu;
            // 0x11e610: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e60c) {
            ctx->pc = 0x11E62Cu;
            goto label_11e62c;
        }
    }
    ctx->pc = 0x11E614u;
    // 0x11e614: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x11E614u;
    {
        const bool branch_taken_0x11e614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E614u;
            // 0x11e618: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e614) {
            ctx->pc = 0x11E664u;
            goto label_11e664;
        }
    }
    ctx->pc = 0x11E61Cu;
label_11e61c:
    // 0x11e61c: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x11E61Cu;
    {
        const bool branch_taken_0x11e61c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11E620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E61Cu;
            // 0x11e620: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e61c) {
            ctx->pc = 0x11E654u;
            goto label_11e654;
        }
    }
    ctx->pc = 0x11E624u;
    // 0x11e624: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x11E624u;
    {
        const bool branch_taken_0x11e624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E624u;
            // 0x11e628: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e624) {
            ctx->pc = 0x11E664u;
            goto label_11e664;
        }
    }
    ctx->pc = 0x11E62Cu;
label_11e62c:
    // 0x11e62c: 0xc0471e2  jal         func_11C788
    ctx->pc = 0x11E62Cu;
    SET_GPR_U32(ctx, 31, 0x11E634u);
    ctx->pc = 0x11E630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E62Cu;
            // 0x11e630: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C788u;
    if (runtime->hasFunction(0x11C788u)) {
        auto targetFn = runtime->lookupFunction(0x11C788u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E634u; }
        if (ctx->pc != 0x11E634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___kernel_cosf_0x11c788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E634u; }
        if (ctx->pc != 0x11E634u) { return; }
    }
    ctx->pc = 0x11E634u;
label_11e634:
    // 0x11e634: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x11E634u;
    {
        const bool branch_taken_0x11e634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E634u;
            // 0x11e638: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e634) {
            ctx->pc = 0x11E670u;
            goto label_11e670;
        }
    }
    ctx->pc = 0x11E63Cu;
label_11e63c:
    // 0x11e63c: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x11e63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x11e640: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11e640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e644: 0xc04748c  jal         func_11D230
    ctx->pc = 0x11E644u;
    SET_GPR_U32(ctx, 31, 0x11E64Cu);
    ctx->pc = 0x11E648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E644u;
            // 0x11e648: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D230u;
    if (runtime->hasFunction(0x11D230u)) {
        auto targetFn = runtime->lookupFunction(0x11D230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E64Cu; }
        if (ctx->pc != 0x11E64Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___kernel_sinf_0x11d230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E64Cu; }
        if (ctx->pc != 0x11E64Cu) { return; }
    }
    ctx->pc = 0x11E64Cu;
label_11e64c:
    // 0x11e64c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x11E64Cu;
    {
        const bool branch_taken_0x11e64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E64Cu;
            // 0x11e650: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e64c) {
            ctx->pc = 0x11E66Cu;
            goto label_11e66c;
        }
    }
    ctx->pc = 0x11E654u;
label_11e654:
    // 0x11e654: 0xc0471e2  jal         func_11C788
    ctx->pc = 0x11E654u;
    SET_GPR_U32(ctx, 31, 0x11E65Cu);
    ctx->pc = 0x11E658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E654u;
            // 0x11e658: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C788u;
    if (runtime->hasFunction(0x11C788u)) {
        auto targetFn = runtime->lookupFunction(0x11C788u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E65Cu; }
        if (ctx->pc != 0x11E65Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___kernel_cosf_0x11c788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E65Cu; }
        if (ctx->pc != 0x11E65Cu) { return; }
    }
    ctx->pc = 0x11E65Cu;
label_11e65c:
    // 0x11e65c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11E65Cu;
    {
        const bool branch_taken_0x11e65c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E65Cu;
            // 0x11e660: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e65c) {
            ctx->pc = 0x11E66Cu;
            goto label_11e66c;
        }
    }
    ctx->pc = 0x11E664u;
label_11e664:
    // 0x11e664: 0xc04748c  jal         func_11D230
    ctx->pc = 0x11E664u;
    SET_GPR_U32(ctx, 31, 0x11E66Cu);
    ctx->pc = 0x11E668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E664u;
            // 0x11e668: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D230u;
    if (runtime->hasFunction(0x11D230u)) {
        auto targetFn = runtime->lookupFunction(0x11D230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E66Cu; }
        if (ctx->pc != 0x11E66Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___kernel_sinf_0x11d230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E66Cu; }
        if (ctx->pc != 0x11E66Cu) { return; }
    }
    ctx->pc = 0x11E66Cu;
label_11e66c:
    // 0x11e66c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11e66cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11e670:
    // 0x11e670: 0x3e00008  jr          $ra
    ctx->pc = 0x11E670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E670u;
            // 0x11e674: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11E678u;
}
