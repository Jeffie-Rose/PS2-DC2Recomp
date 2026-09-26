#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetMainCharaModelName__FiPci
// Address: 0x1993f0 - 0x1994e0
void GetMainCharaModelName__FiPci_0x1993f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMainCharaModelName__FiPci_0x1993f0");
#endif

    switch (ctx->pc) {
        case 0x199414u: goto label_199414;
        case 0x199434u: goto label_199434;
        case 0x19944cu: goto label_19944c;
        case 0x19949cu: goto label_19949c;
        case 0x1994c4u: goto label_1994c4;
        default: break;
    }

    ctx->pc = 0x1993f0u;

    // 0x1993f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1993f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1993f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1993f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1993f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1993f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1993fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1993fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x199400: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x199400u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199404: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x199404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x199408: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x199408u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19940c: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x19940Cu;
    SET_GPR_U32(ctx, 31, 0x199414u);
    ctx->pc = 0x199410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19940Cu;
            // 0x199410: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199414u; }
        if (ctx->pc != 0x199414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199414u; }
        if (ctx->pc != 0x199414u) { return; }
    }
    ctx->pc = 0x199414u;
label_199414:
    // 0x199414: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x199414u;
    {
        const bool branch_taken_0x199414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x199414) {
            ctx->pc = 0x199424u;
            goto label_199424;
        }
    }
    ctx->pc = 0x19941Cu;
    // 0x19941c: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19941Cu;
    {
        const bool branch_taken_0x19941c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x199420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19941Cu;
            // 0x199420: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19941c) {
            ctx->pc = 0x19942Cu;
            goto label_19942c;
        }
    }
    ctx->pc = 0x199424u;
label_199424:
    // 0x199424: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x199424u;
    {
        const bool branch_taken_0x199424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199424u;
            // 0x199428: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199424) {
            ctx->pc = 0x1994C8u;
            goto label_1994c8;
        }
    }
    ctx->pc = 0x19942Cu;
label_19942c:
    // 0x19942c: 0xc066d24  jal         func_19B490
    ctx->pc = 0x19942Cu;
    SET_GPR_U32(ctx, 31, 0x199434u);
    ctx->pc = 0x199430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19942Cu;
            // 0x199430: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B490u;
    if (runtime->hasFunction(0x19B490u)) {
        auto targetFn = runtime->lookupFunction(0x19B490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199434u; }
        if (ctx->pc != 0x199434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaDataPtr__16CUserDataManagerFi_0x19b490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199434u; }
        if (ctx->pc != 0x199434u) { return; }
    }
    ctx->pc = 0x199434u;
label_199434:
    // 0x199434: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x199434u;
    {
        const bool branch_taken_0x199434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199434u;
            // 0x199438: 0x24440170  addiu       $a0, $v0, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199434) {
            ctx->pc = 0x199444u;
            goto label_199444;
        }
    }
    ctx->pc = 0x19943Cu;
    // 0x19943c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x19943Cu;
    {
        const bool branch_taken_0x19943c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19943Cu;
            // 0x199440: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19943c) {
            ctx->pc = 0x1994C8u;
            goto label_1994c8;
        }
    }
    ctx->pc = 0x199444u;
label_199444:
    // 0x199444: 0xc0664ec  jal         func_1993B0
    ctx->pc = 0x199444u;
    SET_GPR_U32(ctx, 31, 0x19944Cu);
    ctx->pc = 0x1993B0u;
    if (runtime->hasFunction(0x1993B0u)) {
        auto targetFn = runtime->lookupFunction(0x1993B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19944Cu; }
        if (ctx->pc != 0x19944Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetModelNo__13CGameDataUsedFv_0x1993b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19944Cu; }
        if (ctx->pc != 0x19944Cu) { return; }
    }
    ctx->pc = 0x19944Cu;
label_19944c:
    // 0x19944c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19944Cu;
    {
        const bool branch_taken_0x19944c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x199450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19944Cu;
            // 0x199450: 0x28410004  slti        $at, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19944c) {
            ctx->pc = 0x19945Cu;
            goto label_19945c;
        }
    }
    ctx->pc = 0x199454u;
    // 0x199454: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x199454u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199458: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x199458u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_19945c:
    // 0x19945c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x19945Cu;
    {
        const bool branch_taken_0x19945c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x19945c) {
            ctx->pc = 0x199468u;
            goto label_199468;
        }
    }
    ctx->pc = 0x199464u;
    // 0x199464: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x199464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_199468:
    // 0x199468: 0x16400002  bnez        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x199468u;
    {
        const bool branch_taken_0x199468 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x199468) {
            ctx->pc = 0x199474u;
            goto label_199474;
        }
    }
    ctx->pc = 0x199470u;
    // 0x199470: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x199470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_199474:
    // 0x199474: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x199474u;
    {
        const bool branch_taken_0x199474 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x199478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199474u;
            // 0x199478: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199474) {
            ctx->pc = 0x1994A4u;
            goto label_1994a4;
        }
    }
    ctx->pc = 0x19947Cu;
    // 0x19947c: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x19947cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x199480: 0x27828090  addiu       $v0, $gp, -0x7F70
    ctx->pc = 0x199480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934672));
    // 0x199484: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x199484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x199488: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x199488u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x19948c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x19948cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x199490: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x199490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199494: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x199494u;
    SET_GPR_U32(ctx, 31, 0x19949Cu);
    ctx->pc = 0x199498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199494u;
            // 0x199498: 0x24a55970  addiu       $a1, $a1, 0x5970 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19949Cu; }
        if (ctx->pc != 0x19949Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19949Cu; }
        if (ctx->pc != 0x19949Cu) { return; }
    }
    ctx->pc = 0x19949Cu;
label_19949c:
    // 0x19949c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x19949Cu;
    {
        const bool branch_taken_0x19949c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1994A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19949Cu;
            // 0x1994a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19949c) {
            ctx->pc = 0x1994C8u;
            goto label_1994c8;
        }
    }
    ctx->pc = 0x1994A4u;
label_1994a4:
    // 0x1994a4: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1994a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1994a8: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1994a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1994ac: 0x27828090  addiu       $v0, $gp, -0x7F70
    ctx->pc = 0x1994acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934672));
    // 0x1994b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1994b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1994b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1994b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1994b8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1994b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1994bc: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1994BCu;
    SET_GPR_U32(ctx, 31, 0x1994C4u);
    ctx->pc = 0x1994C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1994BCu;
            // 0x1994c0: 0x24a55978  addiu       $a1, $a1, 0x5978 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22904));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1994C4u; }
        if (ctx->pc != 0x1994C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1994C4u; }
        if (ctx->pc != 0x1994C4u) { return; }
    }
    ctx->pc = 0x1994C4u;
label_1994c4:
    // 0x1994c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1994c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1994c8:
    // 0x1994c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1994c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1994cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1994ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1994d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1994d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1994d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1994d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1994d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1994D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1994DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1994D8u;
            // 0x1994dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1994E0u;
}
