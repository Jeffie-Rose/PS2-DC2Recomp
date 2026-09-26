#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__12CPaintEffectFv
// Address: 0x2fab40 - 0x2fabdc
void ps2___ct__12CPaintEffectFv_0x2fab40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__12CPaintEffectFv_0x2fab40");
#endif

    switch (ctx->pc) {
        case 0x2fab40u: goto label_2fab40;
        case 0x2fab44u: goto label_2fab44;
        case 0x2fab48u: goto label_2fab48;
        case 0x2fab4cu: goto label_2fab4c;
        case 0x2fab50u: goto label_2fab50;
        case 0x2fab54u: goto label_2fab54;
        case 0x2fab58u: goto label_2fab58;
        case 0x2fab5cu: goto label_2fab5c;
        case 0x2fab60u: goto label_2fab60;
        case 0x2fab64u: goto label_2fab64;
        case 0x2fab68u: goto label_2fab68;
        case 0x2fab6cu: goto label_2fab6c;
        case 0x2fab70u: goto label_2fab70;
        case 0x2fab74u: goto label_2fab74;
        case 0x2fab78u: goto label_2fab78;
        case 0x2fab7cu: goto label_2fab7c;
        case 0x2fab80u: goto label_2fab80;
        case 0x2fab84u: goto label_2fab84;
        case 0x2fab88u: goto label_2fab88;
        case 0x2fab8cu: goto label_2fab8c;
        case 0x2fab90u: goto label_2fab90;
        case 0x2fab94u: goto label_2fab94;
        case 0x2fab98u: goto label_2fab98;
        case 0x2fab9cu: goto label_2fab9c;
        case 0x2faba0u: goto label_2faba0;
        case 0x2faba4u: goto label_2faba4;
        case 0x2faba8u: goto label_2faba8;
        case 0x2fabacu: goto label_2fabac;
        case 0x2fabb0u: goto label_2fabb0;
        case 0x2fabb4u: goto label_2fabb4;
        case 0x2fabb8u: goto label_2fabb8;
        case 0x2fabbcu: goto label_2fabbc;
        case 0x2fabc0u: goto label_2fabc0;
        case 0x2fabc4u: goto label_2fabc4;
        case 0x2fabc8u: goto label_2fabc8;
        case 0x2fabccu: goto label_2fabcc;
        case 0x2fabd0u: goto label_2fabd0;
        case 0x2fabd4u: goto label_2fabd4;
        case 0x2fabd8u: goto label_2fabd8;
        default: break;
    }

    ctx->pc = 0x2fab40u;

label_2fab40:
    // 0x2fab40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fab40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2fab44:
    // 0x2fab44: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2fab44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2fab48:
    // 0x2fab48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fab48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2fab4c:
    // 0x2fab4c: 0x24424fe0  addiu       $v0, $v0, 0x4FE0
    ctx->pc = 0x2fab4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20448));
label_2fab50:
    // 0x2fab50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fab50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2fab54:
    // 0x2fab54: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2fab54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2fab58:
    // 0x2fab58: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2fab58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2fab5c:
    // 0x2fab5c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2fab5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2fab60:
    // 0x2fab60: 0x320f809  jalr        $t9
label_2fab64:
    if (ctx->pc == 0x2FAB64u) {
        ctx->pc = 0x2FAB64u;
            // 0x2fab64: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FAB68u;
        goto label_2fab68;
    }
    ctx->pc = 0x2FAB60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FAB68u);
        ctx->pc = 0x2FAB64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAB60u;
            // 0x2fab64: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FAB68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FAB68u; }
            if (ctx->pc != 0x2FAB68u) { return; }
        }
        }
    }
    ctx->pc = 0x2FAB68u;
label_2fab68:
    // 0x2fab68: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2fab68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2fab6c:
    // 0x2fab6c: 0x24425670  addiu       $v0, $v0, 0x5670
    ctx->pc = 0x2fab6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22128));
label_2fab70:
    // 0x2fab70: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2fab70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2fab74:
    // 0x2fab74: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2fab74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2fab78:
    // 0x2fab78: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2fab78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2fab7c:
    // 0x2fab7c: 0x320f809  jalr        $t9
label_2fab80:
    if (ctx->pc == 0x2FAB80u) {
        ctx->pc = 0x2FAB80u;
            // 0x2fab80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FAB84u;
        goto label_2fab84;
    }
    ctx->pc = 0x2FAB7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FAB84u);
        ctx->pc = 0x2FAB80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAB7Cu;
            // 0x2fab80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FAB84u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FAB84u; }
            if (ctx->pc != 0x2FAB84u) { return; }
        }
        }
    }
    ctx->pc = 0x2FAB84u;
label_2fab84:
    // 0x2fab84: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2fab84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_2fab88:
    // 0x2fab88: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2fab88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2fab8c:
    // 0x2fab8c: 0x24636360  addiu       $v1, $v1, 0x6360
    ctx->pc = 0x2fab8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25440));
label_2fab90:
    // 0x2fab90: 0x24424f10  addiu       $v0, $v0, 0x4F10
    ctx->pc = 0x2fab90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20240));
label_2fab94:
    // 0x2fab94: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2fab94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2fab98:
    // 0x2fab98: 0xae0200bc  sw          $v0, 0xBC($s0)
    ctx->pc = 0x2fab98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 2));
label_2fab9c:
    // 0x2fab9c: 0x8e1900bc  lw          $t9, 0xBC($s0)
    ctx->pc = 0x2fab9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_2faba0:
    // 0x2faba0: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2faba0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2faba4:
    // 0x2faba4: 0x320f809  jalr        $t9
label_2faba8:
    if (ctx->pc == 0x2FABA8u) {
        ctx->pc = 0x2FABA8u;
            // 0x2faba8: 0x260400a0  addiu       $a0, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->pc = 0x2FABACu;
        goto label_2fabac;
    }
    ctx->pc = 0x2FABA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FABACu);
        ctx->pc = 0x2FABA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FABA4u;
            // 0x2faba8: 0x260400a0  addiu       $a0, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FABACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FABACu; }
            if (ctx->pc != 0x2FABACu) { return; }
        }
        }
    }
    ctx->pc = 0x2FABACu;
label_2fabac:
    // 0x2fabac: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2fabacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2fabb0:
    // 0x2fabb0: 0x244250b0  addiu       $v0, $v0, 0x50B0
    ctx->pc = 0x2fabb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20656));
label_2fabb4:
    // 0x2fabb4: 0xae0200bc  sw          $v0, 0xBC($s0)
    ctx->pc = 0x2fabb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 2));
label_2fabb8:
    // 0x2fabb8: 0x8e1900bc  lw          $t9, 0xBC($s0)
    ctx->pc = 0x2fabb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_2fabbc:
    // 0x2fabbc: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2fabbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2fabc0:
    // 0x2fabc0: 0x320f809  jalr        $t9
label_2fabc4:
    if (ctx->pc == 0x2FABC4u) {
        ctx->pc = 0x2FABC4u;
            // 0x2fabc4: 0x260400a0  addiu       $a0, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->pc = 0x2FABC8u;
        goto label_2fabc8;
    }
    ctx->pc = 0x2FABC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FABC8u);
        ctx->pc = 0x2FABC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FABC0u;
            // 0x2fabc4: 0x260400a0  addiu       $a0, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FABC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FABC8u; }
            if (ctx->pc != 0x2FABC8u) { return; }
        }
        }
    }
    ctx->pc = 0x2FABC8u;
label_2fabc8:
    // 0x2fabc8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2fabc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fabcc:
    // 0x2fabcc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fabccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2fabd0:
    // 0x2fabd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fabd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fabd4:
    // 0x2fabd4: 0x3e00008  jr          $ra
label_2fabd8:
    if (ctx->pc == 0x2FABD8u) {
        ctx->pc = 0x2FABD8u;
            // 0x2fabd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2FABDCu;
        goto label_fallthrough_0x2fabd4;
    }
    ctx->pc = 0x2FABD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FABD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FABD4u;
            // 0x2fabd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2fabd4:
    ctx->pc = 0x2FABDCu;
}
