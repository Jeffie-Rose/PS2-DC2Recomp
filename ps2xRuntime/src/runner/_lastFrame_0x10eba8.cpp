#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _lastFrame
// Address: 0x10eba8 - 0x10ec24
void _lastFrame_0x10eba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_lastFrame_0x10eba8");
#endif

    switch (ctx->pc) {
        case 0x10ebd0u: goto label_10ebd0;
        case 0x10ebf8u: goto label_10ebf8;
        case 0x10ec10u: goto label_10ec10;
        default: break;
    }

    ctx->pc = 0x10eba8u;

    // 0x10eba8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10eba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10ebac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10ebacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10ebb0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10ebb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10ebb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10ebb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ebb8: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x10ebb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x10ebbc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10EBBCu;
    {
        const bool branch_taken_0x10ebbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EBC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EBBCu;
            // 0x10ebc0: 0x8e060118  lw          $a2, 0x118($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ebbc) {
            ctx->pc = 0x10EBD8u;
            goto label_10ebd8;
        }
    }
    ctx->pc = 0x10EBC4u;
    // 0x10ebc4: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x10ebc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x10ebc8: 0xc043b64  jal         func_10ED90
    ctx->pc = 0x10EBC8u;
    SET_GPR_U32(ctx, 31, 0x10EBD0u);
    ctx->pc = 0x10EBCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10EBC8u;
            // 0x10ebcc: 0x24a50938  addiu       $a1, $a1, 0x938 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10ED90u;
    if (runtime->hasFunction(0x10ED90u)) {
        auto targetFn = runtime->lookupFunction(0x10ED90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EBD0u; }
        if (ctx->pc != 0x10EBD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x10ed90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EBD0u; }
        if (ctx->pc != 0x10EBD0u) { return; }
    }
    ctx->pc = 0x10EBD0u;
label_10ebd0:
    // 0x10ebd0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x10EBD0u;
    {
        const bool branch_taken_0x10ebd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EBD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EBD0u;
            // 0x10ebd4: 0xae000120  sw          $zero, 0x120($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ebd0) {
            ctx->pc = 0x10EC14u;
            goto label_10ec14;
        }
    }
    ctx->pc = 0x10EBD8u;
label_10ebd8:
    // 0x10ebd8: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x10ebd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x10ebdc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10ebdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10ebe0: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10EBE0u;
    {
        const bool branch_taken_0x10ebe0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10EBE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EBE0u;
            // 0x10ebe4: 0x24c7ffff  addiu       $a3, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ebe0) {
            ctx->pc = 0x10EC00u;
            goto label_10ec00;
        }
    }
    ctx->pc = 0x10EBE8u;
    // 0x10ebe8: 0x8e0501bc  lw          $a1, 0x1BC($s0)
    ctx->pc = 0x10ebe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
    // 0x10ebec: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x10ebecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x10ebf0: 0xc0430f8  jal         func_10C3E0
    ctx->pc = 0x10EBF0u;
    SET_GPR_U32(ctx, 31, 0x10EBF8u);
    ctx->pc = 0x10EBF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10EBF0u;
            // 0x10ebf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C3E0u;
    if (runtime->hasFunction(0x10C3E0u)) {
        auto targetFn = runtime->lookupFunction(0x10C3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EBF8u; }
        if (ctx->pc != 0x10EBF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dispRefImage_0x10c3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EBF8u; }
        if (ctx->pc != 0x10EBF8u) { return; }
    }
    ctx->pc = 0x10EBF8u;
label_10ebf8:
    // 0x10ebf8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10EBF8u;
    {
        const bool branch_taken_0x10ebf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EBFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EBF8u;
            // 0x10ebfc: 0xae000120  sw          $zero, 0x120($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ebf8) {
            ctx->pc = 0x10EC14u;
            goto label_10ec14;
        }
    }
    ctx->pc = 0x10EC00u;
label_10ec00:
    // 0x10ec00: 0x8e0501cc  lw          $a1, 0x1CC($s0)
    ctx->pc = 0x10ec00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 460)));
    // 0x10ec04: 0x8e0601dc  lw          $a2, 0x1DC($s0)
    ctx->pc = 0x10ec04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 476)));
    // 0x10ec08: 0xc04313c  jal         func_10C4F0
    ctx->pc = 0x10EC08u;
    SET_GPR_U32(ctx, 31, 0x10EC10u);
    ctx->pc = 0x10EC0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10EC08u;
            // 0x10ec0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C4F0u;
    if (runtime->hasFunction(0x10C4F0u)) {
        auto targetFn = runtime->lookupFunction(0x10C4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EC10u; }
        if (ctx->pc != 0x10EC10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dispRefImageField_0x10c4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EC10u; }
        if (ctx->pc != 0x10EC10u) { return; }
    }
    ctx->pc = 0x10EC10u;
label_10ec10:
    // 0x10ec10: 0xae000120  sw          $zero, 0x120($s0)
    ctx->pc = 0x10ec10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 0));
label_10ec14:
    // 0x10ec14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10ec14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ec18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10ec18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ec1c: 0x3e00008  jr          $ra
    ctx->pc = 0x10EC1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EC20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EC1Cu;
            // 0x10ec20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10EC24u;
}
