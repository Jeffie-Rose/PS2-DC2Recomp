#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Copy__18mgCVisualMotionMDTFP9mgCMemory
// Address: 0x28ab60 - 0x28ad70
void Copy__18mgCVisualMotionMDTFP9mgCMemory_0x28ab60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Copy__18mgCVisualMotionMDTFP9mgCMemory_0x28ab60");
#endif

    switch (ctx->pc) {
        case 0x28ab60u: goto label_28ab60;
        case 0x28ab64u: goto label_28ab64;
        case 0x28ab68u: goto label_28ab68;
        case 0x28ab6cu: goto label_28ab6c;
        case 0x28ab70u: goto label_28ab70;
        case 0x28ab74u: goto label_28ab74;
        case 0x28ab78u: goto label_28ab78;
        case 0x28ab7cu: goto label_28ab7c;
        case 0x28ab80u: goto label_28ab80;
        case 0x28ab84u: goto label_28ab84;
        case 0x28ab88u: goto label_28ab88;
        case 0x28ab8cu: goto label_28ab8c;
        case 0x28ab90u: goto label_28ab90;
        case 0x28ab94u: goto label_28ab94;
        case 0x28ab98u: goto label_28ab98;
        case 0x28ab9cu: goto label_28ab9c;
        case 0x28aba0u: goto label_28aba0;
        case 0x28aba4u: goto label_28aba4;
        case 0x28aba8u: goto label_28aba8;
        case 0x28abacu: goto label_28abac;
        case 0x28abb0u: goto label_28abb0;
        case 0x28abb4u: goto label_28abb4;
        case 0x28abb8u: goto label_28abb8;
        case 0x28abbcu: goto label_28abbc;
        case 0x28abc0u: goto label_28abc0;
        case 0x28abc4u: goto label_28abc4;
        case 0x28abc8u: goto label_28abc8;
        case 0x28abccu: goto label_28abcc;
        case 0x28abd0u: goto label_28abd0;
        case 0x28abd4u: goto label_28abd4;
        case 0x28abd8u: goto label_28abd8;
        case 0x28abdcu: goto label_28abdc;
        case 0x28abe0u: goto label_28abe0;
        case 0x28abe4u: goto label_28abe4;
        case 0x28abe8u: goto label_28abe8;
        case 0x28abecu: goto label_28abec;
        case 0x28abf0u: goto label_28abf0;
        case 0x28abf4u: goto label_28abf4;
        case 0x28abf8u: goto label_28abf8;
        case 0x28abfcu: goto label_28abfc;
        case 0x28ac00u: goto label_28ac00;
        case 0x28ac04u: goto label_28ac04;
        case 0x28ac08u: goto label_28ac08;
        case 0x28ac0cu: goto label_28ac0c;
        case 0x28ac10u: goto label_28ac10;
        case 0x28ac14u: goto label_28ac14;
        case 0x28ac18u: goto label_28ac18;
        case 0x28ac1cu: goto label_28ac1c;
        case 0x28ac20u: goto label_28ac20;
        case 0x28ac24u: goto label_28ac24;
        case 0x28ac28u: goto label_28ac28;
        case 0x28ac2cu: goto label_28ac2c;
        case 0x28ac30u: goto label_28ac30;
        case 0x28ac34u: goto label_28ac34;
        case 0x28ac38u: goto label_28ac38;
        case 0x28ac3cu: goto label_28ac3c;
        case 0x28ac40u: goto label_28ac40;
        case 0x28ac44u: goto label_28ac44;
        case 0x28ac48u: goto label_28ac48;
        case 0x28ac4cu: goto label_28ac4c;
        case 0x28ac50u: goto label_28ac50;
        case 0x28ac54u: goto label_28ac54;
        case 0x28ac58u: goto label_28ac58;
        case 0x28ac5cu: goto label_28ac5c;
        case 0x28ac60u: goto label_28ac60;
        case 0x28ac64u: goto label_28ac64;
        case 0x28ac68u: goto label_28ac68;
        case 0x28ac6cu: goto label_28ac6c;
        case 0x28ac70u: goto label_28ac70;
        case 0x28ac74u: goto label_28ac74;
        case 0x28ac78u: goto label_28ac78;
        case 0x28ac7cu: goto label_28ac7c;
        case 0x28ac80u: goto label_28ac80;
        case 0x28ac84u: goto label_28ac84;
        case 0x28ac88u: goto label_28ac88;
        case 0x28ac8cu: goto label_28ac8c;
        case 0x28ac90u: goto label_28ac90;
        case 0x28ac94u: goto label_28ac94;
        case 0x28ac98u: goto label_28ac98;
        case 0x28ac9cu: goto label_28ac9c;
        case 0x28aca0u: goto label_28aca0;
        case 0x28aca4u: goto label_28aca4;
        case 0x28aca8u: goto label_28aca8;
        case 0x28acacu: goto label_28acac;
        case 0x28acb0u: goto label_28acb0;
        case 0x28acb4u: goto label_28acb4;
        case 0x28acb8u: goto label_28acb8;
        case 0x28acbcu: goto label_28acbc;
        case 0x28acc0u: goto label_28acc0;
        case 0x28acc4u: goto label_28acc4;
        case 0x28acc8u: goto label_28acc8;
        case 0x28acccu: goto label_28accc;
        case 0x28acd0u: goto label_28acd0;
        case 0x28acd4u: goto label_28acd4;
        case 0x28acd8u: goto label_28acd8;
        case 0x28acdcu: goto label_28acdc;
        case 0x28ace0u: goto label_28ace0;
        case 0x28ace4u: goto label_28ace4;
        case 0x28ace8u: goto label_28ace8;
        case 0x28acecu: goto label_28acec;
        case 0x28acf0u: goto label_28acf0;
        case 0x28acf4u: goto label_28acf4;
        case 0x28acf8u: goto label_28acf8;
        case 0x28acfcu: goto label_28acfc;
        case 0x28ad00u: goto label_28ad00;
        case 0x28ad04u: goto label_28ad04;
        case 0x28ad08u: goto label_28ad08;
        case 0x28ad0cu: goto label_28ad0c;
        case 0x28ad10u: goto label_28ad10;
        case 0x28ad14u: goto label_28ad14;
        case 0x28ad18u: goto label_28ad18;
        case 0x28ad1cu: goto label_28ad1c;
        case 0x28ad20u: goto label_28ad20;
        case 0x28ad24u: goto label_28ad24;
        case 0x28ad28u: goto label_28ad28;
        case 0x28ad2cu: goto label_28ad2c;
        case 0x28ad30u: goto label_28ad30;
        case 0x28ad34u: goto label_28ad34;
        case 0x28ad38u: goto label_28ad38;
        case 0x28ad3cu: goto label_28ad3c;
        case 0x28ad40u: goto label_28ad40;
        case 0x28ad44u: goto label_28ad44;
        case 0x28ad48u: goto label_28ad48;
        case 0x28ad4cu: goto label_28ad4c;
        case 0x28ad50u: goto label_28ad50;
        case 0x28ad54u: goto label_28ad54;
        case 0x28ad58u: goto label_28ad58;
        case 0x28ad5cu: goto label_28ad5c;
        case 0x28ad60u: goto label_28ad60;
        case 0x28ad64u: goto label_28ad64;
        case 0x28ad68u: goto label_28ad68;
        case 0x28ad6cu: goto label_28ad6c;
        default: break;
    }

    ctx->pc = 0x28ab60u;

label_28ab60:
    // 0x28ab60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28ab60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_28ab64:
    // 0x28ab64: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x28ab64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_28ab68:
    // 0x28ab68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28ab68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_28ab6c:
    // 0x28ab6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28ab6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_28ab70:
    // 0x28ab70: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x28ab70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28ab74:
    // 0x28ab74: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x28ab74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28ab78:
    // 0x28ab78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28ab78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_28ab7c:
    // 0x28ab7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28ab7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28ab80:
    // 0x28ab80: 0xc04e748  jal         func_139D20
label_28ab84:
    if (ctx->pc == 0x28AB84u) {
        ctx->pc = 0x28AB84u;
            // 0x28ab84: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->pc = 0x28AB88u;
        goto label_28ab88;
    }
    ctx->pc = 0x28AB80u;
    SET_GPR_U32(ctx, 31, 0x28AB88u);
    ctx->pc = 0x28AB84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28AB80u;
            // 0x28ab84: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AB88u; }
        if (ctx->pc != 0x28AB88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AB88u; }
        if (ctx->pc != 0x28AB88u) { return; }
    }
    ctx->pc = 0x28AB88u;
label_28ab88:
    // 0x28ab88: 0x24040110  addiu       $a0, $zero, 0x110
    ctx->pc = 0x28ab88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_28ab8c:
    // 0x28ab8c: 0xc04e638  jal         func_1398E0
label_28ab90:
    if (ctx->pc == 0x28AB90u) {
        ctx->pc = 0x28AB90u;
            // 0x28ab90: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28AB94u;
        goto label_28ab94;
    }
    ctx->pc = 0x28AB8Cu;
    SET_GPR_U32(ctx, 31, 0x28AB94u);
    ctx->pc = 0x28AB90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28AB8Cu;
            // 0x28ab90: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AB94u; }
        if (ctx->pc != 0x28AB94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AB94u; }
        if (ctx->pc != 0x28AB94u) { return; }
    }
    ctx->pc = 0x28AB94u;
label_28ab94:
    // 0x28ab94: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_28ab98:
    if (ctx->pc == 0x28AB98u) {
        ctx->pc = 0x28AB98u;
            // 0x28ab98: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28AB9Cu;
        goto label_28ab9c;
    }
    ctx->pc = 0x28AB94u;
    {
        const bool branch_taken_0x28ab94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AB94u;
            // 0x28ab98: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ab94) {
            ctx->pc = 0x28AC0Cu;
            goto label_28ac0c;
        }
    }
    ctx->pc = 0x28AB9Cu;
label_28ab9c:
    // 0x28ab9c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x28ab9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_28aba0:
    // 0x28aba0: 0x24424f10  addiu       $v0, $v0, 0x4F10
    ctx->pc = 0x28aba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20240));
label_28aba4:
    // 0x28aba4: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x28aba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_28aba8:
    // 0x28aba8: 0x8e19001c  lw          $t9, 0x1C($s0)
    ctx->pc = 0x28aba8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_28abac:
    // 0x28abac: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x28abacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_28abb0:
    // 0x28abb0: 0x320f809  jalr        $t9
label_28abb4:
    if (ctx->pc == 0x28ABB4u) {
        ctx->pc = 0x28ABB4u;
            // 0x28abb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28ABB8u;
        goto label_28abb8;
    }
    ctx->pc = 0x28ABB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28ABB8u);
        ctx->pc = 0x28ABB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28ABB0u;
            // 0x28abb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28ABB8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28ABB8u; }
            if (ctx->pc != 0x28ABB8u) { return; }
        }
        }
    }
    ctx->pc = 0x28ABB8u;
label_28abb8:
    // 0x28abb8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x28abb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_28abbc:
    // 0x28abbc: 0x24425190  addiu       $v0, $v0, 0x5190
    ctx->pc = 0x28abbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20880));
label_28abc0:
    // 0x28abc0: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x28abc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_28abc4:
    // 0x28abc4: 0x8e19001c  lw          $t9, 0x1C($s0)
    ctx->pc = 0x28abc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_28abc8:
    // 0x28abc8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x28abc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_28abcc:
    // 0x28abcc: 0x320f809  jalr        $t9
label_28abd0:
    if (ctx->pc == 0x28ABD0u) {
        ctx->pc = 0x28ABD0u;
            // 0x28abd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28ABD4u;
        goto label_28abd4;
    }
    ctx->pc = 0x28ABCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28ABD4u);
        ctx->pc = 0x28ABD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28ABCCu;
            // 0x28abd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28ABD4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28ABD4u; }
            if (ctx->pc != 0x28ABD4u) { return; }
        }
        }
    }
    ctx->pc = 0x28ABD4u;
label_28abd4:
    // 0x28abd4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x28abd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_28abd8:
    // 0x28abd8: 0x24425140  addiu       $v0, $v0, 0x5140
    ctx->pc = 0x28abd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20800));
label_28abdc:
    // 0x28abdc: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x28abdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_28abe0:
    // 0x28abe0: 0x8e19001c  lw          $t9, 0x1C($s0)
    ctx->pc = 0x28abe0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_28abe4:
    // 0x28abe4: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x28abe4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_28abe8:
    // 0x28abe8: 0x320f809  jalr        $t9
label_28abec:
    if (ctx->pc == 0x28ABECu) {
        ctx->pc = 0x28ABECu;
            // 0x28abec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28ABF0u;
        goto label_28abf0;
    }
    ctx->pc = 0x28ABE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28ABF0u);
        ctx->pc = 0x28ABECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28ABE8u;
            // 0x28abec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28ABF0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28ABF0u; }
            if (ctx->pc != 0x28ABF0u) { return; }
        }
        }
    }
    ctx->pc = 0x28ABF0u;
label_28abf0:
    // 0x28abf0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x28abf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_28abf4:
    // 0x28abf4: 0x24425ff0  addiu       $v0, $v0, 0x5FF0
    ctx->pc = 0x28abf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24560));
label_28abf8:
    // 0x28abf8: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x28abf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_28abfc:
    // 0x28abfc: 0x8e19001c  lw          $t9, 0x1C($s0)
    ctx->pc = 0x28abfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_28ac00:
    // 0x28ac00: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x28ac00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_28ac04:
    // 0x28ac04: 0x320f809  jalr        $t9
label_28ac08:
    if (ctx->pc == 0x28AC08u) {
        ctx->pc = 0x28AC08u;
            // 0x28ac08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28AC0Cu;
        goto label_28ac0c;
    }
    ctx->pc = 0x28AC04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28AC0Cu);
        ctx->pc = 0x28AC08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AC04u;
            // 0x28ac08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28AC0Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28AC0Cu; }
            if (ctx->pc != 0x28AC0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x28AC0Cu;
label_28ac0c:
    // 0x28ac0c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_28ac10:
    if (ctx->pc == 0x28AC10u) {
        ctx->pc = 0x28AC10u;
            // 0x28ac10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28AC14u;
        goto label_28ac14;
    }
    ctx->pc = 0x28AC0Cu;
    {
        const bool branch_taken_0x28ac0c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x28AC10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AC0Cu;
            // 0x28ac10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ac0c) {
            ctx->pc = 0x28AC1Cu;
            goto label_28ac1c;
        }
    }
    ctx->pc = 0x28AC14u;
label_28ac14:
    // 0x28ac14: 0x10000050  b           . + 4 + (0x50 << 2)
label_28ac18:
    if (ctx->pc == 0x28AC18u) {
        ctx->pc = 0x28AC18u;
            // 0x28ac18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28AC1Cu;
        goto label_28ac1c;
    }
    ctx->pc = 0x28AC14u;
    {
        const bool branch_taken_0x28ac14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AC18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AC14u;
            // 0x28ac18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ac14) {
            ctx->pc = 0x28AD58u;
            goto label_28ad58;
        }
    }
    ctx->pc = 0x28AC1Cu;
label_28ac1c:
    // 0x28ac1c: 0xc050360  jal         func_140D80
label_28ac20:
    if (ctx->pc == 0x28AC20u) {
        ctx->pc = 0x28AC20u;
            // 0x28ac20: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28AC24u;
        goto label_28ac24;
    }
    ctx->pc = 0x28AC1Cu;
    SET_GPR_U32(ctx, 31, 0x28AC24u);
    ctx->pc = 0x28AC20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28AC1Cu;
            // 0x28ac20: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140D80u;
    if (runtime->hasFunction(0x140D80u)) {
        auto targetFn = runtime->lookupFunction(0x140D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AC24u; }
        if (ctx->pc != 0x28AC24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__12mgCVisualMDTFRC12mgCVisualMDT_0x140d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AC24u; }
        if (ctx->pc != 0x28AC24u) { return; }
    }
    ctx->pc = 0x28AC24u;
label_28ac24:
    // 0x28ac24: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x28ac24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_28ac28:
    // 0x28ac28: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x28ac28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_28ac2c:
    // 0x28ac2c: 0x26450060  addiu       $a1, $s2, 0x60
    ctx->pc = 0x28ac2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
label_28ac30:
    // 0x28ac30: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x28ac30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
label_28ac34:
    // 0x28ac34: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x28ac34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_28ac38:
    // 0x28ac38: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x28ac38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_28ac3c:
    // 0x28ac3c: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x28ac3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_28ac40:
    // 0x28ac40: 0xc04e624  jal         func_139890
label_28ac44:
    if (ctx->pc == 0x28AC44u) {
        ctx->pc = 0x28AC44u;
            // 0x28ac44: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
        ctx->pc = 0x28AC48u;
        goto label_28ac48;
    }
    ctx->pc = 0x28AC40u;
    SET_GPR_U32(ctx, 31, 0x28AC48u);
    ctx->pc = 0x28AC44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28AC40u;
            // 0x28ac44: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139890u;
    if (runtime->hasFunction(0x139890u)) {
        auto targetFn = runtime->lookupFunction(0x139890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AC48u; }
        if (ctx->pc != 0x28AC48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__9mgVu0FBOXFR9mgVu0FBOX_0x139890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AC48u; }
        if (ctx->pc != 0x28AC48u) { return; }
    }
    ctx->pc = 0x28AC48u;
label_28ac48:
    // 0x28ac48: 0x26460080  addiu       $a2, $s2, 0x80
    ctx->pc = 0x28ac48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
label_28ac4c:
    // 0x28ac4c: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x28ac4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_28ac50:
    // 0x28ac50: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x28ac50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_28ac54:
    // 0x28ac54: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x28ac54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_28ac58:
    // 0x28ac58: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x28ac58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_28ac5c:
    // 0x28ac5c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x28ac5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_28ac60:
    // 0x28ac60: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x28ac60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_28ac64:
    // 0x28ac64: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x28ac64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_28ac68:
    // 0x28ac68: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x28ac68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_28ac6c:
    // 0x28ac6c: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
label_28ac70:
    if (ctx->pc == 0x28AC70u) {
        ctx->pc = 0x28AC70u;
            // 0x28ac70: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->pc = 0x28AC74u;
        goto label_28ac74;
    }
    ctx->pc = 0x28AC6Cu;
    {
        const bool branch_taken_0x28ac6c = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x28AC70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AC6Cu;
            // 0x28ac70: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ac6c) {
            ctx->pc = 0x28AC54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28ac54;
        }
    }
    ctx->pc = 0x28AC74u;
label_28ac74:
    // 0x28ac74: 0x8e420100  lw          $v0, 0x100($s2)
    ctx->pc = 0x28ac74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
label_28ac78:
    // 0x28ac78: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x28ac78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
label_28ac7c:
    // 0x28ac7c: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x28ac7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_28ac80:
    // 0x28ac80: 0xae020104  sw          $v0, 0x104($s0)
    ctx->pc = 0x28ac80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 2));
label_28ac84:
    // 0x28ac84: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x28ac84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_28ac88:
    // 0x28ac88: 0x18600014  blez        $v1, . + 4 + (0x14 << 2)
label_28ac8c:
    if (ctx->pc == 0x28AC8Cu) {
        ctx->pc = 0x28AC8Cu;
            // 0x28ac8c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28AC90u;
        goto label_28ac90;
    }
    ctx->pc = 0x28AC88u;
    {
        const bool branch_taken_0x28ac88 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x28AC8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AC88u;
            // 0x28ac8c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ac88) {
            ctx->pc = 0x28ACDCu;
            goto label_28acdc;
        }
    }
    ctx->pc = 0x28AC90u;
label_28ac90:
    // 0x28ac90: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x28ac90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_28ac94:
    // 0x28ac94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28ac94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28ac98:
    // 0x28ac98: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x28ac98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_28ac9c:
    // 0x28ac9c: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x28ac9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_28aca0:
    // 0x28aca0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_28aca4:
    if (ctx->pc == 0x28ACA4u) {
        ctx->pc = 0x28ACA4u;
            // 0x28aca4: 0x31102  srl         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x28ACA8u;
        goto label_28aca8;
    }
    ctx->pc = 0x28ACA0u;
    {
        const bool branch_taken_0x28aca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ACA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28ACA0u;
            // 0x28aca4: 0x31102  srl         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aca0) {
            ctx->pc = 0x28ACB0u;
            goto label_28acb0;
        }
    }
    ctx->pc = 0x28ACA8u;
label_28aca8:
    // 0x28aca8: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x28aca8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_28acac:
    // 0x28acac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28acacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_28acb0:
    // 0x28acb0: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x28acb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_28acb4:
    // 0x28acb4: 0xc04e748  jal         func_139D20
label_28acb8:
    if (ctx->pc == 0x28ACB8u) {
        ctx->pc = 0x28ACB8u;
            // 0x28acb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28ACBCu;
        goto label_28acbc;
    }
    ctx->pc = 0x28ACB4u;
    SET_GPR_U32(ctx, 31, 0x28ACBCu);
    ctx->pc = 0x28ACB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28ACB4u;
            // 0x28acb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28ACBCu; }
        if (ctx->pc != 0x28ACBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28ACBCu; }
        if (ctx->pc != 0x28ACBCu) { return; }
    }
    ctx->pc = 0x28ACBCu;
label_28acbc:
    // 0x28acbc: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x28acbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_28acc0:
    // 0x28acc0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28acc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28acc4:
    // 0x28acc4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x28acc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_28acc8:
    // 0x28acc8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28acc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28accc:
    // 0x28accc: 0xc04e63c  jal         func_1398F0
label_28acd0:
    if (ctx->pc == 0x28ACD0u) {
        ctx->pc = 0x28ACD0u;
            // 0x28acd0: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x28ACD4u;
        goto label_28acd4;
    }
    ctx->pc = 0x28ACCCu;
    SET_GPR_U32(ctx, 31, 0x28ACD4u);
    ctx->pc = 0x28ACD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28ACCCu;
            // 0x28acd0: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28ACD4u; }
        if (ctx->pc != 0x28ACD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28ACD4u; }
        if (ctx->pc != 0x28ACD4u) { return; }
    }
    ctx->pc = 0x28ACD4u;
label_28acd4:
    // 0x28acd4: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x28acd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
label_28acd8:
    // 0x28acd8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28acd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28acdc:
    // 0x28acdc: 0x10000019  b           . + 4 + (0x19 << 2)
label_28ace0:
    if (ctx->pc == 0x28ACE0u) {
        ctx->pc = 0x28ACE0u;
            // 0x28ace0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28ACE4u;
        goto label_28ace4;
    }
    ctx->pc = 0x28ACDCu;
    {
        const bool branch_taken_0x28acdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ACE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28ACDCu;
            // 0x28ace0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28acdc) {
            ctx->pc = 0x28AD44u;
            goto label_28ad44;
        }
    }
    ctx->pc = 0x28ACE4u;
label_28ace4:
    // 0x28ace4: 0x8e430044  lw          $v1, 0x44($s2)
    ctx->pc = 0x28ace4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_28ace8:
    // 0x28ace8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x28ace8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_28acec:
    // 0x28acec: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x28acecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_28acf0:
    // 0x28acf0: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x28acf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_28acf4:
    // 0x28acf4: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x28acf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_28acf8:
    // 0x28acf8: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x28acf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_28acfc:
    // 0x28acfc: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x28acfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_28ad00:
    // 0x28ad00: 0x24c60030  addiu       $a2, $a2, 0x30
    ctx->pc = 0x28ad00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
label_28ad04:
    // 0x28ad04: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x28ad04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28ad08:
    // 0x28ad08: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x28ad08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28ad0c:
    // 0x28ad0c: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x28ad0cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_28ad10:
    // 0x28ad10: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x28ad10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_28ad14:
    // 0x28ad14: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x28ad14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_28ad18:
    // 0x28ad18: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x28ad18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_28ad1c:
    // 0x28ad1c: 0xc4a30010  lwc1        $f3, 0x10($a1)
    ctx->pc = 0x28ad1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_28ad20:
    // 0x28ad20: 0xc4a20014  lwc1        $f2, 0x14($a1)
    ctx->pc = 0x28ad20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_28ad24:
    // 0x28ad24: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x28ad24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28ad28:
    // 0x28ad28: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x28ad28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28ad2c:
    // 0x28ad2c: 0xe4630010  swc1        $f3, 0x10($v1)
    ctx->pc = 0x28ad2cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_28ad30:
    // 0x28ad30: 0xe4620014  swc1        $f2, 0x14($v1)
    ctx->pc = 0x28ad30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_28ad34:
    // 0x28ad34: 0xe4610018  swc1        $f1, 0x18($v1)
    ctx->pc = 0x28ad34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_28ad38:
    // 0x28ad38: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x28ad38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
label_28ad3c:
    // 0x28ad3c: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x28ad3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
label_28ad40:
    // 0x28ad40: 0xac620020  sw          $v0, 0x20($v1)
    ctx->pc = 0x28ad40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
label_28ad44:
    // 0x28ad44: 0x0  nop
    ctx->pc = 0x28ad44u;
    // NOP
label_28ad48:
    // 0x28ad48: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x28ad48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_28ad4c:
    // 0x28ad4c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x28ad4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_28ad50:
    // 0x28ad50: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
label_28ad54:
    if (ctx->pc == 0x28AD54u) {
        ctx->pc = 0x28AD54u;
            // 0x28ad54: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28AD58u;
        goto label_28ad58;
    }
    ctx->pc = 0x28AD50u;
    {
        const bool branch_taken_0x28ad50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28AD54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AD50u;
            // 0x28ad54: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ad50) {
            ctx->pc = 0x28ACE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28ace4;
        }
    }
    ctx->pc = 0x28AD58u;
label_28ad58:
    // 0x28ad58: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x28ad58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_28ad5c:
    // 0x28ad5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28ad5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_28ad60:
    // 0x28ad60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28ad60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28ad64:
    // 0x28ad64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28ad64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_28ad68:
    // 0x28ad68: 0x3e00008  jr          $ra
label_28ad6c:
    if (ctx->pc == 0x28AD6Cu) {
        ctx->pc = 0x28AD6Cu;
            // 0x28ad6c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x28AD70u;
        goto label_fallthrough_0x28ad68;
    }
    ctx->pc = 0x28AD68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28AD6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AD68u;
            // 0x28ad6c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x28ad68:
    ctx->pc = 0x28AD70u;
}
