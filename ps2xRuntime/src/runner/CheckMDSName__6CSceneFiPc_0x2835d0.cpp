#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckMDSName__6CSceneFiPc
// Address: 0x2835d0 - 0x28369c
void CheckMDSName__6CSceneFiPc_0x2835d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckMDSName__6CSceneFiPc_0x2835d0");
#endif

    switch (ctx->pc) {
        case 0x283604u: goto label_283604;
        case 0x283614u: goto label_283614;
        case 0x283624u: goto label_283624;
        case 0x283634u: goto label_283634;
        case 0x283644u: goto label_283644;
        default: break;
    }

    ctx->pc = 0x2835d0u;

    // 0x2835d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2835d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2835d4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2835d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2835d8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2835d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2835dc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2835dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2835e0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2835e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2835e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2835e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2835e8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2835e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2835ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2835ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2835f0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2835f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2835f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2835f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2835f8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2835f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2835fc: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2835FCu;
    {
        const bool branch_taken_0x2835fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2835FCu;
            // 0x283600: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2835fc) {
            ctx->pc = 0x283664u;
            goto label_283664;
        }
    }
    ctx->pc = 0x283604u;
label_283604:
    // 0x283604: 0x12710015  beq         $s3, $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x283604u;
    {
        const bool branch_taken_0x283604 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 17));
        ctx->pc = 0x283608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283604u;
            // 0x283608: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283604) {
            ctx->pc = 0x28365Cu;
            goto label_28365c;
        }
    }
    ctx->pc = 0x28360Cu;
    // 0x28360c: 0xc0a0f58  jal         func_283D60
    ctx->pc = 0x28360Cu;
    SET_GPR_U32(ctx, 31, 0x283614u);
    ctx->pc = 0x283610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28360Cu;
            // 0x283610: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283614u; }
        if (ctx->pc != 0x283614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283614u; }
        if (ctx->pc != 0x283614u) { return; }
    }
    ctx->pc = 0x283614u;
label_283614:
    // 0x283614: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x283614u;
    {
        const bool branch_taken_0x283614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283614u;
            // 0x283618: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283614) {
            ctx->pc = 0x28365Cu;
            goto label_28365c;
        }
    }
    ctx->pc = 0x28361Cu;
    // 0x28361c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x28361Cu;
    {
        const bool branch_taken_0x28361c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28361Cu;
            // 0x283620: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28361c) {
            ctx->pc = 0x28365Cu;
            goto label_28365c;
        }
    }
    ctx->pc = 0x283624u;
label_283624:
    // 0x283624: 0x0  nop
    ctx->pc = 0x283624u;
    // NOP
    // 0x283628: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x283628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28362c: 0xc0593f8  jal         func_164FE0
    ctx->pc = 0x28362Cu;
    SET_GPR_U32(ctx, 31, 0x283634u);
    ctx->pc = 0x283630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28362Cu;
            // 0x283630: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164FE0u;
    if (runtime->hasFunction(0x164FE0u)) {
        auto targetFn = runtime->lookupFunction(0x164FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283634u; }
        if (ctx->pc != 0x283634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPCPName__8CMapInfoFi_0x164fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283634u; }
        if (ctx->pc != 0x283634u) { return; }
    }
    ctx->pc = 0x283634u;
label_283634:
    // 0x283634: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x283634u;
    {
        const bool branch_taken_0x283634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283634u;
            // 0x283638: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283634) {
            ctx->pc = 0x28365Cu;
            goto label_28365c;
        }
    }
    ctx->pc = 0x28363Cu;
    // 0x28363c: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x28363Cu;
    SET_GPR_U32(ctx, 31, 0x283644u);
    ctx->pc = 0x283640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28363Cu;
            // 0x283640: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283644u; }
        if (ctx->pc != 0x283644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283644u; }
        if (ctx->pc != 0x283644u) { return; }
    }
    ctx->pc = 0x283644u;
label_283644:
    // 0x283644: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x283644u;
    {
        const bool branch_taken_0x283644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283644u;
            // 0x283648: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283644) {
            ctx->pc = 0x283654u;
            goto label_283654;
        }
    }
    ctx->pc = 0x28364Cu;
    // 0x28364c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x28364Cu;
    {
        const bool branch_taken_0x28364c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28364Cu;
            // 0x283650: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28364c) {
            ctx->pc = 0x28367Cu;
            goto label_28367c;
        }
    }
    ctx->pc = 0x283654u;
label_283654:
    // 0x283654: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x283654u;
    {
        const bool branch_taken_0x283654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283654u;
            // 0x283658: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283654) {
            ctx->pc = 0x283624u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_283624;
        }
    }
    ctx->pc = 0x28365Cu;
label_28365c:
    // 0x28365c: 0x0  nop
    ctx->pc = 0x28365cu;
    // NOP
    // 0x283660: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x283660u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_283664:
    // 0x283664: 0x0  nop
    ctx->pc = 0x283664u;
    // NOP
    // 0x283668: 0x8e4227e0  lw          $v0, 0x27E0($s2)
    ctx->pc = 0x283668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10208)));
    // 0x28366c: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x28366cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x283670: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x283670u;
    {
        const bool branch_taken_0x283670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283670u;
            // 0x283674: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283670) {
            ctx->pc = 0x283604u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_283604;
        }
    }
    ctx->pc = 0x283678u;
    // 0x283678: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x283678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_28367c:
    // 0x28367c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x28367cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x283680: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x283680u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x283684: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x283684u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x283688: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x283688u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28368c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28368cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283690: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x283690u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x283694: 0x3e00008  jr          $ra
    ctx->pc = 0x283694u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283694u;
            // 0x283698: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28369Cu;
}
