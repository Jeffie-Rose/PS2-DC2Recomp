#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _LINK_MAP_TO_OBJECT__FP12RS_STACKDATAi
// Address: 0x1e3680 - 0x1e36f0
void ps2__LINK_MAP_TO_OBJECT__FP12RS_STACKDATAi_0x1e3680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__LINK_MAP_TO_OBJECT__FP12RS_STACKDATAi_0x1e3680");
#endif

    switch (ctx->pc) {
        case 0x1e36b4u: goto label_1e36b4;
        case 0x1e36c0u: goto label_1e36c0;
        default: break;
    }

    ctx->pc = 0x1e3680u;

    // 0x1e3680: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e3680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e3684: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e3684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e3688: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3688u;
    {
        const bool branch_taken_0x1e3688 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E368Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3688u;
            // 0x1e368c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3688) {
            ctx->pc = 0x1E3698u;
            goto label_1e3698;
        }
    }
    ctx->pc = 0x1E3690u;
    // 0x1e3690: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1E3690u;
    {
        const bool branch_taken_0x1e3690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3690u;
            // 0x1e3694: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3690) {
            ctx->pc = 0x1E36E4u;
            goto label_1e36e4;
        }
    }
    ctx->pc = 0x1E3698u;
label_1e3698:
    // 0x1e3698: 0x8f828db4  lw          $v0, -0x724C($gp)
    ctx->pc = 0x1e3698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938036)));
    // 0x1e369c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E369Cu;
    {
        const bool branch_taken_0x1e369c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E36A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E369Cu;
            // 0x1e36a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e369c) {
            ctx->pc = 0x1E36ACu;
            goto label_1e36ac;
        }
    }
    ctx->pc = 0x1E36A4u;
    // 0x1e36a4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1E36A4u;
    {
        const bool branch_taken_0x1e36a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E36A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E36A4u;
            // 0x1e36a8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e36a4) {
            ctx->pc = 0x1E36E8u;
            goto label_1e36e8;
        }
    }
    ctx->pc = 0x1E36ACu;
label_1e36ac:
    // 0x1e36ac: 0xc0781b8  jal         func_1E06E0
    ctx->pc = 0x1E36ACu;
    SET_GPR_U32(ctx, 31, 0x1E36B4u);
    ctx->pc = 0x1E06E0u;
    if (runtime->hasFunction(0x1E06E0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E36B4u; }
        if (ctx->pc != 0x1E36B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x1e06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E36B4u; }
        if (ctx->pc != 0x1E36B4u) { return; }
    }
    ctx->pc = 0x1E36B4u;
label_1e36b4:
    // 0x1e36b4: 0x8f848db4  lw          $a0, -0x724C($gp)
    ctx->pc = 0x1e36b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938036)));
    // 0x1e36b8: 0xc057508  jal         func_15D420
    ctx->pc = 0x1E36B8u;
    SET_GPR_U32(ctx, 31, 0x1E36C0u);
    ctx->pc = 0x1E36BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E36B8u;
            // 0x1e36bc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D420u;
    if (runtime->hasFunction(0x15D420u)) {
        auto targetFn = runtime->lookupFunction(0x15D420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E36C0u; }
        if (ctx->pc != 0x1E36C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlaceParts__4CMapFPc_0x15d420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E36C0u; }
        if (ctx->pc != 0x1E36C0u) { return; }
    }
    ctx->pc = 0x1E36C0u;
label_1e36c0:
    // 0x1e36c0: 0x8f838e70  lw          $v1, -0x7190($gp)
    ctx->pc = 0x1e36c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e36c4: 0xac6211fc  sw          $v0, 0x11FC($v1)
    ctx->pc = 0x1e36c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4604), GPR_U32(ctx, 2));
    // 0x1e36c8: 0x8f838e70  lw          $v1, -0x7190($gp)
    ctx->pc = 0x1e36c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e36cc: 0x8c6211fc  lw          $v0, 0x11FC($v1)
    ctx->pc = 0x1e36ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4604)));
    // 0x1e36d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E36D0u;
    {
        const bool branch_taken_0x1e36d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E36D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E36D0u;
            // 0x1e36d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e36d0) {
            ctx->pc = 0x1E36E0u;
            goto label_1e36e0;
        }
    }
    ctx->pc = 0x1E36D8u;
    // 0x1e36d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E36D8u;
    {
        const bool branch_taken_0x1e36d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E36DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E36D8u;
            // 0x1e36dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e36d8) {
            ctx->pc = 0x1E36E4u;
            goto label_1e36e4;
        }
    }
    ctx->pc = 0x1E36E0u;
label_1e36e0:
    // 0x1e36e0: 0xa4621204  sh          $v0, 0x1204($v1)
    ctx->pc = 0x1e36e0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4612), (uint16_t)GPR_U32(ctx, 2));
label_1e36e4:
    // 0x1e36e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e36e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e36e8:
    // 0x1e36e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E36E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E36ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E36E8u;
            // 0x1e36ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E36F0u;
}
