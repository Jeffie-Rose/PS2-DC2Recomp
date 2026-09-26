#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: pcmCallback__FP7sceMpegP16sceMpegCbDataStrPv
// Address: 0x299720 - 0x2997f8
void pcmCallback__FP7sceMpegP16sceMpegCbDataStrPv_0x299720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("pcmCallback__FP7sceMpegP16sceMpegCbDataStrPv_0x299720");
#endif

    switch (ctx->pc) {
        case 0x299798u: goto label_299798;
        case 0x2997bcu: goto label_2997bc;
        case 0x2997d0u: goto label_2997d0;
        default: break;
    }

    ctx->pc = 0x299720u;

    // 0x299720: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x299720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x299724: 0x3c010005  lui         $at, 0x5
    ctx->pc = 0x299724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5 << 16));
    // 0x299728: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x299728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x29972c: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x29972cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x299730: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x299730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x299734: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x299734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x299738: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x299738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29973c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29973cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x299740: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x299740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x299744: 0x8c230008  lw          $v1, 0x8($at)
    ctx->pc = 0x299744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8)));
    // 0x299748: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x299748u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29974c: 0xc32021  addu        $a0, $a2, $v1
    ctx->pc = 0x29974cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x299750: 0x224102b  sltu        $v0, $s1, $a0
    ctx->pc = 0x299750u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x299754: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x299754u;
    {
        const bool branch_taken_0x299754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x299758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299754u;
            // 0x299758: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299754) {
            ctx->pc = 0x299760u;
            goto label_299760;
        }
    }
    ctx->pc = 0x29975Cu;
    // 0x29975c: 0x2238823  subu        $s1, $s1, $v1
    ctx->pc = 0x29975cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_299760:
    // 0x299760: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x299760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x299764: 0x919823  subu        $s3, $a0, $s1
    ctx->pc = 0x299764u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x299768: 0x2452fffc  addiu       $s2, $v0, -0x4
    ctx->pc = 0x299768u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x29976c: 0x253082a  slt         $at, $s2, $s3
    ctx->pc = 0x29976cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x299770: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x299770u;
    {
        const bool branch_taken_0x299770 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x299770) {
            ctx->pc = 0x29977Cu;
            goto label_29977c;
        }
    }
    ctx->pc = 0x299778u;
    // 0x299778: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x299778u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29977c:
    // 0x29977c: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x29977cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x299780: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x299780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x299784: 0x24845410  addiu       $a0, $a0, 0x5410
    ctx->pc = 0x299784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21520));
    // 0x299788: 0x27a60058  addiu       $a2, $sp, 0x58
    ctx->pc = 0x299788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x29978c: 0x27a70054  addiu       $a3, $sp, 0x54
    ctx->pc = 0x29978cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x299790: 0xc0a6f94  jal         func_29BE50
    ctx->pc = 0x299790u;
    SET_GPR_U32(ctx, 31, 0x299798u);
    ctx->pc = 0x299794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299790u;
            // 0x299794: 0x27a8005c  addiu       $t0, $sp, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29BE50u;
    if (runtime->hasFunction(0x29BE50u)) {
        auto targetFn = runtime->lookupFunction(0x29BE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299798u; }
        if (ctx->pc != 0x299798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        audioDecBeginPut__FP8AudioDecPPUcPiPPUcPi_0x29be50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299798u; }
        if (ctx->pc != 0x299798u) { return; }
    }
    ctx->pc = 0x299798u;
label_299798:
    // 0x299798: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x299798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29979c: 0x2535823  subu        $t3, $s2, $s3
    ctx->pc = 0x29979cu;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x2997a0: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x2997a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2997a4: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2997a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2997a8: 0x8fa60054  lw          $a2, 0x54($sp)
    ctx->pc = 0x2997a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x2997ac: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x2997acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2997b0: 0x8fa7005c  lw          $a3, 0x5C($sp)
    ctx->pc = 0x2997b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x2997b4: 0xc0a6f44  jal         func_29BD10
    ctx->pc = 0x2997B4u;
    SET_GPR_U32(ctx, 31, 0x2997BCu);
    ctx->pc = 0x2997B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2997B4u;
            // 0x2997b8: 0x200502d  daddu       $t2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29BD10u;
    if (runtime->hasFunction(0x29BD10u)) {
        auto targetFn = runtime->lookupFunction(0x29BD10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2997BCu; }
        if (ctx->pc != 0x2997BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cpy2area__FPUciPUciPUciPUci_0x29bd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2997BCu; }
        if (ctx->pc != 0x2997BCu) { return; }
    }
    ctx->pc = 0x2997BCu;
label_2997bc:
    // 0x2997bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2997bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2997c0: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x2997c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x2997c4: 0x24845410  addiu       $a0, $a0, 0x5410
    ctx->pc = 0x2997c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21520));
    // 0x2997c8: 0xc0a6fc4  jal         func_29BF10
    ctx->pc = 0x2997C8u;
    SET_GPR_U32(ctx, 31, 0x2997D0u);
    ctx->pc = 0x2997CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2997C8u;
            // 0x2997cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29BF10u;
    if (runtime->hasFunction(0x29BF10u)) {
        auto targetFn = runtime->lookupFunction(0x29BF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2997D0u; }
        if (ctx->pc != 0x2997D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        audioDecEndPut__FP8AudioDeci_0x29bf10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2997D0u; }
        if (ctx->pc != 0x2997D0u) { return; }
    }
    ctx->pc = 0x2997D0u;
label_2997d0:
    // 0x2997d0: 0x1a000002  blez        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2997D0u;
    {
        const bool branch_taken_0x2997d0 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2997D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2997D0u;
            // 0x2997d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2997d0) {
            ctx->pc = 0x2997DCu;
            goto label_2997dc;
        }
    }
    ctx->pc = 0x2997D8u;
    // 0x2997d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2997d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2997dc:
    // 0x2997dc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2997dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2997e0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2997e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2997e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2997e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2997e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2997e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2997ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2997ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2997f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2997F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2997F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2997F0u;
            // 0x2997f4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2997F8u;
}
