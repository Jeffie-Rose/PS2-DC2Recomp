#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchCopyModel__6CSceneFi
// Address: 0x2c9980 - 0x2c9a5c
void SearchCopyModel__6CSceneFi_0x2c9980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchCopyModel__6CSceneFi_0x2c9980");
#endif

    switch (ctx->pc) {
        case 0x2c99a8u: goto label_2c99a8;
        case 0x2c99c0u: goto label_2c99c0;
        case 0x2c99ccu: goto label_2c99cc;
        case 0x2c99e0u: goto label_2c99e0;
        case 0x2c99f0u: goto label_2c99f0;
        case 0x2c9a18u: goto label_2c9a18;
        default: break;
    }

    ctx->pc = 0x2c9980u;

    // 0x2c9980: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c9980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c9984: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2c9984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2c9988: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c9988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2c998c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c998cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c9990: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2c9990u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9994: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c9994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c9998: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2c9998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c999c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c999cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c99a0: 0xc0c65c4  jal         func_319710
    ctx->pc = 0x2C99A0u;
    SET_GPR_U32(ctx, 31, 0x2C99A8u);
    ctx->pc = 0x2C99A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C99A0u;
            // 0x2c99a4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x319710u;
    if (runtime->hasFunction(0x319710u)) {
        auto targetFn = runtime->lookupFunction(0x319710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C99A8u; }
        if (ctx->pc != 0x2C99A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetVillagerInfo__Fi_0x319710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C99A8u; }
        if (ctx->pc != 0x2C99A8u) { return; }
    }
    ctx->pc = 0x2C99A8u;
label_2c99a8:
    // 0x2c99a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c99a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c99ac: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C99ACu;
    {
        const bool branch_taken_0x2c99ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C99B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C99ACu;
            // 0x2c99b0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c99ac) {
            ctx->pc = 0x2C99BCu;
            goto label_2c99bc;
        }
    }
    ctx->pc = 0x2C99B4u;
    // 0x2c99b4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2C99B4u;
    {
        const bool branch_taken_0x2c99b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C99B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C99B4u;
            // 0x2c99b8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c99b4) {
            ctx->pc = 0x2C9A3Cu;
            goto label_2c9a3c;
        }
    }
    ctx->pc = 0x2C99BCu;
label_2c99bc:
    // 0x2c99bc: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x2c99bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_2c99c0:
    // 0x2c99c0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c99c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c99c4: 0xc0a0cd0  jal         func_283340
    ctx->pc = 0x2C99C4u;
    SET_GPR_U32(ctx, 31, 0x2C99CCu);
    ctx->pc = 0x2C99C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C99C4u;
            // 0x2c99c8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283340u;
    if (runtime->hasFunction(0x283340u)) {
        auto targetFn = runtime->lookupFunction(0x283340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C99CCu; }
        if (ctx->pc != 0x2C99CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSceneCharacter__6CSceneFi_0x283340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C99CCu; }
        if (ctx->pc != 0x2C99CCu) { return; }
    }
    ctx->pc = 0x2C99CCu;
label_2c99cc:
    // 0x2c99cc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2c99ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c99d0: 0x12600015  beqz        $s3, . + 4 + (0x15 << 2)
    ctx->pc = 0x2C99D0u;
    {
        const bool branch_taken_0x2c99d0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C99D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C99D0u;
            // 0x2c99d4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c99d0) {
            ctx->pc = 0x2C9A28u;
            goto label_2c9a28;
        }
    }
    ctx->pc = 0x2C99D8u;
    // 0x2c99d8: 0xc0a0ed8  jal         func_283B60
    ctx->pc = 0x2C99D8u;
    SET_GPR_U32(ctx, 31, 0x2C99E0u);
    ctx->pc = 0x2C99DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C99D8u;
            // 0x2c99dc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C99E0u; }
        if (ctx->pc != 0x2C99E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C99E0u; }
        if (ctx->pc != 0x2C99E0u) { return; }
    }
    ctx->pc = 0x2C99E0u;
label_2c99e0:
    // 0x2c99e0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2C99E0u;
    {
        const bool branch_taken_0x2c99e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c99e0) {
            ctx->pc = 0x2C9A28u;
            goto label_2c9a28;
        }
    }
    ctx->pc = 0x2C99E8u;
    // 0x2c99e8: 0xc0c65c4  jal         func_319710
    ctx->pc = 0x2C99E8u;
    SET_GPR_U32(ctx, 31, 0x2C99F0u);
    ctx->pc = 0x2C99ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C99E8u;
            // 0x2c99ec: 0x8e64003c  lw          $a0, 0x3C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x319710u;
    if (runtime->hasFunction(0x319710u)) {
        auto targetFn = runtime->lookupFunction(0x319710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C99F0u; }
        if (ctx->pc != 0x2C99F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetVillagerInfo__Fi_0x319710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C99F0u; }
        if (ctx->pc != 0x2C99F0u) { return; }
    }
    ctx->pc = 0x2C99F0u;
label_2c99f0:
    // 0x2c99f0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2C99F0u;
    {
        const bool branch_taken_0x2c99f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c99f0) {
            ctx->pc = 0x2C9A28u;
            goto label_2c9a28;
        }
    }
    ctx->pc = 0x2C99F8u;
    // 0x2c99f8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2c99f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c99fc: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C99FCu;
    {
        const bool branch_taken_0x2c99fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c99fc) {
            ctx->pc = 0x2C9A28u;
            goto label_2c9a28;
        }
    }
    ctx->pc = 0x2C9A04u;
    // 0x2c9a04: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2c9a04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2c9a08: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C9A08u;
    {
        const bool branch_taken_0x2c9a08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9a08) {
            ctx->pc = 0x2C9A28u;
            goto label_2c9a28;
        }
    }
    ctx->pc = 0x2C9A10u;
    // 0x2c9a10: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x2C9A10u;
    SET_GPR_U32(ctx, 31, 0x2C9A18u);
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9A18u; }
        if (ctx->pc != 0x2C9A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9A18u; }
        if (ctx->pc != 0x2C9A18u) { return; }
    }
    ctx->pc = 0x2C9A18u;
label_2c9a18:
    // 0x2c9a18: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C9A18u;
    {
        const bool branch_taken_0x2c9a18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9A18u;
            // 0x2c9a1c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9a18) {
            ctx->pc = 0x2C9A28u;
            goto label_2c9a28;
        }
    }
    ctx->pc = 0x2C9A20u;
    // 0x2c9a20: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C9A20u;
    {
        const bool branch_taken_0x2c9a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9A20u;
            // 0x2c9a24: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9a20) {
            ctx->pc = 0x2C9A40u;
            goto label_2c9a40;
        }
    }
    ctx->pc = 0x2C9A28u;
label_2c9a28:
    // 0x2c9a28: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2c9a28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2c9a2c: 0x2a220018  slti        $v0, $s1, 0x18
    ctx->pc = 0x2c9a2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x2c9a30: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x2C9A30u;
    {
        const bool branch_taken_0x2c9a30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9A30u;
            // 0x2c9a34: 0x26320008  addiu       $s2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9a30) {
            ctx->pc = 0x2C99C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c99c0;
        }
    }
    ctx->pc = 0x2C9A38u;
    // 0x2c9a38: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2c9a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2c9a3c:
    // 0x2c9a3c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2c9a3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2c9a40:
    // 0x2c9a40: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2c9a40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c9a44: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c9a44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c9a48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c9a48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c9a4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c9a4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c9a50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c9a50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c9a54: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9A54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9A54u;
            // 0x2c9a58: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C9A5Cu;
}
