#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetAdjustScale__9CAquaFishFv
// Address: 0x20d580 - 0x20d60c
void SetAdjustScale__9CAquaFishFv_0x20d580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetAdjustScale__9CAquaFishFv_0x20d580");
#endif

    switch (ctx->pc) {
        case 0x20d580u: goto label_20d580;
        case 0x20d584u: goto label_20d584;
        case 0x20d588u: goto label_20d588;
        case 0x20d58cu: goto label_20d58c;
        case 0x20d590u: goto label_20d590;
        case 0x20d594u: goto label_20d594;
        case 0x20d598u: goto label_20d598;
        case 0x20d59cu: goto label_20d59c;
        case 0x20d5a0u: goto label_20d5a0;
        case 0x20d5a4u: goto label_20d5a4;
        case 0x20d5a8u: goto label_20d5a8;
        case 0x20d5acu: goto label_20d5ac;
        case 0x20d5b0u: goto label_20d5b0;
        case 0x20d5b4u: goto label_20d5b4;
        case 0x20d5b8u: goto label_20d5b8;
        case 0x20d5bcu: goto label_20d5bc;
        case 0x20d5c0u: goto label_20d5c0;
        case 0x20d5c4u: goto label_20d5c4;
        case 0x20d5c8u: goto label_20d5c8;
        case 0x20d5ccu: goto label_20d5cc;
        case 0x20d5d0u: goto label_20d5d0;
        case 0x20d5d4u: goto label_20d5d4;
        case 0x20d5d8u: goto label_20d5d8;
        case 0x20d5dcu: goto label_20d5dc;
        case 0x20d5e0u: goto label_20d5e0;
        case 0x20d5e4u: goto label_20d5e4;
        case 0x20d5e8u: goto label_20d5e8;
        case 0x20d5ecu: goto label_20d5ec;
        case 0x20d5f0u: goto label_20d5f0;
        case 0x20d5f4u: goto label_20d5f4;
        case 0x20d5f8u: goto label_20d5f8;
        case 0x20d5fcu: goto label_20d5fc;
        case 0x20d600u: goto label_20d600;
        case 0x20d604u: goto label_20d604;
        case 0x20d608u: goto label_20d608;
        default: break;
    }

    ctx->pc = 0x20d580u;

label_20d580:
    // 0x20d580: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20d580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_20d584:
    // 0x20d584: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x20d584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
label_20d588:
    // 0x20d588: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20d588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_20d58c:
    // 0x20d58c: 0x34433333  ori         $v1, $v0, 0x3333
    ctx->pc = 0x20d58cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_20d590:
    // 0x20d590: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20d590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_20d594:
    // 0x20d594: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x20d594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_20d598:
    // 0x20d598: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x20d598u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_20d59c:
    // 0x20d59c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x20d59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_20d5a0:
    // 0x20d5a0: 0x8c850938  lw          $a1, 0x938($a0)
    ctx->pc = 0x20d5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2360)));
label_20d5a4:
    // 0x20d5a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20d5a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20d5a8:
    // 0x20d5a8: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x20d5a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_20d5ac:
    // 0x20d5ac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20d5acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20d5b0:
    // 0x20d5b0: 0x94a40028  lhu         $a0, 0x28($a1)
    ctx->pc = 0x20d5b0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 40)));
label_20d5b4:
    // 0x20d5b4: 0xc0834b4  jal         func_20D2D0
label_20d5b8:
    if (ctx->pc == 0x20D5B8u) {
        ctx->pc = 0x20D5B8u;
            // 0x20d5b8: 0x84a50002  lh          $a1, 0x2($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
        ctx->pc = 0x20D5BCu;
        goto label_20d5bc;
    }
    ctx->pc = 0x20D5B4u;
    SET_GPR_U32(ctx, 31, 0x20D5BCu);
    ctx->pc = 0x20D5B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D5B4u;
            // 0x20d5b8: 0x84a50002  lh          $a1, 0x2($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D2D0u;
    if (runtime->hasFunction(0x20D2D0u)) {
        auto targetFn = runtime->lookupFunction(0x20D2D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D5BCu; }
        if (ctx->pc != 0x20D5BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFishAdjustScale__Fiiff_0x20d2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D5BCu; }
        if (ctx->pc != 0x20D5BCu) { return; }
    }
    ctx->pc = 0x20D5BCu;
label_20d5bc:
    // 0x20d5bc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x20d5bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20d5c0:
    // 0x20d5c0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x20d5c0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_20d5c4:
    // 0x20d5c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20d5c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20d5c8:
    // 0x20d5c8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x20d5c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_20d5cc:
    // 0x20d5cc: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x20d5ccu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_20d5d0:
    // 0x20d5d0: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x20d5d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_20d5d4:
    // 0x20d5d4: 0x320f809  jalr        $t9
label_20d5d8:
    if (ctx->pc == 0x20D5D8u) {
        ctx->pc = 0x20D5D8u;
            // 0x20d5d8: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x20D5DCu;
        goto label_20d5dc;
    }
    ctx->pc = 0x20D5D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20D5DCu);
        ctx->pc = 0x20D5D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D5D4u;
            // 0x20d5d8: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20D5DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20D5DCu; }
            if (ctx->pc != 0x20D5DCu) { return; }
        }
        }
    }
    ctx->pc = 0x20D5DCu;
label_20d5dc:
    // 0x20d5dc: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x20d5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
label_20d5e0:
    // 0x20d5e0: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x20d5e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
label_20d5e4:
    // 0x20d5e4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x20d5e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20d5e8:
    // 0x20d5e8: 0xc6000110  lwc1        $f0, 0x110($s0)
    ctx->pc = 0x20d5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20d5ec:
    // 0x20d5ec: 0x4601a043  div.s       $f1, $f20, $f1
    ctx->pc = 0x20d5ecu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[20], ctx->f[1]); }
label_20d5f0:
    // 0x20d5f0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x20d5f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_20d5f4:
    // 0x20d5f4: 0xe60006a4  swc1        $f0, 0x6A4($s0)
    ctx->pc = 0x20d5f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1700), bits); }
label_20d5f8:
    // 0x20d5f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20d5f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_20d5fc:
    // 0x20d5fc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x20d5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_20d600:
    // 0x20d600: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20d600u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20d604:
    // 0x20d604: 0x3e00008  jr          $ra
label_20d608:
    if (ctx->pc == 0x20D608u) {
        ctx->pc = 0x20D608u;
            // 0x20d608: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x20D60Cu;
        goto label_fallthrough_0x20d604;
    }
    ctx->pc = 0x20D604u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D604u;
            // 0x20d608: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x20d604:
    ctx->pc = 0x20D60Cu;
}
