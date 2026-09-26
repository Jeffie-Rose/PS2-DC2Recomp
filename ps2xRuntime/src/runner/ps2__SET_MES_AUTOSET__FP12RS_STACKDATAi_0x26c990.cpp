#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_MES_AUTOSET__FP12RS_STACKDATAi
// Address: 0x26c990 - 0x26caa8
void ps2__SET_MES_AUTOSET__FP12RS_STACKDATAi_0x26c990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_MES_AUTOSET__FP12RS_STACKDATAi_0x26c990");
#endif

    switch (ctx->pc) {
        case 0x26c9b4u: goto label_26c9b4;
        case 0x26c9bcu: goto label_26c9bc;
        case 0x26c9f0u: goto label_26c9f0;
        case 0x26c9fcu: goto label_26c9fc;
        case 0x26ca20u: goto label_26ca20;
        case 0x26ca30u: goto label_26ca30;
        case 0x26ca38u: goto label_26ca38;
        case 0x26ca54u: goto label_26ca54;
        case 0x26ca5cu: goto label_26ca5c;
        case 0x26ca7cu: goto label_26ca7c;
        case 0x26ca88u: goto label_26ca88;
        default: break;
    }

    ctx->pc = 0x26c990u;

    // 0x26c990: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x26c990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x26c994: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x26c994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x26c998: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x26c998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x26c99c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26c99cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26c9a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26c9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26c9a4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x26c9a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c9a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26c9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26c9ac: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26C9ACu;
    SET_GPR_U32(ctx, 31, 0x26C9B4u);
    ctx->pc = 0x26C9B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C9ACu;
            // 0x26c9b0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C9B4u; }
        if (ctx->pc != 0x26C9B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C9B4u; }
        if (ctx->pc != 0x26C9B4u) { return; }
    }
    ctx->pc = 0x26C9B4u;
label_26c9b4:
    // 0x26c9b4: 0xc09b1b4  jal         func_26C6D0
    ctx->pc = 0x26C9B4u;
    SET_GPR_U32(ctx, 31, 0x26C9BCu);
    ctx->pc = 0x26C9B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C9B4u;
            // 0x26c9b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C6D0u;
    if (runtime->hasFunction(0x26C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x26C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C9BCu; }
        if (ctx->pc != 0x26C9BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMes__Fi_0x26c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C9BCu; }
        if (ctx->pc != 0x26C9BCu) { return; }
    }
    ctx->pc = 0x26C9BCu;
label_26c9bc:
    // 0x26c9bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26c9bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c9c0: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26C9C0u;
    {
        const bool branch_taken_0x26c9c0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C9C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C9C0u;
            // 0x26c9c4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c9c0) {
            ctx->pc = 0x26C9D0u;
            goto label_26c9d0;
        }
    }
    ctx->pc = 0x26C9C8u;
    // 0x26c9c8: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x26C9C8u;
    {
        const bool branch_taken_0x26c9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C9CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C9C8u;
            // 0x26c9cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c9c8) {
            ctx->pc = 0x26CA8Cu;
            goto label_26ca8c;
        }
    }
    ctx->pc = 0x26C9D0u;
label_26c9d0:
    // 0x26c9d0: 0x12420015  beq         $s2, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x26C9D0u;
    {
        const bool branch_taken_0x26c9d0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x26C9D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C9D0u;
            // 0x26c9d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c9d0) {
            ctx->pc = 0x26CA28u;
            goto label_26ca28;
        }
    }
    ctx->pc = 0x26C9D8u;
    // 0x26c9d8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x26c9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x26c9dc: 0x12420003  beq         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26C9DCu;
    {
        const bool branch_taken_0x26c9dc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x26C9E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C9DCu;
            // 0x26c9e0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c9dc) {
            ctx->pc = 0x26C9ECu;
            goto label_26c9ec;
        }
    }
    ctx->pc = 0x26C9E4u;
    // 0x26c9e4: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x26C9E4u;
    {
        const bool branch_taken_0x26c9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C9E4u;
            // 0x26c9e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c9e4) {
            ctx->pc = 0x26CA8Cu;
            goto label_26ca8c;
        }
    }
    ctx->pc = 0x26C9ECu;
label_26c9ec:
    // 0x26c9ec: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x26c9ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26c9f0:
    // 0x26c9f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26c9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c9f4: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26C9F4u;
    SET_GPR_U32(ctx, 31, 0x26C9FCu);
    ctx->pc = 0x26C9F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C9F4u;
            // 0x26c9f8: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C9FCu; }
        if (ctx->pc != 0x26C9FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C9FCu; }
        if (ctx->pc != 0x26C9FCu) { return; }
    }
    ctx->pc = 0x26C9FCu;
label_26c9fc:
    // 0x26c9fc: 0x27d1821  addu        $v1, $s3, $sp
    ctx->pc = 0x26c9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x26ca00: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x26ca00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x26ca04: 0xac620050  sw          $v0, 0x50($v1)
    ctx->pc = 0x26ca04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 2));
    // 0x26ca08: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x26ca08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x26ca0c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x26CA0Cu;
    {
        const bool branch_taken_0x26ca0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26CA10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CA0Cu;
            // 0x26ca10: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ca0c) {
            ctx->pc = 0x26C9F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26c9f0;
        }
    }
    ctx->pc = 0x26CA14u;
    // 0x26ca14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26ca14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ca18: 0xc054a10  jal         func_152840
    ctx->pc = 0x26CA18u;
    SET_GPR_U32(ctx, 31, 0x26CA20u);
    ctx->pc = 0x26CA1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CA18u;
            // 0x26ca1c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152840u;
    if (runtime->hasFunction(0x152840u)) {
        auto targetFn = runtime->lookupFunction(0x152840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CA20u; }
        if (ctx->pc != 0x26CA20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AutoSet__6ClsMesFPi_0x152840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CA20u; }
        if (ctx->pc != 0x26CA20u) { return; }
    }
    ctx->pc = 0x26CA20u;
label_26ca20:
    // 0x26ca20: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x26CA20u;
    {
        const bool branch_taken_0x26ca20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CA24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CA20u;
            // 0x26ca24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ca20) {
            ctx->pc = 0x26CA8Cu;
            goto label_26ca8c;
        }
    }
    ctx->pc = 0x26CA28u;
label_26ca28:
    // 0x26ca28: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26CA28u;
    SET_GPR_U32(ctx, 31, 0x26CA30u);
    ctx->pc = 0x26CA2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CA28u;
            // 0x26ca2c: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CA30u; }
        if (ctx->pc != 0x26CA30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CA30u; }
        if (ctx->pc != 0x26CA30u) { return; }
    }
    ctx->pc = 0x26CA30u;
label_26ca30:
    // 0x26ca30: 0xc09ac74  jal         func_26B1D0
    ctx->pc = 0x26CA30u;
    SET_GPR_U32(ctx, 31, 0x26CA38u);
    ctx->pc = 0x26CA34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CA30u;
            // 0x26ca34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B1D0u;
    if (runtime->hasFunction(0x26B1D0u)) {
        auto targetFn = runtime->lookupFunction(0x26B1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CA38u; }
        if (ctx->pc != 0x26CA38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetChara__Fi_0x26b1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CA38u; }
        if (ctx->pc != 0x26CA38u) { return; }
    }
    ctx->pc = 0x26CA38u;
label_26ca38:
    // 0x26ca38: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26ca38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ca3c: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x26CA3Cu;
    {
        const bool branch_taken_0x26ca3c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x26CA40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CA3Cu;
            // 0x26ca40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ca3c) {
            ctx->pc = 0x26CA4Cu;
            goto label_26ca4c;
        }
    }
    ctx->pc = 0x26CA44u;
    // 0x26ca44: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x26CA44u;
    {
        const bool branch_taken_0x26ca44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CA48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CA44u;
            // 0x26ca48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ca44) {
            ctx->pc = 0x26CA8Cu;
            goto label_26ca8c;
        }
    }
    ctx->pc = 0x26CA4Cu;
label_26ca4c:
    // 0x26ca4c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26CA4Cu;
    SET_GPR_U32(ctx, 31, 0x26CA54u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CA54u; }
        if (ctx->pc != 0x26CA54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CA54u; }
        if (ctx->pc != 0x26CA54u) { return; }
    }
    ctx->pc = 0x26CA54u;
label_26ca54:
    // 0x26ca54: 0xc09ac74  jal         func_26B1D0
    ctx->pc = 0x26CA54u;
    SET_GPR_U32(ctx, 31, 0x26CA5Cu);
    ctx->pc = 0x26CA58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CA54u;
            // 0x26ca58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B1D0u;
    if (runtime->hasFunction(0x26B1D0u)) {
        auto targetFn = runtime->lookupFunction(0x26B1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CA5Cu; }
        if (ctx->pc != 0x26CA5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetChara__Fi_0x26b1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CA5Cu; }
        if (ctx->pc != 0x26CA5Cu) { return; }
    }
    ctx->pc = 0x26CA5Cu;
label_26ca5c:
    // 0x26ca5c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26CA5Cu;
    {
        const bool branch_taken_0x26ca5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26CA60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CA5Cu;
            // 0x26ca60: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ca5c) {
            ctx->pc = 0x26CA6Cu;
            goto label_26ca6c;
        }
    }
    ctx->pc = 0x26CA64u;
    // 0x26ca64: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x26CA64u;
    {
        const bool branch_taken_0x26ca64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CA68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CA64u;
            // 0x26ca68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ca64) {
            ctx->pc = 0x26CA8Cu;
            goto label_26ca8c;
        }
    }
    ctx->pc = 0x26CA6Cu;
label_26ca6c:
    // 0x26ca6c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x26ca6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ca70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26ca70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ca74: 0xc0548c0  jal         func_152300
    ctx->pc = 0x26CA74u;
    SET_GPR_U32(ctx, 31, 0x26CA7Cu);
    ctx->pc = 0x26CA78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CA74u;
            // 0x26ca78: 0x27a70060  addiu       $a3, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152300u;
    if (runtime->hasFunction(0x152300u)) {
        auto targetFn = runtime->lookupFunction(0x152300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CA7Cu; }
        if (ctx->pc != 0x26CA7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AutoSetSub__6ClsMesFP11CCharacter2P11CCharacter2Pi_0x152300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CA7Cu; }
        if (ctx->pc != 0x26CA7Cu) { return; }
    }
    ctx->pc = 0x26CA7Cu;
label_26ca7c:
    // 0x26ca7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26ca7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ca80: 0xc054a10  jal         func_152840
    ctx->pc = 0x26CA80u;
    SET_GPR_U32(ctx, 31, 0x26CA88u);
    ctx->pc = 0x26CA84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CA80u;
            // 0x26ca84: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152840u;
    if (runtime->hasFunction(0x152840u)) {
        auto targetFn = runtime->lookupFunction(0x152840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CA88u; }
        if (ctx->pc != 0x26CA88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AutoSet__6ClsMesFPi_0x152840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CA88u; }
        if (ctx->pc != 0x26CA88u) { return; }
    }
    ctx->pc = 0x26CA88u;
label_26ca88:
    // 0x26ca88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26ca88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26ca8c:
    // 0x26ca8c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x26ca8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26ca90: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x26ca90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26ca94: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26ca94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26ca98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26ca98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26ca9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26ca9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26caa0: 0x3e00008  jr          $ra
    ctx->pc = 0x26CAA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26CAA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CAA0u;
            // 0x26caa4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26CAA8u;
}
