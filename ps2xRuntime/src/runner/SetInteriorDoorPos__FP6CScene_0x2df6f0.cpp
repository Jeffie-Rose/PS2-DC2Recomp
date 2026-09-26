#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetInteriorDoorPos__FP6CScene
// Address: 0x2df6f0 - 0x2df8c4
void SetInteriorDoorPos__FP6CScene_0x2df6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetInteriorDoorPos__FP6CScene_0x2df6f0");
#endif

    switch (ctx->pc) {
        case 0x2df6f0u: goto label_2df6f0;
        case 0x2df6f4u: goto label_2df6f4;
        case 0x2df6f8u: goto label_2df6f8;
        case 0x2df6fcu: goto label_2df6fc;
        case 0x2df700u: goto label_2df700;
        case 0x2df704u: goto label_2df704;
        case 0x2df708u: goto label_2df708;
        case 0x2df70cu: goto label_2df70c;
        case 0x2df710u: goto label_2df710;
        case 0x2df714u: goto label_2df714;
        case 0x2df718u: goto label_2df718;
        case 0x2df71cu: goto label_2df71c;
        case 0x2df720u: goto label_2df720;
        case 0x2df724u: goto label_2df724;
        case 0x2df728u: goto label_2df728;
        case 0x2df72cu: goto label_2df72c;
        case 0x2df730u: goto label_2df730;
        case 0x2df734u: goto label_2df734;
        case 0x2df738u: goto label_2df738;
        case 0x2df73cu: goto label_2df73c;
        case 0x2df740u: goto label_2df740;
        case 0x2df744u: goto label_2df744;
        case 0x2df748u: goto label_2df748;
        case 0x2df74cu: goto label_2df74c;
        case 0x2df750u: goto label_2df750;
        case 0x2df754u: goto label_2df754;
        case 0x2df758u: goto label_2df758;
        case 0x2df75cu: goto label_2df75c;
        case 0x2df760u: goto label_2df760;
        case 0x2df764u: goto label_2df764;
        case 0x2df768u: goto label_2df768;
        case 0x2df76cu: goto label_2df76c;
        case 0x2df770u: goto label_2df770;
        case 0x2df774u: goto label_2df774;
        case 0x2df778u: goto label_2df778;
        case 0x2df77cu: goto label_2df77c;
        case 0x2df780u: goto label_2df780;
        case 0x2df784u: goto label_2df784;
        case 0x2df788u: goto label_2df788;
        case 0x2df78cu: goto label_2df78c;
        case 0x2df790u: goto label_2df790;
        case 0x2df794u: goto label_2df794;
        case 0x2df798u: goto label_2df798;
        case 0x2df79cu: goto label_2df79c;
        case 0x2df7a0u: goto label_2df7a0;
        case 0x2df7a4u: goto label_2df7a4;
        case 0x2df7a8u: goto label_2df7a8;
        case 0x2df7acu: goto label_2df7ac;
        case 0x2df7b0u: goto label_2df7b0;
        case 0x2df7b4u: goto label_2df7b4;
        case 0x2df7b8u: goto label_2df7b8;
        case 0x2df7bcu: goto label_2df7bc;
        case 0x2df7c0u: goto label_2df7c0;
        case 0x2df7c4u: goto label_2df7c4;
        case 0x2df7c8u: goto label_2df7c8;
        case 0x2df7ccu: goto label_2df7cc;
        case 0x2df7d0u: goto label_2df7d0;
        case 0x2df7d4u: goto label_2df7d4;
        case 0x2df7d8u: goto label_2df7d8;
        case 0x2df7dcu: goto label_2df7dc;
        case 0x2df7e0u: goto label_2df7e0;
        case 0x2df7e4u: goto label_2df7e4;
        case 0x2df7e8u: goto label_2df7e8;
        case 0x2df7ecu: goto label_2df7ec;
        case 0x2df7f0u: goto label_2df7f0;
        case 0x2df7f4u: goto label_2df7f4;
        case 0x2df7f8u: goto label_2df7f8;
        case 0x2df7fcu: goto label_2df7fc;
        case 0x2df800u: goto label_2df800;
        case 0x2df804u: goto label_2df804;
        case 0x2df808u: goto label_2df808;
        case 0x2df80cu: goto label_2df80c;
        case 0x2df810u: goto label_2df810;
        case 0x2df814u: goto label_2df814;
        case 0x2df818u: goto label_2df818;
        case 0x2df81cu: goto label_2df81c;
        case 0x2df820u: goto label_2df820;
        case 0x2df824u: goto label_2df824;
        case 0x2df828u: goto label_2df828;
        case 0x2df82cu: goto label_2df82c;
        case 0x2df830u: goto label_2df830;
        case 0x2df834u: goto label_2df834;
        case 0x2df838u: goto label_2df838;
        case 0x2df83cu: goto label_2df83c;
        case 0x2df840u: goto label_2df840;
        case 0x2df844u: goto label_2df844;
        case 0x2df848u: goto label_2df848;
        case 0x2df84cu: goto label_2df84c;
        case 0x2df850u: goto label_2df850;
        case 0x2df854u: goto label_2df854;
        case 0x2df858u: goto label_2df858;
        case 0x2df85cu: goto label_2df85c;
        case 0x2df860u: goto label_2df860;
        case 0x2df864u: goto label_2df864;
        case 0x2df868u: goto label_2df868;
        case 0x2df86cu: goto label_2df86c;
        case 0x2df870u: goto label_2df870;
        case 0x2df874u: goto label_2df874;
        case 0x2df878u: goto label_2df878;
        case 0x2df87cu: goto label_2df87c;
        case 0x2df880u: goto label_2df880;
        case 0x2df884u: goto label_2df884;
        case 0x2df888u: goto label_2df888;
        case 0x2df88cu: goto label_2df88c;
        case 0x2df890u: goto label_2df890;
        case 0x2df894u: goto label_2df894;
        case 0x2df898u: goto label_2df898;
        case 0x2df89cu: goto label_2df89c;
        case 0x2df8a0u: goto label_2df8a0;
        case 0x2df8a4u: goto label_2df8a4;
        case 0x2df8a8u: goto label_2df8a8;
        case 0x2df8acu: goto label_2df8ac;
        case 0x2df8b0u: goto label_2df8b0;
        case 0x2df8b4u: goto label_2df8b4;
        case 0x2df8b8u: goto label_2df8b8;
        case 0x2df8bcu: goto label_2df8bc;
        case 0x2df8c0u: goto label_2df8c0;
        default: break;
    }

    ctx->pc = 0x2df6f0u;

label_2df6f0:
    // 0x2df6f0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2df6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_2df6f4:
    // 0x2df6f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2df6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2df6f8:
    // 0x2df6f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2df6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2df6fc:
    // 0x2df6fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2df6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2df700:
    // 0x2df700: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2df700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2df704:
    // 0x2df704: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2df704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2df708:
    // 0x2df708: 0x8c852e5c  lw          $a1, 0x2E5C($a0)
    ctx->pc = 0x2df708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
label_2df70c:
    // 0x2df70c: 0xc0a0f58  jal         func_283D60
label_2df710:
    if (ctx->pc == 0x2DF710u) {
        ctx->pc = 0x2DF710u;
            // 0x2df710: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DF714u;
        goto label_2df714;
    }
    ctx->pc = 0x2DF70Cu;
    SET_GPR_U32(ctx, 31, 0x2DF714u);
    ctx->pc = 0x2DF710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF70Cu;
            // 0x2df710: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF714u; }
        if (ctx->pc != 0x2DF714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF714u; }
        if (ctx->pc != 0x2DF714u) { return; }
    }
    ctx->pc = 0x2DF714u;
label_2df714:
    // 0x2df714: 0x8e652e50  lw          $a1, 0x2E50($s3)
    ctx->pc = 0x2df714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11856)));
label_2df718:
    // 0x2df718: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2df718u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2df71c:
    // 0x2df71c: 0xc0a0ed8  jal         func_283B60
label_2df720:
    if (ctx->pc == 0x2DF720u) {
        ctx->pc = 0x2DF720u;
            // 0x2df720: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DF724u;
        goto label_2df724;
    }
    ctx->pc = 0x2DF71Cu;
    SET_GPR_U32(ctx, 31, 0x2DF724u);
    ctx->pc = 0x2DF720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF71Cu;
            // 0x2df720: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF724u; }
        if (ctx->pc != 0x2DF724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF724u; }
        if (ctx->pc != 0x2DF724u) { return; }
    }
    ctx->pc = 0x2DF724u;
label_2df724:
    // 0x2df724: 0x12200060  beqz        $s1, . + 4 + (0x60 << 2)
label_2df728:
    if (ctx->pc == 0x2DF728u) {
        ctx->pc = 0x2DF728u;
            // 0x2df728: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DF72Cu;
        goto label_2df72c;
    }
    ctx->pc = 0x2DF724u;
    {
        const bool branch_taken_0x2df724 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF724u;
            // 0x2df728: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df724) {
            ctx->pc = 0x2DF8A8u;
            goto label_2df8a8;
        }
    }
    ctx->pc = 0x2DF72Cu;
label_2df72c:
    // 0x2df72c: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
label_2df730:
    if (ctx->pc == 0x2DF730u) {
        ctx->pc = 0x2DF734u;
        goto label_2df734;
    }
    ctx->pc = 0x2DF72Cu;
    {
        const bool branch_taken_0x2df72c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2df72c) {
            ctx->pc = 0x2DF73Cu;
            goto label_2df73c;
        }
    }
    ctx->pc = 0x2DF734u;
label_2df734:
    // 0x2df734: 0x1000005d  b           . + 4 + (0x5D << 2)
label_2df738:
    if (ctx->pc == 0x2DF738u) {
        ctx->pc = 0x2DF738u;
            // 0x2df738: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x2DF73Cu;
        goto label_2df73c;
    }
    ctx->pc = 0x2DF734u;
    {
        const bool branch_taken_0x2df734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF734u;
            // 0x2df738: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df734) {
            ctx->pc = 0x2DF8ACu;
            goto label_2df8ac;
        }
    }
    ctx->pc = 0x2DF73Cu;
label_2df73c:
    // 0x2df73c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2df73cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_2df740:
    // 0x2df740: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2df740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2df744:
    // 0x2df744: 0x244271a0  addiu       $v0, $v0, 0x71A0
    ctx->pc = 0x2df744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29088));
label_2df748:
    // 0x2df748: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2df748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2df74c:
    // 0x2df74c: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x2df74cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2df750:
    // 0x2df750: 0x78450010  lq          $a1, 0x10($v0)
    ctx->pc = 0x2df750u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_2df754:
    // 0x2df754: 0x78430020  lq          $v1, 0x20($v0)
    ctx->pc = 0x2df754u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_2df758:
    // 0x2df758: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x2df758u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_2df75c:
    // 0x2df75c: 0x7c860000  sq          $a2, 0x0($a0)
    ctx->pc = 0x2df75cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 6));
label_2df760:
    // 0x2df760: 0x7c850010  sq          $a1, 0x10($a0)
    ctx->pc = 0x2df760u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 5));
label_2df764:
    // 0x2df764: 0x7c830020  sq          $v1, 0x20($a0)
    ctx->pc = 0x2df764u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 3));
label_2df768:
    // 0x2df768: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x2df768u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
label_2df76c:
    // 0x2df76c: 0x80228e90  lb          $v0, -0x7170($at)
    ctx->pc = 0x2df76cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294938256)));
label_2df770:
    // 0x2df770: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2df774:
    if (ctx->pc == 0x2DF774u) {
        ctx->pc = 0x2DF778u;
        goto label_2df778;
    }
    ctx->pc = 0x2DF770u;
    {
        const bool branch_taken_0x2df770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df770) {
            ctx->pc = 0x2DF784u;
            goto label_2df784;
        }
    }
    ctx->pc = 0x2DF778u;
label_2df778:
    // 0x2df778: 0x3c0501f6  lui         $a1, 0x1F6
    ctx->pc = 0x2df778u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
label_2df77c:
    // 0x2df77c: 0xc04a3dc  jal         func_128F70
label_2df780:
    if (ctx->pc == 0x2DF780u) {
        ctx->pc = 0x2DF780u;
            // 0x2df780: 0x24a58e90  addiu       $a1, $a1, -0x7170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938256));
        ctx->pc = 0x2DF784u;
        goto label_2df784;
    }
    ctx->pc = 0x2DF77Cu;
    SET_GPR_U32(ctx, 31, 0x2DF784u);
    ctx->pc = 0x2DF780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF77Cu;
            // 0x2df780: 0x24a58e90  addiu       $a1, $a1, -0x7170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF784u; }
        if (ctx->pc != 0x2DF784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF784u; }
        if (ctx->pc != 0x2DF784u) { return; }
    }
    ctx->pc = 0x2DF784u;
label_2df784:
    // 0x2df784: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2df784u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2df788:
    // 0x2df788: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2df788u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2df78c:
    // 0x2df78c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2df78cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2df790:
    // 0x2df790: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2df790u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2df794:
    // 0x2df794: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x2df794u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_2df798:
    // 0x2df798: 0x320f809  jalr        $t9
label_2df79c:
    if (ctx->pc == 0x2DF79Cu) {
        ctx->pc = 0x2DF79Cu;
            // 0x2df79c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2DF7A0u;
        goto label_2df7a0;
    }
    ctx->pc = 0x2DF798u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DF7A0u);
        ctx->pc = 0x2DF79Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF798u;
            // 0x2df79c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DF7A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DF7A0u; }
            if (ctx->pc != 0x2DF7A0u) { return; }
        }
        }
    }
    ctx->pc = 0x2DF7A0u;
label_2df7a0:
    // 0x2df7a0: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2df7a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2df7a4:
    // 0x2df7a4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2df7a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2df7a8:
    // 0x2df7a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2df7a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2df7ac:
    // 0x2df7ac: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2df7acu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2df7b0:
    // 0x2df7b0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2df7b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2df7b4:
    // 0x2df7b4: 0x320f809  jalr        $t9
label_2df7b8:
    if (ctx->pc == 0x2DF7B8u) {
        ctx->pc = 0x2DF7B8u;
            // 0x2df7b8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2DF7BCu;
        goto label_2df7bc;
    }
    ctx->pc = 0x2DF7B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DF7BCu);
        ctx->pc = 0x2DF7B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF7B4u;
            // 0x2df7b8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DF7BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DF7BCu; }
            if (ctx->pc != 0x2DF7BCu) { return; }
        }
        }
    }
    ctx->pc = 0x2DF7BCu;
label_2df7bc:
    // 0x2df7bc: 0x26240cb0  addiu       $a0, $s1, 0xCB0
    ctx->pc = 0x2df7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3248));
label_2df7c0:
    // 0x2df7c0: 0xc0a761c  jal         func_29D870
label_2df7c4:
    if (ctx->pc == 0x2DF7C4u) {
        ctx->pc = 0x2DF7C4u;
            // 0x2df7c4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x2DF7C8u;
        goto label_2df7c8;
    }
    ctx->pc = 0x2DF7C0u;
    SET_GPR_U32(ctx, 31, 0x2DF7C8u);
    ctx->pc = 0x2DF7C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF7C0u;
            // 0x2df7c4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D870u;
    if (runtime->hasFunction(0x29D870u)) {
        auto targetFn = runtime->lookupFunction(0x29D870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF7C8u; }
        if (ctx->pc != 0x2DF7C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStart__14CFuncPointMngrFi_0x29d870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF7C8u; }
        if (ctx->pc != 0x2DF7C8u) { return; }
    }
    ctx->pc = 0x2DF7C8u;
label_2df7c8:
    // 0x2df7c8: 0xc0a762c  jal         func_29D8B0
label_2df7cc:
    if (ctx->pc == 0x2DF7CCu) {
        ctx->pc = 0x2DF7CCu;
            // 0x2df7cc: 0x26240cb0  addiu       $a0, $s1, 0xCB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3248));
        ctx->pc = 0x2DF7D0u;
        goto label_2df7d0;
    }
    ctx->pc = 0x2DF7C8u;
    SET_GPR_U32(ctx, 31, 0x2DF7D0u);
    ctx->pc = 0x2DF7CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF7C8u;
            // 0x2df7cc: 0x26240cb0  addiu       $a0, $s1, 0xCB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8B0u;
    if (runtime->hasFunction(0x29D8B0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF7D0u; }
        if (ctx->pc != 0x2DF7D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Get__14CFuncPointMngrFv_0x29d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF7D0u; }
        if (ctx->pc != 0x2DF7D0u) { return; }
    }
    ctx->pc = 0x2DF7D0u;
label_2df7d0:
    // 0x2df7d0: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_2df7d4:
    if (ctx->pc == 0x2DF7D4u) {
        ctx->pc = 0x2DF7D4u;
            // 0x2df7d4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DF7D8u;
        goto label_2df7d8;
    }
    ctx->pc = 0x2DF7D0u;
    {
        const bool branch_taken_0x2df7d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF7D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF7D0u;
            // 0x2df7d4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df7d0) {
            ctx->pc = 0x2DF8A8u;
            goto label_2df8a8;
        }
    }
    ctx->pc = 0x2DF7D8u;
label_2df7d8:
    // 0x2df7d8: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2df7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2df7dc:
    // 0x2df7dc: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2df7dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_2df7e0:
    // 0x2df7e0: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_2df7e4:
    if (ctx->pc == 0x2DF7E4u) {
        ctx->pc = 0x2DF7E4u;
            // 0x2df7e4: 0x26240cb0  addiu       $a0, $s1, 0xCB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3248));
        ctx->pc = 0x2DF7E8u;
        goto label_2df7e8;
    }
    ctx->pc = 0x2DF7E0u;
    {
        const bool branch_taken_0x2df7e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF7E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF7E0u;
            // 0x2df7e4: 0x26240cb0  addiu       $a0, $s1, 0xCB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df7e0) {
            ctx->pc = 0x2DF898u;
            goto label_2df898;
        }
    }
    ctx->pc = 0x2DF7E8u;
label_2df7e8:
    // 0x2df7e8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2df7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2df7ec:
    // 0x2df7ec: 0xc04a38a  jal         func_128E28
label_2df7f0:
    if (ctx->pc == 0x2DF7F0u) {
        ctx->pc = 0x2DF7F0u;
            // 0x2df7f0: 0x26050038  addiu       $a1, $s0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
        ctx->pc = 0x2DF7F4u;
        goto label_2df7f4;
    }
    ctx->pc = 0x2DF7ECu;
    SET_GPR_U32(ctx, 31, 0x2DF7F4u);
    ctx->pc = 0x2DF7F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF7ECu;
            // 0x2df7f0: 0x26050038  addiu       $a1, $s0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF7F4u; }
        if (ctx->pc != 0x2DF7F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF7F4u; }
        if (ctx->pc != 0x2DF7F4u) { return; }
    }
    ctx->pc = 0x2DF7F4u;
label_2df7f4:
    // 0x2df7f4: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
label_2df7f8:
    if (ctx->pc == 0x2DF7F8u) {
        ctx->pc = 0x2DF7FCu;
        goto label_2df7fc;
    }
    ctx->pc = 0x2DF7F4u;
    {
        const bool branch_taken_0x2df7f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2df7f4) {
            ctx->pc = 0x2DF894u;
            goto label_2df894;
        }
    }
    ctx->pc = 0x2DF7FCu;
label_2df7fc:
    // 0x2df7fc: 0x7a050180  lq          $a1, 0x180($s0)
    ctx->pc = 0x2df7fcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 16), 384)));
label_2df800:
    // 0x2df800: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2df800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_2df804:
    // 0x2df804: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2df804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_2df808:
    // 0x2df808: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2df808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2df80c:
    // 0x2df80c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2df80cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2df810:
    // 0x2df810: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x2df810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2df814:
    // 0x2df814: 0x27b100a4  addiu       $s1, $sp, 0xA4
    ctx->pc = 0x2df814u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
label_2df818:
    // 0x2df818: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x2df818u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
label_2df81c:
    // 0x2df81c: 0x7a020190  lq          $v0, 0x190($s0)
    ctx->pc = 0x2df81cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 400)));
label_2df820:
    // 0x2df820: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2df820u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_2df824:
    // 0x2df824: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x2df824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
label_2df828:
    // 0x2df828: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x2df828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
label_2df82c:
    // 0x2df82c: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2df82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2df830:
    // 0x2df830: 0xc04c374  jal         func_130DD0
label_2df834:
    if (ctx->pc == 0x2DF834u) {
        ctx->pc = 0x2DF834u;
            // 0x2df834: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x2DF838u;
        goto label_2df838;
    }
    ctx->pc = 0x2DF830u;
    SET_GPR_U32(ctx, 31, 0x2DF838u);
    ctx->pc = 0x2DF834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF830u;
            // 0x2df834: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF838u; }
        if (ctx->pc != 0x2DF838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF838u; }
        if (ctx->pc != 0x2DF838u) { return; }
    }
    ctx->pc = 0x2DF838u;
label_2df838:
    // 0x2df838: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2df838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_2df83c:
    // 0x2df83c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2df83cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2df840:
    // 0x2df840: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2df840u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2df844:
    // 0x2df844: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2df844u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2df848:
    // 0x2df848: 0x320f809  jalr        $t9
label_2df84c:
    if (ctx->pc == 0x2DF84Cu) {
        ctx->pc = 0x2DF84Cu;
            // 0x2df84c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x2DF850u;
        goto label_2df850;
    }
    ctx->pc = 0x2DF848u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DF850u);
        ctx->pc = 0x2DF84Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF848u;
            // 0x2df84c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DF850u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DF850u; }
            if (ctx->pc != 0x2DF850u) { return; }
        }
        }
    }
    ctx->pc = 0x2DF850u;
label_2df850:
    // 0x2df850: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2df850u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2df854:
    // 0x2df854: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2df854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2df858:
    // 0x2df858: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x2df858u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_2df85c:
    // 0x2df85c: 0x320f809  jalr        $t9
label_2df860:
    if (ctx->pc == 0x2DF860u) {
        ctx->pc = 0x2DF860u;
            // 0x2df860: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x2DF864u;
        goto label_2df864;
    }
    ctx->pc = 0x2DF85Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DF864u);
        ctx->pc = 0x2DF860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF85Cu;
            // 0x2df860: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DF864u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DF864u; }
            if (ctx->pc != 0x2DF864u) { return; }
        }
        }
    }
    ctx->pc = 0x2DF864u;
label_2df864:
    // 0x2df864: 0x8e652e54  lw          $a1, 0x2E54($s3)
    ctx->pc = 0x2df864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11860)));
label_2df868:
    // 0x2df868: 0xc0a0e30  jal         func_2838C0
label_2df86c:
    if (ctx->pc == 0x2DF86Cu) {
        ctx->pc = 0x2DF86Cu;
            // 0x2df86c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DF870u;
        goto label_2df870;
    }
    ctx->pc = 0x2DF868u;
    SET_GPR_U32(ctx, 31, 0x2DF870u);
    ctx->pc = 0x2DF86Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF868u;
            // 0x2df86c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF870u; }
        if (ctx->pc != 0x2DF870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF870u; }
        if (ctx->pc != 0x2DF870u) { return; }
    }
    ctx->pc = 0x2DF870u;
label_2df870:
    // 0x2df870: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2df870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2df874:
    // 0x2df874: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_2df878:
    if (ctx->pc == 0x2DF878u) {
        ctx->pc = 0x2DF87Cu;
        goto label_2df87c;
    }
    ctx->pc = 0x2DF874u;
    {
        const bool branch_taken_0x2df874 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df874) {
            ctx->pc = 0x2DF8A8u;
            goto label_2df8a8;
        }
    }
    ctx->pc = 0x2DF87Cu;
label_2df87c:
    // 0x2df87c: 0x8c990060  lw          $t9, 0x60($a0)
    ctx->pc = 0x2df87cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_2df880:
    // 0x2df880: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2df880u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2df884:
    // 0x2df884: 0x320f809  jalr        $t9
label_2df888:
    if (ctx->pc == 0x2DF888u) {
        ctx->pc = 0x2DF888u;
            // 0x2df888: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2DF88Cu;
        goto label_2df88c;
    }
    ctx->pc = 0x2DF884u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DF88Cu);
        ctx->pc = 0x2DF888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF884u;
            // 0x2df888: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DF88Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DF88Cu; }
            if (ctx->pc != 0x2DF88Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2DF88Cu;
label_2df88c:
    // 0x2df88c: 0x10000006  b           . + 4 + (0x6 << 2)
label_2df890:
    if (ctx->pc == 0x2DF890u) {
        ctx->pc = 0x2DF894u;
        goto label_2df894;
    }
    ctx->pc = 0x2DF88Cu;
    {
        const bool branch_taken_0x2df88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df88c) {
            ctx->pc = 0x2DF8A8u;
            goto label_2df8a8;
        }
    }
    ctx->pc = 0x2DF894u;
label_2df894:
    // 0x2df894: 0x26240cb0  addiu       $a0, $s1, 0xCB0
    ctx->pc = 0x2df894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3248));
label_2df898:
    // 0x2df898: 0xc0a762c  jal         func_29D8B0
label_2df89c:
    if (ctx->pc == 0x2DF89Cu) {
        ctx->pc = 0x2DF8A0u;
        goto label_2df8a0;
    }
    ctx->pc = 0x2DF898u;
    SET_GPR_U32(ctx, 31, 0x2DF8A0u);
    ctx->pc = 0x29D8B0u;
    if (runtime->hasFunction(0x29D8B0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF8A0u; }
        if (ctx->pc != 0x2DF8A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Get__14CFuncPointMngrFv_0x29d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF8A0u; }
        if (ctx->pc != 0x2DF8A0u) { return; }
    }
    ctx->pc = 0x2DF8A0u;
label_2df8a0:
    // 0x2df8a0: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
label_2df8a4:
    if (ctx->pc == 0x2DF8A4u) {
        ctx->pc = 0x2DF8A4u;
            // 0x2df8a4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DF8A8u;
        goto label_2df8a8;
    }
    ctx->pc = 0x2DF8A0u;
    {
        const bool branch_taken_0x2df8a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DF8A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF8A0u;
            // 0x2df8a4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df8a0) {
            ctx->pc = 0x2DF7D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2df7d8;
        }
    }
    ctx->pc = 0x2DF8A8u;
label_2df8a8:
    // 0x2df8a8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2df8a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2df8ac:
    // 0x2df8ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2df8acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2df8b0:
    // 0x2df8b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2df8b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2df8b4:
    // 0x2df8b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2df8b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2df8b8:
    // 0x2df8b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2df8b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2df8bc:
    // 0x2df8bc: 0x3e00008  jr          $ra
label_2df8c0:
    if (ctx->pc == 0x2DF8C0u) {
        ctx->pc = 0x2DF8C0u;
            // 0x2df8c0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x2DF8C4u;
        goto label_fallthrough_0x2df8bc;
    }
    ctx->pc = 0x2DF8BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF8C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF8BCu;
            // 0x2df8c0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2df8bc:
    ctx->pc = 0x2DF8C4u;
}
