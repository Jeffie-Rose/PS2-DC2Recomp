#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _Balloc
// Address: 0x1272e8 - 0x127390
void ps2__Balloc_0x1272e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__Balloc_0x1272e8");
#endif

    switch (ctx->pc) {
        case 0x127314u: goto label_127314;
        case 0x127358u: goto label_127358;
        default: break;
    }

    ctx->pc = 0x1272e8u;

    // 0x1272e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1272e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1272ec: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1272ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1272f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1272f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1272f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1272f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1272f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1272f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1272fc: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x1272fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x127300: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x127300u;
    {
        const bool branch_taken_0x127300 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x127304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127300u;
            // 0x127304: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127300) {
            ctx->pc = 0x127320u;
            goto label_127320;
        }
    }
    ctx->pc = 0x127308u;
    // 0x127308: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x127308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12730c: 0xc048fca  jal         func_123F28
    ctx->pc = 0x12730Cu;
    SET_GPR_U32(ctx, 31, 0x127314u);
    ctx->pc = 0x127310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12730Cu;
            // 0x127310: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123F28u;
    if (runtime->hasFunction(0x123F28u)) {
        auto targetFn = runtime->lookupFunction(0x123F28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127314u; }
        if (ctx->pc != 0x127314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _calloc_r_0x123f28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127314u; }
        if (ctx->pc != 0x127314u) { return; }
    }
    ctx->pc = 0x127314u;
label_127314:
    // 0x127314: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x127314u;
    {
        const bool branch_taken_0x127314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127314u;
            // 0x127318: 0xae02004c  sw          $v0, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127314) {
            ctx->pc = 0x127364u;
            goto label_127364;
        }
    }
    ctx->pc = 0x12731Cu;
    // 0x12731c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12731cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_127320:
    // 0x127320: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x127320u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x127324: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x127324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x127328: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x127328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12732c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12732Cu;
    {
        const bool branch_taken_0x12732c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x127330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12732Cu;
            // 0x127330: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12732c) {
            ctx->pc = 0x127340u;
            goto label_127340;
        }
    }
    ctx->pc = 0x127334u;
    // 0x127334: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x127334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x127338: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x127338u;
    {
        const bool branch_taken_0x127338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12733Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127338u;
            // 0x12733c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127338) {
            ctx->pc = 0x127370u;
            goto label_127370;
        }
    }
    ctx->pc = 0x127340u;
label_127340:
    // 0x127340: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x127340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127344: 0x2228004  sllv        $s0, $v0, $s1
    ctx->pc = 0x127344u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x127348: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x127348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12734c: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x12734cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x127350: 0xc048fca  jal         func_123F28
    ctx->pc = 0x127350u;
    SET_GPR_U32(ctx, 31, 0x127358u);
    ctx->pc = 0x127354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127350u;
            // 0x127354: 0x24c60014  addiu       $a2, $a2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123F28u;
    if (runtime->hasFunction(0x123F28u)) {
        auto targetFn = runtime->lookupFunction(0x123F28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127358u; }
        if (ctx->pc != 0x127358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _calloc_r_0x123f28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127358u; }
        if (ctx->pc != 0x127358u) { return; }
    }
    ctx->pc = 0x127358u;
label_127358:
    // 0x127358: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x127358u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12735c: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x12735Cu;
    {
        const bool branch_taken_0x12735c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12735c) {
            ctx->pc = 0x127360u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12735Cu;
            // 0x127360: 0xac710004  sw          $s1, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12736Cu;
            goto label_12736c;
        }
    }
    ctx->pc = 0x127364u;
label_127364:
    // 0x127364: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x127364u;
    {
        const bool branch_taken_0x127364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127364u;
            // 0x127368: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127364) {
            ctx->pc = 0x12737Cu;
            goto label_12737c;
        }
    }
    ctx->pc = 0x12736Cu;
label_12736c:
    // 0x12736c: 0xac700008  sw          $s0, 0x8($v1)
    ctx->pc = 0x12736cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
label_127370:
    // 0x127370: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x127370u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x127374: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x127374u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127378: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x127378u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_12737c:
    // 0x12737c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12737cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x127380: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x127380u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x127384: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x127384u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127388: 0x3e00008  jr          $ra
    ctx->pc = 0x127388u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12738Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127388u;
            // 0x12738c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x127390u;
}
