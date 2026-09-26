#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DeleteMonsterEffect__Fv
// Address: 0x2b0190 - 0x2b01e4
void DeleteMonsterEffect__Fv_0x2b0190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DeleteMonsterEffect__Fv_0x2b0190");
#endif

    switch (ctx->pc) {
        case 0x2b01acu: goto label_2b01ac;
        case 0x2b01c8u: goto label_2b01c8;
        case 0x2b01d8u: goto label_2b01d8;
        default: break;
    }

    ctx->pc = 0x2b0190u;

    // 0x2b0190: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b0190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b0194: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b0194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b0198: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x2b0198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
    // 0x2b019c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2B019Cu;
    {
        const bool branch_taken_0x2b019c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B01A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B019Cu;
            // 0x2b01a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b019c) {
            ctx->pc = 0x2B01C8u;
            goto label_2b01c8;
        }
    }
    ctx->pc = 0x2B01A4u;
    // 0x2b01a4: 0xc0b84b4  jal         func_2E12D0
    ctx->pc = 0x2B01A4u;
    SET_GPR_U32(ctx, 31, 0x2B01ACu);
    ctx->pc = 0x2E12D0u;
    if (runtime->hasFunction(0x2E12D0u)) {
        auto targetFn = runtime->lookupFunction(0x2E12D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B01ACu; }
        if (ctx->pc != 0x2B01ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ClearEffectFromChrid__16CEffectScriptManFi_0x2e12d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B01ACu; }
        if (ctx->pc != 0x2B01ACu) { return; }
    }
    ctx->pc = 0x2B01ACu;
label_2b01ac:
    // 0x2b01ac: 0x8f828ddc  lw          $v0, -0x7224($gp)
    ctx->pc = 0x2b01acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
    // 0x2b01b0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2b01b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b01b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b01b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b01b8: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x2b01b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
    // 0x2b01bc: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x2b01bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
    // 0x2b01c0: 0xc0b8054  jal         func_2E0150
    ctx->pc = 0x2B01C0u;
    SET_GPR_U32(ctx, 31, 0x2B01C8u);
    ctx->pc = 0x2B01C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B01C0u;
            // 0x2b01c4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0150u;
    if (runtime->hasFunction(0x2E0150u)) {
        auto targetFn = runtime->lookupFunction(0x2E0150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B01C8u; }
        if (ctx->pc != 0x2B01C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ClearBaseFromLevel__16CEffectScriptManFiPii_0x2e0150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B01C8u; }
        if (ctx->pc != 0x2B01C8u) { return; }
    }
    ctx->pc = 0x2B01C8u;
label_2b01c8:
    // 0x2b01c8: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2b01c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x2b01cc: 0x240500aa  addiu       $a1, $zero, 0xAA
    ctx->pc = 0x2b01ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
    // 0x2b01d0: 0xc04b950  jal         func_12E540
    ctx->pc = 0x2B01D0u;
    SET_GPR_U32(ctx, 31, 0x2B01D8u);
    ctx->pc = 0x2B01D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B01D0u;
            // 0x2b01d4: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B01D8u; }
        if (ctx->pc != 0x2B01D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B01D8u; }
        if (ctx->pc != 0x2B01D8u) { return; }
    }
    ctx->pc = 0x2B01D8u;
label_2b01d8:
    // 0x2b01d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b01d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b01dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B01DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B01E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B01DCu;
            // 0x2b01e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B01E4u;
}
