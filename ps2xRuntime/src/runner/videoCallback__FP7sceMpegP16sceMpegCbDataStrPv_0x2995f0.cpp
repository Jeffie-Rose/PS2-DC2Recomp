#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: videoCallback__FP7sceMpegP16sceMpegCbDataStrPv
// Address: 0x2995f0 - 0x299718
void videoCallback__FP7sceMpegP16sceMpegCbDataStrPv_0x2995f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("videoCallback__FP7sceMpegP16sceMpegCbDataStrPv_0x2995f0");
#endif

    switch (ctx->pc) {
        case 0x29965cu: goto label_29965c;
        case 0x2996a0u: goto label_2996a0;
        case 0x2996c8u: goto label_2996c8;
        case 0x2996dcu: goto label_2996dc;
        case 0x2996ecu: goto label_2996ec;
        default: break;
    }

    ctx->pc = 0x2995f0u;

    // 0x2995f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2995f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2995f4: 0x3c010005  lui         $at, 0x5
    ctx->pc = 0x2995f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5 << 16));
    // 0x2995f8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2995f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2995fc: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x2995fcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x299600: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x299600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x299604: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x299604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x299608: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x299608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29960c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29960cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x299610: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x299610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x299614: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x299614u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299618: 0x8c220008  lw          $v0, 0x8($at)
    ctx->pc = 0x299618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8)));
    // 0x29961c: 0x8cb30008  lw          $s3, 0x8($a1)
    ctx->pc = 0x29961cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x299620: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x299620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x299624: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x299624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x299628: 0x53a023  subu        $s4, $v0, $s3
    ctx->pc = 0x299628u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x29962c: 0x74082b  sltu        $at, $v1, $s4
    ctx->pc = 0x29962cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x299630: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x299630u;
    {
        const bool branch_taken_0x299630 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x299634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299630u;
            // 0x299634: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299630) {
            ctx->pc = 0x29963Cu;
            goto label_29963c;
        }
    }
    ctx->pc = 0x299638u;
    // 0x299638: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x299638u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_29963c:
    // 0x29963c: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x29963cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x299640: 0x749023  subu        $s2, $v1, $s4
    ctx->pc = 0x299640u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x299644: 0x24845350  addiu       $a0, $a0, 0x5350
    ctx->pc = 0x299644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21328));
    // 0x299648: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x299648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x29964c: 0x27a60068  addiu       $a2, $sp, 0x68
    ctx->pc = 0x29964cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x299650: 0x27a70064  addiu       $a3, $sp, 0x64
    ctx->pc = 0x299650u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x299654: 0xc0a6f2c  jal         func_29BCB0
    ctx->pc = 0x299654u;
    SET_GPR_U32(ctx, 31, 0x29965Cu);
    ctx->pc = 0x299658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299654u;
            // 0x299658: 0x27a8006c  addiu       $t0, $sp, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29BCB0u;
    if (runtime->hasFunction(0x29BCB0u)) {
        auto targetFn = runtime->lookupFunction(0x29BCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29965Cu; }
        if (ctx->pc != 0x29965Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        videoDecBeginPut__FP8VideoDecPPUcPiPPUcPi_0x29bcb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29965Cu; }
        if (ctx->pc != 0x29965Cu) { return; }
    }
    ctx->pc = 0x29965Cu;
label_29965c:
    // 0x29965c: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x29965cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x299660: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x299660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x299664: 0x3446ffff  ori         $a2, $v0, 0xFFFF
    ctx->pc = 0x299664u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x299668: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x299668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x29966c: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x29966cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x299670: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x299670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x299674: 0x8fa7006c  lw          $a3, 0x6C($sp)
    ctx->pc = 0x299674u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x299678: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x299678u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29967c: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x29967cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299680: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x299680u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299684: 0x240582d  daddu       $t3, $s2, $zero
    ctx->pc = 0x299684u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299688: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x299688u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x29968c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x29968cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x299690: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x299690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x299694: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x299694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x299698: 0xc0a6f44  jal         func_29BD10
    ctx->pc = 0x299698u;
    SET_GPR_U32(ctx, 31, 0x2996A0u);
    ctx->pc = 0x29969Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299698u;
            // 0x29969c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29BD10u;
    if (runtime->hasFunction(0x29BD10u)) {
        auto targetFn = runtime->lookupFunction(0x29BD10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2996A0u; }
        if (ctx->pc != 0x2996A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cpy2area__FPUciPUciPUciPUci_0x29bd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2996A0u; }
        if (ctx->pc != 0x2996A0u) { return; }
    }
    ctx->pc = 0x2996A0u;
label_2996a0:
    // 0x2996a0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2996a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2996a4: 0x1a20000d  blez        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x2996A4u;
    {
        const bool branch_taken_0x2996a4 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x2996a4) {
            ctx->pc = 0x2996DCu;
            goto label_2996dc;
        }
    }
    ctx->pc = 0x2996ACu;
    // 0x2996ac: 0xde050010  ld          $a1, 0x10($s0)
    ctx->pc = 0x2996acu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2996b0: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x2996b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x2996b4: 0xde060018  ld          $a2, 0x18($s0)
    ctx->pc = 0x2996b4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2996b8: 0x24845350  addiu       $a0, $a0, 0x5350
    ctx->pc = 0x2996b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21328));
    // 0x2996bc: 0x8fa70060  lw          $a3, 0x60($sp)
    ctx->pc = 0x2996bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2996c0: 0xc0a6f30  jal         func_29BCC0
    ctx->pc = 0x2996C0u;
    SET_GPR_U32(ctx, 31, 0x2996C8u);
    ctx->pc = 0x2996C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2996C0u;
            // 0x2996c4: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29BCC0u;
    if (runtime->hasFunction(0x29BCC0u)) {
        auto targetFn = runtime->lookupFunction(0x29BCC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2996C8u; }
        if (ctx->pc != 0x2996C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        videoDecPutTs__FP8VideoDecllPUci_0x29bcc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2996C8u; }
        if (ctx->pc != 0x2996C8u) { return; }
    }
    ctx->pc = 0x2996C8u;
label_2996c8:
    // 0x2996c8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2996C8u;
    {
        const bool branch_taken_0x2996c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2996c8) {
            ctx->pc = 0x2996DCu;
            goto label_2996dc;
        }
    }
    ctx->pc = 0x2996D0u;
    // 0x2996d0: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2996d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2996d4: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x2996D4u;
    SET_GPR_U32(ctx, 31, 0x2996DCu);
    ctx->pc = 0x2996D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2996D4u;
            // 0x2996d8: 0x2484ddf0  addiu       $a0, $a0, -0x2210 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2996DCu; }
        if (ctx->pc != 0x2996DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2996DCu; }
        if (ctx->pc != 0x2996DCu) { return; }
    }
    ctx->pc = 0x2996DCu;
label_2996dc:
    // 0x2996dc: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x2996dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x2996e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2996e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2996e4: 0xc0a6f40  jal         func_29BD00
    ctx->pc = 0x2996E4u;
    SET_GPR_U32(ctx, 31, 0x2996ECu);
    ctx->pc = 0x2996E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2996E4u;
            // 0x2996e8: 0x24845350  addiu       $a0, $a0, 0x5350 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29BD00u;
    if (runtime->hasFunction(0x29BD00u)) {
        auto targetFn = runtime->lookupFunction(0x29BD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2996ECu; }
        if (ctx->pc != 0x2996ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        videoDecEndPut__FP8VideoDeci_0x29bd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2996ECu; }
        if (ctx->pc != 0x2996ECu) { return; }
    }
    ctx->pc = 0x2996ECu;
label_2996ec:
    // 0x2996ec: 0x1a200002  blez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2996ECu;
    {
        const bool branch_taken_0x2996ec = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x2996F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2996ECu;
            // 0x2996f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2996ec) {
            ctx->pc = 0x2996F8u;
            goto label_2996f8;
        }
    }
    ctx->pc = 0x2996F4u;
    // 0x2996f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2996f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2996f8:
    // 0x2996f8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2996f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2996fc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2996fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x299700: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x299700u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x299704: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x299704u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x299708: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x299708u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29970c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29970cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299710: 0x3e00008  jr          $ra
    ctx->pc = 0x299710u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299710u;
            // 0x299714: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x299718u;
}
