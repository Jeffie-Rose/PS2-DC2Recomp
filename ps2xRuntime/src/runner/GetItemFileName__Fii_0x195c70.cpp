#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetItemFileName__Fii
// Address: 0x195c70 - 0x195d3c
void GetItemFileName__Fii_0x195c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetItemFileName__Fii_0x195c70");
#endif

    switch (ctx->pc) {
        case 0x195c88u: goto label_195c88;
        case 0x195cb4u: goto label_195cb4;
        case 0x195cbcu: goto label_195cbc;
        case 0x195ce0u: goto label_195ce0;
        case 0x195cf8u: goto label_195cf8;
        case 0x195d20u: goto label_195d20;
        default: break;
    }

    ctx->pc = 0x195c70u;

    // 0x195c70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x195c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x195c74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x195c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x195c78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x195c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x195c7c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x195c7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195c80: 0xc065708  jal         func_195C20
    ctx->pc = 0x195C80u;
    SET_GPR_U32(ctx, 31, 0x195C88u);
    ctx->pc = 0x195C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195C80u;
            // 0x195c84: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195C20u;
    if (runtime->hasFunction(0x195C20u)) {
        auto targetFn = runtime->lookupFunction(0x195C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195C88u; }
        if (ctx->pc != 0x195C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCommonItemData__Fi_0x195c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195C88u; }
        if (ctx->pc != 0x195C88u) { return; }
    }
    ctx->pc = 0x195C88u;
label_195c88:
    // 0x195c88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x195c88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195c8c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x195C8Cu;
    {
        const bool branch_taken_0x195c8c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x195C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195C8Cu;
            // 0x195c90: 0x2605000c  addiu       $a1, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195c8c) {
            ctx->pc = 0x195C9Cu;
            goto label_195c9c;
        }
    }
    ctx->pc = 0x195C94u;
    // 0x195c94: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x195C94u;
    {
        const bool branch_taken_0x195c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195C94u;
            // 0x195c98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195c94) {
            ctx->pc = 0x195D28u;
            goto label_195d28;
        }
    }
    ctx->pc = 0x195C9Cu;
label_195c9c:
    // 0x195c9c: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x195C9Cu;
    {
        const bool branch_taken_0x195c9c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x195CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195C9Cu;
            // 0x195ca0: 0x3c0401e7  lui         $a0, 0x1E7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)487 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195c9c) {
            ctx->pc = 0x195CACu;
            goto label_195cac;
        }
    }
    ctx->pc = 0x195CA4u;
    // 0x195ca4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x195CA4u;
    {
        const bool branch_taken_0x195ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195CA4u;
            // 0x195ca8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195ca4) {
            ctx->pc = 0x195D28u;
            goto label_195d28;
        }
    }
    ctx->pc = 0x195CACu;
label_195cac:
    // 0x195cac: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x195CACu;
    SET_GPR_U32(ctx, 31, 0x195CB4u);
    ctx->pc = 0x195CB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195CACu;
            // 0x195cb0: 0x24844170  addiu       $a0, $a0, 0x4170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16752));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195CB4u; }
        if (ctx->pc != 0x195CB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195CB4u; }
        if (ctx->pc != 0x195CB4u) { return; }
    }
    ctx->pc = 0x195CB4u;
label_195cb4:
    // 0x195cb4: 0xc064220  jal         func_190880
    ctx->pc = 0x195CB4u;
    SET_GPR_U32(ctx, 31, 0x195CBCu);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195CBCu; }
        if (ctx->pc != 0x195CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195CBCu; }
        if (ctx->pc != 0x195CBCu) { return; }
    }
    ctx->pc = 0x195CBCu;
label_195cbc:
    // 0x195cbc: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x195cbcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x195cc0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x195cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x195cc4: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x195CC4u;
    {
        const bool branch_taken_0x195cc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x195CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195CC4u;
            // 0x195cc8: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195cc4) {
            ctx->pc = 0x195CD4u;
            goto label_195cd4;
        }
    }
    ctx->pc = 0x195CCCu;
    // 0x195ccc: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x195CCCu;
    {
        const bool branch_taken_0x195ccc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x195ccc) {
            ctx->pc = 0x195CF8u;
            goto label_195cf8;
        }
    }
    ctx->pc = 0x195CD4u;
label_195cd4:
    // 0x195cd4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x195cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195cd8: 0xc0bd920  jal         func_2F6480
    ctx->pc = 0x195CD8u;
    SET_GPR_U32(ctx, 31, 0x195CE0u);
    ctx->pc = 0x195CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195CD8u;
            // 0x195cdc: 0x2405031f  addiu       $a1, $zero, 0x31F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 799));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6480u;
    if (runtime->hasFunction(0x2F6480u)) {
        auto targetFn = runtime->lookupFunction(0x2F6480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195CE0u; }
        if (ctx->pc != 0x195CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBitFlag__9CSaveDataFi_0x2f6480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195CE0u; }
        if (ctx->pc != 0x195CE0u) { return; }
    }
    ctx->pc = 0x195CE0u;
label_195ce0:
    // 0x195ce0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x195CE0u;
    {
        const bool branch_taken_0x195ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x195CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195CE0u;
            // 0x195ce4: 0x3c0401e7  lui         $a0, 0x1E7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)487 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195ce0) {
            ctx->pc = 0x195CF8u;
            goto label_195cf8;
        }
    }
    ctx->pc = 0x195CE8u;
    // 0x195ce8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x195ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x195cec: 0x24844170  addiu       $a0, $a0, 0x4170
    ctx->pc = 0x195cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16752));
    // 0x195cf0: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x195CF0u;
    SET_GPR_U32(ctx, 31, 0x195CF8u);
    ctx->pc = 0x195CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195CF0u;
            // 0x195cf4: 0x24a55460  addiu       $a1, $a1, 0x5460 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195CF8u; }
        if (ctx->pc != 0x195CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195CF8u; }
        if (ctx->pc != 0x195CF8u) { return; }
    }
    ctx->pc = 0x195CF8u;
label_195cf8:
    // 0x195cf8: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x195CF8u;
    {
        const bool branch_taken_0x195cf8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x195cf8) {
            ctx->pc = 0x195D20u;
            goto label_195d20;
        }
    }
    ctx->pc = 0x195D00u;
    // 0x195d00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x195d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x195d04: 0x16220006  bne         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x195D04u;
    {
        const bool branch_taken_0x195d04 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x195d04) {
            ctx->pc = 0x195D20u;
            goto label_195d20;
        }
    }
    ctx->pc = 0x195D0Cu;
    // 0x195d0c: 0x3c0401e7  lui         $a0, 0x1E7
    ctx->pc = 0x195d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)487 << 16));
    // 0x195d10: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x195d10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x195d14: 0x24844170  addiu       $a0, $a0, 0x4170
    ctx->pc = 0x195d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16752));
    // 0x195d18: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x195D18u;
    SET_GPR_U32(ctx, 31, 0x195D20u);
    ctx->pc = 0x195D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195D18u;
            // 0x195d1c: 0x24a55468  addiu       $a1, $a1, 0x5468 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195D20u; }
        if (ctx->pc != 0x195D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195D20u; }
        if (ctx->pc != 0x195D20u) { return; }
    }
    ctx->pc = 0x195D20u;
label_195d20:
    // 0x195d20: 0x3c0201e7  lui         $v0, 0x1E7
    ctx->pc = 0x195d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)487 << 16));
    // 0x195d24: 0x24424170  addiu       $v0, $v0, 0x4170
    ctx->pc = 0x195d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16752));
label_195d28:
    // 0x195d28: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x195d28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195d2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x195d2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195d30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x195d30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195d34: 0x3e00008  jr          $ra
    ctx->pc = 0x195D34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195D34u;
            // 0x195d38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x195D3Cu;
}
