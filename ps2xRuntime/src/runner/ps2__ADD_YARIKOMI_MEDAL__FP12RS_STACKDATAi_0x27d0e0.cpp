#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ADD_YARIKOMI_MEDAL__FP12RS_STACKDATAi
// Address: 0x27d0e0 - 0x27d14c
void ps2__ADD_YARIKOMI_MEDAL__FP12RS_STACKDATAi_0x27d0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ADD_YARIKOMI_MEDAL__FP12RS_STACKDATAi_0x27d0e0");
#endif

    switch (ctx->pc) {
        case 0x27d0f8u: goto label_27d0f8;
        case 0x27d128u: goto label_27d128;
        case 0x27d134u: goto label_27d134;
        default: break;
    }

    ctx->pc = 0x27d0e0u;

    // 0x27d0e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27d0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27d0e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x27d0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x27d0e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27d0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27d0ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27d0ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d0f0: 0xc064220  jal         func_190880
    ctx->pc = 0x27D0F0u;
    SET_GPR_U32(ctx, 31, 0x27D0F8u);
    ctx->pc = 0x27D0F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D0F0u;
            // 0x27d0f4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D0F8u; }
        if (ctx->pc != 0x27D0F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D0F8u; }
        if (ctx->pc != 0x27D0F8u) { return; }
    }
    ctx->pc = 0x27D0F8u;
label_27d0f8:
    // 0x27d0f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27D0F8u;
    {
        const bool branch_taken_0x27d0f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D0FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D0F8u;
            // 0x27d0fc: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d0f8) {
            ctx->pc = 0x27D108u;
            goto label_27d108;
        }
    }
    ctx->pc = 0x27D100u;
    // 0x27d100: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x27D100u;
    {
        const bool branch_taken_0x27d100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D100u;
            // 0x27d104: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d100) {
            ctx->pc = 0x27D138u;
            goto label_27d138;
        }
    }
    ctx->pc = 0x27D108u;
label_27d108:
    // 0x27d108: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x27d108u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
    // 0x27d10c: 0x418021  addu        $s0, $v0, $at
    ctx->pc = 0x27d10cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x27d110: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27D110u;
    {
        const bool branch_taken_0x27d110 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D110u;
            // 0x27d114: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d110) {
            ctx->pc = 0x27D120u;
            goto label_27d120;
        }
    }
    ctx->pc = 0x27D118u;
    // 0x27d118: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x27D118u;
    {
        const bool branch_taken_0x27d118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D11Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D118u;
            // 0x27d11c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d118) {
            ctx->pc = 0x27D138u;
            goto label_27d138;
        }
    }
    ctx->pc = 0x27D120u;
label_27d120:
    // 0x27d120: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27D120u;
    SET_GPR_U32(ctx, 31, 0x27D128u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D128u; }
        if (ctx->pc != 0x27D128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D128u; }
        if (ctx->pc != 0x27D128u) { return; }
    }
    ctx->pc = 0x27D128u;
label_27d128:
    // 0x27d128: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27d128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d12c: 0xc0677dc  jal         func_19DF70
    ctx->pc = 0x27D12Cu;
    SET_GPR_U32(ctx, 31, 0x27D134u);
    ctx->pc = 0x27D130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D12Cu;
            // 0x27d130: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19DF70u;
    if (runtime->hasFunction(0x19DF70u)) {
        auto targetFn = runtime->lookupFunction(0x19DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D134u; }
        if (ctx->pc != 0x27D134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddYarikomiMedal__16CUserDataManagerFi_0x19df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D134u; }
        if (ctx->pc != 0x27D134u) { return; }
    }
    ctx->pc = 0x27D134u;
label_27d134:
    // 0x27d134: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27d134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27d138:
    // 0x27d138: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x27d138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27d13c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27d13cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27d140: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27d140u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27d144: 0x3e00008  jr          $ra
    ctx->pc = 0x27D144u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D144u;
            // 0x27d148: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27D14Cu;
}
