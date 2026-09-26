#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GeneratePoly__14CRepairManagerFPfi
// Address: 0x22dc10 - 0x22de50
void GeneratePoly__14CRepairManagerFPfi_0x22dc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GeneratePoly__14CRepairManagerFPfi_0x22dc10");
#endif

    switch (ctx->pc) {
        case 0x22dc10u: goto label_22dc10;
        case 0x22dc14u: goto label_22dc14;
        case 0x22dc18u: goto label_22dc18;
        case 0x22dc1cu: goto label_22dc1c;
        case 0x22dc20u: goto label_22dc20;
        case 0x22dc24u: goto label_22dc24;
        case 0x22dc28u: goto label_22dc28;
        case 0x22dc2cu: goto label_22dc2c;
        case 0x22dc30u: goto label_22dc30;
        case 0x22dc34u: goto label_22dc34;
        case 0x22dc38u: goto label_22dc38;
        case 0x22dc3cu: goto label_22dc3c;
        case 0x22dc40u: goto label_22dc40;
        case 0x22dc44u: goto label_22dc44;
        case 0x22dc48u: goto label_22dc48;
        case 0x22dc4cu: goto label_22dc4c;
        case 0x22dc50u: goto label_22dc50;
        case 0x22dc54u: goto label_22dc54;
        case 0x22dc58u: goto label_22dc58;
        case 0x22dc5cu: goto label_22dc5c;
        case 0x22dc60u: goto label_22dc60;
        case 0x22dc64u: goto label_22dc64;
        case 0x22dc68u: goto label_22dc68;
        case 0x22dc6cu: goto label_22dc6c;
        case 0x22dc70u: goto label_22dc70;
        case 0x22dc74u: goto label_22dc74;
        case 0x22dc78u: goto label_22dc78;
        case 0x22dc7cu: goto label_22dc7c;
        case 0x22dc80u: goto label_22dc80;
        case 0x22dc84u: goto label_22dc84;
        case 0x22dc88u: goto label_22dc88;
        case 0x22dc8cu: goto label_22dc8c;
        case 0x22dc90u: goto label_22dc90;
        case 0x22dc94u: goto label_22dc94;
        case 0x22dc98u: goto label_22dc98;
        case 0x22dc9cu: goto label_22dc9c;
        case 0x22dca0u: goto label_22dca0;
        case 0x22dca4u: goto label_22dca4;
        case 0x22dca8u: goto label_22dca8;
        case 0x22dcacu: goto label_22dcac;
        case 0x22dcb0u: goto label_22dcb0;
        case 0x22dcb4u: goto label_22dcb4;
        case 0x22dcb8u: goto label_22dcb8;
        case 0x22dcbcu: goto label_22dcbc;
        case 0x22dcc0u: goto label_22dcc0;
        case 0x22dcc4u: goto label_22dcc4;
        case 0x22dcc8u: goto label_22dcc8;
        case 0x22dcccu: goto label_22dccc;
        case 0x22dcd0u: goto label_22dcd0;
        case 0x22dcd4u: goto label_22dcd4;
        case 0x22dcd8u: goto label_22dcd8;
        case 0x22dcdcu: goto label_22dcdc;
        case 0x22dce0u: goto label_22dce0;
        case 0x22dce4u: goto label_22dce4;
        case 0x22dce8u: goto label_22dce8;
        case 0x22dcecu: goto label_22dcec;
        case 0x22dcf0u: goto label_22dcf0;
        case 0x22dcf4u: goto label_22dcf4;
        case 0x22dcf8u: goto label_22dcf8;
        case 0x22dcfcu: goto label_22dcfc;
        case 0x22dd00u: goto label_22dd00;
        case 0x22dd04u: goto label_22dd04;
        case 0x22dd08u: goto label_22dd08;
        case 0x22dd0cu: goto label_22dd0c;
        case 0x22dd10u: goto label_22dd10;
        case 0x22dd14u: goto label_22dd14;
        case 0x22dd18u: goto label_22dd18;
        case 0x22dd1cu: goto label_22dd1c;
        case 0x22dd20u: goto label_22dd20;
        case 0x22dd24u: goto label_22dd24;
        case 0x22dd28u: goto label_22dd28;
        case 0x22dd2cu: goto label_22dd2c;
        case 0x22dd30u: goto label_22dd30;
        case 0x22dd34u: goto label_22dd34;
        case 0x22dd38u: goto label_22dd38;
        case 0x22dd3cu: goto label_22dd3c;
        case 0x22dd40u: goto label_22dd40;
        case 0x22dd44u: goto label_22dd44;
        case 0x22dd48u: goto label_22dd48;
        case 0x22dd4cu: goto label_22dd4c;
        case 0x22dd50u: goto label_22dd50;
        case 0x22dd54u: goto label_22dd54;
        case 0x22dd58u: goto label_22dd58;
        case 0x22dd5cu: goto label_22dd5c;
        case 0x22dd60u: goto label_22dd60;
        case 0x22dd64u: goto label_22dd64;
        case 0x22dd68u: goto label_22dd68;
        case 0x22dd6cu: goto label_22dd6c;
        case 0x22dd70u: goto label_22dd70;
        case 0x22dd74u: goto label_22dd74;
        case 0x22dd78u: goto label_22dd78;
        case 0x22dd7cu: goto label_22dd7c;
        case 0x22dd80u: goto label_22dd80;
        case 0x22dd84u: goto label_22dd84;
        case 0x22dd88u: goto label_22dd88;
        case 0x22dd8cu: goto label_22dd8c;
        case 0x22dd90u: goto label_22dd90;
        case 0x22dd94u: goto label_22dd94;
        case 0x22dd98u: goto label_22dd98;
        case 0x22dd9cu: goto label_22dd9c;
        case 0x22dda0u: goto label_22dda0;
        case 0x22dda4u: goto label_22dda4;
        case 0x22dda8u: goto label_22dda8;
        case 0x22ddacu: goto label_22ddac;
        case 0x22ddb0u: goto label_22ddb0;
        case 0x22ddb4u: goto label_22ddb4;
        case 0x22ddb8u: goto label_22ddb8;
        case 0x22ddbcu: goto label_22ddbc;
        case 0x22ddc0u: goto label_22ddc0;
        case 0x22ddc4u: goto label_22ddc4;
        case 0x22ddc8u: goto label_22ddc8;
        case 0x22ddccu: goto label_22ddcc;
        case 0x22ddd0u: goto label_22ddd0;
        case 0x22ddd4u: goto label_22ddd4;
        case 0x22ddd8u: goto label_22ddd8;
        case 0x22dddcu: goto label_22dddc;
        case 0x22dde0u: goto label_22dde0;
        case 0x22dde4u: goto label_22dde4;
        case 0x22dde8u: goto label_22dde8;
        case 0x22ddecu: goto label_22ddec;
        case 0x22ddf0u: goto label_22ddf0;
        case 0x22ddf4u: goto label_22ddf4;
        case 0x22ddf8u: goto label_22ddf8;
        case 0x22ddfcu: goto label_22ddfc;
        case 0x22de00u: goto label_22de00;
        case 0x22de04u: goto label_22de04;
        case 0x22de08u: goto label_22de08;
        case 0x22de0cu: goto label_22de0c;
        case 0x22de10u: goto label_22de10;
        case 0x22de14u: goto label_22de14;
        case 0x22de18u: goto label_22de18;
        case 0x22de1cu: goto label_22de1c;
        case 0x22de20u: goto label_22de20;
        case 0x22de24u: goto label_22de24;
        case 0x22de28u: goto label_22de28;
        case 0x22de2cu: goto label_22de2c;
        case 0x22de30u: goto label_22de30;
        case 0x22de34u: goto label_22de34;
        case 0x22de38u: goto label_22de38;
        case 0x22de3cu: goto label_22de3c;
        case 0x22de40u: goto label_22de40;
        case 0x22de44u: goto label_22de44;
        case 0x22de48u: goto label_22de48;
        case 0x22de4cu: goto label_22de4c;
        default: break;
    }

    ctx->pc = 0x22dc10u;

label_22dc10:
    // 0x22dc10: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x22dc10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_22dc14:
    // 0x22dc14: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x22dc14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_22dc18:
    // 0x22dc18: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x22dc18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_22dc1c:
    // 0x22dc1c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22dc1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_22dc20:
    // 0x22dc20: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x22dc20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22dc24:
    // 0x22dc24: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22dc24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_22dc28:
    // 0x22dc28: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x22dc28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22dc2c:
    // 0x22dc2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22dc2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22dc30:
    // 0x22dc30: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x22dc30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_22dc34:
    // 0x22dc34: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22dc34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22dc38:
    // 0x22dc38: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x22dc38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_22dc3c:
    // 0x22dc3c: 0x8c8401ac  lw          $a0, 0x1AC($a0)
    ctx->pc = 0x22dc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 428)));
label_22dc40:
    // 0x22dc40: 0x24a5a730  addiu       $a1, $a1, -0x58D0
    ctx->pc = 0x22dc40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944560));
label_22dc44:
    // 0x22dc44: 0xc052734  jal         func_149CD0
label_22dc48:
    if (ctx->pc == 0x22DC48u) {
        ctx->pc = 0x22DC48u;
            // 0x22dc48: 0x27a6006c  addiu       $a2, $sp, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
        ctx->pc = 0x22DC4Cu;
        goto label_22dc4c;
    }
    ctx->pc = 0x22DC44u;
    SET_GPR_U32(ctx, 31, 0x22DC4Cu);
    ctx->pc = 0x22DC48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22DC44u;
            // 0x22dc48: 0x27a6006c  addiu       $a2, $sp, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DC4Cu; }
        if (ctx->pc != 0x22DC4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DC4Cu; }
        if (ctx->pc != 0x22DC4Cu) { return; }
    }
    ctx->pc = 0x22DC4Cu;
label_22dc4c:
    // 0x22dc4c: 0xae8001d8  sw          $zero, 0x1D8($s4)
    ctx->pc = 0x22dc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 472), GPR_U32(ctx, 0));
label_22dc50:
    // 0x22dc50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22dc50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22dc54:
    // 0x22dc54: 0x268401b4  addiu       $a0, $s4, 0x1B4
    ctx->pc = 0x22dc54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 436));
label_22dc58:
    // 0x22dc58: 0x24050105  addiu       $a1, $zero, 0x105
    ctx->pc = 0x22dc58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
label_22dc5c:
    // 0x22dc5c: 0xc04e748  jal         func_139D20
label_22dc60:
    if (ctx->pc == 0x22DC60u) {
        ctx->pc = 0x22DC60u;
            // 0x22dc60: 0xae8001d0  sw          $zero, 0x1D0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 464), GPR_U32(ctx, 0));
        ctx->pc = 0x22DC64u;
        goto label_22dc64;
    }
    ctx->pc = 0x22DC5Cu;
    SET_GPR_U32(ctx, 31, 0x22DC64u);
    ctx->pc = 0x22DC60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22DC5Cu;
            // 0x22dc60: 0xae8001d0  sw          $zero, 0x1D0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 464), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DC64u; }
        if (ctx->pc != 0x22DC64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DC64u; }
        if (ctx->pc != 0x22DC64u) { return; }
    }
    ctx->pc = 0x22DC64u;
label_22dc64:
    // 0x22dc64: 0x24041030  addiu       $a0, $zero, 0x1030
    ctx->pc = 0x22dc64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4144));
label_22dc68:
    // 0x22dc68: 0xc04e638  jal         func_1398E0
label_22dc6c:
    if (ctx->pc == 0x22DC6Cu) {
        ctx->pc = 0x22DC6Cu;
            // 0x22dc6c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22DC70u;
        goto label_22dc70;
    }
    ctx->pc = 0x22DC68u;
    SET_GPR_U32(ctx, 31, 0x22DC70u);
    ctx->pc = 0x22DC6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22DC68u;
            // 0x22dc6c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DC70u; }
        if (ctx->pc != 0x22DC70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DC70u; }
        if (ctx->pc != 0x22DC70u) { return; }
    }
    ctx->pc = 0x22DC70u;
label_22dc70:
    // 0x22dc70: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_22dc74:
    if (ctx->pc == 0x22DC74u) {
        ctx->pc = 0x22DC74u;
            // 0x22dc74: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22DC78u;
        goto label_22dc78;
    }
    ctx->pc = 0x22DC70u;
    {
        const bool branch_taken_0x22dc70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DC74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DC70u;
            // 0x22dc74: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dc70) {
            ctx->pc = 0x22DD18u;
            goto label_22dd18;
        }
    }
    ctx->pc = 0x22DC78u;
label_22dc78:
    // 0x22dc78: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x22dc78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_22dc7c:
    // 0x22dc7c: 0x24424fe0  addiu       $v0, $v0, 0x4FE0
    ctx->pc = 0x22dc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20448));
label_22dc80:
    // 0x22dc80: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x22dc80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_22dc84:
    // 0x22dc84: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x22dc84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22dc88:
    // 0x22dc88: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x22dc88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_22dc8c:
    // 0x22dc8c: 0x320f809  jalr        $t9
label_22dc90:
    if (ctx->pc == 0x22DC90u) {
        ctx->pc = 0x22DC90u;
            // 0x22dc90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22DC94u;
        goto label_22dc94;
    }
    ctx->pc = 0x22DC8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22DC94u);
        ctx->pc = 0x22DC90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DC8Cu;
            // 0x22dc90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22DC94u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22DC94u; }
            if (ctx->pc != 0x22DC94u) { return; }
        }
        }
    }
    ctx->pc = 0x22DC94u;
label_22dc94:
    // 0x22dc94: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x22dc94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_22dc98:
    // 0x22dc98: 0x24425670  addiu       $v0, $v0, 0x5670
    ctx->pc = 0x22dc98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22128));
label_22dc9c:
    // 0x22dc9c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x22dc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_22dca0:
    // 0x22dca0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x22dca0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22dca4:
    // 0x22dca4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x22dca4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_22dca8:
    // 0x22dca8: 0x320f809  jalr        $t9
label_22dcac:
    if (ctx->pc == 0x22DCACu) {
        ctx->pc = 0x22DCACu;
            // 0x22dcac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22DCB0u;
        goto label_22dcb0;
    }
    ctx->pc = 0x22DCA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22DCB0u);
        ctx->pc = 0x22DCACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DCA8u;
            // 0x22dcac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22DCB0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22DCB0u; }
            if (ctx->pc != 0x22DCB0u) { return; }
        }
        }
    }
    ctx->pc = 0x22DCB0u;
label_22dcb0:
    // 0x22dcb0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x22dcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_22dcb4:
    // 0x22dcb4: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x22dcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
label_22dcb8:
    // 0x22dcb8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x22dcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_22dcbc:
    // 0x22dcbc: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x22dcbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22dcc0:
    // 0x22dcc0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x22dcc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_22dcc4:
    // 0x22dcc4: 0x320f809  jalr        $t9
label_22dcc8:
    if (ctx->pc == 0x22DCC8u) {
        ctx->pc = 0x22DCC8u;
            // 0x22dcc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22DCCCu;
        goto label_22dccc;
    }
    ctx->pc = 0x22DCC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22DCCCu);
        ctx->pc = 0x22DCC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DCC4u;
            // 0x22dcc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22DCCCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22DCCCu; }
            if (ctx->pc != 0x22DCCCu) { return; }
        }
        }
    }
    ctx->pc = 0x22DCCCu;
label_22dccc:
    // 0x22dccc: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x22dcccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_22dcd0:
    // 0x22dcd0: 0x24425810  addiu       $v0, $v0, 0x5810
    ctx->pc = 0x22dcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22544));
label_22dcd4:
    // 0x22dcd4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x22dcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_22dcd8:
    // 0x22dcd8: 0xae20035c  sw          $zero, 0x35C($s1)
    ctx->pc = 0x22dcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 860), GPR_U32(ctx, 0));
label_22dcdc:
    // 0x22dcdc: 0xae200364  sw          $zero, 0x364($s1)
    ctx->pc = 0x22dcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 868), GPR_U32(ctx, 0));
label_22dce0:
    // 0x22dce0: 0xae200360  sw          $zero, 0x360($s1)
    ctx->pc = 0x22dce0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 864), GPR_U32(ctx, 0));
label_22dce4:
    // 0x22dce4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x22dce4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22dce8:
    // 0x22dce8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x22dce8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_22dcec:
    // 0x22dcec: 0x320f809  jalr        $t9
label_22dcf0:
    if (ctx->pc == 0x22DCF0u) {
        ctx->pc = 0x22DCF0u;
            // 0x22dcf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22DCF4u;
        goto label_22dcf4;
    }
    ctx->pc = 0x22DCECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22DCF4u);
        ctx->pc = 0x22DCF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DCECu;
            // 0x22dcf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22DCF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22DCF4u; }
            if (ctx->pc != 0x22DCF4u) { return; }
        }
        }
    }
    ctx->pc = 0x22DCF4u;
label_22dcf4:
    // 0x22dcf4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x22dcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_22dcf8:
    // 0x22dcf8: 0x262406bc  addiu       $a0, $s1, 0x6BC
    ctx->pc = 0x22dcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1724));
label_22dcfc:
    // 0x22dcfc: 0x244256f0  addiu       $v0, $v0, 0x56F0
    ctx->pc = 0x22dcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22256));
label_22dd00:
    // 0x22dd00: 0xc061b34  jal         func_186CD0
label_22dd04:
    if (ctx->pc == 0x22DD04u) {
        ctx->pc = 0x22DD04u;
            // 0x22dd04: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x22DD08u;
        goto label_22dd08;
    }
    ctx->pc = 0x22DD00u;
    SET_GPR_U32(ctx, 31, 0x22DD08u);
    ctx->pc = 0x22DD04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22DD00u;
            // 0x22dd04: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186CD0u;
    if (runtime->hasFunction(0x186CD0u)) {
        auto targetFn = runtime->lookupFunction(0x186CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DD08u; }
        if (ctx->pc != 0x22DD08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__10CRunScriptFv_0x186cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DD08u; }
        if (ctx->pc != 0x22DD08u) { return; }
    }
    ctx->pc = 0x22DD08u;
label_22dd08:
    // 0x22dd08: 0x26240910  addiu       $a0, $s1, 0x910
    ctx->pc = 0x22dd08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2320));
label_22dd0c:
    // 0x22dd0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22dd0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22dd10:
    // 0x22dd10: 0xc049c86  jal         func_127218
label_22dd14:
    if (ctx->pc == 0x22DD14u) {
        ctx->pc = 0x22DD14u;
            // 0x22dd14: 0x24060110  addiu       $a2, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->pc = 0x22DD18u;
        goto label_22dd18;
    }
    ctx->pc = 0x22DD10u;
    SET_GPR_U32(ctx, 31, 0x22DD18u);
    ctx->pc = 0x22DD14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22DD10u;
            // 0x22dd14: 0x24060110  addiu       $a2, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DD18u; }
        if (ctx->pc != 0x22DD18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DD18u; }
        if (ctx->pc != 0x22DD18u) { return; }
    }
    ctx->pc = 0x22DD18u;
label_22dd18:
    // 0x22dd18: 0xae9101b0  sw          $s1, 0x1B0($s4)
    ctx->pc = 0x22dd18u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 432), GPR_U32(ctx, 17));
label_22dd1c:
    // 0x22dd1c: 0x8e8401b0  lw          $a0, 0x1B0($s4)
    ctx->pc = 0x22dd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 432)));
label_22dd20:
    // 0x22dd20: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x22dd20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22dd24:
    // 0x22dd24: 0x8f390118  lw          $t9, 0x118($t9)
    ctx->pc = 0x22dd24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 280)));
label_22dd28:
    // 0x22dd28: 0x320f809  jalr        $t9
label_22dd2c:
    if (ctx->pc == 0x22DD2Cu) {
        ctx->pc = 0x22DD2Cu;
            // 0x22dd2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22DD30u;
        goto label_22dd30;
    }
    ctx->pc = 0x22DD28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22DD30u);
        ctx->pc = 0x22DD2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DD28u;
            // 0x22dd2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22DD30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22DD30u; }
            if (ctx->pc != 0x22DD30u) { return; }
        }
        }
    }
    ctx->pc = 0x22DD30u;
label_22dd30:
    // 0x22dd30: 0x8e8401b0  lw          $a0, 0x1B0($s4)
    ctx->pc = 0x22dd30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 432)));
label_22dd34:
    // 0x22dd34: 0x268701b4  addiu       $a3, $s4, 0x1B4
    ctx->pc = 0x22dd34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 436));
label_22dd38:
    // 0x22dd38: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x22dd38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_22dd3c:
    // 0x22dd3c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22dd3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22dd40:
    // 0x22dd40: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x22dd40u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22dd44:
    // 0x22dd44: 0x24c6a748  addiu       $a2, $a2, -0x58B8
    ctx->pc = 0x22dd44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944584));
label_22dd48:
    // 0x22dd48: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x22dd48u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22dd4c:
    // 0x22dd4c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x22dd4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_22dd50:
    // 0x22dd50: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x22dd50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22dd54:
    // 0x22dd54: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x22dd54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_22dd58:
    // 0x22dd58: 0x320f809  jalr        $t9
label_22dd5c:
    if (ctx->pc == 0x22DD5Cu) {
        ctx->pc = 0x22DD5Cu;
            // 0x22dd5c: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22DD60u;
        goto label_22dd60;
    }
    ctx->pc = 0x22DD58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22DD60u);
        ctx->pc = 0x22DD5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DD58u;
            // 0x22dd5c: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22DD60u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22DD60u; }
            if (ctx->pc != 0x22DD60u) { return; }
        }
        }
    }
    ctx->pc = 0x22DD60u;
label_22dd60:
    // 0x22dd60: 0x8e8401b0  lw          $a0, 0x1B0($s4)
    ctx->pc = 0x22dd60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 432)));
label_22dd64:
    // 0x22dd64: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x22dd64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
label_22dd68:
    // 0x22dd68: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x22dd68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_22dd6c:
    // 0x22dd6c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22dd6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22dd70:
    // 0x22dd70: 0x0  nop
    ctx->pc = 0x22dd70u;
    // NOP
label_22dd74:
    // 0x22dd74: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x22dd74u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_22dd78:
    // 0x22dd78: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x22dd78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22dd7c:
    // 0x22dd7c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x22dd7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_22dd80:
    // 0x22dd80: 0x320f809  jalr        $t9
label_22dd84:
    if (ctx->pc == 0x22DD84u) {
        ctx->pc = 0x22DD84u;
            // 0x22dd84: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x22DD88u;
        goto label_22dd88;
    }
    ctx->pc = 0x22DD80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22DD88u);
        ctx->pc = 0x22DD84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DD80u;
            // 0x22dd84: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22DD88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22DD88u; }
            if (ctx->pc != 0x22DD88u) { return; }
        }
        }
    }
    ctx->pc = 0x22DD88u;
label_22dd88:
    // 0x22dd88: 0x8e8401b0  lw          $a0, 0x1B0($s4)
    ctx->pc = 0x22dd88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 432)));
label_22dd8c:
    // 0x22dd8c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x22dd8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22dd90:
    // 0x22dd90: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x22dd90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_22dd94:
    // 0x22dd94: 0x320f809  jalr        $t9
label_22dd98:
    if (ctx->pc == 0x22DD98u) {
        ctx->pc = 0x22DD98u;
            // 0x22dd98: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22DD9Cu;
        goto label_22dd9c;
    }
    ctx->pc = 0x22DD94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22DD9Cu);
        ctx->pc = 0x22DD98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DD94u;
            // 0x22dd98: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22DD9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22DD9Cu; }
            if (ctx->pc != 0x22DD9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x22DD9Cu;
label_22dd9c:
    // 0x22dd9c: 0x8e8401b0  lw          $a0, 0x1B0($s4)
    ctx->pc = 0x22dd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 432)));
label_22dda0:
    // 0x22dda0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x22dda0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_22dda4:
    // 0x22dda4: 0x24a5a758  addiu       $a1, $a1, -0x58A8
    ctx->pc = 0x22dda4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944600));
label_22dda8:
    // 0x22dda8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22dda8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22ddac:
    // 0x22ddac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x22ddacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22ddb0:
    // 0x22ddb0: 0x8f390100  lw          $t9, 0x100($t9)
    ctx->pc = 0x22ddb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 256)));
label_22ddb4:
    // 0x22ddb4: 0x320f809  jalr        $t9
label_22ddb8:
    if (ctx->pc == 0x22DDB8u) {
        ctx->pc = 0x22DDB8u;
            // 0x22ddb8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x22DDBCu;
        goto label_22ddbc;
    }
    ctx->pc = 0x22DDB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22DDBCu);
        ctx->pc = 0x22DDB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DDB4u;
            // 0x22ddb8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22DDBCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22DDBCu; }
            if (ctx->pc != 0x22DDBCu) { return; }
        }
        }
    }
    ctx->pc = 0x22DDBCu;
label_22ddbc:
    // 0x22ddbc: 0x8e8401b0  lw          $a0, 0x1B0($s4)
    ctx->pc = 0x22ddbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 432)));
label_22ddc0:
    // 0x22ddc0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x22ddc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22ddc4:
    // 0x22ddc4: 0x8f3900c4  lw          $t9, 0xC4($t9)
    ctx->pc = 0x22ddc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 196)));
label_22ddc8:
    // 0x22ddc8: 0x320f809  jalr        $t9
label_22ddcc:
    if (ctx->pc == 0x22DDCCu) {
        ctx->pc = 0x22DDCCu;
            // 0x22ddcc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x22DDD0u;
        goto label_22ddd0;
    }
    ctx->pc = 0x22DDC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22DDD0u);
        ctx->pc = 0x22DDCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DDC8u;
            // 0x22ddcc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22DDD0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22DDD0u; }
            if (ctx->pc != 0x22DDD0u) { return; }
        }
        }
    }
    ctx->pc = 0x22DDD0u;
label_22ddd0:
    // 0x22ddd0: 0x8e8401b0  lw          $a0, 0x1B0($s4)
    ctx->pc = 0x22ddd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 432)));
label_22ddd4:
    // 0x22ddd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22ddd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22ddd8:
    // 0x22ddd8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x22ddd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22dddc:
    // 0x22dddc: 0x8f3900f8  lw          $t9, 0xF8($t9)
    ctx->pc = 0x22dddcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 248)));
label_22dde0:
    // 0x22dde0: 0x320f809  jalr        $t9
label_22dde4:
    if (ctx->pc == 0x22DDE4u) {
        ctx->pc = 0x22DDE4u;
            // 0x22dde4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x22DDE8u;
        goto label_22dde8;
    }
    ctx->pc = 0x22DDE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22DDE8u);
        ctx->pc = 0x22DDE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DDE0u;
            // 0x22dde4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22DDE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22DDE8u; }
            if (ctx->pc != 0x22DDE8u) { return; }
        }
        }
    }
    ctx->pc = 0x22DDE8u;
label_22dde8:
    // 0x22dde8: 0x8e8201b0  lw          $v0, 0x1B0($s4)
    ctx->pc = 0x22dde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 432)));
label_22ddec:
    // 0x22ddec: 0x8c440070  lw          $a0, 0x70($v0)
    ctx->pc = 0x22ddecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_22ddf0:
    // 0x22ddf0: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_22ddf4:
    if (ctx->pc == 0x22DDF4u) {
        ctx->pc = 0x22DDF8u;
        goto label_22ddf8;
    }
    ctx->pc = 0x22DDF0u;
    {
        const bool branch_taken_0x22ddf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ddf0) {
            ctx->pc = 0x22DE14u;
            goto label_22de14;
        }
    }
    ctx->pc = 0x22DDF8u;
label_22ddf8:
    // 0x22ddf8: 0x8c8500f4  lw          $a1, 0xF4($a0)
    ctx->pc = 0x22ddf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
label_22ddfc:
    // 0x22ddfc: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_22de00:
    if (ctx->pc == 0x22DE00u) {
        ctx->pc = 0x22DE00u;
            // 0x22de00: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x22DE04u;
        goto label_22de04;
    }
    ctx->pc = 0x22DDFCu;
    {
        const bool branch_taken_0x22ddfc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DE00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DDFCu;
            // 0x22de00: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ddfc) {
            ctx->pc = 0x22DE14u;
            goto label_22de14;
        }
    }
    ctx->pc = 0x22DE04u;
label_22de04:
    // 0x22de04: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x22de04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22de08:
    // 0x22de08: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x22de08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_22de0c:
    // 0x22de0c: 0xc04de54  jal         func_137950
label_22de10:
    if (ctx->pc == 0x22DE10u) {
        ctx->pc = 0x22DE10u;
            // 0x22de10: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x22DE14u;
        goto label_22de14;
    }
    ctx->pc = 0x22DE0Cu;
    SET_GPR_U32(ctx, 31, 0x22DE14u);
    ctx->pc = 0x22DE10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22DE0Cu;
            // 0x22de10: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137950u;
    if (runtime->hasFunction(0x137950u)) {
        auto targetFn = runtime->lookupFunction(0x137950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DE14u; }
        if (ctx->pc != 0x22DE14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttrParam__8mgCFrameFR12mgCFrameAttrii_0x137950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DE14u; }
        if (ctx->pc != 0x22DE14u) { return; }
    }
    ctx->pc = 0x22DE14u;
label_22de14:
    // 0x22de14: 0x8e8401b0  lw          $a0, 0x1B0($s4)
    ctx->pc = 0x22de14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 432)));
label_22de18:
    // 0x22de18: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22de18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22de1c:
    // 0x22de1c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x22de1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22de20:
    // 0x22de20: 0x8f3900f8  lw          $t9, 0xF8($t9)
    ctx->pc = 0x22de20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 248)));
label_22de24:
    // 0x22de24: 0x320f809  jalr        $t9
label_22de28:
    if (ctx->pc == 0x22DE28u) {
        ctx->pc = 0x22DE28u;
            // 0x22de28: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22DE2Cu;
        goto label_22de2c;
    }
    ctx->pc = 0x22DE24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22DE2Cu);
        ctx->pc = 0x22DE28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DE24u;
            // 0x22de28: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22DE2Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22DE2Cu; }
            if (ctx->pc != 0x22DE2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x22DE2Cu;
label_22de2c:
    // 0x22de2c: 0xae8001e4  sw          $zero, 0x1E4($s4)
    ctx->pc = 0x22de2cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 484), GPR_U32(ctx, 0));
label_22de30:
    // 0x22de30: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x22de30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_22de34:
    // 0x22de34: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x22de34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_22de38:
    // 0x22de38: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22de38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22de3c:
    // 0x22de3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22de3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22de40:
    // 0x22de40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22de40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22de44:
    // 0x22de44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22de44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22de48:
    // 0x22de48: 0x3e00008  jr          $ra
label_22de4c:
    if (ctx->pc == 0x22DE4Cu) {
        ctx->pc = 0x22DE4Cu;
            // 0x22de4c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x22DE50u;
        goto label_fallthrough_0x22de48;
    }
    ctx->pc = 0x22DE48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22DE4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DE48u;
            // 0x22de4c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x22de48:
    ctx->pc = 0x22DE50u;
}
