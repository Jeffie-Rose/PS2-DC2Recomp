#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _DNG_SET_FLOOR_ID__FP12RS_STACKDATAi
// Address: 0x265980 - 0x2659dc
void ps2__DNG_SET_FLOOR_ID__FP12RS_STACKDATAi_0x265980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__DNG_SET_FLOOR_ID__FP12RS_STACKDATAi_0x265980");
#endif

    switch (ctx->pc) {
        case 0x265990u: goto label_265990;
        case 0x265998u: goto label_265998;
        case 0x2659c8u: goto label_2659c8;
        default: break;
    }

    ctx->pc = 0x265980u;

    // 0x265980: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x265980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x265984: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x265984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x265988: 0xc097e18  jal         func_25F860
    ctx->pc = 0x265988u;
    SET_GPR_U32(ctx, 31, 0x265990u);
    ctx->pc = 0x26598Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265988u;
            // 0x26598c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265990u; }
        if (ctx->pc != 0x265990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265990u; }
        if (ctx->pc != 0x265990u) { return; }
    }
    ctx->pc = 0x265990u;
label_265990:
    // 0x265990: 0xc064220  jal         func_190880
    ctx->pc = 0x265990u;
    SET_GPR_U32(ctx, 31, 0x265998u);
    ctx->pc = 0x265994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265990u;
            // 0x265994: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265998u; }
        if (ctx->pc != 0x265998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265998u; }
        if (ctx->pc != 0x265998u) { return; }
    }
    ctx->pc = 0x265998u;
label_265998:
    // 0x265998: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x265998u;
    {
        const bool branch_taken_0x265998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26599Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265998u;
            // 0x26599c: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265998) {
            ctx->pc = 0x2659A8u;
            goto label_2659a8;
        }
    }
    ctx->pc = 0x2659A0u;
    // 0x2659a0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2659A0u;
    {
        const bool branch_taken_0x2659a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2659A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2659A0u;
            // 0x2659a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2659a0) {
            ctx->pc = 0x2659CCu;
            goto label_2659cc;
        }
    }
    ctx->pc = 0x2659A8u;
label_2659a8:
    // 0x2659a8: 0x3421c5b4  ori         $at, $at, 0xC5B4
    ctx->pc = 0x2659a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50612);
    // 0x2659ac: 0x412021  addu        $a0, $v0, $at
    ctx->pc = 0x2659acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x2659b0: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2659B0u;
    {
        const bool branch_taken_0x2659b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2659B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2659B0u;
            // 0x2659b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2659b0) {
            ctx->pc = 0x2659C0u;
            goto label_2659c0;
        }
    }
    ctx->pc = 0x2659B8u;
    // 0x2659b8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2659B8u;
    {
        const bool branch_taken_0x2659b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2659BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2659B8u;
            // 0x2659bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2659b8) {
            ctx->pc = 0x2659CCu;
            goto label_2659cc;
        }
    }
    ctx->pc = 0x2659C0u;
label_2659c0:
    // 0x2659c0: 0xc0bdcfc  jal         func_2F73F0
    ctx->pc = 0x2659C0u;
    SET_GPR_U32(ctx, 31, 0x2659C8u);
    ctx->pc = 0x2F73F0u;
    if (runtime->hasFunction(0x2F73F0u)) {
        auto targetFn = runtime->lookupFunction(0x2F73F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2659C8u; }
        if (ctx->pc != 0x2659C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFloorID__16CSaveDataDungeonFi_0x2f73f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2659C8u; }
        if (ctx->pc != 0x2659C8u) { return; }
    }
    ctx->pc = 0x2659C8u;
label_2659c8:
    // 0x2659c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2659c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2659cc:
    // 0x2659cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2659ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2659d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2659d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2659d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2659D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2659D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2659D4u;
            // 0x2659d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2659DCu;
}
