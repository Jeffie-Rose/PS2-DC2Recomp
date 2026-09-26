#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreateDrawRect__4CMapFP9mgCMemoryP9mgVu0FBOXP9mgVu0FBOXi
// Address: 0x15ce00 - 0x15cfb8
void CreateDrawRect__4CMapFP9mgCMemoryP9mgVu0FBOXP9mgVu0FBOXi_0x15ce00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreateDrawRect__4CMapFP9mgCMemoryP9mgVu0FBOXP9mgVu0FBOXi_0x15ce00");
#endif

    switch (ctx->pc) {
        case 0x15ce00u: goto label_15ce00;
        case 0x15ce04u: goto label_15ce04;
        case 0x15ce08u: goto label_15ce08;
        case 0x15ce0cu: goto label_15ce0c;
        case 0x15ce10u: goto label_15ce10;
        case 0x15ce14u: goto label_15ce14;
        case 0x15ce18u: goto label_15ce18;
        case 0x15ce1cu: goto label_15ce1c;
        case 0x15ce20u: goto label_15ce20;
        case 0x15ce24u: goto label_15ce24;
        case 0x15ce28u: goto label_15ce28;
        case 0x15ce2cu: goto label_15ce2c;
        case 0x15ce30u: goto label_15ce30;
        case 0x15ce34u: goto label_15ce34;
        case 0x15ce38u: goto label_15ce38;
        case 0x15ce3cu: goto label_15ce3c;
        case 0x15ce40u: goto label_15ce40;
        case 0x15ce44u: goto label_15ce44;
        case 0x15ce48u: goto label_15ce48;
        case 0x15ce4cu: goto label_15ce4c;
        case 0x15ce50u: goto label_15ce50;
        case 0x15ce54u: goto label_15ce54;
        case 0x15ce58u: goto label_15ce58;
        case 0x15ce5cu: goto label_15ce5c;
        case 0x15ce60u: goto label_15ce60;
        case 0x15ce64u: goto label_15ce64;
        case 0x15ce68u: goto label_15ce68;
        case 0x15ce6cu: goto label_15ce6c;
        case 0x15ce70u: goto label_15ce70;
        case 0x15ce74u: goto label_15ce74;
        case 0x15ce78u: goto label_15ce78;
        case 0x15ce7cu: goto label_15ce7c;
        case 0x15ce80u: goto label_15ce80;
        case 0x15ce84u: goto label_15ce84;
        case 0x15ce88u: goto label_15ce88;
        case 0x15ce8cu: goto label_15ce8c;
        case 0x15ce90u: goto label_15ce90;
        case 0x15ce94u: goto label_15ce94;
        case 0x15ce98u: goto label_15ce98;
        case 0x15ce9cu: goto label_15ce9c;
        case 0x15cea0u: goto label_15cea0;
        case 0x15cea4u: goto label_15cea4;
        case 0x15cea8u: goto label_15cea8;
        case 0x15ceacu: goto label_15ceac;
        case 0x15ceb0u: goto label_15ceb0;
        case 0x15ceb4u: goto label_15ceb4;
        case 0x15ceb8u: goto label_15ceb8;
        case 0x15cebcu: goto label_15cebc;
        case 0x15cec0u: goto label_15cec0;
        case 0x15cec4u: goto label_15cec4;
        case 0x15cec8u: goto label_15cec8;
        case 0x15ceccu: goto label_15cecc;
        case 0x15ced0u: goto label_15ced0;
        case 0x15ced4u: goto label_15ced4;
        case 0x15ced8u: goto label_15ced8;
        case 0x15cedcu: goto label_15cedc;
        case 0x15cee0u: goto label_15cee0;
        case 0x15cee4u: goto label_15cee4;
        case 0x15cee8u: goto label_15cee8;
        case 0x15ceecu: goto label_15ceec;
        case 0x15cef0u: goto label_15cef0;
        case 0x15cef4u: goto label_15cef4;
        case 0x15cef8u: goto label_15cef8;
        case 0x15cefcu: goto label_15cefc;
        case 0x15cf00u: goto label_15cf00;
        case 0x15cf04u: goto label_15cf04;
        case 0x15cf08u: goto label_15cf08;
        case 0x15cf0cu: goto label_15cf0c;
        case 0x15cf10u: goto label_15cf10;
        case 0x15cf14u: goto label_15cf14;
        case 0x15cf18u: goto label_15cf18;
        case 0x15cf1cu: goto label_15cf1c;
        case 0x15cf20u: goto label_15cf20;
        case 0x15cf24u: goto label_15cf24;
        case 0x15cf28u: goto label_15cf28;
        case 0x15cf2cu: goto label_15cf2c;
        case 0x15cf30u: goto label_15cf30;
        case 0x15cf34u: goto label_15cf34;
        case 0x15cf38u: goto label_15cf38;
        case 0x15cf3cu: goto label_15cf3c;
        case 0x15cf40u: goto label_15cf40;
        case 0x15cf44u: goto label_15cf44;
        case 0x15cf48u: goto label_15cf48;
        case 0x15cf4cu: goto label_15cf4c;
        case 0x15cf50u: goto label_15cf50;
        case 0x15cf54u: goto label_15cf54;
        case 0x15cf58u: goto label_15cf58;
        case 0x15cf5cu: goto label_15cf5c;
        case 0x15cf60u: goto label_15cf60;
        case 0x15cf64u: goto label_15cf64;
        case 0x15cf68u: goto label_15cf68;
        case 0x15cf6cu: goto label_15cf6c;
        case 0x15cf70u: goto label_15cf70;
        case 0x15cf74u: goto label_15cf74;
        case 0x15cf78u: goto label_15cf78;
        case 0x15cf7cu: goto label_15cf7c;
        case 0x15cf80u: goto label_15cf80;
        case 0x15cf84u: goto label_15cf84;
        case 0x15cf88u: goto label_15cf88;
        case 0x15cf8cu: goto label_15cf8c;
        case 0x15cf90u: goto label_15cf90;
        case 0x15cf94u: goto label_15cf94;
        case 0x15cf98u: goto label_15cf98;
        case 0x15cf9cu: goto label_15cf9c;
        case 0x15cfa0u: goto label_15cfa0;
        case 0x15cfa4u: goto label_15cfa4;
        case 0x15cfa8u: goto label_15cfa8;
        case 0x15cfacu: goto label_15cfac;
        case 0x15cfb0u: goto label_15cfb0;
        case 0x15cfb4u: goto label_15cfb4;
        default: break;
    }

    ctx->pc = 0x15ce00u;

label_15ce00:
    // 0x15ce00: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x15ce00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_15ce04:
    // 0x15ce04: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x15ce04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_15ce08:
    // 0x15ce08: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x15ce08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_15ce0c:
    // 0x15ce0c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15ce0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_15ce10:
    // 0x15ce10: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x15ce10u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_15ce14:
    // 0x15ce14: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15ce14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_15ce18:
    // 0x15ce18: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x15ce18u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15ce1c:
    // 0x15ce1c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15ce1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_15ce20:
    // 0x15ce20: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x15ce20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_15ce24:
    // 0x15ce24: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15ce24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_15ce28:
    // 0x15ce28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15ce28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15ce2c:
    // 0x15ce2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15ce2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15ce30:
    // 0x15ce30: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15ce30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15ce34:
    // 0x15ce34: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15ce34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_15ce38:
    // 0x15ce38: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x15ce38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_15ce3c:
    // 0x15ce3c: 0x8ea40368  lw          $a0, 0x368($s5)
    ctx->pc = 0x15ce3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 872)));
label_15ce40:
    // 0x15ce40: 0x1000000b  b           . + 4 + (0xB << 2)
label_15ce44:
    if (ctx->pc == 0x15CE44u) {
        ctx->pc = 0x15CE44u;
            // 0x15ce44: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15CE48u;
        goto label_15ce48;
    }
    ctx->pc = 0x15CE40u;
    {
        const bool branch_taken_0x15ce40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CE44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CE40u;
            // 0x15ce44: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ce40) {
            ctx->pc = 0x15CE70u;
            goto label_15ce70;
        }
    }
    ctx->pc = 0x15CE48u;
label_15ce48:
    // 0x15ce48: 0x8c630390  lw          $v1, 0x390($v1)
    ctx->pc = 0x15ce48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 912)));
label_15ce4c:
    // 0x15ce4c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_15ce50:
    if (ctx->pc == 0x15CE50u) {
        ctx->pc = 0x15CE50u;
            // 0x15ce50: 0x51840  sll         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x15CE54u;
        goto label_15ce54;
    }
    ctx->pc = 0x15CE4Cu;
    {
        const bool branch_taken_0x15ce4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CE50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CE4Cu;
            // 0x15ce50: 0x51840  sll         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ce4c) {
            ctx->pc = 0x15CE68u;
            goto label_15ce68;
        }
    }
    ctx->pc = 0x15CE54u;
label_15ce54:
    // 0x15ce54: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x15ce54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_15ce58:
    // 0x15ce58: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15ce58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15ce5c:
    // 0x15ce5c: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x15ce5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_15ce60:
    // 0x15ce60: 0x10000006  b           . + 4 + (0x6 << 2)
label_15ce64:
    if (ctx->pc == 0x15CE64u) {
        ctx->pc = 0x15CE64u;
            // 0x15ce64: 0x24700370  addiu       $s0, $v1, 0x370 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 880));
        ctx->pc = 0x15CE68u;
        goto label_15ce68;
    }
    ctx->pc = 0x15CE60u;
    {
        const bool branch_taken_0x15ce60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CE64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CE60u;
            // 0x15ce64: 0x24700370  addiu       $s0, $v1, 0x370 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ce60) {
            ctx->pc = 0x15CE7Cu;
            goto label_15ce7c;
        }
    }
    ctx->pc = 0x15CE68u;
label_15ce68:
    // 0x15ce68: 0x24e70030  addiu       $a3, $a3, 0x30
    ctx->pc = 0x15ce68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
label_15ce6c:
    // 0x15ce6c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15ce6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_15ce70:
    // 0x15ce70: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x15ce70u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_15ce74:
    // 0x15ce74: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_15ce78:
    if (ctx->pc == 0x15CE78u) {
        ctx->pc = 0x15CE78u;
            // 0x15ce78: 0x2a71821  addu        $v1, $s5, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
        ctx->pc = 0x15CE7Cu;
        goto label_15ce7c;
    }
    ctx->pc = 0x15CE74u;
    {
        const bool branch_taken_0x15ce74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CE78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CE74u;
            // 0x15ce78: 0x2a71821  addu        $v1, $s5, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ce74) {
            ctx->pc = 0x15CE48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15ce48;
        }
    }
    ctx->pc = 0x15CE7Cu;
label_15ce7c:
    // 0x15ce7c: 0x0  nop
    ctx->pc = 0x15ce7cu;
    // NOP
label_15ce80:
    // 0x15ce80: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x15ce80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_15ce84:
    // 0x15ce84: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x15ce84u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
label_15ce88:
    // 0x15ce88: 0xacc3001c  sw          $v1, 0x1C($a2)
    ctx->pc = 0x15ce88u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 3));
label_15ce8c:
    // 0x15ce8c: 0xae83000c  sw          $v1, 0xC($s4)
    ctx->pc = 0x15ce8cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 3));
label_15ce90:
    // 0x15ce90: 0x1200003f  beqz        $s0, . + 4 + (0x3F << 2)
label_15ce94:
    if (ctx->pc == 0x15CE94u) {
        ctx->pc = 0x15CE94u;
            // 0x15ce94: 0xae83001c  sw          $v1, 0x1C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 3));
        ctx->pc = 0x15CE98u;
        goto label_15ce98;
    }
    ctx->pc = 0x15CE90u;
    {
        const bool branch_taken_0x15ce90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CE94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CE90u;
            // 0x15ce94: 0xae83001c  sw          $v1, 0x1C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ce90) {
            ctx->pc = 0x15CF90u;
            goto label_15cf90;
        }
    }
    ctx->pc = 0x15CE98u;
label_15ce98:
    // 0x15ce98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15ce98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15ce9c:
    // 0x15ce9c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x15ce9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_15cea0:
    // 0x15cea0: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x15cea0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_15cea4:
    // 0x15cea4: 0xc04e624  jal         func_139890
label_15cea8:
    if (ctx->pc == 0x15CEA8u) {
        ctx->pc = 0x15CEA8u;
            // 0x15cea8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15CEACu;
        goto label_15ceac;
    }
    ctx->pc = 0x15CEA4u;
    SET_GPR_U32(ctx, 31, 0x15CEACu);
    ctx->pc = 0x15CEA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15CEA4u;
            // 0x15cea8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139890u;
    if (runtime->hasFunction(0x139890u)) {
        auto targetFn = runtime->lookupFunction(0x139890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CEACu; }
        if (ctx->pc != 0x15CEACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__9mgVu0FBOXFR9mgVu0FBOX_0x139890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CEACu; }
        if (ctx->pc != 0x15CEACu) { return; }
    }
    ctx->pc = 0x15CEACu;
label_15ceac:
    // 0x15ceac: 0xae110024  sw          $s1, 0x24($s0)
    ctx->pc = 0x15ceacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 17));
label_15ceb0:
    // 0x15ceb0: 0x8eb1032c  lw          $s1, 0x32C($s5)
    ctx->pc = 0x15ceb0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 812)));
label_15ceb4:
    // 0x15ceb4: 0x10000032  b           . + 4 + (0x32 << 2)
label_15ceb8:
    if (ctx->pc == 0x15CEB8u) {
        ctx->pc = 0x15CEB8u;
            // 0x15ceb8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15CEBCu;
        goto label_15cebc;
    }
    ctx->pc = 0x15CEB4u;
    {
        const bool branch_taken_0x15ceb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CEB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CEB4u;
            // 0x15ceb8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ceb4) {
            ctx->pc = 0x15CF80u;
            goto label_15cf80;
        }
    }
    ctx->pc = 0x15CEBCu;
label_15cebc:
    // 0x15cebc: 0x82230070  lb          $v1, 0x70($s1)
    ctx->pc = 0x15cebcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 112)));
label_15cec0:
    // 0x15cec0: 0x601826  xor         $v1, $v1, $zero
    ctx->pc = 0x15cec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
label_15cec4:
    // 0x15cec4: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x15cec4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_15cec8:
    // 0x15cec8: 0x1460002a  bnez        $v1, . + 4 + (0x2A << 2)
label_15cecc:
    if (ctx->pc == 0x15CECCu) {
        ctx->pc = 0x15CECCu;
            // 0x15cecc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15CED0u;
        goto label_15ced0;
    }
    ctx->pc = 0x15CEC8u;
    {
        const bool branch_taken_0x15cec8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CEC8u;
            // 0x15cecc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cec8) {
            ctx->pc = 0x15CF74u;
            goto label_15cf74;
        }
    }
    ctx->pc = 0x15CED0u;
label_15ced0:
    // 0x15ced0: 0xc059c88  jal         func_167220
label_15ced4:
    if (ctx->pc == 0x15CED4u) {
        ctx->pc = 0x15CED4u;
            // 0x15ced4: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x15CED8u;
        goto label_15ced8;
    }
    ctx->pc = 0x15CED0u;
    SET_GPR_U32(ctx, 31, 0x15CED8u);
    ctx->pc = 0x15CED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15CED0u;
            // 0x15ced4: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167220u;
    if (runtime->hasFunction(0x167220u)) {
        auto targetFn = runtime->lookupFunction(0x167220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CED8u; }
        if (ctx->pc != 0x15CED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBoundBox__9CMapPartsFP9mgVu0FBOX_0x167220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CED8u; }
        if (ctx->pc != 0x15CED8u) { return; }
    }
    ctx->pc = 0x15CED8u;
label_15ced8:
    // 0x15ced8: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_15cedc:
    if (ctx->pc == 0x15CEDCu) {
        ctx->pc = 0x15CEDCu;
            // 0x15cedc: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x15CEE0u;
        goto label_15cee0;
    }
    ctx->pc = 0x15CED8u;
    {
        const bool branch_taken_0x15ced8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CEDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CED8u;
            // 0x15cedc: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ced8) {
            ctx->pc = 0x15CF74u;
            goto label_15cf74;
        }
    }
    ctx->pc = 0x15CEE0u;
label_15cee0:
    // 0x15cee0: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x15cee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_15cee4:
    // 0x15cee4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x15cee4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_15cee8:
    // 0x15cee8: 0xc04bccc  jal         func_12F330
label_15ceec:
    if (ctx->pc == 0x15CEECu) {
        ctx->pc = 0x15CEECu;
            // 0x15ceec: 0x26870010  addiu       $a3, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->pc = 0x15CEF0u;
        goto label_15cef0;
    }
    ctx->pc = 0x15CEE8u;
    SET_GPR_U32(ctx, 31, 0x15CEF0u);
    ctx->pc = 0x15CEECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15CEE8u;
            // 0x15ceec: 0x26870010  addiu       $a3, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F330u;
    if (runtime->hasFunction(0x12F330u)) {
        auto targetFn = runtime->lookupFunction(0x12F330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CEF0u; }
        if (ctx->pc != 0x15CEF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgClipInBox__FPfPfPfPf_0x12f330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CEF0u; }
        if (ctx->pc != 0x15CEF0u) { return; }
    }
    ctx->pc = 0x15CEF0u;
label_15cef0:
    // 0x15cef0: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_15cef4:
    if (ctx->pc == 0x15CEF4u) {
        ctx->pc = 0x15CEF4u;
            // 0x15cef4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15CEF8u;
        goto label_15cef8;
    }
    ctx->pc = 0x15CEF0u;
    {
        const bool branch_taken_0x15cef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CEF0u;
            // 0x15cef4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cef0) {
            ctx->pc = 0x15CF74u;
            goto label_15cf74;
        }
    }
    ctx->pc = 0x15CEF8u;
label_15cef8:
    // 0x15cef8: 0xc04e748  jal         func_139D20
label_15cefc:
    if (ctx->pc == 0x15CEFCu) {
        ctx->pc = 0x15CEFCu;
            // 0x15cefc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x15CF00u;
        goto label_15cf00;
    }
    ctx->pc = 0x15CEF8u;
    SET_GPR_U32(ctx, 31, 0x15CF00u);
    ctx->pc = 0x15CEFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15CEF8u;
            // 0x15cefc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CF00u; }
        if (ctx->pc != 0x15CF00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CF00u; }
        if (ctx->pc != 0x15CF00u) { return; }
    }
    ctx->pc = 0x15CF00u;
label_15cf00:
    // 0x15cf00: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x15cf00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_15cf04:
    // 0x15cf04: 0xc04e638  jal         func_1398E0
label_15cf08:
    if (ctx->pc == 0x15CF08u) {
        ctx->pc = 0x15CF08u;
            // 0x15cf08: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15CF0Cu;
        goto label_15cf0c;
    }
    ctx->pc = 0x15CF04u;
    SET_GPR_U32(ctx, 31, 0x15CF0Cu);
    ctx->pc = 0x15CF08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15CF04u;
            // 0x15cf08: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CF0Cu; }
        if (ctx->pc != 0x15CF0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CF0Cu; }
        if (ctx->pc != 0x15CF0Cu) { return; }
    }
    ctx->pc = 0x15CF0Cu;
label_15cf0c:
    // 0x15cf0c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_15cf10:
    if (ctx->pc == 0x15CF10u) {
        ctx->pc = 0x15CF10u;
            // 0x15cf10: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15CF14u;
        goto label_15cf14;
    }
    ctx->pc = 0x15CF0Cu;
    {
        const bool branch_taken_0x15cf0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CF10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CF0Cu;
            // 0x15cf10: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cf0c) {
            ctx->pc = 0x15CF30u;
            goto label_15cf30;
        }
    }
    ctx->pc = 0x15CF14u;
label_15cf14:
    // 0x15cf14: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x15cf14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_15cf18:
    // 0x15cf18: 0x244252f8  addiu       $v0, $v0, 0x52F8
    ctx->pc = 0x15cf18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21240));
label_15cf1c:
    // 0x15cf1c: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x15cf1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
label_15cf20:
    // 0x15cf20: 0x8e79000c  lw          $t9, 0xC($s3)
    ctx->pc = 0x15cf20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_15cf24:
    // 0x15cf24: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x15cf24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_15cf28:
    // 0x15cf28: 0x320f809  jalr        $t9
label_15cf2c:
    if (ctx->pc == 0x15CF2Cu) {
        ctx->pc = 0x15CF2Cu;
            // 0x15cf2c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15CF30u;
        goto label_15cf30;
    }
    ctx->pc = 0x15CF28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15CF30u);
        ctx->pc = 0x15CF2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CF28u;
            // 0x15cf2c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15CF30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15CF30u; }
            if (ctx->pc != 0x15CF30u) { return; }
        }
        }
    }
    ctx->pc = 0x15CF30u;
label_15cf30:
    // 0x15cf30: 0xae710008  sw          $s1, 0x8($s3)
    ctx->pc = 0x15cf30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
label_15cf34:
    // 0x15cf34: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x15cf34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_15cf38:
    // 0x15cf38: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_15cf3c:
    if (ctx->pc == 0x15CF3Cu) {
        ctx->pc = 0x15CF40u;
        goto label_15cf40;
    }
    ctx->pc = 0x15CF38u;
    {
        const bool branch_taken_0x15cf38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15cf38) {
            ctx->pc = 0x15CF48u;
            goto label_15cf48;
        }
    }
    ctx->pc = 0x15CF40u;
label_15cf40:
    // 0x15cf40: 0x1000000c  b           . + 4 + (0xC << 2)
label_15cf44:
    if (ctx->pc == 0x15CF44u) {
        ctx->pc = 0x15CF44u;
            // 0x15cf44: 0xae130028  sw          $s3, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 19));
        ctx->pc = 0x15CF48u;
        goto label_15cf48;
    }
    ctx->pc = 0x15CF40u;
    {
        const bool branch_taken_0x15cf40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CF44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CF40u;
            // 0x15cf44: 0xae130028  sw          $s3, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cf40) {
            ctx->pc = 0x15CF74u;
            goto label_15cf74;
        }
    }
    ctx->pc = 0x15CF48u;
label_15cf48:
    // 0x15cf48: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_15cf4c:
    if (ctx->pc == 0x15CF4Cu) {
        ctx->pc = 0x15CF50u;
        goto label_15cf50;
    }
    ctx->pc = 0x15CF48u;
    {
        const bool branch_taken_0x15cf48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15cf48) {
            ctx->pc = 0x15CF64u;
            goto label_15cf64;
        }
    }
    ctx->pc = 0x15CF50u;
label_15cf50:
    // 0x15cf50: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x15cf50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_15cf54:
    // 0x15cf54: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_15cf58:
    if (ctx->pc == 0x15CF58u) {
        ctx->pc = 0x15CF5Cu;
        goto label_15cf5c;
    }
    ctx->pc = 0x15CF54u;
    {
        const bool branch_taken_0x15cf54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15cf54) {
            ctx->pc = 0x15CF64u;
            goto label_15cf64;
        }
    }
    ctx->pc = 0x15CF5Cu;
label_15cf5c:
    // 0x15cf5c: 0x1480fffc  bnez        $a0, . + 4 + (-0x4 << 2)
label_15cf60:
    if (ctx->pc == 0x15CF60u) {
        ctx->pc = 0x15CF60u;
            // 0x15cf60: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15CF64u;
        goto label_15cf64;
    }
    ctx->pc = 0x15CF5Cu;
    {
        const bool branch_taken_0x15cf5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CF60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CF5Cu;
            // 0x15cf60: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cf5c) {
            ctx->pc = 0x15CF50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15cf50;
        }
    }
    ctx->pc = 0x15CF64u;
label_15cf64:
    // 0x15cf64: 0x0  nop
    ctx->pc = 0x15cf64u;
    // NOP
label_15cf68:
    // 0x15cf68: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
label_15cf6c:
    if (ctx->pc == 0x15CF6Cu) {
        ctx->pc = 0x15CF6Cu;
            // 0x15cf6c: 0xac730000  sw          $s3, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
        ctx->pc = 0x15CF70u;
        goto label_15cf70;
    }
    ctx->pc = 0x15CF68u;
    {
        const bool branch_taken_0x15cf68 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CF6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CF68u;
            // 0x15cf6c: 0xac730000  sw          $s3, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cf68) {
            ctx->pc = 0x15CF74u;
            goto label_15cf74;
        }
    }
    ctx->pc = 0x15CF70u;
label_15cf70:
    // 0x15cf70: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x15cf70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
label_15cf74:
    // 0x15cf74: 0x0  nop
    ctx->pc = 0x15cf74u;
    // NOP
label_15cf78:
    // 0x15cf78: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x15cf78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_15cf7c:
    // 0x15cf7c: 0x26310310  addiu       $s1, $s1, 0x310
    ctx->pc = 0x15cf7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
label_15cf80:
    // 0x15cf80: 0x8ea30328  lw          $v1, 0x328($s5)
    ctx->pc = 0x15cf80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 808)));
label_15cf84:
    // 0x15cf84: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x15cf84u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_15cf88:
    // 0x15cf88: 0x1460ffcc  bnez        $v1, . + 4 + (-0x34 << 2)
label_15cf8c:
    if (ctx->pc == 0x15CF8Cu) {
        ctx->pc = 0x15CF90u;
        goto label_15cf90;
    }
    ctx->pc = 0x15CF88u;
    {
        const bool branch_taken_0x15cf88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15cf88) {
            ctx->pc = 0x15CEBCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15cebc;
        }
    }
    ctx->pc = 0x15CF90u;
label_15cf90:
    // 0x15cf90: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x15cf90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_15cf94:
    // 0x15cf94: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x15cf94u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_15cf98:
    // 0x15cf98: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15cf98u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_15cf9c:
    // 0x15cf9c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15cf9cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_15cfa0:
    // 0x15cfa0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15cfa0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15cfa4:
    // 0x15cfa4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15cfa4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15cfa8:
    // 0x15cfa8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15cfa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15cfac:
    // 0x15cfac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15cfacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15cfb0:
    // 0x15cfb0: 0x3e00008  jr          $ra
label_15cfb4:
    if (ctx->pc == 0x15CFB4u) {
        ctx->pc = 0x15CFB4u;
            // 0x15cfb4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x15CFB8u;
        goto label_fallthrough_0x15cfb0;
    }
    ctx->pc = 0x15CFB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15CFB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CFB0u;
            // 0x15cfb4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x15cfb0:
    ctx->pc = 0x15CFB8u;
}
