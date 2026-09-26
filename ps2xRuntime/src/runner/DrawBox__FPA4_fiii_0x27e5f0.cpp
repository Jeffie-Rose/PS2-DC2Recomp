#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawBox__FPA4_fiii
// Address: 0x27e5f0 - 0x27e858
void DrawBox__FPA4_fiii_0x27e5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawBox__FPA4_fiii_0x27e5f0");
#endif

    switch (ctx->pc) {
        case 0x27e62cu: goto label_27e62c;
        case 0x27e63cu: goto label_27e63c;
        case 0x27e648u: goto label_27e648;
        case 0x27e654u: goto label_27e654;
        case 0x27e660u: goto label_27e660;
        case 0x27e66cu: goto label_27e66c;
        case 0x27e678u: goto label_27e678;
        case 0x27e684u: goto label_27e684;
        case 0x27e690u: goto label_27e690;
        case 0x27e6a8u: goto label_27e6a8;
        case 0x27e6b4u: goto label_27e6b4;
        case 0x27e6ccu: goto label_27e6cc;
        case 0x27e6f4u: goto label_27e6f4;
        case 0x27e704u: goto label_27e704;
        case 0x27e710u: goto label_27e710;
        case 0x27e720u: goto label_27e720;
        case 0x27e72cu: goto label_27e72c;
        case 0x27e73cu: goto label_27e73c;
        case 0x27e748u: goto label_27e748;
        case 0x27e754u: goto label_27e754;
        case 0x27e764u: goto label_27e764;
        case 0x27e774u: goto label_27e774;
        case 0x27e780u: goto label_27e780;
        case 0x27e790u: goto label_27e790;
        case 0x27e79cu: goto label_27e79c;
        case 0x27e7acu: goto label_27e7ac;
        case 0x27e7b8u: goto label_27e7b8;
        case 0x27e7c4u: goto label_27e7c4;
        case 0x27e7d0u: goto label_27e7d0;
        case 0x27e7dcu: goto label_27e7dc;
        case 0x27e7e8u: goto label_27e7e8;
        case 0x27e7f4u: goto label_27e7f4;
        case 0x27e800u: goto label_27e800;
        case 0x27e80cu: goto label_27e80c;
        case 0x27e818u: goto label_27e818;
        case 0x27e824u: goto label_27e824;
        case 0x27e830u: goto label_27e830;
        default: break;
    }

    ctx->pc = 0x27e5f0u;

    // 0x27e5f0: 0x27bdfdf0  addiu       $sp, $sp, -0x210
    ctx->pc = 0x27e5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966768));
    // 0x27e5f4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x27e5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x27e5f8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x27e5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x27e5fc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x27e5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x27e600: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x27e600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x27e604: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27e604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x27e608: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27e608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x27e60c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x27e60cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e610: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27e610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27e614: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x27e614u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e618: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27e618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27e61c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x27e61cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e620: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x27e620u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e624: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x27E624u;
    SET_GPR_U32(ctx, 31, 0x27E62Cu);
    ctx->pc = 0x27E628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E624u;
            // 0x27e628: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E62Cu; }
        if (ctx->pc != 0x27E62Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E62Cu; }
        if (ctx->pc != 0x27E62Cu) { return; }
    }
    ctx->pc = 0x27E62Cu;
label_27e62c:
    // 0x27e62c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x27e62cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x27e630: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27e630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e634: 0xc04d104  jal         func_134410
    ctx->pc = 0x27E634u;
    SET_GPR_U32(ctx, 31, 0x27E63Cu);
    ctx->pc = 0x27E638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E634u;
            // 0x27e638: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E63Cu; }
        if (ctx->pc != 0x27E63Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E63Cu; }
        if (ctx->pc != 0x27E63Cu) { return; }
    }
    ctx->pc = 0x27E63Cu;
label_27e63c:
    // 0x27e63c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x27e63cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x27e640: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x27E640u;
    SET_GPR_U32(ctx, 31, 0x27E648u);
    ctx->pc = 0x27E644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E640u;
            // 0x27e644: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E648u; }
        if (ctx->pc != 0x27E648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E648u; }
        if (ctx->pc != 0x27E648u) { return; }
    }
    ctx->pc = 0x27E648u;
label_27e648:
    // 0x27e648: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x27e648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x27e64c: 0xc04d3fc  jal         func_134FF0
    ctx->pc = 0x27E64Cu;
    SET_GPR_U32(ctx, 31, 0x27E654u);
    ctx->pc = 0x27E650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E64Cu;
            // 0x27e650: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134FF0u;
    if (runtime->hasFunction(0x134FF0u)) {
        auto targetFn = runtime->lookupFunction(0x134FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E654u; }
        if (ctx->pc != 0x27E654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTest__11mgCDrawPrimFi_0x134ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E654u; }
        if (ctx->pc != 0x27E654u) { return; }
    }
    ctx->pc = 0x27E654u;
label_27e654:
    // 0x27e654: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x27e654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x27e658: 0xc04d3bc  jal         func_134EF0
    ctx->pc = 0x27E658u;
    SET_GPR_U32(ctx, 31, 0x27E660u);
    ctx->pc = 0x27E65Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E658u;
            // 0x27e65c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EF0u;
    if (runtime->hasFunction(0x134EF0u)) {
        auto targetFn = runtime->lookupFunction(0x134EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E660u; }
        if (ctx->pc != 0x27E660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTestEnable__11mgCDrawPrimFi_0x134ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E660u; }
        if (ctx->pc != 0x27E660u) { return; }
    }
    ctx->pc = 0x27E660u;
label_27e660:
    // 0x27e660: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x27e660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x27e664: 0xc04d3b0  jal         func_134EC0
    ctx->pc = 0x27E664u;
    SET_GPR_U32(ctx, 31, 0x27E66Cu);
    ctx->pc = 0x27E668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E664u;
            // 0x27e668: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E66Cu; }
        if (ctx->pc != 0x27E66Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E66Cu; }
        if (ctx->pc != 0x27E66Cu) { return; }
    }
    ctx->pc = 0x27E66Cu;
label_27e66c:
    // 0x27e66c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x27e66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x27e670: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x27E670u;
    SET_GPR_U32(ctx, 31, 0x27E678u);
    ctx->pc = 0x27E674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E670u;
            // 0x27e674: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E678u; }
        if (ctx->pc != 0x27E678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E678u; }
        if (ctx->pc != 0x27E678u) { return; }
    }
    ctx->pc = 0x27E678u;
label_27e678:
    // 0x27e678: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x27e678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x27e67c: 0xc04d44c  jal         func_135130
    ctx->pc = 0x27E67Cu;
    SET_GPR_U32(ctx, 31, 0x27E684u);
    ctx->pc = 0x27E680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E67Cu;
            // 0x27e680: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135130u;
    if (runtime->hasFunction(0x135130u)) {
        auto targetFn = runtime->lookupFunction(0x135130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E684u; }
        if (ctx->pc != 0x27E684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Coord__11mgCDrawPrimFi_0x135130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E684u; }
        if (ctx->pc != 0x27E684u) { return; }
    }
    ctx->pc = 0x27E684u;
label_27e684:
    // 0x27e684: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x27e684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x27e688: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x27E688u;
    SET_GPR_U32(ctx, 31, 0x27E690u);
    ctx->pc = 0x27E68Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E688u;
            // 0x27e68c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E690u; }
        if (ctx->pc != 0x27E690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E690u; }
        if (ctx->pc != 0x27E690u) { return; }
    }
    ctx->pc = 0x27E690u;
label_27e690:
    // 0x27e690: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x27e690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e694: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x27e694u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e698: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x27e698u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e69c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x27e69cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x27e6a0: 0xc04d320  jal         func_134C80
    ctx->pc = 0x27E6A0u;
    SET_GPR_U32(ctx, 31, 0x27E6A8u);
    ctx->pc = 0x27E6A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E6A0u;
            // 0x27e6a4: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E6A8u; }
        if (ctx->pc != 0x27E6A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E6A8u; }
        if (ctx->pc != 0x27E6A8u) { return; }
    }
    ctx->pc = 0x27E6A8u;
label_27e6a8:
    // 0x27e6a8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x27e6a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27e6ac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x27e6acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e6b0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x27e6b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27e6b4:
    // 0x27e6b4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x27e6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x27e6b8: 0x2722821  addu        $a1, $s3, $s2
    ctx->pc = 0x27e6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x27e6bc: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x27e6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x27e6c0: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x27e6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x27e6c4: 0xc051638  jal         func_1458E0
    ctx->pc = 0x27E6C4u;
    SET_GPR_U32(ctx, 31, 0x27E6CCu);
    ctx->pc = 0x27E6C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E6C4u;
            // 0x27e6c8: 0x24440190  addiu       $a0, $v0, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1458E0u;
    if (runtime->hasFunction(0x1458E0u)) {
        auto targetFn = runtime->lookupFunction(0x1458E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E6CCu; }
        if (ctx->pc != 0x27E6CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldPrim__FPiPf_0x1458e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E6CCu; }
        if (ctx->pc != 0x27E6CCu) { return; }
    }
    ctx->pc = 0x27E6CCu;
label_27e6cc:
    // 0x27e6cc: 0x2228824  and         $s1, $s1, $v0
    ctx->pc = 0x27e6ccu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x27e6d0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27e6d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x27e6d4: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x27e6d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x27e6d8: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x27E6D8u;
    {
        const bool branch_taken_0x27e6d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E6DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E6D8u;
            // 0x27e6dc: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e6d8) {
            ctx->pc = 0x27E6B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27e6b4;
        }
    }
    ctx->pc = 0x27E6E0u;
    // 0x27e6e0: 0x12200051  beqz        $s1, . + 4 + (0x51 << 2)
    ctx->pc = 0x27E6E0u;
    {
        const bool branch_taken_0x27e6e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E6E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E6E0u;
            // 0x27e6e4: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e6e0) {
            ctx->pc = 0x27E828u;
            goto label_27e828;
        }
    }
    ctx->pc = 0x27E6E8u;
    // 0x27e6e8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x27e6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x27e6ec: 0xc04d318  jal         func_134C60
    ctx->pc = 0x27E6ECu;
    SET_GPR_U32(ctx, 31, 0x27E6F4u);
    ctx->pc = 0x27E6F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E6ECu;
            // 0x27e6f0: 0x27a50190  addiu       $a1, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E6F4u; }
        if (ctx->pc != 0x27E6F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E6F4u; }
        if (ctx->pc != 0x27E6F4u) { return; }
    }
    ctx->pc = 0x27E6F4u;
label_27e6f4:
    // 0x27e6f4: 0x27b001a0  addiu       $s0, $sp, 0x1A0
    ctx->pc = 0x27e6f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x27e6f8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x27e6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x27e6fc: 0xc04d318  jal         func_134C60
    ctx->pc = 0x27E6FCu;
    SET_GPR_U32(ctx, 31, 0x27E704u);
    ctx->pc = 0x27E700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E6FCu;
            // 0x27e700: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E704u; }
        if (ctx->pc != 0x27E704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E704u; }
        if (ctx->pc != 0x27E704u) { return; }
    }
    ctx->pc = 0x27E704u;
label_27e704:
    // 0x27e704: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x27e704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x27e708: 0xc04d318  jal         func_134C60
    ctx->pc = 0x27E708u;
    SET_GPR_U32(ctx, 31, 0x27E710u);
    ctx->pc = 0x27E70Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E708u;
            // 0x27e70c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E710u; }
        if (ctx->pc != 0x27E710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E710u; }
        if (ctx->pc != 0x27E710u) { return; }
    }
    ctx->pc = 0x27E710u;
label_27e710:
    // 0x27e710: 0x27b101e0  addiu       $s1, $sp, 0x1E0
    ctx->pc = 0x27e710u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x27e714: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x27e714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x27e718: 0xc04d318  jal         func_134C60
    ctx->pc = 0x27E718u;
    SET_GPR_U32(ctx, 31, 0x27E720u);
    ctx->pc = 0x27E71Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E718u;
            // 0x27e71c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E720u; }
        if (ctx->pc != 0x27E720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E720u; }
        if (ctx->pc != 0x27E720u) { return; }
    }
    ctx->pc = 0x27E720u;
label_27e720:
    // 0x27e720: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x27e720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x27e724: 0xc04d318  jal         func_134C60
    ctx->pc = 0x27E724u;
    SET_GPR_U32(ctx, 31, 0x27E72Cu);
    ctx->pc = 0x27E728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E724u;
            // 0x27e728: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E72Cu; }
        if (ctx->pc != 0x27E72Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E72Cu; }
        if (ctx->pc != 0x27E72Cu) { return; }
    }
    ctx->pc = 0x27E72Cu;
label_27e72c:
    // 0x27e72c: 0x27b201d0  addiu       $s2, $sp, 0x1D0
    ctx->pc = 0x27e72cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x27e730: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x27e730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x27e734: 0xc04d318  jal         func_134C60
    ctx->pc = 0x27E734u;
    SET_GPR_U32(ctx, 31, 0x27E73Cu);
    ctx->pc = 0x27E738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E734u;
            // 0x27e738: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E73Cu; }
        if (ctx->pc != 0x27E73Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E73Cu; }
        if (ctx->pc != 0x27E73Cu) { return; }
    }
    ctx->pc = 0x27E73Cu;
label_27e73c:
    // 0x27e73c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x27e73cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x27e740: 0xc04d318  jal         func_134C60
    ctx->pc = 0x27E740u;
    SET_GPR_U32(ctx, 31, 0x27E748u);
    ctx->pc = 0x27E744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E740u;
            // 0x27e744: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E748u; }
        if (ctx->pc != 0x27E748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E748u; }
        if (ctx->pc != 0x27E748u) { return; }
    }
    ctx->pc = 0x27E748u;
label_27e748:
    // 0x27e748: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x27e748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x27e74c: 0xc04d318  jal         func_134C60
    ctx->pc = 0x27E74Cu;
    SET_GPR_U32(ctx, 31, 0x27E754u);
    ctx->pc = 0x27E750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E74Cu;
            // 0x27e750: 0x27a50190  addiu       $a1, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E754u; }
        if (ctx->pc != 0x27E754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E754u; }
        if (ctx->pc != 0x27E754u) { return; }
    }
    ctx->pc = 0x27E754u;
label_27e754:
    // 0x27e754: 0x27b601b0  addiu       $s6, $sp, 0x1B0
    ctx->pc = 0x27e754u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x27e758: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x27e758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x27e75c: 0xc04d318  jal         func_134C60
    ctx->pc = 0x27E75Cu;
    SET_GPR_U32(ctx, 31, 0x27E764u);
    ctx->pc = 0x27E760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E75Cu;
            // 0x27e760: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E764u; }
        if (ctx->pc != 0x27E764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E764u; }
        if (ctx->pc != 0x27E764u) { return; }
    }
    ctx->pc = 0x27E764u;
label_27e764:
    // 0x27e764: 0x27b301c0  addiu       $s3, $sp, 0x1C0
    ctx->pc = 0x27e764u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x27e768: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x27e768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x27e76c: 0xc04d318  jal         func_134C60
    ctx->pc = 0x27E76Cu;
    SET_GPR_U32(ctx, 31, 0x27E774u);
    ctx->pc = 0x27E770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E76Cu;
            // 0x27e770: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E774u; }
        if (ctx->pc != 0x27E774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E774u; }
        if (ctx->pc != 0x27E774u) { return; }
    }
    ctx->pc = 0x27E774u;
label_27e774:
    // 0x27e774: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x27e774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x27e778: 0xc04d318  jal         func_134C60
    ctx->pc = 0x27E778u;
    SET_GPR_U32(ctx, 31, 0x27E780u);
    ctx->pc = 0x27E77Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E778u;
            // 0x27e77c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E780u; }
        if (ctx->pc != 0x27E780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E780u; }
        if (ctx->pc != 0x27E780u) { return; }
    }
    ctx->pc = 0x27E780u;
label_27e780:
    // 0x27e780: 0x27b40200  addiu       $s4, $sp, 0x200
    ctx->pc = 0x27e780u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x27e784: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x27e784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x27e788: 0xc04d318  jal         func_134C60
    ctx->pc = 0x27E788u;
    SET_GPR_U32(ctx, 31, 0x27E790u);
    ctx->pc = 0x27E78Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E788u;
            // 0x27e78c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E790u; }
        if (ctx->pc != 0x27E790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E790u; }
        if (ctx->pc != 0x27E790u) { return; }
    }
    ctx->pc = 0x27E790u;
label_27e790:
    // 0x27e790: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x27e790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x27e794: 0xc04d318  jal         func_134C60
    ctx->pc = 0x27E794u;
    SET_GPR_U32(ctx, 31, 0x27E79Cu);
    ctx->pc = 0x27E798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E794u;
            // 0x27e798: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E79Cu; }
        if (ctx->pc != 0x27E79Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E79Cu; }
        if (ctx->pc != 0x27E79Cu) { return; }
    }
    ctx->pc = 0x27E79Cu;
label_27e79c:
    // 0x27e79c: 0x27b501f0  addiu       $s5, $sp, 0x1F0
    ctx->pc = 0x27e79cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x27e7a0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x27e7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x27e7a4: 0xc04d318  jal         func_134C60
    ctx->pc = 0x27E7A4u;
    SET_GPR_U32(ctx, 31, 0x27E7ACu);
    ctx->pc = 0x27E7A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E7A4u;
            // 0x27e7a8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E7ACu; }
        if (ctx->pc != 0x27E7ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E7ACu; }
        if (ctx->pc != 0x27E7ACu) { return; }
    }
    ctx->pc = 0x27E7ACu;
label_27e7ac:
    // 0x27e7ac: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x27e7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x27e7b0: 0xc04d318  jal         func_134C60
    ctx->pc = 0x27E7B0u;
    SET_GPR_U32(ctx, 31, 0x27E7B8u);
    ctx->pc = 0x27E7B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E7B0u;
            // 0x27e7b4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E7B8u; }
        if (ctx->pc != 0x27E7B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E7B8u; }
        if (ctx->pc != 0x27E7B8u) { return; }
    }
    ctx->pc = 0x27E7B8u;
label_27e7b8:
    // 0x27e7b8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x27e7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x27e7bc: 0xc04d318  jal         func_134C60
    ctx->pc = 0x27E7BCu;
    SET_GPR_U32(ctx, 31, 0x27E7C4u);
    ctx->pc = 0x27E7C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E7BCu;
            // 0x27e7c0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E7C4u; }
        if (ctx->pc != 0x27E7C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E7C4u; }
        if (ctx->pc != 0x27E7C4u) { return; }
    }
    ctx->pc = 0x27E7C4u;
label_27e7c4:
    // 0x27e7c4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x27e7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x27e7c8: 0xc04d318  jal         func_134C60
    ctx->pc = 0x27E7C8u;
    SET_GPR_U32(ctx, 31, 0x27E7D0u);
    ctx->pc = 0x27E7CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E7C8u;
            // 0x27e7cc: 0x27a50190  addiu       $a1, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E7D0u; }
        if (ctx->pc != 0x27E7D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E7D0u; }
        if (ctx->pc != 0x27E7D0u) { return; }
    }
    ctx->pc = 0x27E7D0u;
label_27e7d0:
    // 0x27e7d0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x27e7d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e7d4: 0xc04d318  jal         func_134C60
    ctx->pc = 0x27E7D4u;
    SET_GPR_U32(ctx, 31, 0x27E7DCu);
    ctx->pc = 0x27E7D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E7D4u;
            // 0x27e7d8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E7DCu; }
        if (ctx->pc != 0x27E7DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E7DCu; }
        if (ctx->pc != 0x27E7DCu) { return; }
    }
    ctx->pc = 0x27E7DCu;
label_27e7dc:
    // 0x27e7dc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x27e7dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e7e0: 0xc04d318  jal         func_134C60
    ctx->pc = 0x27E7E0u;
    SET_GPR_U32(ctx, 31, 0x27E7E8u);
    ctx->pc = 0x27E7E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E7E0u;
            // 0x27e7e4: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E7E8u; }
        if (ctx->pc != 0x27E7E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E7E8u; }
        if (ctx->pc != 0x27E7E8u) { return; }
    }
    ctx->pc = 0x27E7E8u;
label_27e7e8:
    // 0x27e7e8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x27e7e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e7ec: 0xc04d318  jal         func_134C60
    ctx->pc = 0x27E7ECu;
    SET_GPR_U32(ctx, 31, 0x27E7F4u);
    ctx->pc = 0x27E7F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E7ECu;
            // 0x27e7f0: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E7F4u; }
        if (ctx->pc != 0x27E7F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E7F4u; }
        if (ctx->pc != 0x27E7F4u) { return; }
    }
    ctx->pc = 0x27E7F4u;
label_27e7f4:
    // 0x27e7f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27e7f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e7f8: 0xc04d318  jal         func_134C60
    ctx->pc = 0x27E7F8u;
    SET_GPR_U32(ctx, 31, 0x27E800u);
    ctx->pc = 0x27E7FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E7F8u;
            // 0x27e7fc: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E800u; }
        if (ctx->pc != 0x27E800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E800u; }
        if (ctx->pc != 0x27E800u) { return; }
    }
    ctx->pc = 0x27E800u;
label_27e800:
    // 0x27e800: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x27e800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e804: 0xc04d318  jal         func_134C60
    ctx->pc = 0x27E804u;
    SET_GPR_U32(ctx, 31, 0x27E80Cu);
    ctx->pc = 0x27E808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E804u;
            // 0x27e808: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E80Cu; }
        if (ctx->pc != 0x27E80Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E80Cu; }
        if (ctx->pc != 0x27E80Cu) { return; }
    }
    ctx->pc = 0x27E80Cu;
label_27e80c:
    // 0x27e80c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27e80cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e810: 0xc04d318  jal         func_134C60
    ctx->pc = 0x27E810u;
    SET_GPR_U32(ctx, 31, 0x27E818u);
    ctx->pc = 0x27E814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E810u;
            // 0x27e814: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E818u; }
        if (ctx->pc != 0x27E818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E818u; }
        if (ctx->pc != 0x27E818u) { return; }
    }
    ctx->pc = 0x27E818u;
label_27e818:
    // 0x27e818: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x27e818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e81c: 0xc04d318  jal         func_134C60
    ctx->pc = 0x27E81Cu;
    SET_GPR_U32(ctx, 31, 0x27E824u);
    ctx->pc = 0x27E820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E81Cu;
            // 0x27e820: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E824u; }
        if (ctx->pc != 0x27E824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E824u; }
        if (ctx->pc != 0x27E824u) { return; }
    }
    ctx->pc = 0x27E824u;
label_27e824:
    // 0x27e824: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x27e824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_27e828:
    // 0x27e828: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x27E828u;
    SET_GPR_U32(ctx, 31, 0x27E830u);
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E830u; }
        if (ctx->pc != 0x27E830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E830u; }
        if (ctx->pc != 0x27E830u) { return; }
    }
    ctx->pc = 0x27E830u;
label_27e830:
    // 0x27e830: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x27e830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27e834: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x27e834u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27e838: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x27e838u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27e83c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x27e83cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27e840: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27e840u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27e844: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27e844u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27e848: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27e848u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27e84c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27e84cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27e850: 0x3e00008  jr          $ra
    ctx->pc = 0x27E850u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27E854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E850u;
            // 0x27e854: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27E858u;
}
