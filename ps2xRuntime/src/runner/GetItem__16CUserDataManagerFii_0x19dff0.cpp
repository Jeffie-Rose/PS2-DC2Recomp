#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetItem__16CUserDataManagerFii
// Address: 0x19dff0 - 0x19e0b4
void GetItem__16CUserDataManagerFii_0x19dff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetItem__16CUserDataManagerFii_0x19dff0");
#endif

    switch (ctx->pc) {
        case 0x19e01cu: goto label_19e01c;
        case 0x19e02cu: goto label_19e02c;
        case 0x19e054u: goto label_19e054;
        case 0x19e080u: goto label_19e080;
        case 0x19e090u: goto label_19e090;
        default: break;
    }

    ctx->pc = 0x19dff0u;

    // 0x19dff0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x19dff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x19dff4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x19dff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x19dff8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x19dff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x19dffc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19dffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x19e000: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19e000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19e004: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19e004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19e008: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x19e008u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e00c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19e00cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19e010: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19e010u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e014: 0xc067830  jal         func_19E0C0
    ctx->pc = 0x19E014u;
    SET_GPR_U32(ctx, 31, 0x19E01Cu);
    ctx->pc = 0x19E018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E014u;
            // 0x19e018: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19E0C0u;
    if (runtime->hasFunction(0x19E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x19E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E01Cu; }
        if (ctx->pc != 0x19E01Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemNotOver__16CUserDataManagerFii_0x19e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E01Cu; }
        if (ctx->pc != 0x19E01Cu) { return; }
    }
    ctx->pc = 0x19E01Cu;
label_19e01c:
    // 0x19e01c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x19e01cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e020: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19e020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e024: 0xc065708  jal         func_195C20
    ctx->pc = 0x19E024u;
    SET_GPR_U32(ctx, 31, 0x19E02Cu);
    ctx->pc = 0x19E028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E024u;
            // 0x19e028: 0x253a023  subu        $s4, $s2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195C20u;
    if (runtime->hasFunction(0x195C20u)) {
        auto targetFn = runtime->lookupFunction(0x195C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E02Cu; }
        if (ctx->pc != 0x19E02Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCommonItemData__Fi_0x195c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E02Cu; }
        if (ctx->pc != 0x19E02Cu) { return; }
    }
    ctx->pc = 0x19E02Cu;
label_19e02c:
    // 0x19e02c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x19E02Cu;
    {
        const bool branch_taken_0x19e02c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e02c) {
            ctx->pc = 0x19E068u;
            goto label_19e068;
        }
    }
    ctx->pc = 0x19E034u;
    // 0x19e034: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x19e034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x19e038: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x19e038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x19e03c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x19E03Cu;
    {
        const bool branch_taken_0x19e03c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e03c) {
            ctx->pc = 0x19E068u;
            goto label_19e068;
        }
    }
    ctx->pc = 0x19E044u;
    // 0x19e044: 0x9452000a  lhu         $s2, 0xA($v0)
    ctx->pc = 0x19e044u;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x19e048: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19e048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e04c: 0xc067778  jal         func_19DDE0
    ctx->pc = 0x19E04Cu;
    SET_GPR_U32(ctx, 31, 0x19E054u);
    ctx->pc = 0x19E050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E04Cu;
            // 0x19e050: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19DDE0u;
    if (runtime->hasFunction(0x19DDE0u)) {
        auto targetFn = runtime->lookupFunction(0x19DDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E054u; }
        if (ctx->pc != 0x19E054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNumSameItem__16CUserDataManagerFi_0x19dde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E054u; }
        if (ctx->pc != 0x19E054u) { return; }
    }
    ctx->pc = 0x19E054u;
label_19e054:
    // 0x19e054: 0x52082a  slt         $at, $v0, $s2
    ctx->pc = 0x19e054u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x19e058: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x19E058u;
    {
        const bool branch_taken_0x19e058 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E05Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E058u;
            // 0x19e05c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e058) {
            ctx->pc = 0x19E068u;
            goto label_19e068;
        }
    }
    ctx->pc = 0x19E060u;
    // 0x19e060: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x19E060u;
    {
        const bool branch_taken_0x19e060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E060u;
            // 0x19e064: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e060) {
            ctx->pc = 0x19E098u;
            goto label_19e098;
        }
    }
    ctx->pc = 0x19E068u;
label_19e068:
    // 0x19e068: 0x1a80000a  blez        $s4, . + 4 + (0xA << 2)
    ctx->pc = 0x19E068u;
    {
        const bool branch_taken_0x19e068 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x19E06Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E068u;
            // 0x19e06c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e068) {
            ctx->pc = 0x19E094u;
            goto label_19e094;
        }
    }
    ctx->pc = 0x19E070u;
    // 0x19e070: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x19e070u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x19e074: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x19e074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e078: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x19E078u;
    SET_GPR_U32(ctx, 31, 0x19E080u);
    ctx->pc = 0x19E07Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E078u;
            // 0x19e07c: 0x248459f0  addiu       $a0, $a0, 0x59F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E080u; }
        if (ctx->pc != 0x19E080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E080u; }
        if (ctx->pc != 0x19E080u) { return; }
    }
    ctx->pc = 0x19E080u;
label_19e080:
    // 0x19e080: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19e080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e084: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19e084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e088: 0xc0678fc  jal         func_19E3F0
    ctx->pc = 0x19E088u;
    SET_GPR_U32(ctx, 31, 0x19E090u);
    ctx->pc = 0x19E08Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E088u;
            // 0x19e08c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19E3F0u;
    if (runtime->hasFunction(0x19E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x19E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E090u; }
        if (ctx->pc != 0x19E090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetOverItem__16CUserDataManagerFii_0x19e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E090u; }
        if (ctx->pc != 0x19E090u) { return; }
    }
    ctx->pc = 0x19E090u;
label_19e090:
    // 0x19e090: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x19e090u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19e094:
    // 0x19e094: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x19e094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_19e098:
    // 0x19e098: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x19e098u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19e09c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19e09cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19e0a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19e0a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19e0a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19e0a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e0a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19e0a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e0ac: 0x3e00008  jr          $ra
    ctx->pc = 0x19E0ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E0B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E0ACu;
            // 0x19e0b0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19E0B4u;
}
