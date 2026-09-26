#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__12CTreasureBoxFPf
// Address: 0x28c1d0 - 0x28c300
void Draw__12CTreasureBoxFPf_0x28c1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__12CTreasureBoxFPf_0x28c1d0");
#endif

    switch (ctx->pc) {
        case 0x28c1d0u: goto label_28c1d0;
        case 0x28c1d4u: goto label_28c1d4;
        case 0x28c1d8u: goto label_28c1d8;
        case 0x28c1dcu: goto label_28c1dc;
        case 0x28c1e0u: goto label_28c1e0;
        case 0x28c1e4u: goto label_28c1e4;
        case 0x28c1e8u: goto label_28c1e8;
        case 0x28c1ecu: goto label_28c1ec;
        case 0x28c1f0u: goto label_28c1f0;
        case 0x28c1f4u: goto label_28c1f4;
        case 0x28c1f8u: goto label_28c1f8;
        case 0x28c1fcu: goto label_28c1fc;
        case 0x28c200u: goto label_28c200;
        case 0x28c204u: goto label_28c204;
        case 0x28c208u: goto label_28c208;
        case 0x28c20cu: goto label_28c20c;
        case 0x28c210u: goto label_28c210;
        case 0x28c214u: goto label_28c214;
        case 0x28c218u: goto label_28c218;
        case 0x28c21cu: goto label_28c21c;
        case 0x28c220u: goto label_28c220;
        case 0x28c224u: goto label_28c224;
        case 0x28c228u: goto label_28c228;
        case 0x28c22cu: goto label_28c22c;
        case 0x28c230u: goto label_28c230;
        case 0x28c234u: goto label_28c234;
        case 0x28c238u: goto label_28c238;
        case 0x28c23cu: goto label_28c23c;
        case 0x28c240u: goto label_28c240;
        case 0x28c244u: goto label_28c244;
        case 0x28c248u: goto label_28c248;
        case 0x28c24cu: goto label_28c24c;
        case 0x28c250u: goto label_28c250;
        case 0x28c254u: goto label_28c254;
        case 0x28c258u: goto label_28c258;
        case 0x28c25cu: goto label_28c25c;
        case 0x28c260u: goto label_28c260;
        case 0x28c264u: goto label_28c264;
        case 0x28c268u: goto label_28c268;
        case 0x28c26cu: goto label_28c26c;
        case 0x28c270u: goto label_28c270;
        case 0x28c274u: goto label_28c274;
        case 0x28c278u: goto label_28c278;
        case 0x28c27cu: goto label_28c27c;
        case 0x28c280u: goto label_28c280;
        case 0x28c284u: goto label_28c284;
        case 0x28c288u: goto label_28c288;
        case 0x28c28cu: goto label_28c28c;
        case 0x28c290u: goto label_28c290;
        case 0x28c294u: goto label_28c294;
        case 0x28c298u: goto label_28c298;
        case 0x28c29cu: goto label_28c29c;
        case 0x28c2a0u: goto label_28c2a0;
        case 0x28c2a4u: goto label_28c2a4;
        case 0x28c2a8u: goto label_28c2a8;
        case 0x28c2acu: goto label_28c2ac;
        case 0x28c2b0u: goto label_28c2b0;
        case 0x28c2b4u: goto label_28c2b4;
        case 0x28c2b8u: goto label_28c2b8;
        case 0x28c2bcu: goto label_28c2bc;
        case 0x28c2c0u: goto label_28c2c0;
        case 0x28c2c4u: goto label_28c2c4;
        case 0x28c2c8u: goto label_28c2c8;
        case 0x28c2ccu: goto label_28c2cc;
        case 0x28c2d0u: goto label_28c2d0;
        case 0x28c2d4u: goto label_28c2d4;
        case 0x28c2d8u: goto label_28c2d8;
        case 0x28c2dcu: goto label_28c2dc;
        case 0x28c2e0u: goto label_28c2e0;
        case 0x28c2e4u: goto label_28c2e4;
        case 0x28c2e8u: goto label_28c2e8;
        case 0x28c2ecu: goto label_28c2ec;
        case 0x28c2f0u: goto label_28c2f0;
        case 0x28c2f4u: goto label_28c2f4;
        case 0x28c2f8u: goto label_28c2f8;
        case 0x28c2fcu: goto label_28c2fc;
        default: break;
    }

    ctx->pc = 0x28c1d0u;

label_28c1d0:
    // 0x28c1d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x28c1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_28c1d4:
    // 0x28c1d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28c1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_28c1d8:
    // 0x28c1d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28c1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_28c1dc:
    // 0x28c1dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28c1dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_28c1e0:
    // 0x28c1e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28c1e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28c1e4:
    // 0x28c1e4: 0x8c830068  lw          $v1, 0x68($a0)
    ctx->pc = 0x28c1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
label_28c1e8:
    // 0x28c1e8: 0x10600040  beqz        $v1, . + 4 + (0x40 << 2)
label_28c1ec:
    if (ctx->pc == 0x28C1ECu) {
        ctx->pc = 0x28C1ECu;
            // 0x28c1ec: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28C1F0u;
        goto label_28c1f0;
    }
    ctx->pc = 0x28C1E8u;
    {
        const bool branch_taken_0x28c1e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C1ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C1E8u;
            // 0x28c1ec: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c1e8) {
            ctx->pc = 0x28C2ECu;
            goto label_28c2ec;
        }
    }
    ctx->pc = 0x28C1F0u;
label_28c1f0:
    // 0x28c1f0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x28c1f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28c1f4:
    // 0x28c1f4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x28c1f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_28c1f8:
    // 0x28c1f8: 0x320f809  jalr        $t9
label_28c1fc:
    if (ctx->pc == 0x28C1FCu) {
        ctx->pc = 0x28C1FCu;
            // 0x28c1fc: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x28C200u;
        goto label_28c200;
    }
    ctx->pc = 0x28C1F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28C200u);
        ctx->pc = 0x28C1FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C1F8u;
            // 0x28c1fc: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28C200u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28C200u; }
            if (ctx->pc != 0x28C200u) { return; }
        }
        }
    }
    ctx->pc = 0x28C200u;
label_28c200:
    // 0x28c200: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x28c200u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_28c204:
    // 0x28c204: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28c204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28c208:
    // 0x28c208: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x28c208u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_28c20c:
    // 0x28c20c: 0x320f809  jalr        $t9
label_28c210:
    if (ctx->pc == 0x28C210u) {
        ctx->pc = 0x28C210u;
            // 0x28c210: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x28C214u;
        goto label_28c214;
    }
    ctx->pc = 0x28C20Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28C214u);
        ctx->pc = 0x28C210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C20Cu;
            // 0x28c210: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28C214u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28C214u; }
            if (ctx->pc != 0x28C214u) { return; }
        }
        }
    }
    ctx->pc = 0x28C214u;
label_28c214:
    // 0x28c214: 0xc6220050  lwc1        $f2, 0x50($s1)
    ctx->pc = 0x28c214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_28c218:
    // 0x28c218: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x28c218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_28c21c:
    // 0x28c21c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x28c21cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_28c220:
    // 0x28c220: 0x8e240064  lw          $a0, 0x64($s1)
    ctx->pc = 0x28c220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_28c224:
    // 0x28c224: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x28c224u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_28c228:
    // 0x28c228: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x28c228u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_28c22c:
    // 0x28c22c: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x28c22cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_28c230:
    // 0x28c230: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28c230u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28c234:
    // 0x28c234: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x28c234u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_28c238:
    // 0x28c238: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x28c238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
label_28c23c:
    // 0x28c23c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x28c23cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28c240:
    // 0x28c240: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x28c240u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
label_28c244:
    // 0x28c244: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28c244u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28c248:
    // 0x28c248: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x28c248u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
label_28c24c:
    // 0x28c24c: 0x0  nop
    ctx->pc = 0x28c24cu;
    // NOP
label_28c250:
    // 0x28c250: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x28c250u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_28c254:
    // 0x28c254: 0x320f809  jalr        $t9
label_28c258:
    if (ctx->pc == 0x28C258u) {
        ctx->pc = 0x28C258u;
            // 0x28c258: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x28C25Cu;
        goto label_28c25c;
    }
    ctx->pc = 0x28C254u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28C25Cu);
        ctx->pc = 0x28C258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C254u;
            // 0x28c258: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28C25Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28C25Cu; }
            if (ctx->pc != 0x28C25Cu) { return; }
        }
        }
    }
    ctx->pc = 0x28C25Cu;
label_28c25c:
    // 0x28c25c: 0x8e240064  lw          $a0, 0x64($s1)
    ctx->pc = 0x28c25cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_28c260:
    // 0x28c260: 0x3c024110  lui         $v0, 0x4110
    ctx->pc = 0x28c260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16656 << 16));
label_28c264:
    // 0x28c264: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x28c264u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_28c268:
    // 0x28c268: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28c268u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28c26c:
    // 0x28c26c: 0x3c02c0ec  lui         $v0, 0xC0EC
    ctx->pc = 0x28c26cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49388 << 16));
label_28c270:
    // 0x28c270: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x28c270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_28c274:
    // 0x28c274: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x28c274u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_28c278:
    // 0x28c278: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x28c278u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28c27c:
    // 0x28c27c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x28c27cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_28c280:
    // 0x28c280: 0x320f809  jalr        $t9
label_28c284:
    if (ctx->pc == 0x28C284u) {
        ctx->pc = 0x28C288u;
        goto label_28c288;
    }
    ctx->pc = 0x28C280u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28C288u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x28C288u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28C288u; }
            if (ctx->pc != 0x28C288u) { return; }
        }
        }
    }
    ctx->pc = 0x28C288u;
label_28c288:
    // 0x28c288: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28c288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28c28c:
    // 0x28c28c: 0xc04c018  jal         func_130060
label_28c290:
    if (ctx->pc == 0x28C290u) {
        ctx->pc = 0x28C290u;
            // 0x28c290: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x28C294u;
        goto label_28c294;
    }
    ctx->pc = 0x28C28Cu;
    SET_GPR_U32(ctx, 31, 0x28C294u);
    ctx->pc = 0x28C290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C28Cu;
            // 0x28c290: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C294u; }
        if (ctx->pc != 0x28C294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C294u; }
        if (ctx->pc != 0x28C294u) { return; }
    }
    ctx->pc = 0x28C294u;
label_28c294:
    // 0x28c294: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x28c294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
label_28c298:
    // 0x28c298: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x28c298u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28c29c:
    // 0x28c29c: 0x0  nop
    ctx->pc = 0x28c29cu;
    // NOP
label_28c2a0:
    // 0x28c2a0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x28c2a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28c2a4:
    // 0x28c2a4: 0x0  nop
    ctx->pc = 0x28c2a4u;
    // NOP
label_28c2a8:
    // 0x28c2a8: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_28c2ac:
    if (ctx->pc == 0x28C2ACu) {
        ctx->pc = 0x28C2B0u;
        goto label_28c2b0;
    }
    ctx->pc = 0x28C2A8u;
    {
        const bool branch_taken_0x28c2a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28c2a8) {
            ctx->pc = 0x28C2ECu;
            goto label_28c2ec;
        }
    }
    ctx->pc = 0x28C2B0u;
label_28c2b0:
    // 0x28c2b0: 0x8e24006c  lw          $a0, 0x6C($s1)
    ctx->pc = 0x28c2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_28c2b4:
    // 0x28c2b4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x28c2b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28c2b8:
    // 0x28c2b8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x28c2b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_28c2bc:
    // 0x28c2bc: 0x320f809  jalr        $t9
label_28c2c0:
    if (ctx->pc == 0x28C2C0u) {
        ctx->pc = 0x28C2C0u;
            // 0x28c2c0: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x28C2C4u;
        goto label_28c2c4;
    }
    ctx->pc = 0x28C2BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28C2C4u);
        ctx->pc = 0x28C2C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C2BCu;
            // 0x28c2c0: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28C2C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28C2C4u; }
            if (ctx->pc != 0x28C2C4u) { return; }
        }
        }
    }
    ctx->pc = 0x28C2C4u;
label_28c2c4:
    // 0x28c2c4: 0x8e24006c  lw          $a0, 0x6C($s1)
    ctx->pc = 0x28c2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_28c2c8:
    // 0x28c2c8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x28c2c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28c2cc:
    // 0x28c2cc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x28c2ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_28c2d0:
    // 0x28c2d0: 0x320f809  jalr        $t9
label_28c2d4:
    if (ctx->pc == 0x28C2D4u) {
        ctx->pc = 0x28C2D4u;
            // 0x28c2d4: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x28C2D8u;
        goto label_28c2d8;
    }
    ctx->pc = 0x28C2D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28C2D8u);
        ctx->pc = 0x28C2D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C2D0u;
            // 0x28c2d4: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28C2D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28C2D8u; }
            if (ctx->pc != 0x28C2D8u) { return; }
        }
        }
    }
    ctx->pc = 0x28C2D8u;
label_28c2d8:
    // 0x28c2d8: 0x8e24006c  lw          $a0, 0x6C($s1)
    ctx->pc = 0x28c2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_28c2dc:
    // 0x28c2dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x28c2dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28c2e0:
    // 0x28c2e0: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x28c2e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_28c2e4:
    // 0x28c2e4: 0x320f809  jalr        $t9
label_28c2e8:
    if (ctx->pc == 0x28C2E8u) {
        ctx->pc = 0x28C2ECu;
        goto label_28c2ec;
    }
    ctx->pc = 0x28C2E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28C2ECu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x28C2ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28C2ECu; }
            if (ctx->pc != 0x28C2ECu) { return; }
        }
        }
    }
    ctx->pc = 0x28C2ECu;
label_28c2ec:
    // 0x28c2ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28c2ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_28c2f0:
    // 0x28c2f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28c2f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28c2f4:
    // 0x28c2f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28c2f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_28c2f8:
    // 0x28c2f8: 0x3e00008  jr          $ra
label_28c2fc:
    if (ctx->pc == 0x28C2FCu) {
        ctx->pc = 0x28C2FCu;
            // 0x28c2fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x28C300u;
        goto label_fallthrough_0x28c2f8;
    }
    ctx->pc = 0x28C2F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28C2FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C2F8u;
            // 0x28c2fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x28c2f8:
    ctx->pc = 0x28C300u;
}
