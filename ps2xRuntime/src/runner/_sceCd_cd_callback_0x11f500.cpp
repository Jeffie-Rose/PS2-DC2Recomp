#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _sceCd_cd_callback
// Address: 0x11f500 - 0x11f5a0
void _sceCd_cd_callback_0x11f500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sceCd_cd_callback_0x11f500");
#endif

    switch (ctx->pc) {
        case 0x11f554u: goto label_11f554;
        case 0x11f57cu: goto label_11f57c;
        default: break;
    }

    ctx->pc = 0x11f500u;

    // 0x11f500: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11f500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11f504: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x11f504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x11f508: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11f508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11f50c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11f50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11f510: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x11f510u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x11f514: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x11f514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11f518: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x11f518u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x11f51c: 0xae031e14  sw          $v1, 0x1E14($s0)
    ctx->pc = 0x11f51cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7700), GPR_U32(ctx, 3));
    // 0x11f520: 0x8e021e14  lw          $v0, 0x1E14($s0)
    ctx->pc = 0x11f520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7700)));
    // 0x11f524: 0xac821e18  sw          $v0, 0x1E18($a0)
    ctx->pc = 0x11f524u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7704), GPR_U32(ctx, 2));
    // 0x11f528: 0x8e031e14  lw          $v1, 0x1E14($s0)
    ctx->pc = 0x11f528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7700)));
    // 0x11f52c: 0x14650006  bne         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x11F52Cu;
    {
        const bool branch_taken_0x11f52c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x11F530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F52Cu;
            // 0x11f530: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f52c) {
            ctx->pc = 0x11F548u;
            goto label_11f548;
        }
    }
    ctx->pc = 0x11F534u;
    // 0x11f534: 0xae001e14  sw          $zero, 0x1E14($s0)
    ctx->pc = 0x11f534u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7700), GPR_U32(ctx, 0));
    // 0x11f538: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x11f538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x11f53c: 0xac401df0  sw          $zero, 0x1DF0($v0)
    ctx->pc = 0x11f53cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7664), GPR_U32(ctx, 0));
    // 0x11f540: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x11F540u;
    {
        const bool branch_taken_0x11f540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F540u;
            // 0x11f544: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f540) {
            ctx->pc = 0x11F594u;
            goto label_11f594;
        }
    }
    ctx->pc = 0x11F548u;
label_11f548:
    // 0x11f548: 0x8c441de8  lw          $a0, 0x1DE8($v0)
    ctx->pc = 0x11f548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7656)));
    // 0x11f54c: 0xc044044  jal         func_110110
    ctx->pc = 0x11F54Cu;
    SET_GPR_U32(ctx, 31, 0x11F554u);
    ctx->pc = 0x110110u;
    if (runtime->hasFunction(0x110110u)) {
        auto targetFn = runtime->lookupFunction(0x110110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F554u; }
        if (ctx->pc != 0x11F554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iSignalSema_0x110110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F554u; }
        if (ctx->pc != 0x11F554u) { return; }
    }
    ctx->pc = 0x11F554u;
label_11f554:
    // 0x11f554: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x11f554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x11f558: 0x8c621dd4  lw          $v0, 0x1DD4($v1)
    ctx->pc = 0x11f558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7636)));
    // 0x11f55c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11F55Cu;
    {
        const bool branch_taken_0x11f55c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F55Cu;
            // 0x11f560: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f55c) {
            ctx->pc = 0x11F584u;
            goto label_11f584;
        }
    }
    ctx->pc = 0x11F564u;
    // 0x11f564: 0x8c43e1c0  lw          $v1, -0x1E40($v0)
    ctx->pc = 0x11f564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959552)));
    // 0x11f568: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x11F568u;
    {
        const bool branch_taken_0x11f568 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F56Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F568u;
            // 0x11f56c: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f568) {
            ctx->pc = 0x11F584u;
            goto label_11f584;
        }
    }
    ctx->pc = 0x11F570u;
    // 0x11f570: 0x8c441de0  lw          $a0, 0x1DE0($v0)
    ctx->pc = 0x11f570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7648)));
    // 0x11f574: 0xc044044  jal         func_110110
    ctx->pc = 0x11F574u;
    SET_GPR_U32(ctx, 31, 0x11F57Cu);
    ctx->pc = 0x110110u;
    if (runtime->hasFunction(0x110110u)) {
        auto targetFn = runtime->lookupFunction(0x110110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F57Cu; }
        if (ctx->pc != 0x11F57Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iSignalSema_0x110110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F57Cu; }
        if (ctx->pc != 0x11F57Cu) { return; }
    }
    ctx->pc = 0x11F57Cu;
label_11f57c:
    // 0x11f57c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11F57Cu;
    {
        const bool branch_taken_0x11f57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f57c) {
            ctx->pc = 0x11F58Cu;
            goto label_11f58c;
        }
    }
    ctx->pc = 0x11F584u;
label_11f584:
    // 0x11f584: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x11f584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x11f588: 0xac401df0  sw          $zero, 0x1DF0($v0)
    ctx->pc = 0x11f588u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7664), GPR_U32(ctx, 0));
label_11f58c:
    // 0x11f58c: 0xae001e14  sw          $zero, 0x1E14($s0)
    ctx->pc = 0x11f58cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7700), GPR_U32(ctx, 0));
    // 0x11f590: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11f590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11f594:
    // 0x11f594: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11f594u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11f598: 0x3e00008  jr          $ra
    ctx->pc = 0x11F598u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F59Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F598u;
            // 0x11f59c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11F5A0u;
}
