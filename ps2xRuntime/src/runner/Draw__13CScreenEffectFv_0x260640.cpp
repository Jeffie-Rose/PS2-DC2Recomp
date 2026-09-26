#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__13CScreenEffectFv
// Address: 0x260640 - 0x2608d0
void Draw__13CScreenEffectFv_0x260640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__13CScreenEffectFv_0x260640");
#endif

    switch (ctx->pc) {
        case 0x260680u: goto label_260680;
        case 0x260688u: goto label_260688;
        case 0x260698u: goto label_260698;
        case 0x2606a4u: goto label_2606a4;
        case 0x2606b0u: goto label_2606b0;
        case 0x2606bcu: goto label_2606bc;
        case 0x2606c8u: goto label_2606c8;
        case 0x2606d4u: goto label_2606d4;
        case 0x2606e0u: goto label_2606e0;
        case 0x2606ecu: goto label_2606ec;
        case 0x260704u: goto label_260704;
        case 0x260714u: goto label_260714;
        case 0x260728u: goto label_260728;
        case 0x260738u: goto label_260738;
        case 0x26074cu: goto label_26074c;
        case 0x260754u: goto label_260754;
        case 0x260798u: goto label_260798;
        case 0x2607a0u: goto label_2607a0;
        case 0x2607b0u: goto label_2607b0;
        case 0x2607bcu: goto label_2607bc;
        case 0x2607c8u: goto label_2607c8;
        case 0x2607d4u: goto label_2607d4;
        case 0x2607e0u: goto label_2607e0;
        case 0x2607ecu: goto label_2607ec;
        case 0x2607f8u: goto label_2607f8;
        case 0x260810u: goto label_260810;
        case 0x260828u: goto label_260828;
        case 0x260838u: goto label_260838;
        case 0x26084cu: goto label_26084c;
        case 0x26085cu: goto label_26085c;
        case 0x260870u: goto label_260870;
        case 0x260878u: goto label_260878;
        case 0x2608bcu: goto label_2608bc;
        default: break;
    }

    ctx->pc = 0x260640u;

    // 0x260640: 0x27bdfdb0  addiu       $sp, $sp, -0x250
    ctx->pc = 0x260640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966704));
    // 0x260644: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x260644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x260648: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x260648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26064c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26064cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x260650: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x260650u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260654: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x260654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x260658: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x260658u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x26065c: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x26065Cu;
    {
        const bool branch_taken_0x26065c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x260660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26065Cu;
            // 0x260660: 0x26101ef0  addiu       $s0, $s0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26065c) {
            ctx->pc = 0x260754u;
            goto label_260754;
        }
    }
    ctx->pc = 0x260664u;
    // 0x260664: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x260664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x260668: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x260668u;
    {
        const bool branch_taken_0x260668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x260668) {
            ctx->pc = 0x260754u;
            goto label_260754;
        }
    }
    ctx->pc = 0x260670u;
    // 0x260670: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x260670u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x260674: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x260674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260678: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x260678u;
    SET_GPR_U32(ctx, 31, 0x260680u);
    ctx->pc = 0x26067Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x260678u;
            // 0x26067c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260680u; }
        if (ctx->pc != 0x260680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260680u; }
        if (ctx->pc != 0x260680u) { return; }
    }
    ctx->pc = 0x260680u;
label_260680:
    // 0x260680: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x260680u;
    SET_GPR_U32(ctx, 31, 0x260688u);
    ctx->pc = 0x260684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x260680u;
            // 0x260684: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260688u; }
        if (ctx->pc != 0x260688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260688u; }
        if (ctx->pc != 0x260688u) { return; }
    }
    ctx->pc = 0x260688u;
label_260688:
    // 0x260688: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x260688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26068c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26068cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260690: 0xc04d104  jal         func_134410
    ctx->pc = 0x260690u;
    SET_GPR_U32(ctx, 31, 0x260698u);
    ctx->pc = 0x260694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x260690u;
            // 0x260694: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260698u; }
        if (ctx->pc != 0x260698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260698u; }
        if (ctx->pc != 0x260698u) { return; }
    }
    ctx->pc = 0x260698u;
label_260698:
    // 0x260698: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x260698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26069c: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x26069Cu;
    SET_GPR_U32(ctx, 31, 0x2606A4u);
    ctx->pc = 0x2606A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26069Cu;
            // 0x2606a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2606A4u; }
        if (ctx->pc != 0x2606A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2606A4u; }
        if (ctx->pc != 0x2606A4u) { return; }
    }
    ctx->pc = 0x2606A4u;
label_2606a4:
    // 0x2606a4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2606a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2606a8: 0xc04d3bc  jal         func_134EF0
    ctx->pc = 0x2606A8u;
    SET_GPR_U32(ctx, 31, 0x2606B0u);
    ctx->pc = 0x2606ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2606A8u;
            // 0x2606ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EF0u;
    if (runtime->hasFunction(0x134EF0u)) {
        auto targetFn = runtime->lookupFunction(0x134EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2606B0u; }
        if (ctx->pc != 0x2606B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTestEnable__11mgCDrawPrimFi_0x134ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2606B0u; }
        if (ctx->pc != 0x2606B0u) { return; }
    }
    ctx->pc = 0x2606B0u;
label_2606b0:
    // 0x2606b0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2606b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2606b4: 0xc04d3b0  jal         func_134EC0
    ctx->pc = 0x2606B4u;
    SET_GPR_U32(ctx, 31, 0x2606BCu);
    ctx->pc = 0x2606B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2606B4u;
            // 0x2606b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2606BCu; }
        if (ctx->pc != 0x2606BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2606BCu; }
        if (ctx->pc != 0x2606BCu) { return; }
    }
    ctx->pc = 0x2606BCu;
label_2606bc:
    // 0x2606bc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2606bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2606c0: 0xc04d424  jal         func_135090
    ctx->pc = 0x2606C0u;
    SET_GPR_U32(ctx, 31, 0x2606C8u);
    ctx->pc = 0x2606C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2606C0u;
            // 0x2606c4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135090u;
    if (runtime->hasFunction(0x135090u)) {
        auto targetFn = runtime->lookupFunction(0x135090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2606C8u; }
        if (ctx->pc != 0x2606C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZMask__11mgCDrawPrimFi_0x135090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2606C8u; }
        if (ctx->pc != 0x2606C8u) { return; }
    }
    ctx->pc = 0x2606C8u;
label_2606c8:
    // 0x2606c8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2606c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2606cc: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x2606CCu;
    SET_GPR_U32(ctx, 31, 0x2606D4u);
    ctx->pc = 0x2606D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2606CCu;
            // 0x2606d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2606D4u; }
        if (ctx->pc != 0x2606D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2606D4u; }
        if (ctx->pc != 0x2606D4u) { return; }
    }
    ctx->pc = 0x2606D4u;
label_2606d4:
    // 0x2606d4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2606d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2606d8: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x2606D8u;
    SET_GPR_U32(ctx, 31, 0x2606E0u);
    ctx->pc = 0x2606DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2606D8u;
            // 0x2606dc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2606E0u; }
        if (ctx->pc != 0x2606E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2606E0u; }
        if (ctx->pc != 0x2606E0u) { return; }
    }
    ctx->pc = 0x2606E0u;
label_2606e0:
    // 0x2606e0: 0x8e25002c  lw          $a1, 0x2C($s1)
    ctx->pc = 0x2606e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x2606e4: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x2606E4u;
    SET_GPR_U32(ctx, 31, 0x2606ECu);
    ctx->pc = 0x2606E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2606E4u;
            // 0x2606e8: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2606ECu; }
        if (ctx->pc != 0x2606ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2606ECu; }
        if (ctx->pc != 0x2606ECu) { return; }
    }
    ctx->pc = 0x2606ECu;
label_2606ec:
    // 0x2606ec: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2606ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2606f0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2606f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2606f4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2606f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2606f8: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2606f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2606fc: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2606FCu;
    SET_GPR_U32(ctx, 31, 0x260704u);
    ctx->pc = 0x260700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2606FCu;
            // 0x260700: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260704u; }
        if (ctx->pc != 0x260704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260704u; }
        if (ctx->pc != 0x260704u) { return; }
    }
    ctx->pc = 0x260704u;
label_260704:
    // 0x260704: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x260704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x260708: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x260708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26070c: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x26070Cu;
    SET_GPR_U32(ctx, 31, 0x260714u);
    ctx->pc = 0x260710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26070Cu;
            // 0x260710: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260714u; }
        if (ctx->pc != 0x260714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260714u; }
        if (ctx->pc != 0x260714u) { return; }
    }
    ctx->pc = 0x260714u;
label_260714:
    // 0x260714: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x260714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x260718: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x260718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26071c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x26071cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260720: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x260720u;
    SET_GPR_U32(ctx, 31, 0x260728u);
    ctx->pc = 0x260724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x260720u;
            // 0x260724: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260728u; }
        if (ctx->pc != 0x260728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260728u; }
        if (ctx->pc != 0x260728u) { return; }
    }
    ctx->pc = 0x260728u;
label_260728:
    // 0x260728: 0x8f858780  lw          $a1, -0x7880($gp)
    ctx->pc = 0x260728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x26072c: 0x8f868784  lw          $a2, -0x787C($gp)
    ctx->pc = 0x26072cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x260730: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x260730u;
    SET_GPR_U32(ctx, 31, 0x260738u);
    ctx->pc = 0x260734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x260730u;
            // 0x260734: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260738u; }
        if (ctx->pc != 0x260738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260738u; }
        if (ctx->pc != 0x260738u) { return; }
    }
    ctx->pc = 0x260738u;
label_260738:
    // 0x260738: 0x8f858780  lw          $a1, -0x7880($gp)
    ctx->pc = 0x260738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x26073c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x26073cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x260740: 0x8f868784  lw          $a2, -0x787C($gp)
    ctx->pc = 0x260740u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x260744: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x260744u;
    SET_GPR_U32(ctx, 31, 0x26074Cu);
    ctx->pc = 0x260748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x260744u;
            // 0x260748: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26074Cu; }
        if (ctx->pc != 0x26074Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26074Cu; }
        if (ctx->pc != 0x26074Cu) { return; }
    }
    ctx->pc = 0x26074Cu;
label_26074c:
    // 0x26074c: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x26074Cu;
    SET_GPR_U32(ctx, 31, 0x260754u);
    ctx->pc = 0x260750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26074Cu;
            // 0x260750: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260754u; }
        if (ctx->pc != 0x260754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260754u; }
        if (ctx->pc != 0x260754u) { return; }
    }
    ctx->pc = 0x260754u;
label_260754:
    // 0x260754: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x260754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x260758: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x260758u;
    {
        const bool branch_taken_0x260758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26075Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260758u;
            // 0x26075c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260758) {
            ctx->pc = 0x2608B4u;
            goto label_2608b4;
        }
    }
    ctx->pc = 0x260760u;
    // 0x260760: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x260760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x260764: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x260764u;
    {
        const bool branch_taken_0x260764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x260764) {
            ctx->pc = 0x2608B0u;
            goto label_2608b0;
        }
    }
    ctx->pc = 0x26076Cu;
    // 0x26076c: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x26076cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x260770: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x260770u;
    {
        const bool branch_taken_0x260770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x260770) {
            ctx->pc = 0x2608B0u;
            goto label_2608b0;
        }
    }
    ctx->pc = 0x260778u;
    // 0x260778: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x260778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x26077c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26077cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260780: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x260780u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x260784: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x260784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x260788: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x260788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x26078c: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x26078cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x260790: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x260790u;
    SET_GPR_U32(ctx, 31, 0x260798u);
    ctx->pc = 0x260794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x260790u;
            // 0x260794: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260798u; }
        if (ctx->pc != 0x260798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260798u; }
        if (ctx->pc != 0x260798u) { return; }
    }
    ctx->pc = 0x260798u;
label_260798:
    // 0x260798: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x260798u;
    SET_GPR_U32(ctx, 31, 0x2607A0u);
    ctx->pc = 0x26079Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x260798u;
            // 0x26079c: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2607A0u; }
        if (ctx->pc != 0x2607A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2607A0u; }
        if (ctx->pc != 0x2607A0u) { return; }
    }
    ctx->pc = 0x2607A0u;
label_2607a0:
    // 0x2607a0: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2607a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2607a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2607a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2607a8: 0xc04d104  jal         func_134410
    ctx->pc = 0x2607A8u;
    SET_GPR_U32(ctx, 31, 0x2607B0u);
    ctx->pc = 0x2607ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2607A8u;
            // 0x2607ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2607B0u; }
        if (ctx->pc != 0x2607B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2607B0u; }
        if (ctx->pc != 0x2607B0u) { return; }
    }
    ctx->pc = 0x2607B0u;
label_2607b0:
    // 0x2607b0: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2607b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2607b4: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x2607B4u;
    SET_GPR_U32(ctx, 31, 0x2607BCu);
    ctx->pc = 0x2607B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2607B4u;
            // 0x2607b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2607BCu; }
        if (ctx->pc != 0x2607BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2607BCu; }
        if (ctx->pc != 0x2607BCu) { return; }
    }
    ctx->pc = 0x2607BCu;
label_2607bc:
    // 0x2607bc: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2607bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2607c0: 0xc04d3bc  jal         func_134EF0
    ctx->pc = 0x2607C0u;
    SET_GPR_U32(ctx, 31, 0x2607C8u);
    ctx->pc = 0x2607C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2607C0u;
            // 0x2607c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EF0u;
    if (runtime->hasFunction(0x134EF0u)) {
        auto targetFn = runtime->lookupFunction(0x134EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2607C8u; }
        if (ctx->pc != 0x2607C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTestEnable__11mgCDrawPrimFi_0x134ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2607C8u; }
        if (ctx->pc != 0x2607C8u) { return; }
    }
    ctx->pc = 0x2607C8u;
label_2607c8:
    // 0x2607c8: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2607c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2607cc: 0xc04d3b0  jal         func_134EC0
    ctx->pc = 0x2607CCu;
    SET_GPR_U32(ctx, 31, 0x2607D4u);
    ctx->pc = 0x2607D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2607CCu;
            // 0x2607d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2607D4u; }
        if (ctx->pc != 0x2607D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2607D4u; }
        if (ctx->pc != 0x2607D4u) { return; }
    }
    ctx->pc = 0x2607D4u;
label_2607d4:
    // 0x2607d4: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2607d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2607d8: 0xc04d424  jal         func_135090
    ctx->pc = 0x2607D8u;
    SET_GPR_U32(ctx, 31, 0x2607E0u);
    ctx->pc = 0x2607DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2607D8u;
            // 0x2607dc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135090u;
    if (runtime->hasFunction(0x135090u)) {
        auto targetFn = runtime->lookupFunction(0x135090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2607E0u; }
        if (ctx->pc != 0x2607E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZMask__11mgCDrawPrimFi_0x135090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2607E0u; }
        if (ctx->pc != 0x2607E0u) { return; }
    }
    ctx->pc = 0x2607E0u;
label_2607e0:
    // 0x2607e0: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2607e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2607e4: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x2607E4u;
    SET_GPR_U32(ctx, 31, 0x2607ECu);
    ctx->pc = 0x2607E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2607E4u;
            // 0x2607e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2607ECu; }
        if (ctx->pc != 0x2607ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2607ECu; }
        if (ctx->pc != 0x2607ECu) { return; }
    }
    ctx->pc = 0x2607ECu;
label_2607ec:
    // 0x2607ec: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2607ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2607f0: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x2607F0u;
    SET_GPR_U32(ctx, 31, 0x2607F8u);
    ctx->pc = 0x2607F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2607F0u;
            // 0x2607f4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2607F8u; }
        if (ctx->pc != 0x2607F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2607F8u; }
        if (ctx->pc != 0x2607F8u) { return; }
    }
    ctx->pc = 0x2607F8u;
label_2607f8:
    // 0x2607f8: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x2607f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x2607fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2607fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x260800: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x260800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x260804: 0x8c450034  lw          $a1, 0x34($v0)
    ctx->pc = 0x260804u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x260808: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x260808u;
    SET_GPR_U32(ctx, 31, 0x260810u);
    ctx->pc = 0x26080Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x260808u;
            // 0x26080c: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260810u; }
        if (ctx->pc != 0x260810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260810u; }
        if (ctx->pc != 0x260810u) { return; }
    }
    ctx->pc = 0x260810u;
label_260810:
    // 0x260810: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x260810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x260814: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x260814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x260818: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x260818u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26081c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x26081cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260820: 0xc04d320  jal         func_134C80
    ctx->pc = 0x260820u;
    SET_GPR_U32(ctx, 31, 0x260828u);
    ctx->pc = 0x260824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x260820u;
            // 0x260824: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260828u; }
        if (ctx->pc != 0x260828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260828u; }
        if (ctx->pc != 0x260828u) { return; }
    }
    ctx->pc = 0x260828u;
label_260828:
    // 0x260828: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x260828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x26082c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26082cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260830: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x260830u;
    SET_GPR_U32(ctx, 31, 0x260838u);
    ctx->pc = 0x260834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x260830u;
            // 0x260834: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260838u; }
        if (ctx->pc != 0x260838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260838u; }
        if (ctx->pc != 0x260838u) { return; }
    }
    ctx->pc = 0x260838u;
label_260838:
    // 0x260838: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x260838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26083c: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x26083cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x260840: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x260840u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260844: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x260844u;
    SET_GPR_U32(ctx, 31, 0x26084Cu);
    ctx->pc = 0x260848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x260844u;
            // 0x260848: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26084Cu; }
        if (ctx->pc != 0x26084Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26084Cu; }
        if (ctx->pc != 0x26084Cu) { return; }
    }
    ctx->pc = 0x26084Cu;
label_26084c:
    // 0x26084c: 0x8f858780  lw          $a1, -0x7880($gp)
    ctx->pc = 0x26084cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x260850: 0x8f868784  lw          $a2, -0x787C($gp)
    ctx->pc = 0x260850u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x260854: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x260854u;
    SET_GPR_U32(ctx, 31, 0x26085Cu);
    ctx->pc = 0x260858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x260854u;
            // 0x260858: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26085Cu; }
        if (ctx->pc != 0x26085Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26085Cu; }
        if (ctx->pc != 0x26085Cu) { return; }
    }
    ctx->pc = 0x26085Cu;
label_26085c:
    // 0x26085c: 0x8f858780  lw          $a1, -0x7880($gp)
    ctx->pc = 0x26085cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x260860: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x260860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x260864: 0x8f868784  lw          $a2, -0x787C($gp)
    ctx->pc = 0x260864u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x260868: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x260868u;
    SET_GPR_U32(ctx, 31, 0x260870u);
    ctx->pc = 0x26086Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x260868u;
            // 0x26086c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260870u; }
        if (ctx->pc != 0x260870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260870u; }
        if (ctx->pc != 0x260870u) { return; }
    }
    ctx->pc = 0x260870u;
label_260870:
    // 0x260870: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x260870u;
    SET_GPR_U32(ctx, 31, 0x260878u);
    ctx->pc = 0x260874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x260870u;
            // 0x260874: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260878u; }
        if (ctx->pc != 0x260878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260878u; }
        if (ctx->pc != 0x260878u) { return; }
    }
    ctx->pc = 0x260878u;
label_260878:
    // 0x260878: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x260878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x26087c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26087cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x260880: 0xae220044  sw          $v0, 0x44($s1)
    ctx->pc = 0x260880u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
    // 0x260884: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x260884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x260888: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x260888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x26088c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x26088cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x260890: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x260890u;
    {
        const bool branch_taken_0x260890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x260890) {
            ctx->pc = 0x2608B0u;
            goto label_2608b0;
        }
    }
    ctx->pc = 0x260898u;
    // 0x260898: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x260898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x26089c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x26089cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2608a0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2608a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2608a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2608a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2608a8: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x2608a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
    // 0x2608ac: 0xae200044  sw          $zero, 0x44($s1)
    ctx->pc = 0x2608acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
label_2608b0:
    // 0x2608b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2608b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2608b4:
    // 0x2608b4: 0xc0980d0  jal         func_260340
    ctx->pc = 0x2608B4u;
    SET_GPR_U32(ctx, 31, 0x2608BCu);
    ctx->pc = 0x260340u;
    if (runtime->hasFunction(0x260340u)) {
        auto targetFn = runtime->lookupFunction(0x260340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2608BCu; }
        if (ctx->pc != 0x2608BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawRaster__7CRasterFv_0x260340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2608BCu; }
        if (ctx->pc != 0x2608BCu) { return; }
    }
    ctx->pc = 0x2608BCu;
label_2608bc:
    // 0x2608bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2608bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2608c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2608c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2608c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2608c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2608c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2608C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2608CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2608C8u;
            // 0x2608cc: 0x27bd0250  addiu       $sp, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2608D0u;
}
