#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ChangeDefaultFile__Fv
// Address: 0x1486e0 - 0x148748
void ChangeDefaultFile__Fv_0x1486e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ChangeDefaultFile__Fv_0x1486e0");
#endif

    switch (ctx->pc) {
        case 0x148708u: goto label_148708;
        case 0x148724u: goto label_148724;
        case 0x148738u: goto label_148738;
        default: break;
    }

    ctx->pc = 0x1486e0u;

    // 0x1486e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1486e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1486e4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1486e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1486e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1486e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1486ec: 0x8f838028  lw          $v1, -0x7FD8($gp)
    ctx->pc = 0x1486ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934568)));
    // 0x1486f0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1486F0u;
    {
        const bool branch_taken_0x1486f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1486F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1486F0u;
            // 0x1486f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1486f0) {
            ctx->pc = 0x148700u;
            goto label_148700;
        }
    }
    ctx->pc = 0x1486F8u;
    // 0x1486f8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1486F8u;
    {
        const bool branch_taken_0x1486f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1486FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1486F8u;
            // 0x1486fc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1486f8) {
            ctx->pc = 0x148740u;
            goto label_148740;
        }
    }
    ctx->pc = 0x148700u;
label_148700:
    // 0x148700: 0xc0c6f8c  jal         func_31BE30
    ctx->pc = 0x148700u;
    SET_GPR_U32(ctx, 31, 0x148708u);
    ctx->pc = 0x31BE30u;
    if (runtime->hasFunction(0x31BE30u)) {
        auto targetFn = runtime->lookupFunction(0x31BE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148708u; }
        if (ctx->pc != 0x148708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UmountHDDFileSystem__Fv_0x31be30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148708u; }
        if (ctx->pc != 0x148708u) { return; }
    }
    ctx->pc = 0x148708u;
label_148708:
    // 0x148708: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x148708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14870c: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x14870cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x148710: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x148710u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x148714: 0x24844290  addiu       $a0, $a0, 0x4290
    ctx->pc = 0x148714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17040));
    // 0x148718: 0xaf828028  sw          $v0, -0x7FD8($gp)
    ctx->pc = 0x148718u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934568), GPR_U32(ctx, 2));
    // 0x14871c: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x14871Cu;
    SET_GPR_U32(ctx, 31, 0x148724u);
    ctx->pc = 0x148720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14871Cu;
            // 0x148720: 0x24a52748  addiu       $a1, $a1, 0x2748 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148724u; }
        if (ctx->pc != 0x148724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148724u; }
        if (ctx->pc != 0x148724u) { return; }
    }
    ctx->pc = 0x148724u;
label_148724:
    // 0x148724: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x148724u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x148728: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x148728u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x14872c: 0x24844390  addiu       $a0, $a0, 0x4390
    ctx->pc = 0x14872cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17296));
    // 0x148730: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x148730u;
    SET_GPR_U32(ctx, 31, 0x148738u);
    ctx->pc = 0x148734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148730u;
            // 0x148734: 0x24a52748  addiu       $a1, $a1, 0x2748 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148738u; }
        if (ctx->pc != 0x148738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148738u; }
        if (ctx->pc != 0x148738u) { return; }
    }
    ctx->pc = 0x148738u;
label_148738:
    // 0x148738: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x148738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14873c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14873cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_148740:
    // 0x148740: 0x3e00008  jr          $ra
    ctx->pc = 0x148740u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148740u;
            // 0x148744: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x148748u;
}
