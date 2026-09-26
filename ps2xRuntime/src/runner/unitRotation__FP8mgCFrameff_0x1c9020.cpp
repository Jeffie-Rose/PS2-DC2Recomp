#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: unitRotation__FP8mgCFrameff
// Address: 0x1c9020 - 0x1c928c
void unitRotation__FP8mgCFrameff_0x1c9020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("unitRotation__FP8mgCFrameff_0x1c9020");
#endif

    switch (ctx->pc) {
        case 0x1c9020u: goto label_1c9020;
        case 0x1c9024u: goto label_1c9024;
        case 0x1c9028u: goto label_1c9028;
        case 0x1c902cu: goto label_1c902c;
        case 0x1c9030u: goto label_1c9030;
        case 0x1c9034u: goto label_1c9034;
        case 0x1c9038u: goto label_1c9038;
        case 0x1c903cu: goto label_1c903c;
        case 0x1c9040u: goto label_1c9040;
        case 0x1c9044u: goto label_1c9044;
        case 0x1c9048u: goto label_1c9048;
        case 0x1c904cu: goto label_1c904c;
        case 0x1c9050u: goto label_1c9050;
        case 0x1c9054u: goto label_1c9054;
        case 0x1c9058u: goto label_1c9058;
        case 0x1c905cu: goto label_1c905c;
        case 0x1c9060u: goto label_1c9060;
        case 0x1c9064u: goto label_1c9064;
        case 0x1c9068u: goto label_1c9068;
        case 0x1c906cu: goto label_1c906c;
        case 0x1c9070u: goto label_1c9070;
        case 0x1c9074u: goto label_1c9074;
        case 0x1c9078u: goto label_1c9078;
        case 0x1c907cu: goto label_1c907c;
        case 0x1c9080u: goto label_1c9080;
        case 0x1c9084u: goto label_1c9084;
        case 0x1c9088u: goto label_1c9088;
        case 0x1c908cu: goto label_1c908c;
        case 0x1c9090u: goto label_1c9090;
        case 0x1c9094u: goto label_1c9094;
        case 0x1c9098u: goto label_1c9098;
        case 0x1c909cu: goto label_1c909c;
        case 0x1c90a0u: goto label_1c90a0;
        case 0x1c90a4u: goto label_1c90a4;
        case 0x1c90a8u: goto label_1c90a8;
        case 0x1c90acu: goto label_1c90ac;
        case 0x1c90b0u: goto label_1c90b0;
        case 0x1c90b4u: goto label_1c90b4;
        case 0x1c90b8u: goto label_1c90b8;
        case 0x1c90bcu: goto label_1c90bc;
        case 0x1c90c0u: goto label_1c90c0;
        case 0x1c90c4u: goto label_1c90c4;
        case 0x1c90c8u: goto label_1c90c8;
        case 0x1c90ccu: goto label_1c90cc;
        case 0x1c90d0u: goto label_1c90d0;
        case 0x1c90d4u: goto label_1c90d4;
        case 0x1c90d8u: goto label_1c90d8;
        case 0x1c90dcu: goto label_1c90dc;
        case 0x1c90e0u: goto label_1c90e0;
        case 0x1c90e4u: goto label_1c90e4;
        case 0x1c90e8u: goto label_1c90e8;
        case 0x1c90ecu: goto label_1c90ec;
        case 0x1c90f0u: goto label_1c90f0;
        case 0x1c90f4u: goto label_1c90f4;
        case 0x1c90f8u: goto label_1c90f8;
        case 0x1c90fcu: goto label_1c90fc;
        case 0x1c9100u: goto label_1c9100;
        case 0x1c9104u: goto label_1c9104;
        case 0x1c9108u: goto label_1c9108;
        case 0x1c910cu: goto label_1c910c;
        case 0x1c9110u: goto label_1c9110;
        case 0x1c9114u: goto label_1c9114;
        case 0x1c9118u: goto label_1c9118;
        case 0x1c911cu: goto label_1c911c;
        case 0x1c9120u: goto label_1c9120;
        case 0x1c9124u: goto label_1c9124;
        case 0x1c9128u: goto label_1c9128;
        case 0x1c912cu: goto label_1c912c;
        case 0x1c9130u: goto label_1c9130;
        case 0x1c9134u: goto label_1c9134;
        case 0x1c9138u: goto label_1c9138;
        case 0x1c913cu: goto label_1c913c;
        case 0x1c9140u: goto label_1c9140;
        case 0x1c9144u: goto label_1c9144;
        case 0x1c9148u: goto label_1c9148;
        case 0x1c914cu: goto label_1c914c;
        case 0x1c9150u: goto label_1c9150;
        case 0x1c9154u: goto label_1c9154;
        case 0x1c9158u: goto label_1c9158;
        case 0x1c915cu: goto label_1c915c;
        case 0x1c9160u: goto label_1c9160;
        case 0x1c9164u: goto label_1c9164;
        case 0x1c9168u: goto label_1c9168;
        case 0x1c916cu: goto label_1c916c;
        case 0x1c9170u: goto label_1c9170;
        case 0x1c9174u: goto label_1c9174;
        case 0x1c9178u: goto label_1c9178;
        case 0x1c917cu: goto label_1c917c;
        case 0x1c9180u: goto label_1c9180;
        case 0x1c9184u: goto label_1c9184;
        case 0x1c9188u: goto label_1c9188;
        case 0x1c918cu: goto label_1c918c;
        case 0x1c9190u: goto label_1c9190;
        case 0x1c9194u: goto label_1c9194;
        case 0x1c9198u: goto label_1c9198;
        case 0x1c919cu: goto label_1c919c;
        case 0x1c91a0u: goto label_1c91a0;
        case 0x1c91a4u: goto label_1c91a4;
        case 0x1c91a8u: goto label_1c91a8;
        case 0x1c91acu: goto label_1c91ac;
        case 0x1c91b0u: goto label_1c91b0;
        case 0x1c91b4u: goto label_1c91b4;
        case 0x1c91b8u: goto label_1c91b8;
        case 0x1c91bcu: goto label_1c91bc;
        case 0x1c91c0u: goto label_1c91c0;
        case 0x1c91c4u: goto label_1c91c4;
        case 0x1c91c8u: goto label_1c91c8;
        case 0x1c91ccu: goto label_1c91cc;
        case 0x1c91d0u: goto label_1c91d0;
        case 0x1c91d4u: goto label_1c91d4;
        case 0x1c91d8u: goto label_1c91d8;
        case 0x1c91dcu: goto label_1c91dc;
        case 0x1c91e0u: goto label_1c91e0;
        case 0x1c91e4u: goto label_1c91e4;
        case 0x1c91e8u: goto label_1c91e8;
        case 0x1c91ecu: goto label_1c91ec;
        case 0x1c91f0u: goto label_1c91f0;
        case 0x1c91f4u: goto label_1c91f4;
        case 0x1c91f8u: goto label_1c91f8;
        case 0x1c91fcu: goto label_1c91fc;
        case 0x1c9200u: goto label_1c9200;
        case 0x1c9204u: goto label_1c9204;
        case 0x1c9208u: goto label_1c9208;
        case 0x1c920cu: goto label_1c920c;
        case 0x1c9210u: goto label_1c9210;
        case 0x1c9214u: goto label_1c9214;
        case 0x1c9218u: goto label_1c9218;
        case 0x1c921cu: goto label_1c921c;
        case 0x1c9220u: goto label_1c9220;
        case 0x1c9224u: goto label_1c9224;
        case 0x1c9228u: goto label_1c9228;
        case 0x1c922cu: goto label_1c922c;
        case 0x1c9230u: goto label_1c9230;
        case 0x1c9234u: goto label_1c9234;
        case 0x1c9238u: goto label_1c9238;
        case 0x1c923cu: goto label_1c923c;
        case 0x1c9240u: goto label_1c9240;
        case 0x1c9244u: goto label_1c9244;
        case 0x1c9248u: goto label_1c9248;
        case 0x1c924cu: goto label_1c924c;
        case 0x1c9250u: goto label_1c9250;
        case 0x1c9254u: goto label_1c9254;
        case 0x1c9258u: goto label_1c9258;
        case 0x1c925cu: goto label_1c925c;
        case 0x1c9260u: goto label_1c9260;
        case 0x1c9264u: goto label_1c9264;
        case 0x1c9268u: goto label_1c9268;
        case 0x1c926cu: goto label_1c926c;
        case 0x1c9270u: goto label_1c9270;
        case 0x1c9274u: goto label_1c9274;
        case 0x1c9278u: goto label_1c9278;
        case 0x1c927cu: goto label_1c927c;
        case 0x1c9280u: goto label_1c9280;
        case 0x1c9284u: goto label_1c9284;
        case 0x1c9288u: goto label_1c9288;
        default: break;
    }

    ctx->pc = 0x1c9020u;

label_1c9020:
    // 0x1c9020: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c9020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1c9024:
    // 0x1c9024: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c9024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1c9028:
    // 0x1c9028: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1c9028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1c902c:
    // 0x1c902c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1c902cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1c9030:
    // 0x1c9030: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1c9030u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1c9034:
    // 0x1c9034: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1c9034u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c9038:
    // 0x1c9038: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x1c9038u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_1c903c:
    // 0x1c903c: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x1c903cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_1c9040:
    // 0x1c9040: 0x320f809  jalr        $t9
label_1c9044:
    if (ctx->pc == 0x1C9044u) {
        ctx->pc = 0x1C9044u;
            // 0x1c9044: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x1C9048u;
        goto label_1c9048;
    }
    ctx->pc = 0x1C9040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1C9048u);
        ctx->pc = 0x1C9044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9040u;
            // 0x1c9044: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C9048u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C9048u; }
            if (ctx->pc != 0x1C9048u) { return; }
        }
        }
    }
    ctx->pc = 0x1C9048u;
label_1c9048:
    // 0x1c9048: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x1c9048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
label_1c904c:
    // 0x1c904c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1c904cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c9050:
    // 0x1c9050: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c9050u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c9054:
    // 0x1c9054: 0x0  nop
    ctx->pc = 0x1c9054u;
    // NOP
label_1c9058:
    // 0x1c9058: 0x4600a8c1  sub.s       $f3, $f21, $f0
    ctx->pc = 0x1c9058u;
    ctx->f[3] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_1c905c:
    // 0x1c905c: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x1c905cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c9060:
    // 0x1c9060: 0x0  nop
    ctx->pc = 0x1c9060u;
    // NOP
label_1c9064:
    // 0x1c9064: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1c9068:
    if (ctx->pc == 0x1C9068u) {
        ctx->pc = 0x1C9068u;
            // 0x1c9068: 0x46001886  mov.s       $f2, $f3 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[3]);
        ctx->pc = 0x1C906Cu;
        goto label_1c906c;
    }
    ctx->pc = 0x1C9064u;
    {
        const bool branch_taken_0x1c9064 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C9068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9064u;
            // 0x1c9068: 0x46001886  mov.s       $f2, $f3 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9064) {
            ctx->pc = 0x1C907Cu;
            goto label_1c907c;
        }
    }
    ctx->pc = 0x1C906Cu;
label_1c906c:
    // 0x1c906c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1c906cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1c9070:
    // 0x1c9070: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c9070u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c9074:
    // 0x1c9074: 0x0  nop
    ctx->pc = 0x1c9074u;
    // NOP
label_1c9078:
    // 0x1c9078: 0x46030082  mul.s       $f2, $f0, $f3
    ctx->pc = 0x1c9078u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_1c907c:
    // 0x1c907c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1c907cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1c9080:
    // 0x1c9080: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c9080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1c9084:
    // 0x1c9084: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c9084u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c9088:
    // 0x1c9088: 0x0  nop
    ctx->pc = 0x1c9088u;
    // NOP
label_1c908c:
    // 0x1c908c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1c908cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c9090:
    // 0x1c9090: 0x0  nop
    ctx->pc = 0x1c9090u;
    // NOP
label_1c9094:
    // 0x1c9094: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_1c9098:
    if (ctx->pc == 0x1C9098u) {
        ctx->pc = 0x1C909Cu;
        goto label_1c909c;
    }
    ctx->pc = 0x1C9094u;
    {
        const bool branch_taken_0x1c9094 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c9094) {
            ctx->pc = 0x1C90CCu;
            goto label_1c90cc;
        }
    }
    ctx->pc = 0x1C909Cu;
label_1c909c:
    // 0x1c909c: 0x0  nop
    ctx->pc = 0x1c909cu;
    // NOP
label_1c90a0:
    // 0x1c90a0: 0x0  nop
    ctx->pc = 0x1c90a0u;
    // NOP
label_1c90a4:
    // 0x1c90a4: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x1c90a4u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
label_1c90a8:
    // 0x1c90a8: 0x0  nop
    ctx->pc = 0x1c90a8u;
    // NOP
label_1c90ac:
    // 0x1c90ac: 0x0  nop
    ctx->pc = 0x1c90acu;
    // NOP
label_1c90b0:
    // 0x1c90b0: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1c90b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c90b4:
    // 0x1c90b4: 0x0  nop
    ctx->pc = 0x1c90b4u;
    // NOP
label_1c90b8:
    // 0x1c90b8: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_1c90bc:
    if (ctx->pc == 0x1C90BCu) {
        ctx->pc = 0x1C90C0u;
        goto label_1c90c0;
    }
    ctx->pc = 0x1C90B8u;
    {
        const bool branch_taken_0x1c90b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c90b8) {
            ctx->pc = 0x1C9100u;
            goto label_1c9100;
        }
    }
    ctx->pc = 0x1C90C0u;
label_1c90c0:
    // 0x1c90c0: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1c90c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1c90c4:
    // 0x1c90c4: 0x1000000e  b           . + 4 + (0xE << 2)
label_1c90c8:
    if (ctx->pc == 0x1C90C8u) {
        ctx->pc = 0x1C90CCu;
        goto label_1c90cc;
    }
    ctx->pc = 0x1C90C4u;
    {
        const bool branch_taken_0x1c90c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c90c4) {
            ctx->pc = 0x1C9100u;
            goto label_1c9100;
        }
    }
    ctx->pc = 0x1C90CCu;
label_1c90cc:
    // 0x1c90cc: 0x0  nop
    ctx->pc = 0x1c90ccu;
    // NOP
label_1c90d0:
    // 0x1c90d0: 0x0  nop
    ctx->pc = 0x1c90d0u;
    // NOP
label_1c90d4:
    // 0x1c90d4: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x1c90d4u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
label_1c90d8:
    // 0x1c90d8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1c90d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1c90dc:
    // 0x1c90dc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c90dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1c90e0:
    // 0x1c90e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c90e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c90e4:
    // 0x1c90e4: 0x0  nop
    ctx->pc = 0x1c90e4u;
    // NOP
label_1c90e8:
    // 0x1c90e8: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1c90e8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_1c90ec:
    // 0x1c90ec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c90ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c90f0:
    // 0x1c90f0: 0x0  nop
    ctx->pc = 0x1c90f0u;
    // NOP
label_1c90f4:
    // 0x1c90f4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1c90f8:
    if (ctx->pc == 0x1C90F8u) {
        ctx->pc = 0x1C90FCu;
        goto label_1c90fc;
    }
    ctx->pc = 0x1C90F4u;
    {
        const bool branch_taken_0x1c90f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c90f4) {
            ctx->pc = 0x1C9100u;
            goto label_1c9100;
        }
    }
    ctx->pc = 0x1C90FCu;
label_1c90fc:
    // 0x1c90fc: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1c90fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1c9100:
    // 0x1c9100: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c9100u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c9104:
    // 0x1c9104: 0x0  nop
    ctx->pc = 0x1c9104u;
    // NOP
label_1c9108:
    // 0x1c9108: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x1c9108u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c910c:
    // 0x1c910c: 0x0  nop
    ctx->pc = 0x1c910cu;
    // NOP
label_1c9110:
    // 0x1c9110: 0x45010016  bc1t        . + 4 + (0x16 << 2)
label_1c9114:
    if (ctx->pc == 0x1C9114u) {
        ctx->pc = 0x1C9114u;
            // 0x1c9114: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->pc = 0x1C9118u;
        goto label_1c9118;
    }
    ctx->pc = 0x1C9110u;
    {
        const bool branch_taken_0x1c9110 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C9114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9110u;
            // 0x1c9114: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9110) {
            ctx->pc = 0x1C916Cu;
            goto label_1c916c;
        }
    }
    ctx->pc = 0x1C9118u;
label_1c9118:
    // 0x1c9118: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c9118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1c911c:
    // 0x1c911c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1c911cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1c9120:
    // 0x1c9120: 0x0  nop
    ctx->pc = 0x1c9120u;
    // NOP
label_1c9124:
    // 0x1c9124: 0x46021836  c.le.s      $f3, $f2
    ctx->pc = 0x1c9124u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c9128:
    // 0x1c9128: 0x0  nop
    ctx->pc = 0x1c9128u;
    // NOP
label_1c912c:
    // 0x1c912c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_1c9130:
    if (ctx->pc == 0x1C9130u) {
        ctx->pc = 0x1C9130u;
            // 0x1c9130: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->pc = 0x1C9134u;
        goto label_1c9134;
    }
    ctx->pc = 0x1C912Cu;
    {
        const bool branch_taken_0x1c912c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C9130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C912Cu;
            // 0x1c9130: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c912c) {
            ctx->pc = 0x1C9154u;
            goto label_1c9154;
        }
    }
    ctx->pc = 0x1C9134u;
label_1c9134:
    // 0x1c9134: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c9134u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c9138:
    // 0x1c9138: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1c9138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c913c:
    // 0x1c913c: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x1c913cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_1c9140:
    // 0x1c9140: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1c9140u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
label_1c9144:
    // 0x1c9144: 0x0  nop
    ctx->pc = 0x1c9144u;
    // NOP
label_1c9148:
    // 0x1c9148: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c9148u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1c914c:
    // 0x1c914c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1c9150:
    if (ctx->pc == 0x1C9150u) {
        ctx->pc = 0x1C9150u;
            // 0x1c9150: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->pc = 0x1C9154u;
        goto label_1c9154;
    }
    ctx->pc = 0x1C914Cu;
    {
        const bool branch_taken_0x1c914c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C914Cu;
            // 0x1c9150: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c914c) {
            ctx->pc = 0x1C916Cu;
            goto label_1c916c;
        }
    }
    ctx->pc = 0x1C9154u;
label_1c9154:
    // 0x1c9154: 0x0  nop
    ctx->pc = 0x1c9154u;
    // NOP
label_1c9158:
    // 0x1c9158: 0x0  nop
    ctx->pc = 0x1c9158u;
    // NOP
label_1c915c:
    // 0x1c915c: 0x46141003  div.s       $f0, $f2, $f20
    ctx->pc = 0x1c915cu;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[20]); }
label_1c9160:
    // 0x1c9160: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x1c9160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c9164:
    // 0x1c9164: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c9164u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1c9168:
    // 0x1c9168: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1c9168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1c916c:
    // 0x1c916c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c916cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c9170:
    // 0x1c9170: 0x0  nop
    ctx->pc = 0x1c9170u;
    // NOP
label_1c9174:
    // 0x1c9174: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x1c9174u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c9178:
    // 0x1c9178: 0x0  nop
    ctx->pc = 0x1c9178u;
    // NOP
label_1c917c:
    // 0x1c917c: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
label_1c9180:
    if (ctx->pc == 0x1C9180u) {
        ctx->pc = 0x1C9180u;
            // 0x1c9180: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->pc = 0x1C9184u;
        goto label_1c9184;
    }
    ctx->pc = 0x1C917Cu;
    {
        const bool branch_taken_0x1c917c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C9180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C917Cu;
            // 0x1c9180: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c917c) {
            ctx->pc = 0x1C91E8u;
            goto label_1c91e8;
        }
    }
    ctx->pc = 0x1C9184u;
label_1c9184:
    // 0x1c9184: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c9184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1c9188:
    // 0x1c9188: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c9188u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c918c:
    // 0x1c918c: 0x0  nop
    ctx->pc = 0x1c918cu;
    // NOP
label_1c9190:
    // 0x1c9190: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x1c9190u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c9194:
    // 0x1c9194: 0x0  nop
    ctx->pc = 0x1c9194u;
    // NOP
label_1c9198:
    // 0x1c9198: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_1c919c:
    if (ctx->pc == 0x1C919Cu) {
        ctx->pc = 0x1C919Cu;
            // 0x1c919c: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->pc = 0x1C91A0u;
        goto label_1c91a0;
    }
    ctx->pc = 0x1C9198u;
    {
        const bool branch_taken_0x1c9198 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C919Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9198u;
            // 0x1c919c: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9198) {
            ctx->pc = 0x1C91D0u;
            goto label_1c91d0;
        }
    }
    ctx->pc = 0x1C91A0u;
label_1c91a0:
    // 0x1c91a0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c91a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1c91a4:
    // 0x1c91a4: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1c91a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_1c91a8:
    // 0x1c91a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c91a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c91ac:
    // 0x1c91ac: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1c91acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1c91b0:
    // 0x1c91b0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1c91b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1c91b4:
    // 0x1c91b4: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x1c91b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_1c91b8:
    // 0x1c91b8: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1c91b8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
label_1c91bc:
    // 0x1c91bc: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1c91bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c91c0:
    // 0x1c91c0: 0x0  nop
    ctx->pc = 0x1c91c0u;
    // NOP
label_1c91c4:
    // 0x1c91c4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c91c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1c91c8:
    // 0x1c91c8: 0x10000007  b           . + 4 + (0x7 << 2)
label_1c91cc:
    if (ctx->pc == 0x1C91CCu) {
        ctx->pc = 0x1C91CCu;
            // 0x1c91cc: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->pc = 0x1C91D0u;
        goto label_1c91d0;
    }
    ctx->pc = 0x1C91C8u;
    {
        const bool branch_taken_0x1c91c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C91CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C91C8u;
            // 0x1c91cc: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c91c8) {
            ctx->pc = 0x1C91E8u;
            goto label_1c91e8;
        }
    }
    ctx->pc = 0x1C91D0u;
label_1c91d0:
    // 0x1c91d0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c91d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1c91d4:
    // 0x1c91d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c91d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c91d8:
    // 0x1c91d8: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x1c91d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c91dc:
    // 0x1c91dc: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x1c91dcu;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
label_1c91e0:
    // 0x1c91e0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c91e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1c91e4:
    // 0x1c91e4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1c91e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1c91e8:
    // 0x1c91e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c91e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c91ec:
    // 0x1c91ec: 0x0  nop
    ctx->pc = 0x1c91ecu;
    // NOP
label_1c91f0:
    // 0x1c91f0: 0x46030032  c.eq.s      $f0, $f3
    ctx->pc = 0x1c91f0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c91f4:
    // 0x1c91f4: 0x0  nop
    ctx->pc = 0x1c91f4u;
    // NOP
label_1c91f8:
    // 0x1c91f8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1c91fc:
    if (ctx->pc == 0x1C91FCu) {
        ctx->pc = 0x1C9200u;
        goto label_1c9200;
    }
    ctx->pc = 0x1C91F8u;
    {
        const bool branch_taken_0x1c91f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c91f8) {
            ctx->pc = 0x1C9204u;
            goto label_1c9204;
        }
    }
    ctx->pc = 0x1C9200u;
label_1c9200:
    // 0x1c9200: 0xe4950000  swc1        $f21, 0x0($a0)
    ctx->pc = 0x1c9200u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1c9204:
    // 0x1c9204: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x1c9204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c9208:
    // 0x1c9208: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1c9208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1c920c:
    // 0x1c920c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c920cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1c9210:
    // 0x1c9210: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c9210u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c9214:
    // 0x1c9214: 0x0  nop
    ctx->pc = 0x1c9214u;
    // NOP
label_1c9218:
    // 0x1c9218: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c9218u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c921c:
    // 0x1c921c: 0x0  nop
    ctx->pc = 0x1c921cu;
    // NOP
label_1c9220:
    // 0x1c9220: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1c9224:
    if (ctx->pc == 0x1C9224u) {
        ctx->pc = 0x1C9224u;
            // 0x1c9224: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->pc = 0x1C9228u;
        goto label_1c9228;
    }
    ctx->pc = 0x1C9220u;
    {
        const bool branch_taken_0x1c9220 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C9224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9220u;
            // 0x1c9224: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9220) {
            ctx->pc = 0x1C923Cu;
            goto label_1c923c;
        }
    }
    ctx->pc = 0x1C9228u;
label_1c9228:
    // 0x1c9228: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c9228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1c922c:
    // 0x1c922c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c922cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c9230:
    // 0x1c9230: 0x0  nop
    ctx->pc = 0x1c9230u;
    // NOP
label_1c9234:
    // 0x1c9234: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c9234u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1c9238:
    // 0x1c9238: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1c9238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1c923c:
    // 0x1c923c: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x1c923cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c9240:
    // 0x1c9240: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1c9240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1c9244:
    // 0x1c9244: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c9244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1c9248:
    // 0x1c9248: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c9248u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c924c:
    // 0x1c924c: 0x0  nop
    ctx->pc = 0x1c924cu;
    // NOP
label_1c9250:
    // 0x1c9250: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c9250u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c9254:
    // 0x1c9254: 0x0  nop
    ctx->pc = 0x1c9254u;
    // NOP
label_1c9258:
    // 0x1c9258: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_1c925c:
    if (ctx->pc == 0x1C925Cu) {
        ctx->pc = 0x1C925Cu;
            // 0x1c925c: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->pc = 0x1C9260u;
        goto label_1c9260;
    }
    ctx->pc = 0x1C9258u;
    {
        const bool branch_taken_0x1c9258 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C925Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9258u;
            // 0x1c925c: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9258) {
            ctx->pc = 0x1C9274u;
            goto label_1c9274;
        }
    }
    ctx->pc = 0x1C9260u;
label_1c9260:
    // 0x1c9260: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c9260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1c9264:
    // 0x1c9264: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c9264u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c9268:
    // 0x1c9268: 0x0  nop
    ctx->pc = 0x1c9268u;
    // NOP
label_1c926c:
    // 0x1c926c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c926cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1c9270:
    // 0x1c9270: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1c9270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1c9274:
    // 0x1c9274: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c9274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c9278:
    // 0x1c9278: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1c9278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1c927c:
    // 0x1c927c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1c927cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1c9280:
    // 0x1c9280: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1c9280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c9284:
    // 0x1c9284: 0x3e00008  jr          $ra
label_1c9288:
    if (ctx->pc == 0x1C9288u) {
        ctx->pc = 0x1C9288u;
            // 0x1c9288: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1C928Cu;
        goto label_fallthrough_0x1c9284;
    }
    ctx->pc = 0x1C9284u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9284u;
            // 0x1c9288: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1c9284:
    ctx->pc = 0x1C928Cu;
}
