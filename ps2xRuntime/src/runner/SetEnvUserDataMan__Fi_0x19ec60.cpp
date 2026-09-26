#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetEnvUserDataMan__Fi
// Address: 0x19ec60 - 0x19ece0
void SetEnvUserDataMan__Fi_0x19ec60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetEnvUserDataMan__Fi_0x19ec60");
#endif

    switch (ctx->pc) {
        case 0x19ec78u: goto label_19ec78;
        case 0x19ec88u: goto label_19ec88;
        case 0x19ec94u: goto label_19ec94;
        case 0x19eca0u: goto label_19eca0;
        case 0x19ecb4u: goto label_19ecb4;
        case 0x19ecc0u: goto label_19ecc0;
        case 0x19ecccu: goto label_19eccc;
        default: break;
    }

    ctx->pc = 0x19ec60u;

    // 0x19ec60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19ec60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19ec64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19ec64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19ec68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19ec68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19ec6c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19ec6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ec70: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x19EC70u;
    SET_GPR_U32(ctx, 31, 0x19EC78u);
    ctx->pc = 0x19EC74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EC70u;
            // 0x19ec74: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EC78u; }
        if (ctx->pc != 0x19EC78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EC78u; }
        if (ctx->pc != 0x19EC78u) { return; }
    }
    ctx->pc = 0x19EC78u;
label_19ec78:
    // 0x19ec78: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x19EC78u;
    {
        const bool branch_taken_0x19ec78 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x19EC7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19EC78u;
            // 0x19ec7c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ec78) {
            ctx->pc = 0x19ECA0u;
            goto label_19eca0;
        }
    }
    ctx->pc = 0x19EC80u;
    // 0x19ec80: 0xc066fd8  jal         func_19BF60
    ctx->pc = 0x19EC80u;
    SET_GPR_U32(ctx, 31, 0x19EC88u);
    ctx->pc = 0x19EC84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EC80u;
            // 0x19ec84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BF60u;
    if (runtime->hasFunction(0x19BF60u)) {
        auto targetFn = runtime->lookupFunction(0x19BF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EC88u; }
        if (ctx->pc != 0x19EC88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitCharaChangeMask__16CUserDataManagerFv_0x19bf60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EC88u; }
        if (ctx->pc != 0x19EC88u) { return; }
    }
    ctx->pc = 0x19EC88u;
label_19ec88:
    // 0x19ec88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ec88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ec8c: 0xc066ebc  jal         func_19BAF0
    ctx->pc = 0x19EC8Cu;
    SET_GPR_U32(ctx, 31, 0x19EC94u);
    ctx->pc = 0x19EC90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EC8Cu;
            // 0x19ec90: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BAF0u;
    if (runtime->hasFunction(0x19BAF0u)) {
        auto targetFn = runtime->lookupFunction(0x19BAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EC94u; }
        if (ctx->pc != 0x19EC94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DisableCharaChange__16CUserDataManagerFi_0x19baf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EC94u; }
        if (ctx->pc != 0x19EC94u) { return; }
    }
    ctx->pc = 0x19EC94u;
label_19ec94:
    // 0x19ec94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ec94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ec98: 0xc066ebc  jal         func_19BAF0
    ctx->pc = 0x19EC98u;
    SET_GPR_U32(ctx, 31, 0x19ECA0u);
    ctx->pc = 0x19EC9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EC98u;
            // 0x19ec9c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BAF0u;
    if (runtime->hasFunction(0x19BAF0u)) {
        auto targetFn = runtime->lookupFunction(0x19BAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19ECA0u; }
        if (ctx->pc != 0x19ECA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DisableCharaChange__16CUserDataManagerFi_0x19baf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19ECA0u; }
        if (ctx->pc != 0x19ECA0u) { return; }
    }
    ctx->pc = 0x19ECA0u;
label_19eca0:
    // 0x19eca0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19eca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19eca4: 0x16230009  bne         $s1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x19ECA4u;
    {
        const bool branch_taken_0x19eca4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x19ECA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19ECA4u;
            // 0x19eca8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eca4) {
            ctx->pc = 0x19ECCCu;
            goto label_19eccc;
        }
    }
    ctx->pc = 0x19ECACu;
    // 0x19ecac: 0xc066fd8  jal         func_19BF60
    ctx->pc = 0x19ECACu;
    SET_GPR_U32(ctx, 31, 0x19ECB4u);
    ctx->pc = 0x19BF60u;
    if (runtime->hasFunction(0x19BF60u)) {
        auto targetFn = runtime->lookupFunction(0x19BF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19ECB4u; }
        if (ctx->pc != 0x19ECB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitCharaChangeMask__16CUserDataManagerFv_0x19bf60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19ECB4u; }
        if (ctx->pc != 0x19ECB4u) { return; }
    }
    ctx->pc = 0x19ECB4u;
label_19ecb4:
    // 0x19ecb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ecb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ecb8: 0xc066ea8  jal         func_19BAA0
    ctx->pc = 0x19ECB8u;
    SET_GPR_U32(ctx, 31, 0x19ECC0u);
    ctx->pc = 0x19ECBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19ECB8u;
            // 0x19ecbc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BAA0u;
    if (runtime->hasFunction(0x19BAA0u)) {
        auto targetFn = runtime->lookupFunction(0x19BAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19ECC0u; }
        if (ctx->pc != 0x19ECC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnableCharaChange__16CUserDataManagerFi_0x19baa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19ECC0u; }
        if (ctx->pc != 0x19ECC0u) { return; }
    }
    ctx->pc = 0x19ECC0u;
label_19ecc0:
    // 0x19ecc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ecc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ecc4: 0xc066ea8  jal         func_19BAA0
    ctx->pc = 0x19ECC4u;
    SET_GPR_U32(ctx, 31, 0x19ECCCu);
    ctx->pc = 0x19ECC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19ECC4u;
            // 0x19ecc8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BAA0u;
    if (runtime->hasFunction(0x19BAA0u)) {
        auto targetFn = runtime->lookupFunction(0x19BAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19ECCCu; }
        if (ctx->pc != 0x19ECCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnableCharaChange__16CUserDataManagerFi_0x19baa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19ECCCu; }
        if (ctx->pc != 0x19ECCCu) { return; }
    }
    ctx->pc = 0x19ECCCu;
label_19eccc:
    // 0x19eccc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19ecccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19ecd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19ecd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ecd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19ecd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ecd8: 0x3e00008  jr          $ra
    ctx->pc = 0x19ECD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19ECDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19ECD8u;
            // 0x19ecdc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19ECE0u;
}
