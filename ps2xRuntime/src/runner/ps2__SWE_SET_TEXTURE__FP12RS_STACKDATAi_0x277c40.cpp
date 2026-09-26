#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SWE_SET_TEXTURE__FP12RS_STACKDATAi
// Address: 0x277c40 - 0x277d74
void ps2__SWE_SET_TEXTURE__FP12RS_STACKDATAi_0x277c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SWE_SET_TEXTURE__FP12RS_STACKDATAi_0x277c40");
#endif

    switch (ctx->pc) {
        case 0x277c68u: goto label_277c68;
        case 0x277c78u: goto label_277c78;
        case 0x277c84u: goto label_277c84;
        case 0x277cb8u: goto label_277cb8;
        case 0x277cc8u: goto label_277cc8;
        case 0x277cd8u: goto label_277cd8;
        case 0x277ce8u: goto label_277ce8;
        case 0x277cf8u: goto label_277cf8;
        case 0x277d04u: goto label_277d04;
        case 0x277d1cu: goto label_277d1c;
        case 0x277d4cu: goto label_277d4c;
        default: break;
    }

    ctx->pc = 0x277c40u;

    // 0x277c40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x277c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x277c44: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x277c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x277c48: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x277c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x277c4c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x277c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x277c50: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x277c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x277c54: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x277c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x277c58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x277c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x277c5c: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x277c5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x277c60: 0xc097e18  jal         func_25F860
    ctx->pc = 0x277C60u;
    SET_GPR_U32(ctx, 31, 0x277C68u);
    ctx->pc = 0x277C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277C60u;
            // 0x277c64: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277C68u; }
        if (ctx->pc != 0x277C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277C68u; }
        if (ctx->pc != 0x277C68u) { return; }
    }
    ctx->pc = 0x277C68u;
label_277c68:
    // 0x277c68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x277c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277c6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x277c6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277c70: 0xc097e18  jal         func_25F860
    ctx->pc = 0x277C70u;
    SET_GPR_U32(ctx, 31, 0x277C78u);
    ctx->pc = 0x277C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277C70u;
            // 0x277c74: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277C78u; }
        if (ctx->pc != 0x277C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277C78u; }
        if (ctx->pc != 0x277C78u) { return; }
    }
    ctx->pc = 0x277C78u;
label_277c78:
    // 0x277c78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x277c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277c7c: 0xc0956d4  jal         func_255B50
    ctx->pc = 0x277C7Cu;
    SET_GPR_U32(ctx, 31, 0x277C84u);
    ctx->pc = 0x277C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277C7Cu;
            // 0x277c80: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x255B50u;
    if (runtime->hasFunction(0x255B50u)) {
        auto targetFn = runtime->lookupFunction(0x255B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277C84u; }
        if (ctx->pc != 0x277C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__Fi_0x255b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277C84u; }
        if (ctx->pc != 0x277C84u) { return; }
    }
    ctx->pc = 0x277C84u;
label_277c84:
    // 0x277c84: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x277C84u;
    {
        const bool branch_taken_0x277c84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x277C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277C84u;
            // 0x277c88: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277c84) {
            ctx->pc = 0x277C94u;
            goto label_277c94;
        }
    }
    ctx->pc = 0x277C8Cu;
    // 0x277c8c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x277C8Cu;
    {
        const bool branch_taken_0x277c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277C8Cu;
            // 0x277c90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277c8c) {
            ctx->pc = 0x277D50u;
            goto label_277d50;
        }
    }
    ctx->pc = 0x277C94u;
label_277c94:
    // 0x277c94: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x277c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x277c98: 0x24500570  addiu       $s0, $v0, 0x570
    ctx->pc = 0x277c98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1392));
    // 0x277c9c: 0x8c420570  lw          $v0, 0x570($v0)
    ctx->pc = 0x277c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1392)));
    // 0x277ca0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x277CA0u;
    {
        const bool branch_taken_0x277ca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x277CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277CA0u;
            // 0x277ca4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277ca0) {
            ctx->pc = 0x277CB0u;
            goto label_277cb0;
        }
    }
    ctx->pc = 0x277CA8u;
    // 0x277ca8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x277CA8u;
    {
        const bool branch_taken_0x277ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277CA8u;
            // 0x277cac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277ca8) {
            ctx->pc = 0x277D50u;
            goto label_277d50;
        }
    }
    ctx->pc = 0x277CB0u;
label_277cb0:
    // 0x277cb0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x277CB0u;
    SET_GPR_U32(ctx, 31, 0x277CB8u);
    ctx->pc = 0x277CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277CB0u;
            // 0x277cb4: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277CB8u; }
        if (ctx->pc != 0x277CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277CB8u; }
        if (ctx->pc != 0x277CB8u) { return; }
    }
    ctx->pc = 0x277CB8u;
label_277cb8:
    // 0x277cb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x277cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277cbc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x277cbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277cc0: 0xc097e48  jal         func_25F920
    ctx->pc = 0x277CC0u;
    SET_GPR_U32(ctx, 31, 0x277CC8u);
    ctx->pc = 0x277CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277CC0u;
            // 0x277cc4: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277CC8u; }
        if (ctx->pc != 0x277CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277CC8u; }
        if (ctx->pc != 0x277CC8u) { return; }
    }
    ctx->pc = 0x277CC8u;
label_277cc8:
    // 0x277cc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x277cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277ccc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x277cccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277cd0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x277CD0u;
    SET_GPR_U32(ctx, 31, 0x277CD8u);
    ctx->pc = 0x277CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277CD0u;
            // 0x277cd4: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277CD8u; }
        if (ctx->pc != 0x277CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277CD8u; }
        if (ctx->pc != 0x277CD8u) { return; }
    }
    ctx->pc = 0x277CD8u;
label_277cd8:
    // 0x277cd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x277cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277cdc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x277cdcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277ce0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x277CE0u;
    SET_GPR_U32(ctx, 31, 0x277CE8u);
    ctx->pc = 0x277CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277CE0u;
            // 0x277ce4: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277CE8u; }
        if (ctx->pc != 0x277CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277CE8u; }
        if (ctx->pc != 0x277CE8u) { return; }
    }
    ctx->pc = 0x277CE8u;
label_277ce8:
    // 0x277ce8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x277ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277cec: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x277cecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277cf0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x277CF0u;
    SET_GPR_U32(ctx, 31, 0x277CF8u);
    ctx->pc = 0x277CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277CF0u;
            // 0x277cf4: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277CF8u; }
        if (ctx->pc != 0x277CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277CF8u; }
        if (ctx->pc != 0x277CF8u) { return; }
    }
    ctx->pc = 0x277CF8u;
label_277cf8:
    // 0x277cf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x277cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277cfc: 0xc097e18  jal         func_25F860
    ctx->pc = 0x277CFCu;
    SET_GPR_U32(ctx, 31, 0x277D04u);
    ctx->pc = 0x277D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277CFCu;
            // 0x277d00: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277D04u; }
        if (ctx->pc != 0x277D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277D04u; }
        if (ctx->pc != 0x277D04u) { return; }
    }
    ctx->pc = 0x277D04u;
label_277d04:
    // 0x277d04: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x277d04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277d08: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x277d08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x277d0c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x277d0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277d10: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x277d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x277d14: 0xc04b414  jal         func_12D050
    ctx->pc = 0x277D14u;
    SET_GPR_U32(ctx, 31, 0x277D1Cu);
    ctx->pc = 0x277D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277D14u;
            // 0x277d18: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277D1Cu; }
        if (ctx->pc != 0x277D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277D1Cu; }
        if (ctx->pc != 0x277D1Cu) { return; }
    }
    ctx->pc = 0x277D1Cu;
label_277d1c:
    // 0x277d1c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x277D1Cu;
    {
        const bool branch_taken_0x277d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x277d1c) {
            ctx->pc = 0x277D2Cu;
            goto label_277d2c;
        }
    }
    ctx->pc = 0x277D24u;
    // 0x277d24: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x277D24u;
    {
        const bool branch_taken_0x277d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277D24u;
            // 0x277d28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277d24) {
            ctx->pc = 0x277D50u;
            goto label_277d50;
        }
    }
    ctx->pc = 0x277D2Cu;
label_277d2c:
    // 0x277d2c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x277d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x277d30: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x277d30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277d34: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x277d34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277d38: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x277d38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277d3c: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x277d3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277d40: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x277d40u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277d44: 0xc0bd720  jal         func_2F5C80
    ctx->pc = 0x277D44u;
    SET_GPR_U32(ctx, 31, 0x277D4Cu);
    ctx->pc = 0x277D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277D44u;
            // 0x277d48: 0x260502d  daddu       $t2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5C80u;
    if (runtime->hasFunction(0x2F5C80u)) {
        auto targetFn = runtime->lookupFunction(0x2F5C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277D4Cu; }
        if (ctx->pc != 0x277D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTexture__17CSWordAfterEffectFiP10mgCTextureiiii_0x2f5c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277D4Cu; }
        if (ctx->pc != 0x277D4Cu) { return; }
    }
    ctx->pc = 0x277D4Cu;
label_277d4c:
    // 0x277d4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x277d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_277d50:
    // 0x277d50: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x277d50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x277d54: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x277d54u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x277d58: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x277d58u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x277d5c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x277d5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x277d60: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x277d60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x277d64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x277d64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277d68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x277d68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x277d6c: 0x3e00008  jr          $ra
    ctx->pc = 0x277D6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277D6Cu;
            // 0x277d70: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x277D74u;
}
