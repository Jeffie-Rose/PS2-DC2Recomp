#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadSkyPack__FP12MAP_SKY_INFOPci
// Address: 0x183c60 - 0x183ce0
void LoadSkyPack__FP12MAP_SKY_INFOPci_0x183c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadSkyPack__FP12MAP_SKY_INFOPci_0x183c60");
#endif

    switch (ctx->pc) {
        case 0x183ca4u: goto label_183ca4;
        case 0x183cb4u: goto label_183cb4;
        case 0x183cc4u: goto label_183cc4;
        case 0x183cccu: goto label_183ccc;
        default: break;
    }

    ctx->pc = 0x183c60u;

    // 0x183c60: 0x27bdf100  addiu       $sp, $sp, -0xF00
    ctx->pc = 0x183c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294963456));
    // 0x183c64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x183c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x183c68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x183c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x183c6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x183c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x183c70: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x183c70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183c74: 0xaf848a64  sw          $a0, -0x759C($gp)
    ctx->pc = 0x183c74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937188), GPR_U32(ctx, 4));
    // 0x183c78: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x183c78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183c7c: 0xaf808a68  sw          $zero, -0x7598($gp)
    ctx->pc = 0x183c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937192), GPR_U32(ctx, 0));
    // 0x183c80: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x183C80u;
    {
        const bool branch_taken_0x183c80 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x183C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183C80u;
            // 0x183c84: 0xaf808a6c  sw          $zero, -0x7594($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183c80) {
            ctx->pc = 0x183CCCu;
            goto label_183ccc;
        }
    }
    ctx->pc = 0x183C88u;
    // 0x183c88: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x183C88u;
    {
        const bool branch_taken_0x183c88 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x183C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183C88u;
            // 0x183c8c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183c88) {
            ctx->pc = 0x183C9Cu;
            goto label_183c9c;
        }
    }
    ctx->pc = 0x183C90u;
    // 0x183c90: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x183C90u;
    {
        const bool branch_taken_0x183c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183C90u;
            // 0x183c94: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183c90) {
            ctx->pc = 0x183CD0u;
            goto label_183cd0;
        }
    }
    ctx->pc = 0x183C98u;
    // 0x183c98: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x183c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_183c9c:
    // 0x183c9c: 0xc051a7c  jal         func_1469F0
    ctx->pc = 0x183C9Cu;
    SET_GPR_U32(ctx, 31, 0x183CA4u);
    ctx->pc = 0x1469F0u;
    if (runtime->hasFunction(0x1469F0u)) {
        auto targetFn = runtime->lookupFunction(0x1469F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183CA4u; }
        if (ctx->pc != 0x183CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__18CScriptInterpreterFv_0x1469f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183CA4u; }
        if (ctx->pc != 0x183CA4u) { return; }
    }
    ctx->pc = 0x183CA4u;
label_183ca4:
    // 0x183ca4: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x183ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x183ca8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x183ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x183cac: 0xc0519ec  jal         func_1467B0
    ctx->pc = 0x183CACu;
    SET_GPR_U32(ctx, 31, 0x183CB4u);
    ctx->pc = 0x183CB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183CACu;
            // 0x183cb0: 0x24a550c0  addiu       $a1, $a1, 0x50C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1467B0u;
    if (runtime->hasFunction(0x1467B0u)) {
        auto targetFn = runtime->lookupFunction(0x1467B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183CB4u; }
        if (ctx->pc != 0x183CB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTag__18CScriptInterpreterFP13SPI_TAG_PARAM_0x1467b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183CB4u; }
        if (ctx->pc != 0x183CB4u) { return; }
    }
    ctx->pc = 0x183CB4u;
label_183cb4:
    // 0x183cb4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x183cb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183cb8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x183cb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183cbc: 0xc051a60  jal         func_146980
    ctx->pc = 0x183CBCu;
    SET_GPR_U32(ctx, 31, 0x183CC4u);
    ctx->pc = 0x183CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183CBCu;
            // 0x183cc0: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146980u;
    if (runtime->hasFunction(0x146980u)) {
        auto targetFn = runtime->lookupFunction(0x146980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183CC4u; }
        if (ctx->pc != 0x183CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScript__18CScriptInterpreterFPci_0x146980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183CC4u; }
        if (ctx->pc != 0x183CC4u) { return; }
    }
    ctx->pc = 0x183CC4u;
label_183cc4:
    // 0x183cc4: 0xc0519c8  jal         func_146720
    ctx->pc = 0x183CC4u;
    SET_GPR_U32(ctx, 31, 0x183CCCu);
    ctx->pc = 0x183CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183CC4u;
            // 0x183cc8: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146720u;
    if (runtime->hasFunction(0x146720u)) {
        auto targetFn = runtime->lookupFunction(0x146720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183CCCu; }
        if (ctx->pc != 0x183CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Run__18CScriptInterpreterFv_0x146720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183CCCu; }
        if (ctx->pc != 0x183CCCu) { return; }
    }
    ctx->pc = 0x183CCCu;
label_183ccc:
    // 0x183ccc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x183cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_183cd0:
    // 0x183cd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x183cd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183cd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x183cd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183cd8: 0x3e00008  jr          $ra
    ctx->pc = 0x183CD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183CD8u;
            // 0x183cdc: 0x27bd0f00  addiu       $sp, $sp, 0xF00 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3840));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x183CE0u;
}
