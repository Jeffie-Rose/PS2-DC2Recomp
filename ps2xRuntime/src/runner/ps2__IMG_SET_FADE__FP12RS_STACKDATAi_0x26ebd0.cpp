#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _IMG_SET_FADE__FP12RS_STACKDATAi
// Address: 0x26ebd0 - 0x26ec30
void ps2__IMG_SET_FADE__FP12RS_STACKDATAi_0x26ebd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__IMG_SET_FADE__FP12RS_STACKDATAi_0x26ebd0");
#endif

    switch (ctx->pc) {
        case 0x26ebe8u: goto label_26ebe8;
        case 0x26ebf8u: goto label_26ebf8;
        case 0x26ec04u: goto label_26ec04;
        case 0x26ec1cu: goto label_26ec1c;
        default: break;
    }

    ctx->pc = 0x26ebd0u;

    // 0x26ebd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26ebd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26ebd4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26ebd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26ebd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26ebd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26ebdc: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x26ebdcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x26ebe0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26EBE0u;
    SET_GPR_U32(ctx, 31, 0x26EBE8u);
    ctx->pc = 0x26EBE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26EBE0u;
            // 0x26ebe4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EBE8u; }
        if (ctx->pc != 0x26EBE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EBE8u; }
        if (ctx->pc != 0x26EBE8u) { return; }
    }
    ctx->pc = 0x26EBE8u;
label_26ebe8:
    // 0x26ebe8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26ebe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ebec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26ebecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ebf0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26EBF0u;
    SET_GPR_U32(ctx, 31, 0x26EBF8u);
    ctx->pc = 0x26EBF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26EBF0u;
            // 0x26ebf4: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EBF8u; }
        if (ctx->pc != 0x26EBF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EBF8u; }
        if (ctx->pc != 0x26EBF8u) { return; }
    }
    ctx->pc = 0x26EBF8u;
label_26ebf8:
    // 0x26ebf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26ebf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ebfc: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26EBFCu;
    SET_GPR_U32(ctx, 31, 0x26EC04u);
    ctx->pc = 0x26EC00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26EBFCu;
            // 0x26ec00: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EC04u; }
        if (ctx->pc != 0x26EC04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EC04u; }
        if (ctx->pc != 0x26EC04u) { return; }
    }
    ctx->pc = 0x26EC04u;
label_26ec04:
    // 0x26ec04: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x26ec04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x26ec08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26ec08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ec0c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x26ec0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ec10: 0x2484ea80  addiu       $a0, $a0, -0x1580
    ctx->pc = 0x26ec10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961792));
    // 0x26ec14: 0xc0a4200  jal         func_290800
    ctx->pc = 0x26EC14u;
    SET_GPR_U32(ctx, 31, 0x26EC1Cu);
    ctx->pc = 0x26EC18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26EC14u;
            // 0x26ec18: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x290800u;
    if (runtime->hasFunction(0x290800u)) {
        auto targetFn = runtime->lookupFunction(0x290800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EC1Cu; }
        if (ctx->pc != 0x26EC1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFade__18CEventSpriteMotherFiii_0x290800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EC1Cu; }
        if (ctx->pc != 0x26EC1Cu) { return; }
    }
    ctx->pc = 0x26EC1Cu;
label_26ec1c:
    // 0x26ec1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26ec1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26ec20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26ec20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26ec24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26ec24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26ec28: 0x3e00008  jr          $ra
    ctx->pc = 0x26EC28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26EC2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26EC28u;
            // 0x26ec2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26EC30u;
}
