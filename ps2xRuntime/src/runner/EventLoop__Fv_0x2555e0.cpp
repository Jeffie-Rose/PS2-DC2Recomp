#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EventLoop__Fv
// Address: 0x2555e0 - 0x255ae8
void EventLoop__Fv_0x2555e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EventLoop__Fv_0x2555e0");
#endif

    switch (ctx->pc) {
        case 0x255644u: goto label_255644;
        case 0x255654u: goto label_255654;
        case 0x255668u: goto label_255668;
        case 0x255694u: goto label_255694;
        case 0x2556acu: goto label_2556ac;
        case 0x2556bcu: goto label_2556bc;
        case 0x2556c4u: goto label_2556c4;
        case 0x2556ecu: goto label_2556ec;
        case 0x2556f4u: goto label_2556f4;
        case 0x255738u: goto label_255738;
        case 0x255780u: goto label_255780;
        case 0x255788u: goto label_255788;
        case 0x25579cu: goto label_25579c;
        case 0x2557b4u: goto label_2557b4;
        case 0x2557c0u: goto label_2557c0;
        case 0x2557c8u: goto label_2557c8;
        case 0x255858u: goto label_255858;
        case 0x25588cu: goto label_25588c;
        case 0x25589cu: goto label_25589c;
        case 0x2558b8u: goto label_2558b8;
        case 0x2558c0u: goto label_2558c0;
        case 0x2558f8u: goto label_2558f8;
        case 0x25590cu: goto label_25590c;
        case 0x255920u: goto label_255920;
        case 0x255928u: goto label_255928;
        case 0x25593cu: goto label_25593c;
        case 0x25594cu: goto label_25594c;
        case 0x255970u: goto label_255970;
        case 0x255998u: goto label_255998;
        case 0x2559a8u: goto label_2559a8;
        case 0x2559b0u: goto label_2559b0;
        case 0x2559b8u: goto label_2559b8;
        case 0x2559e0u: goto label_2559e0;
        case 0x2559f8u: goto label_2559f8;
        case 0x255a20u: goto label_255a20;
        case 0x255a30u: goto label_255a30;
        case 0x255a38u: goto label_255a38;
        case 0x255a40u: goto label_255a40;
        case 0x255a68u: goto label_255a68;
        case 0x255ab4u: goto label_255ab4;
        default: break;
    }

    ctx->pc = 0x2555e0u;

    // 0x2555e0: 0x27bdfde0  addiu       $sp, $sp, -0x220
    ctx->pc = 0x2555e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966752));
    // 0x2555e4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2555e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2555e8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2555e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2555ec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2555ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2555f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2555f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2555f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2555f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2555f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2555f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2555fc: 0x8c23e504  lw          $v1, -0x1AFC($at)
    ctx->pc = 0x2555fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x255600: 0x10620028  beq         $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x255600u;
    {
        const bool branch_taken_0x255600 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x255604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255600u;
            // 0x255604: 0x27848af0  addiu       $a0, $gp, -0x7510 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255600) {
            ctx->pc = 0x2556A4u;
            goto label_2556a4;
        }
    }
    ctx->pc = 0x255608u;
    // 0x255608: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x255608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25560c: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x25560Cu;
    {
        const bool branch_taken_0x25560c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x255610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25560Cu;
            // 0x255610: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25560c) {
            ctx->pc = 0x25565Cu;
            goto label_25565c;
        }
    }
    ctx->pc = 0x255614u;
    // 0x255614: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x255614u;
    {
        const bool branch_taken_0x255614 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x255618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255614u;
            // 0x255618: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255614) {
            ctx->pc = 0x25562Cu;
            goto label_25562c;
        }
    }
    ctx->pc = 0x25561Cu;
    // 0x25561c: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x25561Cu;
    {
        const bool branch_taken_0x25561c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25561c) {
            ctx->pc = 0x2556E0u;
            goto label_2556e0;
        }
    }
    ctx->pc = 0x255624u;
    // 0x255624: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x255624u;
    {
        const bool branch_taken_0x255624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255624u;
            // 0x255628: 0x8f8497dc  lw          $a0, -0x6824($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255624) {
            ctx->pc = 0x2556E4u;
            goto label_2556e4;
        }
    }
    ctx->pc = 0x25562Cu;
label_25562c:
    // 0x25562c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x25562cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x255630: 0x8c25e508  lw          $a1, -0x1AF8($at)
    ctx->pc = 0x255630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294960392)));
    // 0x255634: 0x14a2002a  bne         $a1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x255634u;
    {
        const bool branch_taken_0x255634 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x255638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255634u;
            // 0x255638: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255634) {
            ctx->pc = 0x2556E0u;
            goto label_2556e0;
        }
    }
    ctx->pc = 0x25563Cu;
    // 0x25563c: 0xc0bb538  jal         func_2ED4E0
    ctx->pc = 0x25563Cu;
    SET_GPR_U32(ctx, 31, 0x255644u);
    ctx->pc = 0x255640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25563Cu;
            // 0x255640: 0x24847b60  addiu       $a0, $a0, 0x7B60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255644u; }
        if (ctx->pc != 0x255644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255644u; }
        if (ctx->pc != 0x255644u) { return; }
    }
    ctx->pc = 0x255644u;
label_255644:
    // 0x255644: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x255644u;
    {
        const bool branch_taken_0x255644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x255644) {
            ctx->pc = 0x2556E0u;
            goto label_2556e0;
        }
    }
    ctx->pc = 0x25564Cu;
    // 0x25564c: 0xc095530  jal         func_2554C0
    ctx->pc = 0x25564Cu;
    SET_GPR_U32(ctx, 31, 0x255654u);
    ctx->pc = 0x2554C0u;
    if (runtime->hasFunction(0x2554C0u)) {
        auto targetFn = runtime->lookupFunction(0x2554C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255654u; }
        if (ctx->pc != 0x255654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SkipEventStart__Fv_0x2554c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255654u; }
        if (ctx->pc != 0x255654u) { return; }
    }
    ctx->pc = 0x255654u;
label_255654:
    // 0x255654: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x255654u;
    {
        const bool branch_taken_0x255654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x255654) {
            ctx->pc = 0x2556E0u;
            goto label_2556e0;
        }
    }
    ctx->pc = 0x25565Cu;
label_25565c:
    // 0x25565c: 0x8f8297dc  lw          $v0, -0x6824($gp)
    ctx->pc = 0x25565cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x255660: 0xc05f65c  jal         func_17D970
    ctx->pc = 0x255660u;
    SET_GPR_U32(ctx, 31, 0x255668u);
    ctx->pc = 0x255664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x255660u;
            // 0x255664: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D970u;
    if (runtime->hasFunction(0x17D970u)) {
        auto targetFn = runtime->lookupFunction(0x17D970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255668u; }
        if (ctx->pc != 0x255668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeCheck__10CFadeInOutFv_0x17d970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255668u; }
        if (ctx->pc != 0x255668u) { return; }
    }
    ctx->pc = 0x255668u;
label_255668:
    // 0x255668: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x255668u;
    {
        const bool branch_taken_0x255668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25566Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255668u;
            // 0x25566c: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255668) {
            ctx->pc = 0x2556E0u;
            goto label_2556e0;
        }
    }
    ctx->pc = 0x255670u;
    // 0x255670: 0x8f8297dc  lw          $v0, -0x6824($gp)
    ctx->pc = 0x255670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x255674: 0xc42ce510  lwc1        $f12, -0x1AF0($at)
    ctx->pc = 0x255674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294960400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x255678: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x255678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25567c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x25567cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x255680: 0xc42de514  lwc1        $f13, -0x1AEC($at)
    ctx->pc = 0x255680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294960404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x255684: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x255684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x255688: 0xc42ee518  lwc1        $f14, -0x1AE8($at)
    ctx->pc = 0x255688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294960408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x25568c: 0xc05f610  jal         func_17D840
    ctx->pc = 0x25568Cu;
    SET_GPR_U32(ctx, 31, 0x255694u);
    ctx->pc = 0x255690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25568Cu;
            // 0x255690: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D840u;
    if (runtime->hasFunction(0x17D840u)) {
        auto targetFn = runtime->lookupFunction(0x17D840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255694u; }
        if (ctx->pc != 0x255694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOut__10CFadeInOutFifff_0x17d840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255694u; }
        if (ctx->pc != 0x255694u) { return; }
    }
    ctx->pc = 0x255694u;
label_255694:
    // 0x255694: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x255694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x255698: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x255698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x25569c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x25569Cu;
    {
        const bool branch_taken_0x25569c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2556A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25569Cu;
            // 0x2556a0: 0xac22e504  sw          $v0, -0x1AFC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294960388), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25569c) {
            ctx->pc = 0x2556E0u;
            goto label_2556e0;
        }
    }
    ctx->pc = 0x2556A4u;
label_2556a4:
    // 0x2556a4: 0xc0a2bec  jal         func_28AFB0
    ctx->pc = 0x2556A4u;
    SET_GPR_U32(ctx, 31, 0x2556ACu);
    ctx->pc = 0x28AFB0u;
    if (runtime->hasFunction(0x28AFB0u)) {
        auto targetFn = runtime->lookupFunction(0x28AFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2556ACu; }
        if (ctx->pc != 0x2556ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StreamOpenState__6CSoundFv_0x28afb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2556ACu; }
        if (ctx->pc != 0x2556ACu) { return; }
    }
    ctx->pc = 0x2556ACu;
label_2556ac:
    // 0x2556ac: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2556ACu;
    {
        const bool branch_taken_0x2556ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2556ac) {
            ctx->pc = 0x2556D4u;
            goto label_2556d4;
        }
    }
    ctx->pc = 0x2556B4u;
    // 0x2556b4: 0xc0523b8  jal         func_148EE0
    ctx->pc = 0x2556B4u;
    SET_GPR_U32(ctx, 31, 0x2556BCu);
    ctx->pc = 0x148EE0u;
    if (runtime->hasFunction(0x148EE0u)) {
        auto targetFn = runtime->lookupFunction(0x148EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2556BCu; }
        if (ctx->pc != 0x2556BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BreakReadBG__Fv_0x148ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2556BCu; }
        if (ctx->pc != 0x2556BCu) { return; }
    }
    ctx->pc = 0x2556BCu;
label_2556bc:
    // 0x2556bc: 0xc095544  jal         func_255510
    ctx->pc = 0x2556BCu;
    SET_GPR_U32(ctx, 31, 0x2556C4u);
    ctx->pc = 0x255510u;
    if (runtime->hasFunction(0x255510u)) {
        auto targetFn = runtime->lookupFunction(0x255510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2556C4u; }
        if (ctx->pc != 0x2556C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SkipEvent__Fv_0x255510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2556C4u; }
        if (ctx->pc != 0x2556C4u) { return; }
    }
    ctx->pc = 0x2556C4u;
label_2556c4:
    // 0x2556c4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2556c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2556c8: 0xac20e504  sw          $zero, -0x1AFC($at)
    ctx->pc = 0x2556c8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960388), GPR_U32(ctx, 0));
    // 0x2556cc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2556ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2556d0: 0xac20e4fc  sw          $zero, -0x1B04($at)
    ctx->pc = 0x2556d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960380), GPR_U32(ctx, 0));
label_2556d4:
    // 0x2556d4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2556d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2556d8: 0x100000fd  b           . + 4 + (0xFD << 2)
    ctx->pc = 0x2556D8u;
    {
        const bool branch_taken_0x2556d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2556DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2556D8u;
            // 0x2556dc: 0x8c22e4fc  lw          $v0, -0x1B04($at) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294960380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2556d8) {
            ctx->pc = 0x255AD0u;
            goto label_255ad0;
        }
    }
    ctx->pc = 0x2556E0u;
label_2556e0:
    // 0x2556e0: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x2556e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
label_2556e4:
    // 0x2556e4: 0xc0a0e30  jal         func_2838C0
    ctx->pc = 0x2556E4u;
    SET_GPR_U32(ctx, 31, 0x2556ECu);
    ctx->pc = 0x2556E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2556E4u;
            // 0x2556e8: 0x8c852e54  lw          $a1, 0x2E54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2556ECu; }
        if (ctx->pc != 0x2556ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2556ECu; }
        if (ctx->pc != 0x2556ECu) { return; }
    }
    ctx->pc = 0x2556ECu;
label_2556ec:
    // 0x2556ec: 0xc097614  jal         func_25D850
    ctx->pc = 0x2556ECu;
    SET_GPR_U32(ctx, 31, 0x2556F4u);
    ctx->pc = 0x2556F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2556ECu;
            // 0x2556f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25D850u;
    if (runtime->hasFunction(0x25D850u)) {
        auto targetFn = runtime->lookupFunction(0x25D850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2556F4u; }
        if (ctx->pc != 0x2556F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCamWorldCoordGyaku__FP9mgCCamera_0x25d850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2556F4u; }
        if (ctx->pc != 0x2556F4u) { return; }
    }
    ctx->pc = 0x2556F4u;
label_2556f4:
    // 0x2556f4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2556f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2556f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2556f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2556fc: 0x8c23e500  lw          $v1, -0x1B00($at)
    ctx->pc = 0x2556fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294960384)));
    // 0x255700: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x255700u;
    {
        const bool branch_taken_0x255700 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x255700) {
            ctx->pc = 0x25579Cu;
            goto label_25579c;
        }
    }
    ctx->pc = 0x255708u;
    // 0x255708: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x255708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25570c: 0x10650023  beq         $v1, $a1, . + 4 + (0x23 << 2)
    ctx->pc = 0x25570Cu;
    {
        const bool branch_taken_0x25570c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x25570c) {
            ctx->pc = 0x25579Cu;
            goto label_25579c;
        }
    }
    ctx->pc = 0x255714u;
    // 0x255714: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x255714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x255718: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x255718u;
    {
        const bool branch_taken_0x255718 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25571Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255718u;
            // 0x25571c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255718) {
            ctx->pc = 0x255764u;
            goto label_255764;
        }
    }
    ctx->pc = 0x255720u;
    // 0x255720: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x255720u;
    {
        const bool branch_taken_0x255720 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x255720) {
            ctx->pc = 0x255730u;
            goto label_255730;
        }
    }
    ctx->pc = 0x255728u;
    // 0x255728: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x255728u;
    {
        const bool branch_taken_0x255728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25572Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255728u;
            // 0x25572c: 0x3c0401ed  lui         $a0, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255728) {
            ctx->pc = 0x255790u;
            goto label_255790;
        }
    }
    ctx->pc = 0x255730u;
label_255730:
    // 0x255730: 0xc095434  jal         func_2550D0
    ctx->pc = 0x255730u;
    SET_GPR_U32(ctx, 31, 0x255738u);
    ctx->pc = 0x255734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x255730u;
            // 0x255734: 0x8f8497e0  lw          $a0, -0x6820($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940640)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2550D0u;
    if (runtime->hasFunction(0x2550D0u)) {
        auto targetFn = runtime->lookupFunction(0x2550D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255738u; }
        if (ctx->pc != 0x255738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EventDoorLoop__Fii_0x2550d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255738u; }
        if (ctx->pc != 0x255738u) { return; }
    }
    ctx->pc = 0x255738u;
label_255738:
    // 0x255738: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x255738u;
    {
        const bool branch_taken_0x255738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25573Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255738u;
            // 0x25573c: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255738) {
            ctx->pc = 0x255754u;
            goto label_255754;
        }
    }
    ctx->pc = 0x255740u;
    // 0x255740: 0xaf8097e0  sw          $zero, -0x6820($gp)
    ctx->pc = 0x255740u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940640), GPR_U32(ctx, 0));
    // 0x255744: 0xac20e500  sw          $zero, -0x1B00($at)
    ctx->pc = 0x255744u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960384), GPR_U32(ctx, 0));
    // 0x255748: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x255748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x25574c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x25574Cu;
    {
        const bool branch_taken_0x25574c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25574Cu;
            // 0x255750: 0xac20e4fc  sw          $zero, -0x1B04($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294960380), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25574c) {
            ctx->pc = 0x25579Cu;
            goto label_25579c;
        }
    }
    ctx->pc = 0x255754u;
label_255754:
    // 0x255754: 0x8f8297e0  lw          $v0, -0x6820($gp)
    ctx->pc = 0x255754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940640)));
    // 0x255758: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x255758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25575c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x25575Cu;
    {
        const bool branch_taken_0x25575c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25575Cu;
            // 0x255760: 0xaf8297e0  sw          $v0, -0x6820($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940640), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25575c) {
            ctx->pc = 0x25579Cu;
            goto label_25579c;
        }
    }
    ctx->pc = 0x255764u;
label_255764:
    // 0x255764: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x255764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x255768: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x255768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x25576c: 0xac20e500  sw          $zero, -0x1B00($at)
    ctx->pc = 0x25576cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960384), GPR_U32(ctx, 0));
    // 0x255770: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x255770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x255774: 0xac20e4fc  sw          $zero, -0x1B04($at)
    ctx->pc = 0x255774u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960380), GPR_U32(ctx, 0));
    // 0x255778: 0xc0a0e30  jal         func_2838C0
    ctx->pc = 0x255778u;
    SET_GPR_U32(ctx, 31, 0x255780u);
    ctx->pc = 0x25577Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x255778u;
            // 0x25577c: 0x8c852e54  lw          $a1, 0x2E54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255780u; }
        if (ctx->pc != 0x255780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255780u; }
        if (ctx->pc != 0x255780u) { return; }
    }
    ctx->pc = 0x255780u;
label_255780:
    // 0x255780: 0xc0975f8  jal         func_25D7E0
    ctx->pc = 0x255780u;
    SET_GPR_U32(ctx, 31, 0x255788u);
    ctx->pc = 0x255784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x255780u;
            // 0x255784: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25D7E0u;
    if (runtime->hasFunction(0x25D7E0u)) {
        auto targetFn = runtime->lookupFunction(0x25D7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255788u; }
        if (ctx->pc != 0x255788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCamWorldCoord__FP9mgCCamera_0x25d7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255788u; }
        if (ctx->pc != 0x255788u) { return; }
    }
    ctx->pc = 0x255788u;
label_255788:
    // 0x255788: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x255788u;
    {
        const bool branch_taken_0x255788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25578Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255788u;
            // 0x25578c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255788) {
            ctx->pc = 0x255AD0u;
            goto label_255ad0;
        }
    }
    ctx->pc = 0x255790u;
label_255790:
    // 0x255790: 0xaf8097e0  sw          $zero, -0x6820($gp)
    ctx->pc = 0x255790u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940640), GPR_U32(ctx, 0));
    // 0x255794: 0xc061c78  jal         func_1871E0
    ctx->pc = 0x255794u;
    SET_GPR_U32(ctx, 31, 0x25579Cu);
    ctx->pc = 0x255798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x255794u;
            // 0x255798: 0x2484e3d0  addiu       $a0, $a0, -0x1C30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1871E0u;
    if (runtime->hasFunction(0x1871E0u)) {
        auto targetFn = runtime->lookupFunction(0x1871E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25579Cu; }
        if (ctx->pc != 0x25579Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        resume__10CRunScriptFv_0x1871e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25579Cu; }
        if (ctx->pc != 0x25579Cu) { return; }
    }
    ctx->pc = 0x25579Cu;
label_25579c:
    // 0x25579c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x25579cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2557a0: 0x8c22e40c  lw          $v0, -0x1BF4($at)
    ctx->pc = 0x2557a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294960140)));
    // 0x2557a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2557A4u;
    {
        const bool branch_taken_0x2557a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2557a4) {
            ctx->pc = 0x2557B4u;
            goto label_2557b4;
        }
    }
    ctx->pc = 0x2557ACu;
    // 0x2557ac: 0xc0988d8  jal         func_262360
    ctx->pc = 0x2557ACu;
    SET_GPR_U32(ctx, 31, 0x2557B4u);
    ctx->pc = 0x262360u;
    if (runtime->hasFunction(0x262360u)) {
        auto targetFn = runtime->lookupFunction(0x262360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2557B4u; }
        if (ctx->pc != 0x2557B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EdEventStep__Fv_0x262360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2557B4u; }
        if (ctx->pc != 0x2557B4u) { return; }
    }
    ctx->pc = 0x2557B4u;
label_2557b4:
    // 0x2557b4: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x2557b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x2557b8: 0xc0a0e30  jal         func_2838C0
    ctx->pc = 0x2557B8u;
    SET_GPR_U32(ctx, 31, 0x2557C0u);
    ctx->pc = 0x2557BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2557B8u;
            // 0x2557bc: 0x8c852e54  lw          $a1, 0x2E54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2557C0u; }
        if (ctx->pc != 0x2557C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2557C0u; }
        if (ctx->pc != 0x2557C0u) { return; }
    }
    ctx->pc = 0x2557C0u;
label_2557c0:
    // 0x2557c0: 0xc0975f8  jal         func_25D7E0
    ctx->pc = 0x2557C0u;
    SET_GPR_U32(ctx, 31, 0x2557C8u);
    ctx->pc = 0x2557C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2557C0u;
            // 0x2557c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25D7E0u;
    if (runtime->hasFunction(0x25D7E0u)) {
        auto targetFn = runtime->lookupFunction(0x25D7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2557C8u; }
        if (ctx->pc != 0x2557C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCamWorldCoord__FP9mgCCamera_0x25d7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2557C8u; }
        if (ctx->pc != 0x2557C8u) { return; }
    }
    ctx->pc = 0x2557C8u;
label_2557c8:
    // 0x2557c8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2557c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2557cc: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x2557ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2557d0: 0x8c30e4fc  lw          $s0, -0x1B04($at)
    ctx->pc = 0x2557d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294960380)));
    // 0x2557d4: 0x120200b0  beq         $s0, $v0, . + 4 + (0xB0 << 2)
    ctx->pc = 0x2557D4u;
    {
        const bool branch_taken_0x2557d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2557D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2557D4u;
            // 0x2557d8: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2557d4) {
            ctx->pc = 0x255A98u;
            goto label_255a98;
        }
    }
    ctx->pc = 0x2557DCu;
    // 0x2557dc: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x2557dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2557e0: 0x120200ab  beq         $s0, $v0, . + 4 + (0xAB << 2)
    ctx->pc = 0x2557E0u;
    {
        const bool branch_taken_0x2557e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2557E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2557E0u;
            // 0x2557e4: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2557e0) {
            ctx->pc = 0x255A90u;
            goto label_255a90;
        }
    }
    ctx->pc = 0x2557E8u;
    // 0x2557e8: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x2557e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2557ec: 0x120200a6  beq         $s0, $v0, . + 4 + (0xA6 << 2)
    ctx->pc = 0x2557ECu;
    {
        const bool branch_taken_0x2557ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2557F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2557ECu;
            // 0x2557f0: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2557ec) {
            ctx->pc = 0x255A88u;
            goto label_255a88;
        }
    }
    ctx->pc = 0x2557F4u;
    // 0x2557f4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2557f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2557f8: 0x120200a1  beq         $s0, $v0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x2557F8u;
    {
        const bool branch_taken_0x2557f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2557FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2557F8u;
            // 0x2557fc: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2557f8) {
            ctx->pc = 0x255A80u;
            goto label_255a80;
        }
    }
    ctx->pc = 0x255800u;
    // 0x255800: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x255800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x255804: 0x1202009c  beq         $s0, $v0, . + 4 + (0x9C << 2)
    ctx->pc = 0x255804u;
    {
        const bool branch_taken_0x255804 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x255808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255804u;
            // 0x255808: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255804) {
            ctx->pc = 0x255A78u;
            goto label_255a78;
        }
    }
    ctx->pc = 0x25580Cu;
    // 0x25580c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x25580cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x255810: 0x12020097  beq         $s0, $v0, . + 4 + (0x97 << 2)
    ctx->pc = 0x255810u;
    {
        const bool branch_taken_0x255810 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x255814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255810u;
            // 0x255814: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255810) {
            ctx->pc = 0x255A70u;
            goto label_255a70;
        }
    }
    ctx->pc = 0x255818u;
    // 0x255818: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x255818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x25581c: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x25581Cu;
    {
        const bool branch_taken_0x25581c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x255820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25581Cu;
            // 0x255820: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25581c) {
            ctx->pc = 0x255848u;
            goto label_255848;
        }
    }
    ctx->pc = 0x255824u;
    // 0x255824: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x255824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x255828: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x255828u;
    {
        const bool branch_taken_0x255828 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x25582Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255828u;
            // 0x25582c: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255828) {
            ctx->pc = 0x255838u;
            goto label_255838;
        }
    }
    ctx->pc = 0x255830u;
    // 0x255830: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x255830u;
    {
        const bool branch_taken_0x255830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255830u;
            // 0x255834: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255830) {
            ctx->pc = 0x255AA0u;
            goto label_255aa0;
        }
    }
    ctx->pc = 0x255838u;
label_255838:
    // 0x255838: 0xac20e500  sw          $zero, -0x1B00($at)
    ctx->pc = 0x255838u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960384), GPR_U32(ctx, 0));
    // 0x25583c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x25583cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x255840: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x255840u;
    {
        const bool branch_taken_0x255840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255840u;
            // 0x255844: 0xac20e4fc  sw          $zero, -0x1B04($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294960380), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255840) {
            ctx->pc = 0x255AD0u;
            goto label_255ad0;
        }
    }
    ctx->pc = 0x255848u;
label_255848:
    // 0x255848: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x255848u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
    // 0x25584c: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x25584cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x255850: 0x24a5e430  addiu       $a1, $a1, -0x1BD0
    ctx->pc = 0x255850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960176));
    // 0x255854: 0xb11021  addu        $v0, $a1, $s1
    ctx->pc = 0x255854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_255858:
    // 0x255858: 0x8044008c  lb          $a0, 0x8C($v0)
    ctx->pc = 0x255858u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x25585c: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x25585Cu;
    {
        const bool branch_taken_0x25585c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x255860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25585Cu;
            // 0x255860: 0x23d1021  addu        $v0, $s1, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25585c) {
            ctx->pc = 0x255878u;
            goto label_255878;
        }
    }
    ctx->pc = 0x255864u;
    // 0x255864: 0xa0440080  sb          $a0, 0x80($v0)
    ctx->pc = 0x255864u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 128), (uint8_t)GPR_U32(ctx, 4));
    // 0x255868: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x255868u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x25586c: 0x2a220020  slti        $v0, $s1, 0x20
    ctx->pc = 0x25586cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x255870: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x255870u;
    {
        const bool branch_taken_0x255870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x255874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255870u;
            // 0x255874: 0xb11021  addu        $v0, $a1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255870) {
            ctx->pc = 0x255858u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_255858;
        }
    }
    ctx->pc = 0x255878u;
label_255878:
    // 0x255878: 0x23d1021  addu        $v0, $s1, $sp
    ctx->pc = 0x255878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
    // 0x25587c: 0xa0400080  sb          $zero, 0x80($v0)
    ctx->pc = 0x25587cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 128), (uint8_t)GPR_U32(ctx, 0));
    // 0x255880: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x255880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x255884: 0xc0b497c  jal         func_2D25F0
    ctx->pc = 0x255884u;
    SET_GPR_U32(ctx, 31, 0x25588Cu);
    ctx->pc = 0x255888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x255884u;
            // 0x255888: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D25F0u;
    if (runtime->hasFunction(0x2D25F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D25F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25588Cu; }
        if (ctx->pc != 0x25588Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMapPath__FPcPc_0x2d25f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25588Cu; }
        if (ctx->pc != 0x25588Cu) { return; }
    }
    ctx->pc = 0x25588Cu;
label_25588c:
    // 0x25588c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x25588cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x255890: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x255890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x255894: 0xc0527f4  jal         func_149FD0
    ctx->pc = 0x255894u;
    SET_GPR_U32(ctx, 31, 0x25589Cu);
    ctx->pc = 0x255898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x255894u;
            // 0x255898: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149FD0u;
    if (runtime->hasFunction(0x149FD0u)) {
        auto targetFn = runtime->lookupFunction(0x149FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25589Cu; }
        if (ctx->pc != 0x25589Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DivPathName__FPcPcPc_0x149fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25589Cu; }
        if (ctx->pc != 0x25589Cu) { return; }
    }
    ctx->pc = 0x25589Cu;
label_25589c:
    // 0x25589c: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x25589cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x2558a0: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x2558a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2558a4: 0x2442e430  addiu       $v0, $v0, -0x1BD0
    ctx->pc = 0x2558a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960176));
    // 0x2558a8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2558a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2558ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2558acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2558b0: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2558B0u;
    SET_GPR_U32(ctx, 31, 0x2558B8u);
    ctx->pc = 0x2558B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2558B0u;
            // 0x2558b4: 0x2445008c  addiu       $a1, $v0, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2558B8u; }
        if (ctx->pc != 0x2558B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2558B8u; }
        if (ctx->pc != 0x2558B8u) { return; }
    }
    ctx->pc = 0x2558B8u;
label_2558b8:
    // 0x2558b8: 0xc064268  jal         func_1909A0
    ctx->pc = 0x2558B8u;
    SET_GPR_U32(ctx, 31, 0x2558C0u);
    ctx->pc = 0x1909A0u;
    if (runtime->hasFunction(0x1909A0u)) {
        auto targetFn = runtime->lookupFunction(0x1909A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2558C0u; }
        if (ctx->pc != 0x2558C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowLoopNo__Fv_0x1909a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2558C0u; }
        if (ctx->pc != 0x2558C0u) { return; }
    }
    ctx->pc = 0x2558C0u;
label_2558c0:
    // 0x2558c0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2558c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2558c4: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2558C4u;
    {
        const bool branch_taken_0x2558c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2558C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2558C4u;
            // 0x2558c8: 0x3c1101ea  lui         $s1, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2558c4) {
            ctx->pc = 0x2558E8u;
            goto label_2558e8;
        }
    }
    ctx->pc = 0x2558CCu;
    // 0x2558cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2558ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2558d0: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2558D0u;
    {
        const bool branch_taken_0x2558d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2558D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2558D0u;
            // 0x2558d4: 0x3c1101ea  lui         $s1, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2558d0) {
            ctx->pc = 0x2558E0u;
            goto label_2558e0;
        }
    }
    ctx->pc = 0x2558D8u;
    // 0x2558d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2558D8u;
    {
        const bool branch_taken_0x2558d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2558d8) {
            ctx->pc = 0x2558F0u;
            goto label_2558f0;
        }
    }
    ctx->pc = 0x2558E0u;
label_2558e0:
    // 0x2558e0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2558E0u;
    {
        const bool branch_taken_0x2558e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2558E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2558E0u;
            // 0x2558e4: 0x2631e9f0  addiu       $s1, $s1, -0x1610 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961648));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2558e0) {
            ctx->pc = 0x255900u;
            goto label_255900;
        }
    }
    ctx->pc = 0x2558E8u;
label_2558e8:
    // 0x2558e8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2558E8u;
    {
        const bool branch_taken_0x2558e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2558ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2558E8u;
            // 0x2558ec: 0x2631f560  addiu       $s1, $s1, -0xAA0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294964576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2558e8) {
            ctx->pc = 0x255900u;
            goto label_255900;
        }
    }
    ctx->pc = 0x2558F0u;
label_2558f0:
    // 0x2558f0: 0xc098a38  jal         func_2628E0
    ctx->pc = 0x2558F0u;
    SET_GPR_U32(ctx, 31, 0x2558F8u);
    ctx->pc = 0x2628E0u;
    if (runtime->hasFunction(0x2628E0u)) {
        auto targetFn = runtime->lookupFunction(0x2628E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2558F8u; }
        if (ctx->pc != 0x2558F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EdEventEnd__Fv_0x2628e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2558F8u; }
        if (ctx->pc != 0x2558F8u) { return; }
    }
    ctx->pc = 0x2558F8u;
label_2558f8:
    // 0x2558f8: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x2558F8u;
    {
        const bool branch_taken_0x2558f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2558FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2558F8u;
            // 0x2558fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2558f8) {
            ctx->pc = 0x255AD0u;
            goto label_255ad0;
        }
    }
    ctx->pc = 0x255900u;
label_255900:
    // 0x255900: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x255900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x255904: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x255904u;
    SET_GPR_U32(ctx, 31, 0x25590Cu);
    ctx->pc = 0x255908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x255904u;
            // 0x255908: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25590Cu; }
        if (ctx->pc != 0x25590Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25590Cu; }
        if (ctx->pc != 0x25590Cu) { return; }
    }
    ctx->pc = 0x25590Cu;
label_25590c:
    // 0x25590c: 0x8f868ad0  lw          $a2, -0x7530($gp)
    ctx->pc = 0x25590cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x255910: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x255910u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x255914: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x255914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x255918: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x255918u;
    SET_GPR_U32(ctx, 31, 0x255920u);
    ctx->pc = 0x25591Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x255918u;
            // 0x25591c: 0x24a5c420  addiu       $a1, $a1, -0x3BE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951968));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255920u; }
        if (ctx->pc != 0x255920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255920u; }
        if (ctx->pc != 0x255920u) { return; }
    }
    ctx->pc = 0x255920u;
label_255920:
    // 0x255920: 0xc04a422  jal         func_129088
    ctx->pc = 0x255920u;
    SET_GPR_U32(ctx, 31, 0x255928u);
    ctx->pc = 0x255924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x255920u;
            // 0x255924: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255928u; }
        if (ctx->pc != 0x255928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255928u; }
        if (ctx->pc != 0x255928u) { return; }
    }
    ctx->pc = 0x255928u;
label_255928:
    // 0x255928: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x255928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x25592c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x25592cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x255930: 0xa04000fc  sb          $zero, 0xFC($v0)
    ctx->pc = 0x255930u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 252), (uint8_t)GPR_U32(ctx, 0));
    // 0x255934: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x255934u;
    SET_GPR_U32(ctx, 31, 0x25593Cu);
    ctx->pc = 0x255938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x255934u;
            // 0x255938: 0x27a50200  addiu       $a1, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25593Cu; }
        if (ctx->pc != 0x25593Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25593Cu; }
        if (ctx->pc != 0x25593Cu) { return; }
    }
    ctx->pc = 0x25593Cu;
label_25593c:
    // 0x25593c: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x25593cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x255940: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x255940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255944: 0xc04e780  jal         func_139E00
    ctx->pc = 0x255944u;
    SET_GPR_U32(ctx, 31, 0x25594Cu);
    ctx->pc = 0x255948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x255944u;
            // 0x255948: 0xae20001c  sw          $zero, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25594Cu; }
        if (ctx->pc != 0x25594Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25594Cu; }
        if (ctx->pc != 0x25594Cu) { return; }
    }
    ctx->pc = 0x25594Cu;
label_25594c:
    // 0x25594c: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x25594cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x255950: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x255950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x255954: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x255954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x255958: 0x27a6021c  addiu       $a2, $sp, 0x21C
    ctx->pc = 0x255958u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 540));
    // 0x25595c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25595cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255960: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x255960u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x255964: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x255964u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x255968: 0xc0524dc  jal         func_149370
    ctx->pc = 0x255968u;
    SET_GPR_U32(ctx, 31, 0x255970u);
    ctx->pc = 0x25596Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x255968u;
            // 0x25596c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255970u; }
        if (ctx->pc != 0x255970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255970u; }
        if (ctx->pc != 0x255970u) { return; }
    }
    ctx->pc = 0x255970u;
label_255970:
    // 0x255970: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x255970u;
    {
        const bool branch_taken_0x255970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x255974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255970u;
            // 0x255974: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255970) {
            ctx->pc = 0x2559E8u;
            goto label_2559e8;
        }
    }
    ctx->pc = 0x255978u;
    // 0x255978: 0x8fa3021c  lw          $v1, 0x21C($sp)
    ctx->pc = 0x255978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
    // 0x25597c: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x25597cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x255980: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x255980u;
    {
        const bool branch_taken_0x255980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x255984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255980u;
            // 0x255984: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255980) {
            ctx->pc = 0x255990u;
            goto label_255990;
        }
    }
    ctx->pc = 0x255988u;
    // 0x255988: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x255988u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x25598c: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x25598cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_255990:
    // 0x255990: 0xc04e748  jal         func_139D20
    ctx->pc = 0x255990u;
    SET_GPR_U32(ctx, 31, 0x255998u);
    ctx->pc = 0x255994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x255990u;
            // 0x255994: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255998u; }
        if (ctx->pc != 0x255998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255998u; }
        if (ctx->pc != 0x255998u) { return; }
    }
    ctx->pc = 0x255998u;
label_255998:
    // 0x255998: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x255998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25599c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x25599cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2559a0: 0xc095408  jal         func_255020
    ctx->pc = 0x2559A0u;
    SET_GPR_U32(ctx, 31, 0x2559A8u);
    ctx->pc = 0x2559A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2559A0u;
            // 0x2559a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x255020u;
    if (runtime->hasFunction(0x255020u)) {
        auto targetFn = runtime->lookupFunction(0x255020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2559A8u; }
        if (ctx->pc != 0x2559A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetEventScript__FPcPcP9mgCMemory_0x255020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2559A8u; }
        if (ctx->pc != 0x2559A8u) { return; }
    }
    ctx->pc = 0x2559A8u;
label_2559a8:
    // 0x2559a8: 0xc095518  jal         func_255460
    ctx->pc = 0x2559A8u;
    SET_GPR_U32(ctx, 31, 0x2559B0u);
    ctx->pc = 0x255460u;
    if (runtime->hasFunction(0x255460u)) {
        auto targetFn = runtime->lookupFunction(0x255460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2559B0u; }
        if (ctx->pc != 0x2559B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartEventSyori__Fv_0x255460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2559B0u; }
        if (ctx->pc != 0x2559B0u) { return; }
    }
    ctx->pc = 0x2559B0u;
label_2559b0:
    // 0x2559b0: 0xc064268  jal         func_1909A0
    ctx->pc = 0x2559B0u;
    SET_GPR_U32(ctx, 31, 0x2559B8u);
    ctx->pc = 0x2559B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2559B0u;
            // 0x2559b4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1909A0u;
    if (runtime->hasFunction(0x1909A0u)) {
        auto targetFn = runtime->lookupFunction(0x1909A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2559B8u; }
        if (ctx->pc != 0x2559B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowLoopNo__Fv_0x1909a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2559B8u; }
        if (ctx->pc != 0x2559B8u) { return; }
    }
    ctx->pc = 0x2559B8u;
label_2559b8:
    // 0x2559b8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2559b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2559bc: 0x14430041  bne         $v0, $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x2559BCu;
    {
        const bool branch_taken_0x2559bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2559bc) {
            ctx->pc = 0x255AC4u;
            goto label_255ac4;
        }
    }
    ctx->pc = 0x2559C4u;
    // 0x2559c4: 0x620003f  bltz        $s1, . + 4 + (0x3F << 2)
    ctx->pc = 0x2559C4u;
    {
        const bool branch_taken_0x2559c4 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x2559c4) {
            ctx->pc = 0x255AC4u;
            goto label_255ac4;
        }
    }
    ctx->pc = 0x2559CCu;
    // 0x2559cc: 0x8f8297dc  lw          $v0, -0x6824($gp)
    ctx->pc = 0x2559ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x2559d0: 0xac402e88  sw          $zero, 0x2E88($v0)
    ctx->pc = 0x2559d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 11912), GPR_U32(ctx, 0));
    // 0x2559d4: 0x8f858dac  lw          $a1, -0x7254($gp)
    ctx->pc = 0x2559d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
    // 0x2559d8: 0xc09542c  jal         func_2550B0
    ctx->pc = 0x2559D8u;
    SET_GPR_U32(ctx, 31, 0x2559E0u);
    ctx->pc = 0x2559DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2559D8u;
            // 0x2559dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2550B0u;
    if (runtime->hasFunction(0x2550B0u)) {
        auto targetFn = runtime->lookupFunction(0x2550B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2559E0u; }
        if (ctx->pc != 0x2559E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RunEvent__FiP6CScene_0x2550b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2559E0u; }
        if (ctx->pc != 0x2559E0u) { return; }
    }
    ctx->pc = 0x2559E0u;
label_2559e0:
    // 0x2559e0: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x2559E0u;
    {
        const bool branch_taken_0x2559e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2559e0) {
            ctx->pc = 0x255AC4u;
            goto label_255ac4;
        }
    }
    ctx->pc = 0x2559E8u;
label_2559e8:
    // 0x2559e8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2559e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2559ec: 0x27a6021c  addiu       $a2, $sp, 0x21C
    ctx->pc = 0x2559ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 540));
    // 0x2559f0: 0xc0524dc  jal         func_149370
    ctx->pc = 0x2559F0u;
    SET_GPR_U32(ctx, 31, 0x2559F8u);
    ctx->pc = 0x2559F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2559F0u;
            // 0x2559f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2559F8u; }
        if (ctx->pc != 0x2559F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2559F8u; }
        if (ctx->pc != 0x2559F8u) { return; }
    }
    ctx->pc = 0x2559F8u;
label_2559f8:
    // 0x2559f8: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2559F8u;
    {
        const bool branch_taken_0x2559f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2559f8) {
            ctx->pc = 0x255AC4u;
            goto label_255ac4;
        }
    }
    ctx->pc = 0x255A00u;
    // 0x255a00: 0x8fa3021c  lw          $v1, 0x21C($sp)
    ctx->pc = 0x255a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
    // 0x255a04: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x255a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x255a08: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x255A08u;
    {
        const bool branch_taken_0x255a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x255A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255A08u;
            // 0x255a0c: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255a08) {
            ctx->pc = 0x255A18u;
            goto label_255a18;
        }
    }
    ctx->pc = 0x255A10u;
    // 0x255a10: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x255a10u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x255a14: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x255a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_255a18:
    // 0x255a18: 0xc04e748  jal         func_139D20
    ctx->pc = 0x255A18u;
    SET_GPR_U32(ctx, 31, 0x255A20u);
    ctx->pc = 0x255A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x255A18u;
            // 0x255a1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255A20u; }
        if (ctx->pc != 0x255A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255A20u; }
        if (ctx->pc != 0x255A20u) { return; }
    }
    ctx->pc = 0x255A20u;
label_255a20:
    // 0x255a20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x255a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255a24: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x255a24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255a28: 0xc095408  jal         func_255020
    ctx->pc = 0x255A28u;
    SET_GPR_U32(ctx, 31, 0x255A30u);
    ctx->pc = 0x255A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x255A28u;
            // 0x255a2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x255020u;
    if (runtime->hasFunction(0x255020u)) {
        auto targetFn = runtime->lookupFunction(0x255020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255A30u; }
        if (ctx->pc != 0x255A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetEventScript__FPcPcP9mgCMemory_0x255020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255A30u; }
        if (ctx->pc != 0x255A30u) { return; }
    }
    ctx->pc = 0x255A30u;
label_255a30:
    // 0x255a30: 0xc095518  jal         func_255460
    ctx->pc = 0x255A30u;
    SET_GPR_U32(ctx, 31, 0x255A38u);
    ctx->pc = 0x255460u;
    if (runtime->hasFunction(0x255460u)) {
        auto targetFn = runtime->lookupFunction(0x255460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255A38u; }
        if (ctx->pc != 0x255A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartEventSyori__Fv_0x255460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255A38u; }
        if (ctx->pc != 0x255A38u) { return; }
    }
    ctx->pc = 0x255A38u;
label_255a38:
    // 0x255a38: 0xc064268  jal         func_1909A0
    ctx->pc = 0x255A38u;
    SET_GPR_U32(ctx, 31, 0x255A40u);
    ctx->pc = 0x255A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x255A38u;
            // 0x255a3c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1909A0u;
    if (runtime->hasFunction(0x1909A0u)) {
        auto targetFn = runtime->lookupFunction(0x1909A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255A40u; }
        if (ctx->pc != 0x255A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowLoopNo__Fv_0x1909a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255A40u; }
        if (ctx->pc != 0x255A40u) { return; }
    }
    ctx->pc = 0x255A40u;
label_255a40:
    // 0x255a40: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x255a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x255a44: 0x1443001f  bne         $v0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x255A44u;
    {
        const bool branch_taken_0x255a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x255a44) {
            ctx->pc = 0x255AC4u;
            goto label_255ac4;
        }
    }
    ctx->pc = 0x255A4Cu;
    // 0x255a4c: 0x620001d  bltz        $s1, . + 4 + (0x1D << 2)
    ctx->pc = 0x255A4Cu;
    {
        const bool branch_taken_0x255a4c = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x255a4c) {
            ctx->pc = 0x255AC4u;
            goto label_255ac4;
        }
    }
    ctx->pc = 0x255A54u;
    // 0x255a54: 0x8f8297dc  lw          $v0, -0x6824($gp)
    ctx->pc = 0x255a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x255a58: 0xac402e88  sw          $zero, 0x2E88($v0)
    ctx->pc = 0x255a58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 11912), GPR_U32(ctx, 0));
    // 0x255a5c: 0x8f858dac  lw          $a1, -0x7254($gp)
    ctx->pc = 0x255a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
    // 0x255a60: 0xc09542c  jal         func_2550B0
    ctx->pc = 0x255A60u;
    SET_GPR_U32(ctx, 31, 0x255A68u);
    ctx->pc = 0x255A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x255A60u;
            // 0x255a64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2550B0u;
    if (runtime->hasFunction(0x2550B0u)) {
        auto targetFn = runtime->lookupFunction(0x2550B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255A68u; }
        if (ctx->pc != 0x255A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RunEvent__FiP6CScene_0x2550b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255A68u; }
        if (ctx->pc != 0x255A68u) { return; }
    }
    ctx->pc = 0x255A68u;
label_255a68:
    // 0x255a68: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x255A68u;
    {
        const bool branch_taken_0x255a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x255a68) {
            ctx->pc = 0x255AC4u;
            goto label_255ac4;
        }
    }
    ctx->pc = 0x255A70u;
label_255a70:
    // 0x255a70: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x255A70u;
    {
        const bool branch_taken_0x255a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255A70u;
            // 0x255a74: 0xac20e4fc  sw          $zero, -0x1B04($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294960380), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255a70) {
            ctx->pc = 0x255AD0u;
            goto label_255ad0;
        }
    }
    ctx->pc = 0x255A78u;
label_255a78:
    // 0x255a78: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x255A78u;
    {
        const bool branch_taken_0x255a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255A78u;
            // 0x255a7c: 0xac20e4fc  sw          $zero, -0x1B04($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294960380), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255a78) {
            ctx->pc = 0x255AD0u;
            goto label_255ad0;
        }
    }
    ctx->pc = 0x255A80u;
label_255a80:
    // 0x255a80: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x255A80u;
    {
        const bool branch_taken_0x255a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255A80u;
            // 0x255a84: 0xac20e4fc  sw          $zero, -0x1B04($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294960380), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255a80) {
            ctx->pc = 0x255AD0u;
            goto label_255ad0;
        }
    }
    ctx->pc = 0x255A88u;
label_255a88:
    // 0x255a88: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x255A88u;
    {
        const bool branch_taken_0x255a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255A88u;
            // 0x255a8c: 0xac20e4fc  sw          $zero, -0x1B04($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294960380), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255a88) {
            ctx->pc = 0x255AD0u;
            goto label_255ad0;
        }
    }
    ctx->pc = 0x255A90u;
label_255a90:
    // 0x255a90: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x255A90u;
    {
        const bool branch_taken_0x255a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255A90u;
            // 0x255a94: 0xac20e4fc  sw          $zero, -0x1B04($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294960380), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255a90) {
            ctx->pc = 0x255AD0u;
            goto label_255ad0;
        }
    }
    ctx->pc = 0x255A98u;
label_255a98:
    // 0x255a98: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x255A98u;
    {
        const bool branch_taken_0x255a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255A98u;
            // 0x255a9c: 0xac20e4fc  sw          $zero, -0x1B04($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294960380), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255a98) {
            ctx->pc = 0x255AD0u;
            goto label_255ad0;
        }
    }
    ctx->pc = 0x255AA0u;
label_255aa0:
    // 0x255aa0: 0x8c22e40c  lw          $v0, -0x1BF4($at)
    ctx->pc = 0x255aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294960140)));
    // 0x255aa4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x255AA4u;
    {
        const bool branch_taken_0x255aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x255AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255AA4u;
            // 0x255aa8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255aa4) {
            ctx->pc = 0x255ABCu;
            goto label_255abc;
        }
    }
    ctx->pc = 0x255AACu;
    // 0x255aac: 0xc098a38  jal         func_2628E0
    ctx->pc = 0x255AACu;
    SET_GPR_U32(ctx, 31, 0x255AB4u);
    ctx->pc = 0x2628E0u;
    if (runtime->hasFunction(0x2628E0u)) {
        auto targetFn = runtime->lookupFunction(0x2628E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255AB4u; }
        if (ctx->pc != 0x255AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EdEventEnd__Fv_0x2628e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255AB4u; }
        if (ctx->pc != 0x255AB4u) { return; }
    }
    ctx->pc = 0x255AB4u;
label_255ab4:
    // 0x255ab4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x255AB4u;
    {
        const bool branch_taken_0x255ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255AB4u;
            // 0x255ab8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255ab4) {
            ctx->pc = 0x255AD0u;
            goto label_255ad0;
        }
    }
    ctx->pc = 0x255ABCu;
label_255abc:
    // 0x255abc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x255ABCu;
    {
        const bool branch_taken_0x255abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255ABCu;
            // 0x255ac0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255abc) {
            ctx->pc = 0x255AD4u;
            goto label_255ad4;
        }
    }
    ctx->pc = 0x255AC4u;
label_255ac4:
    // 0x255ac4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x255ac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x255ac8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x255ac8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255acc: 0xac20e4fc  sw          $zero, -0x1B04($at)
    ctx->pc = 0x255accu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960380), GPR_U32(ctx, 0));
label_255ad0:
    // 0x255ad0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x255ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_255ad4:
    // 0x255ad4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x255ad4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x255ad8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x255ad8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x255adc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x255adcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x255ae0: 0x3e00008  jr          $ra
    ctx->pc = 0x255AE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x255AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255AE0u;
            // 0x255ae4: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x255AE8u;
}
