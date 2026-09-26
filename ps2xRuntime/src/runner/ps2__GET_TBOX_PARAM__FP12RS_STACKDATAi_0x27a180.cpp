#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_TBOX_PARAM__FP12RS_STACKDATAi
// Address: 0x27a180 - 0x27a234
void ps2__GET_TBOX_PARAM__FP12RS_STACKDATAi_0x27a180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_TBOX_PARAM__FP12RS_STACKDATAi_0x27a180");
#endif

    switch (ctx->pc) {
        case 0x27a1e8u: goto label_27a1e8;
        case 0x27a1f8u: goto label_27a1f8;
        case 0x27a208u: goto label_27a208;
        case 0x27a218u: goto label_27a218;
        case 0x27a224u: goto label_27a224;
        default: break;
    }

    ctx->pc = 0x27a180u;

    // 0x27a180: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27a180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27a184: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27a184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27a188: 0x8f8297dc  lw          $v0, -0x6824($gp)
    ctx->pc = 0x27a188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x27a18c: 0x24422f90  addiu       $v0, $v0, 0x2F90
    ctx->pc = 0x27a18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12176));
    // 0x27a190: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27A190u;
    {
        const bool branch_taken_0x27a190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27a190) {
            ctx->pc = 0x27A1A0u;
            goto label_27a1a0;
        }
    }
    ctx->pc = 0x27A198u;
    // 0x27a198: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x27A198u;
    {
        const bool branch_taken_0x27a198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A19Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A198u;
            // 0x27a19c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a198) {
            ctx->pc = 0x27A228u;
            goto label_27a228;
        }
    }
    ctx->pc = 0x27A1A0u;
label_27a1a0:
    // 0x27a1a0: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x27a1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x27a1a4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27A1A4u;
    {
        const bool branch_taken_0x27a1a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A1A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A1A4u;
            // 0x27a1a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a1a4) {
            ctx->pc = 0x27A1B4u;
            goto label_27a1b4;
        }
    }
    ctx->pc = 0x27A1ACu;
    // 0x27a1ac: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x27A1ACu;
    {
        const bool branch_taken_0x27a1ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A1B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A1ACu;
            // 0x27a1b0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a1ac) {
            ctx->pc = 0x27A22Cu;
            goto label_27a22c;
        }
    }
    ctx->pc = 0x27A1B4u;
label_27a1b4:
    // 0x27a1b4: 0x8c650a9c  lw          $a1, 0xA9C($v1)
    ctx->pc = 0x27a1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2716)));
    // 0x27a1b8: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x27a1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x27a1bc: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x27a1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x27a1c0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x27a1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x27a1c4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x27a1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27a1c8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x27a1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x27a1cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27A1CCu;
    {
        const bool branch_taken_0x27a1cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27a1cc) {
            ctx->pc = 0x27A1DCu;
            goto label_27a1dc;
        }
    }
    ctx->pc = 0x27A1D4u;
    // 0x27a1d4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x27A1D4u;
    {
        const bool branch_taken_0x27a1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A1D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A1D4u;
            // 0x27a1d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a1d4) {
            ctx->pc = 0x27A228u;
            goto label_27a228;
        }
    }
    ctx->pc = 0x27A1DCu;
label_27a1dc:
    // 0x27a1dc: 0x8c450058  lw          $a1, 0x58($v0)
    ctx->pc = 0x27a1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x27a1e0: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x27A1E0u;
    SET_GPR_U32(ctx, 31, 0x27A1E8u);
    ctx->pc = 0x27A1E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A1E0u;
            // 0x27a1e4: 0x24870008  addiu       $a3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A1E8u; }
        if (ctx->pc != 0x27A1E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A1E8u; }
        if (ctx->pc != 0x27A1E8u) { return; }
    }
    ctx->pc = 0x27A1E8u;
label_27a1e8:
    // 0x27a1e8: 0x8445005c  lh          $a1, 0x5C($v0)
    ctx->pc = 0x27a1e8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x27a1ec: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x27a1ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a1f0: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x27A1F0u;
    SET_GPR_U32(ctx, 31, 0x27A1F8u);
    ctx->pc = 0x27A1F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A1F0u;
            // 0x27a1f4: 0x24870008  addiu       $a3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A1F8u; }
        if (ctx->pc != 0x27A1F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A1F8u; }
        if (ctx->pc != 0x27A1F8u) { return; }
    }
    ctx->pc = 0x27A1F8u;
label_27a1f8:
    // 0x27a1f8: 0x8445005e  lh          $a1, 0x5E($v0)
    ctx->pc = 0x27a1f8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 94)));
    // 0x27a1fc: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x27a1fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a200: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x27A200u;
    SET_GPR_U32(ctx, 31, 0x27A208u);
    ctx->pc = 0x27A204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A200u;
            // 0x27a204: 0x24870008  addiu       $a3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A208u; }
        if (ctx->pc != 0x27A208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A208u; }
        if (ctx->pc != 0x27A208u) { return; }
    }
    ctx->pc = 0x27A208u;
label_27a208:
    // 0x27a208: 0x84450060  lh          $a1, 0x60($v0)
    ctx->pc = 0x27a208u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x27a20c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x27a20cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a210: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x27A210u;
    SET_GPR_U32(ctx, 31, 0x27A218u);
    ctx->pc = 0x27A214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A210u;
            // 0x27a214: 0x24870008  addiu       $a3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A218u; }
        if (ctx->pc != 0x27A218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A218u; }
        if (ctx->pc != 0x27A218u) { return; }
    }
    ctx->pc = 0x27A218u;
label_27a218:
    // 0x27a218: 0x84450062  lh          $a1, 0x62($v0)
    ctx->pc = 0x27a218u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 98)));
    // 0x27a21c: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x27A21Cu;
    SET_GPR_U32(ctx, 31, 0x27A224u);
    ctx->pc = 0x27A220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A21Cu;
            // 0x27a220: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A224u; }
        if (ctx->pc != 0x27A224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A224u; }
        if (ctx->pc != 0x27A224u) { return; }
    }
    ctx->pc = 0x27A224u;
label_27a224:
    // 0x27a224: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27a224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27a228:
    // 0x27a228: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27a228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_27a22c:
    // 0x27a22c: 0x3e00008  jr          $ra
    ctx->pc = 0x27A22Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A22Cu;
            // 0x27a230: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27A234u;
}
