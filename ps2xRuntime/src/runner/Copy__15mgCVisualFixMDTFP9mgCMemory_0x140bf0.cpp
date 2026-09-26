#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Copy__15mgCVisualFixMDTFP9mgCMemory
// Address: 0x140bf0 - 0x140d80
void Copy__15mgCVisualFixMDTFP9mgCMemory_0x140bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Copy__15mgCVisualFixMDTFP9mgCMemory_0x140bf0");
#endif

    switch (ctx->pc) {
        case 0x140bf0u: goto label_140bf0;
        case 0x140bf4u: goto label_140bf4;
        case 0x140bf8u: goto label_140bf8;
        case 0x140bfcu: goto label_140bfc;
        case 0x140c00u: goto label_140c00;
        case 0x140c04u: goto label_140c04;
        case 0x140c08u: goto label_140c08;
        case 0x140c0cu: goto label_140c0c;
        case 0x140c10u: goto label_140c10;
        case 0x140c14u: goto label_140c14;
        case 0x140c18u: goto label_140c18;
        case 0x140c1cu: goto label_140c1c;
        case 0x140c20u: goto label_140c20;
        case 0x140c24u: goto label_140c24;
        case 0x140c28u: goto label_140c28;
        case 0x140c2cu: goto label_140c2c;
        case 0x140c30u: goto label_140c30;
        case 0x140c34u: goto label_140c34;
        case 0x140c38u: goto label_140c38;
        case 0x140c3cu: goto label_140c3c;
        case 0x140c40u: goto label_140c40;
        case 0x140c44u: goto label_140c44;
        case 0x140c48u: goto label_140c48;
        case 0x140c4cu: goto label_140c4c;
        case 0x140c50u: goto label_140c50;
        case 0x140c54u: goto label_140c54;
        case 0x140c58u: goto label_140c58;
        case 0x140c5cu: goto label_140c5c;
        case 0x140c60u: goto label_140c60;
        case 0x140c64u: goto label_140c64;
        case 0x140c68u: goto label_140c68;
        case 0x140c6cu: goto label_140c6c;
        case 0x140c70u: goto label_140c70;
        case 0x140c74u: goto label_140c74;
        case 0x140c78u: goto label_140c78;
        case 0x140c7cu: goto label_140c7c;
        case 0x140c80u: goto label_140c80;
        case 0x140c84u: goto label_140c84;
        case 0x140c88u: goto label_140c88;
        case 0x140c8cu: goto label_140c8c;
        case 0x140c90u: goto label_140c90;
        case 0x140c94u: goto label_140c94;
        case 0x140c98u: goto label_140c98;
        case 0x140c9cu: goto label_140c9c;
        case 0x140ca0u: goto label_140ca0;
        case 0x140ca4u: goto label_140ca4;
        case 0x140ca8u: goto label_140ca8;
        case 0x140cacu: goto label_140cac;
        case 0x140cb0u: goto label_140cb0;
        case 0x140cb4u: goto label_140cb4;
        case 0x140cb8u: goto label_140cb8;
        case 0x140cbcu: goto label_140cbc;
        case 0x140cc0u: goto label_140cc0;
        case 0x140cc4u: goto label_140cc4;
        case 0x140cc8u: goto label_140cc8;
        case 0x140cccu: goto label_140ccc;
        case 0x140cd0u: goto label_140cd0;
        case 0x140cd4u: goto label_140cd4;
        case 0x140cd8u: goto label_140cd8;
        case 0x140cdcu: goto label_140cdc;
        case 0x140ce0u: goto label_140ce0;
        case 0x140ce4u: goto label_140ce4;
        case 0x140ce8u: goto label_140ce8;
        case 0x140cecu: goto label_140cec;
        case 0x140cf0u: goto label_140cf0;
        case 0x140cf4u: goto label_140cf4;
        case 0x140cf8u: goto label_140cf8;
        case 0x140cfcu: goto label_140cfc;
        case 0x140d00u: goto label_140d00;
        case 0x140d04u: goto label_140d04;
        case 0x140d08u: goto label_140d08;
        case 0x140d0cu: goto label_140d0c;
        case 0x140d10u: goto label_140d10;
        case 0x140d14u: goto label_140d14;
        case 0x140d18u: goto label_140d18;
        case 0x140d1cu: goto label_140d1c;
        case 0x140d20u: goto label_140d20;
        case 0x140d24u: goto label_140d24;
        case 0x140d28u: goto label_140d28;
        case 0x140d2cu: goto label_140d2c;
        case 0x140d30u: goto label_140d30;
        case 0x140d34u: goto label_140d34;
        case 0x140d38u: goto label_140d38;
        case 0x140d3cu: goto label_140d3c;
        case 0x140d40u: goto label_140d40;
        case 0x140d44u: goto label_140d44;
        case 0x140d48u: goto label_140d48;
        case 0x140d4cu: goto label_140d4c;
        case 0x140d50u: goto label_140d50;
        case 0x140d54u: goto label_140d54;
        case 0x140d58u: goto label_140d58;
        case 0x140d5cu: goto label_140d5c;
        case 0x140d60u: goto label_140d60;
        case 0x140d64u: goto label_140d64;
        case 0x140d68u: goto label_140d68;
        case 0x140d6cu: goto label_140d6c;
        case 0x140d70u: goto label_140d70;
        case 0x140d74u: goto label_140d74;
        case 0x140d78u: goto label_140d78;
        case 0x140d7cu: goto label_140d7c;
        default: break;
    }

    ctx->pc = 0x140bf0u;

label_140bf0:
    // 0x140bf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x140bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_140bf4:
    // 0x140bf4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x140bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_140bf8:
    // 0x140bf8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x140bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_140bfc:
    // 0x140bfc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x140bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_140c00:
    // 0x140c00: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x140c00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_140c04:
    // 0x140c04: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x140c04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_140c08:
    // 0x140c08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x140c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_140c0c:
    // 0x140c0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x140c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_140c10:
    // 0x140c10: 0xc04e748  jal         func_139D20
label_140c14:
    if (ctx->pc == 0x140C14u) {
        ctx->pc = 0x140C14u;
            // 0x140c14: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x140C18u;
        goto label_140c18;
    }
    ctx->pc = 0x140C10u;
    SET_GPR_U32(ctx, 31, 0x140C18u);
    ctx->pc = 0x140C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140C10u;
            // 0x140c14: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140C18u; }
        if (ctx->pc != 0x140C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140C18u; }
        if (ctx->pc != 0x140C18u) { return; }
    }
    ctx->pc = 0x140C18u;
label_140c18:
    // 0x140c18: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x140c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_140c1c:
    // 0x140c1c: 0xc04e638  jal         func_1398E0
label_140c20:
    if (ctx->pc == 0x140C20u) {
        ctx->pc = 0x140C20u;
            // 0x140c20: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140C24u;
        goto label_140c24;
    }
    ctx->pc = 0x140C1Cu;
    SET_GPR_U32(ctx, 31, 0x140C24u);
    ctx->pc = 0x140C20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140C1Cu;
            // 0x140c20: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140C24u; }
        if (ctx->pc != 0x140C24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140C24u; }
        if (ctx->pc != 0x140C24u) { return; }
    }
    ctx->pc = 0x140C24u;
label_140c24:
    // 0x140c24: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_140c28:
    if (ctx->pc == 0x140C28u) {
        ctx->pc = 0x140C28u;
            // 0x140c28: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140C2Cu;
        goto label_140c2c;
    }
    ctx->pc = 0x140C24u;
    {
        const bool branch_taken_0x140c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140C24u;
            // 0x140c28: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140c24) {
            ctx->pc = 0x140C80u;
            goto label_140c80;
        }
    }
    ctx->pc = 0x140C2Cu;
label_140c2c:
    // 0x140c2c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x140c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_140c30:
    // 0x140c30: 0x24424f10  addiu       $v0, $v0, 0x4F10
    ctx->pc = 0x140c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20240));
label_140c34:
    // 0x140c34: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x140c34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_140c38:
    // 0x140c38: 0x8e19001c  lw          $t9, 0x1C($s0)
    ctx->pc = 0x140c38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_140c3c:
    // 0x140c3c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x140c3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_140c40:
    // 0x140c40: 0x320f809  jalr        $t9
label_140c44:
    if (ctx->pc == 0x140C44u) {
        ctx->pc = 0x140C44u;
            // 0x140c44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140C48u;
        goto label_140c48;
    }
    ctx->pc = 0x140C40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x140C48u);
        ctx->pc = 0x140C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140C40u;
            // 0x140c44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x140C48u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x140C48u; }
            if (ctx->pc != 0x140C48u) { return; }
        }
        }
    }
    ctx->pc = 0x140C48u;
label_140c48:
    // 0x140c48: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x140c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_140c4c:
    // 0x140c4c: 0x24425190  addiu       $v0, $v0, 0x5190
    ctx->pc = 0x140c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20880));
label_140c50:
    // 0x140c50: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x140c50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_140c54:
    // 0x140c54: 0x8e19001c  lw          $t9, 0x1C($s0)
    ctx->pc = 0x140c54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_140c58:
    // 0x140c58: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x140c58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_140c5c:
    // 0x140c5c: 0x320f809  jalr        $t9
label_140c60:
    if (ctx->pc == 0x140C60u) {
        ctx->pc = 0x140C60u;
            // 0x140c60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140C64u;
        goto label_140c64;
    }
    ctx->pc = 0x140C5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x140C64u);
        ctx->pc = 0x140C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140C5Cu;
            // 0x140c60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x140C64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x140C64u; }
            if (ctx->pc != 0x140C64u) { return; }
        }
        }
    }
    ctx->pc = 0x140C64u;
label_140c64:
    // 0x140c64: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x140c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_140c68:
    // 0x140c68: 0x24425140  addiu       $v0, $v0, 0x5140
    ctx->pc = 0x140c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20800));
label_140c6c:
    // 0x140c6c: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x140c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_140c70:
    // 0x140c70: 0x8e19001c  lw          $t9, 0x1C($s0)
    ctx->pc = 0x140c70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_140c74:
    // 0x140c74: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x140c74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_140c78:
    // 0x140c78: 0x320f809  jalr        $t9
label_140c7c:
    if (ctx->pc == 0x140C7Cu) {
        ctx->pc = 0x140C7Cu;
            // 0x140c7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140C80u;
        goto label_140c80;
    }
    ctx->pc = 0x140C78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x140C80u);
        ctx->pc = 0x140C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140C78u;
            // 0x140c7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x140C80u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x140C80u; }
            if (ctx->pc != 0x140C80u) { return; }
        }
        }
    }
    ctx->pc = 0x140C80u;
label_140c80:
    // 0x140c80: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_140c84:
    if (ctx->pc == 0x140C84u) {
        ctx->pc = 0x140C84u;
            // 0x140c84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140C88u;
        goto label_140c88;
    }
    ctx->pc = 0x140C80u;
    {
        const bool branch_taken_0x140c80 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x140C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140C80u;
            // 0x140c84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140c80) {
            ctx->pc = 0x140C90u;
            goto label_140c90;
        }
    }
    ctx->pc = 0x140C88u;
label_140c88:
    // 0x140c88: 0x10000037  b           . + 4 + (0x37 << 2)
label_140c8c:
    if (ctx->pc == 0x140C8Cu) {
        ctx->pc = 0x140C8Cu;
            // 0x140c8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140C90u;
        goto label_140c90;
    }
    ctx->pc = 0x140C88u;
    {
        const bool branch_taken_0x140c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140C88u;
            // 0x140c8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140c88) {
            ctx->pc = 0x140D68u;
            goto label_140d68;
        }
    }
    ctx->pc = 0x140C90u;
label_140c90:
    // 0x140c90: 0xc050360  jal         func_140D80
label_140c94:
    if (ctx->pc == 0x140C94u) {
        ctx->pc = 0x140C94u;
            // 0x140c94: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140C98u;
        goto label_140c98;
    }
    ctx->pc = 0x140C90u;
    SET_GPR_U32(ctx, 31, 0x140C98u);
    ctx->pc = 0x140C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140C90u;
            // 0x140c94: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140D80u;
    if (runtime->hasFunction(0x140D80u)) {
        auto targetFn = runtime->lookupFunction(0x140D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140C98u; }
        if (ctx->pc != 0x140C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__12mgCVisualMDTFRC12mgCVisualMDT_0x140d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140C98u; }
        if (ctx->pc != 0x140C98u) { return; }
    }
    ctx->pc = 0x140C98u;
label_140c98:
    // 0x140c98: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x140c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_140c9c:
    // 0x140c9c: 0x18600014  blez        $v1, . + 4 + (0x14 << 2)
label_140ca0:
    if (ctx->pc == 0x140CA0u) {
        ctx->pc = 0x140CA0u;
            // 0x140ca0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140CA4u;
        goto label_140ca4;
    }
    ctx->pc = 0x140C9Cu;
    {
        const bool branch_taken_0x140c9c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x140CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140C9Cu;
            // 0x140ca0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140c9c) {
            ctx->pc = 0x140CF0u;
            goto label_140cf0;
        }
    }
    ctx->pc = 0x140CA4u;
label_140ca4:
    // 0x140ca4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x140ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_140ca8:
    // 0x140ca8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x140ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_140cac:
    // 0x140cac: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x140cacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_140cb0:
    // 0x140cb0: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x140cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_140cb4:
    // 0x140cb4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_140cb8:
    if (ctx->pc == 0x140CB8u) {
        ctx->pc = 0x140CB8u;
            // 0x140cb8: 0x31102  srl         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x140CBCu;
        goto label_140cbc;
    }
    ctx->pc = 0x140CB4u;
    {
        const bool branch_taken_0x140cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140CB4u;
            // 0x140cb8: 0x31102  srl         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140cb4) {
            ctx->pc = 0x140CC4u;
            goto label_140cc4;
        }
    }
    ctx->pc = 0x140CBCu;
label_140cbc:
    // 0x140cbc: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x140cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_140cc0:
    // 0x140cc0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x140cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_140cc4:
    // 0x140cc4: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x140cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_140cc8:
    // 0x140cc8: 0xc04e748  jal         func_139D20
label_140ccc:
    if (ctx->pc == 0x140CCCu) {
        ctx->pc = 0x140CCCu;
            // 0x140ccc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140CD0u;
        goto label_140cd0;
    }
    ctx->pc = 0x140CC8u;
    SET_GPR_U32(ctx, 31, 0x140CD0u);
    ctx->pc = 0x140CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140CC8u;
            // 0x140ccc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140CD0u; }
        if (ctx->pc != 0x140CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140CD0u; }
        if (ctx->pc != 0x140CD0u) { return; }
    }
    ctx->pc = 0x140CD0u;
label_140cd0:
    // 0x140cd0: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x140cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_140cd4:
    // 0x140cd4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x140cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_140cd8:
    // 0x140cd8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x140cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_140cdc:
    // 0x140cdc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x140cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_140ce0:
    // 0x140ce0: 0xc04e63c  jal         func_1398F0
label_140ce4:
    if (ctx->pc == 0x140CE4u) {
        ctx->pc = 0x140CE4u;
            // 0x140ce4: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x140CE8u;
        goto label_140ce8;
    }
    ctx->pc = 0x140CE0u;
    SET_GPR_U32(ctx, 31, 0x140CE8u);
    ctx->pc = 0x140CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140CE0u;
            // 0x140ce4: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140CE8u; }
        if (ctx->pc != 0x140CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140CE8u; }
        if (ctx->pc != 0x140CE8u) { return; }
    }
    ctx->pc = 0x140CE8u;
label_140ce8:
    // 0x140ce8: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x140ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
label_140cec:
    // 0x140cec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x140cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_140cf0:
    // 0x140cf0: 0x10000019  b           . + 4 + (0x19 << 2)
label_140cf4:
    if (ctx->pc == 0x140CF4u) {
        ctx->pc = 0x140CF4u;
            // 0x140cf4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140CF8u;
        goto label_140cf8;
    }
    ctx->pc = 0x140CF0u;
    {
        const bool branch_taken_0x140cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140CF0u;
            // 0x140cf4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140cf0) {
            ctx->pc = 0x140D58u;
            goto label_140d58;
        }
    }
    ctx->pc = 0x140CF8u;
label_140cf8:
    // 0x140cf8: 0x8e430044  lw          $v1, 0x44($s2)
    ctx->pc = 0x140cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_140cfc:
    // 0x140cfc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x140cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_140d00:
    // 0x140d00: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x140d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_140d04:
    // 0x140d04: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x140d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_140d08:
    // 0x140d08: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x140d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_140d0c:
    // 0x140d0c: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x140d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_140d10:
    // 0x140d10: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x140d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_140d14:
    // 0x140d14: 0x24c60030  addiu       $a2, $a2, 0x30
    ctx->pc = 0x140d14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
label_140d18:
    // 0x140d18: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x140d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_140d1c:
    // 0x140d1c: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x140d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_140d20:
    // 0x140d20: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x140d20u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_140d24:
    // 0x140d24: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x140d24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_140d28:
    // 0x140d28: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x140d28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_140d2c:
    // 0x140d2c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x140d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_140d30:
    // 0x140d30: 0xc4a30010  lwc1        $f3, 0x10($a1)
    ctx->pc = 0x140d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_140d34:
    // 0x140d34: 0xc4a20014  lwc1        $f2, 0x14($a1)
    ctx->pc = 0x140d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_140d38:
    // 0x140d38: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x140d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_140d3c:
    // 0x140d3c: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x140d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_140d40:
    // 0x140d40: 0xe4630010  swc1        $f3, 0x10($v1)
    ctx->pc = 0x140d40u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_140d44:
    // 0x140d44: 0xe4620014  swc1        $f2, 0x14($v1)
    ctx->pc = 0x140d44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_140d48:
    // 0x140d48: 0xe4610018  swc1        $f1, 0x18($v1)
    ctx->pc = 0x140d48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_140d4c:
    // 0x140d4c: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x140d4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
label_140d50:
    // 0x140d50: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x140d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
label_140d54:
    // 0x140d54: 0xac620020  sw          $v0, 0x20($v1)
    ctx->pc = 0x140d54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
label_140d58:
    // 0x140d58: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x140d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_140d5c:
    // 0x140d5c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x140d5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_140d60:
    // 0x140d60: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
label_140d64:
    if (ctx->pc == 0x140D64u) {
        ctx->pc = 0x140D64u;
            // 0x140d64: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140D68u;
        goto label_140d68;
    }
    ctx->pc = 0x140D60u;
    {
        const bool branch_taken_0x140d60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x140D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140D60u;
            // 0x140d64: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140d60) {
            ctx->pc = 0x140CF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_140cf8;
        }
    }
    ctx->pc = 0x140D68u;
label_140d68:
    // 0x140d68: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x140d68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_140d6c:
    // 0x140d6c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x140d6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_140d70:
    // 0x140d70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x140d70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_140d74:
    // 0x140d74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x140d74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_140d78:
    // 0x140d78: 0x3e00008  jr          $ra
label_140d7c:
    if (ctx->pc == 0x140D7Cu) {
        ctx->pc = 0x140D7Cu;
            // 0x140d7c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x140D80u;
        goto label_fallthrough_0x140d78;
    }
    ctx->pc = 0x140D78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140D78u;
            // 0x140d7c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x140d78:
    ctx->pc = 0x140D80u;
}
