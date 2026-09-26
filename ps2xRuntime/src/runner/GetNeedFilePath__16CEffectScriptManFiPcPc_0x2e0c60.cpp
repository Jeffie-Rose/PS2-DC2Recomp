#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetNeedFilePath__16CEffectScriptManFiPcPc
// Address: 0x2e0c60 - 0x2e0d10
void GetNeedFilePath__16CEffectScriptManFiPcPc_0x2e0c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetNeedFilePath__16CEffectScriptManFiPcPc_0x2e0c60");
#endif

    switch (ctx->pc) {
        case 0x2e0c84u: goto label_2e0c84;
        case 0x2e0cc8u: goto label_2e0cc8;
        case 0x2e0ce0u: goto label_2e0ce0;
        case 0x2e0cf4u: goto label_2e0cf4;
        default: break;
    }

    ctx->pc = 0x2e0c60u;

    // 0x2e0c60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e0c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e0c64: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2e0c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0c68: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e0c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2e0c6c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e0c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e0c70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e0c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e0c74: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2e0c74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0c78: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2e0c78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0c7c: 0xc0b8b24  jal         func_2E2C90
    ctx->pc = 0x2E0C7Cu;
    SET_GPR_U32(ctx, 31, 0x2E0C84u);
    ctx->pc = 0x2E0C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0C7Cu;
            // 0x2e0c80: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2C90u;
    if (runtime->hasFunction(0x2E2C90u)) {
        auto targetFn = runtime->lookupFunction(0x2E2C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0C84u; }
        if (ctx->pc != 0x2E0C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEffSptBaseDefPtr__Fi_0x2e2c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0C84u; }
        if (ctx->pc != 0x2E0C84u) { return; }
    }
    ctx->pc = 0x2E0C84u;
label_2e0c84:
    // 0x2e0c84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e0c84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0c88: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E0C88u;
    {
        const bool branch_taken_0x2e0c88 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0C88u;
            // 0x2e0c8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0c88) {
            ctx->pc = 0x2E0C98u;
            goto label_2e0c98;
        }
    }
    ctx->pc = 0x2E0C90u;
    // 0x2e0c90: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2E0C90u;
    {
        const bool branch_taken_0x2e0c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0C90u;
            // 0x2e0c94: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0c90) {
            ctx->pc = 0x2E0CFCu;
            goto label_2e0cfc;
        }
    }
    ctx->pc = 0x2E0C98u;
label_2e0c98:
    // 0x2e0c98: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x2e0c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2e0c9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e0c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e0ca0: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E0CA0u;
    {
        const bool branch_taken_0x2e0ca0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E0CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0CA0u;
            // 0x2e0ca4: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0ca0) {
            ctx->pc = 0x2E0CD0u;
            goto label_2e0cd0;
        }
    }
    ctx->pc = 0x2E0CA8u;
    // 0x2e0ca8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E0CA8u;
    {
        const bool branch_taken_0x2e0ca8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0CA8u;
            // 0x2e0cac: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0ca8) {
            ctx->pc = 0x2E0CB8u;
            goto label_2e0cb8;
        }
    }
    ctx->pc = 0x2E0CB0u;
    // 0x2e0cb0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E0CB0u;
    {
        const bool branch_taken_0x2e0cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0cb0) {
            ctx->pc = 0x2E0CE0u;
            goto label_2e0ce0;
        }
    }
    ctx->pc = 0x2E0CB8u;
label_2e0cb8:
    // 0x2e0cb8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e0cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0cbc: 0x24a51110  addiu       $a1, $a1, 0x1110
    ctx->pc = 0x2e0cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4368));
    // 0x2e0cc0: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2E0CC0u;
    SET_GPR_U32(ctx, 31, 0x2E0CC8u);
    ctx->pc = 0x2E0CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0CC0u;
            // 0x2e0cc4: 0x26060024  addiu       $a2, $s0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0CC8u; }
        if (ctx->pc != 0x2E0CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0CC8u; }
        if (ctx->pc != 0x2E0CC8u) { return; }
    }
    ctx->pc = 0x2E0CC8u;
label_2e0cc8:
    // 0x2e0cc8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0CC8u;
    {
        const bool branch_taken_0x2e0cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0cc8) {
            ctx->pc = 0x2E0CE0u;
            goto label_2e0ce0;
        }
    }
    ctx->pc = 0x2E0CD0u;
label_2e0cd0:
    // 0x2e0cd0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e0cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0cd4: 0x24a51130  addiu       $a1, $a1, 0x1130
    ctx->pc = 0x2e0cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4400));
    // 0x2e0cd8: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2E0CD8u;
    SET_GPR_U32(ctx, 31, 0x2E0CE0u);
    ctx->pc = 0x2E0CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0CD8u;
            // 0x2e0cdc: 0x26060024  addiu       $a2, $s0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0CE0u; }
        if (ctx->pc != 0x2E0CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0CE0u; }
        if (ctx->pc != 0x2E0CE0u) { return; }
    }
    ctx->pc = 0x2E0CE0u;
label_2e0ce0:
    // 0x2e0ce0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2e0ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2e0ce4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e0ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0ce8: 0x26060044  addiu       $a2, $s0, 0x44
    ctx->pc = 0x2e0ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x2e0cec: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2E0CECu;
    SET_GPR_U32(ctx, 31, 0x2E0CF4u);
    ctx->pc = 0x2E0CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0CECu;
            // 0x2e0cf0: 0x24a51150  addiu       $a1, $a1, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0CF4u; }
        if (ctx->pc != 0x2E0CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0CF4u; }
        if (ctx->pc != 0x2E0CF4u) { return; }
    }
    ctx->pc = 0x2E0CF4u;
label_2e0cf4:
    // 0x2e0cf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e0cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e0cf8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e0cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2e0cfc:
    // 0x2e0cfc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e0cfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e0d00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e0d00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0d04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e0d04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0d08: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0D08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0D08u;
            // 0x2e0d0c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E0D10u;
}
