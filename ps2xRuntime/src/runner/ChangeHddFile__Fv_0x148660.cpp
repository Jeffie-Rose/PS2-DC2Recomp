#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ChangeHddFile__Fv
// Address: 0x148660 - 0x1486d8
void ChangeHddFile__Fv_0x148660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ChangeHddFile__Fv_0x148660");
#endif

    switch (ctx->pc) {
        case 0x148688u: goto label_148688;
        case 0x1486b4u: goto label_1486b4;
        case 0x1486c8u: goto label_1486c8;
        default: break;
    }

    ctx->pc = 0x148660u;

    // 0x148660: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x148660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x148664: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x148664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x148668: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x148668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14866c: 0x8f838028  lw          $v1, -0x7FD8($gp)
    ctx->pc = 0x14866cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934568)));
    // 0x148670: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x148670u;
    {
        const bool branch_taken_0x148670 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x148674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148670u;
            // 0x148674: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148670) {
            ctx->pc = 0x148680u;
            goto label_148680;
        }
    }
    ctx->pc = 0x148678u;
    // 0x148678: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x148678u;
    {
        const bool branch_taken_0x148678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14867Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148678u;
            // 0x14867c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148678) {
            ctx->pc = 0x1486D0u;
            goto label_1486d0;
        }
    }
    ctx->pc = 0x148680u;
label_148680:
    // 0x148680: 0xc0c6f54  jal         func_31BD50
    ctx->pc = 0x148680u;
    SET_GPR_U32(ctx, 31, 0x148688u);
    ctx->pc = 0x31BD50u;
    if (runtime->hasFunction(0x31BD50u)) {
        auto targetFn = runtime->lookupFunction(0x31BD50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148688u; }
        if (ctx->pc != 0x148688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MountHDDFileSystem__Fv_0x31bd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148688u; }
        if (ctx->pc != 0x148688u) { return; }
    }
    ctx->pc = 0x148688u;
label_148688:
    // 0x148688: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x148688u;
    {
        const bool branch_taken_0x148688 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x148688) {
            ctx->pc = 0x148698u;
            goto label_148698;
        }
    }
    ctx->pc = 0x148690u;
    // 0x148690: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x148690u;
    {
        const bool branch_taken_0x148690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148690) {
            ctx->pc = 0x1486CCu;
            goto label_1486cc;
        }
    }
    ctx->pc = 0x148698u;
label_148698:
    // 0x148698: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x148698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14869c: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x14869cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x1486a0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1486a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1486a4: 0x24844290  addiu       $a0, $a0, 0x4290
    ctx->pc = 0x1486a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17040));
    // 0x1486a8: 0xaf828028  sw          $v0, -0x7FD8($gp)
    ctx->pc = 0x1486a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934568), GPR_U32(ctx, 2));
    // 0x1486ac: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x1486ACu;
    SET_GPR_U32(ctx, 31, 0x1486B4u);
    ctx->pc = 0x1486B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1486ACu;
            // 0x1486b0: 0x24a52740  addiu       $a1, $a1, 0x2740 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1486B4u; }
        if (ctx->pc != 0x1486B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1486B4u; }
        if (ctx->pc != 0x1486B4u) { return; }
    }
    ctx->pc = 0x1486B4u;
label_1486b4:
    // 0x1486b4: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x1486b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x1486b8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1486b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1486bc: 0x24844390  addiu       $a0, $a0, 0x4390
    ctx->pc = 0x1486bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17296));
    // 0x1486c0: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x1486C0u;
    SET_GPR_U32(ctx, 31, 0x1486C8u);
    ctx->pc = 0x1486C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1486C0u;
            // 0x1486c4: 0x24a52740  addiu       $a1, $a1, 0x2740 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1486C8u; }
        if (ctx->pc != 0x1486C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1486C8u; }
        if (ctx->pc != 0x1486C8u) { return; }
    }
    ctx->pc = 0x1486C8u;
label_1486c8:
    // 0x1486c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1486c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1486cc:
    // 0x1486cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1486ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1486d0:
    // 0x1486d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1486D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1486D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1486D0u;
            // 0x1486d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1486D8u;
}
