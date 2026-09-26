#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__4CMapFv
// Address: 0x285b40 - 0x285c30
void ps2___ct__4CMapFv_0x285b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__4CMapFv_0x285b40");
#endif

    switch (ctx->pc) {
        case 0x285b40u: goto label_285b40;
        case 0x285b44u: goto label_285b44;
        case 0x285b48u: goto label_285b48;
        case 0x285b4cu: goto label_285b4c;
        case 0x285b50u: goto label_285b50;
        case 0x285b54u: goto label_285b54;
        case 0x285b58u: goto label_285b58;
        case 0x285b5cu: goto label_285b5c;
        case 0x285b60u: goto label_285b60;
        case 0x285b64u: goto label_285b64;
        case 0x285b68u: goto label_285b68;
        case 0x285b6cu: goto label_285b6c;
        case 0x285b70u: goto label_285b70;
        case 0x285b74u: goto label_285b74;
        case 0x285b78u: goto label_285b78;
        case 0x285b7cu: goto label_285b7c;
        case 0x285b80u: goto label_285b80;
        case 0x285b84u: goto label_285b84;
        case 0x285b88u: goto label_285b88;
        case 0x285b8cu: goto label_285b8c;
        case 0x285b90u: goto label_285b90;
        case 0x285b94u: goto label_285b94;
        case 0x285b98u: goto label_285b98;
        case 0x285b9cu: goto label_285b9c;
        case 0x285ba0u: goto label_285ba0;
        case 0x285ba4u: goto label_285ba4;
        case 0x285ba8u: goto label_285ba8;
        case 0x285bacu: goto label_285bac;
        case 0x285bb0u: goto label_285bb0;
        case 0x285bb4u: goto label_285bb4;
        case 0x285bb8u: goto label_285bb8;
        case 0x285bbcu: goto label_285bbc;
        case 0x285bc0u: goto label_285bc0;
        case 0x285bc4u: goto label_285bc4;
        case 0x285bc8u: goto label_285bc8;
        case 0x285bccu: goto label_285bcc;
        case 0x285bd0u: goto label_285bd0;
        case 0x285bd4u: goto label_285bd4;
        case 0x285bd8u: goto label_285bd8;
        case 0x285bdcu: goto label_285bdc;
        case 0x285be0u: goto label_285be0;
        case 0x285be4u: goto label_285be4;
        case 0x285be8u: goto label_285be8;
        case 0x285becu: goto label_285bec;
        case 0x285bf0u: goto label_285bf0;
        case 0x285bf4u: goto label_285bf4;
        case 0x285bf8u: goto label_285bf8;
        case 0x285bfcu: goto label_285bfc;
        case 0x285c00u: goto label_285c00;
        case 0x285c04u: goto label_285c04;
        case 0x285c08u: goto label_285c08;
        case 0x285c0cu: goto label_285c0c;
        case 0x285c10u: goto label_285c10;
        case 0x285c14u: goto label_285c14;
        case 0x285c18u: goto label_285c18;
        case 0x285c1cu: goto label_285c1c;
        case 0x285c20u: goto label_285c20;
        case 0x285c24u: goto label_285c24;
        case 0x285c28u: goto label_285c28;
        case 0x285c2cu: goto label_285c2c;
        default: break;
    }

    ctx->pc = 0x285b40u;

label_285b40:
    // 0x285b40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x285b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_285b44:
    // 0x285b44: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x285b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_285b48:
    // 0x285b48: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x285b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_285b4c:
    // 0x285b4c: 0x244252a0  addiu       $v0, $v0, 0x52A0
    ctx->pc = 0x285b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21152));
label_285b50:
    // 0x285b50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x285b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_285b54:
    // 0x285b54: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x285b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_285b58:
    // 0x285b58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x285b58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_285b5c:
    // 0x285b5c: 0xc0593d4  jal         func_164F50
label_285b60:
    if (ctx->pc == 0x285B60u) {
        ctx->pc = 0x285B60u;
            // 0x285b60: 0xac820d00  sw          $v0, 0xD00($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3328), GPR_U32(ctx, 2));
        ctx->pc = 0x285B64u;
        goto label_285b64;
    }
    ctx->pc = 0x285B5Cu;
    SET_GPR_U32(ctx, 31, 0x285B64u);
    ctx->pc = 0x285B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285B5Cu;
            // 0x285b60: 0xac820d00  sw          $v0, 0xD00($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164F50u;
    if (runtime->hasFunction(0x164F50u)) {
        auto targetFn = runtime->lookupFunction(0x164F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285B64u; }
        if (ctx->pc != 0x285B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__8CMapInfoFv_0x164f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285B64u; }
        if (ctx->pc != 0x285B64u) { return; }
    }
    ctx->pc = 0x285B64u;
label_285b64:
    // 0x285b64: 0x2611010c  addiu       $s1, $s0, 0x10C
    ctx->pc = 0x285b64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 268));
label_285b68:
    // 0x285b68: 0xc057148  jal         func_15C520
label_285b6c:
    if (ctx->pc == 0x285B6Cu) {
        ctx->pc = 0x285B6Cu;
            // 0x285b6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285B70u;
        goto label_285b70;
    }
    ctx->pc = 0x285B68u;
    SET_GPR_U32(ctx, 31, 0x285B70u);
    ctx->pc = 0x285B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285B68u;
            // 0x285b6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C520u;
    if (runtime->hasFunction(0x15C520u)) {
        auto targetFn = runtime->lookupFunction(0x15C520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285B70u; }
        if (ctx->pc != 0x285B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11CPartsGroupFv_0x15c520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285B70u; }
        if (ctx->pc != 0x285B70u) { return; }
    }
    ctx->pc = 0x285B70u;
label_285b70:
    // 0x285b70: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x285b70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_285b74:
    // 0x285b74: 0x2602030c  addiu       $v0, $s0, 0x30C
    ctx->pc = 0x285b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 780));
label_285b78:
    // 0x285b78: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x285b78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_285b7c:
    // 0x285b7c: 0x0  nop
    ctx->pc = 0x285b7cu;
    // NOP
label_285b80:
    // 0x285b80: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_285b84:
    if (ctx->pc == 0x285B84u) {
        ctx->pc = 0x285B88u;
        goto label_285b88;
    }
    ctx->pc = 0x285B80u;
    {
        const bool branch_taken_0x285b80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x285b80) {
            ctx->pc = 0x285B68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_285b68;
        }
    }
    ctx->pc = 0x285B88u;
label_285b88:
    // 0x285b88: 0xae000314  sw          $zero, 0x314($s0)
    ctx->pc = 0x285b88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 788), GPR_U32(ctx, 0));
label_285b8c:
    // 0x285b8c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x285b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_285b90:
    // 0x285b90: 0xae000310  sw          $zero, 0x310($s0)
    ctx->pc = 0x285b90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 784), GPR_U32(ctx, 0));
label_285b94:
    // 0x285b94: 0x26040370  addiu       $a0, $s0, 0x370
    ctx->pc = 0x285b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 880));
label_285b98:
    // 0x285b98: 0xae020318  sw          $v0, 0x318($s0)
    ctx->pc = 0x285b98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 792), GPR_U32(ctx, 2));
label_285b9c:
    // 0x285b9c: 0xae00031c  sw          $zero, 0x31C($s0)
    ctx->pc = 0x285b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 796), GPR_U32(ctx, 0));
label_285ba0:
    // 0x285ba0: 0xae000320  sw          $zero, 0x320($s0)
    ctx->pc = 0x285ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 800), GPR_U32(ctx, 0));
label_285ba4:
    // 0x285ba4: 0xae000324  sw          $zero, 0x324($s0)
    ctx->pc = 0x285ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 804), GPR_U32(ctx, 0));
label_285ba8:
    // 0x285ba8: 0x26030670  addiu       $v1, $s0, 0x670
    ctx->pc = 0x285ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1648));
label_285bac:
    // 0x285bac: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x285bacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
label_285bb0:
    // 0x285bb0: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x285bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
label_285bb4:
    // 0x285bb4: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x285bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
label_285bb8:
    // 0x285bb8: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x285bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_285bbc:
    // 0x285bbc: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x285bbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_285bc0:
    // 0x285bc0: 0x0  nop
    ctx->pc = 0x285bc0u;
    // NOP
label_285bc4:
    // 0x285bc4: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_285bc8:
    if (ctx->pc == 0x285BC8u) {
        ctx->pc = 0x285BCCu;
        goto label_285bcc;
    }
    ctx->pc = 0x285BC4u;
    {
        const bool branch_taken_0x285bc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x285bc4) {
            ctx->pc = 0x285BACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_285bac;
        }
    }
    ctx->pc = 0x285BCCu;
label_285bcc:
    // 0x285bcc: 0x26110680  addiu       $s1, $s0, 0x680
    ctx->pc = 0x285bccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1664));
label_285bd0:
    // 0x285bd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x285bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_285bd4:
    // 0x285bd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x285bd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_285bd8:
    // 0x285bd8: 0xc049c86  jal         func_127218
label_285bdc:
    if (ctx->pc == 0x285BDCu) {
        ctx->pc = 0x285BDCu;
            // 0x285bdc: 0x240600c0  addiu       $a2, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->pc = 0x285BE0u;
        goto label_285be0;
    }
    ctx->pc = 0x285BD8u;
    SET_GPR_U32(ctx, 31, 0x285BE0u);
    ctx->pc = 0x285BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285BD8u;
            // 0x285bdc: 0x240600c0  addiu       $a2, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285BE0u; }
        if (ctx->pc != 0x285BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285BE0u; }
        if (ctx->pc != 0x285BE0u) { return; }
    }
    ctx->pc = 0x285BE0u;
label_285be0:
    // 0x285be0: 0x263100c0  addiu       $s1, $s1, 0xC0
    ctx->pc = 0x285be0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
label_285be4:
    // 0x285be4: 0x26020c80  addiu       $v0, $s0, 0xC80
    ctx->pc = 0x285be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3200));
label_285be8:
    // 0x285be8: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x285be8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_285bec:
    // 0x285bec: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_285bf0:
    if (ctx->pc == 0x285BF0u) {
        ctx->pc = 0x285BF0u;
            // 0x285bf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285BF4u;
        goto label_285bf4;
    }
    ctx->pc = 0x285BECu;
    {
        const bool branch_taken_0x285bec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x285BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285BECu;
            // 0x285bf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285bec) {
            ctx->pc = 0x285BD4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_285bd4;
        }
    }
    ctx->pc = 0x285BF4u;
label_285bf4:
    // 0x285bf4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x285bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_285bf8:
    // 0x285bf8: 0x26040cb0  addiu       $a0, $s0, 0xCB0
    ctx->pc = 0x285bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3248));
label_285bfc:
    // 0x285bfc: 0x24426210  addiu       $v0, $v0, 0x6210
    ctx->pc = 0x285bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25104));
label_285c00:
    // 0x285c00: 0xc0a78d4  jal         func_29E350
label_285c04:
    if (ctx->pc == 0x285C04u) {
        ctx->pc = 0x285C04u;
            // 0x285c04: 0xae020ce0  sw          $v0, 0xCE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3296), GPR_U32(ctx, 2));
        ctx->pc = 0x285C08u;
        goto label_285c08;
    }
    ctx->pc = 0x285C00u;
    SET_GPR_U32(ctx, 31, 0x285C08u);
    ctx->pc = 0x285C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285C00u;
            // 0x285c04: 0xae020ce0  sw          $v0, 0xCE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3296), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E350u;
    if (runtime->hasFunction(0x29E350u)) {
        auto targetFn = runtime->lookupFunction(0x29E350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285C08u; }
        if (ctx->pc != 0x285C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__14CFuncPointMngrFv_0x29e350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285C08u; }
        if (ctx->pc != 0x285C08u) { return; }
    }
    ctx->pc = 0x285C08u;
label_285c08:
    // 0x285c08: 0x8e190d00  lw          $t9, 0xD00($s0)
    ctx->pc = 0x285c08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3328)));
label_285c0c:
    // 0x285c0c: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x285c0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_285c10:
    // 0x285c10: 0x320f809  jalr        $t9
label_285c14:
    if (ctx->pc == 0x285C14u) {
        ctx->pc = 0x285C14u;
            // 0x285c14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285C18u;
        goto label_285c18;
    }
    ctx->pc = 0x285C10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x285C18u);
        ctx->pc = 0x285C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285C10u;
            // 0x285c14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x285C18u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x285C18u; }
            if (ctx->pc != 0x285C18u) { return; }
        }
        }
    }
    ctx->pc = 0x285C18u;
label_285c18:
    // 0x285c18: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x285c18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_285c1c:
    // 0x285c1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x285c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_285c20:
    // 0x285c20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x285c20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_285c24:
    // 0x285c24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x285c24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_285c28:
    // 0x285c28: 0x3e00008  jr          $ra
label_285c2c:
    if (ctx->pc == 0x285C2Cu) {
        ctx->pc = 0x285C2Cu;
            // 0x285c2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x285C30u;
        goto label_fallthrough_0x285c28;
    }
    ctx->pc = 0x285C28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285C28u;
            // 0x285c2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x285c28:
    ctx->pc = 0x285C30u;
}
