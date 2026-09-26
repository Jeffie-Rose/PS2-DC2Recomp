#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPT_GET_POS__FP12RS_STACKDATAi
// Address: 0x2e5bc0 - 0x2e5c40
void ps2__SPT_GET_POS__FP12RS_STACKDATAi_0x2e5bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPT_GET_POS__FP12RS_STACKDATAi_0x2e5bc0");
#endif

    switch (ctx->pc) {
        case 0x2e5be4u: goto label_2e5be4;
        case 0x2e5bf0u: goto label_2e5bf0;
        case 0x2e5c10u: goto label_2e5c10;
        case 0x2e5c20u: goto label_2e5c20;
        case 0x2e5c2cu: goto label_2e5c2c;
        default: break;
    }

    ctx->pc = 0x2e5bc0u;

    // 0x2e5bc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e5bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e5bc4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2e5bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e5bc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e5bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e5bcc: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5BCCu;
    {
        const bool branch_taken_0x2e5bcc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E5BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5BCCu;
            // 0x2e5bd0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5bcc) {
            ctx->pc = 0x2E5BDCu;
            goto label_2e5bdc;
        }
    }
    ctx->pc = 0x2E5BD4u;
    // 0x2e5bd4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2E5BD4u;
    {
        const bool branch_taken_0x2e5bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5BD4u;
            // 0x2e5bd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5bd4) {
            ctx->pc = 0x2E5C30u;
            goto label_2e5c30;
        }
    }
    ctx->pc = 0x2E5BDCu;
label_2e5bdc:
    // 0x2e5bdc: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E5BDCu;
    SET_GPR_U32(ctx, 31, 0x2E5BE4u);
    ctx->pc = 0x2E5BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5BDCu;
            // 0x2e5be0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5BE4u; }
        if (ctx->pc != 0x2E5BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5BE4u; }
        if (ctx->pc != 0x2E5BE4u) { return; }
    }
    ctx->pc = 0x2E5BE4u;
label_2e5be4:
    // 0x2e5be4: 0x8f849ed0  lw          $a0, -0x6130($gp)
    ctx->pc = 0x2e5be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e5be8: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2E5BE8u;
    SET_GPR_U32(ctx, 31, 0x2E5BF0u);
    ctx->pc = 0x2E5BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5BE8u;
            // 0x2e5bec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (runtime->hasFunction(0x2E3240u)) {
        auto targetFn = runtime->lookupFunction(0x2E3240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5BF0u; }
        if (ctx->pc != 0x2E5BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSpritePtr__FP11_EFF_SCRIPTi_0x2e3240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5BF0u; }
        if (ctx->pc != 0x2E5BF0u) { return; }
    }
    ctx->pc = 0x2E5BF0u;
label_2e5bf0:
    // 0x2e5bf0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5BF0u;
    {
        const bool branch_taken_0x2e5bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e5bf0) {
            ctx->pc = 0x2E5C00u;
            goto label_2e5c00;
        }
    }
    ctx->pc = 0x2E5BF8u;
    // 0x2e5bf8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2E5BF8u;
    {
        const bool branch_taken_0x2e5bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5BF8u;
            // 0x2e5bfc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5bf8) {
            ctx->pc = 0x2E5C30u;
            goto label_2e5c30;
        }
    }
    ctx->pc = 0x2E5C00u;
label_2e5c00:
    // 0x2e5c00: 0xc44c0010  lwc1        $f12, 0x10($v0)
    ctx->pc = 0x2e5c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e5c04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e5c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5c08: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E5C08u;
    SET_GPR_U32(ctx, 31, 0x2E5C10u);
    ctx->pc = 0x2E5C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5C08u;
            // 0x2e5c0c: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5C10u; }
        if (ctx->pc != 0x2E5C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5C10u; }
        if (ctx->pc != 0x2E5C10u) { return; }
    }
    ctx->pc = 0x2E5C10u;
label_2e5c10:
    // 0x2e5c10: 0xc44c0014  lwc1        $f12, 0x14($v0)
    ctx->pc = 0x2e5c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e5c14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e5c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5c18: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E5C18u;
    SET_GPR_U32(ctx, 31, 0x2E5C20u);
    ctx->pc = 0x2E5C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5C18u;
            // 0x2e5c1c: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5C20u; }
        if (ctx->pc != 0x2E5C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5C20u; }
        if (ctx->pc != 0x2E5C20u) { return; }
    }
    ctx->pc = 0x2E5C20u;
label_2e5c20:
    // 0x2e5c20: 0xc44c0018  lwc1        $f12, 0x18($v0)
    ctx->pc = 0x2e5c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e5c24: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E5C24u;
    SET_GPR_U32(ctx, 31, 0x2E5C2Cu);
    ctx->pc = 0x2E5C28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5C24u;
            // 0x2e5c28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5C2Cu; }
        if (ctx->pc != 0x2E5C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5C2Cu; }
        if (ctx->pc != 0x2E5C2Cu) { return; }
    }
    ctx->pc = 0x2E5C2Cu;
label_2e5c2c:
    // 0x2e5c2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e5c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e5c30:
    // 0x2e5c30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e5c30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5c34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e5c34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e5c38: 0x3e00008  jr          $ra
    ctx->pc = 0x2E5C38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E5C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5C38u;
            // 0x2e5c3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E5C40u;
}
