#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: RunMainEvent__Fv
// Address: 0x1d1360 - 0x1d13fc
void RunMainEvent__Fv_0x1d1360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RunMainEvent__Fv_0x1d1360");
#endif

    switch (ctx->pc) {
        case 0x1d1370u: goto label_1d1370;
        case 0x1d13c4u: goto label_1d13c4;
        default: break;
    }

    ctx->pc = 0x1d1360u;

    // 0x1d1360: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d1360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d1364: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d1364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d1368: 0xc095578  jal         func_2555E0
    ctx->pc = 0x1D1368u;
    SET_GPR_U32(ctx, 31, 0x1D1370u);
    ctx->pc = 0x2555E0u;
    if (runtime->hasFunction(0x2555E0u)) {
        auto targetFn = runtime->lookupFunction(0x2555E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1370u; }
        if (ctx->pc != 0x1D1370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EventLoop__Fv_0x2555e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1370u; }
        if (ctx->pc != 0x1D1370u) { return; }
    }
    ctx->pc = 0x1D1370u;
label_1d1370:
    // 0x1d1370: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1d1370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d1374: 0x10430019  beq         $v0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D1374u;
    {
        const bool branch_taken_0x1d1374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D1378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1374u;
            // 0x1d1378: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1374) {
            ctx->pc = 0x1D13DCu;
            goto label_1d13dc;
        }
    }
    ctx->pc = 0x1D137Cu;
    // 0x1d137c: 0x10430013  beq         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D137Cu;
    {
        const bool branch_taken_0x1d137c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D1380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D137Cu;
            // 0x1d1380: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d137c) {
            ctx->pc = 0x1D13CCu;
            goto label_1d13cc;
        }
    }
    ctx->pc = 0x1D1384u;
    // 0x1d1384: 0x10440003  beq         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1384u;
    {
        const bool branch_taken_0x1d1384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x1d1384) {
            ctx->pc = 0x1D1394u;
            goto label_1d1394;
        }
    }
    ctx->pc = 0x1D138Cu;
    // 0x1d138c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1D138Cu;
    {
        const bool branch_taken_0x1d138c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d138c) {
            ctx->pc = 0x1D13E8u;
            goto label_1d13e8;
        }
    }
    ctx->pc = 0x1D1394u;
label_1d1394:
    // 0x1d1394: 0x8f838db0  lw          $v1, -0x7250($gp)
    ctx->pc = 0x1d1394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
    // 0x1d1398: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1d1398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1d139c: 0xac20f6e0  sw          $zero, -0x920($at)
    ctx->pc = 0x1d139cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964960), GPR_U32(ctx, 0));
    // 0x1d13a0: 0x2402fbff  addiu       $v0, $zero, -0x401
    ctx->pc = 0x1d13a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966271));
    // 0x1d13a4: 0xa4600046  sh          $zero, 0x46($v1)
    ctx->pc = 0x1d13a4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d13a8: 0x8f838dac  lw          $v1, -0x7254($gp)
    ctx->pc = 0x1d13a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
    // 0x1d13ac: 0xac602e54  sw          $zero, 0x2E54($v1)
    ctx->pc = 0x1d13acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 11860), GPR_U32(ctx, 0));
    // 0x1d13b0: 0x8f858db0  lw          $a1, -0x7250($gp)
    ctx->pc = 0x1d13b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
    // 0x1d13b4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1d13b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1d13b8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1d13b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d13bc: 0xc0a3370  jal         func_28CDC0
    ctx->pc = 0x1D13BCu;
    SET_GPR_U32(ctx, 31, 0x1D13C4u);
    ctx->pc = 0x1D13C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D13BCu;
            // 0x1d13c0: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28CDC0u;
    if (runtime->hasFunction(0x28CDC0u)) {
        auto targetFn = runtime->lookupFunction(0x28CDC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D13C4u; }
        if (ctx->pc != 0x1D13C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoopSoundManager__Fi_0x28cdc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D13C4u; }
        if (ctx->pc != 0x1D13C4u) { return; }
    }
    ctx->pc = 0x1D13C4u;
label_1d13c4:
    // 0x1d13c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1D13C4u;
    {
        const bool branch_taken_0x1d13c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d13c4) {
            ctx->pc = 0x1D13E8u;
            goto label_1d13e8;
        }
    }
    ctx->pc = 0x1D13CCu;
label_1d13cc:
    // 0x1d13cc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1d13ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d13d0: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1d13d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1d13d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D13D4u;
    {
        const bool branch_taken_0x1d13d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D13D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D13D4u;
            // 0x1d13d8: 0xac22f6e0  sw          $v0, -0x920($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294964960), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d13d4) {
            ctx->pc = 0x1D13E8u;
            goto label_1d13e8;
        }
    }
    ctx->pc = 0x1D13DCu;
label_1d13dc:
    // 0x1d13dc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1d13dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d13e0: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1d13e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1d13e4: 0xac22f6e0  sw          $v0, -0x920($at)
    ctx->pc = 0x1d13e4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964960), GPR_U32(ctx, 2));
label_1d13e8:
    // 0x1d13e8: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1d13e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1d13ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d13ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d13f0: 0x8c22f6e0  lw          $v0, -0x920($at)
    ctx->pc = 0x1d13f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964960)));
    // 0x1d13f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D13F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D13F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D13F4u;
            // 0x1d13f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D13FCu;
}
