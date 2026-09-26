#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _LOAD_SCRIPT__FP12RS_STACKDATAi
// Address: 0x2669d0 - 0x266a40
void ps2__LOAD_SCRIPT__FP12RS_STACKDATAi_0x2669d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__LOAD_SCRIPT__FP12RS_STACKDATAi_0x2669d0");
#endif

    switch (ctx->pc) {
        case 0x2669e8u: goto label_2669e8;
        case 0x2669f4u: goto label_2669f4;
        case 0x266a14u: goto label_266a14;
        default: break;
    }

    ctx->pc = 0x2669d0u;

    // 0x2669d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2669d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2669d4: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x2669d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2669d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2669d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2669dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2669dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2669e0: 0xc097e48  jal         func_25F920
    ctx->pc = 0x2669E0u;
    SET_GPR_U32(ctx, 31, 0x2669E8u);
    ctx->pc = 0x2669E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2669E0u;
            // 0x2669e4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2669E8u; }
        if (ctx->pc != 0x2669E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2669E8u; }
        if (ctx->pc != 0x2669E8u) { return; }
    }
    ctx->pc = 0x2669E8u;
label_2669e8:
    // 0x2669e8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2669e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2669ec: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2669ECu;
    SET_GPR_U32(ctx, 31, 0x2669F4u);
    ctx->pc = 0x2669F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2669ECu;
            // 0x2669f0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2669F4u; }
        if (ctx->pc != 0x2669F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2669F4u; }
        if (ctx->pc != 0x2669F4u) { return; }
    }
    ctx->pc = 0x2669F4u;
label_2669f4:
    // 0x2669f4: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2669F4u;
    {
        const bool branch_taken_0x2669f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2669F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2669F4u;
            // 0x2669f8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2669f4) {
            ctx->pc = 0x266A04u;
            goto label_266a04;
        }
    }
    ctx->pc = 0x2669FCu;
    // 0x2669fc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2669FCu;
    {
        const bool branch_taken_0x2669fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2669FCu;
            // 0x266a00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2669fc) {
            ctx->pc = 0x266A2Cu;
            goto label_266a2c;
        }
    }
    ctx->pc = 0x266A04u;
label_266a04:
    // 0x266a04: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x266a04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x266a08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x266a08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266a0c: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x266A0Cu;
    SET_GPR_U32(ctx, 31, 0x266A14u);
    ctx->pc = 0x266A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266A0Cu;
            // 0x266a10: 0x2484e4bc  addiu       $a0, $a0, -0x1B44 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960316));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266A14u; }
        if (ctx->pc != 0x266A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266A14u; }
        if (ctx->pc != 0x266A14u) { return; }
    }
    ctx->pc = 0x266A14u;
label_266a14:
    // 0x266a14: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x266a14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x266a18: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x266a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x266a1c: 0xac31e4b8  sw          $s1, -0x1B48($at)
    ctx->pc = 0x266a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960312), GPR_U32(ctx, 17));
    // 0x266a20: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x266a20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x266a24: 0xac22e4fc  sw          $v0, -0x1B04($at)
    ctx->pc = 0x266a24u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960380), GPR_U32(ctx, 2));
    // 0x266a28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x266a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_266a2c:
    // 0x266a2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x266a2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x266a30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x266a30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x266a34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x266a34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x266a38: 0x3e00008  jr          $ra
    ctx->pc = 0x266A38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266A38u;
            // 0x266a3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x266A40u;
}
