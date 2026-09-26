#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _lf_bind
// Address: 0x117338 - 0x117438
void _lf_bind_0x117338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_lf_bind_0x117338");
#endif

    switch (ctx->pc) {
        case 0x117360u: goto label_117360;
        case 0x117374u: goto label_117374;
        case 0x1173b8u: goto label_1173b8;
        case 0x1173f8u: goto label_1173f8;
        default: break;
    }

    ctx->pc = 0x117338u;

    // 0x117338: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x117338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11733c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x11733cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x117340: 0x3c120033  lui         $s2, 0x33
    ctx->pc = 0x117340u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
    // 0x117344: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x117344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x117348: 0x8e420f40  lw          $v0, 0xF40($s2)
    ctx->pc = 0x117348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3904)));
    // 0x11734c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x11734cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x117350: 0x4410032  bgez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x117350u;
    {
        const bool branch_taken_0x117350 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x117354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117350u;
            // 0x117354: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117350) {
            ctx->pc = 0x11741Cu;
            goto label_11741c;
        }
    }
    ctx->pc = 0x117358u;
    // 0x117358: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x117358u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
    // 0x11735c: 0x2630cd00  addiu       $s0, $s1, -0x3300
    ctx->pc = 0x11735cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954240));
label_117360:
    // 0x117360: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x117360u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x117364: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x117364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117368: 0x34a50006  ori         $a1, $a1, 0x6
    ctx->pc = 0x117368u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6);
    // 0x11736c: 0xc044c2c  jal         func_1130B0
    ctx->pc = 0x11736Cu;
    SET_GPR_U32(ctx, 31, 0x117374u);
    ctx->pc = 0x117370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11736Cu;
            // 0x117370: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1130B0u;
    if (runtime->hasFunction(0x1130B0u)) {
        auto targetFn = runtime->lookupFunction(0x1130B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117374u; }
        if (ctx->pc != 0x117374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifBindRpc_0x1130b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117374u; }
        if (ctx->pc != 0x117374u) { return; }
    }
    ctx->pc = 0x117374u;
label_117374:
    // 0x117374: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x117374u;
    {
        const bool branch_taken_0x117374 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x117374) {
            ctx->pc = 0x117378u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x117374u;
            // 0x117378: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x117384u;
            goto label_117384;
        }
    }
    ctx->pc = 0x11737Cu;
    // 0x11737c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x11737Cu;
    {
        const bool branch_taken_0x11737c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11737Cu;
            // 0x117380: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11737c) {
            ctx->pc = 0x117420u;
            goto label_117420;
        }
    }
    ctx->pc = 0x117384u;
label_117384:
    // 0x117384: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x117384u;
    {
        const bool branch_taken_0x117384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117384u;
            // 0x117388: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117384) {
            ctx->pc = 0x1173ECu;
            goto label_1173ec;
        }
    }
    ctx->pc = 0x11738Cu;
    // 0x11738c: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x11738cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
    // 0x117390: 0xae400f40  sw          $zero, 0xF40($s2)
    ctx->pc = 0x117390u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3904), GPR_U32(ctx, 0));
    // 0x117394: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x117394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x117398: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x117398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x11739c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11739cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1173a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1173a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1173a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1173a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1173a8: 0x2629cb00  addiu       $t1, $s1, -0x3500
    ctx->pc = 0x1173a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 4294953728));
    // 0x1173ac: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1173acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1173b0: 0xc044ca0  jal         func_113280
    ctx->pc = 0x1173B0u;
    SET_GPR_U32(ctx, 31, 0x1173B8u);
    ctx->pc = 0x1173B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1173B0u;
            // 0x1173b4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x113280u;
    if (runtime->hasFunction(0x113280u)) {
        auto targetFn = runtime->lookupFunction(0x113280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1173B8u; }
        if (ctx->pc != 0x1173B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifCallRpc_0x113280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1173B8u; }
        if (ctx->pc != 0x1173B8u) { return; }
    }
    ctx->pc = 0x1173B8u;
label_1173b8:
    // 0x1173b8: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1173B8u;
    {
        const bool branch_taken_0x1173b8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1173BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1173B8u;
            // 0x1173bc: 0x3c030038  lui         $v1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1173b8) {
            ctx->pc = 0x1173CCu;
            goto label_1173cc;
        }
    }
    ctx->pc = 0x1173C0u;
    // 0x1173c0: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1173c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1173c4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1173C4u;
    {
        const bool branch_taken_0x1173c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1173C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1173C4u;
            // 0x1173c8: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1173c4) {
            ctx->pc = 0x117420u;
            goto label_117420;
        }
    }
    ctx->pc = 0x1173CCu;
label_1173cc:
    // 0x1173cc: 0x2627cb00  addiu       $a3, $s1, -0x3500
    ctx->pc = 0x1173ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 4294953728));
    // 0x1173d0: 0x2466cd28  addiu       $a2, $v1, -0x32D8
    ctx->pc = 0x1173d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954280));
    // 0x1173d4: 0x88e40003  lwl         $a0, 0x3($a3)
    ctx->pc = 0x1173d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x1173d8: 0x98e40000  lwr         $a0, 0x0($a3)
    ctx->pc = 0x1173d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x1173dc: 0xa8c40003  swl         $a0, 0x3($a2)
    ctx->pc = 0x1173dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1173e0: 0xb8c40000  swr         $a0, 0x0($a2)
    ctx->pc = 0x1173e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1173e4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1173E4u;
    {
        const bool branch_taken_0x1173e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1173E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1173E4u;
            // 0x1173e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1173e4) {
            ctx->pc = 0x117420u;
            goto label_117420;
        }
    }
    ctx->pc = 0x1173ECu;
label_1173ec:
    // 0x1173ec: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1173ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x1173f0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1173f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1173f4: 0x0  nop
    ctx->pc = 0x1173f4u;
    // NOP
label_1173f8:
    // 0x1173f8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1173f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1173fc: 0x0  nop
    ctx->pc = 0x1173fcu;
    // NOP
    // 0x117400: 0x0  nop
    ctx->pc = 0x117400u;
    // NOP
    // 0x117404: 0x0  nop
    ctx->pc = 0x117404u;
    // NOP
    // 0x117408: 0x0  nop
    ctx->pc = 0x117408u;
    // NOP
    // 0x11740c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11740Cu;
    {
        const bool branch_taken_0x11740c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11740c) {
            ctx->pc = 0x1173F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1173f8;
        }
    }
    ctx->pc = 0x117414u;
    // 0x117414: 0x1000ffd2  b           . + 4 + (-0x2E << 2)
    ctx->pc = 0x117414u;
    {
        const bool branch_taken_0x117414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117414u;
            // 0x117418: 0x2630cd00  addiu       $s0, $s1, -0x3300 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117414) {
            ctx->pc = 0x117360u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_117360;
        }
    }
    ctx->pc = 0x11741Cu;
label_11741c:
    // 0x11741c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11741cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_117420:
    // 0x117420: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x117420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x117424: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x117424u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x117428: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x117428u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11742c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11742cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117430: 0x3e00008  jr          $ra
    ctx->pc = 0x117430u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117430u;
            // 0x117434: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x117438u;
}
