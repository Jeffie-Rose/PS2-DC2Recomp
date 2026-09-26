#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _EOH_GET_POS__FP12RS_STACKDATAi
// Address: 0x274bf0 - 0x274c5c
void ps2__EOH_GET_POS__FP12RS_STACKDATAi_0x274bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__EOH_GET_POS__FP12RS_STACKDATAi_0x274bf0");
#endif

    switch (ctx->pc) {
        case 0x274c04u: goto label_274c04;
        case 0x274c18u: goto label_274c18;
        case 0x274c30u: goto label_274c30;
        case 0x274c40u: goto label_274c40;
        case 0x274c4cu: goto label_274c4c;
        default: break;
    }

    ctx->pc = 0x274bf0u;

    // 0x274bf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x274bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x274bf4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x274bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x274bf8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x274bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x274bfc: 0xc097e18  jal         func_25F860
    ctx->pc = 0x274BFCu;
    SET_GPR_U32(ctx, 31, 0x274C04u);
    ctx->pc = 0x274C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274BFCu;
            // 0x274c00: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274C04u; }
        if (ctx->pc != 0x274C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274C04u; }
        if (ctx->pc != 0x274C04u) { return; }
    }
    ctx->pc = 0x274C04u;
label_274c04:
    // 0x274c04: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x274c04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x274c08: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x274c08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274c0c: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x274c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
    // 0x274c10: 0xc097808  jal         func_25E020
    ctx->pc = 0x274C10u;
    SET_GPR_U32(ctx, 31, 0x274C18u);
    ctx->pc = 0x274C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274C10u;
            // 0x274c14: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25E020u;
    if (runtime->hasFunction(0x25E020u)) {
        auto targetFn = runtime->lookupFunction(0x25E020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274C18u; }
        if (ctx->pc != 0x274C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPos__10CEohMotherFiPf_0x25e020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274C18u; }
        if (ctx->pc != 0x274C18u) { return; }
    }
    ctx->pc = 0x274C18u;
label_274c18:
    // 0x274c18: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x274C18u;
    {
        const bool branch_taken_0x274c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x274c18) {
            ctx->pc = 0x274C4Cu;
            goto label_274c4c;
        }
    }
    ctx->pc = 0x274C20u;
    // 0x274c20: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x274c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x274c24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x274c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274c28: 0xc097e54  jal         func_25F950
    ctx->pc = 0x274C28u;
    SET_GPR_U32(ctx, 31, 0x274C30u);
    ctx->pc = 0x274C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274C28u;
            // 0x274c2c: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274C30u; }
        if (ctx->pc != 0x274C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274C30u; }
        if (ctx->pc != 0x274C30u) { return; }
    }
    ctx->pc = 0x274C30u;
label_274c30:
    // 0x274c30: 0xc7ac0024  lwc1        $f12, 0x24($sp)
    ctx->pc = 0x274c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x274c34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x274c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274c38: 0xc097e54  jal         func_25F950
    ctx->pc = 0x274C38u;
    SET_GPR_U32(ctx, 31, 0x274C40u);
    ctx->pc = 0x274C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274C38u;
            // 0x274c3c: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274C40u; }
        if (ctx->pc != 0x274C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274C40u; }
        if (ctx->pc != 0x274C40u) { return; }
    }
    ctx->pc = 0x274C40u;
label_274c40:
    // 0x274c40: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x274c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x274c44: 0xc097e54  jal         func_25F950
    ctx->pc = 0x274C44u;
    SET_GPR_U32(ctx, 31, 0x274C4Cu);
    ctx->pc = 0x274C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274C44u;
            // 0x274c48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274C4Cu; }
        if (ctx->pc != 0x274C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274C4Cu; }
        if (ctx->pc != 0x274C4Cu) { return; }
    }
    ctx->pc = 0x274C4Cu;
label_274c4c:
    // 0x274c4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x274c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274c50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x274c50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x274c54: 0x3e00008  jr          $ra
    ctx->pc = 0x274C54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274C54u;
            // 0x274c58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x274C5Cu;
}
