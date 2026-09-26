#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPT_SET_VELO_POS__FP12RS_STACKDATAi
// Address: 0x2e6940 - 0x2e69ec
void ps2__SPT_SET_VELO_POS__FP12RS_STACKDATAi_0x2e6940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPT_SET_VELO_POS__FP12RS_STACKDATAi_0x2e6940");
#endif

    switch (ctx->pc) {
        case 0x2e6968u: goto label_2e6968;
        case 0x2e6978u: goto label_2e6978;
        case 0x2e6990u: goto label_2e6990;
        case 0x2e699cu: goto label_2e699c;
        case 0x2e69a4u: goto label_2e69a4;
        default: break;
    }

    ctx->pc = 0x2e6940u;

    // 0x2e6940: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e6940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2e6944: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2e6944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2e6948: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e6948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e694c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e694cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e6950: 0x24930008  addiu       $s3, $a0, 0x8
    ctx->pc = 0x2e6950u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2e6954: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e6954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e6958: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2e6958u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e695c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e695cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e6960: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E6960u;
    SET_GPR_U32(ctx, 31, 0x2E6968u);
    ctx->pc = 0x2E6964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6960u;
            // 0x2e6964: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6968u; }
        if (ctx->pc != 0x2E6968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6968u; }
        if (ctx->pc != 0x2E6968u) { return; }
    }
    ctx->pc = 0x2E6968u;
label_2e6968:
    // 0x2e6968: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e6968u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e696c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2e696cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e6970: 0xc0b8cbc  jal         func_2E32F0
    ctx->pc = 0x2E6970u;
    SET_GPR_U32(ctx, 31, 0x2E6978u);
    ctx->pc = 0x2E6974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6970u;
            // 0x2e6974: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32F0u;
    if (runtime->hasFunction(0x2E32F0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6978u; }
        if (ctx->pc != 0x2E6978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x2e32f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6978u; }
        if (ctx->pc != 0x2E6978u) { return; }
    }
    ctx->pc = 0x2E6978u;
label_2e6978:
    // 0x2e6978: 0x2a420005  slti        $v0, $s2, 0x5
    ctx->pc = 0x2e6978u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2e697c: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x2e697cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x2e6980: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E6980u;
    {
        const bool branch_taken_0x2e6980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6980u;
            // 0x2e6984: 0x26730018  addiu       $s3, $s3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6980) {
            ctx->pc = 0x2E6994u;
            goto label_2e6994;
        }
    }
    ctx->pc = 0x2E6988u;
    // 0x2e6988: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E6988u;
    SET_GPR_U32(ctx, 31, 0x2E6990u);
    ctx->pc = 0x2E698Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6988u;
            // 0x2e698c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6990u; }
        if (ctx->pc != 0x2E6990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6990u; }
        if (ctx->pc != 0x2E6990u) { return; }
    }
    ctx->pc = 0x2E6990u;
label_2e6990:
    // 0x2e6990: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e6990u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e6994:
    // 0x2e6994: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E6994u;
    {
        const bool branch_taken_0x2e6994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6994u;
            // 0x2e6998: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6994) {
            ctx->pc = 0x2E69C0u;
            goto label_2e69c0;
        }
    }
    ctx->pc = 0x2E699Cu;
label_2e699c:
    // 0x2e699c: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2E699Cu;
    SET_GPR_U32(ctx, 31, 0x2E69A4u);
    ctx->pc = 0x2E69A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E699Cu;
            // 0x2e69a0: 0x8f849ed0  lw          $a0, -0x6130($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (runtime->hasFunction(0x2E3240u)) {
        auto targetFn = runtime->lookupFunction(0x2E3240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E69A4u; }
        if (ctx->pc != 0x2E69A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSpritePtr__FP11_EFF_SCRIPTi_0x2e3240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E69A4u; }
        if (ctx->pc != 0x2E69A4u) { return; }
    }
    ctx->pc = 0x2E69A4u;
label_2e69a4:
    // 0x2e69a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E69A4u;
    {
        const bool branch_taken_0x2e69a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E69A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E69A4u;
            // 0x2e69a8: 0x27a30050  addiu       $v1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e69a4) {
            ctx->pc = 0x2E69B4u;
            goto label_2e69b4;
        }
    }
    ctx->pc = 0x2E69ACu;
    // 0x2e69ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E69ACu;
    {
        const bool branch_taken_0x2e69ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E69B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E69ACu;
            // 0x2e69b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e69ac) {
            ctx->pc = 0x2E69D0u;
            goto label_2e69d0;
        }
    }
    ctx->pc = 0x2E69B4u;
label_2e69b4:
    // 0x2e69b4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2e69b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2e69b8: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x2e69b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e69bc: 0x7c430060  sq          $v1, 0x60($v0)
    ctx->pc = 0x2e69bcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 96), GPR_VEC(ctx, 3));
label_2e69c0:
    // 0x2e69c0: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x2e69c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2e69c4: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2e69c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e69c8: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2E69C8u;
    {
        const bool branch_taken_0x2e69c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E69CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E69C8u;
            // 0x2e69cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e69c8) {
            ctx->pc = 0x2E699Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e699c;
        }
    }
    ctx->pc = 0x2E69D0u;
label_2e69d0:
    // 0x2e69d0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2e69d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e69d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e69d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e69d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e69d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e69dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e69dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e69e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e69e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e69e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E69E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E69E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E69E4u;
            // 0x2e69e8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E69ECu;
}
