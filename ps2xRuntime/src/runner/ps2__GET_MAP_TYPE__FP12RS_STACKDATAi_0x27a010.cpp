#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_MAP_TYPE__FP12RS_STACKDATAi
// Address: 0x27a010 - 0x27a098
void ps2__GET_MAP_TYPE__FP12RS_STACKDATAi_0x27a010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_MAP_TYPE__FP12RS_STACKDATAi_0x27a010");
#endif

    switch (ctx->pc) {
        case 0x27a044u: goto label_27a044;
        case 0x27a054u: goto label_27a054;
        case 0x27a05cu: goto label_27a05c;
        case 0x27a078u: goto label_27a078;
        case 0x27a084u: goto label_27a084;
        default: break;
    }

    ctx->pc = 0x27a010u;

    // 0x27a010: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27a010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27a014: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27a014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27a018: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27a018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27a01c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27a01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27a020: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x27a020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27a024: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x27A024u;
    {
        const bool branch_taken_0x27a024 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27A028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A024u;
            // 0x27a028: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a024) {
            ctx->pc = 0x27A04Cu;
            goto label_27a04c;
        }
    }
    ctx->pc = 0x27A02Cu;
    // 0x27a02c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27A02Cu;
    {
        const bool branch_taken_0x27a02c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A02Cu;
            // 0x27a030: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a02c) {
            ctx->pc = 0x27A03Cu;
            goto label_27a03c;
        }
    }
    ctx->pc = 0x27A034u;
    // 0x27a034: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x27A034u;
    {
        const bool branch_taken_0x27a034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A034u;
            // 0x27a038: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a034) {
            ctx->pc = 0x27A064u;
            goto label_27a064;
        }
    }
    ctx->pc = 0x27A03Cu;
label_27a03c:
    // 0x27a03c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27A03Cu;
    SET_GPR_U32(ctx, 31, 0x27A044u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A044u; }
        if (ctx->pc != 0x27A044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A044u; }
        if (ctx->pc != 0x27A044u) { return; }
    }
    ctx->pc = 0x27A044u;
label_27a044:
    // 0x27a044: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x27A044u;
    {
        const bool branch_taken_0x27a044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A044u;
            // 0x27a048: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a044) {
            ctx->pc = 0x27A070u;
            goto label_27a070;
        }
    }
    ctx->pc = 0x27A04Cu;
label_27a04c:
    // 0x27a04c: 0xc097e48  jal         func_25F920
    ctx->pc = 0x27A04Cu;
    SET_GPR_U32(ctx, 31, 0x27A054u);
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A054u; }
        if (ctx->pc != 0x27A054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A054u; }
        if (ctx->pc != 0x27A054u) { return; }
    }
    ctx->pc = 0x27A054u;
label_27a054:
    // 0x27a054: 0xc0b49fc  jal         func_2D27F0
    ctx->pc = 0x27A054u;
    SET_GPR_U32(ctx, 31, 0x27A05Cu);
    ctx->pc = 0x27A058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A054u;
            // 0x27a058: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D27F0u;
    if (runtime->hasFunction(0x2D27F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D27F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A05Cu; }
        if (ctx->pc != 0x27A05Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchMapNo__FPc_0x2d27f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A05Cu; }
        if (ctx->pc != 0x27A05Cu) { return; }
    }
    ctx->pc = 0x27A05Cu;
label_27a05c:
    // 0x27a05c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27A05Cu;
    {
        const bool branch_taken_0x27a05c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a05c) {
            ctx->pc = 0x27A06Cu;
            goto label_27a06c;
        }
    }
    ctx->pc = 0x27A064u;
label_27a064:
    // 0x27a064: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x27A064u;
    {
        const bool branch_taken_0x27a064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A064u;
            // 0x27a068: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a064) {
            ctx->pc = 0x27A08Cu;
            goto label_27a08c;
        }
    }
    ctx->pc = 0x27A06Cu;
label_27a06c:
    // 0x27a06c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27a06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27a070:
    // 0x27a070: 0xc0b49b8  jal         func_2D26E0
    ctx->pc = 0x27A070u;
    SET_GPR_U32(ctx, 31, 0x27A078u);
    ctx->pc = 0x2D26E0u;
    if (runtime->hasFunction(0x2D26E0u)) {
        auto targetFn = runtime->lookupFunction(0x2D26E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A078u; }
        if (ctx->pc != 0x27A078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMapType__Fi_0x2d26e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A078u; }
        if (ctx->pc != 0x27A078u) { return; }
    }
    ctx->pc = 0x27A078u;
label_27a078:
    // 0x27a078: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27a078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a07c: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x27A07Cu;
    SET_GPR_U32(ctx, 31, 0x27A084u);
    ctx->pc = 0x27A080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A07Cu;
            // 0x27a080: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A084u; }
        if (ctx->pc != 0x27A084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A084u; }
        if (ctx->pc != 0x27A084u) { return; }
    }
    ctx->pc = 0x27A084u;
label_27a084:
    // 0x27a084: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27a084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27a088: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27a088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_27a08c:
    // 0x27a08c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27a08cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27a090: 0x3e00008  jr          $ra
    ctx->pc = 0x27A090u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A090u;
            // 0x27a094: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27A098u;
}
