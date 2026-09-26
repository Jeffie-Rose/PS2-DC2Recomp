#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SEQ_START__FP9SPI_STACKi
// Address: 0x176ba0 - 0x176c6c
void ps2__SEQ_START__FP9SPI_STACKi_0x176ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SEQ_START__FP9SPI_STACKi_0x176ba0");
#endif

    switch (ctx->pc) {
        case 0x176be0u: goto label_176be0;
        case 0x176c2cu: goto label_176c2c;
        case 0x176c38u: goto label_176c38;
        default: break;
    }

    ctx->pc = 0x176ba0u;

    // 0x176ba0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x176ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x176ba4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x176ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x176ba8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x176ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x176bac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x176bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x176bb0: 0x1ca00003  bgtz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x176BB0u;
    {
        const bool branch_taken_0x176bb0 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x176BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176BB0u;
            // 0x176bb4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176bb0) {
            ctx->pc = 0x176BC0u;
            goto label_176bc0;
        }
    }
    ctx->pc = 0x176BB8u;
    // 0x176bb8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x176BB8u;
    {
        const bool branch_taken_0x176bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176BB8u;
            // 0x176bbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176bb8) {
            ctx->pc = 0x176C58u;
            goto label_176c58;
        }
    }
    ctx->pc = 0x176BC0u;
label_176bc0:
    // 0x176bc0: 0x8f8489e8  lw          $a0, -0x7618($gp)
    ctx->pc = 0x176bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937064)));
    // 0x176bc4: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x176BC4u;
    {
        const bool branch_taken_0x176bc4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x176BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176BC4u;
            // 0x176bc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176bc4) {
            ctx->pc = 0x176BD4u;
            goto label_176bd4;
        }
    }
    ctx->pc = 0x176BCCu;
    // 0x176bcc: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x176BCCu;
    {
        const bool branch_taken_0x176bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176BCCu;
            // 0x176bd0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176bcc) {
            ctx->pc = 0x176C5Cu;
            goto label_176c5c;
        }
    }
    ctx->pc = 0x176BD4u;
label_176bd4:
    // 0x176bd4: 0x8f9189bc  lw          $s1, -0x7644($gp)
    ctx->pc = 0x176bd4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937020)));
    // 0x176bd8: 0xc04e704  jal         func_139C10
    ctx->pc = 0x176BD8u;
    SET_GPR_U32(ctx, 31, 0x176BE0u);
    ctx->pc = 0x176BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176BD8u;
            // 0x176bdc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176BE0u; }
        if (ctx->pc != 0x176BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176BE0u; }
        if (ctx->pc != 0x176BE0u) { return; }
    }
    ctx->pc = 0x176BE0u;
label_176be0:
    // 0x176be0: 0xaf8289bc  sw          $v0, -0x7644($gp)
    ctx->pc = 0x176be0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937020), GPR_U32(ctx, 2));
    // 0x176be4: 0x8f8289e8  lw          $v0, -0x7618($gp)
    ctx->pc = 0x176be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937064)));
    // 0x176be8: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x176be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x176bec: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x176becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x176bf0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x176bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x176bf4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x176bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176bf8: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x176BF8u;
    {
        const bool branch_taken_0x176bf8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x176BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176BF8u;
            // 0x176bfc: 0xaf8289c0  sw          $v0, -0x7640($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937024), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176bf8) {
            ctx->pc = 0x176C1Cu;
            goto label_176c1c;
        }
    }
    ctx->pc = 0x176C00u;
    // 0x176c00: 0x8f8289b4  lw          $v0, -0x764C($gp)
    ctx->pc = 0x176c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937012)));
    // 0x176c04: 0x8f8389a8  lw          $v1, -0x7658($gp)
    ctx->pc = 0x176c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x176c08: 0x8f8489bc  lw          $a0, -0x7644($gp)
    ctx->pc = 0x176c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937020)));
    // 0x176c0c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x176c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x176c10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x176c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176c14: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x176C14u;
    {
        const bool branch_taken_0x176c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176C14u;
            // 0x176c18: 0xac440550  sw          $a0, 0x550($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1360), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176c14) {
            ctx->pc = 0x176C24u;
            goto label_176c24;
        }
    }
    ctx->pc = 0x176C1Cu;
label_176c1c:
    // 0x176c1c: 0x8f8289bc  lw          $v0, -0x7644($gp)
    ctx->pc = 0x176c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937020)));
    // 0x176c20: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x176c20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
label_176c24:
    // 0x176c24: 0xc05191c  jal         func_146470
    ctx->pc = 0x176C24u;
    SET_GPR_U32(ctx, 31, 0x176C2Cu);
    ctx->pc = 0x176C28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176C24u;
            // 0x176c28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176C2Cu; }
        if (ctx->pc != 0x176C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176C2Cu; }
        if (ctx->pc != 0x176C2Cu) { return; }
    }
    ctx->pc = 0x176C2Cu;
label_176c2c:
    // 0x176c2c: 0x8f8489bc  lw          $a0, -0x7644($gp)
    ctx->pc = 0x176c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937020)));
    // 0x176c30: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x176C30u;
    SET_GPR_U32(ctx, 31, 0x176C38u);
    ctx->pc = 0x176C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176C30u;
            // 0x176c34: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176C38u; }
        if (ctx->pc != 0x176C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176C38u; }
        if (ctx->pc != 0x176C38u) { return; }
    }
    ctx->pc = 0x176C38u;
label_176c38:
    // 0x176c38: 0x8f8389bc  lw          $v1, -0x7644($gp)
    ctx->pc = 0x176c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937020)));
    // 0x176c3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x176c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x176c40: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x176c40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
    // 0x176c44: 0x8f8489c0  lw          $a0, -0x7640($gp)
    ctx->pc = 0x176c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937024)));
    // 0x176c48: 0x8f8389bc  lw          $v1, -0x7644($gp)
    ctx->pc = 0x176c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937020)));
    // 0x176c4c: 0xac640024  sw          $a0, 0x24($v1)
    ctx->pc = 0x176c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 4));
    // 0x176c50: 0x8f8389bc  lw          $v1, -0x7644($gp)
    ctx->pc = 0x176c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937020)));
    // 0x176c54: 0xac60002c  sw          $zero, 0x2C($v1)
    ctx->pc = 0x176c54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
label_176c58:
    // 0x176c58: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x176c58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_176c5c:
    // 0x176c5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x176c5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176c60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x176c60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176c64: 0x3e00008  jr          $ra
    ctx->pc = 0x176C64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176C64u;
            // 0x176c68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x176C6Cu;
}
