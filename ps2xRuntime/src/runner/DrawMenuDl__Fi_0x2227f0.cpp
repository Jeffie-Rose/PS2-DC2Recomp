#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawMenuDl__Fi
// Address: 0x2227f0 - 0x2228fc
void DrawMenuDl__Fi_0x2227f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawMenuDl__Fi_0x2227f0");
#endif

    switch (ctx->pc) {
        case 0x222834u: goto label_222834;
        case 0x222858u: goto label_222858;
        case 0x22286cu: goto label_22286c;
        case 0x222874u: goto label_222874;
        case 0x222898u: goto label_222898;
        case 0x2228a8u: goto label_2228a8;
        case 0x2228b0u: goto label_2228b0;
        case 0x2228d4u: goto label_2228d4;
        case 0x2228e8u: goto label_2228e8;
        default: break;
    }

    ctx->pc = 0x2227f0u;

    // 0x2227f0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2227f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x2227f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2227f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2227f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2227f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2227fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2227fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x222800: 0x8f839394  lw          $v1, -0x6C6C($gp)
    ctx->pc = 0x222800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939540)));
    // 0x222804: 0x10600038  beqz        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x222804u;
    {
        const bool branch_taken_0x222804 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x222808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222804u;
            // 0x222808: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222804) {
            ctx->pc = 0x2228E8u;
            goto label_2228e8;
        }
    }
    ctx->pc = 0x22280Cu;
    // 0x22280c: 0x6010002  bgez        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22280Cu;
    {
        const bool branch_taken_0x22280c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x222810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22280Cu;
            // 0x222810: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22280c) {
            ctx->pc = 0x222818u;
            goto label_222818;
        }
    }
    ctx->pc = 0x222814u;
    // 0x222814: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x222814u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_222818:
    // 0x222818: 0x27a400ec  addiu       $a0, $sp, 0xEC
    ctx->pc = 0x222818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x22281c: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x22281cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
    // 0x222820: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x222820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222824: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x222824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x222828: 0x2407010e  addiu       $a3, $zero, 0x10E
    ctx->pc = 0x222828u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 270));
    // 0x22282c: 0xc088940  jal         func_222500
    ctx->pc = 0x22282Cu;
    SET_GPR_U32(ctx, 31, 0x222834u);
    ctx->pc = 0x222830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22282Cu;
            // 0x222830: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222500u;
    if (runtime->hasFunction(0x222500u)) {
        auto targetFn = runtime->lookupFunction(0x222500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222834u; }
        if (ctx->pc != 0x222834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuDl__FRiiiii_0x222500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222834u; }
        if (ctx->pc != 0x222834u) { return; }
    }
    ctx->pc = 0x222834u;
label_222834:
    // 0x222834: 0x8f918ad0  lw          $s1, -0x7530($gp)
    ctx->pc = 0x222834u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x222838: 0x1a200002  blez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x222838u;
    {
        const bool branch_taken_0x222838 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x22283Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222838u;
            // 0x22283c: 0x3c040038  lui         $a0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222838) {
            ctx->pc = 0x222844u;
            goto label_222844;
        }
    }
    ctx->pc = 0x222840u;
    // 0x222840: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x222840u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_222844:
    // 0x222844: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x222844u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x222848: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x222848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x22284c: 0x24a5a630  addiu       $a1, $a1, -0x59D0
    ctx->pc = 0x22284cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944304));
    // 0x222850: 0xc04b414  jal         func_12D050
    ctx->pc = 0x222850u;
    SET_GPR_U32(ctx, 31, 0x222858u);
    ctx->pc = 0x222854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222850u;
            // 0x222854: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222858u; }
        if (ctx->pc != 0x222858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222858u; }
        if (ctx->pc != 0x222858u) { return; }
    }
    ctx->pc = 0x222858u;
label_222858:
    // 0x222858: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x222858u;
    {
        const bool branch_taken_0x222858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x222858) {
            ctx->pc = 0x2228E8u;
            goto label_2228e8;
        }
    }
    ctx->pc = 0x222860u;
    // 0x222860: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x222860u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x222864: 0xc08878c  jal         func_221E30
    ctx->pc = 0x222864u;
    SET_GPR_U32(ctx, 31, 0x22286Cu);
    ctx->pc = 0x222868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222864u;
            // 0x222868: 0x27a400ec  addiu       $a0, $sp, 0xEC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221E30u;
    if (runtime->hasFunction(0x221E30u)) {
        auto targetFn = runtime->lookupFunction(0x221E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22286Cu; }
        if (ctx->pc != 0x22286Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuReloadTexture__FRii_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22286Cu; }
        if (ctx->pc != 0x22286Cu) { return; }
    }
    ctx->pc = 0x22286Cu;
label_22286c:
    // 0x22286c: 0xc088920  jal         func_222480
    ctx->pc = 0x22286Cu;
    SET_GPR_U32(ctx, 31, 0x222874u);
    ctx->pc = 0x222870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22286Cu;
            // 0x222870: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222480u;
    if (runtime->hasFunction(0x222480u)) {
        auto targetFn = runtime->lookupFunction(0x222480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222874u; }
        if (ctx->pc != 0x222874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMenuDl__Fi_0x222480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222874u; }
        if (ctx->pc != 0x222874u) { return; }
    }
    ctx->pc = 0x222874u;
label_222874:
    // 0x222874: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x222874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x222878: 0x1128c0  sll         $a1, $s1, 3
    ctx->pc = 0x222878u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x22287c: 0x24630460  addiu       $v1, $v1, 0x460
    ctx->pc = 0x22287cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1120));
    // 0x222880: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x222880u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x222884: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x222884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x222888: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x222888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22288c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x22288cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x222890: 0xc0873cc  jal         func_21CF30
    ctx->pc = 0x222890u;
    SET_GPR_U32(ctx, 31, 0x222898u);
    ctx->pc = 0x222894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222890u;
            // 0x222894: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CF30u;
    if (runtime->hasFunction(0x21CF30u)) {
        auto targetFn = runtime->lookupFunction(0x21CF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222898u; }
        if (ctx->pc != 0x222898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__9CMenuFontFv_0x21cf30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222898u; }
        if (ctx->pc != 0x222898u) { return; }
    }
    ctx->pc = 0x222898u;
label_222898:
    // 0x222898: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x222898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22289c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x22289cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2228a0: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x2228A0u;
    SET_GPR_U32(ctx, 31, 0x2228A8u);
    ctx->pc = 0x2228A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2228A0u;
            // 0x2228a4: 0xafb000c0  sw          $s0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2228A8u; }
        if (ctx->pc != 0x2228A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2228A8u; }
        if (ctx->pc != 0x2228A8u) { return; }
    }
    ctx->pc = 0x2228A8u;
label_2228a8:
    // 0x2228a8: 0xc04a422  jal         func_129088
    ctx->pc = 0x2228A8u;
    SET_GPR_U32(ctx, 31, 0x2228B0u);
    ctx->pc = 0x2228ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2228A8u;
            // 0x2228ac: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2228B0u; }
        if (ctx->pc != 0x2228B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2228B0u; }
        if (ctx->pc != 0x2228B0u) { return; }
    }
    ctx->pc = 0x2228B0u;
label_2228b0:
    // 0x2228b0: 0x8fa500d4  lw          $a1, 0xD4($sp)
    ctx->pc = 0x2228b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x2228b4: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x2228b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2228b8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2228b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2228bc: 0x24060086  addiu       $a2, $zero, 0x86
    ctx->pc = 0x2228bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
    // 0x2228c0: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x2228c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2228c4: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x2228c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2228c8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2228c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2228cc: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x2228CCu;
    SET_GPR_U32(ctx, 31, 0x2228D4u);
    ctx->pc = 0x2228D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2228CCu;
            // 0x2228d0: 0x22843  sra         $a1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2228D4u; }
        if (ctx->pc != 0x2228D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2228D4u; }
        if (ctx->pc != 0x2228D4u) { return; }
    }
    ctx->pc = 0x2228D4u;
label_2228d4:
    // 0x2228d4: 0x8fa600c4  lw          $a2, 0xC4($sp)
    ctx->pc = 0x2228d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x2228d8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2228d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2228dc: 0x8fa700c8  lw          $a3, 0xC8($sp)
    ctx->pc = 0x2228dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2228e0: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x2228E0u;
    SET_GPR_U32(ctx, 31, 0x2228E8u);
    ctx->pc = 0x2228E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2228E0u;
            // 0x2228e4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2228E8u; }
        if (ctx->pc != 0x2228E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2228E8u; }
        if (ctx->pc != 0x2228E8u) { return; }
    }
    ctx->pc = 0x2228E8u;
label_2228e8:
    // 0x2228e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2228e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2228ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2228ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2228f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2228f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2228f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2228F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2228F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2228F4u;
            // 0x2228f8: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2228FCu;
}
