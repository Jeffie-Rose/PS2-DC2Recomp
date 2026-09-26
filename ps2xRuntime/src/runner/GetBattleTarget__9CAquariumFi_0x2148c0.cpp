#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetBattleTarget__9CAquariumFi
// Address: 0x2148c0 - 0x214960
void GetBattleTarget__9CAquariumFi_0x2148c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetBattleTarget__9CAquariumFi_0x2148c0");
#endif

    switch (ctx->pc) {
        case 0x2148ecu: goto label_2148ec;
        case 0x2148f0u: goto label_2148f0;
        case 0x21490cu: goto label_21490c;
        default: break;
    }

    ctx->pc = 0x2148c0u;

    // 0x2148c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2148c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2148c4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2148c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2148c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2148c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2148cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2148ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2148d0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2148d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2148d4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2148d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2148d8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2148d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2148dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2148dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2148e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2148e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2148e4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2148e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2148e8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2148e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2148ec:
    // 0x2148ec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2148ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2148f0:
    // 0x2148f0: 0x1233000a  beq         $s1, $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x2148F0u;
    {
        const bool branch_taken_0x2148f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 19));
        ctx->pc = 0x2148F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2148F0u;
            // 0x2148f4: 0x2921021  addu        $v0, $s4, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2148f0) {
            ctx->pc = 0x21491Cu;
            goto label_21491c;
        }
    }
    ctx->pc = 0x2148F8u;
    // 0x2148f8: 0x8c4202b4  lw          $v0, 0x2B4($v0)
    ctx->pc = 0x2148f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 692)));
    // 0x2148fc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2148FCu;
    {
        const bool branch_taken_0x2148fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2148FCu;
            // 0x214900: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2148fc) {
            ctx->pc = 0x21491Cu;
            goto label_21491c;
        }
    }
    ctx->pc = 0x214904u;
    // 0x214904: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x214904u;
    SET_GPR_U32(ctx, 31, 0x21490Cu);
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21490Cu; }
        if (ctx->pc != 0x21490Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21490Cu; }
        if (ctx->pc != 0x21490Cu) { return; }
    }
    ctx->pc = 0x21490Cu;
label_21490c:
    // 0x21490c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21490Cu;
    {
        const bool branch_taken_0x21490c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x214910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21490Cu;
            // 0x214910: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21490c) {
            ctx->pc = 0x21491Cu;
            goto label_21491c;
        }
    }
    ctx->pc = 0x214914u;
    // 0x214914: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x214914u;
    {
        const bool branch_taken_0x214914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214914u;
            // 0x214918: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214914) {
            ctx->pc = 0x214944u;
            goto label_214944;
        }
    }
    ctx->pc = 0x21491Cu;
label_21491c:
    // 0x21491c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21491cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x214920: 0x2a220006  slti        $v0, $s1, 0x6
    ctx->pc = 0x214920u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x214924: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x214924u;
    {
        const bool branch_taken_0x214924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x214928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214924u;
            // 0x214928: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214924) {
            ctx->pc = 0x2148F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2148f0;
        }
    }
    ctx->pc = 0x21492Cu;
    // 0x21492c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21492cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x214930: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x214930u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x214934: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x214934u;
    {
        const bool branch_taken_0x214934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x214938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214934u;
            // 0x214938: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214934) {
            ctx->pc = 0x2148ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2148ec;
        }
    }
    ctx->pc = 0x21493Cu;
    // 0x21493c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x21493cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x214940: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x214940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_214944:
    // 0x214944: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x214944u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x214948: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x214948u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21494c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21494cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x214950: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x214950u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214954: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x214954u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214958: 0x3e00008  jr          $ra
    ctx->pc = 0x214958u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21495Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214958u;
            // 0x21495c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x214960u;
}
