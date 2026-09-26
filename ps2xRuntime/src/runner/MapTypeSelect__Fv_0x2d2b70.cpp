#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MapTypeSelect__Fv
// Address: 0x2d2b70 - 0x2d2d4c
void MapTypeSelect__Fv_0x2d2b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MapTypeSelect__Fv_0x2d2b70");
#endif

    switch (ctx->pc) {
        case 0x2d2bacu: goto label_2d2bac;
        case 0x2d2bccu: goto label_2d2bcc;
        case 0x2d2c10u: goto label_2d2c10;
        case 0x2d2c50u: goto label_2d2c50;
        case 0x2d2c6cu: goto label_2d2c6c;
        case 0x2d2c78u: goto label_2d2c78;
        case 0x2d2c90u: goto label_2d2c90;
        case 0x2d2ca8u: goto label_2d2ca8;
        case 0x2d2cd0u: goto label_2d2cd0;
        case 0x2d2cecu: goto label_2d2cec;
        case 0x2d2d00u: goto label_2d2d00;
        case 0x2d2d1cu: goto label_2d2d1c;
        case 0x2d2d30u: goto label_2d2d30;
        default: break;
    }

    ctx->pc = 0x2d2b70u;

    // 0x2d2b70: 0x27bdf7c0  addiu       $sp, $sp, -0x840
    ctx->pc = 0x2d2b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965184));
    // 0x2d2b74: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2d2b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2d2b78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d2b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d2b7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d2b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d2b80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d2b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d2b84: 0x83829dec  lb          $v0, -0x6214($gp)
    ctx->pc = 0x2d2b84u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942188)));
    // 0x2d2b88: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D2B88u;
    {
        const bool branch_taken_0x2d2b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D2B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2B88u;
            // 0x2d2b8c: 0x27b00040  addiu       $s0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2b88) {
            ctx->pc = 0x2D2B9Cu;
            goto label_2d2b9c;
        }
    }
    ctx->pc = 0x2D2B90u;
    // 0x2d2b90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d2b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2b94: 0xaf809de8  sw          $zero, -0x6218($gp)
    ctx->pc = 0x2d2b94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942184), GPR_U32(ctx, 0));
    // 0x2d2b98: 0xa3829dec  sb          $v0, -0x6214($gp)
    ctx->pc = 0x2d2b98u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294942188), (uint8_t)GPR_U32(ctx, 2));
label_2d2b9c:
    // 0x2d2b9c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2d2b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x2d2ba0: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x2d2ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x2d2ba4: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2D2BA4u;
    SET_GPR_U32(ctx, 31, 0x2D2BACu);
    ctx->pc = 0x2D2BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2BA4u;
            // 0x2d2ba8: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2BACu; }
        if (ctx->pc != 0x2D2BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2BACu; }
        if (ctx->pc != 0x2D2BACu) { return; }
    }
    ctx->pc = 0x2D2BACu;
label_2d2bac:
    // 0x2d2bac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D2BACu;
    {
        const bool branch_taken_0x2d2bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2BACu;
            // 0x2d2bb0: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2bac) {
            ctx->pc = 0x2D2BC0u;
            goto label_2d2bc0;
        }
    }
    ctx->pc = 0x2D2BB4u;
    // 0x2d2bb4: 0x8f829de8  lw          $v0, -0x6218($gp)
    ctx->pc = 0x2d2bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942184)));
    // 0x2d2bb8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d2bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d2bbc: 0xaf829de8  sw          $v0, -0x6218($gp)
    ctx->pc = 0x2d2bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942184), GPR_U32(ctx, 2));
label_2d2bc0:
    // 0x2d2bc0: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x2d2bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2d2bc4: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2D2BC4u;
    SET_GPR_U32(ctx, 31, 0x2D2BCCu);
    ctx->pc = 0x2D2BC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2BC4u;
            // 0x2d2bc8: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2BCCu; }
        if (ctx->pc != 0x2D2BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2BCCu; }
        if (ctx->pc != 0x2D2BCCu) { return; }
    }
    ctx->pc = 0x2D2BCCu;
label_2d2bcc:
    // 0x2d2bcc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D2BCCu;
    {
        const bool branch_taken_0x2d2bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2bcc) {
            ctx->pc = 0x2D2BE0u;
            goto label_2d2be0;
        }
    }
    ctx->pc = 0x2D2BD4u;
    // 0x2d2bd4: 0x8f829de8  lw          $v0, -0x6218($gp)
    ctx->pc = 0x2d2bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942184)));
    // 0x2d2bd8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d2bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d2bdc: 0xaf829de8  sw          $v0, -0x6218($gp)
    ctx->pc = 0x2d2bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942184), GPR_U32(ctx, 2));
label_2d2be0:
    // 0x2d2be0: 0x8f829de8  lw          $v0, -0x6218($gp)
    ctx->pc = 0x2d2be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942184)));
    // 0x2d2be4: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D2BE4u;
    {
        const bool branch_taken_0x2d2be4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2D2BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2BE4u;
            // 0x2d2be8: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2be4) {
            ctx->pc = 0x2D2BF0u;
            goto label_2d2bf0;
        }
    }
    ctx->pc = 0x2D2BECu;
    // 0x2d2bec: 0xaf829de8  sw          $v0, -0x6218($gp)
    ctx->pc = 0x2d2becu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942184), GPR_U32(ctx, 2));
label_2d2bf0:
    // 0x2d2bf0: 0x8f829de8  lw          $v0, -0x6218($gp)
    ctx->pc = 0x2d2bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942184)));
    // 0x2d2bf4: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x2d2bf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2d2bf8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D2BF8u;
    {
        const bool branch_taken_0x2d2bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D2BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2BF8u;
            // 0x2d2bfc: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2bf8) {
            ctx->pc = 0x2D2C04u;
            goto label_2d2c04;
        }
    }
    ctx->pc = 0x2D2C00u;
    // 0x2d2c00: 0xaf809de8  sw          $zero, -0x6218($gp)
    ctx->pc = 0x2d2c00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942184), GPR_U32(ctx, 0));
label_2d2c04:
    // 0x2d2c04: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x2d2c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2d2c08: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2D2C08u;
    SET_GPR_U32(ctx, 31, 0x2D2C10u);
    ctx->pc = 0x2D2C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2C08u;
            // 0x2d2c0c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2C10u; }
        if (ctx->pc != 0x2D2C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2C10u; }
        if (ctx->pc != 0x2D2C10u) { return; }
    }
    ctx->pc = 0x2D2C10u;
label_2d2c10:
    // 0x2d2c10: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D2C10u;
    {
        const bool branch_taken_0x2d2c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2c10) {
            ctx->pc = 0x2D2C40u;
            goto label_2d2c40;
        }
    }
    ctx->pc = 0x2D2C18u;
    // 0x2d2c18: 0x8f849de8  lw          $a0, -0x6218($gp)
    ctx->pc = 0x2d2c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942184)));
    // 0x2d2c1c: 0x3c0201f1  lui         $v0, 0x1F1
    ctx->pc = 0x2d2c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)497 << 16));
    // 0x2d2c20: 0x24425860  addiu       $v0, $v0, 0x5860
    ctx->pc = 0x2d2c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22624));
    // 0x2d2c24: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2d2c24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2d2c28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d2c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d2c2c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d2c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d2c30: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D2C30u;
    {
        const bool branch_taken_0x2d2c30 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2D2C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2C30u;
            // 0x2d2c34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2c30) {
            ctx->pc = 0x2D2C40u;
            goto label_2d2c40;
        }
    }
    ctx->pc = 0x2D2C38u;
    // 0x2d2c38: 0xaf849de4  sw          $a0, -0x621C($gp)
    ctx->pc = 0x2d2c38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942180), GPR_U32(ctx, 4));
    // 0x2d2c3c: 0xaf829de0  sw          $v0, -0x6220($gp)
    ctx->pc = 0x2d2c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942176), GPR_U32(ctx, 2));
label_2d2c40:
    // 0x2d2c40: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2d2c40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x2d2c44: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2d2c44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2d2c48: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2D2C48u;
    SET_GPR_U32(ctx, 31, 0x2D2C50u);
    ctx->pc = 0x2D2C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2C48u;
            // 0x2d2c4c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2C50u; }
        if (ctx->pc != 0x2D2C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2C50u; }
        if (ctx->pc != 0x2D2C50u) { return; }
    }
    ctx->pc = 0x2D2C50u;
label_2d2c50:
    // 0x2d2c50: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D2C50u;
    {
        const bool branch_taken_0x2d2c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2C50u;
            // 0x2d2c54: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2c50) {
            ctx->pc = 0x2D2C60u;
            goto label_2d2c60;
        }
    }
    ctx->pc = 0x2D2C58u;
    // 0x2d2c58: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2d2c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d2c5c: 0xaf829de0  sw          $v0, -0x6220($gp)
    ctx->pc = 0x2d2c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942176), GPR_U32(ctx, 2));
label_2d2c60:
    // 0x2d2c60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d2c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2c64: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2D2C64u;
    SET_GPR_U32(ctx, 31, 0x2D2C6Cu);
    ctx->pc = 0x2D2C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2C64u;
            // 0x2d2c68: 0x24a50540  addiu       $a1, $a1, 0x540 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1344));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2C6Cu; }
        if (ctx->pc != 0x2D2C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2C6Cu; }
        if (ctx->pc != 0x2D2C6Cu) { return; }
    }
    ctx->pc = 0x2D2C6Cu;
label_2d2c6c:
    // 0x2d2c6c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2d2c6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2d2c70: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2d2c70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2c74: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2d2c74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d2c78:
    // 0x2d2c78: 0x8f829de8  lw          $v0, -0x6218($gp)
    ctx->pc = 0x2d2c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942184)));
    // 0x2d2c7c: 0x16220006  bne         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D2C7Cu;
    {
        const bool branch_taken_0x2d2c7c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D2C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2C7Cu;
            // 0x2d2c80: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2c7c) {
            ctx->pc = 0x2D2C98u;
            goto label_2d2c98;
        }
    }
    ctx->pc = 0x2D2C84u;
    // 0x2d2c84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d2c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2c88: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2D2C88u;
    SET_GPR_U32(ctx, 31, 0x2D2C90u);
    ctx->pc = 0x2D2C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2C88u;
            // 0x2d2c8c: 0x24a50548  addiu       $a1, $a1, 0x548 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2C90u; }
        if (ctx->pc != 0x2D2C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2C90u; }
        if (ctx->pc != 0x2D2C90u) { return; }
    }
    ctx->pc = 0x2D2C90u;
label_2d2c90:
    // 0x2d2c90: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2D2C90u;
    {
        const bool branch_taken_0x2d2c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2C90u;
            // 0x2d2c94: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2c90) {
            ctx->pc = 0x2D2CACu;
            goto label_2d2cac;
        }
    }
    ctx->pc = 0x2D2C98u;
label_2d2c98:
    // 0x2d2c98: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2d2c98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2d2c9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d2c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2ca0: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2D2CA0u;
    SET_GPR_U32(ctx, 31, 0x2D2CA8u);
    ctx->pc = 0x2D2CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2CA0u;
            // 0x2d2ca4: 0x24a50550  addiu       $a1, $a1, 0x550 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2CA8u; }
        if (ctx->pc != 0x2D2CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2CA8u; }
        if (ctx->pc != 0x2D2CA8u) { return; }
    }
    ctx->pc = 0x2D2CA8u;
label_2d2ca8:
    // 0x2d2ca8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2d2ca8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2d2cac:
    // 0x2d2cac: 0x0  nop
    ctx->pc = 0x2d2cacu;
    // NOP
    // 0x2d2cb0: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2d2cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2d2cb4: 0x244263e0  addiu       $v0, $v0, 0x63E0
    ctx->pc = 0x2d2cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25568));
    // 0x2d2cb8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2d2cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2d2cbc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2d2cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2d2cc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d2cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2cc4: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2d2cc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d2cc8: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2D2CC8u;
    SET_GPR_U32(ctx, 31, 0x2D2CD0u);
    ctx->pc = 0x2D2CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2CC8u;
            // 0x2d2ccc: 0x24a50558  addiu       $a1, $a1, 0x558 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2CD0u; }
        if (ctx->pc != 0x2D2CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2CD0u; }
        if (ctx->pc != 0x2D2CD0u) { return; }
    }
    ctx->pc = 0x2D2CD0u;
label_2d2cd0:
    // 0x2d2cd0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2d2cd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2d2cd4: 0x8f829de8  lw          $v0, -0x6218($gp)
    ctx->pc = 0x2d2cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942184)));
    // 0x2d2cd8: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D2CD8u;
    {
        const bool branch_taken_0x2d2cd8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D2CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2CD8u;
            // 0x2d2cdc: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2cd8) {
            ctx->pc = 0x2D2CF0u;
            goto label_2d2cf0;
        }
    }
    ctx->pc = 0x2D2CE0u;
    // 0x2d2ce0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d2ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2ce4: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2D2CE4u;
    SET_GPR_U32(ctx, 31, 0x2D2CECu);
    ctx->pc = 0x2D2CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2CE4u;
            // 0x2d2ce8: 0x24a50560  addiu       $a1, $a1, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2CECu; }
        if (ctx->pc != 0x2D2CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2CECu; }
        if (ctx->pc != 0x2D2CECu) { return; }
    }
    ctx->pc = 0x2D2CECu;
label_2d2cec:
    // 0x2d2cec: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2d2cecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2d2cf0:
    // 0x2d2cf0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2d2cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2d2cf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d2cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2cf8: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2D2CF8u;
    SET_GPR_U32(ctx, 31, 0x2D2D00u);
    ctx->pc = 0x2D2CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2CF8u;
            // 0x2d2cfc: 0x24a50568  addiu       $a1, $a1, 0x568 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2D00u; }
        if (ctx->pc != 0x2D2D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2D00u; }
        if (ctx->pc != 0x2D2D00u) { return; }
    }
    ctx->pc = 0x2D2D00u;
label_2d2d00:
    // 0x2d2d00: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2d2d00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2d2d04: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2d2d04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2d2d08: 0x2a220008  slti        $v0, $s1, 0x8
    ctx->pc = 0x2d2d08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2d2d0c: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x2D2D0Cu;
    {
        const bool branch_taken_0x2d2d0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D2D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2D0Cu;
            // 0x2d2d10: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2d0c) {
            ctx->pc = 0x2D2C78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d2c78;
        }
    }
    ctx->pc = 0x2D2D14u;
    // 0x2d2d14: 0xc064210  jal         func_190840
    ctx->pc = 0x2D2D14u;
    SET_GPR_U32(ctx, 31, 0x2D2D1Cu);
    ctx->pc = 0x190840u;
    if (runtime->hasFunction(0x190840u)) {
        auto targetFn = runtime->lookupFunction(0x190840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2D1Cu; }
        if (ctx->pc != 0x2D2D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDebugFont__Fv_0x190840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2D1Cu; }
        if (ctx->pc != 0x2D2D1Cu) { return; }
    }
    ctx->pc = 0x2D2D1Cu;
label_2d2d1c:
    // 0x2d2d1c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2d2d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2d2d20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d2d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2d24: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2d2d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2d2d28: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x2D2D28u;
    SET_GPR_U32(ctx, 31, 0x2D2D30u);
    ctx->pc = 0x2D2D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2D28u;
            // 0x2d2d2c: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2D30u; }
        if (ctx->pc != 0x2D2D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2D30u; }
        if (ctx->pc != 0x2D2D30u) { return; }
    }
    ctx->pc = 0x2D2D30u;
label_2d2d30:
    // 0x2d2d30: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d2d30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d2d34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d2d34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2d38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d2d38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d2d3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d2d3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d2d40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d2d40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d2d44: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2D44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2D44u;
            // 0x2d2d48: 0x27bd0840  addiu       $sp, $sp, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D2D4Cu;
}
