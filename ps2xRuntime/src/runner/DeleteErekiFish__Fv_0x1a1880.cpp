#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DeleteErekiFish__Fv
// Address: 0x1a1880 - 0x1a1908
void DeleteErekiFish__Fv_0x1a1880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DeleteErekiFish__Fv_0x1a1880");
#endif

    switch (ctx->pc) {
        case 0x1a1890u: goto label_1a1890;
        case 0x1a18a4u: goto label_1a18a4;
        case 0x1a18acu: goto label_1a18ac;
        case 0x1a18e4u: goto label_1a18e4;
        default: break;
    }

    ctx->pc = 0x1a1880u;

    // 0x1a1880: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a1880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a1884: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a1884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a1888: 0xc065b18  jal         func_196C60
    ctx->pc = 0x1A1888u;
    SET_GPR_U32(ctx, 31, 0x1A1890u);
    ctx->pc = 0x196C60u;
    if (runtime->hasFunction(0x196C60u)) {
        auto targetFn = runtime->lookupFunction(0x196C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1890u; }
        if (ctx->pc != 0x1A1890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAquariumData__Fv_0x196c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1890u; }
        if (ctx->pc != 0x1A1890u) { return; }
    }
    ctx->pc = 0x1A1890u;
label_1a1890:
    // 0x1a1890: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a1890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1894: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1A1894u;
    {
        const bool branch_taken_0x1a1894 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1894u;
            // 0x1a1898: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1894) {
            ctx->pc = 0x1A18FCu;
            goto label_1a18fc;
        }
    }
    ctx->pc = 0x1A189Cu;
    // 0x1a189c: 0xc066888  jal         func_19A220
    ctx->pc = 0x1A189Cu;
    SET_GPR_U32(ctx, 31, 0x1A18A4u);
    ctx->pc = 0x19A220u;
    if (runtime->hasFunction(0x19A220u)) {
        auto targetFn = runtime->lookupFunction(0x19A220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A18A4u; }
        if (ctx->pc != 0x1A18A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAquariumFishTop__13CFishAquariumFi_0x19a220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A18A4u; }
        if (ctx->pc != 0x1A18A4u) { return; }
    }
    ctx->pc = 0x1A18A4u;
label_1a18a4:
    // 0x1a18a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a18a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a18a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a18a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a18ac:
    // 0x1a18ac: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x1a18acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a18b0: 0x84c30002  lh          $v1, 0x2($a2)
    ctx->pc = 0x1a18b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x1a18b4: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1A18B4u;
    {
        const bool branch_taken_0x1a18b4 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1a18b4) {
            ctx->pc = 0x1A18ECu;
            goto label_1a18ec;
        }
    }
    ctx->pc = 0x1A18BCu;
    // 0x1a18bc: 0x94c30048  lhu         $v1, 0x48($a2)
    ctx->pc = 0x1a18bcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 72)));
    // 0x1a18c0: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1a18c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1a18c4: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A18C4u;
    {
        const bool branch_taken_0x1a18c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A18C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A18C4u;
            // 0x1a18c8: 0x418c0  sll         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a18c4) {
            ctx->pc = 0x1A18ECu;
            goto label_1a18ec;
        }
    }
    ctx->pc = 0x1A18CCu;
    // 0x1a18cc: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1a18ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a18d0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a18d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a18d4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1a18d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a18d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a18d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a18dc: 0xc065c30  jal         func_1970C0
    ctx->pc = 0x1A18DCu;
    SET_GPR_U32(ctx, 31, 0x1A18E4u);
    ctx->pc = 0x1A18E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A18DCu;
            // 0x1a18e0: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1970C0u;
    if (runtime->hasFunction(0x1970C0u)) {
        auto targetFn = runtime->lookupFunction(0x1970C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A18E4u; }
        if (ctx->pc != 0x1A18E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__13CGameDataUsedFv_0x1970c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A18E4u; }
        if (ctx->pc != 0x1A18E4u) { return; }
    }
    ctx->pc = 0x1A18E4u;
label_1a18e4:
    // 0x1a18e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A18E4u;
    {
        const bool branch_taken_0x1a18e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A18E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A18E4u;
            // 0x1a18e8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a18e4) {
            ctx->pc = 0x1A1900u;
            goto label_1a1900;
        }
    }
    ctx->pc = 0x1A18ECu;
label_1a18ec:
    // 0x1a18ec: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1a18ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1a18f0: 0x28830006  slti        $v1, $a0, 0x6
    ctx->pc = 0x1a18f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1a18f4: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1A18F4u;
    {
        const bool branch_taken_0x1a18f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A18F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A18F4u;
            // 0x1a18f8: 0x24a5006c  addiu       $a1, $a1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a18f4) {
            ctx->pc = 0x1A18ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a18ac;
        }
    }
    ctx->pc = 0x1A18FCu;
label_1a18fc:
    // 0x1a18fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a18fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a1900:
    // 0x1a1900: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1900u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1900u;
            // 0x1a1904: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A1908u;
}
