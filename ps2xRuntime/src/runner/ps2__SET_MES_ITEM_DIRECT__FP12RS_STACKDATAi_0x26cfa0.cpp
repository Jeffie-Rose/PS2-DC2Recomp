#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_MES_ITEM_DIRECT__FP12RS_STACKDATAi
// Address: 0x26cfa0 - 0x26d01c
void ps2__SET_MES_ITEM_DIRECT__FP12RS_STACKDATAi_0x26cfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_MES_ITEM_DIRECT__FP12RS_STACKDATAi_0x26cfa0");
#endif

    switch (ctx->pc) {
        case 0x26cfb8u: goto label_26cfb8;
        case 0x26cfc0u: goto label_26cfc0;
        case 0x26cfdcu: goto label_26cfdc;
        case 0x26cfe8u: goto label_26cfe8;
        default: break;
    }

    ctx->pc = 0x26cfa0u;

    // 0x26cfa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26cfa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26cfa4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26cfa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26cfa8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26cfa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26cfac: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x26cfacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x26cfb0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26CFB0u;
    SET_GPR_U32(ctx, 31, 0x26CFB8u);
    ctx->pc = 0x26CFB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CFB0u;
            // 0x26cfb4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CFB8u; }
        if (ctx->pc != 0x26CFB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CFB8u; }
        if (ctx->pc != 0x26CFB8u) { return; }
    }
    ctx->pc = 0x26CFB8u;
label_26cfb8:
    // 0x26cfb8: 0xc09b1b4  jal         func_26C6D0
    ctx->pc = 0x26CFB8u;
    SET_GPR_U32(ctx, 31, 0x26CFC0u);
    ctx->pc = 0x26CFBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CFB8u;
            // 0x26cfbc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C6D0u;
    if (runtime->hasFunction(0x26C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x26C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CFC0u; }
        if (ctx->pc != 0x26CFC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMes__Fi_0x26c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CFC0u; }
        if (ctx->pc != 0x26CFC0u) { return; }
    }
    ctx->pc = 0x26CFC0u;
label_26cfc0:
    // 0x26cfc0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26cfc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cfc4: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26CFC4u;
    {
        const bool branch_taken_0x26cfc4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x26CFC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CFC4u;
            // 0x26cfc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cfc4) {
            ctx->pc = 0x26CFD4u;
            goto label_26cfd4;
        }
    }
    ctx->pc = 0x26CFCCu;
    // 0x26cfcc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x26CFCCu;
    {
        const bool branch_taken_0x26cfcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CFD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CFCCu;
            // 0x26cfd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cfcc) {
            ctx->pc = 0x26D008u;
            goto label_26d008;
        }
    }
    ctx->pc = 0x26CFD4u;
label_26cfd4:
    // 0x26cfd4: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26CFD4u;
    SET_GPR_U32(ctx, 31, 0x26CFDCu);
    ctx->pc = 0x26CFD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CFD4u;
            // 0x26cfd8: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CFDCu; }
        if (ctx->pc != 0x26CFDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CFDCu; }
        if (ctx->pc != 0x26CFDCu) { return; }
    }
    ctx->pc = 0x26CFDCu;
label_26cfdc:
    // 0x26cfdc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26cfdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cfe0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26CFE0u;
    SET_GPR_U32(ctx, 31, 0x26CFE8u);
    ctx->pc = 0x26CFE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CFE0u;
            // 0x26cfe4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CFE8u; }
        if (ctx->pc != 0x26CFE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CFE8u; }
        if (ctx->pc != 0x26CFE8u) { return; }
    }
    ctx->pc = 0x26CFE8u;
label_26cfe8:
    // 0x26cfe8: 0x2623ffff  addiu       $v1, $s1, -0x1
    ctx->pc = 0x26cfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x26cfec: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x26CFECu;
    {
        const bool branch_taken_0x26cfec = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x26CFF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CFECu;
            // 0x26cff0: 0x28610010  slti        $at, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cfec) {
            ctx->pc = 0x26D004u;
            goto label_26d004;
        }
    }
    ctx->pc = 0x26CFF4u;
    // 0x26cff4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x26CFF4u;
    {
        const bool branch_taken_0x26cff4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CFF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CFF4u;
            // 0x26cff8: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cff4) {
            ctx->pc = 0x26D004u;
            goto label_26d004;
        }
    }
    ctx->pc = 0x26CFFCu;
    // 0x26cffc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x26cffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x26d000: 0xac621a00  sw          $v0, 0x1A00($v1)
    ctx->pc = 0x26d000u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6656), GPR_U32(ctx, 2));
label_26d004:
    // 0x26d004: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26d004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26d008:
    // 0x26d008: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26d008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26d00c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26d00cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26d010: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26d010u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26d014: 0x3e00008  jr          $ra
    ctx->pc = 0x26D014u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26D018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D014u;
            // 0x26d018: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26D01Cu;
}
