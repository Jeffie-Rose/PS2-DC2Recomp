#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DeleteEffSpt__16CEffectScriptManFP11_EFF_SCRIPT
// Address: 0x2e13b0 - 0x2e14ec
void DeleteEffSpt__16CEffectScriptManFP11_EFF_SCRIPT_0x2e13b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DeleteEffSpt__16CEffectScriptManFP11_EFF_SCRIPT_0x2e13b0");
#endif

    switch (ctx->pc) {
        case 0x2e1498u: goto label_2e1498;
        case 0x2e14a4u: goto label_2e14a4;
        case 0x2e14b8u: goto label_2e14b8;
        case 0x2e14ccu: goto label_2e14cc;
        case 0x2e14d8u: goto label_2e14d8;
        default: break;
    }

    ctx->pc = 0x2e13b0u;

    // 0x2e13b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e13b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e13b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e13b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e13b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e13b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e13bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e13bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e13c0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2e13c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e13c4: 0x12000044  beqz        $s0, . + 4 + (0x44 << 2)
    ctx->pc = 0x2E13C4u;
    {
        const bool branch_taken_0x2e13c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E13C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E13C4u;
            // 0x2e13c8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e13c4) {
            ctx->pc = 0x2E14D8u;
            goto label_2e14d8;
        }
    }
    ctx->pc = 0x2E13CCu;
    // 0x2e13cc: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2e13ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2e13d0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E13D0u;
    {
        const bool branch_taken_0x2e13d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e13d0) {
            ctx->pc = 0x2E13E0u;
            goto label_2e13e0;
        }
    }
    ctx->pc = 0x2E13D8u;
    // 0x2e13d8: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x2E13D8u;
    {
        const bool branch_taken_0x2e13d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E13DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E13D8u;
            // 0x2e13dc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e13d8) {
            ctx->pc = 0x2E14DCu;
            goto label_2e14dc;
        }
    }
    ctx->pc = 0x2E13E0u;
label_2e13e0:
    // 0x2e13e0: 0x8e030140  lw          $v1, 0x140($s0)
    ctx->pc = 0x2e13e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2e13e4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E13E4u;
    {
        const bool branch_taken_0x2e13e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e13e4) {
            ctx->pc = 0x2E13F8u;
            goto label_2e13f8;
        }
    }
    ctx->pc = 0x2E13ECu;
    // 0x2e13ec: 0x8e020144  lw          $v0, 0x144($s0)
    ctx->pc = 0x2e13ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
    // 0x2e13f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E13F0u;
    {
        const bool branch_taken_0x2e13f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E13F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E13F0u;
            // 0x2e13f4: 0xac620144  sw          $v0, 0x144($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 324), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e13f0) {
            ctx->pc = 0x2E1410u;
            goto label_2e1410;
        }
    }
    ctx->pc = 0x2E13F8u;
label_2e13f8:
    // 0x2e13f8: 0x8e020144  lw          $v0, 0x144($s0)
    ctx->pc = 0x2e13f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
    // 0x2e13fc: 0xae221188  sw          $v0, 0x1188($s1)
    ctx->pc = 0x2e13fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4488), GPR_U32(ctx, 2));
    // 0x2e1400: 0x8e221188  lw          $v0, 0x1188($s1)
    ctx->pc = 0x2e1400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4488)));
    // 0x2e1404: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E1404u;
    {
        const bool branch_taken_0x2e1404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1404) {
            ctx->pc = 0x2E1410u;
            goto label_2e1410;
        }
    }
    ctx->pc = 0x2E140Cu;
    // 0x2e140c: 0xac400140  sw          $zero, 0x140($v0)
    ctx->pc = 0x2e140cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 0));
label_2e1410:
    // 0x2e1410: 0x8e030144  lw          $v1, 0x144($s0)
    ctx->pc = 0x2e1410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
    // 0x2e1414: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E1414u;
    {
        const bool branch_taken_0x2e1414 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1414) {
            ctx->pc = 0x2E1428u;
            goto label_2e1428;
        }
    }
    ctx->pc = 0x2E141Cu;
    // 0x2e141c: 0x8e020140  lw          $v0, 0x140($s0)
    ctx->pc = 0x2e141cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2e1420: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E1420u;
    {
        const bool branch_taken_0x2e1420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1420u;
            // 0x2e1424: 0xac620140  sw          $v0, 0x140($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1420) {
            ctx->pc = 0x2E1440u;
            goto label_2e1440;
        }
    }
    ctx->pc = 0x2E1428u;
label_2e1428:
    // 0x2e1428: 0x8e020140  lw          $v0, 0x140($s0)
    ctx->pc = 0x2e1428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2e142c: 0xae22118c  sw          $v0, 0x118C($s1)
    ctx->pc = 0x2e142cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4492), GPR_U32(ctx, 2));
    // 0x2e1430: 0x8e22118c  lw          $v0, 0x118C($s1)
    ctx->pc = 0x2e1430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4492)));
    // 0x2e1434: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E1434u;
    {
        const bool branch_taken_0x2e1434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1434) {
            ctx->pc = 0x2E1440u;
            goto label_2e1440;
        }
    }
    ctx->pc = 0x2E143Cu;
    // 0x2e143c: 0xac400144  sw          $zero, 0x144($v0)
    ctx->pc = 0x2e143cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 324), GPR_U32(ctx, 0));
label_2e1440:
    // 0x2e1440: 0x8e221184  lw          $v0, 0x1184($s1)
    ctx->pc = 0x2e1440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4484)));
    // 0x2e1444: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E1444u;
    {
        const bool branch_taken_0x2e1444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1444) {
            ctx->pc = 0x2E1460u;
            goto label_2e1460;
        }
    }
    ctx->pc = 0x2E144Cu;
    // 0x2e144c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e144cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e1450: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2e1450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e1454: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E1454u;
    {
        const bool branch_taken_0x2e1454 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e1454) {
            ctx->pc = 0x2E1460u;
            goto label_2e1460;
        }
    }
    ctx->pc = 0x2E145Cu;
    // 0x2e145c: 0xae201184  sw          $zero, 0x1184($s1)
    ctx->pc = 0x2e145cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4484), GPR_U32(ctx, 0));
label_2e1460:
    // 0x2e1460: 0x8e0200ac  lw          $v0, 0xAC($s0)
    ctx->pc = 0x2e1460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x2e1464: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E1464u;
    {
        const bool branch_taken_0x2e1464 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2e1464) {
            ctx->pc = 0x2E1484u;
            goto label_2e1484;
        }
    }
    ctx->pc = 0x2E146Cu;
    // 0x2e146c: 0x8e0300a8  lw          $v1, 0xA8($s0)
    ctx->pc = 0x2e146cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x2e1470: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2e1470u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2e1474: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2e1474u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2e1478: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2e1478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2e147c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e147cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e1480: 0xac400184  sw          $zero, 0x184($v0)
    ctx->pc = 0x2e1480u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 388), GPR_U32(ctx, 0));
label_2e1484:
    // 0x2e1484: 0x8e040134  lw          $a0, 0x134($s0)
    ctx->pc = 0x2e1484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
    // 0x2e1488: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E1488u;
    {
        const bool branch_taken_0x2e1488 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1488) {
            ctx->pc = 0x2E1498u;
            goto label_2e1498;
        }
    }
    ctx->pc = 0x2E1490u;
    // 0x2e1490: 0xc06e9a0  jal         func_1BA680
    ctx->pc = 0x2E1490u;
    SET_GPR_U32(ctx, 31, 0x2E1498u);
    ctx->pc = 0x2E1494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1490u;
            // 0x2e1494: 0x8e0500a8  lw          $a1, 0xA8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA680u;
    if (runtime->hasFunction(0x1BA680u)) {
        auto targetFn = runtime->lookupFunction(0x1BA680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1498u; }
        if (ctx->pc != 0x2E1498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Delete__8CColPrimFi_0x1ba680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1498u; }
        if (ctx->pc != 0x2E1498u) { return; }
    }
    ctx->pc = 0x2E1498u;
label_2e1498:
    // 0x2e1498: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x2e1498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2e149c: 0xc0b87d8  jal         func_2E1F60
    ctx->pc = 0x2E149Cu;
    SET_GPR_U32(ctx, 31, 0x2E14A4u);
    ctx->pc = 0x2E14A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E149Cu;
            // 0x2e14a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1F60u;
    if (runtime->hasFunction(0x2E1F60u)) {
        auto targetFn = runtime->lookupFunction(0x2E1F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E14A4u; }
        if (ctx->pc != 0x2E14A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteSprite__16CEffectScriptManFP10_ES_SPRITE_0x2e1f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E14A4u; }
        if (ctx->pc != 0x2E14A4u) { return; }
    }
    ctx->pc = 0x2E14A4u;
label_2e14a4:
    // 0x2e14a4: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x2e14a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e14a8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E14A8u;
    {
        const bool branch_taken_0x2e14a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e14a8) {
            ctx->pc = 0x2E14B8u;
            goto label_2e14b8;
        }
    }
    ctx->pc = 0x2E14B0u;
    // 0x2e14b0: 0xc04e688  jal         func_139A20
    ctx->pc = 0x2E14B0u;
    SET_GPR_U32(ctx, 31, 0x2E14B8u);
    ctx->pc = 0x2E14B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E14B0u;
            // 0x2e14b4: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139A20u;
    if (runtime->hasFunction(0x139A20u)) {
        auto targetFn = runtime->lookupFunction(0x139A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E14B8u; }
        if (ctx->pc != 0x2E14B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Free__9mgCMemoryFP1_0x139a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E14B8u; }
        if (ctx->pc != 0x2E14B8u) { return; }
    }
    ctx->pc = 0x2E14B8u;
label_2e14b8:
    // 0x2e14b8: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2e14b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2e14bc: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E14BCu;
    {
        const bool branch_taken_0x2e14bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e14bc) {
            ctx->pc = 0x2E14CCu;
            goto label_2e14cc;
        }
    }
    ctx->pc = 0x2E14C4u;
    // 0x2e14c4: 0xc04e688  jal         func_139A20
    ctx->pc = 0x2E14C4u;
    SET_GPR_U32(ctx, 31, 0x2E14CCu);
    ctx->pc = 0x2E14C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E14C4u;
            // 0x2e14c8: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139A20u;
    if (runtime->hasFunction(0x139A20u)) {
        auto targetFn = runtime->lookupFunction(0x139A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E14CCu; }
        if (ctx->pc != 0x2E14CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Free__9mgCMemoryFP1_0x139a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E14CCu; }
        if (ctx->pc != 0x2E14CCu) { return; }
    }
    ctx->pc = 0x2E14CCu;
label_2e14cc:
    // 0x2e14cc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2e14ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e14d0: 0xc04e688  jal         func_139A20
    ctx->pc = 0x2E14D0u;
    SET_GPR_U32(ctx, 31, 0x2E14D8u);
    ctx->pc = 0x2E14D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E14D0u;
            // 0x2e14d4: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139A20u;
    if (runtime->hasFunction(0x139A20u)) {
        auto targetFn = runtime->lookupFunction(0x139A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E14D8u; }
        if (ctx->pc != 0x2E14D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Free__9mgCMemoryFP1_0x139a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E14D8u; }
        if (ctx->pc != 0x2E14D8u) { return; }
    }
    ctx->pc = 0x2E14D8u;
label_2e14d8:
    // 0x2e14d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e14d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2e14dc:
    // 0x2e14dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e14dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e14e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e14e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e14e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E14E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E14E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E14E4u;
            // 0x2e14e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E14ECu;
}
