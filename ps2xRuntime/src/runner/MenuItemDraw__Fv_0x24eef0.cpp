#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuItemDraw__Fv
// Address: 0x24eef0 - 0x24f150
void MenuItemDraw__Fv_0x24eef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuItemDraw__Fv_0x24eef0");
#endif

    switch (ctx->pc) {
        case 0x24eef0u: goto label_24eef0;
        case 0x24eef4u: goto label_24eef4;
        case 0x24eef8u: goto label_24eef8;
        case 0x24eefcu: goto label_24eefc;
        case 0x24ef00u: goto label_24ef00;
        case 0x24ef04u: goto label_24ef04;
        case 0x24ef08u: goto label_24ef08;
        case 0x24ef0cu: goto label_24ef0c;
        case 0x24ef10u: goto label_24ef10;
        case 0x24ef14u: goto label_24ef14;
        case 0x24ef18u: goto label_24ef18;
        case 0x24ef1cu: goto label_24ef1c;
        case 0x24ef20u: goto label_24ef20;
        case 0x24ef24u: goto label_24ef24;
        case 0x24ef28u: goto label_24ef28;
        case 0x24ef2cu: goto label_24ef2c;
        case 0x24ef30u: goto label_24ef30;
        case 0x24ef34u: goto label_24ef34;
        case 0x24ef38u: goto label_24ef38;
        case 0x24ef3cu: goto label_24ef3c;
        case 0x24ef40u: goto label_24ef40;
        case 0x24ef44u: goto label_24ef44;
        case 0x24ef48u: goto label_24ef48;
        case 0x24ef4cu: goto label_24ef4c;
        case 0x24ef50u: goto label_24ef50;
        case 0x24ef54u: goto label_24ef54;
        case 0x24ef58u: goto label_24ef58;
        case 0x24ef5cu: goto label_24ef5c;
        case 0x24ef60u: goto label_24ef60;
        case 0x24ef64u: goto label_24ef64;
        case 0x24ef68u: goto label_24ef68;
        case 0x24ef6cu: goto label_24ef6c;
        case 0x24ef70u: goto label_24ef70;
        case 0x24ef74u: goto label_24ef74;
        case 0x24ef78u: goto label_24ef78;
        case 0x24ef7cu: goto label_24ef7c;
        case 0x24ef80u: goto label_24ef80;
        case 0x24ef84u: goto label_24ef84;
        case 0x24ef88u: goto label_24ef88;
        case 0x24ef8cu: goto label_24ef8c;
        case 0x24ef90u: goto label_24ef90;
        case 0x24ef94u: goto label_24ef94;
        case 0x24ef98u: goto label_24ef98;
        case 0x24ef9cu: goto label_24ef9c;
        case 0x24efa0u: goto label_24efa0;
        case 0x24efa4u: goto label_24efa4;
        case 0x24efa8u: goto label_24efa8;
        case 0x24efacu: goto label_24efac;
        case 0x24efb0u: goto label_24efb0;
        case 0x24efb4u: goto label_24efb4;
        case 0x24efb8u: goto label_24efb8;
        case 0x24efbcu: goto label_24efbc;
        case 0x24efc0u: goto label_24efc0;
        case 0x24efc4u: goto label_24efc4;
        case 0x24efc8u: goto label_24efc8;
        case 0x24efccu: goto label_24efcc;
        case 0x24efd0u: goto label_24efd0;
        case 0x24efd4u: goto label_24efd4;
        case 0x24efd8u: goto label_24efd8;
        case 0x24efdcu: goto label_24efdc;
        case 0x24efe0u: goto label_24efe0;
        case 0x24efe4u: goto label_24efe4;
        case 0x24efe8u: goto label_24efe8;
        case 0x24efecu: goto label_24efec;
        case 0x24eff0u: goto label_24eff0;
        case 0x24eff4u: goto label_24eff4;
        case 0x24eff8u: goto label_24eff8;
        case 0x24effcu: goto label_24effc;
        case 0x24f000u: goto label_24f000;
        case 0x24f004u: goto label_24f004;
        case 0x24f008u: goto label_24f008;
        case 0x24f00cu: goto label_24f00c;
        case 0x24f010u: goto label_24f010;
        case 0x24f014u: goto label_24f014;
        case 0x24f018u: goto label_24f018;
        case 0x24f01cu: goto label_24f01c;
        case 0x24f020u: goto label_24f020;
        case 0x24f024u: goto label_24f024;
        case 0x24f028u: goto label_24f028;
        case 0x24f02cu: goto label_24f02c;
        case 0x24f030u: goto label_24f030;
        case 0x24f034u: goto label_24f034;
        case 0x24f038u: goto label_24f038;
        case 0x24f03cu: goto label_24f03c;
        case 0x24f040u: goto label_24f040;
        case 0x24f044u: goto label_24f044;
        case 0x24f048u: goto label_24f048;
        case 0x24f04cu: goto label_24f04c;
        case 0x24f050u: goto label_24f050;
        case 0x24f054u: goto label_24f054;
        case 0x24f058u: goto label_24f058;
        case 0x24f05cu: goto label_24f05c;
        case 0x24f060u: goto label_24f060;
        case 0x24f064u: goto label_24f064;
        case 0x24f068u: goto label_24f068;
        case 0x24f06cu: goto label_24f06c;
        case 0x24f070u: goto label_24f070;
        case 0x24f074u: goto label_24f074;
        case 0x24f078u: goto label_24f078;
        case 0x24f07cu: goto label_24f07c;
        case 0x24f080u: goto label_24f080;
        case 0x24f084u: goto label_24f084;
        case 0x24f088u: goto label_24f088;
        case 0x24f08cu: goto label_24f08c;
        case 0x24f090u: goto label_24f090;
        case 0x24f094u: goto label_24f094;
        case 0x24f098u: goto label_24f098;
        case 0x24f09cu: goto label_24f09c;
        case 0x24f0a0u: goto label_24f0a0;
        case 0x24f0a4u: goto label_24f0a4;
        case 0x24f0a8u: goto label_24f0a8;
        case 0x24f0acu: goto label_24f0ac;
        case 0x24f0b0u: goto label_24f0b0;
        case 0x24f0b4u: goto label_24f0b4;
        case 0x24f0b8u: goto label_24f0b8;
        case 0x24f0bcu: goto label_24f0bc;
        case 0x24f0c0u: goto label_24f0c0;
        case 0x24f0c4u: goto label_24f0c4;
        case 0x24f0c8u: goto label_24f0c8;
        case 0x24f0ccu: goto label_24f0cc;
        case 0x24f0d0u: goto label_24f0d0;
        case 0x24f0d4u: goto label_24f0d4;
        case 0x24f0d8u: goto label_24f0d8;
        case 0x24f0dcu: goto label_24f0dc;
        case 0x24f0e0u: goto label_24f0e0;
        case 0x24f0e4u: goto label_24f0e4;
        case 0x24f0e8u: goto label_24f0e8;
        case 0x24f0ecu: goto label_24f0ec;
        case 0x24f0f0u: goto label_24f0f0;
        case 0x24f0f4u: goto label_24f0f4;
        case 0x24f0f8u: goto label_24f0f8;
        case 0x24f0fcu: goto label_24f0fc;
        case 0x24f100u: goto label_24f100;
        case 0x24f104u: goto label_24f104;
        case 0x24f108u: goto label_24f108;
        case 0x24f10cu: goto label_24f10c;
        case 0x24f110u: goto label_24f110;
        case 0x24f114u: goto label_24f114;
        case 0x24f118u: goto label_24f118;
        case 0x24f11cu: goto label_24f11c;
        case 0x24f120u: goto label_24f120;
        case 0x24f124u: goto label_24f124;
        case 0x24f128u: goto label_24f128;
        case 0x24f12cu: goto label_24f12c;
        case 0x24f130u: goto label_24f130;
        case 0x24f134u: goto label_24f134;
        case 0x24f138u: goto label_24f138;
        case 0x24f13cu: goto label_24f13c;
        case 0x24f140u: goto label_24f140;
        case 0x24f144u: goto label_24f144;
        case 0x24f148u: goto label_24f148;
        case 0x24f14cu: goto label_24f14c;
        default: break;
    }

    ctx->pc = 0x24eef0u;

label_24eef0:
    // 0x24eef0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24eef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_24eef4:
    // 0x24eef4: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x24eef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_24eef8:
    // 0x24eef8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x24eef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_24eefc:
    // 0x24eefc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24eefcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24ef00:
    // 0x24ef00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24ef00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_24ef04:
    // 0x24ef04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24ef04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24ef08:
    // 0x24ef08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24ef08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24ef0c:
    // 0x24ef0c: 0xc0887b0  jal         func_221EC0
label_24ef10:
    if (ctx->pc == 0x24EF10u) {
        ctx->pc = 0x24EF10u;
            // 0x24ef10: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x24EF14u;
        goto label_24ef14;
    }
    ctx->pc = 0x24EF0Cu;
    SET_GPR_U32(ctx, 31, 0x24EF14u);
    ctx->pc = 0x24EF10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24EF0Cu;
            // 0x24ef10: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221EC0u;
    if (runtime->hasFunction(0x221EC0u)) {
        auto targetFn = runtime->lookupFunction(0x221EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EF14u; }
        if (ctx->pc != 0x24EF14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuFillBox__Fiiii_0x221ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EF14u; }
        if (ctx->pc != 0x24EF14u) { return; }
    }
    ctx->pc = 0x24EF14u;
label_24ef14:
    // 0x24ef14: 0x8f8595c0  lw          $a1, -0x6A40($gp)
    ctx->pc = 0x24ef14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
label_24ef18:
    // 0x24ef18: 0x84a30176  lh          $v1, 0x176($a1)
    ctx->pc = 0x24ef18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 374)));
label_24ef1c:
    // 0x24ef1c: 0x20630001  addi        $v1, $v1, 0x1
    ctx->pc = 0x24ef1cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)1, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
label_24ef20:
    // 0x24ef20: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x24ef20u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_24ef24:
    // 0x24ef24: 0x10200085  beqz        $at, . + 4 + (0x85 << 2)
label_24ef28:
    if (ctx->pc == 0x24EF28u) {
        ctx->pc = 0x24EF28u;
            // 0x24ef28: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x24EF2Cu;
        goto label_24ef2c;
    }
    ctx->pc = 0x24EF24u;
    {
        const bool branch_taken_0x24ef24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EF28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24EF24u;
            // 0x24ef28: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ef24) {
            ctx->pc = 0x24F13Cu;
            goto label_24f13c;
        }
    }
    ctx->pc = 0x24EF2Cu;
label_24ef2c:
    // 0x24ef2c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24ef2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_24ef30:
    // 0x24ef30: 0x2484bb80  addiu       $a0, $a0, -0x4480
    ctx->pc = 0x24ef30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949760));
label_24ef34:
    // 0x24ef34: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x24ef34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_24ef38:
    // 0x24ef38: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x24ef38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_24ef3c:
    // 0x24ef3c: 0x600008  jr          $v1
label_24ef40:
    if (ctx->pc == 0x24EF40u) {
        ctx->pc = 0x24EF44u;
        goto label_24ef44;
    }
    ctx->pc = 0x24EF3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24EF44u: goto label_24ef44;
            case 0x24F0F4u: goto label_24f0f4;
            case 0x24F104u: goto label_24f104;
            case 0x24F114u: goto label_24f114;
            case 0x24F124u: goto label_24f124;
            case 0x24F134u: goto label_24f134;
            default: break;
        }
        return;
    }
    ctx->pc = 0x24EF44u;
label_24ef44:
    // 0x24ef44: 0x84a30110  lh          $v1, 0x110($a1)
    ctx->pc = 0x24ef44u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 272)));
label_24ef48:
    // 0x24ef48: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x24ef48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_24ef4c:
    // 0x24ef4c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_24ef50:
    if (ctx->pc == 0x24EF50u) {
        ctx->pc = 0x24EF50u;
            // 0x24ef50: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x24EF54u;
        goto label_24ef54;
    }
    ctx->pc = 0x24EF4Cu;
    {
        const bool branch_taken_0x24ef4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24EF50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24EF4Cu;
            // 0x24ef50: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ef4c) {
            ctx->pc = 0x24EF5Cu;
            goto label_24ef5c;
        }
    }
    ctx->pc = 0x24EF54u;
label_24ef54:
    // 0x24ef54: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_24ef58:
    if (ctx->pc == 0x24EF58u) {
        ctx->pc = 0x24EF58u;
            // 0x24ef58: 0x3c0101f1  lui         $at, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
        ctx->pc = 0x24EF5Cu;
        goto label_24ef5c;
    }
    ctx->pc = 0x24EF54u;
    {
        const bool branch_taken_0x24ef54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24EF58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24EF54u;
            // 0x24ef58: 0x3c0101f1  lui         $at, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ef54) {
            ctx->pc = 0x24EF80u;
            goto label_24ef80;
        }
    }
    ctx->pc = 0x24EF5Cu;
label_24ef5c:
    // 0x24ef5c: 0x8f8494f4  lw          $a0, -0x6B0C($gp)
    ctx->pc = 0x24ef5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939892)));
label_24ef60:
    // 0x24ef60: 0xc04c518  jal         func_131460
label_24ef64:
    if (ctx->pc == 0x24EF64u) {
        ctx->pc = 0x24EF64u;
            // 0x24ef64: 0x24a50140  addiu       $a1, $a1, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
        ctx->pc = 0x24EF68u;
        goto label_24ef68;
    }
    ctx->pc = 0x24EF60u;
    SET_GPR_U32(ctx, 31, 0x24EF68u);
    ctx->pc = 0x24EF64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24EF60u;
            // 0x24ef64: 0x24a50140  addiu       $a1, $a1, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131460u;
    if (runtime->hasFunction(0x131460u)) {
        auto targetFn = runtime->lookupFunction(0x131460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EF68u; }
        if (ctx->pc != 0x24EF68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRef__9mgCCameraFPf_0x131460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EF68u; }
        if (ctx->pc != 0x24EF68u) { return; }
    }
    ctx->pc = 0x24EF68u;
label_24ef68:
    // 0x24ef68: 0x8f8295c0  lw          $v0, -0x6A40($gp)
    ctx->pc = 0x24ef68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
label_24ef6c:
    // 0x24ef6c: 0x8f8494f4  lw          $a0, -0x6B0C($gp)
    ctx->pc = 0x24ef6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939892)));
label_24ef70:
    // 0x24ef70: 0xc04c504  jal         func_131410
label_24ef74:
    if (ctx->pc == 0x24EF74u) {
        ctx->pc = 0x24EF74u;
            // 0x24ef74: 0x24450150  addiu       $a1, $v0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
        ctx->pc = 0x24EF78u;
        goto label_24ef78;
    }
    ctx->pc = 0x24EF70u;
    SET_GPR_U32(ctx, 31, 0x24EF78u);
    ctx->pc = 0x24EF74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24EF70u;
            // 0x24ef74: 0x24450150  addiu       $a1, $v0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131410u;
    if (runtime->hasFunction(0x131410u)) {
        auto targetFn = runtime->lookupFunction(0x131410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EF78u; }
        if (ctx->pc != 0x24EF78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__9mgCCameraFPf_0x131410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EF78u; }
        if (ctx->pc != 0x24EF78u) { return; }
    }
    ctx->pc = 0x24EF78u;
label_24ef78:
    // 0x24ef78: 0x10000007  b           . + 4 + (0x7 << 2)
label_24ef7c:
    if (ctx->pc == 0x24EF7Cu) {
        ctx->pc = 0x24EF7Cu;
            // 0x24ef7c: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->pc = 0x24EF80u;
        goto label_24ef80;
    }
    ctx->pc = 0x24EF78u;
    {
        const bool branch_taken_0x24ef78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EF7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24EF78u;
            // 0x24ef7c: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ef78) {
            ctx->pc = 0x24EF98u;
            goto label_24ef98;
        }
    }
    ctx->pc = 0x24EF80u;
label_24ef80:
    // 0x24ef80: 0x83878390  lb          $a3, -0x7C70($gp)
    ctx->pc = 0x24ef80u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935440)));
label_24ef84:
    // 0x24ef84: 0x8c24caa0  lw          $a0, -0x3560($at)
    ctx->pc = 0x24ef84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953632)));
label_24ef88:
    // 0x24ef88: 0x8f8594f4  lw          $a1, -0x6B0C($gp)
    ctx->pc = 0x24ef88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939892)));
label_24ef8c:
    // 0x24ef8c: 0xc08fcd4  jal         func_23F350
label_24ef90:
    if (ctx->pc == 0x24EF90u) {
        ctx->pc = 0x24EF90u;
            // 0x24ef90: 0x8386838c  lb          $a2, -0x7C74($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935436)));
        ctx->pc = 0x24EF94u;
        goto label_24ef94;
    }
    ctx->pc = 0x24EF8Cu;
    SET_GPR_U32(ctx, 31, 0x24EF94u);
    ctx->pc = 0x24EF90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24EF8Cu;
            // 0x24ef90: 0x8386838c  lb          $a2, -0x7C74($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935436)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23F350u;
    if (runtime->hasFunction(0x23F350u)) {
        auto targetFn = runtime->lookupFunction(0x23F350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EF94u; }
        if (ctx->pc != 0x24EF94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuEquipCameraSetEnv__FP12CActionCharaP9mgCCameraii_0x23f350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EF94u; }
        if (ctx->pc != 0x24EF94u) { return; }
    }
    ctx->pc = 0x24EF94u;
label_24ef94:
    // 0x24ef94: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x24ef94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
label_24ef98:
    // 0x24ef98: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x24ef98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_24ef9c:
    // 0x24ef9c: 0xc08ac34  jal         func_22B0D0
label_24efa0:
    if (ctx->pc == 0x24EFA0u) {
        ctx->pc = 0x24EFA0u;
            // 0x24efa0: 0xafa2003c  sw          $v0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
        ctx->pc = 0x24EFA4u;
        goto label_24efa4;
    }
    ctx->pc = 0x24EF9Cu;
    SET_GPR_U32(ctx, 31, 0x24EFA4u);
    ctx->pc = 0x24EFA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24EF9Cu;
            // 0x24efa0: 0xafa2003c  sw          $v0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B0D0u;
    if (runtime->hasFunction(0x22B0D0u)) {
        auto targetFn = runtime->lookupFunction(0x22B0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EFA4u; }
        if (ctx->pc != 0x24EFA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDrawTopList__14CPosDataManageFv_0x22b0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EFA4u; }
        if (ctx->pc != 0x24EFA4u) { return; }
    }
    ctx->pc = 0x24EFA4u;
label_24efa4:
    // 0x24efa4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24efa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24efa8:
    // 0x24efa8: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_24efac:
    if (ctx->pc == 0x24EFACu) {
        ctx->pc = 0x24EFACu;
            // 0x24efac: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24EFB0u;
        goto label_24efb0;
    }
    ctx->pc = 0x24EFA8u;
    {
        const bool branch_taken_0x24efa8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EFACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24EFA8u;
            // 0x24efac: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24efa8) {
            ctx->pc = 0x24F004u;
            goto label_24f004;
        }
    }
    ctx->pc = 0x24EFB0u;
label_24efb0:
    // 0x24efb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24efb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24efb4:
    // 0x24efb4: 0xc08a9b4  jal         func_22A6D0
label_24efb8:
    if (ctx->pc == 0x24EFB8u) {
        ctx->pc = 0x24EFB8u;
            // 0x24efb8: 0x27a5003c  addiu       $a1, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->pc = 0x24EFBCu;
        goto label_24efbc;
    }
    ctx->pc = 0x24EFB4u;
    SET_GPR_U32(ctx, 31, 0x24EFBCu);
    ctx->pc = 0x24EFB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24EFB4u;
            // 0x24efb8: 0x27a5003c  addiu       $a1, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A6D0u;
    if (runtime->hasFunction(0x22A6D0u)) {
        auto targetFn = runtime->lookupFunction(0x22A6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EFBCu; }
        if (ctx->pc != 0x24EFBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuFormDraw__16CMenuPosDataFormFRi_0x22a6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EFBCu; }
        if (ctx->pc != 0x24EFBCu) { return; }
    }
    ctx->pc = 0x24EFBCu;
label_24efbc:
    // 0x24efbc: 0x1620000c  bnez        $s1, . + 4 + (0xC << 2)
label_24efc0:
    if (ctx->pc == 0x24EFC0u) {
        ctx->pc = 0x24EFC4u;
        goto label_24efc4;
    }
    ctx->pc = 0x24EFBCu;
    {
        const bool branch_taken_0x24efbc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x24efbc) {
            ctx->pc = 0x24EFF0u;
            goto label_24eff0;
        }
    }
    ctx->pc = 0x24EFC4u;
label_24efc4:
    // 0x24efc4: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x24efc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_24efc8:
    // 0x24efc8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x24efc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_24efcc:
    // 0x24efcc: 0xc04a38a  jal         func_128E28
label_24efd0:
    if (ctx->pc == 0x24EFD0u) {
        ctx->pc = 0x24EFD0u;
            // 0x24efd0: 0x24a5b198  addiu       $a1, $a1, -0x4E68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947224));
        ctx->pc = 0x24EFD4u;
        goto label_24efd4;
    }
    ctx->pc = 0x24EFCCu;
    SET_GPR_U32(ctx, 31, 0x24EFD4u);
    ctx->pc = 0x24EFD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24EFCCu;
            // 0x24efd0: 0x24a5b198  addiu       $a1, $a1, -0x4E68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EFD4u; }
        if (ctx->pc != 0x24EFD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EFD4u; }
        if (ctx->pc != 0x24EFD4u) { return; }
    }
    ctx->pc = 0x24EFD4u;
label_24efd4:
    // 0x24efd4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_24efd8:
    if (ctx->pc == 0x24EFD8u) {
        ctx->pc = 0x24EFDCu;
        goto label_24efdc;
    }
    ctx->pc = 0x24EFD4u;
    {
        const bool branch_taken_0x24efd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24efd4) {
            ctx->pc = 0x24EFF0u;
            goto label_24eff0;
        }
    }
    ctx->pc = 0x24EFDCu;
label_24efdc:
    // 0x24efdc: 0xc08bd44  jal         func_22F510
label_24efe0:
    if (ctx->pc == 0x24EFE0u) {
        ctx->pc = 0x24EFE4u;
        goto label_24efe4;
    }
    ctx->pc = 0x24EFDCu;
    SET_GPR_U32(ctx, 31, 0x24EFE4u);
    ctx->pc = 0x22F510u;
    if (runtime->hasFunction(0x22F510u)) {
        auto targetFn = runtime->lookupFunction(0x22F510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EFE4u; }
        if (ctx->pc != 0x24EFE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawBuildUpInfoEffect__Fv_0x22f510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EFE4u; }
        if (ctx->pc != 0x24EFE4u) { return; }
    }
    ctx->pc = 0x24EFE4u;
label_24efe4:
    // 0x24efe4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x24efe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_24efe8:
    // 0x24efe8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x24efe8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24efec:
    // 0x24efec: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x24efecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
label_24eff0:
    // 0x24eff0: 0x8e100074  lw          $s0, 0x74($s0)
    ctx->pc = 0x24eff0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_24eff4:
    // 0x24eff4: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_24eff8:
    if (ctx->pc == 0x24EFF8u) {
        ctx->pc = 0x24EFFCu;
        goto label_24effc;
    }
    ctx->pc = 0x24EFF4u;
    {
        const bool branch_taken_0x24eff4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x24eff4) {
            ctx->pc = 0x24F004u;
            goto label_24f004;
        }
    }
    ctx->pc = 0x24EFFCu;
label_24effc:
    // 0x24effc: 0x1600ffed  bnez        $s0, . + 4 + (-0x13 << 2)
label_24f000:
    if (ctx->pc == 0x24F000u) {
        ctx->pc = 0x24F000u;
            // 0x24f000: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24F004u;
        goto label_24f004;
    }
    ctx->pc = 0x24EFFCu;
    {
        const bool branch_taken_0x24effc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x24F000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24EFFCu;
            // 0x24f000: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24effc) {
            ctx->pc = 0x24EFB4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24efb4;
        }
    }
    ctx->pc = 0x24F004u;
label_24f004:
    // 0x24f004: 0x0  nop
    ctx->pc = 0x24f004u;
    // NOP
label_24f008:
    // 0x24f008: 0xc08c7b0  jal         func_231EC0
label_24f00c:
    if (ctx->pc == 0x24F00Cu) {
        ctx->pc = 0x24F00Cu;
            // 0x24f00c: 0x8f8495c8  lw          $a0, -0x6A38($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940104)));
        ctx->pc = 0x24F010u;
        goto label_24f010;
    }
    ctx->pc = 0x24F008u;
    SET_GPR_U32(ctx, 31, 0x24F010u);
    ctx->pc = 0x24F00Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24F008u;
            // 0x24f00c: 0x8f8495c8  lw          $a0, -0x6A38($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940104)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231EC0u;
    if (runtime->hasFunction(0x231EC0u)) {
        auto targetFn = runtime->lookupFunction(0x231EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F010u; }
        if (ctx->pc != 0x24F010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__11CMenuEffectFv_0x231ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F010u; }
        if (ctx->pc != 0x24F010u) { return; }
    }
    ctx->pc = 0x24F010u;
label_24f010:
    // 0x24f010: 0xc08c7b0  jal         func_231EC0
label_24f014:
    if (ctx->pc == 0x24F014u) {
        ctx->pc = 0x24F014u;
            // 0x24f014: 0x8f8495cc  lw          $a0, -0x6A34($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940108)));
        ctx->pc = 0x24F018u;
        goto label_24f018;
    }
    ctx->pc = 0x24F010u;
    SET_GPR_U32(ctx, 31, 0x24F018u);
    ctx->pc = 0x24F014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24F010u;
            // 0x24f014: 0x8f8495cc  lw          $a0, -0x6A34($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940108)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231EC0u;
    if (runtime->hasFunction(0x231EC0u)) {
        auto targetFn = runtime->lookupFunction(0x231EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F018u; }
        if (ctx->pc != 0x24F018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__11CMenuEffectFv_0x231ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F018u; }
        if (ctx->pc != 0x24F018u) { return; }
    }
    ctx->pc = 0x24F018u;
label_24f018:
    // 0x24f018: 0x8f8395c0  lw          $v1, -0x6A40($gp)
    ctx->pc = 0x24f018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
label_24f01c:
    // 0x24f01c: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x24f01cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
label_24f020:
    // 0x24f020: 0x8c6202f4  lw          $v0, 0x2F4($v1)
    ctx->pc = 0x24f020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 756)));
label_24f024:
    // 0x24f024: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_24f028:
    if (ctx->pc == 0x24F028u) {
        ctx->pc = 0x24F028u;
            // 0x24f028: 0x26101ef0  addiu       $s0, $s0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7920));
        ctx->pc = 0x24F02Cu;
        goto label_24f02c;
    }
    ctx->pc = 0x24F024u;
    {
        const bool branch_taken_0x24f024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24F024u;
            // 0x24f028: 0x26101ef0  addiu       $s0, $s0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f024) {
            ctx->pc = 0x24F054u;
            goto label_24f054;
        }
    }
    ctx->pc = 0x24F02Cu;
label_24f02c:
    // 0x24f02c: 0x8c650020  lw          $a1, 0x20($v1)
    ctx->pc = 0x24f02cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_24f030:
    // 0x24f030: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24f030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24f034:
    // 0x24f034: 0xc04ba14  jal         func_12E850
label_24f038:
    if (ctx->pc == 0x24F038u) {
        ctx->pc = 0x24F038u;
            // 0x24f038: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24F03Cu;
        goto label_24f03c;
    }
    ctx->pc = 0x24F034u;
    SET_GPR_U32(ctx, 31, 0x24F03Cu);
    ctx->pc = 0x24F038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24F034u;
            // 0x24f038: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F03Cu; }
        if (ctx->pc != 0x24F03Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F03Cu; }
        if (ctx->pc != 0x24F03Cu) { return; }
    }
    ctx->pc = 0x24F03Cu;
label_24f03c:
    // 0x24f03c: 0x8f8295c0  lw          $v0, -0x6A40($gp)
    ctx->pc = 0x24f03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
label_24f040:
    // 0x24f040: 0x8c4402f4  lw          $a0, 0x2F4($v0)
    ctx->pc = 0x24f040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 756)));
label_24f044:
    // 0x24f044: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x24f044u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_24f048:
    // 0x24f048: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x24f048u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_24f04c:
    // 0x24f04c: 0x320f809  jalr        $t9
label_24f050:
    if (ctx->pc == 0x24F050u) {
        ctx->pc = 0x24F054u;
        goto label_24f054;
    }
    ctx->pc = 0x24F04Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x24F054u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x24F054u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x24F054u; }
            if (ctx->pc != 0x24F054u) { return; }
        }
        }
    }
    ctx->pc = 0x24F054u;
label_24f054:
    // 0x24f054: 0xc08b868  jal         func_22E1A0
label_24f058:
    if (ctx->pc == 0x24F058u) {
        ctx->pc = 0x24F058u;
            // 0x24f058: 0x8f849584  lw          $a0, -0x6A7C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940036)));
        ctx->pc = 0x24F05Cu;
        goto label_24f05c;
    }
    ctx->pc = 0x24F054u;
    SET_GPR_U32(ctx, 31, 0x24F05Cu);
    ctx->pc = 0x24F058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24F054u;
            // 0x24f058: 0x8f849584  lw          $a0, -0x6A7C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940036)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22E1A0u;
    if (runtime->hasFunction(0x22E1A0u)) {
        auto targetFn = runtime->lookupFunction(0x22E1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F05Cu; }
        if (ctx->pc != 0x24F05Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__14CRepairManagerFv_0x22e1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F05Cu; }
        if (ctx->pc != 0x24F05Cu) { return; }
    }
    ctx->pc = 0x24F05Cu;
label_24f05c:
    // 0x24f05c: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x24f05cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_24f060:
    // 0x24f060: 0xc08ba34  jal         func_22E8D0
label_24f064:
    if (ctx->pc == 0x24F064u) {
        ctx->pc = 0x24F064u;
            // 0x24f064: 0x2484d920  addiu       $a0, $a0, -0x26E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957344));
        ctx->pc = 0x24F068u;
        goto label_24f068;
    }
    ctx->pc = 0x24F060u;
    SET_GPR_U32(ctx, 31, 0x24F068u);
    ctx->pc = 0x24F064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24F060u;
            // 0x24f064: 0x2484d920  addiu       $a0, $a0, -0x26E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957344));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22E8D0u;
    if (runtime->hasFunction(0x22E8D0u)) {
        auto targetFn = runtime->lookupFunction(0x22E8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F068u; }
        if (ctx->pc != 0x24F068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsRun__21CLevelUpEffectManagerFv_0x22e8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F068u; }
        if (ctx->pc != 0x24F068u) { return; }
    }
    ctx->pc = 0x24F068u;
label_24f068:
    // 0x24f068: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_24f06c:
    if (ctx->pc == 0x24F06Cu) {
        ctx->pc = 0x24F06Cu;
            // 0x24f06c: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->pc = 0x24F070u;
        goto label_24f070;
    }
    ctx->pc = 0x24F068u;
    {
        const bool branch_taken_0x24f068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F06Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24F068u;
            // 0x24f06c: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f068) {
            ctx->pc = 0x24F098u;
            goto label_24f098;
        }
    }
    ctx->pc = 0x24F070u;
label_24f070:
    // 0x24f070: 0x8c22d920  lw          $v0, -0x26E0($at)
    ctx->pc = 0x24f070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957344)));
label_24f074:
    // 0x24f074: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_24f078:
    if (ctx->pc == 0x24F078u) {
        ctx->pc = 0x24F07Cu;
        goto label_24f07c;
    }
    ctx->pc = 0x24F074u;
    {
        const bool branch_taken_0x24f074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f074) {
            ctx->pc = 0x24F098u;
            goto label_24f098;
        }
    }
    ctx->pc = 0x24F07Cu;
label_24f07c:
    // 0x24f07c: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x24f07cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_24f080:
    // 0x24f080: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24f080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24f084:
    // 0x24f084: 0xc04ba14  jal         func_12E850
label_24f088:
    if (ctx->pc == 0x24F088u) {
        ctx->pc = 0x24F088u;
            // 0x24f088: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24F08Cu;
        goto label_24f08c;
    }
    ctx->pc = 0x24F084u;
    SET_GPR_U32(ctx, 31, 0x24F08Cu);
    ctx->pc = 0x24F088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24F084u;
            // 0x24f088: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F08Cu; }
        if (ctx->pc != 0x24F08Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F08Cu; }
        if (ctx->pc != 0x24F08Cu) { return; }
    }
    ctx->pc = 0x24F08Cu;
label_24f08c:
    // 0x24f08c: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x24f08cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_24f090:
    // 0x24f090: 0xc08bac0  jal         func_22EB00
label_24f094:
    if (ctx->pc == 0x24F094u) {
        ctx->pc = 0x24F094u;
            // 0x24f094: 0x2484d920  addiu       $a0, $a0, -0x26E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957344));
        ctx->pc = 0x24F098u;
        goto label_24f098;
    }
    ctx->pc = 0x24F090u;
    SET_GPR_U32(ctx, 31, 0x24F098u);
    ctx->pc = 0x24F094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24F090u;
            // 0x24f094: 0x2484d920  addiu       $a0, $a0, -0x26E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957344));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22EB00u;
    if (runtime->hasFunction(0x22EB00u)) {
        auto targetFn = runtime->lookupFunction(0x22EB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F098u; }
        if (ctx->pc != 0x24F098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__21CLevelUpEffectManagerFv_0x22eb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F098u; }
        if (ctx->pc != 0x24F098u) { return; }
    }
    ctx->pc = 0x24F098u;
label_24f098:
    // 0x24f098: 0xc08bdbc  jal         func_22F6F0
label_24f09c:
    if (ctx->pc == 0x24F09Cu) {
        ctx->pc = 0x24F0A0u;
        goto label_24f0a0;
    }
    ctx->pc = 0x24F098u;
    SET_GPR_U32(ctx, 31, 0x24F0A0u);
    ctx->pc = 0x22F6F0u;
    if (runtime->hasFunction(0x22F6F0u)) {
        auto targetFn = runtime->lookupFunction(0x22F6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F0A0u; }
        if (ctx->pc != 0x24F0A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepFishBoiledEffect__Fv_0x22f6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F0A0u; }
        if (ctx->pc != 0x24F0A0u) { return; }
    }
    ctx->pc = 0x24F0A0u;
label_24f0a0:
    // 0x24f0a0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_24f0a4:
    if (ctx->pc == 0x24F0A4u) {
        ctx->pc = 0x24F0A4u;
            // 0x24f0a4: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->pc = 0x24F0A8u;
        goto label_24f0a8;
    }
    ctx->pc = 0x24F0A0u;
    {
        const bool branch_taken_0x24f0a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F0A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24F0A0u;
            // 0x24f0a4: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f0a0) {
            ctx->pc = 0x24F0C4u;
            goto label_24f0c4;
        }
    }
    ctx->pc = 0x24F0A8u;
label_24f0a8:
    // 0x24f0a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24f0a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24f0ac:
    // 0x24f0ac: 0x8c22d920  lw          $v0, -0x26E0($at)
    ctx->pc = 0x24f0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957344)));
label_24f0b0:
    // 0x24f0b0: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x24f0b0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_24f0b4:
    // 0x24f0b4: 0xc04ba14  jal         func_12E850
label_24f0b8:
    if (ctx->pc == 0x24F0B8u) {
        ctx->pc = 0x24F0B8u;
            // 0x24f0b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24F0BCu;
        goto label_24f0bc;
    }
    ctx->pc = 0x24F0B4u;
    SET_GPR_U32(ctx, 31, 0x24F0BCu);
    ctx->pc = 0x24F0B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24F0B4u;
            // 0x24f0b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F0BCu; }
        if (ctx->pc != 0x24F0BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F0BCu; }
        if (ctx->pc != 0x24F0BCu) { return; }
    }
    ctx->pc = 0x24F0BCu;
label_24f0bc:
    // 0x24f0bc: 0xc08bdfc  jal         func_22F7F0
label_24f0c0:
    if (ctx->pc == 0x24F0C0u) {
        ctx->pc = 0x24F0C4u;
        goto label_24f0c4;
    }
    ctx->pc = 0x24F0BCu;
    SET_GPR_U32(ctx, 31, 0x24F0C4u);
    ctx->pc = 0x22F7F0u;
    if (runtime->hasFunction(0x22F7F0u)) {
        auto targetFn = runtime->lookupFunction(0x22F7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F0C4u; }
        if (ctx->pc != 0x24F0C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawFishBoiledEffect__Fv_0x22f7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F0C4u; }
        if (ctx->pc != 0x24F0C4u) { return; }
    }
    ctx->pc = 0x24F0C4u;
label_24f0c4:
    // 0x24f0c4: 0x8f839520  lw          $v1, -0x6AE0($gp)
    ctx->pc = 0x24f0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939936)));
label_24f0c8:
    // 0x24f0c8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_24f0cc:
    if (ctx->pc == 0x24F0CCu) {
        ctx->pc = 0x24F0D0u;
        goto label_24f0d0;
    }
    ctx->pc = 0x24F0C8u;
    {
        const bool branch_taken_0x24f0c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f0c8) {
            ctx->pc = 0x24F0D8u;
            goto label_24f0d8;
        }
    }
    ctx->pc = 0x24F0D0u;
label_24f0d0:
    // 0x24f0d0: 0xc091bc4  jal         func_246F10
label_24f0d4:
    if (ctx->pc == 0x24F0D4u) {
        ctx->pc = 0x24F0D8u;
        goto label_24f0d8;
    }
    ctx->pc = 0x24F0D0u;
    SET_GPR_U32(ctx, 31, 0x24F0D8u);
    ctx->pc = 0x246F10u;
    if (runtime->hasFunction(0x246F10u)) {
        auto targetFn = runtime->lookupFunction(0x246F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F0D8u; }
        if (ctx->pc != 0x24F0D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuItemDebugDraw__Fv_0x246f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F0D8u; }
        if (ctx->pc != 0x24F0D8u) { return; }
    }
    ctx->pc = 0x24F0D8u;
label_24f0d8:
    // 0x24f0d8: 0x838395a0  lb          $v1, -0x6A60($gp)
    ctx->pc = 0x24f0d8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940064)));
label_24f0dc:
    // 0x24f0dc: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
label_24f0e0:
    if (ctx->pc == 0x24F0E0u) {
        ctx->pc = 0x24F0E4u;
        goto label_24f0e4;
    }
    ctx->pc = 0x24F0DCu;
    {
        const bool branch_taken_0x24f0dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f0dc) {
            ctx->pc = 0x24F13Cu;
            goto label_24f13c;
        }
    }
    ctx->pc = 0x24F0E4u;
label_24f0e4:
    // 0x24f0e4: 0xc08dc08  jal         func_237020
label_24f0e8:
    if (ctx->pc == 0x24F0E8u) {
        ctx->pc = 0x24F0ECu;
        goto label_24f0ec;
    }
    ctx->pc = 0x24F0E4u;
    SET_GPR_U32(ctx, 31, 0x24F0ECu);
    ctx->pc = 0x237020u;
    if (runtime->hasFunction(0x237020u)) {
        auto targetFn = runtime->lookupFunction(0x237020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F0ECu; }
        if (ctx->pc != 0x24F0ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawTrushMenuMessage__Fv_0x237020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F0ECu; }
        if (ctx->pc != 0x24F0ECu) { return; }
    }
    ctx->pc = 0x24F0ECu;
label_24f0ec:
    // 0x24f0ec: 0x10000014  b           . + 4 + (0x14 << 2)
label_24f0f0:
    if (ctx->pc == 0x24F0F0u) {
        ctx->pc = 0x24F0F0u;
            // 0x24f0f0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x24F0F4u;
        goto label_24f0f4;
    }
    ctx->pc = 0x24F0ECu;
    {
        const bool branch_taken_0x24f0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F0F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24F0ECu;
            // 0x24f0f0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f0ec) {
            ctx->pc = 0x24F140u;
            goto label_24f140;
        }
    }
    ctx->pc = 0x24F0F4u;
label_24f0f4:
    // 0x24f0f4: 0xc086408  jal         func_219020
label_24f0f8:
    if (ctx->pc == 0x24F0F8u) {
        ctx->pc = 0x24F0FCu;
        goto label_24f0fc;
    }
    ctx->pc = 0x24F0F4u;
    SET_GPR_U32(ctx, 31, 0x24F0FCu);
    ctx->pc = 0x219020u;
    if (runtime->hasFunction(0x219020u)) {
        auto targetFn = runtime->lookupFunction(0x219020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F0FCu; }
        if (ctx->pc != 0x24F0FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuAquaDraw__Fv_0x219020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F0FCu; }
        if (ctx->pc != 0x24F0FCu) { return; }
    }
    ctx->pc = 0x24F0FCu;
label_24f0fc:
    // 0x24f0fc: 0x1000000f  b           . + 4 + (0xF << 2)
label_24f100:
    if (ctx->pc == 0x24F100u) {
        ctx->pc = 0x24F104u;
        goto label_24f104;
    }
    ctx->pc = 0x24F0FCu;
    {
        const bool branch_taken_0x24f0fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f0fc) {
            ctx->pc = 0x24F13Cu;
            goto label_24f13c;
        }
    }
    ctx->pc = 0x24F104u;
label_24f104:
    // 0x24f104: 0xc0ae344  jal         func_2B8D10
label_24f108:
    if (ctx->pc == 0x24F108u) {
        ctx->pc = 0x24F10Cu;
        goto label_24f10c;
    }
    ctx->pc = 0x24F104u;
    SET_GPR_U32(ctx, 31, 0x24F10Cu);
    ctx->pc = 0x2B8D10u;
    if (runtime->hasFunction(0x2B8D10u)) {
        auto targetFn = runtime->lookupFunction(0x2B8D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F10Cu; }
        if (ctx->pc != 0x24F10Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMonsterBoxDraw__Fv_0x2b8d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F10Cu; }
        if (ctx->pc != 0x24F10Cu) { return; }
    }
    ctx->pc = 0x24F10Cu;
label_24f10c:
    // 0x24f10c: 0x1000000b  b           . + 4 + (0xB << 2)
label_24f110:
    if (ctx->pc == 0x24F110u) {
        ctx->pc = 0x24F114u;
        goto label_24f114;
    }
    ctx->pc = 0x24F10Cu;
    {
        const bool branch_taken_0x24f10c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f10c) {
            ctx->pc = 0x24F13Cu;
            goto label_24f13c;
        }
    }
    ctx->pc = 0x24F114u;
label_24f114:
    // 0x24f114: 0xc0c2d40  jal         func_30B500
label_24f118:
    if (ctx->pc == 0x24F118u) {
        ctx->pc = 0x24F11Cu;
        goto label_24f11c;
    }
    ctx->pc = 0x24F114u;
    SET_GPR_U32(ctx, 31, 0x24F11Cu);
    ctx->pc = 0x30B500u;
    if (runtime->hasFunction(0x30B500u)) {
        auto targetFn = runtime->lookupFunction(0x30B500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F11Cu; }
        if (ctx->pc != 0x24F11Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NameRegistDraw__Fv_0x30b500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F11Cu; }
        if (ctx->pc != 0x24F11Cu) { return; }
    }
    ctx->pc = 0x24F11Cu;
label_24f11c:
    // 0x24f11c: 0x10000007  b           . + 4 + (0x7 << 2)
label_24f120:
    if (ctx->pc == 0x24F120u) {
        ctx->pc = 0x24F124u;
        goto label_24f124;
    }
    ctx->pc = 0x24F11Cu;
    {
        const bool branch_taken_0x24f11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f11c) {
            ctx->pc = 0x24F13Cu;
            goto label_24f13c;
        }
    }
    ctx->pc = 0x24F124u;
label_24f124:
    // 0x24f124: 0xc0a564c  jal         func_295930
label_24f128:
    if (ctx->pc == 0x24F128u) {
        ctx->pc = 0x24F12Cu;
        goto label_24f12c;
    }
    ctx->pc = 0x24F124u;
    SET_GPR_U32(ctx, 31, 0x24F12Cu);
    ctx->pc = 0x295930u;
    if (runtime->hasFunction(0x295930u)) {
        auto targetFn = runtime->lookupFunction(0x295930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F12Cu; }
        if (ctx->pc != 0x24F12Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuNPCQuestViewDraw__Fv_0x295930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F12Cu; }
        if (ctx->pc != 0x24F12Cu) { return; }
    }
    ctx->pc = 0x24F12Cu;
label_24f12c:
    // 0x24f12c: 0x10000003  b           . + 4 + (0x3 << 2)
label_24f130:
    if (ctx->pc == 0x24F130u) {
        ctx->pc = 0x24F134u;
        goto label_24f134;
    }
    ctx->pc = 0x24F12Cu;
    {
        const bool branch_taken_0x24f12c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f12c) {
            ctx->pc = 0x24F13Cu;
            goto label_24f13c;
        }
    }
    ctx->pc = 0x24F134u;
label_24f134:
    // 0x24f134: 0xc0afee4  jal         func_2BFB90
label_24f138:
    if (ctx->pc == 0x24F138u) {
        ctx->pc = 0x24F13Cu;
        goto label_24f13c;
    }
    ctx->pc = 0x24F134u;
    SET_GPR_U32(ctx, 31, 0x24F13Cu);
    ctx->pc = 0x2BFB90u;
    if (runtime->hasFunction(0x2BFB90u)) {
        auto targetFn = runtime->lookupFunction(0x2BFB90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F13Cu; }
        if (ctx->pc != 0x24F13Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MonsterBookDraw__Fv_0x2bfb90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F13Cu; }
        if (ctx->pc != 0x24F13Cu) { return; }
    }
    ctx->pc = 0x24F13Cu;
label_24f13c:
    // 0x24f13c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x24f13cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_24f140:
    // 0x24f140: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24f140u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_24f144:
    // 0x24f144: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24f144u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_24f148:
    // 0x24f148: 0x3e00008  jr          $ra
label_24f14c:
    if (ctx->pc == 0x24F14Cu) {
        ctx->pc = 0x24F14Cu;
            // 0x24f14c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x24F150u;
        goto label_fallthrough_0x24f148;
    }
    ctx->pc = 0x24F148u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24F14Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24F148u;
            // 0x24f14c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x24f148:
    ctx->pc = 0x24F150u;
}
