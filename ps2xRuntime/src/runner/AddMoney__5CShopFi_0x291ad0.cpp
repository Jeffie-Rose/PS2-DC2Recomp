#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AddMoney__5CShopFi
// Address: 0x291ad0 - 0x291b7c
void AddMoney__5CShopFi_0x291ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddMoney__5CShopFi_0x291ad0");
#endif

    switch (ctx->pc) {
        case 0x291af0u: goto label_291af0;
        case 0x291afcu: goto label_291afc;
        case 0x291b18u: goto label_291b18;
        case 0x291b28u: goto label_291b28;
        case 0x291b30u: goto label_291b30;
        case 0x291b48u: goto label_291b48;
        case 0x291b54u: goto label_291b54;
        default: break;
    }

    ctx->pc = 0x291ad0u;

    // 0x291ad0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x291ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x291ad4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x291ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x291ad8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x291ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x291adc: 0x8783983c  lh          $v1, -0x67C4($gp)
    ctx->pc = 0x291adcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940732)));
    // 0x291ae0: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x291AE0u;
    {
        const bool branch_taken_0x291ae0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x291AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291AE0u;
            // 0x291ae4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291ae0) {
            ctx->pc = 0x291B04u;
            goto label_291b04;
        }
    }
    ctx->pc = 0x291AE8u;
    // 0x291ae8: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x291AE8u;
    SET_GPR_U32(ctx, 31, 0x291AF0u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291AF0u; }
        if (ctx->pc != 0x291AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291AF0u; }
        if (ctx->pc != 0x291AF0u) { return; }
    }
    ctx->pc = 0x291AF0u;
label_291af0:
    // 0x291af0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x291af0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291af4: 0xc067abc  jal         func_19EAF0
    ctx->pc = 0x291AF4u;
    SET_GPR_U32(ctx, 31, 0x291AFCu);
    ctx->pc = 0x291AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291AF4u;
            // 0x291af8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19EAF0u;
    if (runtime->hasFunction(0x19EAF0u)) {
        auto targetFn = runtime->lookupFunction(0x19EAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291AFCu; }
        if (ctx->pc != 0x291AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddMoney__16CUserDataManagerFi_0x19eaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291AFCu; }
        if (ctx->pc != 0x291AFCu) { return; }
    }
    ctx->pc = 0x291AFCu;
label_291afc:
    // 0x291afc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x291AFCu;
    {
        const bool branch_taken_0x291afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291AFCu;
            // 0x291b00: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291afc) {
            ctx->pc = 0x291B70u;
            goto label_291b70;
        }
    }
    ctx->pc = 0x291B04u;
label_291b04:
    // 0x291b04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x291b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x291b08: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x291B08u;
    {
        const bool branch_taken_0x291b08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x291B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291B08u;
            // 0x291b0c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291b08) {
            ctx->pc = 0x291B38u;
            goto label_291b38;
        }
    }
    ctx->pc = 0x291B10u;
    // 0x291b10: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x291B10u;
    SET_GPR_U32(ctx, 31, 0x291B18u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291B18u; }
        if (ctx->pc != 0x291B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291B18u; }
        if (ctx->pc != 0x291B18u) { return; }
    }
    ctx->pc = 0x291B18u;
label_291b18:
    // 0x291b18: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x291b18u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x291b1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x291b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291b20: 0xc067140  jal         func_19C500
    ctx->pc = 0x291B20u;
    SET_GPR_U32(ctx, 31, 0x291B28u);
    ctx->pc = 0x291B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291B20u;
            // 0x291b24: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C500u;
    if (runtime->hasFunction(0x19C500u)) {
        auto targetFn = runtime->lookupFunction(0x19C500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291B28u; }
        if (ctx->pc != 0x291B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddRoboAbs__16CUserDataManagerFf_0x19c500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291B28u; }
        if (ctx->pc != 0x291B28u) { return; }
    }
    ctx->pc = 0x291B28u;
label_291b28:
    // 0x291b28: 0xc0a248c  jal         func_289230
    ctx->pc = 0x291B28u;
    SET_GPR_U32(ctx, 31, 0x291B30u);
    ctx->pc = 0x291B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291B28u;
            // 0x291b2c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291B30u; }
        if (ctx->pc != 0x291B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291B30u; }
        if (ctx->pc != 0x291B30u) { return; }
    }
    ctx->pc = 0x291B30u;
label_291b30:
    // 0x291b30: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x291B30u;
    {
        const bool branch_taken_0x291b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x291b30) {
            ctx->pc = 0x291B6Cu;
            goto label_291b6c;
        }
    }
    ctx->pc = 0x291B38u;
label_291b38:
    // 0x291b38: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x291B38u;
    {
        const bool branch_taken_0x291b38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x291B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291B38u;
            // 0x291b3c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291b38) {
            ctx->pc = 0x291B5Cu;
            goto label_291b5c;
        }
    }
    ctx->pc = 0x291B40u;
    // 0x291b40: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x291B40u;
    SET_GPR_U32(ctx, 31, 0x291B48u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291B48u; }
        if (ctx->pc != 0x291B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291B48u; }
        if (ctx->pc != 0x291B48u) { return; }
    }
    ctx->pc = 0x291B48u;
label_291b48:
    // 0x291b48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x291b48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291b4c: 0xc0677dc  jal         func_19DF70
    ctx->pc = 0x291B4Cu;
    SET_GPR_U32(ctx, 31, 0x291B54u);
    ctx->pc = 0x291B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291B4Cu;
            // 0x291b50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19DF70u;
    if (runtime->hasFunction(0x19DF70u)) {
        auto targetFn = runtime->lookupFunction(0x19DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291B54u; }
        if (ctx->pc != 0x291B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddYarikomiMedal__16CUserDataManagerFi_0x19df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291B54u; }
        if (ctx->pc != 0x291B54u) { return; }
    }
    ctx->pc = 0x291B54u;
label_291b54:
    // 0x291b54: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x291B54u;
    {
        const bool branch_taken_0x291b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x291b54) {
            ctx->pc = 0x291B6Cu;
            goto label_291b6c;
        }
    }
    ctx->pc = 0x291B5Cu;
label_291b5c:
    // 0x291b5c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x291B5Cu;
    {
        const bool branch_taken_0x291b5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x291B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291B5Cu;
            // 0x291b60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291b5c) {
            ctx->pc = 0x291B6Cu;
            goto label_291b6c;
        }
    }
    ctx->pc = 0x291B64u;
    // 0x291b64: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x291B64u;
    {
        const bool branch_taken_0x291b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291B64u;
            // 0x291b68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291b64) {
            ctx->pc = 0x291B6Cu;
            goto label_291b6c;
        }
    }
    ctx->pc = 0x291B6Cu;
label_291b6c:
    // 0x291b6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x291b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_291b70:
    // 0x291b70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x291b70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291b74: 0x3e00008  jr          $ra
    ctx->pc = 0x291B74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291B74u;
            // 0x291b78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x291B7Cu;
}
