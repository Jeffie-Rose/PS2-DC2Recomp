#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MES_CLOSE__FP12RS_STACKDATAi
// Address: 0x26c8b0 - 0x26c918
void ps2__MES_CLOSE__FP12RS_STACKDATAi_0x26c8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MES_CLOSE__FP12RS_STACKDATAi_0x26c8b0");
#endif

    switch (ctx->pc) {
        case 0x26c8c0u: goto label_26c8c0;
        case 0x26c8c8u: goto label_26c8c8;
        case 0x26c8e4u: goto label_26c8e4;
        default: break;
    }

    ctx->pc = 0x26c8b0u;

    // 0x26c8b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26c8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26c8b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26c8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26c8b8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26C8B8u;
    SET_GPR_U32(ctx, 31, 0x26C8C0u);
    ctx->pc = 0x26C8BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C8B8u;
            // 0x26c8bc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C8C0u; }
        if (ctx->pc != 0x26C8C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C8C0u; }
        if (ctx->pc != 0x26C8C0u) { return; }
    }
    ctx->pc = 0x26C8C0u;
label_26c8c0:
    // 0x26c8c0: 0xc09b1b4  jal         func_26C6D0
    ctx->pc = 0x26C8C0u;
    SET_GPR_U32(ctx, 31, 0x26C8C8u);
    ctx->pc = 0x26C8C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C8C0u;
            // 0x26c8c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C6D0u;
    if (runtime->hasFunction(0x26C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x26C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C8C8u; }
        if (ctx->pc != 0x26C8C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMes__Fi_0x26c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C8C8u; }
        if (ctx->pc != 0x26C8C8u) { return; }
    }
    ctx->pc = 0x26C8C8u;
label_26c8c8:
    // 0x26c8c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26c8c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c8cc: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26C8CCu;
    {
        const bool branch_taken_0x26c8cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C8D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C8CCu;
            // 0x26c8d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c8cc) {
            ctx->pc = 0x26C8DCu;
            goto label_26c8dc;
        }
    }
    ctx->pc = 0x26C8D4u;
    // 0x26c8d4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x26C8D4u;
    {
        const bool branch_taken_0x26c8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C8D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C8D4u;
            // 0x26c8d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c8d4) {
            ctx->pc = 0x26C908u;
            goto label_26c908;
        }
    }
    ctx->pc = 0x26C8DCu;
label_26c8dc:
    // 0x26c8dc: 0xc0547dc  jal         func_151F70
    ctx->pc = 0x26C8DCu;
    SET_GPR_U32(ctx, 31, 0x26C8E4u);
    ctx->pc = 0x151F70u;
    if (runtime->hasFunction(0x151F70u)) {
        auto targetFn = runtime->lookupFunction(0x151F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C8E4u; }
        if (ctx->pc != 0x26C8E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDrawSpeedDef__6ClsMesFv_0x151f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C8E4u; }
        if (ctx->pc != 0x26C8E4u) { return; }
    }
    ctx->pc = 0x26C8E4u;
label_26c8e4:
    // 0x26c8e4: 0xe60001b8  swc1        $f0, 0x1B8($s0)
    ctx->pc = 0x26c8e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 440), bits); }
    // 0x26c8e8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x26c8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26c8ec: 0xae0317e4  sw          $v1, 0x17E4($s0)
    ctx->pc = 0x26c8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6116), GPR_U32(ctx, 3));
    // 0x26c8f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26c8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26c8f4: 0xae0017e8  sw          $zero, 0x17E8($s0)
    ctx->pc = 0x26c8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6120), GPR_U32(ctx, 0));
    // 0x26c8f8: 0xae00018c  sw          $zero, 0x18C($s0)
    ctx->pc = 0x26c8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 396), GPR_U32(ctx, 0));
    // 0x26c8fc: 0xae000188  sw          $zero, 0x188($s0)
    ctx->pc = 0x26c8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 0));
    // 0x26c900: 0xae030134  sw          $v1, 0x134($s0)
    ctx->pc = 0x26c900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 3));
    // 0x26c904: 0xae030138  sw          $v1, 0x138($s0)
    ctx->pc = 0x26c904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 3));
label_26c908:
    // 0x26c908: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26c908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26c90c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26c90cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26c910: 0x3e00008  jr          $ra
    ctx->pc = 0x26C910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C910u;
            // 0x26c914: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26C918u;
}
