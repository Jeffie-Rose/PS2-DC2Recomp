#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckIMGName__6CSceneFiPc
// Address: 0x283500 - 0x2835cc
void CheckIMGName__6CSceneFiPc_0x283500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckIMGName__6CSceneFiPc_0x283500");
#endif

    switch (ctx->pc) {
        case 0x283534u: goto label_283534;
        case 0x283544u: goto label_283544;
        case 0x283554u: goto label_283554;
        case 0x283564u: goto label_283564;
        case 0x283574u: goto label_283574;
        default: break;
    }

    ctx->pc = 0x283500u;

    // 0x283500: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x283500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x283504: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x283504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x283508: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x283508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x28350c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x28350cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x283510: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x283510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x283514: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x283514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x283518: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x283518u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28351c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28351cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x283520: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x283520u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283524: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x283524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x283528: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x283528u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28352c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x28352Cu;
    {
        const bool branch_taken_0x28352c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28352Cu;
            // 0x283530: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28352c) {
            ctx->pc = 0x283594u;
            goto label_283594;
        }
    }
    ctx->pc = 0x283534u;
label_283534:
    // 0x283534: 0x12710015  beq         $s3, $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x283534u;
    {
        const bool branch_taken_0x283534 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 17));
        ctx->pc = 0x283538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283534u;
            // 0x283538: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283534) {
            ctx->pc = 0x28358Cu;
            goto label_28358c;
        }
    }
    ctx->pc = 0x28353Cu;
    // 0x28353c: 0xc0a0f58  jal         func_283D60
    ctx->pc = 0x28353Cu;
    SET_GPR_U32(ctx, 31, 0x283544u);
    ctx->pc = 0x283540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28353Cu;
            // 0x283540: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283544u; }
        if (ctx->pc != 0x283544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283544u; }
        if (ctx->pc != 0x283544u) { return; }
    }
    ctx->pc = 0x283544u;
label_283544:
    // 0x283544: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x283544u;
    {
        const bool branch_taken_0x283544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283544u;
            // 0x283548: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283544) {
            ctx->pc = 0x28358Cu;
            goto label_28358c;
        }
    }
    ctx->pc = 0x28354Cu;
    // 0x28354c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x28354Cu;
    {
        const bool branch_taken_0x28354c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28354Cu;
            // 0x283550: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28354c) {
            ctx->pc = 0x28358Cu;
            goto label_28358c;
        }
    }
    ctx->pc = 0x283554u;
label_283554:
    // 0x283554: 0x0  nop
    ctx->pc = 0x283554u;
    // NOP
    // 0x283558: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x283558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28355c: 0xc0593e8  jal         func_164FA0
    ctx->pc = 0x28355Cu;
    SET_GPR_U32(ctx, 31, 0x283564u);
    ctx->pc = 0x283560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28355Cu;
            // 0x283560: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164FA0u;
    if (runtime->hasFunction(0x164FA0u)) {
        auto targetFn = runtime->lookupFunction(0x164FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283564u; }
        if (ctx->pc != 0x283564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetImgName__8CMapInfoFi_0x164fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283564u; }
        if (ctx->pc != 0x283564u) { return; }
    }
    ctx->pc = 0x283564u;
label_283564:
    // 0x283564: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x283564u;
    {
        const bool branch_taken_0x283564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283564u;
            // 0x283568: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283564) {
            ctx->pc = 0x28358Cu;
            goto label_28358c;
        }
    }
    ctx->pc = 0x28356Cu;
    // 0x28356c: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x28356Cu;
    SET_GPR_U32(ctx, 31, 0x283574u);
    ctx->pc = 0x283570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28356Cu;
            // 0x283570: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283574u; }
        if (ctx->pc != 0x283574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283574u; }
        if (ctx->pc != 0x283574u) { return; }
    }
    ctx->pc = 0x283574u;
label_283574:
    // 0x283574: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x283574u;
    {
        const bool branch_taken_0x283574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283574u;
            // 0x283578: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283574) {
            ctx->pc = 0x283584u;
            goto label_283584;
        }
    }
    ctx->pc = 0x28357Cu;
    // 0x28357c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x28357Cu;
    {
        const bool branch_taken_0x28357c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28357Cu;
            // 0x283580: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28357c) {
            ctx->pc = 0x2835ACu;
            goto label_2835ac;
        }
    }
    ctx->pc = 0x283584u;
label_283584:
    // 0x283584: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x283584u;
    {
        const bool branch_taken_0x283584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283584u;
            // 0x283588: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283584) {
            ctx->pc = 0x283554u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_283554;
        }
    }
    ctx->pc = 0x28358Cu;
label_28358c:
    // 0x28358c: 0x0  nop
    ctx->pc = 0x28358cu;
    // NOP
    // 0x283590: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x283590u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_283594:
    // 0x283594: 0x0  nop
    ctx->pc = 0x283594u;
    // NOP
    // 0x283598: 0x8e4227e0  lw          $v0, 0x27E0($s2)
    ctx->pc = 0x283598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10208)));
    // 0x28359c: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x28359cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2835a0: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x2835A0u;
    {
        const bool branch_taken_0x2835a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2835A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2835A0u;
            // 0x2835a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2835a0) {
            ctx->pc = 0x283534u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_283534;
        }
    }
    ctx->pc = 0x2835A8u;
    // 0x2835a8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2835a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2835ac:
    // 0x2835ac: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2835acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2835b0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2835b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2835b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2835b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2835b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2835b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2835bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2835bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2835c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2835c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2835c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2835C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2835C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2835C4u;
            // 0x2835c8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2835CCu;
}
