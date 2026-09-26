#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_FLAG__FP12RS_STACKDATAi
// Address: 0x2632e0 - 0x263340
void ps2__SET_FLAG__FP12RS_STACKDATAi_0x2632e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_FLAG__FP12RS_STACKDATAi_0x2632e0");
#endif

    switch (ctx->pc) {
        case 0x2632f8u: goto label_2632f8;
        case 0x263304u: goto label_263304;
        case 0x26330cu: goto label_26330c;
        case 0x263328u: goto label_263328;
        default: break;
    }

    ctx->pc = 0x2632e0u;

    // 0x2632e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2632e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2632e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2632e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2632e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2632e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2632ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2632ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2632f0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2632F0u;
    SET_GPR_U32(ctx, 31, 0x2632F8u);
    ctx->pc = 0x2632F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2632F0u;
            // 0x2632f4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2632F8u; }
        if (ctx->pc != 0x2632F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2632F8u; }
        if (ctx->pc != 0x2632F8u) { return; }
    }
    ctx->pc = 0x2632F8u;
label_2632f8:
    // 0x2632f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2632f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2632fc: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2632FCu;
    SET_GPR_U32(ctx, 31, 0x263304u);
    ctx->pc = 0x263300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2632FCu;
            // 0x263300: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263304u; }
        if (ctx->pc != 0x263304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263304u; }
        if (ctx->pc != 0x263304u) { return; }
    }
    ctx->pc = 0x263304u;
label_263304:
    // 0x263304: 0xc064220  jal         func_190880
    ctx->pc = 0x263304u;
    SET_GPR_U32(ctx, 31, 0x26330Cu);
    ctx->pc = 0x263308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263304u;
            // 0x263308: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26330Cu; }
        if (ctx->pc != 0x26330Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26330Cu; }
        if (ctx->pc != 0x26330Cu) { return; }
    }
    ctx->pc = 0x26330Cu;
label_26330c:
    // 0x26330c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26330Cu;
    {
        const bool branch_taken_0x26330c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x263310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26330Cu;
            // 0x263310: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26330c) {
            ctx->pc = 0x26331Cu;
            goto label_26331c;
        }
    }
    ctx->pc = 0x263314u;
    // 0x263314: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x263314u;
    {
        const bool branch_taken_0x263314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263314u;
            // 0x263318: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263314) {
            ctx->pc = 0x26332Cu;
            goto label_26332c;
        }
    }
    ctx->pc = 0x26331Cu;
label_26331c:
    // 0x26331c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26331cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263320: 0xc0bd8f4  jal         func_2F63D0
    ctx->pc = 0x263320u;
    SET_GPR_U32(ctx, 31, 0x263328u);
    ctx->pc = 0x263324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263320u;
            // 0x263324: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F63D0u;
    if (runtime->hasFunction(0x2F63D0u)) {
        auto targetFn = runtime->lookupFunction(0x2F63D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263328u; }
        if (ctx->pc != 0x263328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBitFlag__9CSaveDataFii_0x2f63d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263328u; }
        if (ctx->pc != 0x263328u) { return; }
    }
    ctx->pc = 0x263328u;
label_263328:
    // 0x263328: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x263328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26332c:
    // 0x26332c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26332cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x263330: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x263330u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x263334: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x263334u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x263338: 0x3e00008  jr          $ra
    ctx->pc = 0x263338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26333Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263338u;
            // 0x26333c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x263340u;
}
