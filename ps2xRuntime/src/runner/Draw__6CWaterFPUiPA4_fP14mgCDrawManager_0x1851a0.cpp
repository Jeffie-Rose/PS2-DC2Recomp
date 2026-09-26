#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__6CWaterFPUiPA4_fP14mgCDrawManager
// Address: 0x1851a0 - 0x1852b8
void Draw__6CWaterFPUiPA4_fP14mgCDrawManager_0x1851a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__6CWaterFPUiPA4_fP14mgCDrawManager_0x1851a0");
#endif

    switch (ctx->pc) {
        case 0x1851a0u: goto label_1851a0;
        case 0x1851a4u: goto label_1851a4;
        case 0x1851a8u: goto label_1851a8;
        case 0x1851acu: goto label_1851ac;
        case 0x1851b0u: goto label_1851b0;
        case 0x1851b4u: goto label_1851b4;
        case 0x1851b8u: goto label_1851b8;
        case 0x1851bcu: goto label_1851bc;
        case 0x1851c0u: goto label_1851c0;
        case 0x1851c4u: goto label_1851c4;
        case 0x1851c8u: goto label_1851c8;
        case 0x1851ccu: goto label_1851cc;
        case 0x1851d0u: goto label_1851d0;
        case 0x1851d4u: goto label_1851d4;
        case 0x1851d8u: goto label_1851d8;
        case 0x1851dcu: goto label_1851dc;
        case 0x1851e0u: goto label_1851e0;
        case 0x1851e4u: goto label_1851e4;
        case 0x1851e8u: goto label_1851e8;
        case 0x1851ecu: goto label_1851ec;
        case 0x1851f0u: goto label_1851f0;
        case 0x1851f4u: goto label_1851f4;
        case 0x1851f8u: goto label_1851f8;
        case 0x1851fcu: goto label_1851fc;
        case 0x185200u: goto label_185200;
        case 0x185204u: goto label_185204;
        case 0x185208u: goto label_185208;
        case 0x18520cu: goto label_18520c;
        case 0x185210u: goto label_185210;
        case 0x185214u: goto label_185214;
        case 0x185218u: goto label_185218;
        case 0x18521cu: goto label_18521c;
        case 0x185220u: goto label_185220;
        case 0x185224u: goto label_185224;
        case 0x185228u: goto label_185228;
        case 0x18522cu: goto label_18522c;
        case 0x185230u: goto label_185230;
        case 0x185234u: goto label_185234;
        case 0x185238u: goto label_185238;
        case 0x18523cu: goto label_18523c;
        case 0x185240u: goto label_185240;
        case 0x185244u: goto label_185244;
        case 0x185248u: goto label_185248;
        case 0x18524cu: goto label_18524c;
        case 0x185250u: goto label_185250;
        case 0x185254u: goto label_185254;
        case 0x185258u: goto label_185258;
        case 0x18525cu: goto label_18525c;
        case 0x185260u: goto label_185260;
        case 0x185264u: goto label_185264;
        case 0x185268u: goto label_185268;
        case 0x18526cu: goto label_18526c;
        case 0x185270u: goto label_185270;
        case 0x185274u: goto label_185274;
        case 0x185278u: goto label_185278;
        case 0x18527cu: goto label_18527c;
        case 0x185280u: goto label_185280;
        case 0x185284u: goto label_185284;
        case 0x185288u: goto label_185288;
        case 0x18528cu: goto label_18528c;
        case 0x185290u: goto label_185290;
        case 0x185294u: goto label_185294;
        case 0x185298u: goto label_185298;
        case 0x18529cu: goto label_18529c;
        case 0x1852a0u: goto label_1852a0;
        case 0x1852a4u: goto label_1852a4;
        case 0x1852a8u: goto label_1852a8;
        case 0x1852acu: goto label_1852ac;
        case 0x1852b0u: goto label_1852b0;
        case 0x1852b4u: goto label_1852b4;
        default: break;
    }

    ctx->pc = 0x1851a0u;

label_1851a0:
    // 0x1851a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1851a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1851a4:
    // 0x1851a4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1851a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1851a8:
    // 0x1851a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1851a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1851ac:
    // 0x1851ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1851acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1851b0:
    // 0x1851b0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1851b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1851b4:
    // 0x1851b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1851b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1851b8:
    // 0x1851b8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1851b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1851bc:
    // 0x1851bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1851bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1851c0:
    // 0x1851c0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1851c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1851c4:
    // 0x1851c4: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
label_1851c8:
    if (ctx->pc == 0x1851C8u) {
        ctx->pc = 0x1851C8u;
            // 0x1851c8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x1851CCu;
        goto label_1851cc;
    }
    ctx->pc = 0x1851C4u;
    {
        const bool branch_taken_0x1851c4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1851C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1851C4u;
            // 0x1851c8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1851c4) {
            ctx->pc = 0x1851D4u;
            goto label_1851d4;
        }
    }
    ctx->pc = 0x1851CCu;
label_1851cc:
    // 0x1851cc: 0x3c070038  lui         $a3, 0x38
    ctx->pc = 0x1851ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)56 << 16));
label_1851d0:
    // 0x1851d0: 0x24e720e0  addiu       $a3, $a3, 0x20E0
    ctx->pc = 0x1851d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8416));
label_1851d4:
    // 0x1851d4: 0x8cf00064  lw          $s0, 0x64($a3)
    ctx->pc = 0x1851d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 100)));
label_1851d8:
    // 0x1851d8: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x1851d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1851dc:
    // 0x1851dc: 0x8ce20058  lw          $v0, 0x58($a3)
    ctx->pc = 0x1851dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 88)));
label_1851e0:
    // 0x1851e0: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x1851e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
label_1851e4:
    // 0x1851e4: 0x8cf10060  lw          $s1, 0x60($a3)
    ctx->pc = 0x1851e4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 96)));
label_1851e8:
    // 0x1851e8: 0xc04e714  jal         func_139C50
label_1851ec:
    if (ctx->pc == 0x1851ECu) {
        ctx->pc = 0x1851ECu;
            // 0x1851ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1851F0u;
        goto label_1851f0;
    }
    ctx->pc = 0x1851E8u;
    SET_GPR_U32(ctx, 31, 0x1851F0u);
    ctx->pc = 0x1851ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1851E8u;
            // 0x1851ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C50u;
    if (runtime->hasFunction(0x139C50u)) {
        auto targetFn = runtime->lookupFunction(0x139C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1851F0u; }
        if (ctx->pc != 0x1851F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAllocTest__9mgCMemoryFi_0x139c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1851F0u; }
        if (ctx->pc != 0x1851F0u) { return; }
    }
    ctx->pc = 0x1851F0u;
label_1851f0:
    // 0x1851f0: 0x8e99001c  lw          $t9, 0x1C($s4)
    ctx->pc = 0x1851f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_1851f4:
    // 0x1851f4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1851f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1851f8:
    // 0x1851f8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1851f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1851fc:
    // 0x1851fc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1851fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_185200:
    // 0x185200: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x185200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_185204:
    // 0x185204: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x185204u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_185208:
    // 0x185208: 0x320f809  jalr        $t9
label_18520c:
    if (ctx->pc == 0x18520Cu) {
        ctx->pc = 0x18520Cu;
            // 0x18520c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x185210u;
        goto label_185210;
    }
    ctx->pc = 0x185208u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x185210u);
        ctx->pc = 0x18520Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185208u;
            // 0x18520c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x185210u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x185210u; }
            if (ctx->pc != 0x185210u) { return; }
        }
        }
    }
    ctx->pc = 0x185210u;
label_185210:
    // 0x185210: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x185210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_185214:
    // 0x185214: 0xc04e748  jal         func_139D20
label_185218:
    if (ctx->pc == 0x185218u) {
        ctx->pc = 0x185218u;
            // 0x185218: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18521Cu;
        goto label_18521c;
    }
    ctx->pc = 0x185214u;
    SET_GPR_U32(ctx, 31, 0x18521Cu);
    ctx->pc = 0x185218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185214u;
            // 0x185218: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18521Cu; }
        if (ctx->pc != 0x18521Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18521Cu; }
        if (ctx->pc != 0x18521Cu) { return; }
    }
    ctx->pc = 0x18521Cu;
label_18521c:
    // 0x18521c: 0x1240001d  beqz        $s2, . + 4 + (0x1D << 2)
label_185220:
    if (ctx->pc == 0x185220u) {
        ctx->pc = 0x185220u;
            // 0x185220: 0x8e90002c  lw          $s0, 0x2C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
        ctx->pc = 0x185224u;
        goto label_185224;
    }
    ctx->pc = 0x18521Cu;
    {
        const bool branch_taken_0x18521c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x185220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18521Cu;
            // 0x185220: 0x8e90002c  lw          $s0, 0x2C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18521c) {
            ctx->pc = 0x185294u;
            goto label_185294;
        }
    }
    ctx->pc = 0x185224u;
label_185224:
    // 0x185224: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x185224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
label_185228:
    // 0x185228: 0x26510010  addiu       $s1, $s2, 0x10
    ctx->pc = 0x185228u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_18522c:
    // 0x18522c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x18522cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_185230:
    // 0x185230: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x185230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_185234:
    // 0x185234: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x185234u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
label_185238:
    // 0x185238: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x185238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_18523c:
    // 0x18523c: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x18523cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_185240:
    // 0x185240: 0xc0517a0  jal         func_145E80
label_185244:
    if (ctx->pc == 0x185244u) {
        ctx->pc = 0x185244u;
            // 0x185244: 0xae40000c  sw          $zero, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
        ctx->pc = 0x185248u;
        goto label_185248;
    }
    ctx->pc = 0x185240u;
    SET_GPR_U32(ctx, 31, 0x185248u);
    ctx->pc = 0x185244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185240u;
            // 0x185244: 0xae40000c  sw          $zero, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145E80u;
    if (runtime->hasFunction(0x145E80u)) {
        auto targetFn = runtime->lookupFunction(0x145E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185248u; }
        if (ctx->pc != 0x185248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSendVuProg__FPUii_0x145e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185248u; }
        if (ctx->pc != 0x185248u) { return; }
    }
    ctx->pc = 0x185248u;
label_185248:
    // 0x185248: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x185248u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_18524c:
    // 0x18524c: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x18524cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
label_185250:
    // 0x185250: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x185250u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_185254:
    // 0x185254: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x185254u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_185258:
    // 0x185258: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x185258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_18525c:
    // 0x18525c: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x18525cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_185260:
    // 0x185260: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x185260u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_185264:
    // 0x185264: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x185264u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_185268:
    // 0x185268: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x185268u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
label_18526c:
    // 0x18526c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_185270:
    if (ctx->pc == 0x185270u) {
        ctx->pc = 0x185270u;
            // 0x185270: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->pc = 0x185274u;
        goto label_185274;
    }
    ctx->pc = 0x18526Cu;
    {
        const bool branch_taken_0x18526c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x185270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18526Cu;
            // 0x185270: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18526c) {
            ctx->pc = 0x18527Cu;
            goto label_18527c;
        }
    }
    ctx->pc = 0x185274u;
label_185274:
    // 0x185274: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x185274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_185278:
    // 0x185278: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x185278u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
label_18527c:
    // 0x18527c: 0x4610006  bgez        $v1, . + 4 + (0x6 << 2)
label_185280:
    if (ctx->pc == 0x185280u) {
        ctx->pc = 0x185280u;
            // 0x185280: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->pc = 0x185284u;
        goto label_185284;
    }
    ctx->pc = 0x18527Cu;
    {
        const bool branch_taken_0x18527c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x185280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18527Cu;
            // 0x185280: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18527c) {
            ctx->pc = 0x185298u;
            goto label_185298;
        }
    }
    ctx->pc = 0x185284u;
label_185284:
    // 0x185284: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x185284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
label_185288:
    // 0x185288: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x185288u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_18528c:
    // 0x18528c: 0x10000003  b           . + 4 + (0x3 << 2)
label_185290:
    if (ctx->pc == 0x185290u) {
        ctx->pc = 0x185290u;
            // 0x185290: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x185294u;
        goto label_185294;
    }
    ctx->pc = 0x18528Cu;
    {
        const bool branch_taken_0x18528c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18528Cu;
            // 0x185290: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18528c) {
            ctx->pc = 0x18529Cu;
            goto label_18529c;
        }
    }
    ctx->pc = 0x185294u;
label_185294:
    // 0x185294: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x185294u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_185298:
    // 0x185298: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x185298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_18529c:
    // 0x18529c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18529cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1852a0:
    // 0x1852a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1852a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1852a4:
    // 0x1852a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1852a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1852a8:
    // 0x1852a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1852a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1852ac:
    // 0x1852ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1852acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1852b0:
    // 0x1852b0: 0x3e00008  jr          $ra
label_1852b4:
    if (ctx->pc == 0x1852B4u) {
        ctx->pc = 0x1852B4u;
            // 0x1852b4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1852B8u;
        goto label_fallthrough_0x1852b0;
    }
    ctx->pc = 0x1852B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1852B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1852B0u;
            // 0x1852b4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1852b0:
    ctx->pc = 0x1852B8u;
}
