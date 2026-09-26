#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckMoney__5CShopFv
// Address: 0x291a30 - 0x291ac8
void CheckMoney__5CShopFv_0x291a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckMoney__5CShopFv_0x291a30");
#endif

    switch (ctx->pc) {
        case 0x291a4cu: goto label_291a4c;
        case 0x291a6cu: goto label_291a6c;
        case 0x291a74u: goto label_291a74;
        case 0x291a8cu: goto label_291a8c;
        case 0x291a94u: goto label_291a94;
        case 0x291aacu: goto label_291aac;
        default: break;
    }

    ctx->pc = 0x291a30u;

    // 0x291a30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x291a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x291a34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x291a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x291a38: 0x8783983c  lh          $v1, -0x67C4($gp)
    ctx->pc = 0x291a38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940732)));
    // 0x291a3c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x291A3Cu;
    {
        const bool branch_taken_0x291a3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x291A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291A3Cu;
            // 0x291a40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291a3c) {
            ctx->pc = 0x291A5Cu;
            goto label_291a5c;
        }
    }
    ctx->pc = 0x291A44u;
    // 0x291a44: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x291A44u;
    SET_GPR_U32(ctx, 31, 0x291A4Cu);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291A4Cu; }
        if (ctx->pc != 0x291A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291A4Cu; }
        if (ctx->pc != 0x291A4Cu) { return; }
    }
    ctx->pc = 0x291A4Cu;
label_291a4c:
    // 0x291a4c: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x291a4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x291a50: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x291a50u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x291a54: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x291A54u;
    {
        const bool branch_taken_0x291a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291A54u;
            // 0x291a58: 0x8c224d9c  lw          $v0, 0x4D9C($at) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19868)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291a54) {
            ctx->pc = 0x291ABCu;
            goto label_291abc;
        }
    }
    ctx->pc = 0x291A5Cu;
label_291a5c:
    // 0x291a5c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x291A5Cu;
    {
        const bool branch_taken_0x291a5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x291A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291A5Cu;
            // 0x291a60: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291a5c) {
            ctx->pc = 0x291A7Cu;
            goto label_291a7c;
        }
    }
    ctx->pc = 0x291A64u;
    // 0x291a64: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x291A64u;
    SET_GPR_U32(ctx, 31, 0x291A6Cu);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291A6Cu; }
        if (ctx->pc != 0x291A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291A6Cu; }
        if (ctx->pc != 0x291A6Cu) { return; }
    }
    ctx->pc = 0x291A6Cu;
label_291a6c:
    // 0x291a6c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x291A6Cu;
    SET_GPR_U32(ctx, 31, 0x291A74u);
    ctx->pc = 0x291A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291A6Cu;
            // 0x291a70: 0xc44c468c  lwc1        $f12, 0x468C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 18060)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291A74u; }
        if (ctx->pc != 0x291A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291A74u; }
        if (ctx->pc != 0x291A74u) { return; }
    }
    ctx->pc = 0x291A74u;
label_291a74:
    // 0x291a74: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x291A74u;
    {
        const bool branch_taken_0x291a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291A74u;
            // 0x291a78: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291a74) {
            ctx->pc = 0x291AC0u;
            goto label_291ac0;
        }
    }
    ctx->pc = 0x291A7Cu;
label_291a7c:
    // 0x291a7c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x291A7Cu;
    {
        const bool branch_taken_0x291a7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x291A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291A7Cu;
            // 0x291a80: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291a7c) {
            ctx->pc = 0x291A9Cu;
            goto label_291a9c;
        }
    }
    ctx->pc = 0x291A84u;
    // 0x291a84: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x291A84u;
    SET_GPR_U32(ctx, 31, 0x291A8Cu);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291A8Cu; }
        if (ctx->pc != 0x291A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291A8Cu; }
        if (ctx->pc != 0x291A8Cu) { return; }
    }
    ctx->pc = 0x291A8Cu;
label_291a8c:
    // 0x291a8c: 0xc0677f8  jal         func_19DFE0
    ctx->pc = 0x291A8Cu;
    SET_GPR_U32(ctx, 31, 0x291A94u);
    ctx->pc = 0x291A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291A8Cu;
            // 0x291a90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19DFE0u;
    if (runtime->hasFunction(0x19DFE0u)) {
        auto targetFn = runtime->lookupFunction(0x19DFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291A94u; }
        if (ctx->pc != 0x291A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetYarikomiMedal__16CUserDataManagerFv_0x19dfe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291A94u; }
        if (ctx->pc != 0x291A94u) { return; }
    }
    ctx->pc = 0x291A94u;
label_291a94:
    // 0x291a94: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x291A94u;
    {
        const bool branch_taken_0x291a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x291a94) {
            ctx->pc = 0x291ABCu;
            goto label_291abc;
        }
    }
    ctx->pc = 0x291A9Cu;
label_291a9c:
    // 0x291a9c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x291A9Cu;
    {
        const bool branch_taken_0x291a9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x291AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291A9Cu;
            // 0x291aa0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291a9c) {
            ctx->pc = 0x291ABCu;
            goto label_291abc;
        }
    }
    ctx->pc = 0x291AA4u;
    // 0x291aa4: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x291AA4u;
    SET_GPR_U32(ctx, 31, 0x291AACu);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291AACu; }
        if (ctx->pc != 0x291AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291AACu; }
        if (ctx->pc != 0x291AACu) { return; }
    }
    ctx->pc = 0x291AACu;
label_291aac:
    // 0x291aac: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x291aacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x291ab0: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x291ab0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x291ab4: 0x8c224d9c  lw          $v0, 0x4D9C($at)
    ctx->pc = 0x291ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19868)));
    // 0x291ab8: 0x0  nop
    ctx->pc = 0x291ab8u;
    // NOP
label_291abc:
    // 0x291abc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x291abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_291ac0:
    // 0x291ac0: 0x3e00008  jr          $ra
    ctx->pc = 0x291AC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291AC0u;
            // 0x291ac4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x291AC8u;
}
