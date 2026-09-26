#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AddMsgCursor2__7CDC2MesFiii
// Address: 0x21d6d0 - 0x21d780
void AddMsgCursor2__7CDC2MesFiii_0x21d6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddMsgCursor2__7CDC2MesFiii_0x21d6d0");
#endif

    switch (ctx->pc) {
        case 0x21d710u: goto label_21d710;
        case 0x21d728u: goto label_21d728;
        case 0x21d74cu: goto label_21d74c;
        case 0x21d75cu: goto label_21d75c;
        default: break;
    }

    ctx->pc = 0x21d6d0u;

    // 0x21d6d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x21d6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x21d6d4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x21d6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x21d6d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x21d6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x21d6dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x21d6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x21d6e0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x21d6e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d6e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21d6e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21d6e8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x21d6e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d6ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21d6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21d6f0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x21d6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x21d6f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21d6f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21d6f8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x21d6f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d6fc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x21d6fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d700: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x21d700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
    // 0x21d704: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x21d704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x21d708: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x21D708u;
    SET_GPR_U32(ctx, 31, 0x21D710u);
    ctx->pc = 0x21D70Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D708u;
            // 0x21d70c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D710u; }
        if (ctx->pc != 0x21D710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D710u; }
        if (ctx->pc != 0x21D710u) { return; }
    }
    ctx->pc = 0x21D710u;
label_21d710:
    // 0x21d710: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21D710u;
    {
        const bool branch_taken_0x21d710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D710u;
            // 0x21d714: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d710) {
            ctx->pc = 0x21D71Cu;
            goto label_21d71c;
        }
    }
    ctx->pc = 0x21D718u;
    // 0x21d718: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x21d718u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_21d71c:
    // 0x21d71c: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x21d71cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x21d720: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x21D720u;
    SET_GPR_U32(ctx, 31, 0x21D728u);
    ctx->pc = 0x21D724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D720u;
            // 0x21d724: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D728u; }
        if (ctx->pc != 0x21D728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D728u; }
        if (ctx->pc != 0x21D728u) { return; }
    }
    ctx->pc = 0x21D728u;
label_21d728:
    // 0x21d728: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21D728u;
    {
        const bool branch_taken_0x21d728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D728u;
            // 0x21d72c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d728) {
            ctx->pc = 0x21D738u;
            goto label_21d738;
        }
    }
    ctx->pc = 0x21D730u;
    // 0x21d730: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21d730u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x21d734: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21d734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21d738:
    // 0x21d738: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x21d738u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d73c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x21d73cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d740: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x21d740u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d744: 0xc0875e0  jal         func_21D780
    ctx->pc = 0x21D744u;
    SET_GPR_U32(ctx, 31, 0x21D74Cu);
    ctx->pc = 0x21D748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D744u;
            // 0x21d748: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D780u;
    if (runtime->hasFunction(0x21D780u)) {
        auto targetFn = runtime->lookupFunction(0x21D780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D74Cu; }
        if (ctx->pc != 0x21D74Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddMsgCursor__7CDC2MesFiiii_0x21d780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D74Cu; }
        if (ctx->pc != 0x21D74Cu) { return; }
    }
    ctx->pc = 0x21D74Cu;
label_21d74c:
    // 0x21d74c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21D74Cu;
    {
        const bool branch_taken_0x21d74c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D74Cu;
            // 0x21d750: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d74c) {
            ctx->pc = 0x21D75Cu;
            goto label_21d75c;
        }
    }
    ctx->pc = 0x21D754u;
    // 0x21d754: 0xc094274  jal         func_2509D0
    ctx->pc = 0x21D754u;
    SET_GPR_U32(ctx, 31, 0x21D75Cu);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D75Cu; }
        if (ctx->pc != 0x21D75Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D75Cu; }
        if (ctx->pc != 0x21D75Cu) { return; }
    }
    ctx->pc = 0x21D75Cu;
label_21d75c:
    // 0x21d75c: 0x828221e1  lb          $v0, 0x21E1($s4)
    ctx->pc = 0x21d75cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 8673)));
    // 0x21d760: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x21d760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21d764: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x21d764u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21d768: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21d768u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21d76c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21d76cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21d770: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21d770u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d774: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x21d774u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21d778: 0x3e00008  jr          $ra
    ctx->pc = 0x21D778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D778u;
            // 0x21d77c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21D780u;
}
