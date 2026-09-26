#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DBGCMD_RunScript__Fi
// Address: 0x1d47a0 - 0x1d4850
void DBGCMD_RunScript__Fi_0x1d47a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DBGCMD_RunScript__Fi_0x1d47a0");
#endif

    switch (ctx->pc) {
        case 0x1d47bcu: goto label_1d47bc;
        case 0x1d47c4u: goto label_1d47c4;
        case 0x1d47e8u: goto label_1d47e8;
        case 0x1d4800u: goto label_1d4800;
        case 0x1d4814u: goto label_1d4814;
        case 0x1d4820u: goto label_1d4820;
        default: break;
    }

    ctx->pc = 0x1d47a0u;

    // 0x1d47a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d47a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d47a4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1d47a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1d47a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d47a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d47ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d47acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d47b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d47b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47b4: 0xc073a14  jal         func_1CE850
    ctx->pc = 0x1D47B4u;
    SET_GPR_U32(ctx, 31, 0x1D47BCu);
    ctx->pc = 0x1D47B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D47B4u;
            // 0x1d47b8: 0x8c24f6e4  lw          $a0, -0x91C($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964964)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE850u;
    if (runtime->hasFunction(0x1CE850u)) {
        auto targetFn = runtime->lookupFunction(0x1CE850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D47BCu; }
        if (ctx->pc != 0x1D47BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EntryEventScript__Fi_0x1ce850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D47BCu; }
        if (ctx->pc != 0x1D47BCu) { return; }
    }
    ctx->pc = 0x1D47BCu;
label_1d47bc:
    // 0x1d47bc: 0xc06423c  jal         func_1908F0
    ctx->pc = 0x1D47BCu;
    SET_GPR_U32(ctx, 31, 0x1D47C4u);
    ctx->pc = 0x1908F0u;
    if (runtime->hasFunction(0x1908F0u)) {
        auto targetFn = runtime->lookupFunction(0x1908F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D47C4u; }
        if (ctx->pc != 0x1D47C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainStack__Fv_0x1908f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D47C4u; }
        if (ctx->pc != 0x1D47C4u) { return; }
    }
    ctx->pc = 0x1D47C4u;
label_1d47c4:
    // 0x1d47c4: 0x8c460024  lw          $a2, 0x24($v0)
    ctx->pc = 0x1d47c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1d47c8: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1d47c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x1d47cc: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x1d47ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1d47d0: 0x2484f5c0  addiu       $a0, $a0, -0xA40
    ctx->pc = 0x1d47d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964672));
    // 0x1d47d4: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x1d47d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1d47d8: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x1d47d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1d47dc: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x1d47dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d47e0: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x1D47E0u;
    SET_GPR_U32(ctx, 31, 0x1D47E8u);
    ctx->pc = 0x1D47E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D47E0u;
            // 0x1d47e4: 0x463023  subu        $a2, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D47E8u; }
        if (ctx->pc != 0x1D47E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D47E8u; }
        if (ctx->pc != 0x1D47E8u) { return; }
    }
    ctx->pc = 0x1D47E8u;
label_1d47e8:
    // 0x1d47e8: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1d47e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x1d47ec: 0x3c0501ea  lui         $a1, 0x1EA
    ctx->pc = 0x1d47ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)490 << 16));
    // 0x1d47f0: 0x24845a20  addiu       $a0, $a0, 0x5A20
    ctx->pc = 0x1d47f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23072));
    // 0x1d47f4: 0x24a55830  addiu       $a1, $a1, 0x5830
    ctx->pc = 0x1d47f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22576));
    // 0x1d47f8: 0xc049c18  jal         func_127060
    ctx->pc = 0x1D47F8u;
    SET_GPR_U32(ctx, 31, 0x1D4800u);
    ctx->pc = 0x1D47FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D47F8u;
            // 0x1d47fc: 0x240601f0  addiu       $a2, $zero, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4800u; }
        if (ctx->pc != 0x1D4800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4800u; }
        if (ctx->pc != 0x1D4800u) { return; }
    }
    ctx->pc = 0x1D4800u;
label_1d4800:
    // 0x1d4800: 0x8f828dac  lw          $v0, -0x7254($gp)
    ctx->pc = 0x1d4800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
    // 0x1d4804: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d4804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d4808: 0xac432e54  sw          $v1, 0x2E54($v0)
    ctx->pc = 0x1d4808u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 11860), GPR_U32(ctx, 3));
    // 0x1d480c: 0xc0953f8  jal         func_254FE0
    ctx->pc = 0x1D480Cu;
    SET_GPR_U32(ctx, 31, 0x1D4814u);
    ctx->pc = 0x1D4810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D480Cu;
            // 0x1d4810: 0x8f848dac  lw          $a0, -0x7254($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x254FE0u;
    if (runtime->hasFunction(0x254FE0u)) {
        auto targetFn = runtime->lookupFunction(0x254FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4814u; }
        if (ctx->pc != 0x1D4814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEvent__FP6CScene_0x254fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4814u; }
        if (ctx->pc != 0x1D4814u) { return; }
    }
    ctx->pc = 0x1D4814u;
label_1d4814:
    // 0x1d4814: 0x8f858dac  lw          $a1, -0x7254($gp)
    ctx->pc = 0x1d4814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
    // 0x1d4818: 0xc09542c  jal         func_2550B0
    ctx->pc = 0x1D4818u;
    SET_GPR_U32(ctx, 31, 0x1D4820u);
    ctx->pc = 0x1D481Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4818u;
            // 0x1d481c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2550B0u;
    if (runtime->hasFunction(0x2550B0u)) {
        auto targetFn = runtime->lookupFunction(0x2550B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4820u; }
        if (ctx->pc != 0x1D4820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RunEvent__FiP6CScene_0x2550b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4820u; }
        if (ctx->pc != 0x1D4820u) { return; }
    }
    ctx->pc = 0x1D4820u;
label_1d4820:
    // 0x1d4820: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D4820u;
    {
        const bool branch_taken_0x1d4820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4820u;
            // 0x1d4824: 0x3c0101ea  lui         $at, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4820) {
            ctx->pc = 0x1D4840u;
            goto label_1d4840;
        }
    }
    ctx->pc = 0x1D4828u;
    // 0x1d4828: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d4828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d482c: 0xac20f6f8  sw          $zero, -0x908($at)
    ctx->pc = 0x1d482cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964984), GPR_U32(ctx, 0));
    // 0x1d4830: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1d4830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1d4834: 0xac23f6e0  sw          $v1, -0x920($at)
    ctx->pc = 0x1d4834u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964960), GPR_U32(ctx, 3));
    // 0x1d4838: 0x8f838dac  lw          $v1, -0x7254($gp)
    ctx->pc = 0x1d4838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
    // 0x1d483c: 0xac602e58  sw          $zero, 0x2E58($v1)
    ctx->pc = 0x1d483cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 11864), GPR_U32(ctx, 0));
label_1d4840:
    // 0x1d4840: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d4840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d4844: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d4844u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d4848: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4848u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D484Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4848u;
            // 0x1d484c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D4850u;
}
