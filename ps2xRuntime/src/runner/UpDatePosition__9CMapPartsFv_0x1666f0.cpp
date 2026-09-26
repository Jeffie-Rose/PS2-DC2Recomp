#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: UpDatePosition__9CMapPartsFv
// Address: 0x1666f0 - 0x166758
void UpDatePosition__9CMapPartsFv_0x1666f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpDatePosition__9CMapPartsFv_0x1666f0");
#endif

    switch (ctx->pc) {
        case 0x1666f0u: goto label_1666f0;
        case 0x1666f4u: goto label_1666f4;
        case 0x1666f8u: goto label_1666f8;
        case 0x1666fcu: goto label_1666fc;
        case 0x166700u: goto label_166700;
        case 0x166704u: goto label_166704;
        case 0x166708u: goto label_166708;
        case 0x16670cu: goto label_16670c;
        case 0x166710u: goto label_166710;
        case 0x166714u: goto label_166714;
        case 0x166718u: goto label_166718;
        case 0x16671cu: goto label_16671c;
        case 0x166720u: goto label_166720;
        case 0x166724u: goto label_166724;
        case 0x166728u: goto label_166728;
        case 0x16672cu: goto label_16672c;
        case 0x166730u: goto label_166730;
        case 0x166734u: goto label_166734;
        case 0x166738u: goto label_166738;
        case 0x16673cu: goto label_16673c;
        case 0x166740u: goto label_166740;
        case 0x166744u: goto label_166744;
        case 0x166748u: goto label_166748;
        case 0x16674cu: goto label_16674c;
        case 0x166750u: goto label_166750;
        case 0x166754u: goto label_166754;
        default: break;
    }

    ctx->pc = 0x1666f0u;

label_1666f0:
    // 0x1666f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1666f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1666f4:
    // 0x1666f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1666f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1666f8:
    // 0x1666f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1666f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1666fc:
    // 0x1666fc: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x1666fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_166700:
    // 0x166700: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_166704:
    if (ctx->pc == 0x166704u) {
        ctx->pc = 0x166704u;
            // 0x166704: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x166708u;
        goto label_166708;
    }
    ctx->pc = 0x166700u;
    {
        const bool branch_taken_0x166700 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x166704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166700u;
            // 0x166704: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166700) {
            ctx->pc = 0x166748u;
            goto label_166748;
        }
    }
    ctx->pc = 0x166708u;
label_166708:
    // 0x166708: 0x8e1900c0  lw          $t9, 0xC0($s0)
    ctx->pc = 0x166708u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_16670c:
    // 0x16670c: 0x260400c0  addiu       $a0, $s0, 0xC0
    ctx->pc = 0x16670cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
label_166710:
    // 0x166710: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x166710u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_166714:
    // 0x166714: 0x320f809  jalr        $t9
label_166718:
    if (ctx->pc == 0x166718u) {
        ctx->pc = 0x166718u;
            // 0x166718: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x16671Cu;
        goto label_16671c;
    }
    ctx->pc = 0x166714u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16671Cu);
        ctx->pc = 0x166718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166714u;
            // 0x166718: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16671Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16671Cu; }
            if (ctx->pc != 0x16671Cu) { return; }
        }
        }
    }
    ctx->pc = 0x16671Cu;
label_16671c:
    // 0x16671c: 0x8e1900c0  lw          $t9, 0xC0($s0)
    ctx->pc = 0x16671cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_166720:
    // 0x166720: 0x260400c0  addiu       $a0, $s0, 0xC0
    ctx->pc = 0x166720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
label_166724:
    // 0x166724: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x166724u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_166728:
    // 0x166728: 0x320f809  jalr        $t9
label_16672c:
    if (ctx->pc == 0x16672Cu) {
        ctx->pc = 0x16672Cu;
            // 0x16672c: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x166730u;
        goto label_166730;
    }
    ctx->pc = 0x166728u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x166730u);
        ctx->pc = 0x16672Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166728u;
            // 0x16672c: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x166730u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x166730u; }
            if (ctx->pc != 0x166730u) { return; }
        }
        }
    }
    ctx->pc = 0x166730u;
label_166730:
    // 0x166730: 0x8e1900c0  lw          $t9, 0xC0($s0)
    ctx->pc = 0x166730u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_166734:
    // 0x166734: 0x260400c0  addiu       $a0, $s0, 0xC0
    ctx->pc = 0x166734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
label_166738:
    // 0x166738: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x166738u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_16673c:
    // 0x16673c: 0x320f809  jalr        $t9
label_166740:
    if (ctx->pc == 0x166740u) {
        ctx->pc = 0x166740u;
            // 0x166740: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->pc = 0x166744u;
        goto label_166744;
    }
    ctx->pc = 0x16673Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x166744u);
        ctx->pc = 0x166740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16673Cu;
            // 0x166740: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x166744u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x166744u; }
            if (ctx->pc != 0x166744u) { return; }
        }
        }
    }
    ctx->pc = 0x166744u;
label_166744:
    // 0x166744: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x166744u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_166748:
    // 0x166748: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x166748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16674c:
    // 0x16674c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16674cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_166750:
    // 0x166750: 0x3e00008  jr          $ra
label_166754:
    if (ctx->pc == 0x166754u) {
        ctx->pc = 0x166754u;
            // 0x166754: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x166758u;
        goto label_fallthrough_0x166750;
    }
    ctx->pc = 0x166750u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166750u;
            // 0x166754: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x166750:
    ctx->pc = 0x166758u;
}
