#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_MES_VALUE__FP12RS_STACKDATAi
// Address: 0x26d0b0 - 0x26d12c
void ps2__SET_MES_VALUE__FP12RS_STACKDATAi_0x26d0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_MES_VALUE__FP12RS_STACKDATAi_0x26d0b0");
#endif

    switch (ctx->pc) {
        case 0x26d0c8u: goto label_26d0c8;
        case 0x26d0d0u: goto label_26d0d0;
        case 0x26d0ecu: goto label_26d0ec;
        case 0x26d0f8u: goto label_26d0f8;
        default: break;
    }

    ctx->pc = 0x26d0b0u;

    // 0x26d0b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26d0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26d0b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26d0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26d0b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26d0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26d0bc: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x26d0bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x26d0c0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26D0C0u;
    SET_GPR_U32(ctx, 31, 0x26D0C8u);
    ctx->pc = 0x26D0C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D0C0u;
            // 0x26d0c4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D0C8u; }
        if (ctx->pc != 0x26D0C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D0C8u; }
        if (ctx->pc != 0x26D0C8u) { return; }
    }
    ctx->pc = 0x26D0C8u;
label_26d0c8:
    // 0x26d0c8: 0xc09b1b4  jal         func_26C6D0
    ctx->pc = 0x26D0C8u;
    SET_GPR_U32(ctx, 31, 0x26D0D0u);
    ctx->pc = 0x26D0CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D0C8u;
            // 0x26d0cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C6D0u;
    if (runtime->hasFunction(0x26C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x26C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D0D0u; }
        if (ctx->pc != 0x26D0D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMes__Fi_0x26c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D0D0u; }
        if (ctx->pc != 0x26D0D0u) { return; }
    }
    ctx->pc = 0x26D0D0u;
label_26d0d0:
    // 0x26d0d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26d0d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d0d4: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26D0D4u;
    {
        const bool branch_taken_0x26d0d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D0D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D0D4u;
            // 0x26d0d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d0d4) {
            ctx->pc = 0x26D0E4u;
            goto label_26d0e4;
        }
    }
    ctx->pc = 0x26D0DCu;
    // 0x26d0dc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x26D0DCu;
    {
        const bool branch_taken_0x26d0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D0E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D0DCu;
            // 0x26d0e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d0dc) {
            ctx->pc = 0x26D118u;
            goto label_26d118;
        }
    }
    ctx->pc = 0x26D0E4u;
label_26d0e4:
    // 0x26d0e4: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26D0E4u;
    SET_GPR_U32(ctx, 31, 0x26D0ECu);
    ctx->pc = 0x26D0E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D0E4u;
            // 0x26d0e8: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D0ECu; }
        if (ctx->pc != 0x26D0ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D0ECu; }
        if (ctx->pc != 0x26D0ECu) { return; }
    }
    ctx->pc = 0x26D0ECu;
label_26d0ec:
    // 0x26d0ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26d0ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d0f0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26D0F0u;
    SET_GPR_U32(ctx, 31, 0x26D0F8u);
    ctx->pc = 0x26D0F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D0F0u;
            // 0x26d0f4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D0F8u; }
        if (ctx->pc != 0x26D0F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D0F8u; }
        if (ctx->pc != 0x26D0F8u) { return; }
    }
    ctx->pc = 0x26D0F8u;
label_26d0f8:
    // 0x26d0f8: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26D0F8u;
    {
        const bool branch_taken_0x26d0f8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D0FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D0F8u;
            // 0x26d0fc: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d0f8) {
            ctx->pc = 0x26D108u;
            goto label_26d108;
        }
    }
    ctx->pc = 0x26D100u;
    // 0x26d100: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26D100u;
    {
        const bool branch_taken_0x26d100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D100u;
            // 0x26d104: 0xae021ac4  sw          $v0, 0x1AC4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6852), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d100) {
            ctx->pc = 0x26D114u;
            goto label_26d114;
        }
    }
    ctx->pc = 0x26D108u;
label_26d108:
    // 0x26d108: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x26d108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x26d10c: 0xac621a40  sw          $v0, 0x1A40($v1)
    ctx->pc = 0x26d10cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6720), GPR_U32(ctx, 2));
    // 0x26d110: 0xac601a80  sw          $zero, 0x1A80($v1)
    ctx->pc = 0x26d110u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6784), GPR_U32(ctx, 0));
label_26d114:
    // 0x26d114: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26d114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26d118:
    // 0x26d118: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26d118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26d11c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26d11cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26d120: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26d120u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26d124: 0x3e00008  jr          $ra
    ctx->pc = 0x26D124u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26D128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D124u;
            // 0x26d128: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26D12Cu;
}
