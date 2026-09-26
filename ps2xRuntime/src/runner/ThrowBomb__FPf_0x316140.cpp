#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ThrowBomb__FPf
// Address: 0x316140 - 0x3161dc
void ThrowBomb__FPf_0x316140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ThrowBomb__FPf_0x316140");
#endif

    switch (ctx->pc) {
        case 0x316140u: goto label_316140;
        case 0x316144u: goto label_316144;
        case 0x316148u: goto label_316148;
        case 0x31614cu: goto label_31614c;
        case 0x316150u: goto label_316150;
        case 0x316154u: goto label_316154;
        case 0x316158u: goto label_316158;
        case 0x31615cu: goto label_31615c;
        case 0x316160u: goto label_316160;
        case 0x316164u: goto label_316164;
        case 0x316168u: goto label_316168;
        case 0x31616cu: goto label_31616c;
        case 0x316170u: goto label_316170;
        case 0x316174u: goto label_316174;
        case 0x316178u: goto label_316178;
        case 0x31617cu: goto label_31617c;
        case 0x316180u: goto label_316180;
        case 0x316184u: goto label_316184;
        case 0x316188u: goto label_316188;
        case 0x31618cu: goto label_31618c;
        case 0x316190u: goto label_316190;
        case 0x316194u: goto label_316194;
        case 0x316198u: goto label_316198;
        case 0x31619cu: goto label_31619c;
        case 0x3161a0u: goto label_3161a0;
        case 0x3161a4u: goto label_3161a4;
        case 0x3161a8u: goto label_3161a8;
        case 0x3161acu: goto label_3161ac;
        case 0x3161b0u: goto label_3161b0;
        case 0x3161b4u: goto label_3161b4;
        case 0x3161b8u: goto label_3161b8;
        case 0x3161bcu: goto label_3161bc;
        case 0x3161c0u: goto label_3161c0;
        case 0x3161c4u: goto label_3161c4;
        case 0x3161c8u: goto label_3161c8;
        case 0x3161ccu: goto label_3161cc;
        case 0x3161d0u: goto label_3161d0;
        case 0x3161d4u: goto label_3161d4;
        case 0x3161d8u: goto label_3161d8;
        default: break;
    }

    ctx->pc = 0x316140u;

label_316140:
    // 0x316140: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x316140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_316144:
    // 0x316144: 0x3c0301f6  lui         $v1, 0x1F6
    ctx->pc = 0x316144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
label_316148:
    // 0x316148: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x316148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_31614c:
    // 0x31614c: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x31614cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_316150:
    // 0x316150: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x316150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_316154:
    // 0x316154: 0x2463f990  addiu       $v1, $v1, -0x670
    ctx->pc = 0x316154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965648));
label_316158:
    // 0x316158: 0xaf82a30c  sw          $v0, -0x5CF4($gp)
    ctx->pc = 0x316158u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943500), GPR_U32(ctx, 2));
label_31615c:
    // 0x31615c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x31615cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_316160:
    // 0x316160: 0x78840000  lq          $a0, 0x0($a0)
    ctx->pc = 0x316160u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_316164:
    // 0x316164: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x316164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_316168:
    // 0x316168: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x316168u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_31616c:
    // 0x31616c: 0xaf82a308  sw          $v0, -0x5CF8($gp)
    ctx->pc = 0x31616cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943496), GPR_U32(ctx, 2));
label_316170:
    // 0x316170: 0x8f82a290  lw          $v0, -0x5D70($gp)
    ctx->pc = 0x316170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943376)));
label_316174:
    // 0x316174: 0xaf80a310  sw          $zero, -0x5CF0($gp)
    ctx->pc = 0x316174u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943504), GPR_U32(ctx, 0));
label_316178:
    // 0x316178: 0x8c500070  lw          $s0, 0x70($v0)
    ctx->pc = 0x316178u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_31617c:
    // 0x31617c: 0xc04dc0c  jal         func_137030
label_316180:
    if (ctx->pc == 0x316180u) {
        ctx->pc = 0x316180u;
            // 0x316180: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x316184u;
        goto label_316184;
    }
    ctx->pc = 0x31617Cu;
    SET_GPR_U32(ctx, 31, 0x316184u);
    ctx->pc = 0x316180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31617Cu;
            // 0x316180: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137030u;
    if (runtime->hasFunction(0x137030u)) {
        auto targetFn = runtime->lookupFunction(0x137030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316184u; }
        if (ctx->pc != 0x316184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLWMatrix__8mgCFrameFPA4_f_0x137030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316184u; }
        if (ctx->pc != 0x316184u) { return; }
    }
    ctx->pc = 0x316184u;
label_316184:
    // 0x316184: 0xc04db18  jal         func_136C60
label_316188:
    if (ctx->pc == 0x316188u) {
        ctx->pc = 0x316188u;
            // 0x316188: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31618Cu;
        goto label_31618c;
    }
    ctx->pc = 0x316184u;
    SET_GPR_U32(ctx, 31, 0x31618Cu);
    ctx->pc = 0x316188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x316184u;
            // 0x316188: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136C60u;
    if (runtime->hasFunction(0x136C60u)) {
        auto targetFn = runtime->lookupFunction(0x136C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31618Cu; }
        if (ctx->pc != 0x31618Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteReference__8mgCFrameFv_0x136c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31618Cu; }
        if (ctx->pc != 0x31618Cu) { return; }
    }
    ctx->pc = 0x31618Cu;
label_31618c:
    // 0x31618c: 0x8f84a290  lw          $a0, -0x5D70($gp)
    ctx->pc = 0x31618cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943376)));
label_316190:
    // 0x316190: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x316190u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_316194:
    // 0x316194: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x316194u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_316198:
    // 0x316198: 0x320f809  jalr        $t9
label_31619c:
    if (ctx->pc == 0x31619Cu) {
        ctx->pc = 0x31619Cu;
            // 0x31619c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3161A0u;
        goto label_3161a0;
    }
    ctx->pc = 0x316198u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3161A0u);
        ctx->pc = 0x31619Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316198u;
            // 0x31619c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3161A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3161A0u; }
            if (ctx->pc != 0x3161A0u) { return; }
        }
        }
    }
    ctx->pc = 0x3161A0u;
label_3161a0:
    // 0x3161a0: 0xc7ad0048  lwc1        $f13, 0x48($sp)
    ctx->pc = 0x3161a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3161a4:
    // 0x3161a4: 0xc047c76  jal         func_11F1D8
label_3161a8:
    if (ctx->pc == 0x3161A8u) {
        ctx->pc = 0x3161A8u;
            // 0x3161a8: 0xc7ac0040  lwc1        $f12, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x3161ACu;
        goto label_3161ac;
    }
    ctx->pc = 0x3161A4u;
    SET_GPR_U32(ctx, 31, 0x3161ACu);
    ctx->pc = 0x3161A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3161A4u;
            // 0x3161a8: 0xc7ac0040  lwc1        $f12, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3161ACu; }
        if (ctx->pc != 0x3161ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3161ACu; }
        if (ctx->pc != 0x3161ACu) { return; }
    }
    ctx->pc = 0x3161ACu;
label_3161ac:
    // 0x3161ac: 0x8f84a290  lw          $a0, -0x5D70($gp)
    ctx->pc = 0x3161acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943376)));
label_3161b0:
    // 0x3161b0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3161b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3161b4:
    // 0x3161b4: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x3161b4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_3161b8:
    // 0x3161b8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3161b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3161bc:
    // 0x3161bc: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x3161bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_3161c0:
    // 0x3161c0: 0x320f809  jalr        $t9
label_3161c4:
    if (ctx->pc == 0x3161C4u) {
        ctx->pc = 0x3161C4u;
            // 0x3161c4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3161C8u;
        goto label_3161c8;
    }
    ctx->pc = 0x3161C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3161C8u);
        ctx->pc = 0x3161C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3161C0u;
            // 0x3161c4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3161C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3161C8u; }
            if (ctx->pc != 0x3161C8u) { return; }
        }
        }
    }
    ctx->pc = 0x3161C8u;
label_3161c8:
    // 0x3161c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3161c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3161cc:
    // 0x3161cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3161ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3161d0:
    // 0x3161d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3161d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3161d4:
    // 0x3161d4: 0x3e00008  jr          $ra
label_3161d8:
    if (ctx->pc == 0x3161D8u) {
        ctx->pc = 0x3161D8u;
            // 0x3161d8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3161DCu;
        goto label_fallthrough_0x3161d4;
    }
    ctx->pc = 0x3161D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3161D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3161D4u;
            // 0x3161d8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3161d4:
    ctx->pc = 0x3161DCu;
}
