#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _sceFs_Rcv_Intr
// Address: 0x113af8 - 0x113eb8
void _sceFs_Rcv_Intr_0x113af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sceFs_Rcv_Intr_0x113af8");
#endif

    switch (ctx->pc) {
        case 0x113b84u: goto label_113b84;
        case 0x113be0u: goto label_113be0;
        case 0x113c20u: goto label_113c20;
        case 0x113c84u: goto label_113c84;
        case 0x113ce0u: goto label_113ce0;
        case 0x113e38u: goto label_113e38;
        case 0x113e74u: goto label_113e74;
        case 0x113eacu: goto label_113eac;
        default: break;
    }

    ctx->pc = 0x113af8u;

    // 0x113af8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x113af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x113afc: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x113afcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x113b00: 0x2446c240  addiu       $a2, $v0, -0x3DC0
    ctx->pc = 0x113b00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951488));
    // 0x113b04: 0x3c072000  lui         $a3, 0x2000
    ctx->pc = 0x113b04u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8192 << 16));
    // 0x113b08: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x113b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x113b0c: 0xc72825  or          $a1, $a2, $a3
    ctx->pc = 0x113b0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x113b10: 0x88a20003  lwl         $v0, 0x3($a1)
    ctx->pc = 0x113b10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x113b14: 0x98a20000  lwr         $v0, 0x0($a1)
    ctx->pc = 0x113b14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x113b18: 0xaba20003  swl         $v0, 0x3($sp)
    ctx->pc = 0x113b18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x113b1c: 0x24c30004  addiu       $v1, $a2, 0x4
    ctx->pc = 0x113b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x113b20: 0xbba20000  swr         $v0, 0x0($sp)
    ctx->pc = 0x113b20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x113b24: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x113b24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x113b28: 0x24c40008  addiu       $a0, $a2, 0x8
    ctx->pc = 0x113b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x113b2c: 0x88650003  lwl         $a1, 0x3($v1)
    ctx->pc = 0x113b2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 5) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 5, (int32_t)merged); }
    // 0x113b30: 0x98650000  lwr         $a1, 0x0($v1)
    ctx->pc = 0x113b30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 5) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 5) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 5, merged64); }
    // 0x113b34: 0xaba50007  swl         $a1, 0x7($sp)
    ctx->pc = 0x113b34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x113b38: 0xbba50004  swr         $a1, 0x4($sp)
    ctx->pc = 0x113b38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x113b3c: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x113b3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x113b40: 0x24c2000c  addiu       $v0, $a2, 0xC
    ctx->pc = 0x113b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x113b44: 0x88830003  lwl         $v1, 0x3($a0)
    ctx->pc = 0x113b44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x113b48: 0x98830000  lwr         $v1, 0x0($a0)
    ctx->pc = 0x113b48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x113b4c: 0xaba3000b  swl         $v1, 0xB($sp)
    ctx->pc = 0x113b4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x113b50: 0xbba30008  swr         $v1, 0x8($sp)
    ctx->pc = 0x113b50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x113b54: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x113b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x113b58: 0x884a0003  lwl         $t2, 0x3($v0)
    ctx->pc = 0x113b58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 10) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 10, (int32_t)merged); }
    // 0x113b5c: 0x984a0000  lwr         $t2, 0x0($v0)
    ctx->pc = 0x113b5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 10) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 10) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 10, merged64); }
    // 0x113b60: 0xabaa000f  swl         $t2, 0xF($sp)
    ctx->pc = 0x113b60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 10); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x113b64: 0xbbaa000c  swr         $t2, 0xC($sp)
    ctx->pc = 0x113b64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 10); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x113b68: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x113b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113b6c: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x113B6Cu;
    {
        const bool branch_taken_0x113b6c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x113B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113B6Cu;
            // 0x113b70: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113b6c) {
            ctx->pc = 0x113B84u;
            goto label_113b84;
        }
    }
    ctx->pc = 0x113B74u;
    // 0x113b74: 0x24c50010  addiu       $a1, $a2, 0x10
    ctx->pc = 0x113b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x113b78: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x113b78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x113b7c: 0xc049c18  jal         func_127060
    ctx->pc = 0x113B7Cu;
    SET_GPR_U32(ctx, 31, 0x113B84u);
    ctx->pc = 0x113B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113B7Cu;
            // 0x113b80: 0xa72825  or          $a1, $a1, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113B84u; }
        if (ctx->pc != 0x113B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113B84u; }
        if (ctx->pc != 0x113B84u) { return; }
    }
    ctx->pc = 0x113B84u;
label_113b84:
    // 0x113b84: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x113b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x113b88: 0x2444fffe  addiu       $a0, $v0, -0x2
    ctx->pc = 0x113b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x113b8c: 0x2c830019  sltiu       $v1, $a0, 0x19
    ctx->pc = 0x113b8cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x113b90: 0x106000a9  beqz        $v1, . + 4 + (0xA9 << 2)
    ctx->pc = 0x113B90u;
    {
        const bool branch_taken_0x113b90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x113B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113B90u;
            // 0x113b94: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113b90) {
            ctx->pc = 0x113E38u;
            goto label_113e38;
        }
    }
    ctx->pc = 0x113B98u;
    // 0x113b98: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x113b98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x113b9c: 0x24420c80  addiu       $v0, $v0, 0xC80
    ctx->pc = 0x113b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3200));
    // 0x113ba0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x113ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x113ba4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x113ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x113ba8: 0x800008  jr          $a0
    ctx->pc = 0x113BA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x113BB0u: goto label_113bb0;
            case 0x113C48u: goto label_113c48;
            case 0x113D28u: goto label_113d28;
            case 0x113DD8u: goto label_113dd8;
            case 0x113E38u: goto label_113e38;
            default: break;
        }
        return;
    }
    ctx->pc = 0x113BB0u;
label_113bb0:
    // 0x113bb0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x113bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x113bb4: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x113bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x113bb8: 0x2442c254  addiu       $v0, $v0, -0x3DAC
    ctx->pc = 0x113bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951508));
    // 0x113bbc: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x113bbcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x113bc0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x113bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x113bc4: 0x5840000f  blezl       $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x113BC4u;
    {
        const bool branch_taken_0x113bc4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x113bc4) {
            ctx->pc = 0x113BC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x113BC4u;
            // 0x113bc8: 0x8cc20004  lw          $v0, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x113C04u;
            goto label_113c04;
        }
    }
    ctx->pc = 0x113BCCu;
    // 0x113bcc: 0x8cc80008  lw          $t0, 0x8($a2)
    ctx->pc = 0x113bccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x113bd0: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x113BD0u;
    {
        const bool branch_taken_0x113bd0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x113BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113BD0u;
            // 0x113bd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113bd0) {
            ctx->pc = 0x113C00u;
            goto label_113c00;
        }
    }
    ctx->pc = 0x113BD8u;
    // 0x113bd8: 0x24c70010  addiu       $a3, $a2, 0x10
    ctx->pc = 0x113bd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x113bdc: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x113bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_113be0:
    // 0x113be0: 0x1052021  addu        $a0, $t0, $a1
    ctx->pc = 0x113be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x113be4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x113be4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x113be8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x113be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x113bec: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x113becu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x113bf0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x113bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x113bf4: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x113bf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x113bf8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x113BF8u;
    {
        const bool branch_taken_0x113bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x113BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113BF8u;
            // 0x113bfc: 0xe51021  addu        $v0, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113bf8) {
            ctx->pc = 0x113BE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_113be0;
        }
    }
    ctx->pc = 0x113C00u;
label_113c00:
    // 0x113c00: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x113c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_113c04:
    // 0x113c04: 0x1840008d  blez        $v0, . + 4 + (0x8D << 2)
    ctx->pc = 0x113C04u;
    {
        const bool branch_taken_0x113c04 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x113C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113C04u;
            // 0x113c08: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113c04) {
            ctx->pc = 0x113E3Cu;
            goto label_113e3c;
        }
    }
    ctx->pc = 0x113C0Cu;
    // 0x113c0c: 0x8cc8000c  lw          $t0, 0xC($a2)
    ctx->pc = 0x113c0cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x113c10: 0x1840008a  blez        $v0, . + 4 + (0x8A << 2)
    ctx->pc = 0x113C10u;
    {
        const bool branch_taken_0x113c10 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x113C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113C10u;
            // 0x113c14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113c10) {
            ctx->pc = 0x113E3Cu;
            goto label_113e3c;
        }
    }
    ctx->pc = 0x113C18u;
    // 0x113c18: 0x24c70050  addiu       $a3, $a2, 0x50
    ctx->pc = 0x113c18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x113c1c: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x113c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_113c20:
    // 0x113c20: 0x1052021  addu        $a0, $t0, $a1
    ctx->pc = 0x113c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x113c24: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x113c24u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x113c28: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x113c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x113c2c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x113c2cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x113c30: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x113c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x113c34: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x113c34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x113c38: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x113C38u;
    {
        const bool branch_taken_0x113c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x113C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113C38u;
            // 0x113c3c: 0xe51021  addu        $v0, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113c38) {
            ctx->pc = 0x113C20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_113c20;
        }
    }
    ctx->pc = 0x113C40u;
    // 0x113c40: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x113C40u;
    {
        const bool branch_taken_0x113c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113C40u;
            // 0x113c44: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113c40) {
            ctx->pc = 0x113E3Cu;
            goto label_113e3c;
        }
    }
    ctx->pc = 0x113C48u;
label_113c48:
    // 0x113c48: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x113c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x113c4c: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x113c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x113c50: 0x2442c254  addiu       $v0, $v0, -0x3DAC
    ctx->pc = 0x113c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951508));
    // 0x113c54: 0x441825  or          $v1, $v0, $a0
    ctx->pc = 0x113c54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x113c58: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x113c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x113c5c: 0x88660003  lwl         $a2, 0x3($v1)
    ctx->pc = 0x113c5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x113c60: 0x98660000  lwr         $a2, 0x0($v1)
    ctx->pc = 0x113c60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x113c64: 0xaba60013  swl         $a2, 0x13($sp)
    ctx->pc = 0x113c64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x113c68: 0xbba60010  swr         $a2, 0x10($sp)
    ctx->pc = 0x113c68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x113c6c: 0x441825  or          $v1, $v0, $a0
    ctx->pc = 0x113c6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x113c70: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x113c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113c74: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x113c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x113c78: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x113c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x113c7c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x113C7Cu;
    {
        const bool branch_taken_0x113c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113C7Cu;
            // 0x113c80: 0x24620140  addiu       $v0, $v1, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113c7c) {
            ctx->pc = 0x113CE0u;
            goto label_113ce0;
        }
    }
    ctx->pc = 0x113C84u;
label_113c84:
    // 0x113c84: 0x686a0007  ldl         $t2, 0x7($v1)
    ctx->pc = 0x113c84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x113c88: 0x6c6a0000  ldr         $t2, 0x0($v1)
    ctx->pc = 0x113c88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x113c8c: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x113c8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x113c90: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x113c90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x113c94: 0x68660017  ldl         $a2, 0x17($v1)
    ctx->pc = 0x113c94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x113c98: 0x6c660010  ldr         $a2, 0x10($v1)
    ctx->pc = 0x113c98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x113c9c: 0x6867001f  ldl         $a3, 0x1F($v1)
    ctx->pc = 0x113c9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x113ca0: 0x6c670018  ldr         $a3, 0x18($v1)
    ctx->pc = 0x113ca0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x113ca4: 0xb08a0007  sdl         $t2, 0x7($a0)
    ctx->pc = 0x113ca4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x113ca8: 0xb48a0000  sdr         $t2, 0x0($a0)
    ctx->pc = 0x113ca8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x113cac: 0xb085000f  sdl         $a1, 0xF($a0)
    ctx->pc = 0x113cacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x113cb0: 0xb4850008  sdr         $a1, 0x8($a0)
    ctx->pc = 0x113cb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x113cb4: 0xb0860017  sdl         $a2, 0x17($a0)
    ctx->pc = 0x113cb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x113cb8: 0xb4860010  sdr         $a2, 0x10($a0)
    ctx->pc = 0x113cb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x113cbc: 0xb087001f  sdl         $a3, 0x1F($a0)
    ctx->pc = 0x113cbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x113cc0: 0xb4870018  sdr         $a3, 0x18($a0)
    ctx->pc = 0x113cc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x113cc4: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x113cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x113cc8: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x113cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x113ccc: 0x0  nop
    ctx->pc = 0x113cccu;
    // NOP
    // 0x113cd0: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x113CD0u;
    {
        const bool branch_taken_0x113cd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x113cd0) {
            ctx->pc = 0x113C84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_113c84;
        }
    }
    ctx->pc = 0x113CD8u;
    // 0x113cd8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x113CD8u;
    {
        const bool branch_taken_0x113cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x113cd8) {
            ctx->pc = 0x113D14u;
            goto label_113d14;
        }
    }
    ctx->pc = 0x113CE0u;
label_113ce0:
    // 0x113ce0: 0xdc680000  ld          $t0, 0x0($v1)
    ctx->pc = 0x113ce0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x113ce4: 0xdc690008  ld          $t1, 0x8($v1)
    ctx->pc = 0x113ce4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x113ce8: 0xdc6a0010  ld          $t2, 0x10($v1)
    ctx->pc = 0x113ce8u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x113cec: 0xdc650018  ld          $a1, 0x18($v1)
    ctx->pc = 0x113cecu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x113cf0: 0xfc880000  sd          $t0, 0x0($a0)
    ctx->pc = 0x113cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 8));
    // 0x113cf4: 0xfc890008  sd          $t1, 0x8($a0)
    ctx->pc = 0x113cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 9));
    // 0x113cf8: 0xfc8a0010  sd          $t2, 0x10($a0)
    ctx->pc = 0x113cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 10));
    // 0x113cfc: 0xfc850018  sd          $a1, 0x18($a0)
    ctx->pc = 0x113cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 5));
    // 0x113d00: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x113d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x113d04: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x113d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x113d08: 0x0  nop
    ctx->pc = 0x113d08u;
    // NOP
    // 0x113d0c: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x113D0Cu;
    {
        const bool branch_taken_0x113d0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x113d0c) {
            ctx->pc = 0x113CE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_113ce0;
        }
    }
    ctx->pc = 0x113D14u;
label_113d14:
    // 0x113d14: 0x88660003  lwl         $a2, 0x3($v1)
    ctx->pc = 0x113d14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x113d18: 0x98660000  lwr         $a2, 0x0($v1)
    ctx->pc = 0x113d18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x113d1c: 0xa8860003  swl         $a2, 0x3($a0)
    ctx->pc = 0x113d1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x113d20: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x113D20u;
    {
        const bool branch_taken_0x113d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113D20u;
            // 0x113d24: 0xb8860000  swr         $a2, 0x0($a0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x113d20) {
            ctx->pc = 0x113E38u;
            goto label_113e38;
        }
    }
    ctx->pc = 0x113D28u;
label_113d28:
    // 0x113d28: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x113d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x113d2c: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x113d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x113d30: 0x2442c254  addiu       $v0, $v0, -0x3DAC
    ctx->pc = 0x113d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951508));
    // 0x113d34: 0x441825  or          $v1, $v0, $a0
    ctx->pc = 0x113d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x113d38: 0x886a0003  lwl         $t2, 0x3($v1)
    ctx->pc = 0x113d38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 10) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 10, (int32_t)merged); }
    // 0x113d3c: 0x986a0000  lwr         $t2, 0x0($v1)
    ctx->pc = 0x113d3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 10) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 10) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 10, merged64); }
    // 0x113d40: 0xabaa0013  swl         $t2, 0x13($sp)
    ctx->pc = 0x113d40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 10); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x113d44: 0xbbaa0010  swr         $t2, 0x10($sp)
    ctx->pc = 0x113d44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 10); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x113d48: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x113d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x113d4c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x113d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x113d50: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x113d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113d54: 0x68480007  ldl         $t0, 0x7($v0)
    ctx->pc = 0x113d54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x113d58: 0x6c480000  ldr         $t0, 0x0($v0)
    ctx->pc = 0x113d58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x113d5c: 0x6849000f  ldl         $t1, 0xF($v0)
    ctx->pc = 0x113d5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x113d60: 0x6c490008  ldr         $t1, 0x8($v0)
    ctx->pc = 0x113d60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x113d64: 0x684a0017  ldl         $t2, 0x17($v0)
    ctx->pc = 0x113d64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x113d68: 0x6c4a0010  ldr         $t2, 0x10($v0)
    ctx->pc = 0x113d68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x113d6c: 0x6844001f  ldl         $a0, 0x1F($v0)
    ctx->pc = 0x113d6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x113d70: 0x6c440018  ldr         $a0, 0x18($v0)
    ctx->pc = 0x113d70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x113d74: 0xb0680007  sdl         $t0, 0x7($v1)
    ctx->pc = 0x113d74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x113d78: 0xb4680000  sdr         $t0, 0x0($v1)
    ctx->pc = 0x113d78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x113d7c: 0xb069000f  sdl         $t1, 0xF($v1)
    ctx->pc = 0x113d7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x113d80: 0xb4690008  sdr         $t1, 0x8($v1)
    ctx->pc = 0x113d80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x113d84: 0xb06a0017  sdl         $t2, 0x17($v1)
    ctx->pc = 0x113d84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x113d88: 0xb46a0010  sdr         $t2, 0x10($v1)
    ctx->pc = 0x113d88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x113d8c: 0xb064001f  sdl         $a0, 0x1F($v1)
    ctx->pc = 0x113d8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x113d90: 0xb4640018  sdr         $a0, 0x18($v1)
    ctx->pc = 0x113d90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x113d94: 0x68480027  ldl         $t0, 0x27($v0)
    ctx->pc = 0x113d94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x113d98: 0x6c480020  ldr         $t0, 0x20($v0)
    ctx->pc = 0x113d98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x113d9c: 0x6849002f  ldl         $t1, 0x2F($v0)
    ctx->pc = 0x113d9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x113da0: 0x6c490028  ldr         $t1, 0x28($v0)
    ctx->pc = 0x113da0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x113da4: 0x684a0037  ldl         $t2, 0x37($v0)
    ctx->pc = 0x113da4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x113da8: 0x6c4a0030  ldr         $t2, 0x30($v0)
    ctx->pc = 0x113da8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x113dac: 0x6844003f  ldl         $a0, 0x3F($v0)
    ctx->pc = 0x113dacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x113db0: 0x6c440038  ldr         $a0, 0x38($v0)
    ctx->pc = 0x113db0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x113db4: 0xb0680027  sdl         $t0, 0x27($v1)
    ctx->pc = 0x113db4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x113db8: 0xb4680020  sdr         $t0, 0x20($v1)
    ctx->pc = 0x113db8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x113dbc: 0xb069002f  sdl         $t1, 0x2F($v1)
    ctx->pc = 0x113dbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x113dc0: 0xb4690028  sdr         $t1, 0x28($v1)
    ctx->pc = 0x113dc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x113dc4: 0xb06a0037  sdl         $t2, 0x37($v1)
    ctx->pc = 0x113dc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x113dc8: 0xb46a0030  sdr         $t2, 0x30($v1)
    ctx->pc = 0x113dc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x113dcc: 0xb064003f  sdl         $a0, 0x3F($v1)
    ctx->pc = 0x113dccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x113dd0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x113DD0u;
    {
        const bool branch_taken_0x113dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113DD0u;
            // 0x113dd4: 0xb4640038  sdr         $a0, 0x38($v1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 3), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x113dd0) {
            ctx->pc = 0x113E38u;
            goto label_113e38;
        }
    }
    ctx->pc = 0x113DD8u;
label_113dd8:
    // 0x113dd8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x113dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x113ddc: 0x3c072000  lui         $a3, 0x2000
    ctx->pc = 0x113ddcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8192 << 16));
    // 0x113de0: 0x2445c254  addiu       $a1, $v0, -0x3DAC
    ctx->pc = 0x113de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951508));
    // 0x113de4: 0xa71825  or          $v1, $a1, $a3
    ctx->pc = 0x113de4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x113de8: 0x24a20004  addiu       $v0, $a1, 0x4
    ctx->pc = 0x113de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x113dec: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x113decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x113df0: 0x88660003  lwl         $a2, 0x3($v1)
    ctx->pc = 0x113df0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x113df4: 0x98660000  lwr         $a2, 0x0($v1)
    ctx->pc = 0x113df4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x113df8: 0xaba60013  swl         $a2, 0x13($sp)
    ctx->pc = 0x113df8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x113dfc: 0xbba60010  swr         $a2, 0x10($sp)
    ctx->pc = 0x113dfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x113e00: 0x88430003  lwl         $v1, 0x3($v0)
    ctx->pc = 0x113e00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x113e04: 0x98430000  lwr         $v1, 0x0($v0)
    ctx->pc = 0x113e04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x113e08: 0xaba30017  swl         $v1, 0x17($sp)
    ctx->pc = 0x113e08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x113e0c: 0xbba30014  swr         $v1, 0x14($sp)
    ctx->pc = 0x113e0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x113e10: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x113e10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x113e14: 0x2cc20401  sltiu       $v0, $a2, 0x401
    ctx->pc = 0x113e14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
    // 0x113e18: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x113E18u;
    {
        const bool branch_taken_0x113e18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x113E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113E18u;
            // 0x113e1c: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113e18) {
            ctx->pc = 0x113E2Cu;
            goto label_113e2c;
        }
    }
    ctx->pc = 0x113E20u;
    // 0x113e20: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x113e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x113e24: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x113e24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x113e28: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x113e28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_113e2c:
    // 0x113e2c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x113e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113e30: 0xc049c18  jal         func_127060
    ctx->pc = 0x113E30u;
    SET_GPR_U32(ctx, 31, 0x113E38u);
    ctx->pc = 0x113E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113E30u;
            // 0x113e34: 0xe52825  or          $a1, $a3, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113E38u; }
        if (ctx->pc != 0x113E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113E38u; }
        if (ctx->pc != 0x113E38u) { return; }
    }
    ctx->pc = 0x113E38u;
label_113e38:
    // 0x113e38: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x113e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_113e3c:
    // 0x113e3c: 0x4810019  bgez        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x113E3Cu;
    {
        const bool branch_taken_0x113e3c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x113E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113E3Cu;
            // 0x113e40: 0x3c070033  lui         $a3, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113e3c) {
            ctx->pc = 0x113EA4u;
            goto label_113ea4;
        }
    }
    ctx->pc = 0x113E44u;
    // 0x113e44: 0x41023  negu        $v0, $a0
    ctx->pc = 0x113e44u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x113e48: 0x8ce30ea0  lw          $v1, 0xEA0($a3)
    ctx->pc = 0x113e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 3744)));
    // 0x113e4c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x113e4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113e50: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x113e50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x113e54: 0x14660006  bne         $v1, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x113E54u;
    {
        const bool branch_taken_0x113e54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x113E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113E54u;
            // 0x113e58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113e54) {
            ctx->pc = 0x113E70u;
            goto label_113e70;
        }
    }
    ctx->pc = 0x113E5Cu;
    // 0x113e5c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x113e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x113e60: 0xace20ea0  sw          $v0, 0xEA0($a3)
    ctx->pc = 0x113e60u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 3744), GPR_U32(ctx, 2));
    // 0x113e64: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x113E64u;
    {
        const bool branch_taken_0x113e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113E64u;
            // 0x113e68: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113e64) {
            ctx->pc = 0x113EB0u;
            goto label_113eb0;
        }
    }
    ctx->pc = 0x113E6Cu;
    // 0x113e6c: 0x0  nop
    ctx->pc = 0x113e6cu;
    // NOP
label_113e70:
    // 0x113e70: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x113e70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_113e74:
    // 0x113e74: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x113e74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x113e78: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x113E78u;
    {
        const bool branch_taken_0x113e78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113E78u;
            // 0x113e7c: 0x24e20ea0  addiu       $v0, $a3, 0xEA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 3744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113e78) {
            ctx->pc = 0x113EACu;
            goto label_113eac;
        }
    }
    ctx->pc = 0x113E80u;
    // 0x113e80: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x113e80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x113e84: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x113e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x113e88: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x113e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x113e8c: 0x1486fff9  bne         $a0, $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x113E8Cu;
    {
        const bool branch_taken_0x113e8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x113E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113E8Cu;
            // 0x113e90: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113e8c) {
            ctx->pc = 0x113E74u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_113e74;
        }
    }
    ctx->pc = 0x113E94u;
    // 0x113e94: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x113e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x113e98: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x113e98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x113e9c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x113E9Cu;
    {
        const bool branch_taken_0x113e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113E9Cu;
            // 0x113ea0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113e9c) {
            ctx->pc = 0x113EB0u;
            goto label_113eb0;
        }
    }
    ctx->pc = 0x113EA4u;
label_113ea4:
    // 0x113ea4: 0xc044044  jal         func_110110
    ctx->pc = 0x113EA4u;
    SET_GPR_U32(ctx, 31, 0x113EACu);
    ctx->pc = 0x110110u;
    if (runtime->hasFunction(0x110110u)) {
        auto targetFn = runtime->lookupFunction(0x110110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113EACu; }
        if (ctx->pc != 0x113EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iSignalSema_0x110110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113EACu; }
        if (ctx->pc != 0x113EACu) { return; }
    }
    ctx->pc = 0x113EACu;
label_113eac:
    // 0x113eac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x113eacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_113eb0:
    // 0x113eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x113EB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113EB0u;
            // 0x113eb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x113EB8u;
}
