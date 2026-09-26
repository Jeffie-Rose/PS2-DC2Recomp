#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _DNG_GET_FLOOR_ID__FP12RS_STACKDATAi
// Address: 0x2659e0 - 0x265a48
void ps2__DNG_GET_FLOOR_ID__FP12RS_STACKDATAi_0x2659e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__DNG_GET_FLOOR_ID__FP12RS_STACKDATAi_0x2659e0");
#endif

    switch (ctx->pc) {
        case 0x2659f4u: goto label_2659f4;
        case 0x265a34u: goto label_265a34;
        default: break;
    }

    ctx->pc = 0x2659e0u;

    // 0x2659e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2659e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2659e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2659e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2659e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2659e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2659ec: 0xc064220  jal         func_190880
    ctx->pc = 0x2659ECu;
    SET_GPR_U32(ctx, 31, 0x2659F4u);
    ctx->pc = 0x2659F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2659ECu;
            // 0x2659f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2659F4u; }
        if (ctx->pc != 0x2659F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2659F4u; }
        if (ctx->pc != 0x2659F4u) { return; }
    }
    ctx->pc = 0x2659F4u;
label_2659f4:
    // 0x2659f4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2659F4u;
    {
        const bool branch_taken_0x2659f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2659F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2659F4u;
            // 0x2659f8: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2659f4) {
            ctx->pc = 0x265A04u;
            goto label_265a04;
        }
    }
    ctx->pc = 0x2659FCu;
    // 0x2659fc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2659FCu;
    {
        const bool branch_taken_0x2659fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2659FCu;
            // 0x265a00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2659fc) {
            ctx->pc = 0x265A38u;
            goto label_265a38;
        }
    }
    ctx->pc = 0x265A04u;
label_265a04:
    // 0x265a04: 0x3421c5b4  ori         $at, $at, 0xC5B4
    ctx->pc = 0x265a04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50612);
    // 0x265a08: 0x411821  addu        $v1, $v0, $at
    ctx->pc = 0x265a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x265a0c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x265A0Cu;
    {
        const bool branch_taken_0x265a0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x265A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265A0Cu;
            // 0x265a10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265a0c) {
            ctx->pc = 0x265A1Cu;
            goto label_265a1c;
        }
    }
    ctx->pc = 0x265A14u;
    // 0x265a14: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x265A14u;
    {
        const bool branch_taken_0x265a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265A14u;
            // 0x265a18: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265a14) {
            ctx->pc = 0x265A3Cu;
            goto label_265a3c;
        }
    }
    ctx->pc = 0x265A1Cu;
label_265a1c:
    // 0x265a1c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x265a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x265a20: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x265a20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x265a24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x265a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x265a28: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x265a28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x265a2c: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x265A2Cu;
    SET_GPR_U32(ctx, 31, 0x265A34u);
    ctx->pc = 0x265A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265A2Cu;
            // 0x265a30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265A34u; }
        if (ctx->pc != 0x265A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265A34u; }
        if (ctx->pc != 0x265A34u) { return; }
    }
    ctx->pc = 0x265A34u;
label_265a34:
    // 0x265a34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x265a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_265a38:
    // 0x265a38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x265a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_265a3c:
    // 0x265a3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x265a3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265a40: 0x3e00008  jr          $ra
    ctx->pc = 0x265A40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x265A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265A40u;
            // 0x265a44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x265A48u;
}
