#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AllClearEffSpt__16CEffectScriptManFv
// Address: 0x2e1550 - 0x2e15fc
void AllClearEffSpt__16CEffectScriptManFv_0x2e1550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AllClearEffSpt__16CEffectScriptManFv_0x2e1550");
#endif

    switch (ctx->pc) {
        case 0x2e1574u: goto label_2e1574;
        case 0x2e1584u: goto label_2e1584;
        case 0x2e15a0u: goto label_2e15a0;
        case 0x2e15b0u: goto label_2e15b0;
        default: break;
    }

    ctx->pc = 0x2e1550u;

    // 0x2e1550: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e1550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e1554: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e1554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e1558: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e1558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e155c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e155cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e1560: 0x8c90118c  lw          $s0, 0x118C($a0)
    ctx->pc = 0x2e1560u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4492)));
    // 0x2e1564: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2E1564u;
    {
        const bool branch_taken_0x2e1564 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1564u;
            // 0x2e1568: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1564) {
            ctx->pc = 0x2E15E8u;
            goto label_2e15e8;
        }
    }
    ctx->pc = 0x2E156Cu;
    // 0x2e156c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E156Cu;
    {
        const bool branch_taken_0x2e156c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e156c) {
            ctx->pc = 0x2E1584u;
            goto label_2e1584;
        }
    }
    ctx->pc = 0x2E1574u;
label_2e1574:
    // 0x2e1574: 0x8c450144  lw          $a1, 0x144($v0)
    ctx->pc = 0x2e1574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 324)));
    // 0x2e1578: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e1578u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e157c: 0xc0b84ec  jal         func_2E13B0
    ctx->pc = 0x2E157Cu;
    SET_GPR_U32(ctx, 31, 0x2E1584u);
    ctx->pc = 0x2E1580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E157Cu;
            // 0x2e1580: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E13B0u;
    if (runtime->hasFunction(0x2E13B0u)) {
        auto targetFn = runtime->lookupFunction(0x2E13B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1584u; }
        if (ctx->pc != 0x2E1584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteEffSpt__16CEffectScriptManFP11_EFF_SCRIPT_0x2e13b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1584u; }
        if (ctx->pc != 0x2E1584u) { return; }
    }
    ctx->pc = 0x2E1584u;
label_2e1584:
    // 0x2e1584: 0x0  nop
    ctx->pc = 0x2e1584u;
    // NOP
    // 0x2e1588: 0x8e020140  lw          $v0, 0x140($s0)
    ctx->pc = 0x2e1588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2e158c: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2E158Cu;
    {
        const bool branch_taken_0x2e158c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e158c) {
            ctx->pc = 0x2E1574u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e1574;
        }
    }
    ctx->pc = 0x2E1594u;
    // 0x2e1594: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e1594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1598: 0xc0b84ec  jal         func_2E13B0
    ctx->pc = 0x2E1598u;
    SET_GPR_U32(ctx, 31, 0x2E15A0u);
    ctx->pc = 0x2E159Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1598u;
            // 0x2e159c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E13B0u;
    if (runtime->hasFunction(0x2E13B0u)) {
        auto targetFn = runtime->lookupFunction(0x2E13B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E15A0u; }
        if (ctx->pc != 0x2E15A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteEffSpt__16CEffectScriptManFP11_EFF_SCRIPT_0x2e13b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E15A0u; }
        if (ctx->pc != 0x2E15A0u) { return; }
    }
    ctx->pc = 0x2E15A0u;
label_2e15a0:
    // 0x2e15a0: 0xae20118c  sw          $zero, 0x118C($s1)
    ctx->pc = 0x2e15a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4492), GPR_U32(ctx, 0));
    // 0x2e15a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e15a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e15a8: 0xae201188  sw          $zero, 0x1188($s1)
    ctx->pc = 0x2e15a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4488), GPR_U32(ctx, 0));
    // 0x2e15ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e15acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e15b0:
    // 0x2e15b0: 0x2253021  addu        $a2, $s1, $a1
    ctx->pc = 0x2e15b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x2e15b4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2e15b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2e15b8: 0xacc00184  sw          $zero, 0x184($a2)
    ctx->pc = 0x2e15b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 388), GPR_U32(ctx, 0));
    // 0x2e15bc: 0x28830080  slti        $v1, $a0, 0x80
    ctx->pc = 0x2e15bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x2e15c0: 0xacc00188  sw          $zero, 0x188($a2)
    ctx->pc = 0x2e15c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 392), GPR_U32(ctx, 0));
    // 0x2e15c4: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2e15c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2e15c8: 0xacc0018c  sw          $zero, 0x18C($a2)
    ctx->pc = 0x2e15c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 396), GPR_U32(ctx, 0));
    // 0x2e15cc: 0xacc00190  sw          $zero, 0x190($a2)
    ctx->pc = 0x2e15ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 400), GPR_U32(ctx, 0));
    // 0x2e15d0: 0xacc00194  sw          $zero, 0x194($a2)
    ctx->pc = 0x2e15d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 404), GPR_U32(ctx, 0));
    // 0x2e15d4: 0xacc00198  sw          $zero, 0x198($a2)
    ctx->pc = 0x2e15d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 408), GPR_U32(ctx, 0));
    // 0x2e15d8: 0xacc0019c  sw          $zero, 0x19C($a2)
    ctx->pc = 0x2e15d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 412), GPR_U32(ctx, 0));
    // 0x2e15dc: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2E15DCu;
    {
        const bool branch_taken_0x2e15dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E15E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E15DCu;
            // 0x2e15e0: 0xacc001a0  sw          $zero, 0x1A0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 416), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e15dc) {
            ctx->pc = 0x2E15B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e15b0;
        }
    }
    ctx->pc = 0x2E15E4u;
    // 0x2e15e4: 0xae201184  sw          $zero, 0x1184($s1)
    ctx->pc = 0x2e15e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4484), GPR_U32(ctx, 0));
label_2e15e8:
    // 0x2e15e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e15e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e15ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e15ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e15f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e15f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e15f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E15F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E15F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E15F4u;
            // 0x2e15f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E15FCu;
}
