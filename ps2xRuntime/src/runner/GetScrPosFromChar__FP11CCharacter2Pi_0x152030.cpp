#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetScrPosFromChar__FP11CCharacter2Pi
// Address: 0x152030 - 0x1520d0
void GetScrPosFromChar__FP11CCharacter2Pi_0x152030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetScrPosFromChar__FP11CCharacter2Pi_0x152030");
#endif

    switch (ctx->pc) {
        case 0x152030u: goto label_152030;
        case 0x152034u: goto label_152034;
        case 0x152038u: goto label_152038;
        case 0x15203cu: goto label_15203c;
        case 0x152040u: goto label_152040;
        case 0x152044u: goto label_152044;
        case 0x152048u: goto label_152048;
        case 0x15204cu: goto label_15204c;
        case 0x152050u: goto label_152050;
        case 0x152054u: goto label_152054;
        case 0x152058u: goto label_152058;
        case 0x15205cu: goto label_15205c;
        case 0x152060u: goto label_152060;
        case 0x152064u: goto label_152064;
        case 0x152068u: goto label_152068;
        case 0x15206cu: goto label_15206c;
        case 0x152070u: goto label_152070;
        case 0x152074u: goto label_152074;
        case 0x152078u: goto label_152078;
        case 0x15207cu: goto label_15207c;
        case 0x152080u: goto label_152080;
        case 0x152084u: goto label_152084;
        case 0x152088u: goto label_152088;
        case 0x15208cu: goto label_15208c;
        case 0x152090u: goto label_152090;
        case 0x152094u: goto label_152094;
        case 0x152098u: goto label_152098;
        case 0x15209cu: goto label_15209c;
        case 0x1520a0u: goto label_1520a0;
        case 0x1520a4u: goto label_1520a4;
        case 0x1520a8u: goto label_1520a8;
        case 0x1520acu: goto label_1520ac;
        case 0x1520b0u: goto label_1520b0;
        case 0x1520b4u: goto label_1520b4;
        case 0x1520b8u: goto label_1520b8;
        case 0x1520bcu: goto label_1520bc;
        case 0x1520c0u: goto label_1520c0;
        case 0x1520c4u: goto label_1520c4;
        case 0x1520c8u: goto label_1520c8;
        case 0x1520ccu: goto label_1520cc;
        default: break;
    }

    ctx->pc = 0x152030u;

label_152030:
    // 0x152030: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x152030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_152034:
    // 0x152034: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x152034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_152038:
    // 0x152038: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x152038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15203c:
    // 0x15203c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15203cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_152040:
    // 0x152040: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x152040u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_152044:
    // 0x152044: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x152044u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_152048:
    // 0x152048: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x152048u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_15204c:
    // 0x15204c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x15204cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_152050:
    // 0x152050: 0x320f809  jalr        $t9
label_152054:
    if (ctx->pc == 0x152054u) {
        ctx->pc = 0x152054u;
            // 0x152054: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x152058u;
        goto label_152058;
    }
    ctx->pc = 0x152050u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x152058u);
        ctx->pc = 0x152054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152050u;
            // 0x152054: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x152058u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x152058u; }
            if (ctx->pc != 0x152058u) { return; }
        }
        }
    }
    ctx->pc = 0x152058u;
label_152058:
    // 0x152058: 0xc6210110  lwc1        $f1, 0x110($s1)
    ctx->pc = 0x152058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15205c:
    // 0x15205c: 0x3c023f59  lui         $v0, 0x3F59
    ctx->pc = 0x15205cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16217 << 16));
label_152060:
    // 0x152060: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x152060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_152064:
    // 0x152064: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x152064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_152068:
    // 0x152068: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x152068u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_15206c:
    // 0x15206c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x15206cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_152070:
    // 0x152070: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x152070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_152074:
    // 0x152074: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x152074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_152078:
    // 0x152078: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x152078u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_15207c:
    // 0x15207c: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x15207cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
label_152080:
    // 0x152080: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x152080u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_152084:
    // 0x152084: 0xc05166c  jal         func_1459B0
label_152088:
    if (ctx->pc == 0x152088u) {
        ctx->pc = 0x152088u;
            // 0x152088: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->pc = 0x15208Cu;
        goto label_15208c;
    }
    ctx->pc = 0x152084u;
    SET_GPR_U32(ctx, 31, 0x15208Cu);
    ctx->pc = 0x152088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152084u;
            // 0x152088: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1459B0u;
    if (runtime->hasFunction(0x1459B0u)) {
        auto targetFn = runtime->lookupFunction(0x1459B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15208Cu; }
        if (ctx->pc != 0x15208Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldScreen__FPiPf_0x1459b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15208Cu; }
        if (ctx->pc != 0x15208Cu) { return; }
    }
    ctx->pc = 0x15208Cu;
label_15208c:
    // 0x15208c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x15208cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_152090:
    // 0x152090: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_152094:
    if (ctx->pc == 0x152094u) {
        ctx->pc = 0x152094u;
            // 0x152094: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->pc = 0x152098u;
        goto label_152098;
    }
    ctx->pc = 0x152090u;
    {
        const bool branch_taken_0x152090 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x152094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152090u;
            // 0x152094: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152090) {
            ctx->pc = 0x1520A0u;
            goto label_1520a0;
        }
    }
    ctx->pc = 0x152098u;
label_152098:
    // 0x152098: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x152098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
label_15209c:
    // 0x15209c: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x15209cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_1520a0:
    // 0x1520a0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1520a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1520a4:
    // 0x1520a4: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x1520a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_1520a8:
    // 0x1520a8: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_1520ac:
    if (ctx->pc == 0x1520ACu) {
        ctx->pc = 0x1520ACu;
            // 0x1520ac: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->pc = 0x1520B0u;
        goto label_1520b0;
    }
    ctx->pc = 0x1520A8u;
    {
        const bool branch_taken_0x1520a8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1520ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1520A8u;
            // 0x1520ac: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1520a8) {
            ctx->pc = 0x1520B8u;
            goto label_1520b8;
        }
    }
    ctx->pc = 0x1520B0u;
label_1520b0:
    // 0x1520b0: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x1520b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
label_1520b4:
    // 0x1520b4: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1520b4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_1520b8:
    // 0x1520b8: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1520b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_1520bc:
    // 0x1520bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1520bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1520c0:
    // 0x1520c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1520c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1520c4:
    // 0x1520c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1520c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1520c8:
    // 0x1520c8: 0x3e00008  jr          $ra
label_1520cc:
    if (ctx->pc == 0x1520CCu) {
        ctx->pc = 0x1520CCu;
            // 0x1520cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1520D0u;
        goto label_fallthrough_0x1520c8;
    }
    ctx->pc = 0x1520C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1520CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1520C8u;
            // 0x1520cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1520c8:
    ctx->pc = 0x1520D0u;
}
