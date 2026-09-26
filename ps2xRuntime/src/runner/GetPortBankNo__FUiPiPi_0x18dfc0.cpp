#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetPortBankNo__FUiPiPi
// Address: 0x18dfc0 - 0x18e054
void GetPortBankNo__FUiPiPi_0x18dfc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPortBankNo__FUiPiPi_0x18dfc0");
#endif

    switch (ctx->pc) {
        case 0x18dfd0u: goto label_18dfd0;
        case 0x18dfd8u: goto label_18dfd8;
        case 0x18dfe4u: goto label_18dfe4;
        default: break;
    }

    ctx->pc = 0x18dfc0u;

    // 0x18dfc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18dfc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18dfc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18dfc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18dfc8: 0xc0632c0  jal         func_18CB00
    ctx->pc = 0x18DFC8u;
    SET_GPR_U32(ctx, 31, 0x18DFD0u);
    ctx->pc = 0x18CB00u;
    if (runtime->hasFunction(0x18CB00u)) {
        auto targetFn = runtime->lookupFunction(0x18CB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DFD0u; }
        if (ctx->pc != 0x18DFD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPortNo__FUi_0x18cb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DFD0u; }
        if (ctx->pc != 0x18DFD0u) { return; }
    }
    ctx->pc = 0x18DFD0u;
label_18dfd0:
    // 0x18dfd0: 0xc0632c4  jal         func_18CB10
    ctx->pc = 0x18DFD0u;
    SET_GPR_U32(ctx, 31, 0x18DFD8u);
    ctx->pc = 0x18DFD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DFD0u;
            // 0x18dfd4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CB10u;
    if (runtime->hasFunction(0x18CB10u)) {
        auto targetFn = runtime->lookupFunction(0x18CB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DFD8u; }
        if (ctx->pc != 0x18DFD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBankNo__FUi_0x18cb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DFD8u; }
        if (ctx->pc != 0x18DFD8u) { return; }
    }
    ctx->pc = 0x18DFD8u;
label_18dfd8:
    // 0x18dfd8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x18dfd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dfdc: 0xc063288  jal         func_18CA20
    ctx->pc = 0x18DFDCu;
    SET_GPR_U32(ctx, 31, 0x18DFE4u);
    ctx->pc = 0x18DFE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DFDCu;
            // 0x18dfe0: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CA20u;
    if (runtime->hasFunction(0x18CA20u)) {
        auto targetFn = runtime->lookupFunction(0x18CA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DFE4u; }
        if (ctx->pc != 0x18DFE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPortInfo__Fi_0x18ca20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DFE4u; }
        if (ctx->pc != 0x18DFE4u) { return; }
    }
    ctx->pc = 0x18DFE4u;
label_18dfe4:
    // 0x18dfe4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18DFE4u;
    {
        const bool branch_taken_0x18dfe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18dfe4) {
            ctx->pc = 0x18DFF4u;
            goto label_18dff4;
        }
    }
    ctx->pc = 0x18DFECu;
    // 0x18dfec: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x18DFECu;
    {
        const bool branch_taken_0x18dfec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DFF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DFECu;
            // 0x18dff0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dfec) {
            ctx->pc = 0x18E048u;
            goto label_18e048;
        }
    }
    ctx->pc = 0x18DFF4u;
label_18dff4:
    // 0x18dff4: 0x4e00006  bltz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x18DFF4u;
    {
        const bool branch_taken_0x18dff4 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x18DFF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DFF4u;
            // 0x18dff8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dff4) {
            ctx->pc = 0x18E010u;
            goto label_18e010;
        }
    }
    ctx->pc = 0x18DFFCu;
    // 0x18dffc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x18dffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x18e000: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x18e000u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18e004: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18E004u;
    {
        const bool branch_taken_0x18e004 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E004u;
            // 0x18e008: 0x718c0  sll         $v1, $a3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e004) {
            ctx->pc = 0x18E018u;
            goto label_18e018;
        }
    }
    ctx->pc = 0x18E00Cu;
    // 0x18e00c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x18e00cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18e010:
    // 0x18e010: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18E010u;
    {
        const bool branch_taken_0x18e010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e010) {
            ctx->pc = 0x18E028u;
            goto label_18e028;
        }
    }
    ctx->pc = 0x18E018u;
label_18e018:
    // 0x18e018: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x18e018u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x18e01c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x18e01cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18e020: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x18e020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18e024: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x18e024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_18e028:
    // 0x18e028: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18E028u;
    {
        const bool branch_taken_0x18e028 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e028) {
            ctx->pc = 0x18E038u;
            goto label_18e038;
        }
    }
    ctx->pc = 0x18E030u;
    // 0x18e030: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18E030u;
    {
        const bool branch_taken_0x18e030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E030u;
            // 0x18e034: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e030) {
            ctx->pc = 0x18E048u;
            goto label_18e048;
        }
    }
    ctx->pc = 0x18E038u;
label_18e038:
    // 0x18e038: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18e038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18e03c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x18e03cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x18e040: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18e040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18e044: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x18e044u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
label_18e048:
    // 0x18e048: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18e048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e04c: 0x3e00008  jr          $ra
    ctx->pc = 0x18E04Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E04Cu;
            // 0x18e050: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18E054u;
}
