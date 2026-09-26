#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadFileMenu__FPcP1i
// Address: 0x251100 - 0x2511c0
void LoadFileMenu__FPcP1i_0x251100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadFileMenu__FPcP1i_0x251100");
#endif

    switch (ctx->pc) {
        case 0x251140u: goto label_251140;
        case 0x251160u: goto label_251160;
        case 0x25116cu: goto label_25116c;
        case 0x251184u: goto label_251184;
        case 0x2511a0u: goto label_2511a0;
        default: break;
    }

    ctx->pc = 0x251100u;

    // 0x251100: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x251100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x251104: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x251104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x251108: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x251108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25110c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25110cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x251110: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x251110u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251114: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x251114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x251118: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x251118u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25111c: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x25111Cu;
    {
        const bool branch_taken_0x25111c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x251120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25111Cu;
            // 0x251120: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25111c) {
            ctx->pc = 0x25112Cu;
            goto label_25112c;
        }
    }
    ctx->pc = 0x251124u;
    // 0x251124: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x251124u;
    {
        const bool branch_taken_0x251124 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x251128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251124u;
            // 0x251128: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251124) {
            ctx->pc = 0x251134u;
            goto label_251134;
        }
    }
    ctx->pc = 0x25112Cu;
label_25112c:
    // 0x25112c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x25112Cu;
    {
        const bool branch_taken_0x25112c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25112Cu;
            // 0x251130: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25112c) {
            ctx->pc = 0x2511A8u;
            goto label_2511a8;
        }
    }
    ctx->pc = 0x251134u;
label_251134:
    // 0x251134: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x251134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x251138: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x251138u;
    SET_GPR_U32(ctx, 31, 0x251140u);
    ctx->pc = 0x25113Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x251138u;
            // 0x25113c: 0x24a5bc10  addiu       $a1, $a1, -0x43F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949904));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251140u; }
        if (ctx->pc != 0x251140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251140u; }
        if (ctx->pc != 0x251140u) { return; }
    }
    ctx->pc = 0x251140u;
label_251140:
    // 0x251140: 0x8f838ad0  lw          $v1, -0x7530($gp)
    ctx->pc = 0x251140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x251144: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x251144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x251148: 0x244214a0  addiu       $v0, $v0, 0x14A0
    ctx->pc = 0x251148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5280));
    // 0x25114c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25114cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x251150: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x251150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x251154: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x251154u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x251158: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x251158u;
    SET_GPR_U32(ctx, 31, 0x251160u);
    ctx->pc = 0x25115Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x251158u;
            // 0x25115c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251160u; }
        if (ctx->pc != 0x251160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251160u; }
        if (ctx->pc != 0x251160u) { return; }
    }
    ctx->pc = 0x251160u;
label_251160:
    // 0x251160: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x251160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251164: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x251164u;
    SET_GPR_U32(ctx, 31, 0x25116Cu);
    ctx->pc = 0x251168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x251164u;
            // 0x251168: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25116Cu; }
        if (ctx->pc != 0x25116Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25116Cu; }
        if (ctx->pc != 0x25116Cu) { return; }
    }
    ctx->pc = 0x25116Cu;
label_25116c:
    // 0x25116c: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25116Cu;
    {
        const bool branch_taken_0x25116c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x251170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25116Cu;
            // 0x251170: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25116c) {
            ctx->pc = 0x251188u;
            goto label_251188;
        }
    }
    ctx->pc = 0x251174u;
    // 0x251174: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x251174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x251178: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x251178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25117c: 0xc05224c  jal         func_148930
    ctx->pc = 0x25117Cu;
    SET_GPR_U32(ctx, 31, 0x251184u);
    ctx->pc = 0x251180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25117Cu;
            // 0x251180: 0x27a600cc  addiu       $a2, $sp, 0xCC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148930u;
    if (runtime->hasFunction(0x148930u)) {
        auto targetFn = runtime->lookupFunction(0x148930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251184u; }
        if (ctx->pc != 0x251184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileBG__FPcP1Pi_0x148930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251184u; }
        if (ctx->pc != 0x251184u) { return; }
    }
    ctx->pc = 0x251184u;
label_251184:
    // 0x251184: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x251184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_251188:
    // 0x251188: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x251188u;
    {
        const bool branch_taken_0x251188 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x25118Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251188u;
            // 0x25118c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251188) {
            ctx->pc = 0x2511A0u;
            goto label_2511a0;
        }
    }
    ctx->pc = 0x251190u;
    // 0x251190: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x251190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x251194: 0x27a600cc  addiu       $a2, $sp, 0xCC
    ctx->pc = 0x251194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x251198: 0xc0524dc  jal         func_149370
    ctx->pc = 0x251198u;
    SET_GPR_U32(ctx, 31, 0x2511A0u);
    ctx->pc = 0x25119Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x251198u;
            // 0x25119c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2511A0u; }
        if (ctx->pc != 0x2511A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2511A0u; }
        if (ctx->pc != 0x2511A0u) { return; }
    }
    ctx->pc = 0x2511A0u;
label_2511a0:
    // 0x2511a0: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x2511a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x2511a4: 0x0  nop
    ctx->pc = 0x2511a4u;
    // NOP
label_2511a8:
    // 0x2511a8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2511a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2511ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2511acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2511b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2511b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2511b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2511b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2511b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2511B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2511BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2511B8u;
            // 0x2511bc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2511C0u;
}
